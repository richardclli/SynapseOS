#pragma once

#include <opsy.hpp>

#include <drivers/clock.hpp>
#include <drivers/leds.hpp>
#include <drivers/lsmspi.hpp>
#include <lsm6dso32.hpp>

#include <gpio.hpp>
#include <rcc.hpp>
#include <dma.hpp>

#include <chrono>

using lsm = lsm6dso32<neuron2::lsmspi>;

using namespace std::chrono_literals;

class Bsp {
public:

	static void initialize() {
		opsy::CortexM::enableFpu();
		neuron2::clock::startClock(1, 20, 2);
		neuron2::leds::init();

		neuron2::leds::set(neuron2::leds::mode::separate);
		neuron2::leds::set(neuron2::leds::green::on);
		neuron2::leds::set(1);

		m_task.start([]
		{
				auto result = lsm::init(opsy::IsrPriority(0xFF));
				asm volatile("bkpt 0");
		});
	}

private:

	static inline opsy::Task<512> m_task;
};
