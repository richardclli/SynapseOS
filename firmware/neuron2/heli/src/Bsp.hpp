#pragma once

#include <chrono>

#include <opsy.hpp>

#include <drivers/clock.hpp>
#include <drivers/leds.hpp>
#include <drivers/lsmspi.hpp>
#include <drivers/lisspi.hpp>

#include <lsm6dso32.hpp>
#include <lis3mdl.hpp>


using lsm = lsm6dso32<neuron2::lsmspi>;
using lis = lis3mdl<neuron2::lisspi>;

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
				auto imuok = lsm::init(opsy::IsrPriority(0xFF));
				auto compassok = lis::init(opsy::IsrPriority(0xFF));
				asm volatile("bkpt 0");
		});
	}

private:

	static inline opsy::Task<512> m_task;
};
