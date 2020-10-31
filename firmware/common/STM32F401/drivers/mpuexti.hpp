#pragma once

#include <ConditionVariable.hpp>
#include <opsy.hpp>
#include <IsrPriority.hpp>

#include "../rcc.hpp"
#include "../gpio.hpp"
#include "../syscfg.hpp"
#include "../exti.hpp"
#include "../interrupts.hpp"

using namespace STM32F401;

namespace neuron
{

class mpu_exti
{
public:

	static void configure(bool rising, bool falling, opsy::IsrPriority priority)
	{
		rcc.ahb1enr <<= rcc_p::ahb1enr_r::gpioben_f() || atomic;
		rcc.apb2enr <<= rcc_p::apb2enr_r::syscfgen_f() || atomic;

		gpiob.pupdr <<= gpiob_p::pupdr_r::pupdr0_f(0b01) || atomic;
		gpiob.moder <<= gpiob_p::moder_r::moder0_f(0) || atomic;
		syscfg.exticr1 <<= syscfg_p::exticr1_r::exti0_f(1) || atomic;
		exti.imr <<= exti_p::imr_r::mr0_f(false) || atomic;
		exti.rtsr <<= exti_p::rtsr_r::tr0_f(rising) || atomic;
		exti.ftsr <<= exti_p::ftsr_r::tr0_f(falling) || atomic;
		exti.pr = exti_p::pr_r::pr0_f();
		m_trigger = opsy::ConditionVariable(priority);
		opsy::CortexM::setIsrHandler(static_cast<uint32_t>(EXTI0_IRQn), isrHandler);
		opsy::CortexM::setPriority(static_cast<uint32_t>(EXTI0_IRQn), priority);
		opsy::CortexM::enableInterrupt(static_cast<uint32_t>(EXTI0_IRQn));
		exti.imr <<= exti_p::imr_r::mr0_f(true) || atomic;
	}

	static void isrHandler()
	{
		m_trigger.notify_one();
		exti.pr = exti_p::pr_r::pr0_f();
	}

	static opsy::ConditionVariable& trigger()
	{
		return m_trigger;
	}

private:

	static inline opsy::ConditionVariable m_trigger{};
};

}
