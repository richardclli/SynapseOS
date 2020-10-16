#pragma once

#include <PacketStream.hpp>
#include <Allocator.hpp>

class PacketStreamTests
{
public:

	static void AutoFeed()
	{
		enum Test : uint8_t
		{
			a, b,c
		};

		using alloc = Allocator<1000>;
		using stream = maestro::PacketStream<Test, alloc, uint16_t>;

		bool flag = false;
		stream::PacketType p{a};

		alloc all;
		stream str{all, [&](const stream::PacketType& r){flag = r == p;}};


		std::array<uint8_t, 10> buf;

		stream::writeTo(p, buf.begin());

		for(auto v : buf)
			str.feed(v);

		assert(flag == true);
	}

	static void AutoFeed32()
	{
		enum Test : uint8_t
		{
			a, b,c
		};

		using alloc = Allocator<1000>;
		using stream = maestro::PacketStream<Test, alloc, uint32_t>;

		bool flag = false;
		stream::PacketType p{a};

		alloc all;
		stream str{all, [&](stream::PacketType&& r){flag = r == p;}};


		std::array<uint8_t, 10> buf;

		stream::writeTo(p, buf.begin());

		for(auto v : buf)
			str.feed(v);

		assert(flag == true);
	}

	static void AutoFeedEscapeCommand()
	{
		enum Test : uint8_t
		{
			a = 0x55, b,c
		};

		using alloc = Allocator<1000>;
		using stream = maestro::PacketStream<Test, alloc, uint16_t>;

		bool flag = false;
		stream::PacketType p{a};

		alloc all;
		stream str{all, [&](stream::PacketType&& r){flag = r == p;}};

		std::array<uint8_t, 10> buf;
		stream::writeTo(p, buf.begin());

		for(auto v : buf)
			str.feed(v);

		assert(flag == true);
	}
};
