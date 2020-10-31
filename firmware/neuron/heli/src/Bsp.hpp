#pragma once

#include <chrono>

#include <rcc.hpp>
#include <pwr.hpp>
#include <flash.hpp>
#include <gpio.hpp>
#include <scb.hpp>

#include <CortexM.hpp>
#include <drivers/mpuexti.hpp>

#include <drivers/mpuspi.hpp>

#include <mpu9250.hpp>

#include <opsy.hpp>

using namespace STM32F401;
using namespace std::chrono_literals;

using sensor = mpu9250<neuron::mpu_spi>;

constexpr opsy::IsrPriority MpuPriority = opsy::IsrPriority(0xFF);

class Bsp
{
public:

	static void initialize()
	{
		opsy::CortexM::enableFpu();
		startClock(8, 336, 4, 7);

		m_task.start([]()
		{
			assert(sensor::selfTest<neuron::mpu_exti>(MpuPriority));
			/*auto found = sensor::init(MpuPriority);
			assert(found);
			sensor::setGyro(GyroRange::r1000, GyroFilterOdr::lp3600_8k, 0);
			//sensor::setIntPin(false, false, StatusClear::any_read, true);

			Vector<3> gyro;
			while(true)
			{
				opsy::sleep_for(10ms);
				gyro = sensor::getGyro(GyroRange::r1000);
			}*/
		});
	}

	static bool startClock(uint8_t pllM, uint16_t pllN, uint8_t pllP, uint8_t pllQ)
	{
		constexpr uint32_t timeout = 10000;

		rcc.cr |= rcc_p::cr_r::hsion_f(); // enable HSI clock (internal RC)
		rcc.cfgr = 0; // resets clock configuration
		rcc.cr &= ~(rcc_p::cr_r::pllon_f() | rcc_p::cr_r::csson_f() | rcc_p::cr_r::hseon_f()); // disable PLL, CSS, and HSE (external oscillator)
		rcc.pllcfgr = rcc_p::pllcfgr_r::ResetValue; // reset value of PLL configuration register
		rcc.cr &= ~rcc_p::cr_r::hsebyp_f(); // reset HSE bypass
		rcc.cir = 0; // reset all clock interrupts

		rcc.cr |= rcc_p::cr_r::hseon_f(); // enable HSE

		uint32_t i = 0;
		while (!rcc.cr.load().hserdy()) // wait for the HSE to be ready
			if (i++ > timeout) // if it is not return false, indicating the main clock cannot be used
				return false;

		rcc.apb1enr |= rcc_p::apb1enr_r::pwren_f(); // enable power module clock
		pwr.cr |= pwr_p::cr_r::vos_f(0b10); // enable internal voltage regulator, scale 2

		rcc.cfgr |= rcc_p::cfgr_r::hpre_f(0) | rcc_p::cfgr_r::ppre2_f(0) | rcc_p::cfgr_r::ppre1_f(0b100); // set APB2 as HCLK and APB1 as HCLK/2
		rcc.pllcfgr = rcc_p::pllcfgr_r::pllm_f(pllM) | rcc_p::pllcfgr_r::plln_f(pllN) | rcc_p::pllcfgr_r::pllp_f(static_cast<uint8_t>(pllP / 2 - 1)) | rcc_p::pllcfgr_r::pllq_f(pllQ) | rcc_p::pllcfgr_r::pllsrc_f(); // set the main PLL coefficients with HSE as input
		rcc.cr |= rcc_p::cr_r::pllon_f(); // enable the main PLL

		i = 0;
		while (!rcc.cr.load().pllrdy()) // wait for the PLL to be ready
			if (i++ > timeout) // if it is not return false, indicating the main clock cannot be used
				return false;

		flash.acr = flash_p::acr_r::prften_f() | flash_p::acr_r::icen_f() | flash_p::acr_r::dcen_f() | flash_p::acr_r::latency_f(2); // configure flash access (2 wait state), prefetch, instruction and data cache enables.
		rcc.cfgr |= rcc_p::cfgr_r::sw_f(0b10); // set the PLL as main clock source

		i = 0;
		while (rcc.cfgr.load().sws() != rcc_p::cfgr_r::sws_f(0b10)) // wait for the PLL to be in use
			if (i++ > timeout) // if it is not return false, indicating the main clock cannot be used
				return false;

		return true;
	}

private:

	static inline opsy::Task<512> m_task;
};
