#pragma once

#include <array>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <limits>
#include <type_traits>

/**
 * The base class for a memory driver (typically FLASH driver)
 */
template<std::size_t SectorSize, std::size_t SectorCount>
class MemoryDriver
{
public:

	/**
	 * Reads some data from memory
	 * @param buffer The buffer to store the data in
	 * @param length The length of memory to read
	 * @param sector The sector to read from
	 * @param index The starting index inside the sector
	 */
	virtual void read(uint8_t *buffer, std::size_t length, std::size_t sector, std::size_t index) = 0;

	/**
	 * Writes some data to memory
	 * @param buffer The buffer to take data from
	 * @param length The length of memory to write
	 * @param sector The sector to write to
	 * @param index The starting index inside the sector
	 */
	virtual void write(const uint8_t *buffer, std::size_t length, std::size_t sector, std::size_t index) = 0;

	/**
	 * Resets a sector (set all bits to one)
	 * @param sector The sector to reset
	 */
	virtual void reset(std::size_t sector) = 0;
};

/**
 * A class to simulate an EEPROM using memory (typically FLASH memory)
 * @tparam DataType The type of data to store in simulated EEPROM
 * @tparam SectorSize The size of one sector
 * @tparam SectorCount The nomber of sectors
 */
template<typename DataType, std::size_t SectorSize, std::size_t SectorCount>
class EepromSimulation
{
public:

	/**
	 * The size in bytes of the simulated eeprom
	 */
	static constexpr std::size_t EepromSize = sizeof(DataType);

	/**
	 * The type of a size descriptor
	 */
	using size_type = std::conditional_t< EepromSize < std::numeric_limits<uint8_t>::max(), uint8_t, std::conditional_t< EepromSize < std::numeric_limits<uint16_t>::max(), uint16_t, uint32_t>>;

	/**
	 * The associated memory driver (same sector size and count)
	 */
	using driver_t = MemoryDriver<SectorSize, SectorCount>;

	static_assert(sizeof(std::size_t) == sizeof(uint32_t), "Size and unsigned int should be the same");
	static_assert(SectorSize >= 1 + sizeof(size_type) + 1 + EepromSize, "Sector size is too small to contain the EEPROM, use bigger sectors");
	static_assert(SectorCount > 1, "Must use multiple sectors");

	/**
	 * Creates a simulated EEPROM based on the specified driver
	 * @param driver The memory driver used to read and write memory
	 */
	constexpr EepromSimulation(driver_t &driver) :
			m_driver(driver)
	{
	}

	/**
	 * Stores the data to simulated EEPROM
	 * @param data The data to store
	 * @param length The length of the data to store (if not the entire data)
	 * @param index The index of the data to store (if not zero)
	 */
	void store(const DataType &data, size_type length = sizeof(DataType), size_type index = 0)
	{
		constexpr uint8_t maxLength = 0xFE;

		assert(index + length <= EepromSize);

		auto ptr = reinterpret_cast<const uint8_t*>(&data);

		while (length > maxLength) // too big for chunk size
		{
			if (!writeChunk(ptr, maxLength, index))
			{
				flushTo(data, (readSector() + 1) % SectorCount);
				return;
			}
			ptr += maxLength;
			index = static_cast<size_type>(index + maxLength);
			length = static_cast<size_type>(length - maxLength);
		}

		if (length == 0)
			return;

		if (!writeChunk(ptr, static_cast<uint8_t>(length), static_cast<uint8_t>(index)))
		{
			flushTo(data, (readSector() + 1) % SectorCount);
			return;
		}
	}

	/**
	 * Loads the data from simulated EEPROM
	 * @param data The data to load
	 * @return @c true if correctly loaded, @c false otherwise (e.g. because nothing has been stored)
	 */
	bool load(DataType &data)
	{
		return load(data, readSector());
	}

private:

	driver_t &m_driver;

	enum class Status : uint8_t
	{
		Reset = 0b11111111, Flushing = 0b01111111, Active = 0b00111111, Full = 0b00011111,
	};

	/**
	 * Gets the header of a sector
	 * @param sector The sector
	 * @return The header value
	 */
	Status header(std::size_t sector)
	{
		uint8_t header;
		m_driver.read(&header, 1, sector, 0);
		return static_cast<Status>(header);
	}

