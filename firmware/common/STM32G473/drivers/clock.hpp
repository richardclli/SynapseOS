#pragma once

#include <cstdint>

#include "../rcc.hpp"
#include "../pwr.hpp"
#include "../flash.hpp"


extern "C" uint32_t SystemCoreClock;

using namespace STM32G473XX;

namespace neuron2
{
class clock
{
public:

	static bool startClock(uint8_t pllM, uint8_t pllN, uint8_t pllR)
	{
		constexpr uint32_t timeout = 10000;

		rcc.apb1enr1 |= rcc_p::apb1enr1_r::pwren_f(); // enable power module clock
		rcc.cr |= rcc_p::cr_r::hsion_f(); // enable HSI clock (should be on by default)

		uint32_t i = 0;
		while(!rcc.cr.load().hsirdy()) // wait for HSI to stabilize
			if(i++ > timeout)
				return false;

		rcc.cfgr <<= rcc_p::cfgr_r::sws_f(0b01); // select HSI16 as clock source

		while(rcc.cfgr.load().sws() != rcc_p::cfgr_r::sws_f(0b01)) // wait for HSI to be used as clock source
			if(i++ > timeout)
				return false;

		rcc.cfgr = rcc_p::cfgr_r::ResetValue; // reset configuration (already running on HSI16)
		rcc.cr <<= rcc_p::cr_r::pllsyson_f(false); // disable PLL

		rcc.pllsyscfgr <<= 	rcc_p::pllsyscfgr_r::pllsysr_f(static_cast<uint8_t>(pllR / 2 - 1)) ||
							rcc_p::pllsyscfgr_r::pllpen_f(false) ||
							rcc_p::pllsyscfgr_r::pllsysqen_f(false) ||
							rcc_p::pllsyscfgr_r::pllsysren_f() ||
							rcc_p::pllsyscfgr_r::pllsysn_f(pllN) ||
							rcc_p::pllsyscfgr_r::pllsysm_f(static_cast<uint8_t>(pllM-1)) ||
							rcc_p::pllsyscfgr_r::pllsrc_f(0b10); // setup PLL configuration

		pwr.cr1 <<= pwr_p::cr1_r::vos_f(0b10);

		flash.acr <<= flash_p::acr_r::latency_f(4) || flash_p::acr_r::dcen_f() || flash_p::acr_r::icen_f() || flash_p::acr_r::prften_f();
		rcc.cr |= rcc_p::cr_r::pllsyson_f();

		while(!rcc.cr.load().pllsysrdy()) // wait for PLL to stabilize
			if(i++ > timeout)
				return false;

		rcc.cfgr <<= rcc_p::cfgr_r::sw_f(0b11); // select pll as system clock

		while(rcc.cfgr.load().sws() != rcc_p::cfgr_r::sws_f(0b11)) // wait for PLL to be used as clock source
			if(i++ > timeout)
				return false;

		constexpr uint32_t hsi16Clock = 16000000;

		SystemCoreClock = hsi16Clock / pllM * pllN / pllR;

		return true;
	}
};
}
