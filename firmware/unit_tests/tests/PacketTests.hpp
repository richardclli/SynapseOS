#pragma once

#include <array>
#include <Packet.hpp>

#include <Allocator.hpp>
#include <SafeAllocator.hpp>

class PacketTests
{
public:

	static void Instanciation()
	{
		enum Test : uint8_t
		{
			a = 0, b, c, None = 0xFF
		};

		using packet = maestro::Packet<Test, uint32_t>;

		packet p1{a};

		assert(p1.checksum() == 0);
	}

	static void Deleter()
	{
		enum Test: uint8_t
		{
			a = 0, b, c, None = 0xFF
		};

		using packet = maestro::Packet<Test, uint16_t>;

		std::array<uint8_t, 10> buffer;
		bool flag = false;

		{
			packet p1{a, buffer.data(), buffer.size(), [&](uint8_t*, uint16_t){flag = true;}};
		}

		assert(flag = true);

	}

};
