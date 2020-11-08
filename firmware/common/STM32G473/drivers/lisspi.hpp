#pragma once

#include <cstdint>
#include <algorithm>

#include <CortexM.hpp>
#include <PriorityMutex.hpp>
#include <ConditionVariable.hpp>

#include "../dma.hpp"
#include "../dmamux.hpp"
#include "../gpio.hpp"
#include "../rcc.hpp"
#include "../spi.hpp"
#include "../interrupts.hpp"


extern "C" uint32_t SystemCoreClock;

using namespace STM32G473XX;

namespace neuron2
{
class lisspi
{
public:

	static void init(opsy::IsrPriority priority)
	{
		rcc.ahb2enr <<= rcc_p::ahb2enr_r::gpioaen_f() || rcc_p::ahb2enr_r::gpioben_f() || atomic; // enable gpioa and gpiob
		rcc.ahb1enr <<= rcc_p::ahb1enr_r::dma2en_f() || rcc_p::ahb1enr_r::dmamuxen_f() || atomic; // enable dma2 and dmamux
		rcc.apb1enr1 <<= rcc_p::apb1enr1_r::spi2en_f() || atomic; // enable spi2

		gpioa.bsrr = gpioa_p::bsrr_r::bs8_f();
		gpioa.pupdr <<= gpioa_p::pupdr_r::pupdr8_f(0b00) || atomic;
		gpioa.ospeedr <<= gpioa_p::ospeedr_r::ospeedr8_f(0b11) || atomic;
		gpioa.otyper <<= gpioa_p::otyper_r::ot8_f(false) || atomic;
		gpioa.moder <<= gpioa_p::moder_r::moder8_f(0b01) || atomic;

		spi2.cr1 = 	spi4_p::cr1_r::ssm_f() |
					spi4_p::cr1_r::ssi_f() |
					spi4_p::cr1_r::spe_f() |
					spi4_p::cr1_r::mstr_f() |
					spi4_p::cr1_r::cpol_f() |
					spi4_p::cr1_r::cpha_f() |
					spi4_p::cr1_r::br_f(0b111);

		spi2.cr2 = spi4_p::cr2_r::txdmaen_f() | spi4_p::cr2_r::rxdmaen_f() | spi4_p::cr2_r::frxth_f();

		gpiob.pupdr <<= 	gpiob_p::pupdr_r::pupdr13_f(0b00) ||
							gpiob_p::pupdr_r::pupdr14_f(0b00) ||
							gpiob_p::pupdr_r::pupdr15_f(0b00) ||
							atomic;

		gpiob.ospeedr <<= 	gpiob_p::ospeedr_r::ospeedr13_f(0b11) ||
							gpiob_p::ospeedr_r::ospeedr14_f(0b11) ||
							gpiob_p::ospeedr_r::ospeedr15_f(0b11) ||
							atomic;

		gpiob.otyper <<= 	gpiob_p::otyper_r::ot13_f(false) ||
							gpiob_p::otyper_r::ot14_f(false) ||
							gpiob_p::otyper_r::ot15_f(false) ||
							atomic;

		gpiob.afrh <<= 	gpiob_p::afrh_r::afrh13_f(5) ||
						gpiob_p::afrh_r::afrh14_f(5) ||
						gpiob_p::afrh_r::afrh15_f(5) ||
						atomic;

		gpiob.moder <<= gpiob_p::moder_r::moder13_f(0b10) ||
						gpiob_p::moder_r::moder14_f(0b10) ||
						gpiob_p::moder_r::moder15_f(0b10) ||
						atomic;

		dmamux.c10cr = dmamux_p::c10cr_r::dmareq_id_f(12); // connect DMA2 channel 3 to SPI2_RX
		dmamux.c11cr = dmamux_p::c11cr_r::dmareq_id_f(13); // connect DMA2 channel 4 to SPI2_TX

		dma2.cpar3 = dma_p::cpar3_r::pa_f(reinterpret_cast<uint32_t>(&spi2.dr));
		dma2.cpar4 = dma_p::cpar4_r::pa_f(reinterpret_cast<uint32_t>(&spi2.dr));
		dma2.ccr3 = dma_p::ccr3_r::pl_f(0b10) | dma_p::ccr3_r::tcie_f();
		dma2.ccr4 = dma_p::ccr4_r::pl_f(0b10) | dma_p::ccr4_r::dir_f();

		opsy::CortexM::setIsrHandler(static_cast<uint32_t>(DMA2_CH3_IRQn), isrHandler);
		opsy::CortexM::setPriority(static_cast<uint32_t>(DMA2_CH3_IRQn), priority);
		opsy::CortexM::enableInterrupt(static_cast<uint32_t>(DMA2_CH3_IRQn));

		s_mutex = opsy::PriorityMutex(priority);
		s_condition = opsy::ConditionVariable(priority);
	}

