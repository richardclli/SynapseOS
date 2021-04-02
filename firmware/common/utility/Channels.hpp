#pragma once

#include <array>
#include <cstdint>

#include <opsy.hpp>
#include <Scheduler.hpp>

#include <Biquad.hpp>
#include <Slope.hpp>

#include <Enums.hpp>


class Channels {
public:

	static constexpr uint8_t ChannelCount = 12;


	Channels(opsy::duration timeout, float updateRate, float lowPassFreq, std::size_t accelRatio) :
		m_timeout(timeout),
		m_inputBiquad(Biquad<ChannelValues, float>(updateRate, lowPassFreq, FilterType::LowPass)),
		m_slope(updateRate),
		m_accelBiquad(Biquad<ChannelValues, float>(updateRate / static_cast<float>(accelRatio), lowPassFreq, FilterType::LowPass)),
		m_accelRatio(accelRatio)
	{
	}

	void update()
	{
		auto now = opsy::Scheduler::now();

		ChannelValues filterInput;

		for (auto i = 0U; i < ChannelCount; ++i)
			filterInput.m_values[i] = (now - m_lastUpdate[i] < m_timeout) ?	m_input.m_values[i] : m_failsafe.m_values[i];

		m_inputBiquad.feed(filterInput);
		m_output = m_inputBiquad.value();

		m_slope.feed(m_output);
		auto accel = m_slope.value();
		m_accelBiquad.feed(accel);
		m_accelerations = m_accelBiquad.value();
	}

	float get(Channel channel) const
	{
		return m_output.m_values[static_cast<uint8_t>(channel)];
	}

	void set(Channel channel, float value)
	{
		m_lastUpdate[static_cast<uint8_t>(channel)] = opsy::Scheduler::now();
		m_input.m_values[static_cast<uint8_t>(channel)] = value;
	}

private:

	struct ChannelValues
	{
		std::array<float, ChannelCount> m_values { };

		constexpr auto operator+(const ChannelValues &other) const -> ChannelValues
		{
			ChannelValues result;

			for (auto i = 0U; i < ChannelCount; ++i)
				result.m_values[i] = m_values[i] + other.m_values[i];

			return result;
		}

		constexpr auto operator-(const ChannelValues &other) const -> ChannelValues
		{
			ChannelValues result;

			for (auto i = 0U; i < ChannelCount; ++i)
				result.m_values[i] = m_values[i] - other.m_values[i];

			return result;
		}

		constexpr auto operator*(float factor) const -> ChannelValues
		{
			ChannelValues result;

			for (auto i = 0U; i < ChannelCount; ++i)
				result.m_values[i] = m_values[i] * factor;

			return result;
		}

		constexpr auto operator/(float factor) const -> ChannelValues
		{
			return operator*(1.f / factor);
		}

		constexpr auto operator+=(const ChannelValues& other) -> ChannelValues&
		{
			for (auto i = 0U; i < ChannelCount; ++i)
				m_values[i] += other.m_values[i];

			return *this;
		}
	};

	static constexpr std::size_t SlopeDepth = 10;

	opsy::duration m_timeout;
	Biquad<ChannelValues, float> m_inputBiquad;
	Slope<SlopeDepth, ChannelValues, float> m_slope;
	Biquad<ChannelValues, float> m_accelBiquad;
	const std::size_t m_accelRatio;
	ChannelValues m_input;
	ChannelValues m_failsafe;
	ChannelValues m_output;
	ChannelValues m_accelerations;
	std::array<opsy::time_point, ChannelCount> m_lastUpdate { };
};

