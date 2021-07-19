#pragma once

#include <cstdint>
#include <cmath>
#include <cassert>

#include <Callback.hpp>
#include <CortexM.hpp>
#include <Enums.hpp>
#include <IsrPriority.hpp>
#include <PriorityMutex.hpp>

#include <interrupts.hpp>
#include <rcc.hpp>
#include <gpio.hpp>
#include <usart.hpp>
#include <tim.hpp>

extern "C" uint32_t SystemCoreClock;

using namespace STM32F401;

namespace neuron
{
class rxuart
{
public:

	static void init(opsy::IsrPriority priority)
	{
		s_mutex = opsy::PriorityMutex(priority);
		rcc.ahb1enr <<= rcc_p::ahb1enr_r::gpioaen_f() || rcc_p::ahb1enr_r::gpioben_f() || atomic;
		rcc.apb2enr <<= rcc_p::apb2enr_r::usart6en_f() || atomic;
		rcc.apb2enr <<= rcc_p::apb2enr_r::tim1en_f() || atomic;

		gpiob.ospeedr <<= gpiob_p::ospeedr_r::ospeedr15_f(0b00) || atomic;
		gpiob.otyper <<= gpiob_p::otyper_r::ot15_f(false) || atomic;
		gpiob.moder <<= gpiob_p::moder_r::moder15_f(0b00) || atomic;
		gpiob.pupdr <<= gpiob_p::pupdr_r::pupdr15_f(0b00) || atomic;

		gpioa.ospeedr <<= gpioa_p::ospeedr_r::ospeedr8_f(0b00) || atomic;
		gpioa.otyper <<= gpioa_p::otyper_r::ot8_f(false) || atomic;
		gpioa.moder <<= gpioa_p::moder_r::moder8_f(0b01) || atomic;
		gpioa.pupdr <<= gpioa_p::pupdr_r::pupdr8_f(0b00) || atomic;
		gpioa.bsrr = gpioa_p::bsrr_r::br8_f();

		usart6.cr1 = usart_p::cr1_r::ResetValue;
		usart6.cr2 = usart_p::cr2_r::ResetValue;
		usart6.cr3 = usart_p::cr3_r::ResetValue;
		opsy::CortexM::setIsrHandler(static_cast<uint32_t>(USART6_IRQn), uartIsrHandler);
		opsy::CortexM::setPriority(static_cast<uint32_t>(USART6_IRQn), priority);
		opsy::CortexM::enableInterrupt(static_cast<uint32_t>(USART6_IRQn));
		usart6.cr1 = usart_p::cr1_r::re_f() | usart_p::cr1_r::ue_f();

		gpioa.pupdr <<= gpioa_p::pupdr_r::pupdr12_f(0b00) || atomic;
		gpioa.afrh <<= gpioa_p::afrh_r::afrh12_f(8) || atomic;
		gpioa.moder <<= gpioa_p::moder_r::moder12_f(0b10);

		tim1.cr1 = tim1_p::cr1_r::ResetValue;
		tim1.cr2 = tim1_p::cr2_r::ResetValue;
		tim1.psc = (SystemCoreClock / TargetFrequency) - 1;
		s_tickTime = static_cast<float>(tim1.psc.load().value() + 1) / static_cast<float>(SystemCoreClock);
		tim1.ccmr2_input = tim1_p::ccmr2_input_r::ic4f_f(0b0011) | tim1_p::ccmr2_input_r::cc4s_f(0b01);
		tim1.arr = tim1_p::arr_r::arr_f(0xFFFF);
		opsy::CortexM::setIsrHandler(static_cast<uint32_t>(TIM1_UP_TIM10_IRQn), timIsrHandler);
		opsy::CortexM::setPriority(static_cast<uint32_t>(TIM1_UP_TIM10_IRQn), priority);
		opsy::CortexM::enableInterrupt(static_cast<uint32_t>(TIM1_UP_TIM10_IRQn));
		tim1.cr1 = tim1_p::cr1_r::cen_f();

		gpioa.pupdr <<= gpioa_p::pupdr_r::pupdr11_f(0b00) || atomic;
		gpioa.afrh <<= gpioa_p::afrh_r::afrh11_f(1) || atomic;
		gpioa.moder <<= gpioa_p::moder_r::moder11_f(0b10) || atomic;

	}

	static uint32_t setSpeed(uint32_t baudrate, bool parity)
	{
		usart6.cr1 <<= usart_p::cr1_r::ue_f(false);
		if(parity)
			usart6.cr1 <<= usart_p::cr1_r::pce_f() || usart_p::cr1_r::m_f() || atomic;
		else
			usart6.cr1 <<= usart_p::cr1_r::pce_f(false) || usart_p::cr1_r::m_f(false) || atomic;

		usart6.brr = (SystemCoreClock + baudrate / 2) / baudrate;
		usart6.cr1 <<= usart_p::cr1_r::ue_f();

		return SystemCoreClock / usart6.brr.load().value();
	}


