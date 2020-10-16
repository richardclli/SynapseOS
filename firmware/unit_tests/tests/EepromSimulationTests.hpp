#pragma once

#include <EepromSimulation.hpp>

template<std::size_t SectorSize, std::size_t SectorCount>
class RamDriver: public MemoryDriver<SectorSize, SectorCount>
{
public:

	constexpr RamDriver()
	{
		for (auto i = 0U; i < SectorCount; ++i)
			m_data[i].fill(0xFF);
	}

	void read(uint8_t *buffer, std::size_t length, std::size_t sector, std::size_t index) final
	{
		assert(index + length < SectorSize);
		memcpy(buffer, &m_data[sector][index], length);
	}

	void write(const uint8_t *buffer, std::size_t length, std::size_t sector, std::size_t index) final
	{
		assert(index + length < SectorSize);
		memcpy(&m_data[sector][index], buffer, length);
	}

	void reset(std::size_t sector) final
	{
		assert(sector < SectorCount);
		m_data[sector].fill(0xFF);
	}

private:
	std::array<std::array<uint8_t, SectorSize>, SectorCount> m_data;
};

struct TestData
{
	char Name[16];
	uint32_t Value;
	char c;
	float fValue;

};

class EepromSimulationTests
{
public:

	static void Overflow()
	{
		constexpr std::size_t SectorSize = 50;
		constexpr std::size_t SectorCount = 3;

		RamDriver<SectorSize, SectorCount> ram;

		{
			EepromSimulation<TestData, SectorSize, SectorCount> eeprom
			{ ram };

			TestData data;
			strcpy(data.Name, "Hello World !");
			data.Value = 0xDEADBEEF;
			data.c = ' ';
			data.fValue = 2201.1982f;

			eeprom.store(data);
			eeprom.store(data, sizeof(data.Name), reinterpret_cast<uint8_t*>(&data.Name) - reinterpret_cast<uint8_t*>(&data));
		}

		{
			EepromSimulation<TestData, SectorSize, SectorCount> eeprom
			{ ram };

			TestData data;
			eeprom.load(data);

			assert(data.Value == 0xDEADBEEF);
			assert(data.c = ' ');
			assert(data.fValue = 2201.1982f);
			assert(strcmp(data.Name, "Hello World !") == 0);
		}
	}

	static void Flood()
	{
		constexpr std::size_t SectorSize = 50;
		constexpr std::size_t SectorCount = 3;

		RamDriver<SectorSize, SectorCount> ram;

		{
			EepromSimulation<TestData, SectorSize, SectorCount> eeprom
			{ ram };

			TestData data;
			strcpy(data.Name, "Hello World !");
			data.Value = 0xDEADBEEF;
			data.c = ' ';
			data.fValue = 2201.1982f;

			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
			eeprom.store(data);
		}

		{
			EepromSimulation<TestData, SectorSize, SectorCount> eeprom
			{ ram };

			TestData data;
			eeprom.load(data);

			assert(data.Value == 0xDEADBEEF);
			assert(data.c = ' ');
			assert(data.fValue = 2201.1982f);
			assert(strcmp(data.Name, "Hello World !") == 0);
		}
	}

	static void NoOverflow()
	{
		constexpr std::size_t SectorSize = 50;
		constexpr std::size_t SectorCount = 3;

		RamDriver<SectorSize, SectorCount> ram;

		{
			EepromSimulation<TestData, SectorSize, SectorCount> eeprom
			{ ram };

			TestData data;
			strcpy(data.Name, "Hello World !");
			data.Value = 0xDEADBEEF;
			data.c = ' ';
			data.fValue = 2201.1982f;

			eeprom.store(data);
		}

		{
			EepromSimulation<TestData, SectorSize, SectorCount> eeprom
			{ ram };

			TestData data;
			eeprom.load(data);

			assert(data.Value == 0xDEADBEEF);
			assert(data.c = ' ');
			assert(data.fValue = 2201.1982f);
			assert(strcmp(data.Name, "Hello World !") == 0);
		}
	}

	static void Split()
	{
		RamDriver<500, 2> ram;

		{
			EepromSimulation<std::array<uint8_t, 300>, 500, 2> eeprom { ram };
			std::array<uint8_t, 300> data;

			for (auto i = 0U; i < data.size(); ++i)
				data[i] =  static_cast<uint8_t>(3*i);

			eeprom.store(data); // save once
			eeprom.store(data); // trigger a flush
		}

		{
			EepromSimulation<std::array<uint8_t, 300>, 500, 2> eeprom { ram };
			std::array<uint8_t, 300> data;

			eeprom.load(data);

			for(auto i = 0U; i< data.size(); ++i)
				assert(data[i] == static_cast<uint8_t>(3*i));
		}
	}

};
