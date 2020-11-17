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
#include <drivers/leds.hpp>
#include <drivers/governor.hpp>
#include <drivers/clock.hpp>

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
		neuron::clock::startClock(8, 336, 4, 7);

		neuron::leds::init();
		neuron::governor::init();

		m_task.start([]()
		{
			assert(sensor::selfTest<neuron::mpu_exti>(MpuPriority));

			neuron::leds::set(neuron::leds::mode::separate);
			neuron::leds::set(neuron::leds::green::off);
			uint32_t i = 1;


			while(true)
			{
				neuron::leds::set(i++);
				if(i == 4)
					i = 1;
				opsy::sleep_for(10s);
			}

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


private:

	static inline opsy::Task<512> m_task;
};
