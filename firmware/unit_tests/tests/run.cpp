#include "SlopeTests.hpp"
#include "VectorTests.hpp"
#include "SlopeVectorTest.hpp"
#include "BiquadTests.hpp"
#include "BufferTests.hpp"
#include "AllocatorTests.hpp"
#include "EepromSimulationTests.hpp"
#include "PacketTests.hpp"
#include "PacketStreamTests.hpp"
#include "EngineTests.hpp"

#include <Engine.hpp>

extern "C"
{
	void runSlopeTests()
	{
		SlopeTests::Steady<4>();
		SlopeTests::Steady<5>();
		SlopeTests::Steady<10>();
		SlopeTests::Steady<100>();
		SlopeTests::Steady<10>(10.f);
		SlopeTests::Steady<100>(10.f);
		SlopeTests::Steady<10>(-10.f);
		SlopeTests::Steady<100>(-10.f);

		SlopeTests::Constant<4>();
		SlopeTests::Constant<5>();
		SlopeTests::Constant<10>();
		SlopeTests::Constant<100>();
		SlopeTests::Constant<100>(10.f);
		SlopeTests::Constant<100>(-10.f);
		SlopeTests::Constant<100>(10.f, 10.f);
		SlopeTests::Constant<100>(-10.f, 10.f);
		SlopeTests::Constant<100>(-10.f, -10.f);
	}

	void runVectorTests()
	{
		VectorTests::Initialization<2>();
		VectorTests::Initialization<3>();
		VectorTests::Initialization<10>();
		VectorTests::Initialization<100>();

		VectorTests::Accessors();

		VectorTests::UnitNorm<2>();
		VectorTests::UnitNorm<3>();
		VectorTests::UnitNorm<4>();
		VectorTests::UnitNorm<100>();

		VectorTests::ZeroNorm<2>();
		VectorTests::ZeroNorm<3>();
		VectorTests::ZeroNorm<4>();
		VectorTests::ZeroNorm<100>();

		VectorTests::KnownNorm();
		VectorTests::Append();
		VectorTests::Prepend();
		VectorTests::Subvector();
		VectorTests::CrossProduct();
		VectorTests::DotProduct();

		VectorTests::MultiplyFactor<100>(10.f);
		VectorTests::DivideFactor<100>(10.f);

		VectorTests::SubtractSelf<50>();

		VectorTests::Normalize<2>();
		VectorTests::Normalize<10>();
		VectorTests::Normalize<100>();
		VectorTests::Opposite<100>();
	}

	void runSlopeVectorTests()
	{
		SlopeVectorTest::Constant<4>();
		SlopeVectorTest::Constant<5>();
		SlopeVectorTest::Constant<6>();
		SlopeVectorTest::Constant<100>();

		SlopeVectorTest::Gradient<4>();
		SlopeVectorTest::Gradient<5>();
		SlopeVectorTest::Gradient<6>();
		SlopeVectorTest::Gradient<100>();
	}

	void runBiquadTests()
	{
		BiquadTests::VectorReset();
	}

	void runBufferTests()
	{
		BufferTests::CheckDestructor();
	}

	void runAllocatorTests()
	{
		AllocatorTests::SimpleTest();
		AllocatorTests::Coaslesce();
		AllocatorTests::BufferAllocation();
	}

	void runEepromSimulationTests()
	{
		EepromSimulationTests::NoOverflow();
		EepromSimulationTests::Overflow();
		EepromSimulationTests::Flood();
		EepromSimulationTests::Split();
	}

	void runPacketTests()
	{
		PacketTests::Instanciation();
		PacketTests::Deleter();
	}

	void runPacketStreamTests()
	{
		PacketStreamTests::AutoFeed();
		PacketStreamTests::AutoFeed32();
		PacketStreamTests::AutoFeedEscapeCommand();
	}

	void runEngineTests()
	{
		EngineTests::simpleTest();
	}

	void runAllTests()
	{
		runSlopeTests();
		runVectorTests();
		runSlopeVectorTests();
		runBiquadTests();
		runBufferTests();
		runAllocatorTests();
		runEepromSimulationTests();
		runPacketTests();
		runPacketStreamTests();
		runEngineTests();
	}

}