	static void onReceived(opsy::Callback<void(Event, uint8_t)>&& callback = opsy::Callback<void(Event, uint8_t)>())
	{
		const std::lock_guard<opsy::PriorityMutex> lock(s_mutex);

		s_onEvent = std::move(callback);

		if(s_onEvent)
		{
			usart6.cr3 <<= usart_p::cr3_r::eie_f();
			usart6.cr1 <<= usart_p::cr1_r::rxneie_f() || usart_p::cr1_r::idleie_f();
		}
		else
		{
			usart6.cr3 <<= usart_p::cr3_r::eie_f(false);
			usart6.cr1 <<= usart_p::cr1_r::rxneie_f(false) || usart_p::cr1_r::idleie_f(false);
		}
	}

	static void onSwitched(opsy::Callback<void(float, bool)>&& callback = opsy::Callback<void(float, bool)>(), bool both = false)
	{
		const std::lock_guard<opsy::PriorityMutex> lock(s_mutex);

		s_onSwitched = std::move(callback);

		if(s_onSwitched)
		{
			tim1.dier = tim1_p::dier_r::cc4ie_f() | tim1_p::dier_r::uie_f();
			tim1.ccer = tim1_p::ccer_r::cc4np_f(both) | tim1_p::ccer_r::cc4p_f() | tim1_p::ccer_r::cc4e_f();
		}
		else
		{
			tim1.dier = tim1_p::dier_r::ResetValue;
			tim1.ccer = tim1_p::ccer_r::ResetValue;
		}
	}

	static void uartIsrHandler()
	{
		auto sr = usart6.sr.load();
		auto data = usart6.dr.load().dr();

		if(sr.rxne())
			s_onEvent(Event::Data, static_cast<uint8_t>(data));

		if(sr.idle())
			s_onEvent(Event::Idle, static_cast<uint8_t>(0));

		if(static_cast<bool>(sr.ore()) || static_cast<bool>(sr.nf()))
			s_onEvent(Event::Error, static_cast<uint8_t>(0));
	}

	static void timIsrHandler()
	{
		auto sr = tim1.sr.load();
		tim1.sr = tim1_p::sr_r::ResetValue;

		if(sr.uif()) // overflow
			s_lastSwitch -= tim1.arr.load().arr();

		if(sr.cc4if()) // capture
		{
			auto cnt = tim1.ccr4.load().ccr4();
			assert(cnt > s_lastSwitch);
			uint32_t delta = cnt - s_lastSwitch;
			s_lastSwitch = cnt;
			auto wasHigh = !gpiob.idr.load().idr4();
			s_onSwitched(static_cast<float>(delta) * s_tickTime, wasHigh);
		}
	}

	static void set(Pull pull = Pull::None)
	{
		switch(pull)
		{
		case Pull::WeakDown:
			gpiob.moder <<= gpiob_p::moder_r::moder15_f(0b00) || atomic;
			gpiob.pupdr <<= gpiob_p::pupdr_r::pupdr15_f(0b10) || atomic;
			break;
		case Pull::WeakUp:
			gpiob.moder <<= gpiob_p::moder_r::moder15_f(0b00) || atomic;
			gpiob.pupdr <<= gpiob_p::pupdr_r::pupdr15_f(0b01) || atomic;
			break;
		case Pull::Down:
			gpiob.bsrr = gpiob_p::bsrr_r::br15_f();
			gpiob.moder <<= gpiob_p::moder_r::moder15_f(0b01) || atomic;
			gpiob.pupdr <<= gpiob_p::pupdr_r::pupdr15_f(0b00) || atomic;
			break;
		case Pull::Up:
			gpiob.bsrr = gpiob_p::bsrr_r::bs15_f();
			gpiob.moder <<= gpiob_p::moder_r::moder15_f(0b01) || atomic;
			gpiob.pupdr <<= gpiob_p::pupdr_r::pupdr15_f(0b00) || atomic;
			break;
		case Pull::StrongDown:
		case Pull::StrongUp:
			assert(false);
			break;
		default:
		case Pull::None:
			gpiob.moder <<= gpiob_p::moder_r::moder15_f(0b00) || atomic;
			gpiob.pupdr <<= gpiob_p::pupdr_r::pupdr15_f(0b00) || atomic;
			break;
		}
	}

	static void reversePolarity(bool state)
	{
		gpioa.bsrr = state ? gpioa_p::bsrr_r::bs8_f() : gpioa_p::bsrr_r::br8_f();

		if(!tim1.ccer.load().cc4np()) // if not both edge
			tim1.ccer <<= tim1_p::ccer_r::cc4p_f(state); // set edge
	}

private:

	static constexpr uint32_t TargetFrequency = 10000000; // 10MHz target frequency

	static inline opsy::Callback<void(float, bool)> s_onSwitched;
	static inline opsy::Callback<void(Event, uint8_t)> s_onEvent;
	static inline opsy::PriorityMutex s_mutex{};

	static inline int32_t s_lastSwitch = 0;
	static inline float s_tickTime;
};
}
