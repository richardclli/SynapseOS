#include "Vector.hpp"
#include <cassert>

class VectorTests
{
public:

	static constexpr float PiOverTwo = std::acos(0.f);

	template<std::size_t Size>
	static void Initialization()
	{
		Vector<Size> v;

		for(auto i = 0U; i< Size; ++i)
			assert(v[i] == 0.f); // check the default valus is 0
	}

	static void Accessors()
	{
		Vector<4> v{1.f, 2.f, 3.f, 4.f};
		assert(v.x() == 1.f); // check each of the 4 named accessors
		assert(v.y() == 2.f);
		assert(v.z() == 3.f);
		assert(v.w() == 4.f);

		assert(v.x() == v[0]); // check rank accessors
		assert(v.y() == v[1]);
		assert(v.z() == v[2]);
		assert(v.w() == v[3]);
	}

	template<std::size_t Size>
	static void UnitNorm()
	{
		Vector<Size> v = Vector<Size>(1.f);
		assert(std::abs(v.norm() - Size) <= std::numeric_limits<float>::epsilon());
	}

	template<std::size_t Size>
	static void ZeroNorm()
	{
		Vector<Size> v = Vector<Size>();
		assert(std::abs(v.norm()) <= std::numeric_limits<float>::epsilon());
		assert(std::abs(v.length()) <= std::numeric_limits<float>::epsilon());
	}

	static void KnownNorm()
	{
		Vector<2> v{3.f, 4.f}; // 3²+4² = 5²
		assert(std::abs(v.length() - 5.f) <= std::numeric_limits<float>::epsilon());
	}

	static void Append()
	{
		Vector<3> v{1.f, 2.f, 3.f};
		auto a = v.append(4.f);

		assert(a.size() == 4);
		assert(a.x() == 1.f);
		assert(a.y() == 2.f);
		assert(a.z() == 3.f);
		assert(a.w() == 4.f);
	}

	static void Prepend()
	{
		Vector<3> v{2.f, 3.f, 4.f};
		auto a = v.prepend(1.f);

		assert(a.size() == 4);
		assert(a.x() == 1.f);
		assert(a.y() == 2.f);
		assert(a.z() == 3.f);
		assert(a.w() == 4.f);
	}

	static void Rotation()
	{
		Vector<2> v{1.f, 0.f};

		v = rotate(v, PiOverTwo);
		assert(v.x() == 0.f);
		assert(v.y() == 1.f);

		v = rotate(v, PiOverTwo);
		assert(v.x() == -1.f);
		assert(v.y() == 0.f);

		v = rotate(v, PiOverTwo);
		assert(v.x() == 0.f);
		assert(v.y() == -1.f);

		v = rotate(v, PiOverTwo);
		assert(v.x() == 1.f);
		assert(v.y() == 0.f);
	}

	static void Subvector()
	{
		Vector<4> v{1.f, 2.f, 3.f, 4.f};
		auto s = v.sub<2, 1>();

		assert(s.size() == 2);
		assert(s.x() == 2.f);
		assert(s.y() == 3.f);
	}

	static void CrossProduct()
	{
		// TODO
	}

	static void DotProduct()
	{
		// TODO
	}

	template<std::size_t Size>
	static void MultiplyFactor(float factor)
	{
		Vector<Size> v{1.f};
		v *= factor;

		for(auto i = 0U; i< Size; ++i)
			assert(v[i] == factor);
	}

	template<std::size_t Size>
	static void DivideFactor(float factor)
	{
		Vector<Size> v { factor };
		v /= factor;

		for (auto i = 0U; i < Size; ++i)
			assert(v[i] == 1.f);
	}

	template<std::size_t Size>
	static void SubtractSelf()
	{
		Vector<Size> v;

		for(auto i = 0U; i < Size; ++i)
			v[i] = static_cast<float>(i);

		v-=v;

		for(auto i = 0U; i< Size; ++i)
			assert(v[i] == 0.f);
	}

	template<std::size_t Size>
	static void Normalize()
	{
		Vector<Size> v;
		for(auto i = 0U; i < Size; ++i)
			v[i] = static_cast<float>(i);

		v.normalize();
		assert(std::abs(v.length() - 1.f) <= std::numeric_limits<float>::epsilon());
	}

	template<std::size_t Size>
	static void Opposite()
	{
		Vector<Size> v;
		for(auto i = 0U; i < Size; ++i)
			v[i] = static_cast<float>(i);

		auto minus = -v;
		for(auto i = 0U; i<Size; ++i)
			assert(minus[i] == -v[i]);
	}

	template<std::size_t Size>
	static void Calculations()
	{
		Vector<Size> v1, v2, v3;

		for(auto i = 0U; i< Size; ++i)
		{
			v1[i] = i;
			v2[i] = 2.f*i;
			v3[i] = -1.f*i;
		}

		assert((v1 + v3).length() == 0.f);
		assert(2.f*v1 == v2);
	}

};
