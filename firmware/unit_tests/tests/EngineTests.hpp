#pragma once

#include <array>
#include <Engine.hpp>
#include <Allocator.hpp>

class TestConfig
{
public:
	static constexpr uint8_t ProtocolVersion = 4;
	static constexpr std::array<uint8_t, 10> Descriptor{};

};

class EngineTests
{
public:

	static void simpleTest()
	{

		using allocator = SafeAllocator<Allocator<5000>>;
		using engine = maestro::Engine<allocator, TestConfig>;

		allocator alloc;
		TestConfig config;

		class FakeChannel: public engine::Channel
		{
			void send(engine::PacketType&&) final
			{
			}
		};

		engine e{ alloc, config };
		FakeChannel c;

		e.process(engine::PacketType{maestro::Command::Descriptor}, c);
	}
};
