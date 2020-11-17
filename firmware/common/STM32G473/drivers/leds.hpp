#pragma once

#include <cstdint>
#include <chrono>
#include <math.h>

#include <Task.hpp>
#include <opsy.hpp>
#include <Scheduler.hpp>

#include "../rcc.hpp"
#include "../gpio.hpp"
#include "../tim.hpp"

using namespace STM32G473XX;
using namespace std::chrono_literals;

namespace neuron2
{

class leds
{
public:

	enum class mode
	{
		blinkSync, blinkSlow, blinkFast, separate, off
	};

	enum class green
	{
		off, blinkSlow, blinkFast, on
	};

	static void set(mode m)
	{
		s_mode = m;
	}

	static void set(green g)
	{
		s_green = g;
	}

	static void set(uint32_t r)
	{
		s_red = r;
	}

	static void init()
	{
		rcc.ahb2enr <<= rcc_p::ahb2enr_r::gpiocen_f() || rcc_p::ahb2enr_r::gpioaen_f() || rcc_p::ahb2enr_r::gpioben_f() || atomic;
		rcc.apb1enr1 <<= rcc_p::apb1enr1_r::tim3en_f() || atomic;

		gpioa.afrl <<= gpioa_p::afrl_r::afrl4_f(2) || atomic;
		gpiob.afrl <<= gpiob_p::afrl_r::afrl0_f(2) || gpiob_p::afrl_r::afrl1_f(2) || atomic;
		gpioc.afrl <<= gpioc_p::afrl_r::afrl6_f(2) || atomic;

		setupPin<gpioa_p, 4>(gpioa);
		setupPin<gpiob_p, 0>(gpiob);
		setupPin<gpiob_p, 1>(gpiob);
		setupPin<gpioc_p, 6>(gpioc);

		tim3.cr1 = tim2_p::cr1_r::ResetValue;
		tim3.cr2 = tim2_p::cr2_r::ResetValue;
		tim3.ccmr1_output = tim2_p::ccmr1_output_r::oc1pe_f() | tim2_p::ccmr1_output_r::oc2pe_f() | tim2_p::ccmr1_output_r::oc1m_f(0b110) | tim2_p::ccmr1_output_r::oc2m_f(0b110);
		tim3.ccmr2_output = tim2_p::ccmr2_output_r::oc3pe_f() | tim2_p::ccmr2_output_r::oc4pe_f() | tim2_p::ccmr2_output_r::oc3m_f(0b110) | tim2_p::ccmr2_output_r::oc4m_f(0b110);
		tim3.ccer = tim2_p::ccer_r::cc1e_f() | tim2_p::ccer_r::cc2e_f() | tim2_p::ccer_r::cc3e_f() | tim2_p::ccer_r::cc4e_f() |
				tim2_p::ccer_r::cc1p_f() | tim2_p::ccer_r::cc2p_f() | tim2_p::ccer_r::cc3p_f() | tim2_p::ccer_r::cc4p_f();
		tim3.psc = tim2_p::psc_r::psc_f(7); // base clock is 160MHz, tim3 clock is 20MHz, at 65536 ticks that's roughly 300 cycles per second
		tim3.arr = tim2_p::arr_r::arr_f::Range;

		tim3.ccr1 = tim2_p::ccr1_r::ResetValue;
		tim3.ccr2 = tim2_p::ccr2_r::ResetValue;
		tim3.ccr3 = tim2_p::ccr2_r::ResetValue;
		tim3.ccr4 = tim2_p::ccr2_r::ResetValue;
		tim3.cnt = tim2_p::cnt_r::ResetValue;
		tim3.egr = tim2_p::egr_r::ug_f();
		tim3.cr1 = tim2_p::cr1_r::cen_f();

		m_task.start(updateTaskProc);
	}



private:

	static constexpr float RedMax = 20000.f;
	static constexpr float GreenMax = 30000.f;
	static constexpr uint32_t TimeSlots = 8;
	static constexpr float SlotTime = .3f;
	static constexpr float Pi = std::acos(-1.f);

	static inline volatile mode s_mode = mode::off;
	static inline volatile green s_green = green::off;
	static inline volatile uint32_t s_red = 0;
	static inline opsy::Task<256> m_task;

	template<typename GPIO, std::size_t Pin>
	static void setupPin(GPIO& gpio)
	{
		gpio.bsrr = typename GPIO::bsrr_r::template bs_v<Pin>();
		gpio.pupdr <<= typename GPIO::pupdr_r::template pupdr_v<Pin>(0b00) || atomic;
		gpio.ospeedr <<= typename GPIO::ospeedr_r::template ospeedr_v<Pin>(0b01) || atomic;
		gpio.otyper <<= typename GPIO::otyper_r::template ot_v<Pin>() || atomic;
		gpio.moder <<= typename GPIO::moder_r::template moder_v<Pin>(0b10) || atomic;
	}

	static void setRight(float red = 0.f, float grn = 0.f)
	{
		tim3.ccr1 = tim2_p::ccr1_r::ccr1_f(static_cast<uint16_t>(red * red * red * RedMax));
		tim3.ccr2 = tim2_p::ccr2_r::ccr2_f(static_cast<uint16_t>(grn * grn * grn * GreenMax));
	}

	static void setLeft(float red = 0.f, float grn = 0.f)
	{
		tim3.ccr3 = tim2_p::ccr3_r::ccr3_f(static_cast<uint16_t>(red * red * red * RedMax));
		tim3.ccr4 = tim2_p::ccr4_r::ccr4_f(static_cast<uint16_t>(grn * grn * grn * GreenMax));
	}


	static void updateTaskProc()
	{
		auto now = opsy::Scheduler::now();

		while(true)
		{
			now += 10ms;
			opsy::sleep_until(now);
			float time = static_cast<float>(now.time_since_epoch().count()) * 0.001f;

			switch(s_mode)
			{
			default:
			case mode::off:
				setLeft();
				setRight();
				break;
			case mode::blinkFast:
			{
				float p = .5f + .5f * std::sin(time * 14.f);
				float n = 1.f - p;
				setLeft(p, n);
				setRight(n, p);
				break;
			}
			case mode::blinkSlow:
			{
				float p = .5f + .5f * std::sin(time * 7.f);
				float n = 1.f - p;
				setLeft(p, n);
				setRight(n, p);
				break;
			}
			case mode::blinkSync:
			{
				float p = .5f + .5f * std::sin(time * 14.f);
				float n = 1.f - p;
				setLeft(n, p);
				setRight(n, p);
				break;
			}
			case mode::separate:
			{
				switch(s_green)
				{
				default:
				case green::off:
					setLeft();
					break;
				case green::on:
					setLeft(0.f, 1.f);
					break;
				case green::blinkSlow:
					setLeft(0.f, .5f + .5f * std::sin(time * 15.f));
					break;
				case green::blinkFast:
					setLeft(0.f, .5f + .5f * std::sin(time * 50.f));
					break;
				}

				auto slot = static_cast<uint32_t>(time / SlotTime) % TimeSlots;

				if (((slot & 1) == 0) || (s_red * 2 < slot))
				{
					setRight();
				}
				else
				{
					setRight(.5f + .5f * std::sin((time - static_cast<float>(slot) * SlotTime) / SlotTime * Pi), 0.f);
				}
			}

			}

		}
	}
};

}
