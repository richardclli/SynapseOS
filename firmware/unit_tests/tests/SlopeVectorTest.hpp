#pragma once

#include <cassert>
#include <limits>

#include <Vector.hpp>
#include <Slope.hpp>

class SlopeVectorTest
{
public:

	template<std::size_t Size>
	static void Constant()
	{
		Slope<Size, Vector<3>, float> slope{1.f};
		const auto v = Vector<3>{1.f, 2.f, 3.f};

		for(auto i = 0U; i<Size; ++i)
			slope.feed(v);

		assert(slope.value() == Vector<3>());
	}

	template<std::size_t Size>
	static void Gradient()
	{
		Slope<Size, Vector<3>> slope{1.f};
		const auto v = Vector<3>{1.f, 2.f, 3.f};

		for(auto i = 0U; i<Size; ++i)
			slope.feed(static_cast<float>(i)*v);

		assert((slope.value() - v).length() <= 1e-5f * v.length()); // there are more calculations here so a very small deviation is tolerable
	}
};
