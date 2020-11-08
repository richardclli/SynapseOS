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
class lsmspi
{
public:

	static void init(opsy::IsrPriority priority)
	{
		rcc.ahb2enr <<= rcc_p::ahb2enr_r::gpioaen_f() || rcc_p::ahb2enr_r::gpiocen_f() || atomic; // enable gpioa and gpioc
		rcc.ahb1enr <<= rcc_p::ahb1enr_r::dma2en_f() || rcc_p::ahb1enr_r::dmamuxen_f() || atomic; // enable dma2 and dmamux
		rcc.apb2enr <<= rcc_p::apb2enr_r::spi1en_f() || atomic; // enable spi1

		gpioc.bsrr = gpioc_p::bsrr_r::bs4_f();
		gpioc.pupdr <<= gpioc_p::pupdr_r::pupdr4_f(0b00) || atomic;
		gpioc.ospeedr <<= gpioc_p::ospeedr_r::ospeedr4_f(0b11) || atomic;
		gpioc.otyper <<= gpioc_p::otyper_r::ot4_f(false) || atomic;
		gpioc.moder <<= gpioc_p::moder_r::moder4_f(0b01) || atomic;

		spi1.cr1 = 	spi1_p::cr1_r::ssm_f() |
					spi1_p::cr1_r::ssi_f() |
					spi1_p::cr1_r::spe_f() |
					spi1_p::cr1_r::mstr_f() |
					spi1_p::cr1_r::cpol_f() |
					spi1_p::cr1_r::cpha_f() |
					spi1_p::cr1_r::br_f(0b111);

		spi1.cr2 = spi1_p::cr2_r::txdmaen_f() | spi1_p::cr2_r::rxdmaen_f() | spi1_p::cr2_r::frxth_f();

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

		dmamux.c8cr = dmamux_p::c8cr_r::dmareq_id_f(10); // connect DMA2 channel 1 to SPI1_RX
		dmamux.c9cr = dmamux_p::c9cr_r::dmareq_id_f(11); // connect DMA2 channel 2 to SPI1_TX

		dma2.cpar1 = dma_p::cpar1_r::pa_f(reinterpret_cast<uint32_t>(&spi1.dr));
		dma2.cpar2 = dma_p::cpar2_r::pa_f(reinterpret_cast<uint32_t>(&spi1.dr));
		dma2.ccr1 = dma_p::ccr1_r::pl_f(0b10) | dma_p::ccr1_r::tcie_f();
		dma2.ccr2 = dma_p::ccr2_r::pl_f(0b10) | dma_p::ccr2_r::dir_f();

		opsy::CortexM::setIsrHandler(static_cast<uint32_t>(DMA2_CH1_IRQn), isrHandler);
		opsy::CortexM::setPriority(static_cast<uint32_t>(DMA2_CH1_IRQn), priority);
		opsy::CortexM::enableInterrupt(static_cast<uint32_t>(DMA2_CH1_IRQn));

		s_mutex = opsy::PriorityMutex(priority);
		s_condition = opsy::ConditionVariable(priority);
	}

	static uint32_t setSpeed(uint32_t maximum)
	{
		std::clamp(maximum, SystemCoreClock / 2, SystemCoreClock / 256);
		uint32_t ratio = SystemCoreClock / maximum;
		uint8_t divider = static_cast<uint8_t>(8 * sizeof(uint32_t) - __builtin_clz(ratio - 1));
		spi1.cr1 <<= spi1_p::cr1_r::br_f(divider);
		return SystemCoreClock / (1 << divider);
	}

	static void transfer(const uint8_t* txBuffer, uint8_t* rxBuffer, uint16_t length)
	{
		assert(gpioc.idr.load().idr4());

		const std::lock_guard<opsy::PriorityMutex> lock{s_mutex};
		gpioc.bsrr = gpioc_p::bsrr_r::br4_f();

		dma2.ifcr = 	dma_p::ifcr_r::teif1_f() |
						dma_p::ifcr_r::htif1_f() |
						dma_p::ifcr_r::tcif1_f() |
						dma_p::ifcr_r::gif1_f() |
						dma_p::ifcr_r::teif2_f() |
						dma_p::ifcr_r::htif2_f() |
						dma_p::ifcr_r::tcif2_f() |
						dma_p::ifcr_r::gif2_f();

		dma2.cmar1 = dma_p::cmar1_r::ma_f(reinterpret_cast<uint32_t>(rxBuffer == nullptr ? &Dummy : rxBuffer));
		dma2.cmar2 = dma_p::cmar2_r::ma_f(reinterpret_cast<uint32_t>(txBuffer == nullptr ? &Dummy : txBuffer));
		dma2.cndtr1 = dma_p::cndtr1_r::ndt_f(length);
		dma2.cndtr2 = dma_p::cndtr2_r::ndt_f(length);

		dma2.ccr1 <<= dma_p::ccr1_r::minc_f(rxBuffer != nullptr) || dma_p::ccr1_r::en_f();
		dma2.ccr2 <<= dma_p::ccr2_r::minc_f(txBuffer != nullptr) || dma_p::ccr2_r::en_f();

		s_condition.wait(s_mutex);
		gpioc.bsrr = gpioc_p::bsrr_r::bs4_f();
	}

	static void isrHandler()
	{
		dma2.ifcr = 	dma_p::ifcr_r::teif1_f() |
						dma_p::ifcr_r::htif1_f() |
						dma_p::ifcr_r::tcif1_f() |
						dma_p::ifcr_r::gif1_f() |
						dma_p::ifcr_r::teif2_f() |
						dma_p::ifcr_r::htif2_f() |
						dma_p::ifcr_r::tcif2_f() |
						dma_p::ifcr_r::gif2_f();

		s_condition.notify_one();
	}

private:

	static const inline uint8_t Dummy = 0xFF;
	static inline opsy::PriorityMutex s_mutex{};
	static inline opsy::ConditionVariable s_condition{};

};
}
