#pragma once

#include <chrono>

#include <opsy.hpp>

#include <drivers/clock.hpp>
#include <drivers/leds.hpp>
#include <drivers/lsmspi.hpp>
#include <drivers/lisspi.hpp>
#include <drivers/rxuart.hpp>

#include <lsm6dso32.hpp>
#include <lis3mdl.hpp>

#include <Channels.hpp>

#include <receivers/Scanner.hpp>
#include <receivers/Sbus.hpp>
#include <Enums.hpp>


using lsm = lsm6dso32<neuron2::lsmspi>;
using lis = lis3mdl<neuron2::lisspi>;

using namespace std::chrono_literals;

class Bsp {
public:

	static void initialize()
	{
		neuron2::clock::startClock(1, 20, 2);
		neuron2::leds::init();

		neuron2::rxuart::init(opsy::IsrPriority(0xFF));
		//scanner.Start();
		sbus.Start();

		neuron2::leds::set(neuron2::leds::mode::separate);
		neuron2::leds::set(neuron2::leds::green::on);
		neuron2::leds::set(1);


		/*m_task.start([]
		{
				[[maybe_unused]] auto imuok = lsm::init(opsy::IsrPriority(0xFF));
				[[maybe_unused]] auto compassok = lis::init(opsy::IsrPriority(0xFF));

				(*(volatile uint32_t *)0xE000EDFC) |= 1<<24;
				(*(volatile uint32_t *)0xE0001004) = 0;
				m_channels.update();

				[[maybe_unused]] volatile uint32_t count = (*(volatile uint32_t *)0xE0001004);

				asm volatile("bkpt 0");

		});*/
	}

private:

	static inline opsy::Task<512> m_task;
	static inline Channels m_channels = Channels(200ms, 1000, 20, 10);

	static inline opsy::ConditionVariable rxFound{opsy::IsrPriority(0xFF)};
	static inline Scanner<neuron2::rxuart> scanner { 10, rxFound };
	static inline Sbus<neuron2::rxuart, Channels> sbus{ m_channels };
};
