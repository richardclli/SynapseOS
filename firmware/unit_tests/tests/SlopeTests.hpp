#pragma once

#include <cstddef>
#include <cassert>
#include <math.h>
#include <limits>

#include "Slope.hpp"

class SlopeTests
{
public:

	template<std::size_t Depth>
	static void Steady(float value = 0.f)
	{
		Slope<Depth> slope{1.f}; // initializes a slope filter with sampling frequency 1

		for(auto i = 0U; i<Depth; ++i)
			slope.feed(value); // fill the array with a constant value

		assert(std::abs(slope.value()) <=  std::numeric_limits<float>::epsilon()); // the derivative of a constant is zero
	}

	template<std::size_t Depth>
	static void Constant(float value = 1.f, float frequency = 1.f)
	{
		Slope<Depth> slope{frequency}; // initializes a slope filter with given sampling frequency

		for(auto i = 0U; i<Depth; ++i)
			slope.feed(static_cast<float>(i) * value); // fill the array with proportional values

		assert(std::abs(slope.value() - value * frequency) <= std::numeric_limits<float>::epsilon()); // compares to the expected result
	}
};
