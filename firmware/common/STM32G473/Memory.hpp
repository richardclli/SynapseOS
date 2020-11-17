#pragma once

#include <array>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <tuple>
#include <type_traits>

/**
 * Represents both a clear and a set operand for a specific register.
 */
template<typename TReg>
class ClearSet
{
public:

	constexpr ClearSet(TReg clear, TReg set) : m_clear(clear), m_set(set) {}

	constexpr auto operator||(ClearSet other) const -> ClearSet
	{
		return ClearSet(m_clear | other.m_clear, m_set | other.m_set);
	}

	constexpr auto clear() const -> TReg {return m_clear;}
	constexpr auto set() const -> TReg {return m_set;}

private:
	TReg m_clear;
	TReg m_set;
};

/**
 * Describes a value to handle atomically
 */
template<typename T>
struct atomic_t
{
	T value;
    constexpr auto operator~() {return atomic_t{~value};}
};

/**
 * A flag to tag a register value to handle atomically
 */
struct ato_flag_t {};
constexpr ato_flag_t atomic;

template<typename T>
constexpr auto operator|(T t, [[maybe_unused]] ato_flag_t ato) 
{
    return atomic_t<decltype(t|t)>{t};
}

template<typename T>
constexpr auto operator||(ClearSet<T> cs, [[maybe_unused]] ato_flag_t ato)
{
    return atomic_t<ClearSet<T>>{cs};
}

template<typename T>
constexpr auto operator||(T value, [[maybe_unused]] ato_flag_t ato)
{
    return atomic_t<decltype(value||value)>{decltype(value||value){T::Mask, value}};
}

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

    auto operator |=(atomic_t<TReg> value) -> Memory&
    {
        m_value.fetch_or(value.value.value(), std::memory_order_relaxed);
        return *this;
    }

    auto operator |=(TReg value) -> Memory&
	{
    	m_value.store(m_value.load(std::memory_order_relaxed) | value.value(), std::memory_order_relaxed);
    	return *this;
	}

    auto operator &=(atomic_t<TReg> value) -> Memory&
    {
        m_value.fetch_and(value.value.value(), std::memory_order_relaxed);
        return *this;
    }

    auto operator &=(TReg value) -> Memory&
    {
        m_value.store(m_value.load(std::memory_order_relaxed) & value.value(), std::memory_order_relaxed);
        return *this;
    }

    auto operator ^=(atomic_t<TReg> value) -> Memory&
    {
        m_value.fetch_xor(value.value.value(), std::memory_order_relaxed);
        return *this;
    }

    auto operator ^=(TReg value) -> Memory&
    {
        m_value.store(m_value.load(std::memory_order_relaxed) ^ value.value(), std::memory_order_relaxed);
        return *this;
    }

    auto operator <<=(ClearSet<TReg> value) -> Memory&
    {
        m_value.store((m_value.load(std::memory_order_relaxed) & ~value.clear().value()) | value.set().value(), std::memory_order_relaxed);
        return *this;
    }

    auto operator <<=(atomic_t<ClearSet<TReg>> value) -> Memory&
    {
        auto previous = m_value.load(std::memory_order_relaxed);
        while(!m_value.compare_exchange_strong(previous, (previous & ~value.value.clear().value()) | value.value.set().value(), std::memory_order_relaxed));
        return *this;
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
