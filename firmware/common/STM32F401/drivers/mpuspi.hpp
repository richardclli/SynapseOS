#pragma once

#include <algorithm>
#include <cassert>
#include <cstdint>

#include <CortexM.hpp>
#include <PriorityMutex.hpp>
#include <ConditionVariable.hpp>

#include "../dma.hpp"
#include "../gpio.hpp"
#include "../rcc.hpp"
#include "../spi.hpp"
#include "../interrupts.hpp"

extern "C" uint32_t SystemCoreClock;

using namespace STM32F401;

namespace neuron
{

class mpu_spi
{
public:

	static void init(opsy::IsrPriority priority)
	{
		rcc.ahb1enr <<= rcc_p::ahb1enr_r::gpioaen_f() || rcc_p::ahb1enr_r::dma2en_f() || atomic; // enable gpioa and dma2
		rcc.apb2enr <<= rcc_p::apb2enr_r::spi1en_f() || atomic; // enable spi1 and syscfg

		gpioa.bsrr = gpioa_p::bsrr_r::bs4_f(); // set PA4 (CS)
		gpioa.pupdr <<= gpioa_p::pupdr_r::pupdr4_f(0b00) || atomic; // disable pull-up and pull-down on PA4 (CS)
		gpioa.ospeedr <<= gpioa_p::ospeedr_r::ospeedr4_f(0b11) || atomic; //
		gpioa.otyper <<= gpioa_p::otyper_r::ot4_f(false) || atomic;
		gpioa.moder <<= gpioa_p::moder_r::moder4_f(0b01) || atomic;

		spi1.cr1 = 	spi_p::cr1_r::ssm_f() |
					spi_p::cr1_r::ssi_f() |
					spi_p::cr1_r::spe_f() |
					spi_p::cr1_r::mstr_f() |
					spi_p::cr1_r::cpol_f() |
					spi_p::cr1_r::cpha_f() |
					spi_p::cr1_r::br_f(0b111);

		spi1.cr2 = spi_p::cr2_r::txdmaen_f() | spi_p::cr2_r::rxdmaen_f();

		gpioa.pupdr <<= 	gpioa_p::pupdr_r::pupdr5_f(0b00) ||
							gpioa_p::pupdr_r::pupdr6_f(0b00) ||
							gpioa_p::pupdr_r::pupdr7_f(0b00) ||
							atomic;

		gpioa.ospeedr <<= 	gpioa_p::ospeedr_r::ospeedr5_f(0b11) ||
							gpioa_p::ospeedr_r::ospeedr6_f(0b11) ||
							gpioa_p::ospeedr_r::ospeedr7_f(0b11) ||
							atomic;

		gpioa.otyper <<= 	gpioa_p::otyper_r::ot5_f(false) ||
							gpioa_p::otyper_r::ot6_f(false) ||
							gpioa_p::otyper_r::ot7_f(false) ||
							atomic;

		gpioa.afrl <<= 	gpioa_p::afrl_r::afrl5_f(5) ||
						gpioa_p::afrl_r::afrl6_f(5) ||
						gpioa_p::afrl_r::afrl7_f(5) ||
						atomic;

		gpioa.moder <<= gpioa_p::moder_r::moder5_f(0b10) ||
						gpioa_p::moder_r::moder6_f(0b10) ||
						gpioa_p::moder_r::moder7_f(0b10) ||
						atomic;

		dma2.s3cr = dma_p::s3cr_r::chsel_f(3) | dma_p::s3cr_r::minc_f() | dma_p::s3cr_r::dir_f(1);
		dma2.s3par = dma_p::s3par_r::pa_f(reinterpret_cast<uint32_t>(&spi1.dr));
		dma2.s3fcr = 0;

		opsy::CortexM::setIsrHandler(static_cast<uint32_t>(DMA2_Stream0_IRQn), isrHandler);
		opsy::CortexM::setPriority(static_cast<uint32_t>(DMA2_Stream0_IRQn), priority);
		opsy::CortexM::enableInterrupt(static_cast<uint32_t>(DMA2_Stream0_IRQn));

		s_mutex = opsy::PriorityMutex(priority);
		s_condition = opsy::ConditionVariable(priority);

		dma2.s0cr = dma_p::s0cr_r::chsel_f(3) | dma_p::s0cr_r::tcie_f() | dma_p::s0cr_r::minc_f();
		dma2.s0par = dma_p::s0par_r::pa_f(reinterpret_cast<uint32_t>(&spi1.dr));
		dma2.s3fcr = 0;
	}

	static uint32_t setSpeed(uint32_t maximum)
	{
		std::clamp(maximum, SystemCoreClock / 2, SystemCoreClock / 256);
		uint32_t ratio = SystemCoreClock / maximum;
		uint8_t divider = static_cast<uint8_t>(8 * sizeof(uint32_t) - __builtin_clz(ratio - 1));
		spi1.cr1 <<= spi_p::cr1_r::br_f(divider);
		return SystemCoreClock / (1 << divider);
	}

	static void transfer(const uint8_t* txBuffer, uint8_t* rxBuffer, uint16_t length)
	{
		assert(gpioa.idr.load().idr4());

		const std::lock_guard<opsy::PriorityMutex> lock{s_mutex};

		gpioa.bsrr = gpioa_p::bsrr_r::br4_f();
		dma2.lifcr = 	dma_p::lifcr_r::ctcif3_f() |
						dma_p::lifcr_r::chtif3_f() |
						dma_p::lifcr_r::cfeif3_f() |
						dma_p::lifcr_r::ctcif0_f() |
						dma_p::lifcr_r::chtif0_f() |
						dma_p::lifcr_r::cfeif0_f();

		dma2.s3m0ar = dma_p::s3m0ar_r::m0a_f(reinterpret_cast<uint32_t>(txBuffer == nullptr ? &Dummy : txBuffer));
		dma2.s3cr <<= dma_p::s3cr_r::minc_f(txBuffer != nullptr);
		dma2.s0m0ar = dma_p::s0m0ar_r::m0a_f(reinterpret_cast<uint32_t>(rxBuffer == nullptr ? &Dummy : rxBuffer));
		dma2.s0cr <<= dma_p::s0cr_r::minc_f(rxBuffer != nullptr);

		dma2.s3ndtr = dma_p::s3ndtr_r::ndt_f(length);
		dma2.s0ndtr = dma_p::s0ndtr_r::ndt_f(length);

		dma2.s0cr |= dma_p::s0cr_r::en_f();
		dma2.s3cr |= dma_p::s3cr_r::en_f();

		s_condition.wait(s_mutex);

		gpioa.bsrr = gpioa_p::bsrr_r::bs4_f();
	}

	static void isrHandler()
	{
		dma2.lifcr = 	dma_p::lifcr_r::ctcif3_f() |
						dma_p::lifcr_r::chtif3_f() |
						dma_p::lifcr_r::cfeif3_f() |
						dma_p::lifcr_r::ctcif0_f() |
						dma_p::lifcr_r::chtif0_f() |
						dma_p::lifcr_r::cfeif0_f();

		s_condition.notify_one();
	}

private:

	static const inline uint8_t Dummy = 0xFF;
	static inline opsy::PriorityMutex s_mutex{};
	static inline opsy::ConditionVariable s_condition{};
};

}
