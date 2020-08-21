#pragma once

#include <Allocator.hpp>
#include <Buffer.hpp>

class AllocatorTests
{
public:

	static void SimpleTest()
	{
		Allocator<1000, true> allocator;
		assert(allocator.runCheck());

		const auto ptr = allocator.allocate(200);

		assert(ptr != nullptr);
		assert(allocator.runCheck());
		assert(!allocator.empty());

		allocator.deallocate(ptr);

		assert(allocator.runCheck());
		assert(allocator.empty());
	}

	static void Coaslesce()
	{
		Allocator<1000, true> allocator;
		assert(allocator.runCheck());

		auto *p1 = reinterpret_cast<uint8_t*>(allocator.allocate(200));
		assert(p1 != nullptr);
		for (auto i = 0U; i < 200; ++i)
			p1[i] = i;

		assert(allocator.runCheck());

		auto *p2 = allocator.allocate<uint8_t>(333);
		assert(p2 != nullptr);
		for (auto i = 0U; i < 333; ++i)
			p2[i] = 2 * i;

		assert(allocator.runCheck());

		auto *p3 = allocator.allocate<uint32_t>(7);
		assert(p3 != nullptr);
		for (auto i = 0U; i < 7; ++i)
			p3[i] = 3 * i;

		assert(allocator.runCheck());
		allocator.deallocate(p1);
		assert(allocator.runCheck());
		allocator.deallocate(p3);
		assert(allocator.runCheck());
		allocator.deallocate(p2);
		assert(allocator.runCheck());

		assert(allocator.empty());
	}


	static void BufferAllocation()
	{
		Allocator<1000, true> allocator;

		constexpr std::size_t count = 200;

		{
			Buffer<uint8_t> buffer{
				allocator.allocate<uint8_t>(count),
				count,
				[&](uint8_t* ptr, std::size_t){allocator.deallocate(ptr);}};

			for(auto i = 0U; i<count; ++i)
				buffer[i] = 10*i;

			assert(allocator.runCheck());
			assert(!allocator.empty());
		}

		assert(allocator.runCheck());
		assert(allocator.empty());
	}
};