	/**
	 * Sets the header of a sector
	 * @param sector The sector
	 * @param status The new status of the sector
	 * @return The previous status of the sector
	 */
	Status header(std::size_t sector, Status status)
	{
		const auto previous = header(sector);
		assert((~static_cast<uint8_t>(previous) & static_cast<uint8_t>(status)) == 0);
		m_driver.write(reinterpret_cast<const uint8_t*>(&status), 1, sector, 0);
		return previous;
	}

	/**
	 * Gets the current sector to read from
	 * @return The sector to read from
	 */
	std::size_t readSector()
	{
		std::size_t full = 0;

		for (auto i = 0U; i < SectorCount; ++i)
		{
			switch (static_cast<Status>(header(i)))
			{
			case Status::Active:
				return i;
			case Status::Full:
				full = i;
			default:
				break;
			}
		}

		return full;
	}

	/**
	 * Gets the current sector to write to
	 * @return The sector to write to
	 */
	std::size_t writeSector()
	{
		for (auto i = 0U; i < SectorCount; ++i)
		{
			switch (static_cast<Status>(header(i)))
			{
			case Status::Active:
			case Status::Flushing:
				return i;
			default:
				break;
			}
		}

		const auto next = header(0) == Status::Full ? 1 : 0;

		if (header(next) != Status::Reset)
			m_driver.reset(next);
		header(next, Status::Active);

		return next;
	}

	/**
	 * Gets the current write index inside the specified sector
	 * @param sector The sector
	 * @return The next write index inside the sector
	 */
	size_type currentIndex(std::size_t sector)
	{
		const auto h = header(sector);

		if (h != Status::Active && h != Status::Full && h != Status::Flushing)
			return 0;

		size_type index = 1;

		while (true)
		{
			uint8_t s;
			m_driver.read(&s, 1, sector, index);

			if (s == 0xFF)
				break;

			index = static_cast<size_type>(index + sizeof(size_type) + 1 + s);
			assert(index + sizeof(size_type) + 2 < SectorSize);
		}

		return index;
	}

	/**
	 * Loads data from a specified sector
	 * @param data The data to load to
	 * @param sector The sector to load from
	 * @return @c true if loaded successfully, @c false otherwise
	 */
	bool load(DataType &data, std::size_t sector)
	{
		const auto h = header(sector);

		if (h != Status::Active && h != Status::Full) // only active and full sectors can be read
			return false;

		std::size_t index = 1;

		while (true)
		{
			std::array<uint8_t, sizeof(size_type) + 1> h;
			m_driver.read(h.data(), h.size(), sector, index);
			const auto s = h[0];
			const size_type i = *reinterpret_cast<size_type*>(&h[1]);

			if (s == 0xFF)
				break;

			m_driver.read(&reinterpret_cast<uint8_t*>(&data)[i], s, sector, index + sizeof(size_type) + 1);
			index += sizeof(size_type) + 1 + s;
			assert(index + sizeof(size_type) + 2 < SectorSize);
		}

		return true;
	}

	/**
	 * Writes a chunk a data to memory
	 * @param ptr The ptr to taka data from
	 * @param length The length of the chunk
	 * @param index The index from origin data
	 * @return @c true is written successfully, @c false otherwise (not enough memory left in the sector)
	 */
	bool writeChunk(const uint8_t *ptr, uint8_t length, size_type index)
	{
		const auto realLength = static_cast<size_type>(length) + sizeof(size_type) + 1U;

		const auto sector = writeSector();
		auto i = currentIndex(sector);

		if (i == 0)
		{
			if (header(sector) != Status::Reset)
				m_driver.reset(sector);
			header(sector, Status::Active);
			i = 1;
		}

		if (i + realLength + 2 >= SectorSize)
			return false;

		std::array<uint8_t, sizeof(size_type) + 1> tmp
		{ length };
		*reinterpret_cast<size_type*>(&tmp[1]) = index;
		m_driver.write(tmp.data(), tmp.size(), sector, i);
		m_driver.write(ptr, length, sector, i + tmp.size());
		return true;
	}

	/**
	 * Flushes the data to a new sector
	 * @param data The data to write
	 * @param newSector The new sector to write to
	 */
	void flushTo(const DataType &data, std::size_t newSector)
	{
		const auto previousSector = readSector();

		if (header(newSector) != Status::Reset)
			m_driver.reset(newSector);

		header(previousSector, Status::Full);
		header(newSector, Status::Flushing);
		store(data);

		header(newSector, Status::Active);
		m_driver.reset(previousSector);
	}

};
