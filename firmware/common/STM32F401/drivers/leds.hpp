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

using namespace STM32F401;
using namespace std::chrono_literals;

namespace neuron
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
		rcc.ahb1enr <<= rcc_p::ahb1enr_r::gpioaen_f() || atomic;
		rcc.apb1enr <<= rcc_p::apb1enr_r::tim5en_f() || atomic;

		gpioa.bsrr = gpioa_p::bsrr_r::bs0_f() | gpioa_p::bsrr_r::bs1_f();
		gpioa.pupdr <<= gpioa_p::pupdr_r::pupdr0_f(0b00) || gpioa_p::pupdr_r::pupdr1_f(0b00) || atomic;
		gpioa.ospeedr <<= gpioa_p::ospeedr_r::ospeedr0_f(0b01) || gpioa_p::ospeedr_r::ospeedr1_f(0b01) || atomic;
		gpioa.otyper <<= gpioa_p::otyper_r::ot0_f() || gpioa_p::otyper_r::ot1_f() || atomic;
		gpioa.afrl <<= gpioa_p::afrl_r::afrl0_f(2) || gpioa_p::afrl_r::afrl1_f(2) || atomic;
		gpioa.moder <<= gpioa_p::moder_r::moder0_f(0b10) || gpioa_p::moder_r::moder1_f(0b10) || atomic;

		tim5.cr1 = tim5_p::cr1_r::ResetValue;
		tim5.cr2 = tim5_p::cr2_r::ResetValue;
		tim5.ccmr1_output = tim5_p::ccmr1_output_r::oc1pe_f() | tim5_p::ccmr1_output_r::oc2pe_f() | tim5_p::ccmr1_output_r::oc1m_f(0b110) | tim5_p::ccmr1_output_r::oc2m_f(0b110);
		tim5.ccer = tim5_p::ccer_r::cc1e_f() | tim5_p::ccer_r::cc2e_f() | tim5_p::ccer_r::cc1p_f() | tim5_p::ccer_r::cc2p_f();
		tim5.psc = tim5_p::psc_r::psc_f(7); // base clock is 84MHz, tim5 clock is 10.5MHz, at 65536 ticks that's roughly 160 cycles per second
		tim5.arr = tim5_p::arr_r::arr_l_f::Range;

		tim5.ccr1 = tim5_p::ccr1_r::ResetValue;
		tim5.ccr2 = tim5_p::ccr2_r::ResetValue;
		tim5.cnt = tim5_p::cnt_r::ResetValue;
		tim5.egr = tim5_p::egr_r::ug_f();
		tim5.cr1 = tim5_p::cr1_r::cen_f();

		m_task.start(updateTaskProc);
	}



private:

	static constexpr float RedMax = 25000.f;
	static constexpr float GreenMax = 30000.f;
	static constexpr uint32_t TimeSlots = 8;
	static constexpr float SlotTime = .3f;
	static constexpr float Pi = std::acos(-1.f);

	static inline volatile mode s_mode = mode::off;
	static inline volatile green s_green = green::off;
	static inline volatile uint32_t s_red = 0;
	static inline opsy::Task<256> m_task;

	static float setGreen(float value)
	{
		tim5.ccr1 = tim5_p::ccr1_r::ccr1_l_f(static_cast<uint16_t>(value * value * value * GreenMax));
		return value;
	}

	static float setRed(float value)
	{
		tim5.ccr2 = tim5_p::ccr2_r::ccr2_l_f(static_cast<uint16_t>(value * value * value * RedMax));
		return value;
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
				setRed(setGreen(0.f));
				break;
			case mode::blinkFast:
				setRed(1.f - setGreen(.5f + .5f * std::sin(time * 14.f)));
				break;
			case mode::blinkSlow:
				setRed(1.f - setGreen(.5f + .5f * std::sin(time * 7.f)));
				break;
			case mode::blinkSync:
				setRed(setGreen(.5f + .5f * std::sin(time * 14.f)));
				break;
			case mode::separate:
			{
				switch(s_green)
				{
				default:
				case green::off:
					setGreen(0.f);
					break;
				case green::on:
					setGreen(1.f);
					break;
				case green::blinkSlow:
					setGreen(.5f + .5f * std::sin(time * 15.f));
					break;
				case green::blinkFast:
					setGreen(.5f + .5f * std::sin(time * 50.f));
					break;
				}

				auto slot = static_cast<uint32_t>(time / SlotTime) % TimeSlots;

				if (((slot & 1) == 0) || (s_red * 2 < slot))
					setRed(0.f);
				else
					setRed(.5f + .5f * std::sin((time - static_cast<float>(slot) * SlotTime) / SlotTime * Pi));
			}

			}

		}
	}
};

}
