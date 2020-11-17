#pragma once

#include <cstdint>
#include <optional>

#include "../rcc.hpp"
#include "../gpio.hpp"
#include "../tim.hpp"

extern "C" uint32_t SystemCoreClock;

namespace neuron
{
class governor
{
public:

	static void init()
	{
		rcc.ahb1enr <<= rcc_p::ahb1enr_r::gpioaen_f() || atomic;
		rcc.apb1enr <<= rcc_p::apb1enr_r::tim2en_f() || atomic;

		tim2.cr1 = tim2_p::cr1_r::ResetValue;
		tim2.ccmr1_input = tim2_p::ccmr1_input_r::cc1s_f(0b01) | tim2_p::ccmr1_input_r::ic1f_f(0b1111);
		tim2.ccmr2_input = tim2_p::ccmr2_input_r::ResetValue;
		tim2.ccer = tim2_p::ccer_r::cc1p_f() | tim2_p::ccer_r::cc1e_f();
		tim2.smcr = tim2_p::smcr_r::ts_f(0b101) | tim2_p::smcr_r::sms_f(0b100);
		tim2.psc = tim2_p::psc_r::ResetValue;
		tim2.arr = SystemCoreClock;
		tim2.cnt = tim2_p::cnt_r::ResetValue;
		tim2.egr = tim2_p::egr_r::ug_f();

		gpioa.pupdr <<= gpioa_p::pupdr_r::pupdr15_f(0b00) || atomic;
		gpioa.afrh <<= gpioa_p::afrh_r::afrh15_f(15) || atomic;
		gpioa.moder <<= gpioa_p::moder_r::moder15_f(0b10) || atomic;

		tim2.cr1 = tim2_p::cr1_r::urs_f() | tim2_p::cr1_r::cen_f();
	}

	static std::optional<float> frequency()
	{
		const auto status = tim2.sr.load();
		const auto counter = tim2.ccr1.load();
		tim2.sr = tim2_p::sr_r::ResetValue;

		if(status.uif())
			return 0.f;

		if(status.cc1if())
			return static_cast<float>(SystemCoreClock) / static_cast<float>(counter.value());

		return std::nullopt;
	}

	static bool status()
	{
		return gpioa.idr.load().idr15();
	}



private:

};
}
