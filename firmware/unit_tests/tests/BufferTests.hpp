#pragma once

#include <Buffer.hpp>

class BufferTests
{
public:

	static void CheckDestructor()
	{
		bool flag = false;

		{
			// create a new scope so that the buffer will be destroyed at scope exit
			Buffer<uint8_t> b{nullptr, 0, [&](uint8_t*, std::size_t){flag = true;}};
		}

		assert(flag);
	}
};
