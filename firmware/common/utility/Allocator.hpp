#pragma once

#include <array>
#include <cassert>
#include <cstddef>
#include <limits>

template<std::size_t Size, bool UseDummy = false, int Dummy = 0xBAADF00D>
class Allocator
{
public:

	using size_type = std::size_t;
	using element_type = int;

	static_assert(Size > 3, "Size must be at least 3 to be able to allocate");
	static_assert(sizeof(element_type) == sizeof(void*), "Mismatch of size between pointer and element size");

	constexpr Allocator()
	{
		if constexpr (UseDummy)
			m_data.fill(Dummy);

		m_data[0] = m_data[Size - 1] = Size - 2;
	}

	/**
	 * Allocates some memory
	 * @param bytes The requested number of bytes to allocate
	 * @warning if the allocator cannot allocate memory (typically not enough memory available), it will return nullptr, so please check return value against nullptr
	 */
	void* allocate(size_type bytes)
	{
		if (bytes == 0) // cannot allocate zero bytes
			return nullptr;

		const auto availableSlots = m_data[Size - 1]; // the available slots
		const auto neededSlots = static_cast<element_type>((bytes - 1) / sizeof(element_type) + 1); // the number of slots needed to allocate

		if (neededSlots > availableSlots) // not enough free slots to allocate, return null
			return nullptr;

		const auto previousIndex = Size - 2 - availableSlots; // this is the index of the beginning of the free space
		const auto newIndex = previousIndex + neededSlots + 2; // this is the index of the end of the new allocation
		m_data[previousIndex] = m_data[newIndex - 1] = -neededSlots; // creates the new allocation
		m_data[newIndex] = m_data[Size - 1] = availableSlots - neededSlots - 2; // and update the remaining slots
		return reinterpret_cast<void*>(&m_data[previousIndex + 1]);
	}

	template<typename T>
	T* allocate(size_type count = 1)
	{
		return reinterpret_cast<T*>(allocate(count*sizeof(T)));
	}

	/**
	 * Deallocates some memory
	 * @param ptr The pointer to the memory to deallocate
	 */
	void deallocate(const void *ptr)
	{
		assert(owns(ptr)); // to deallocate, the ptr must be handled by the allocator
		auto ptrIndex = reinterpret_cast<const element_type*>(ptr) - m_data.data(); // ptrIndex is the slot index of the pointer
		auto allocatedSlots = -m_data[ptrIndex - 1]; // the size of the allocation
		assert(allocatedSlots > 0 && (m_data[ptrIndex + allocatedSlots] == -allocatedSlots)); // check the indicators are coherent
		m_data[ptrIndex - 1] = m_data[ptrIndex + allocatedSlots] = allocatedSlots; // release the allocation

		if constexpr (UseDummy)
			for (auto i = ptrIndex; i < ptrIndex + allocatedSlots; ++i)
				m_data[i] = Dummy;

		if (ptrIndex != 1) // the allocation was not the first one, so check if the previous allocation is also free
		{
			const auto previousAllocationSlots = m_data[ptrIndex - 2];
			if (previousAllocationSlots > 0) // the previous allocation if free, merge the two
			{
				const auto combinedSlots = allocatedSlots + previousAllocationSlots + 2;
				m_data[ptrIndex - 3 - previousAllocationSlots] = m_data[ptrIndex + allocatedSlots] = combinedSlots;
				if constexpr (UseDummy)
					m_data[ptrIndex - 1] = m_data[ptrIndex - 2] = Dummy;

				// update variable in case there is also a free allocation after the current one
				allocatedSlots = combinedSlots;
				ptrIndex -= previousAllocationSlots + 2;
			}
		}

		if (static_cast<size_type>(ptrIndex + allocatedSlots + 1) < Size - 2) // the allocation was not the last one, check if next if also free
		{
			const auto nextAllocationSlots = m_data[ptrIndex + allocatedSlots + 1];
			if (nextAllocationSlots > 0) // next slot is free, merge the two
			{
				const auto combinedSlots = allocatedSlots + nextAllocationSlots + 2;
				m_data[ptrIndex - 1] = m_data[ptrIndex + combinedSlots] = combinedSlots;
				if constexpr (UseDummy)
					m_data[ptrIndex + allocatedSlots] = m_data[ptrIndex + allocatedSlots + 1] = Dummy;
			}
		}
	}

	/**
	 * Checks if a pointer is owned (allocated by) the current allocator
	 * @param ptr The pointer to check
	 * @return @c true if the pointer is owned by the current allocator, @c false otherwise
	 */
	bool owns(const void *ptr) const
	{
		assert(reinterpret_cast<unsigned int>(ptr) % std::alignment_of<element_type>::value == 0); // the pointer is necessary aligned with the slots
		const auto index = reinterpret_cast<const element_type*>(ptr) - m_data.data(); // gets the pointer difference between data start and ptr
		return index > 0 && index < static_cast<ptrdiff_t>(Size - 1); // ptr in owned if between the allocator boundaries minus indicators
	}

	/**
	 * Gets the size of the allocator, which is the size of the biggest slot that can be allocated
	 * @return The size of the allocator, which is the size of the biggest slot that can be allocated
	 */
	constexpr size_type size() const
	{
		return (Size - 2) * sizeof(element_type);
	}

	/**
	 * Gets the currently available free memory for allocation
	 * @return The currently available free memory for allocation
	 */
	constexpr size_type available() const
	{
		const auto lastSlot = m_data[Size - 1];
		return lastSlot > 0 ? lastSlot * sizeof(element_type) : 0;
	}

	/**
	 * Checks whether the allocator is empty (no active allocation)
	 * @return @c true if the allocator is empty, @c false otherwise
	 */
	constexpr bool empty() const
	{
		return available() == size();
	}

	/**
	 * Runs some coherence checks on the allocator and its content
	 * @return @c true if the memory is coherent (no error found), @c false otherwise
	 */
	constexpr bool runCheck() const
	{
		auto startIndicator = 0; // start at the beginning of the data

		while (true)
		{
			const auto size = m_data[startIndicator]; // gets the size of the first space
			const auto endIndicatorIndex = static_cast<size_type>(startIndicator + 1 + std::abs(size)); // position of the end of chunk indicator

			if ((endIndicatorIndex > Size - 1) || m_data[endIndicatorIndex] != size) // the allocation points outside of the data or the end indicator has a different value
				return false;

			if constexpr (UseDummy)
				if (size > 0) // chunk was not allocated, verify it contains dummy value
					for (auto i = startIndicator + 1U; i < endIndicatorIndex; ++i)
						if (m_data[i] != Dummy)
							return false;

			startIndicator = endIndicatorIndex + 1;

			if (startIndicator == Size) // reached the end of the data
				return true;
		}
	}

private:

	std::array<element_type, Size> m_data;
};
