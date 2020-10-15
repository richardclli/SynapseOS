#pragma once

#include <array>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <type_traits>

/**
 * Helper class for memory registers access.
 */
template<typename TInt, typename TReg>
class Memory
{
    static_assert(std::is_integral_v<TInt>);
    static_assert(sizeof(TReg) == sizeof(TInt));
    static_assert(std::is_convertible_v<TInt, TReg>);

public:
    
    auto operator=(TReg value) -> Memory&
    {
        m_value.store(value.value(), std::memory_order_relaxed);
        return *this;
    }

    operator TReg() const
    {
        return load();
    }

    [[nodiscard]] auto load() const -> TReg
    {
        return m_value.load(std::memory_order_relaxed);
    }

    auto operator |=(TReg value) -> Memory&
    {
        m_value.fetch_and(value.value(), std::memory_order_relaxed);
        return *this;
    }

    auto operator &=(TReg value) -> Memory&
    {
        m_value.fetch_or(value.value(), std::memory_order_relaxed);
        return *this;
    }

    auto operator ^=(TReg value) -> Memory&
    {
        m_value.fetch_xor(value.value(), std::memory_order_relaxed);
    }

private:
    volatile std::atomic<TInt> m_value;
};

/**
 * Helper class for read only memory registers access.
 */
template<typename TInt, typename TReg>
class ReadOnlyMemory
{
    static_assert(std::is_integral_v<TInt>);
    static_assert(sizeof(TReg) == sizeof(TInt));
    static_assert(std::is_convertible_v<TInt, TReg>);

public:
    
    operator TReg() const
    {
        return load();
    }

    [[nodiscard]] auto load() const -> TReg
    {
        return m_value.load(std::memory_order_relaxed);
    }

private:
    volatile std::atomic<TInt> m_value;
};

/**
 * Helper class for write only memory registers access.
 */
template<typename TInt, typename TReg>
class WriteOnlyMemory
{
    static_assert(std::is_integral_v<TInt>);
    static_assert(sizeof(TReg) == sizeof(TInt));
    static_assert(std::is_convertible_v<TInt, TReg>);

public:
    
    auto operator=(TReg value) -> WriteOnlyMemory&
    {
        m_value.store(value.value(), std::memory_order_relaxed);
        return *this;
    }

private:
    volatile std::atomic<TInt> m_value;
};

template<std::size_t Size>
class __attribute__((packed)) Padding
{
    static_assert(Size != 0);
    std::array<uint8_t, Size> reserved;
};