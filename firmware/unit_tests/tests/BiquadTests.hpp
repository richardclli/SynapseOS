#pragma once

#include <cassert>

#include <Biquad.hpp>
#include <Vector.hpp>

class BiquadTests
{
public:

	static void VectorReset()
	{
		Biquad<Vector<3>> test{1000.f, 10.f, FilterType::LowPass};
		const Vector<3> v{1.f, 2.f, 3.f};

		test.reset(v);
		assert((test.value() - v).length() < 5e-5f); // again some calculations here, hence rounding, so we allow some tolerance
	}

};