	static uint32_t setSpeed(uint32_t maximum)
	{
		std::clamp(maximum, SystemCoreClock / 2, SystemCoreClock / 256);
		uint32_t ratio = SystemCoreClock / maximum;
		uint8_t divider = static_cast<uint8_t>(8 * sizeof(uint32_t) - __builtin_clz(ratio - 1));
		spi2.cr1 <<= spi4_p::cr1_r::br_f(divider);
		return SystemCoreClock / (1 << divider);
	}

	static void transfer(const uint8_t* txBuffer, uint8_t* rxBuffer, uint16_t length)
	{
		assert(gpioa.idr.load().idr8());

		const std::lock_guard<opsy::PriorityMutex> lock{s_mutex};
		gpioa.bsrr = gpioa_p::bsrr_r::br8_f();

		dma2.ifcr = 	dma_p::ifcr_r::teif3_f() |
						dma_p::ifcr_r::htif3_f() |
						dma_p::ifcr_r::tcif3_f() |
						dma_p::ifcr_r::gif3_f() |
						dma_p::ifcr_r::teif4_f() |
						dma_p::ifcr_r::htif4_f() |
						dma_p::ifcr_r::tcif4_f() |
						dma_p::ifcr_r::gif4_f();

		dma2.cmar3 = dma_p::cmar3_r::ma_f(reinterpret_cast<uint32_t>(rxBuffer == nullptr ? &Dummy : rxBuffer));
		dma2.cmar4 = dma_p::cmar4_r::ma_f(reinterpret_cast<uint32_t>(txBuffer == nullptr ? &Dummy : txBuffer));
		dma2.cndtr3 = dma_p::cndtr3_r::ndt_f(length);
		dma2.cndtr4 = dma_p::cndtr4_r::ndt_f(length);

		dma2.ccr3 <<= dma_p::ccr3_r::minc_f(rxBuffer != nullptr) || dma_p::ccr3_r::en_f();
		dma2.ccr4 <<= dma_p::ccr4_r::minc_f(txBuffer != nullptr) || dma_p::ccr4_r::en_f();

		s_condition.wait(s_mutex);
		gpioa.bsrr = gpioa_p::bsrr_r::bs8_f();
	}

	static void isrHandler()
	{
		dma2.ifcr = 	dma_p::ifcr_r::teif3_f() |
						dma_p::ifcr_r::htif3_f() |
						dma_p::ifcr_r::tcif3_f() |
						dma_p::ifcr_r::gif3_f() |
						dma_p::ifcr_r::teif4_f() |
						dma_p::ifcr_r::htif4_f() |
						dma_p::ifcr_r::tcif4_f() |
						dma_p::ifcr_r::gif4_f();

		s_condition.notify_one();
	}

private:

	static const inline uint8_t Dummy = 0xFF;
	static inline opsy::PriorityMutex s_mutex{};
	static inline opsy::ConditionVariable s_condition{};

};
}
