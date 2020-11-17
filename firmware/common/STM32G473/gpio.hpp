#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * General-purpose I/Os
 */
class gpioa_p {
public:
/**
 * GPIO port mode register
 */
class moder_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class moder15_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder14_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder13_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder12_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder11_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder10_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder9_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder8_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder7_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder6_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder4_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder3_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto moder15() const -> moder15_f {return moder15_f(static_cast<uint8_t>(m_value >> moder15_f::Offset));}
	[[nodiscard]] constexpr auto moder14() const -> moder14_f {return moder14_f(static_cast<uint8_t>(m_value >> moder14_f::Offset));}
	[[nodiscard]] constexpr auto moder13() const -> moder13_f {return moder13_f(static_cast<uint8_t>(m_value >> moder13_f::Offset));}
	[[nodiscard]] constexpr auto moder12() const -> moder12_f {return moder12_f(static_cast<uint8_t>(m_value >> moder12_f::Offset));}
	[[nodiscard]] constexpr auto moder11() const -> moder11_f {return moder11_f(static_cast<uint8_t>(m_value >> moder11_f::Offset));}
	[[nodiscard]] constexpr auto moder10() const -> moder10_f {return moder10_f(static_cast<uint8_t>(m_value >> moder10_f::Offset));}
	[[nodiscard]] constexpr auto moder9() const -> moder9_f {return moder9_f(static_cast<uint8_t>(m_value >> moder9_f::Offset));}
	[[nodiscard]] constexpr auto moder8() const -> moder8_f {return moder8_f(static_cast<uint8_t>(m_value >> moder8_f::Offset));}
	[[nodiscard]] constexpr auto moder7() const -> moder7_f {return moder7_f(static_cast<uint8_t>(m_value >> moder7_f::Offset));}
	[[nodiscard]] constexpr auto moder6() const -> moder6_f {return moder6_f(static_cast<uint8_t>(m_value >> moder6_f::Offset));}
	[[nodiscard]] constexpr auto moder5() const -> moder5_f {return moder5_f(static_cast<uint8_t>(m_value >> moder5_f::Offset));}
	[[nodiscard]] constexpr auto moder4() const -> moder4_f {return moder4_f(static_cast<uint8_t>(m_value >> moder4_f::Offset));}
	[[nodiscard]] constexpr auto moder3() const -> moder3_f {return moder3_f(static_cast<uint8_t>(m_value >> moder3_f::Offset));}
	[[nodiscard]] constexpr auto moder2() const -> moder2_f {return moder2_f(static_cast<uint8_t>(m_value >> moder2_f::Offset));}
	[[nodiscard]] constexpr auto moder1() const -> moder1_f {return moder1_f(static_cast<uint8_t>(m_value >> moder1_f::Offset));}
	[[nodiscard]] constexpr auto moder0() const -> moder0_f {return moder0_f(static_cast<uint8_t>(m_value >> moder0_f::Offset));}

	template<std::size_t Index> struct moder_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using moder_v = typename moder_f<Index>::type;
	template<std::size_t Index> constexpr auto moder() const { return moder_v<Index>::get(*this); }

	constexpr moder_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(moder_r other) const -> moder_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> moder_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b10101011111111111111111111111111; // 2885681151 0xABFFFFFF

private:
	uint32_t m_value;
};
/**
 * GPIO port output type register
 */
class otyper_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class ot15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ot15() const -> ot15_f {return ot15_f((m_value & ot15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot14() const -> ot14_f {return ot14_f((m_value & ot14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot13() const -> ot13_f {return ot13_f((m_value & ot13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot12() const -> ot12_f {return ot12_f((m_value & ot12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot11() const -> ot11_f {return ot11_f((m_value & ot11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot10() const -> ot10_f {return ot10_f((m_value & ot10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot9() const -> ot9_f {return ot9_f((m_value & ot9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot8() const -> ot8_f {return ot8_f((m_value & ot8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot7() const -> ot7_f {return ot7_f((m_value & ot7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot6() const -> ot6_f {return ot6_f((m_value & ot6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot5() const -> ot5_f {return ot5_f((m_value & ot5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot4() const -> ot4_f {return ot4_f((m_value & ot4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot3() const -> ot3_f {return ot3_f((m_value & ot3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot2() const -> ot2_f {return ot2_f((m_value & ot2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot1() const -> ot1_f {return ot1_f((m_value & ot1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot0() const -> ot0_f {return ot0_f((m_value & ot0_f::Mask) != 0);}

	template<std::size_t Index> struct ot_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using ot_v = typename ot_f<Index>::type;
	template<std::size_t Index> constexpr auto ot() const { return ot_v<Index>::get(*this); }

	constexpr otyper_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(otyper_r other) const -> otyper_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> otyper_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port output speed register
 */
class ospeedr_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr15_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr14_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr13_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr12_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr11_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr10_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr9_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr8_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr7_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr6_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr4_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr3_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ospeedr15() const -> ospeedr15_f {return ospeedr15_f(static_cast<uint8_t>(m_value >> ospeedr15_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr14() const -> ospeedr14_f {return ospeedr14_f(static_cast<uint8_t>(m_value >> ospeedr14_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr13() const -> ospeedr13_f {return ospeedr13_f(static_cast<uint8_t>(m_value >> ospeedr13_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr12() const -> ospeedr12_f {return ospeedr12_f(static_cast<uint8_t>(m_value >> ospeedr12_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr11() const -> ospeedr11_f {return ospeedr11_f(static_cast<uint8_t>(m_value >> ospeedr11_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr10() const -> ospeedr10_f {return ospeedr10_f(static_cast<uint8_t>(m_value >> ospeedr10_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr9() const -> ospeedr9_f {return ospeedr9_f(static_cast<uint8_t>(m_value >> ospeedr9_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr8() const -> ospeedr8_f {return ospeedr8_f(static_cast<uint8_t>(m_value >> ospeedr8_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr7() const -> ospeedr7_f {return ospeedr7_f(static_cast<uint8_t>(m_value >> ospeedr7_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr6() const -> ospeedr6_f {return ospeedr6_f(static_cast<uint8_t>(m_value >> ospeedr6_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr5() const -> ospeedr5_f {return ospeedr5_f(static_cast<uint8_t>(m_value >> ospeedr5_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr4() const -> ospeedr4_f {return ospeedr4_f(static_cast<uint8_t>(m_value >> ospeedr4_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr3() const -> ospeedr3_f {return ospeedr3_f(static_cast<uint8_t>(m_value >> ospeedr3_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr2() const -> ospeedr2_f {return ospeedr2_f(static_cast<uint8_t>(m_value >> ospeedr2_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr1() const -> ospeedr1_f {return ospeedr1_f(static_cast<uint8_t>(m_value >> ospeedr1_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr0() const -> ospeedr0_f {return ospeedr0_f(static_cast<uint8_t>(m_value >> ospeedr0_f::Offset));}

	template<std::size_t Index> struct ospeedr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using ospeedr_v = typename ospeedr_f<Index>::type;
	template<std::size_t Index> constexpr auto ospeedr() const { return ospeedr_v<Index>::get(*this); }

	constexpr ospeedr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ospeedr_r other) const -> ospeedr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ospeedr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b1100000000000000000000000000; // 201326592 0xC000000

private:
	uint32_t m_value;
};
/**
 * GPIO port pull-up/pull-down register
 */
class pupdr_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr15_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr14_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr13_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr12_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr11_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr10_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr9_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr8_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr7_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr6_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr4_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr3_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pupdr15() const -> pupdr15_f {return pupdr15_f(static_cast<uint8_t>(m_value >> pupdr15_f::Offset));}
	[[nodiscard]] constexpr auto pupdr14() const -> pupdr14_f {return pupdr14_f(static_cast<uint8_t>(m_value >> pupdr14_f::Offset));}
	[[nodiscard]] constexpr auto pupdr13() const -> pupdr13_f {return pupdr13_f(static_cast<uint8_t>(m_value >> pupdr13_f::Offset));}
	[[nodiscard]] constexpr auto pupdr12() const -> pupdr12_f {return pupdr12_f(static_cast<uint8_t>(m_value >> pupdr12_f::Offset));}
	[[nodiscard]] constexpr auto pupdr11() const -> pupdr11_f {return pupdr11_f(static_cast<uint8_t>(m_value >> pupdr11_f::Offset));}
	[[nodiscard]] constexpr auto pupdr10() const -> pupdr10_f {return pupdr10_f(static_cast<uint8_t>(m_value >> pupdr10_f::Offset));}
	[[nodiscard]] constexpr auto pupdr9() const -> pupdr9_f {return pupdr9_f(static_cast<uint8_t>(m_value >> pupdr9_f::Offset));}
	[[nodiscard]] constexpr auto pupdr8() const -> pupdr8_f {return pupdr8_f(static_cast<uint8_t>(m_value >> pupdr8_f::Offset));}
	[[nodiscard]] constexpr auto pupdr7() const -> pupdr7_f {return pupdr7_f(static_cast<uint8_t>(m_value >> pupdr7_f::Offset));}
	[[nodiscard]] constexpr auto pupdr6() const -> pupdr6_f {return pupdr6_f(static_cast<uint8_t>(m_value >> pupdr6_f::Offset));}
	[[nodiscard]] constexpr auto pupdr5() const -> pupdr5_f {return pupdr5_f(static_cast<uint8_t>(m_value >> pupdr5_f::Offset));}
	[[nodiscard]] constexpr auto pupdr4() const -> pupdr4_f {return pupdr4_f(static_cast<uint8_t>(m_value >> pupdr4_f::Offset));}
	[[nodiscard]] constexpr auto pupdr3() const -> pupdr3_f {return pupdr3_f(static_cast<uint8_t>(m_value >> pupdr3_f::Offset));}
	[[nodiscard]] constexpr auto pupdr2() const -> pupdr2_f {return pupdr2_f(static_cast<uint8_t>(m_value >> pupdr2_f::Offset));}
	[[nodiscard]] constexpr auto pupdr1() const -> pupdr1_f {return pupdr1_f(static_cast<uint8_t>(m_value >> pupdr1_f::Offset));}
	[[nodiscard]] constexpr auto pupdr0() const -> pupdr0_f {return pupdr0_f(static_cast<uint8_t>(m_value >> pupdr0_f::Offset));}

	template<std::size_t Index> struct pupdr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pupdr_v = typename pupdr_f<Index>::type;
	template<std::size_t Index> constexpr auto pupdr() const { return pupdr_v<Index>::get(*this); }

	constexpr pupdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pupdr_r other) const -> pupdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pupdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0b1100100000000000000000000000000; // 1677721600 0x64000000

private:
	uint32_t m_value;
};
/**
 * GPIO port input data register
 */
class idr_r {
public:

/**
 * Port input data (y = 0..15)
 */
class idr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto idr15() const -> idr15_f {return idr15_f((m_value & idr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr14() const -> idr14_f {return idr14_f((m_value & idr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr13() const -> idr13_f {return idr13_f((m_value & idr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr12() const -> idr12_f {return idr12_f((m_value & idr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr11() const -> idr11_f {return idr11_f((m_value & idr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr10() const -> idr10_f {return idr10_f((m_value & idr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr9() const -> idr9_f {return idr9_f((m_value & idr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr8() const -> idr8_f {return idr8_f((m_value & idr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr7() const -> idr7_f {return idr7_f((m_value & idr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr6() const -> idr6_f {return idr6_f((m_value & idr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr5() const -> idr5_f {return idr5_f((m_value & idr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr4() const -> idr4_f {return idr4_f((m_value & idr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr3() const -> idr3_f {return idr3_f((m_value & idr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr2() const -> idr2_f {return idr2_f((m_value & idr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr1() const -> idr1_f {return idr1_f((m_value & idr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr0() const -> idr0_f {return idr0_f((m_value & idr0_f::Mask) != 0);}

	template<std::size_t Index> struct idr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using idr_v = typename idr_f<Index>::type;
	template<std::size_t Index> constexpr auto idr() const { return idr_v<Index>::get(*this); }

	constexpr idr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(idr_r other) const -> idr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> idr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port output data register
 */
class odr_r {
public:

/**
 * Port output data (y = 0..15)
 */
class odr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto odr15() const -> odr15_f {return odr15_f((m_value & odr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr14() const -> odr14_f {return odr14_f((m_value & odr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr13() const -> odr13_f {return odr13_f((m_value & odr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr12() const -> odr12_f {return odr12_f((m_value & odr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr11() const -> odr11_f {return odr11_f((m_value & odr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr10() const -> odr10_f {return odr10_f((m_value & odr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr9() const -> odr9_f {return odr9_f((m_value & odr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr8() const -> odr8_f {return odr8_f((m_value & odr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr7() const -> odr7_f {return odr7_f((m_value & odr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr6() const -> odr6_f {return odr6_f((m_value & odr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr5() const -> odr5_f {return odr5_f((m_value & odr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr4() const -> odr4_f {return odr4_f((m_value & odr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr3() const -> odr3_f {return odr3_f((m_value & odr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr2() const -> odr2_f {return odr2_f((m_value & odr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr1() const -> odr1_f {return odr1_f((m_value & odr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr0() const -> odr0_f {return odr0_f((m_value & odr0_f::Mask) != 0);}

	template<std::size_t Index> struct odr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using odr_v = typename odr_f<Index>::type;
	template<std::size_t Index> constexpr auto odr() const { return odr_v<Index>::get(*this); }

	constexpr odr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(odr_r other) const -> odr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> odr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port bit set/reset register
 */
class bsrr_r {
public:

/**
 * Port x reset bit y (y = 0..15)
 */
class br15_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br14_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br13_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br12_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br11_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br10_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br9_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br8_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br7_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br6_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br5_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br4_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br3_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br2_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br1_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class br0_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto br15() const -> br15_f {return br15_f((m_value & br15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br14() const -> br14_f {return br14_f((m_value & br14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br13() const -> br13_f {return br13_f((m_value & br13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br12() const -> br12_f {return br12_f((m_value & br12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br11() const -> br11_f {return br11_f((m_value & br11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br10() const -> br10_f {return br10_f((m_value & br10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br9() const -> br9_f {return br9_f((m_value & br9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br8() const -> br8_f {return br8_f((m_value & br8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br7() const -> br7_f {return br7_f((m_value & br7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br6() const -> br6_f {return br6_f((m_value & br6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br5() const -> br5_f {return br5_f((m_value & br5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br4() const -> br4_f {return br4_f((m_value & br4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br3() const -> br3_f {return br3_f((m_value & br3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br2() const -> br2_f {return br2_f((m_value & br2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br1() const -> br1_f {return br1_f((m_value & br1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br0() const -> br0_f {return br0_f((m_value & br0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs15() const -> bs15_f {return bs15_f((m_value & bs15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs14() const -> bs14_f {return bs14_f((m_value & bs14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs13() const -> bs13_f {return bs13_f((m_value & bs13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs12() const -> bs12_f {return bs12_f((m_value & bs12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs11() const -> bs11_f {return bs11_f((m_value & bs11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs10() const -> bs10_f {return bs10_f((m_value & bs10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs9() const -> bs9_f {return bs9_f((m_value & bs9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs8() const -> bs8_f {return bs8_f((m_value & bs8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs7() const -> bs7_f {return bs7_f((m_value & bs7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs6() const -> bs6_f {return bs6_f((m_value & bs6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs5() const -> bs5_f {return bs5_f((m_value & bs5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs4() const -> bs4_f {return bs4_f((m_value & bs4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs3() const -> bs3_f {return bs3_f((m_value & bs3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs2() const -> bs2_f {return bs2_f((m_value & bs2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs1() const -> bs1_f {return bs1_f((m_value & bs1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs0() const -> bs0_f {return bs0_f((m_value & bs0_f::Mask) != 0);}

	template<std::size_t Index> struct br_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using br_v = typename br_f<Index>::type;
	template<std::size_t Index> constexpr auto br() const { return br_v<Index>::get(*this); }

	template<std::size_t Index> struct bs_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using bs_v = typename bs_f<Index>::type;
	template<std::size_t Index> constexpr auto bs() const { return bs_v<Index>::get(*this); }

	constexpr bsrr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bsrr_r other) const -> bsrr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bsrr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port configuration lock register
 */
class lckr_r {
public:

/**
 * Port x lock bit y (y= 0..15)
 */
class lckk_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lckk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lckk() const -> lckk_f {return lckk_f((m_value & lckk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck15() const -> lck15_f {return lck15_f((m_value & lck15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck14() const -> lck14_f {return lck14_f((m_value & lck14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck13() const -> lck13_f {return lck13_f((m_value & lck13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck12() const -> lck12_f {return lck12_f((m_value & lck12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck11() const -> lck11_f {return lck11_f((m_value & lck11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck10() const -> lck10_f {return lck10_f((m_value & lck10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck9() const -> lck9_f {return lck9_f((m_value & lck9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck8() const -> lck8_f {return lck8_f((m_value & lck8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck7() const -> lck7_f {return lck7_f((m_value & lck7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck6() const -> lck6_f {return lck6_f((m_value & lck6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck5() const -> lck5_f {return lck5_f((m_value & lck5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck4() const -> lck4_f {return lck4_f((m_value & lck4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck3() const -> lck3_f {return lck3_f((m_value & lck3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck2() const -> lck2_f {return lck2_f((m_value & lck2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck1() const -> lck1_f {return lck1_f((m_value & lck1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck0() const -> lck0_f {return lck0_f((m_value & lck0_f::Mask) != 0);}

	template<std::size_t Index> struct lck_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using lck_v = typename lck_f<Index>::type;
	template<std::size_t Index> constexpr auto lck() const { return lck_v<Index>::get(*this); }

	constexpr lckr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(lckr_r other) const -> lckr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> lckr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO alternate function low register
 */
class afrl_r {
public:

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl7_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl6_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl5_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl4_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl3_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrl3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl2_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrl2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl1_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrl1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrl0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto afrl7() const -> afrl7_f {return afrl7_f(static_cast<uint8_t>(m_value >> afrl7_f::Offset));}
	[[nodiscard]] constexpr auto afrl6() const -> afrl6_f {return afrl6_f(static_cast<uint8_t>(m_value >> afrl6_f::Offset));}
	[[nodiscard]] constexpr auto afrl5() const -> afrl5_f {return afrl5_f(static_cast<uint8_t>(m_value >> afrl5_f::Offset));}
	[[nodiscard]] constexpr auto afrl4() const -> afrl4_f {return afrl4_f(static_cast<uint8_t>(m_value >> afrl4_f::Offset));}
	[[nodiscard]] constexpr auto afrl3() const -> afrl3_f {return afrl3_f(static_cast<uint8_t>(m_value >> afrl3_f::Offset));}
	[[nodiscard]] constexpr auto afrl2() const -> afrl2_f {return afrl2_f(static_cast<uint8_t>(m_value >> afrl2_f::Offset));}
	[[nodiscard]] constexpr auto afrl1() const -> afrl1_f {return afrl1_f(static_cast<uint8_t>(m_value >> afrl1_f::Offset));}
	[[nodiscard]] constexpr auto afrl0() const -> afrl0_f {return afrl0_f(static_cast<uint8_t>(m_value >> afrl0_f::Offset));}

	template<std::size_t Index> struct afrl_f { static_assert(Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using afrl_v = typename afrl_f<Index>::type;
	template<std::size_t Index> constexpr auto afrl() const { return afrl_v<Index>::get(*this); }

	constexpr afrl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(afrl_r other) const -> afrl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> afrl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO alternate function high register
 */
class afrh_r {
public:

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh15_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh14_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh13_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh12_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh11_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrh11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh10_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrh10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh9_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrh9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh8_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrh8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto afrh15() const -> afrh15_f {return afrh15_f(static_cast<uint8_t>(m_value >> afrh15_f::Offset));}
	[[nodiscard]] constexpr auto afrh14() const -> afrh14_f {return afrh14_f(static_cast<uint8_t>(m_value >> afrh14_f::Offset));}
	[[nodiscard]] constexpr auto afrh13() const -> afrh13_f {return afrh13_f(static_cast<uint8_t>(m_value >> afrh13_f::Offset));}
	[[nodiscard]] constexpr auto afrh12() const -> afrh12_f {return afrh12_f(static_cast<uint8_t>(m_value >> afrh12_f::Offset));}
	[[nodiscard]] constexpr auto afrh11() const -> afrh11_f {return afrh11_f(static_cast<uint8_t>(m_value >> afrh11_f::Offset));}
	[[nodiscard]] constexpr auto afrh10() const -> afrh10_f {return afrh10_f(static_cast<uint8_t>(m_value >> afrh10_f::Offset));}
	[[nodiscard]] constexpr auto afrh9() const -> afrh9_f {return afrh9_f(static_cast<uint8_t>(m_value >> afrh9_f::Offset));}
	[[nodiscard]] constexpr auto afrh8() const -> afrh8_f {return afrh8_f(static_cast<uint8_t>(m_value >> afrh8_f::Offset));}

	template<std::size_t Index> struct afrh_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8); };
	template<std::size_t Index> using afrh_v = typename afrh_f<Index>::type;
	template<std::size_t Index> constexpr auto afrh() const { return afrh_v<Index>::get(*this); }

	constexpr afrh_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(afrh_r other) const -> afrh_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> afrh_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port bit reset register
 */
class brr_r {
public:

/**
 * Port Reset bit
 */
class br0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto br0() const -> br0_f {return br0_f((m_value & br0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br1() const -> br1_f {return br1_f((m_value & br1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br2() const -> br2_f {return br2_f((m_value & br2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br3() const -> br3_f {return br3_f((m_value & br3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br4() const -> br4_f {return br4_f((m_value & br4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br5() const -> br5_f {return br5_f((m_value & br5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br6() const -> br6_f {return br6_f((m_value & br6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br7() const -> br7_f {return br7_f((m_value & br7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br8() const -> br8_f {return br8_f((m_value & br8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br9() const -> br9_f {return br9_f((m_value & br9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br10() const -> br10_f {return br10_f((m_value & br10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br11() const -> br11_f {return br11_f((m_value & br11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br12() const -> br12_f {return br12_f((m_value & br12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br13() const -> br13_f {return br13_f((m_value & br13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br14() const -> br14_f {return br14_f((m_value & br14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br15() const -> br15_f {return br15_f((m_value & br15_f::Mask) != 0);}

	template<std::size_t Index> struct br_f { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8 || Index == 9 || Index == 10 || Index == 11 || Index == 12 || Index == 13 || Index == 14 || Index == 15); };
	template<std::size_t Index> using br_v = typename br_f<Index>::type;
	template<std::size_t Index> constexpr auto br() const { return br_v<Index>::get(*this); }

	constexpr brr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(brr_r other) const -> brr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> brr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,moder_r> moder;
	Memory<uint32_t,otyper_r> otyper;
	Memory<uint32_t,ospeedr_r> ospeedr;
	Memory<uint32_t,pupdr_r> pupdr;
	ReadOnlyMemory<uint32_t,idr_r> idr;
	Memory<uint32_t,odr_r> odr;
	WriteOnlyMemory<uint32_t,bsrr_r> bsrr;
	Memory<uint32_t,lckr_r> lckr;
	Memory<uint32_t,afrl_r> afrl;
	Memory<uint32_t,afrh_r> afrh;
	WriteOnlyMemory<uint32_t,brr_r> brr;
};

template<> struct gpioa_p::moder_r::moder_f<15> { using type = gpioa_p::moder_r::moder15_f; };
template<> struct gpioa_p::moder_r::moder_f<14> { using type = gpioa_p::moder_r::moder14_f; };
template<> struct gpioa_p::moder_r::moder_f<13> { using type = gpioa_p::moder_r::moder13_f; };
template<> struct gpioa_p::moder_r::moder_f<12> { using type = gpioa_p::moder_r::moder12_f; };
template<> struct gpioa_p::moder_r::moder_f<11> { using type = gpioa_p::moder_r::moder11_f; };
template<> struct gpioa_p::moder_r::moder_f<10> { using type = gpioa_p::moder_r::moder10_f; };
template<> struct gpioa_p::moder_r::moder_f<9> { using type = gpioa_p::moder_r::moder9_f; };
template<> struct gpioa_p::moder_r::moder_f<8> { using type = gpioa_p::moder_r::moder8_f; };
template<> struct gpioa_p::moder_r::moder_f<7> { using type = gpioa_p::moder_r::moder7_f; };
template<> struct gpioa_p::moder_r::moder_f<6> { using type = gpioa_p::moder_r::moder6_f; };
template<> struct gpioa_p::moder_r::moder_f<5> { using type = gpioa_p::moder_r::moder5_f; };
template<> struct gpioa_p::moder_r::moder_f<4> { using type = gpioa_p::moder_r::moder4_f; };
template<> struct gpioa_p::moder_r::moder_f<3> { using type = gpioa_p::moder_r::moder3_f; };
template<> struct gpioa_p::moder_r::moder_f<2> { using type = gpioa_p::moder_r::moder2_f; };
template<> struct gpioa_p::moder_r::moder_f<1> { using type = gpioa_p::moder_r::moder1_f; };
template<> struct gpioa_p::moder_r::moder_f<0> { using type = gpioa_p::moder_r::moder0_f; };

template<> struct gpioa_p::otyper_r::ot_f<15> { using type = gpioa_p::otyper_r::ot15_f; };
template<> struct gpioa_p::otyper_r::ot_f<14> { using type = gpioa_p::otyper_r::ot14_f; };
template<> struct gpioa_p::otyper_r::ot_f<13> { using type = gpioa_p::otyper_r::ot13_f; };
template<> struct gpioa_p::otyper_r::ot_f<12> { using type = gpioa_p::otyper_r::ot12_f; };
template<> struct gpioa_p::otyper_r::ot_f<11> { using type = gpioa_p::otyper_r::ot11_f; };
template<> struct gpioa_p::otyper_r::ot_f<10> { using type = gpioa_p::otyper_r::ot10_f; };
template<> struct gpioa_p::otyper_r::ot_f<9> { using type = gpioa_p::otyper_r::ot9_f; };
template<> struct gpioa_p::otyper_r::ot_f<8> { using type = gpioa_p::otyper_r::ot8_f; };
template<> struct gpioa_p::otyper_r::ot_f<7> { using type = gpioa_p::otyper_r::ot7_f; };
template<> struct gpioa_p::otyper_r::ot_f<6> { using type = gpioa_p::otyper_r::ot6_f; };
template<> struct gpioa_p::otyper_r::ot_f<5> { using type = gpioa_p::otyper_r::ot5_f; };
template<> struct gpioa_p::otyper_r::ot_f<4> { using type = gpioa_p::otyper_r::ot4_f; };
template<> struct gpioa_p::otyper_r::ot_f<3> { using type = gpioa_p::otyper_r::ot3_f; };
template<> struct gpioa_p::otyper_r::ot_f<2> { using type = gpioa_p::otyper_r::ot2_f; };
template<> struct gpioa_p::otyper_r::ot_f<1> { using type = gpioa_p::otyper_r::ot1_f; };
template<> struct gpioa_p::otyper_r::ot_f<0> { using type = gpioa_p::otyper_r::ot0_f; };

template<> struct gpioa_p::ospeedr_r::ospeedr_f<15> { using type = gpioa_p::ospeedr_r::ospeedr15_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<14> { using type = gpioa_p::ospeedr_r::ospeedr14_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<13> { using type = gpioa_p::ospeedr_r::ospeedr13_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<12> { using type = gpioa_p::ospeedr_r::ospeedr12_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<11> { using type = gpioa_p::ospeedr_r::ospeedr11_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<10> { using type = gpioa_p::ospeedr_r::ospeedr10_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<9> { using type = gpioa_p::ospeedr_r::ospeedr9_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<8> { using type = gpioa_p::ospeedr_r::ospeedr8_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<7> { using type = gpioa_p::ospeedr_r::ospeedr7_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<6> { using type = gpioa_p::ospeedr_r::ospeedr6_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<5> { using type = gpioa_p::ospeedr_r::ospeedr5_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<4> { using type = gpioa_p::ospeedr_r::ospeedr4_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<3> { using type = gpioa_p::ospeedr_r::ospeedr3_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<2> { using type = gpioa_p::ospeedr_r::ospeedr2_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<1> { using type = gpioa_p::ospeedr_r::ospeedr1_f; };
template<> struct gpioa_p::ospeedr_r::ospeedr_f<0> { using type = gpioa_p::ospeedr_r::ospeedr0_f; };

template<> struct gpioa_p::pupdr_r::pupdr_f<15> { using type = gpioa_p::pupdr_r::pupdr15_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<14> { using type = gpioa_p::pupdr_r::pupdr14_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<13> { using type = gpioa_p::pupdr_r::pupdr13_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<12> { using type = gpioa_p::pupdr_r::pupdr12_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<11> { using type = gpioa_p::pupdr_r::pupdr11_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<10> { using type = gpioa_p::pupdr_r::pupdr10_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<9> { using type = gpioa_p::pupdr_r::pupdr9_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<8> { using type = gpioa_p::pupdr_r::pupdr8_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<7> { using type = gpioa_p::pupdr_r::pupdr7_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<6> { using type = gpioa_p::pupdr_r::pupdr6_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<5> { using type = gpioa_p::pupdr_r::pupdr5_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<4> { using type = gpioa_p::pupdr_r::pupdr4_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<3> { using type = gpioa_p::pupdr_r::pupdr3_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<2> { using type = gpioa_p::pupdr_r::pupdr2_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<1> { using type = gpioa_p::pupdr_r::pupdr1_f; };
template<> struct gpioa_p::pupdr_r::pupdr_f<0> { using type = gpioa_p::pupdr_r::pupdr0_f; };

template<> struct gpioa_p::idr_r::idr_f<15> { using type = gpioa_p::idr_r::idr15_f; };
template<> struct gpioa_p::idr_r::idr_f<14> { using type = gpioa_p::idr_r::idr14_f; };
template<> struct gpioa_p::idr_r::idr_f<13> { using type = gpioa_p::idr_r::idr13_f; };
template<> struct gpioa_p::idr_r::idr_f<12> { using type = gpioa_p::idr_r::idr12_f; };
template<> struct gpioa_p::idr_r::idr_f<11> { using type = gpioa_p::idr_r::idr11_f; };
template<> struct gpioa_p::idr_r::idr_f<10> { using type = gpioa_p::idr_r::idr10_f; };
template<> struct gpioa_p::idr_r::idr_f<9> { using type = gpioa_p::idr_r::idr9_f; };
template<> struct gpioa_p::idr_r::idr_f<8> { using type = gpioa_p::idr_r::idr8_f; };
template<> struct gpioa_p::idr_r::idr_f<7> { using type = gpioa_p::idr_r::idr7_f; };
template<> struct gpioa_p::idr_r::idr_f<6> { using type = gpioa_p::idr_r::idr6_f; };
template<> struct gpioa_p::idr_r::idr_f<5> { using type = gpioa_p::idr_r::idr5_f; };
template<> struct gpioa_p::idr_r::idr_f<4> { using type = gpioa_p::idr_r::idr4_f; };
template<> struct gpioa_p::idr_r::idr_f<3> { using type = gpioa_p::idr_r::idr3_f; };
template<> struct gpioa_p::idr_r::idr_f<2> { using type = gpioa_p::idr_r::idr2_f; };
template<> struct gpioa_p::idr_r::idr_f<1> { using type = gpioa_p::idr_r::idr1_f; };
template<> struct gpioa_p::idr_r::idr_f<0> { using type = gpioa_p::idr_r::idr0_f; };

template<> struct gpioa_p::odr_r::odr_f<15> { using type = gpioa_p::odr_r::odr15_f; };
template<> struct gpioa_p::odr_r::odr_f<14> { using type = gpioa_p::odr_r::odr14_f; };
template<> struct gpioa_p::odr_r::odr_f<13> { using type = gpioa_p::odr_r::odr13_f; };
template<> struct gpioa_p::odr_r::odr_f<12> { using type = gpioa_p::odr_r::odr12_f; };
template<> struct gpioa_p::odr_r::odr_f<11> { using type = gpioa_p::odr_r::odr11_f; };
template<> struct gpioa_p::odr_r::odr_f<10> { using type = gpioa_p::odr_r::odr10_f; };
template<> struct gpioa_p::odr_r::odr_f<9> { using type = gpioa_p::odr_r::odr9_f; };
template<> struct gpioa_p::odr_r::odr_f<8> { using type = gpioa_p::odr_r::odr8_f; };
template<> struct gpioa_p::odr_r::odr_f<7> { using type = gpioa_p::odr_r::odr7_f; };
template<> struct gpioa_p::odr_r::odr_f<6> { using type = gpioa_p::odr_r::odr6_f; };
template<> struct gpioa_p::odr_r::odr_f<5> { using type = gpioa_p::odr_r::odr5_f; };
template<> struct gpioa_p::odr_r::odr_f<4> { using type = gpioa_p::odr_r::odr4_f; };
template<> struct gpioa_p::odr_r::odr_f<3> { using type = gpioa_p::odr_r::odr3_f; };
template<> struct gpioa_p::odr_r::odr_f<2> { using type = gpioa_p::odr_r::odr2_f; };
template<> struct gpioa_p::odr_r::odr_f<1> { using type = gpioa_p::odr_r::odr1_f; };
template<> struct gpioa_p::odr_r::odr_f<0> { using type = gpioa_p::odr_r::odr0_f; };

template<> struct gpioa_p::bsrr_r::br_f<15> { using type = gpioa_p::bsrr_r::br15_f; };
template<> struct gpioa_p::bsrr_r::br_f<14> { using type = gpioa_p::bsrr_r::br14_f; };
template<> struct gpioa_p::bsrr_r::br_f<13> { using type = gpioa_p::bsrr_r::br13_f; };
template<> struct gpioa_p::bsrr_r::br_f<12> { using type = gpioa_p::bsrr_r::br12_f; };
template<> struct gpioa_p::bsrr_r::br_f<11> { using type = gpioa_p::bsrr_r::br11_f; };
template<> struct gpioa_p::bsrr_r::br_f<10> { using type = gpioa_p::bsrr_r::br10_f; };
template<> struct gpioa_p::bsrr_r::br_f<9> { using type = gpioa_p::bsrr_r::br9_f; };
template<> struct gpioa_p::bsrr_r::br_f<8> { using type = gpioa_p::bsrr_r::br8_f; };
template<> struct gpioa_p::bsrr_r::br_f<7> { using type = gpioa_p::bsrr_r::br7_f; };
template<> struct gpioa_p::bsrr_r::br_f<6> { using type = gpioa_p::bsrr_r::br6_f; };
template<> struct gpioa_p::bsrr_r::br_f<5> { using type = gpioa_p::bsrr_r::br5_f; };
template<> struct gpioa_p::bsrr_r::br_f<4> { using type = gpioa_p::bsrr_r::br4_f; };
template<> struct gpioa_p::bsrr_r::br_f<3> { using type = gpioa_p::bsrr_r::br3_f; };
template<> struct gpioa_p::bsrr_r::br_f<2> { using type = gpioa_p::bsrr_r::br2_f; };
template<> struct gpioa_p::bsrr_r::br_f<1> { using type = gpioa_p::bsrr_r::br1_f; };
template<> struct gpioa_p::bsrr_r::br_f<0> { using type = gpioa_p::bsrr_r::br0_f; };
template<> struct gpioa_p::bsrr_r::bs_f<15> { using type = gpioa_p::bsrr_r::bs15_f; };
template<> struct gpioa_p::bsrr_r::bs_f<14> { using type = gpioa_p::bsrr_r::bs14_f; };
template<> struct gpioa_p::bsrr_r::bs_f<13> { using type = gpioa_p::bsrr_r::bs13_f; };
template<> struct gpioa_p::bsrr_r::bs_f<12> { using type = gpioa_p::bsrr_r::bs12_f; };
template<> struct gpioa_p::bsrr_r::bs_f<11> { using type = gpioa_p::bsrr_r::bs11_f; };
template<> struct gpioa_p::bsrr_r::bs_f<10> { using type = gpioa_p::bsrr_r::bs10_f; };
template<> struct gpioa_p::bsrr_r::bs_f<9> { using type = gpioa_p::bsrr_r::bs9_f; };
template<> struct gpioa_p::bsrr_r::bs_f<8> { using type = gpioa_p::bsrr_r::bs8_f; };
template<> struct gpioa_p::bsrr_r::bs_f<7> { using type = gpioa_p::bsrr_r::bs7_f; };
template<> struct gpioa_p::bsrr_r::bs_f<6> { using type = gpioa_p::bsrr_r::bs6_f; };
template<> struct gpioa_p::bsrr_r::bs_f<5> { using type = gpioa_p::bsrr_r::bs5_f; };
template<> struct gpioa_p::bsrr_r::bs_f<4> { using type = gpioa_p::bsrr_r::bs4_f; };
template<> struct gpioa_p::bsrr_r::bs_f<3> { using type = gpioa_p::bsrr_r::bs3_f; };
template<> struct gpioa_p::bsrr_r::bs_f<2> { using type = gpioa_p::bsrr_r::bs2_f; };
template<> struct gpioa_p::bsrr_r::bs_f<1> { using type = gpioa_p::bsrr_r::bs1_f; };
template<> struct gpioa_p::bsrr_r::bs_f<0> { using type = gpioa_p::bsrr_r::bs0_f; };

template<> struct gpioa_p::lckr_r::lck_f<15> { using type = gpioa_p::lckr_r::lck15_f; };
template<> struct gpioa_p::lckr_r::lck_f<14> { using type = gpioa_p::lckr_r::lck14_f; };
template<> struct gpioa_p::lckr_r::lck_f<13> { using type = gpioa_p::lckr_r::lck13_f; };
template<> struct gpioa_p::lckr_r::lck_f<12> { using type = gpioa_p::lckr_r::lck12_f; };
template<> struct gpioa_p::lckr_r::lck_f<11> { using type = gpioa_p::lckr_r::lck11_f; };
template<> struct gpioa_p::lckr_r::lck_f<10> { using type = gpioa_p::lckr_r::lck10_f; };
template<> struct gpioa_p::lckr_r::lck_f<9> { using type = gpioa_p::lckr_r::lck9_f; };
template<> struct gpioa_p::lckr_r::lck_f<8> { using type = gpioa_p::lckr_r::lck8_f; };
template<> struct gpioa_p::lckr_r::lck_f<7> { using type = gpioa_p::lckr_r::lck7_f; };
template<> struct gpioa_p::lckr_r::lck_f<6> { using type = gpioa_p::lckr_r::lck6_f; };
template<> struct gpioa_p::lckr_r::lck_f<5> { using type = gpioa_p::lckr_r::lck5_f; };
template<> struct gpioa_p::lckr_r::lck_f<4> { using type = gpioa_p::lckr_r::lck4_f; };
template<> struct gpioa_p::lckr_r::lck_f<3> { using type = gpioa_p::lckr_r::lck3_f; };
template<> struct gpioa_p::lckr_r::lck_f<2> { using type = gpioa_p::lckr_r::lck2_f; };
template<> struct gpioa_p::lckr_r::lck_f<1> { using type = gpioa_p::lckr_r::lck1_f; };
template<> struct gpioa_p::lckr_r::lck_f<0> { using type = gpioa_p::lckr_r::lck0_f; };

template<> struct gpioa_p::afrl_r::afrl_f<7> { using type = gpioa_p::afrl_r::afrl7_f; };
template<> struct gpioa_p::afrl_r::afrl_f<6> { using type = gpioa_p::afrl_r::afrl6_f; };
template<> struct gpioa_p::afrl_r::afrl_f<5> { using type = gpioa_p::afrl_r::afrl5_f; };
template<> struct gpioa_p::afrl_r::afrl_f<4> { using type = gpioa_p::afrl_r::afrl4_f; };
template<> struct gpioa_p::afrl_r::afrl_f<3> { using type = gpioa_p::afrl_r::afrl3_f; };
template<> struct gpioa_p::afrl_r::afrl_f<2> { using type = gpioa_p::afrl_r::afrl2_f; };
template<> struct gpioa_p::afrl_r::afrl_f<1> { using type = gpioa_p::afrl_r::afrl1_f; };
template<> struct gpioa_p::afrl_r::afrl_f<0> { using type = gpioa_p::afrl_r::afrl0_f; };

template<> struct gpioa_p::afrh_r::afrh_f<15> { using type = gpioa_p::afrh_r::afrh15_f; };
template<> struct gpioa_p::afrh_r::afrh_f<14> { using type = gpioa_p::afrh_r::afrh14_f; };
template<> struct gpioa_p::afrh_r::afrh_f<13> { using type = gpioa_p::afrh_r::afrh13_f; };
template<> struct gpioa_p::afrh_r::afrh_f<12> { using type = gpioa_p::afrh_r::afrh12_f; };
template<> struct gpioa_p::afrh_r::afrh_f<11> { using type = gpioa_p::afrh_r::afrh11_f; };
template<> struct gpioa_p::afrh_r::afrh_f<10> { using type = gpioa_p::afrh_r::afrh10_f; };
template<> struct gpioa_p::afrh_r::afrh_f<9> { using type = gpioa_p::afrh_r::afrh9_f; };
template<> struct gpioa_p::afrh_r::afrh_f<8> { using type = gpioa_p::afrh_r::afrh8_f; };

template<> struct gpioa_p::brr_r::br_f<0> { using type = gpioa_p::brr_r::br0_f; };
template<> struct gpioa_p::brr_r::br_f<1> { using type = gpioa_p::brr_r::br1_f; };
template<> struct gpioa_p::brr_r::br_f<2> { using type = gpioa_p::brr_r::br2_f; };
template<> struct gpioa_p::brr_r::br_f<3> { using type = gpioa_p::brr_r::br3_f; };
template<> struct gpioa_p::brr_r::br_f<4> { using type = gpioa_p::brr_r::br4_f; };
template<> struct gpioa_p::brr_r::br_f<5> { using type = gpioa_p::brr_r::br5_f; };
template<> struct gpioa_p::brr_r::br_f<6> { using type = gpioa_p::brr_r::br6_f; };
template<> struct gpioa_p::brr_r::br_f<7> { using type = gpioa_p::brr_r::br7_f; };
template<> struct gpioa_p::brr_r::br_f<8> { using type = gpioa_p::brr_r::br8_f; };
template<> struct gpioa_p::brr_r::br_f<9> { using type = gpioa_p::brr_r::br9_f; };
template<> struct gpioa_p::brr_r::br_f<10> { using type = gpioa_p::brr_r::br10_f; };
template<> struct gpioa_p::brr_r::br_f<11> { using type = gpioa_p::brr_r::br11_f; };
template<> struct gpioa_p::brr_r::br_f<12> { using type = gpioa_p::brr_r::br12_f; };
template<> struct gpioa_p::brr_r::br_f<13> { using type = gpioa_p::brr_r::br13_f; };
template<> struct gpioa_p::brr_r::br_f<14> { using type = gpioa_p::brr_r::br14_f; };
template<> struct gpioa_p::brr_r::br_f<15> { using type = gpioa_p::brr_r::br15_f; };

static_assert(std::is_standard_layout_v<gpioa_p>);
static_assert(offsetof(gpioa_p, moder) == gpioa_p::moder_r::Offset);
static_assert(offsetof(gpioa_p, otyper) == gpioa_p::otyper_r::Offset);
static_assert(offsetof(gpioa_p, ospeedr) == gpioa_p::ospeedr_r::Offset);
static_assert(offsetof(gpioa_p, pupdr) == gpioa_p::pupdr_r::Offset);
static_assert(offsetof(gpioa_p, idr) == gpioa_p::idr_r::Offset);
static_assert(offsetof(gpioa_p, odr) == gpioa_p::odr_r::Offset);
static_assert(offsetof(gpioa_p, bsrr) == gpioa_p::bsrr_r::Offset);
static_assert(offsetof(gpioa_p, lckr) == gpioa_p::lckr_r::Offset);
static_assert(offsetof(gpioa_p, afrl) == gpioa_p::afrl_r::Offset);
static_assert(offsetof(gpioa_p, afrh) == gpioa_p::afrh_r::Offset);
static_assert(offsetof(gpioa_p, brr) == gpioa_p::brr_r::Offset);

/**
 * General-purpose I/Os
 */
class gpiob_p {
public:
/**
 * GPIO port mode register
 */
class moder_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class moder15_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder14_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder13_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder12_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder11_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder10_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder9_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder8_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder7_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder6_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder4_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder3_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto moder15() const -> moder15_f {return moder15_f(static_cast<uint8_t>(m_value >> moder15_f::Offset));}
	[[nodiscard]] constexpr auto moder14() const -> moder14_f {return moder14_f(static_cast<uint8_t>(m_value >> moder14_f::Offset));}
	[[nodiscard]] constexpr auto moder13() const -> moder13_f {return moder13_f(static_cast<uint8_t>(m_value >> moder13_f::Offset));}
	[[nodiscard]] constexpr auto moder12() const -> moder12_f {return moder12_f(static_cast<uint8_t>(m_value >> moder12_f::Offset));}
	[[nodiscard]] constexpr auto moder11() const -> moder11_f {return moder11_f(static_cast<uint8_t>(m_value >> moder11_f::Offset));}
	[[nodiscard]] constexpr auto moder10() const -> moder10_f {return moder10_f(static_cast<uint8_t>(m_value >> moder10_f::Offset));}
	[[nodiscard]] constexpr auto moder9() const -> moder9_f {return moder9_f(static_cast<uint8_t>(m_value >> moder9_f::Offset));}
	[[nodiscard]] constexpr auto moder8() const -> moder8_f {return moder8_f(static_cast<uint8_t>(m_value >> moder8_f::Offset));}
	[[nodiscard]] constexpr auto moder7() const -> moder7_f {return moder7_f(static_cast<uint8_t>(m_value >> moder7_f::Offset));}
	[[nodiscard]] constexpr auto moder6() const -> moder6_f {return moder6_f(static_cast<uint8_t>(m_value >> moder6_f::Offset));}
	[[nodiscard]] constexpr auto moder5() const -> moder5_f {return moder5_f(static_cast<uint8_t>(m_value >> moder5_f::Offset));}
	[[nodiscard]] constexpr auto moder4() const -> moder4_f {return moder4_f(static_cast<uint8_t>(m_value >> moder4_f::Offset));}
	[[nodiscard]] constexpr auto moder3() const -> moder3_f {return moder3_f(static_cast<uint8_t>(m_value >> moder3_f::Offset));}
	[[nodiscard]] constexpr auto moder2() const -> moder2_f {return moder2_f(static_cast<uint8_t>(m_value >> moder2_f::Offset));}
	[[nodiscard]] constexpr auto moder1() const -> moder1_f {return moder1_f(static_cast<uint8_t>(m_value >> moder1_f::Offset));}
	[[nodiscard]] constexpr auto moder0() const -> moder0_f {return moder0_f(static_cast<uint8_t>(m_value >> moder0_f::Offset));}

	template<std::size_t Index> struct moder_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using moder_v = typename moder_f<Index>::type;
	template<std::size_t Index> constexpr auto moder() const { return moder_v<Index>::get(*this); }

	constexpr moder_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(moder_r other) const -> moder_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> moder_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b11111111111111111111111010111111; // 4294966975 0xFFFFFEBF

private:
	uint32_t m_value;
};
/**
 * GPIO port output type register
 */
class otyper_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class ot15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ot15() const -> ot15_f {return ot15_f((m_value & ot15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot14() const -> ot14_f {return ot14_f((m_value & ot14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot13() const -> ot13_f {return ot13_f((m_value & ot13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot12() const -> ot12_f {return ot12_f((m_value & ot12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot11() const -> ot11_f {return ot11_f((m_value & ot11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot10() const -> ot10_f {return ot10_f((m_value & ot10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot9() const -> ot9_f {return ot9_f((m_value & ot9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot8() const -> ot8_f {return ot8_f((m_value & ot8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot7() const -> ot7_f {return ot7_f((m_value & ot7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot6() const -> ot6_f {return ot6_f((m_value & ot6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot5() const -> ot5_f {return ot5_f((m_value & ot5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot4() const -> ot4_f {return ot4_f((m_value & ot4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot3() const -> ot3_f {return ot3_f((m_value & ot3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot2() const -> ot2_f {return ot2_f((m_value & ot2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot1() const -> ot1_f {return ot1_f((m_value & ot1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot0() const -> ot0_f {return ot0_f((m_value & ot0_f::Mask) != 0);}

	template<std::size_t Index> struct ot_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using ot_v = typename ot_f<Index>::type;
	template<std::size_t Index> constexpr auto ot() const { return ot_v<Index>::get(*this); }

	constexpr otyper_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(otyper_r other) const -> otyper_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> otyper_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port output speed register
 */
class ospeedr_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr15_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr14_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr13_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr12_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr11_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr10_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr9_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr8_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr7_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr6_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr4_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr3_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ospeedr15() const -> ospeedr15_f {return ospeedr15_f(static_cast<uint8_t>(m_value >> ospeedr15_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr14() const -> ospeedr14_f {return ospeedr14_f(static_cast<uint8_t>(m_value >> ospeedr14_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr13() const -> ospeedr13_f {return ospeedr13_f(static_cast<uint8_t>(m_value >> ospeedr13_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr12() const -> ospeedr12_f {return ospeedr12_f(static_cast<uint8_t>(m_value >> ospeedr12_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr11() const -> ospeedr11_f {return ospeedr11_f(static_cast<uint8_t>(m_value >> ospeedr11_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr10() const -> ospeedr10_f {return ospeedr10_f(static_cast<uint8_t>(m_value >> ospeedr10_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr9() const -> ospeedr9_f {return ospeedr9_f(static_cast<uint8_t>(m_value >> ospeedr9_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr8() const -> ospeedr8_f {return ospeedr8_f(static_cast<uint8_t>(m_value >> ospeedr8_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr7() const -> ospeedr7_f {return ospeedr7_f(static_cast<uint8_t>(m_value >> ospeedr7_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr6() const -> ospeedr6_f {return ospeedr6_f(static_cast<uint8_t>(m_value >> ospeedr6_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr5() const -> ospeedr5_f {return ospeedr5_f(static_cast<uint8_t>(m_value >> ospeedr5_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr4() const -> ospeedr4_f {return ospeedr4_f(static_cast<uint8_t>(m_value >> ospeedr4_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr3() const -> ospeedr3_f {return ospeedr3_f(static_cast<uint8_t>(m_value >> ospeedr3_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr2() const -> ospeedr2_f {return ospeedr2_f(static_cast<uint8_t>(m_value >> ospeedr2_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr1() const -> ospeedr1_f {return ospeedr1_f(static_cast<uint8_t>(m_value >> ospeedr1_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr0() const -> ospeedr0_f {return ospeedr0_f(static_cast<uint8_t>(m_value >> ospeedr0_f::Offset));}

	template<std::size_t Index> struct ospeedr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using ospeedr_v = typename ospeedr_f<Index>::type;
	template<std::size_t Index> constexpr auto ospeedr() const { return ospeedr_v<Index>::get(*this); }

	constexpr ospeedr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ospeedr_r other) const -> ospeedr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ospeedr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b11000000; // 192 0xC0

private:
	uint32_t m_value;
};
/**
 * GPIO port pull-up/pull-down register
 */
class pupdr_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr15_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr14_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr13_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr12_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr11_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr10_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr9_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr8_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr7_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr6_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr4_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr3_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pupdr15() const -> pupdr15_f {return pupdr15_f(static_cast<uint8_t>(m_value >> pupdr15_f::Offset));}
	[[nodiscard]] constexpr auto pupdr14() const -> pupdr14_f {return pupdr14_f(static_cast<uint8_t>(m_value >> pupdr14_f::Offset));}
	[[nodiscard]] constexpr auto pupdr13() const -> pupdr13_f {return pupdr13_f(static_cast<uint8_t>(m_value >> pupdr13_f::Offset));}
	[[nodiscard]] constexpr auto pupdr12() const -> pupdr12_f {return pupdr12_f(static_cast<uint8_t>(m_value >> pupdr12_f::Offset));}
	[[nodiscard]] constexpr auto pupdr11() const -> pupdr11_f {return pupdr11_f(static_cast<uint8_t>(m_value >> pupdr11_f::Offset));}
	[[nodiscard]] constexpr auto pupdr10() const -> pupdr10_f {return pupdr10_f(static_cast<uint8_t>(m_value >> pupdr10_f::Offset));}
	[[nodiscard]] constexpr auto pupdr9() const -> pupdr9_f {return pupdr9_f(static_cast<uint8_t>(m_value >> pupdr9_f::Offset));}
	[[nodiscard]] constexpr auto pupdr8() const -> pupdr8_f {return pupdr8_f(static_cast<uint8_t>(m_value >> pupdr8_f::Offset));}
	[[nodiscard]] constexpr auto pupdr7() const -> pupdr7_f {return pupdr7_f(static_cast<uint8_t>(m_value >> pupdr7_f::Offset));}
	[[nodiscard]] constexpr auto pupdr6() const -> pupdr6_f {return pupdr6_f(static_cast<uint8_t>(m_value >> pupdr6_f::Offset));}
	[[nodiscard]] constexpr auto pupdr5() const -> pupdr5_f {return pupdr5_f(static_cast<uint8_t>(m_value >> pupdr5_f::Offset));}
	[[nodiscard]] constexpr auto pupdr4() const -> pupdr4_f {return pupdr4_f(static_cast<uint8_t>(m_value >> pupdr4_f::Offset));}
	[[nodiscard]] constexpr auto pupdr3() const -> pupdr3_f {return pupdr3_f(static_cast<uint8_t>(m_value >> pupdr3_f::Offset));}
	[[nodiscard]] constexpr auto pupdr2() const -> pupdr2_f {return pupdr2_f(static_cast<uint8_t>(m_value >> pupdr2_f::Offset));}
	[[nodiscard]] constexpr auto pupdr1() const -> pupdr1_f {return pupdr1_f(static_cast<uint8_t>(m_value >> pupdr1_f::Offset));}
	[[nodiscard]] constexpr auto pupdr0() const -> pupdr0_f {return pupdr0_f(static_cast<uint8_t>(m_value >> pupdr0_f::Offset));}

	template<std::size_t Index> struct pupdr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pupdr_v = typename pupdr_f<Index>::type;
	template<std::size_t Index> constexpr auto pupdr() const { return pupdr_v<Index>::get(*this); }

	constexpr pupdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pupdr_r other) const -> pupdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pupdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0b100000000; // 256 0x100

private:
	uint32_t m_value;
};
/**
 * GPIO port input data register
 */
class idr_r {
public:

/**
 * Port input data (y = 0..15)
 */
class idr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto idr15() const -> idr15_f {return idr15_f((m_value & idr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr14() const -> idr14_f {return idr14_f((m_value & idr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr13() const -> idr13_f {return idr13_f((m_value & idr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr12() const -> idr12_f {return idr12_f((m_value & idr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr11() const -> idr11_f {return idr11_f((m_value & idr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr10() const -> idr10_f {return idr10_f((m_value & idr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr9() const -> idr9_f {return idr9_f((m_value & idr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr8() const -> idr8_f {return idr8_f((m_value & idr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr7() const -> idr7_f {return idr7_f((m_value & idr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr6() const -> idr6_f {return idr6_f((m_value & idr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr5() const -> idr5_f {return idr5_f((m_value & idr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr4() const -> idr4_f {return idr4_f((m_value & idr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr3() const -> idr3_f {return idr3_f((m_value & idr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr2() const -> idr2_f {return idr2_f((m_value & idr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr1() const -> idr1_f {return idr1_f((m_value & idr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr0() const -> idr0_f {return idr0_f((m_value & idr0_f::Mask) != 0);}

	template<std::size_t Index> struct idr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using idr_v = typename idr_f<Index>::type;
	template<std::size_t Index> constexpr auto idr() const { return idr_v<Index>::get(*this); }

	constexpr idr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(idr_r other) const -> idr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> idr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port output data register
 */
class odr_r {
public:

/**
 * Port output data (y = 0..15)
 */
class odr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto odr15() const -> odr15_f {return odr15_f((m_value & odr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr14() const -> odr14_f {return odr14_f((m_value & odr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr13() const -> odr13_f {return odr13_f((m_value & odr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr12() const -> odr12_f {return odr12_f((m_value & odr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr11() const -> odr11_f {return odr11_f((m_value & odr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr10() const -> odr10_f {return odr10_f((m_value & odr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr9() const -> odr9_f {return odr9_f((m_value & odr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr8() const -> odr8_f {return odr8_f((m_value & odr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr7() const -> odr7_f {return odr7_f((m_value & odr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr6() const -> odr6_f {return odr6_f((m_value & odr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr5() const -> odr5_f {return odr5_f((m_value & odr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr4() const -> odr4_f {return odr4_f((m_value & odr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr3() const -> odr3_f {return odr3_f((m_value & odr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr2() const -> odr2_f {return odr2_f((m_value & odr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr1() const -> odr1_f {return odr1_f((m_value & odr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr0() const -> odr0_f {return odr0_f((m_value & odr0_f::Mask) != 0);}

	template<std::size_t Index> struct odr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using odr_v = typename odr_f<Index>::type;
	template<std::size_t Index> constexpr auto odr() const { return odr_v<Index>::get(*this); }

	constexpr odr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(odr_r other) const -> odr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> odr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port bit set/reset register
 */
class bsrr_r {
public:

/**
 * Port x reset bit y (y = 0..15)
 */
class br15_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br14_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br13_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br12_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br11_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br10_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br9_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br8_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br7_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br6_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br5_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br4_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br3_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br2_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br1_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class br0_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto br15() const -> br15_f {return br15_f((m_value & br15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br14() const -> br14_f {return br14_f((m_value & br14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br13() const -> br13_f {return br13_f((m_value & br13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br12() const -> br12_f {return br12_f((m_value & br12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br11() const -> br11_f {return br11_f((m_value & br11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br10() const -> br10_f {return br10_f((m_value & br10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br9() const -> br9_f {return br9_f((m_value & br9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br8() const -> br8_f {return br8_f((m_value & br8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br7() const -> br7_f {return br7_f((m_value & br7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br6() const -> br6_f {return br6_f((m_value & br6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br5() const -> br5_f {return br5_f((m_value & br5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br4() const -> br4_f {return br4_f((m_value & br4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br3() const -> br3_f {return br3_f((m_value & br3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br2() const -> br2_f {return br2_f((m_value & br2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br1() const -> br1_f {return br1_f((m_value & br1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br0() const -> br0_f {return br0_f((m_value & br0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs15() const -> bs15_f {return bs15_f((m_value & bs15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs14() const -> bs14_f {return bs14_f((m_value & bs14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs13() const -> bs13_f {return bs13_f((m_value & bs13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs12() const -> bs12_f {return bs12_f((m_value & bs12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs11() const -> bs11_f {return bs11_f((m_value & bs11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs10() const -> bs10_f {return bs10_f((m_value & bs10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs9() const -> bs9_f {return bs9_f((m_value & bs9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs8() const -> bs8_f {return bs8_f((m_value & bs8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs7() const -> bs7_f {return bs7_f((m_value & bs7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs6() const -> bs6_f {return bs6_f((m_value & bs6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs5() const -> bs5_f {return bs5_f((m_value & bs5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs4() const -> bs4_f {return bs4_f((m_value & bs4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs3() const -> bs3_f {return bs3_f((m_value & bs3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs2() const -> bs2_f {return bs2_f((m_value & bs2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs1() const -> bs1_f {return bs1_f((m_value & bs1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs0() const -> bs0_f {return bs0_f((m_value & bs0_f::Mask) != 0);}

	template<std::size_t Index> struct br_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using br_v = typename br_f<Index>::type;
	template<std::size_t Index> constexpr auto br() const { return br_v<Index>::get(*this); }

	template<std::size_t Index> struct bs_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using bs_v = typename bs_f<Index>::type;
	template<std::size_t Index> constexpr auto bs() const { return bs_v<Index>::get(*this); }

	constexpr bsrr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bsrr_r other) const -> bsrr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bsrr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port configuration lock register
 */
class lckr_r {
public:

/**
 * Port x lock bit y (y= 0..15)
 */
class lckk_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lckk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lckk() const -> lckk_f {return lckk_f((m_value & lckk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck15() const -> lck15_f {return lck15_f((m_value & lck15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck14() const -> lck14_f {return lck14_f((m_value & lck14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck13() const -> lck13_f {return lck13_f((m_value & lck13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck12() const -> lck12_f {return lck12_f((m_value & lck12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck11() const -> lck11_f {return lck11_f((m_value & lck11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck10() const -> lck10_f {return lck10_f((m_value & lck10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck9() const -> lck9_f {return lck9_f((m_value & lck9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck8() const -> lck8_f {return lck8_f((m_value & lck8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck7() const -> lck7_f {return lck7_f((m_value & lck7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck6() const -> lck6_f {return lck6_f((m_value & lck6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck5() const -> lck5_f {return lck5_f((m_value & lck5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck4() const -> lck4_f {return lck4_f((m_value & lck4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck3() const -> lck3_f {return lck3_f((m_value & lck3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck2() const -> lck2_f {return lck2_f((m_value & lck2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck1() const -> lck1_f {return lck1_f((m_value & lck1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck0() const -> lck0_f {return lck0_f((m_value & lck0_f::Mask) != 0);}

	template<std::size_t Index> struct lck_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using lck_v = typename lck_f<Index>::type;
	template<std::size_t Index> constexpr auto lck() const { return lck_v<Index>::get(*this); }

	constexpr lckr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(lckr_r other) const -> lckr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> lckr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO alternate function low register
 */
class afrl_r {
public:

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl7_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl6_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl5_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl4_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl3_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrl3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl2_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrl2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl1_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrl1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrl0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto afrl7() const -> afrl7_f {return afrl7_f(static_cast<uint8_t>(m_value >> afrl7_f::Offset));}
	[[nodiscard]] constexpr auto afrl6() const -> afrl6_f {return afrl6_f(static_cast<uint8_t>(m_value >> afrl6_f::Offset));}
	[[nodiscard]] constexpr auto afrl5() const -> afrl5_f {return afrl5_f(static_cast<uint8_t>(m_value >> afrl5_f::Offset));}
	[[nodiscard]] constexpr auto afrl4() const -> afrl4_f {return afrl4_f(static_cast<uint8_t>(m_value >> afrl4_f::Offset));}
	[[nodiscard]] constexpr auto afrl3() const -> afrl3_f {return afrl3_f(static_cast<uint8_t>(m_value >> afrl3_f::Offset));}
	[[nodiscard]] constexpr auto afrl2() const -> afrl2_f {return afrl2_f(static_cast<uint8_t>(m_value >> afrl2_f::Offset));}
	[[nodiscard]] constexpr auto afrl1() const -> afrl1_f {return afrl1_f(static_cast<uint8_t>(m_value >> afrl1_f::Offset));}
	[[nodiscard]] constexpr auto afrl0() const -> afrl0_f {return afrl0_f(static_cast<uint8_t>(m_value >> afrl0_f::Offset));}

	template<std::size_t Index> struct afrl_f { static_assert(Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using afrl_v = typename afrl_f<Index>::type;
	template<std::size_t Index> constexpr auto afrl() const { return afrl_v<Index>::get(*this); }

	constexpr afrl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(afrl_r other) const -> afrl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> afrl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO alternate function high register
 */
class afrh_r {
public:

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh15_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh14_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh13_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh12_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh11_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrh11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh10_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrh10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh9_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrh9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh8_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrh8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto afrh15() const -> afrh15_f {return afrh15_f(static_cast<uint8_t>(m_value >> afrh15_f::Offset));}
	[[nodiscard]] constexpr auto afrh14() const -> afrh14_f {return afrh14_f(static_cast<uint8_t>(m_value >> afrh14_f::Offset));}
	[[nodiscard]] constexpr auto afrh13() const -> afrh13_f {return afrh13_f(static_cast<uint8_t>(m_value >> afrh13_f::Offset));}
	[[nodiscard]] constexpr auto afrh12() const -> afrh12_f {return afrh12_f(static_cast<uint8_t>(m_value >> afrh12_f::Offset));}
	[[nodiscard]] constexpr auto afrh11() const -> afrh11_f {return afrh11_f(static_cast<uint8_t>(m_value >> afrh11_f::Offset));}
	[[nodiscard]] constexpr auto afrh10() const -> afrh10_f {return afrh10_f(static_cast<uint8_t>(m_value >> afrh10_f::Offset));}
	[[nodiscard]] constexpr auto afrh9() const -> afrh9_f {return afrh9_f(static_cast<uint8_t>(m_value >> afrh9_f::Offset));}
	[[nodiscard]] constexpr auto afrh8() const -> afrh8_f {return afrh8_f(static_cast<uint8_t>(m_value >> afrh8_f::Offset));}

	template<std::size_t Index> struct afrh_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8); };
	template<std::size_t Index> using afrh_v = typename afrh_f<Index>::type;
	template<std::size_t Index> constexpr auto afrh() const { return afrh_v<Index>::get(*this); }

	constexpr afrh_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(afrh_r other) const -> afrh_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> afrh_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port bit reset register
 */
class brr_r {
public:

/**
 * Port Reset bit
 */
class br0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto br0() const -> br0_f {return br0_f((m_value & br0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br1() const -> br1_f {return br1_f((m_value & br1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br2() const -> br2_f {return br2_f((m_value & br2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br3() const -> br3_f {return br3_f((m_value & br3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br4() const -> br4_f {return br4_f((m_value & br4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br5() const -> br5_f {return br5_f((m_value & br5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br6() const -> br6_f {return br6_f((m_value & br6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br7() const -> br7_f {return br7_f((m_value & br7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br8() const -> br8_f {return br8_f((m_value & br8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br9() const -> br9_f {return br9_f((m_value & br9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br10() const -> br10_f {return br10_f((m_value & br10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br11() const -> br11_f {return br11_f((m_value & br11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br12() const -> br12_f {return br12_f((m_value & br12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br13() const -> br13_f {return br13_f((m_value & br13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br14() const -> br14_f {return br14_f((m_value & br14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br15() const -> br15_f {return br15_f((m_value & br15_f::Mask) != 0);}

	template<std::size_t Index> struct br_f { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8 || Index == 9 || Index == 10 || Index == 11 || Index == 12 || Index == 13 || Index == 14 || Index == 15); };
	template<std::size_t Index> using br_v = typename br_f<Index>::type;
	template<std::size_t Index> constexpr auto br() const { return br_v<Index>::get(*this); }

	constexpr brr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(brr_r other) const -> brr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> brr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,moder_r> moder;
	Memory<uint32_t,otyper_r> otyper;
	Memory<uint32_t,ospeedr_r> ospeedr;
	Memory<uint32_t,pupdr_r> pupdr;
	ReadOnlyMemory<uint32_t,idr_r> idr;
	Memory<uint32_t,odr_r> odr;
	WriteOnlyMemory<uint32_t,bsrr_r> bsrr;
	Memory<uint32_t,lckr_r> lckr;
	Memory<uint32_t,afrl_r> afrl;
	Memory<uint32_t,afrh_r> afrh;
	WriteOnlyMemory<uint32_t,brr_r> brr;
};

template<> struct gpiob_p::moder_r::moder_f<15> { using type = gpiob_p::moder_r::moder15_f; };
template<> struct gpiob_p::moder_r::moder_f<14> { using type = gpiob_p::moder_r::moder14_f; };
template<> struct gpiob_p::moder_r::moder_f<13> { using type = gpiob_p::moder_r::moder13_f; };
template<> struct gpiob_p::moder_r::moder_f<12> { using type = gpiob_p::moder_r::moder12_f; };
template<> struct gpiob_p::moder_r::moder_f<11> { using type = gpiob_p::moder_r::moder11_f; };
template<> struct gpiob_p::moder_r::moder_f<10> { using type = gpiob_p::moder_r::moder10_f; };
template<> struct gpiob_p::moder_r::moder_f<9> { using type = gpiob_p::moder_r::moder9_f; };
template<> struct gpiob_p::moder_r::moder_f<8> { using type = gpiob_p::moder_r::moder8_f; };
template<> struct gpiob_p::moder_r::moder_f<7> { using type = gpiob_p::moder_r::moder7_f; };
template<> struct gpiob_p::moder_r::moder_f<6> { using type = gpiob_p::moder_r::moder6_f; };
template<> struct gpiob_p::moder_r::moder_f<5> { using type = gpiob_p::moder_r::moder5_f; };
template<> struct gpiob_p::moder_r::moder_f<4> { using type = gpiob_p::moder_r::moder4_f; };
template<> struct gpiob_p::moder_r::moder_f<3> { using type = gpiob_p::moder_r::moder3_f; };
template<> struct gpiob_p::moder_r::moder_f<2> { using type = gpiob_p::moder_r::moder2_f; };
template<> struct gpiob_p::moder_r::moder_f<1> { using type = gpiob_p::moder_r::moder1_f; };
template<> struct gpiob_p::moder_r::moder_f<0> { using type = gpiob_p::moder_r::moder0_f; };

template<> struct gpiob_p::otyper_r::ot_f<15> { using type = gpiob_p::otyper_r::ot15_f; };
template<> struct gpiob_p::otyper_r::ot_f<14> { using type = gpiob_p::otyper_r::ot14_f; };
template<> struct gpiob_p::otyper_r::ot_f<13> { using type = gpiob_p::otyper_r::ot13_f; };
template<> struct gpiob_p::otyper_r::ot_f<12> { using type = gpiob_p::otyper_r::ot12_f; };
template<> struct gpiob_p::otyper_r::ot_f<11> { using type = gpiob_p::otyper_r::ot11_f; };
template<> struct gpiob_p::otyper_r::ot_f<10> { using type = gpiob_p::otyper_r::ot10_f; };
template<> struct gpiob_p::otyper_r::ot_f<9> { using type = gpiob_p::otyper_r::ot9_f; };
template<> struct gpiob_p::otyper_r::ot_f<8> { using type = gpiob_p::otyper_r::ot8_f; };
template<> struct gpiob_p::otyper_r::ot_f<7> { using type = gpiob_p::otyper_r::ot7_f; };
template<> struct gpiob_p::otyper_r::ot_f<6> { using type = gpiob_p::otyper_r::ot6_f; };
template<> struct gpiob_p::otyper_r::ot_f<5> { using type = gpiob_p::otyper_r::ot5_f; };
template<> struct gpiob_p::otyper_r::ot_f<4> { using type = gpiob_p::otyper_r::ot4_f; };
template<> struct gpiob_p::otyper_r::ot_f<3> { using type = gpiob_p::otyper_r::ot3_f; };
template<> struct gpiob_p::otyper_r::ot_f<2> { using type = gpiob_p::otyper_r::ot2_f; };
template<> struct gpiob_p::otyper_r::ot_f<1> { using type = gpiob_p::otyper_r::ot1_f; };
template<> struct gpiob_p::otyper_r::ot_f<0> { using type = gpiob_p::otyper_r::ot0_f; };

template<> struct gpiob_p::ospeedr_r::ospeedr_f<15> { using type = gpiob_p::ospeedr_r::ospeedr15_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<14> { using type = gpiob_p::ospeedr_r::ospeedr14_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<13> { using type = gpiob_p::ospeedr_r::ospeedr13_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<12> { using type = gpiob_p::ospeedr_r::ospeedr12_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<11> { using type = gpiob_p::ospeedr_r::ospeedr11_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<10> { using type = gpiob_p::ospeedr_r::ospeedr10_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<9> { using type = gpiob_p::ospeedr_r::ospeedr9_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<8> { using type = gpiob_p::ospeedr_r::ospeedr8_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<7> { using type = gpiob_p::ospeedr_r::ospeedr7_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<6> { using type = gpiob_p::ospeedr_r::ospeedr6_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<5> { using type = gpiob_p::ospeedr_r::ospeedr5_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<4> { using type = gpiob_p::ospeedr_r::ospeedr4_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<3> { using type = gpiob_p::ospeedr_r::ospeedr3_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<2> { using type = gpiob_p::ospeedr_r::ospeedr2_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<1> { using type = gpiob_p::ospeedr_r::ospeedr1_f; };
template<> struct gpiob_p::ospeedr_r::ospeedr_f<0> { using type = gpiob_p::ospeedr_r::ospeedr0_f; };

template<> struct gpiob_p::pupdr_r::pupdr_f<15> { using type = gpiob_p::pupdr_r::pupdr15_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<14> { using type = gpiob_p::pupdr_r::pupdr14_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<13> { using type = gpiob_p::pupdr_r::pupdr13_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<12> { using type = gpiob_p::pupdr_r::pupdr12_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<11> { using type = gpiob_p::pupdr_r::pupdr11_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<10> { using type = gpiob_p::pupdr_r::pupdr10_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<9> { using type = gpiob_p::pupdr_r::pupdr9_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<8> { using type = gpiob_p::pupdr_r::pupdr8_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<7> { using type = gpiob_p::pupdr_r::pupdr7_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<6> { using type = gpiob_p::pupdr_r::pupdr6_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<5> { using type = gpiob_p::pupdr_r::pupdr5_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<4> { using type = gpiob_p::pupdr_r::pupdr4_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<3> { using type = gpiob_p::pupdr_r::pupdr3_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<2> { using type = gpiob_p::pupdr_r::pupdr2_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<1> { using type = gpiob_p::pupdr_r::pupdr1_f; };
template<> struct gpiob_p::pupdr_r::pupdr_f<0> { using type = gpiob_p::pupdr_r::pupdr0_f; };

template<> struct gpiob_p::idr_r::idr_f<15> { using type = gpiob_p::idr_r::idr15_f; };
template<> struct gpiob_p::idr_r::idr_f<14> { using type = gpiob_p::idr_r::idr14_f; };
template<> struct gpiob_p::idr_r::idr_f<13> { using type = gpiob_p::idr_r::idr13_f; };
template<> struct gpiob_p::idr_r::idr_f<12> { using type = gpiob_p::idr_r::idr12_f; };
template<> struct gpiob_p::idr_r::idr_f<11> { using type = gpiob_p::idr_r::idr11_f; };
template<> struct gpiob_p::idr_r::idr_f<10> { using type = gpiob_p::idr_r::idr10_f; };
template<> struct gpiob_p::idr_r::idr_f<9> { using type = gpiob_p::idr_r::idr9_f; };
template<> struct gpiob_p::idr_r::idr_f<8> { using type = gpiob_p::idr_r::idr8_f; };
template<> struct gpiob_p::idr_r::idr_f<7> { using type = gpiob_p::idr_r::idr7_f; };
template<> struct gpiob_p::idr_r::idr_f<6> { using type = gpiob_p::idr_r::idr6_f; };
template<> struct gpiob_p::idr_r::idr_f<5> { using type = gpiob_p::idr_r::idr5_f; };
template<> struct gpiob_p::idr_r::idr_f<4> { using type = gpiob_p::idr_r::idr4_f; };
template<> struct gpiob_p::idr_r::idr_f<3> { using type = gpiob_p::idr_r::idr3_f; };
template<> struct gpiob_p::idr_r::idr_f<2> { using type = gpiob_p::idr_r::idr2_f; };
template<> struct gpiob_p::idr_r::idr_f<1> { using type = gpiob_p::idr_r::idr1_f; };
template<> struct gpiob_p::idr_r::idr_f<0> { using type = gpiob_p::idr_r::idr0_f; };

template<> struct gpiob_p::odr_r::odr_f<15> { using type = gpiob_p::odr_r::odr15_f; };
template<> struct gpiob_p::odr_r::odr_f<14> { using type = gpiob_p::odr_r::odr14_f; };
template<> struct gpiob_p::odr_r::odr_f<13> { using type = gpiob_p::odr_r::odr13_f; };
template<> struct gpiob_p::odr_r::odr_f<12> { using type = gpiob_p::odr_r::odr12_f; };
template<> struct gpiob_p::odr_r::odr_f<11> { using type = gpiob_p::odr_r::odr11_f; };
template<> struct gpiob_p::odr_r::odr_f<10> { using type = gpiob_p::odr_r::odr10_f; };
template<> struct gpiob_p::odr_r::odr_f<9> { using type = gpiob_p::odr_r::odr9_f; };
template<> struct gpiob_p::odr_r::odr_f<8> { using type = gpiob_p::odr_r::odr8_f; };
template<> struct gpiob_p::odr_r::odr_f<7> { using type = gpiob_p::odr_r::odr7_f; };
template<> struct gpiob_p::odr_r::odr_f<6> { using type = gpiob_p::odr_r::odr6_f; };
template<> struct gpiob_p::odr_r::odr_f<5> { using type = gpiob_p::odr_r::odr5_f; };
template<> struct gpiob_p::odr_r::odr_f<4> { using type = gpiob_p::odr_r::odr4_f; };
template<> struct gpiob_p::odr_r::odr_f<3> { using type = gpiob_p::odr_r::odr3_f; };
template<> struct gpiob_p::odr_r::odr_f<2> { using type = gpiob_p::odr_r::odr2_f; };
template<> struct gpiob_p::odr_r::odr_f<1> { using type = gpiob_p::odr_r::odr1_f; };
template<> struct gpiob_p::odr_r::odr_f<0> { using type = gpiob_p::odr_r::odr0_f; };

template<> struct gpiob_p::bsrr_r::br_f<15> { using type = gpiob_p::bsrr_r::br15_f; };
template<> struct gpiob_p::bsrr_r::br_f<14> { using type = gpiob_p::bsrr_r::br14_f; };
template<> struct gpiob_p::bsrr_r::br_f<13> { using type = gpiob_p::bsrr_r::br13_f; };
template<> struct gpiob_p::bsrr_r::br_f<12> { using type = gpiob_p::bsrr_r::br12_f; };
template<> struct gpiob_p::bsrr_r::br_f<11> { using type = gpiob_p::bsrr_r::br11_f; };
template<> struct gpiob_p::bsrr_r::br_f<10> { using type = gpiob_p::bsrr_r::br10_f; };
template<> struct gpiob_p::bsrr_r::br_f<9> { using type = gpiob_p::bsrr_r::br9_f; };
template<> struct gpiob_p::bsrr_r::br_f<8> { using type = gpiob_p::bsrr_r::br8_f; };
template<> struct gpiob_p::bsrr_r::br_f<7> { using type = gpiob_p::bsrr_r::br7_f; };
template<> struct gpiob_p::bsrr_r::br_f<6> { using type = gpiob_p::bsrr_r::br6_f; };
template<> struct gpiob_p::bsrr_r::br_f<5> { using type = gpiob_p::bsrr_r::br5_f; };
template<> struct gpiob_p::bsrr_r::br_f<4> { using type = gpiob_p::bsrr_r::br4_f; };
template<> struct gpiob_p::bsrr_r::br_f<3> { using type = gpiob_p::bsrr_r::br3_f; };
template<> struct gpiob_p::bsrr_r::br_f<2> { using type = gpiob_p::bsrr_r::br2_f; };
template<> struct gpiob_p::bsrr_r::br_f<1> { using type = gpiob_p::bsrr_r::br1_f; };
template<> struct gpiob_p::bsrr_r::br_f<0> { using type = gpiob_p::bsrr_r::br0_f; };
template<> struct gpiob_p::bsrr_r::bs_f<15> { using type = gpiob_p::bsrr_r::bs15_f; };
template<> struct gpiob_p::bsrr_r::bs_f<14> { using type = gpiob_p::bsrr_r::bs14_f; };
template<> struct gpiob_p::bsrr_r::bs_f<13> { using type = gpiob_p::bsrr_r::bs13_f; };
template<> struct gpiob_p::bsrr_r::bs_f<12> { using type = gpiob_p::bsrr_r::bs12_f; };
template<> struct gpiob_p::bsrr_r::bs_f<11> { using type = gpiob_p::bsrr_r::bs11_f; };
template<> struct gpiob_p::bsrr_r::bs_f<10> { using type = gpiob_p::bsrr_r::bs10_f; };
template<> struct gpiob_p::bsrr_r::bs_f<9> { using type = gpiob_p::bsrr_r::bs9_f; };
template<> struct gpiob_p::bsrr_r::bs_f<8> { using type = gpiob_p::bsrr_r::bs8_f; };
template<> struct gpiob_p::bsrr_r::bs_f<7> { using type = gpiob_p::bsrr_r::bs7_f; };
template<> struct gpiob_p::bsrr_r::bs_f<6> { using type = gpiob_p::bsrr_r::bs6_f; };
template<> struct gpiob_p::bsrr_r::bs_f<5> { using type = gpiob_p::bsrr_r::bs5_f; };
template<> struct gpiob_p::bsrr_r::bs_f<4> { using type = gpiob_p::bsrr_r::bs4_f; };
template<> struct gpiob_p::bsrr_r::bs_f<3> { using type = gpiob_p::bsrr_r::bs3_f; };
template<> struct gpiob_p::bsrr_r::bs_f<2> { using type = gpiob_p::bsrr_r::bs2_f; };
template<> struct gpiob_p::bsrr_r::bs_f<1> { using type = gpiob_p::bsrr_r::bs1_f; };
template<> struct gpiob_p::bsrr_r::bs_f<0> { using type = gpiob_p::bsrr_r::bs0_f; };

template<> struct gpiob_p::lckr_r::lck_f<15> { using type = gpiob_p::lckr_r::lck15_f; };
template<> struct gpiob_p::lckr_r::lck_f<14> { using type = gpiob_p::lckr_r::lck14_f; };
template<> struct gpiob_p::lckr_r::lck_f<13> { using type = gpiob_p::lckr_r::lck13_f; };
template<> struct gpiob_p::lckr_r::lck_f<12> { using type = gpiob_p::lckr_r::lck12_f; };
template<> struct gpiob_p::lckr_r::lck_f<11> { using type = gpiob_p::lckr_r::lck11_f; };
template<> struct gpiob_p::lckr_r::lck_f<10> { using type = gpiob_p::lckr_r::lck10_f; };
template<> struct gpiob_p::lckr_r::lck_f<9> { using type = gpiob_p::lckr_r::lck9_f; };
template<> struct gpiob_p::lckr_r::lck_f<8> { using type = gpiob_p::lckr_r::lck8_f; };
template<> struct gpiob_p::lckr_r::lck_f<7> { using type = gpiob_p::lckr_r::lck7_f; };
template<> struct gpiob_p::lckr_r::lck_f<6> { using type = gpiob_p::lckr_r::lck6_f; };
template<> struct gpiob_p::lckr_r::lck_f<5> { using type = gpiob_p::lckr_r::lck5_f; };
template<> struct gpiob_p::lckr_r::lck_f<4> { using type = gpiob_p::lckr_r::lck4_f; };
template<> struct gpiob_p::lckr_r::lck_f<3> { using type = gpiob_p::lckr_r::lck3_f; };
template<> struct gpiob_p::lckr_r::lck_f<2> { using type = gpiob_p::lckr_r::lck2_f; };
template<> struct gpiob_p::lckr_r::lck_f<1> { using type = gpiob_p::lckr_r::lck1_f; };
template<> struct gpiob_p::lckr_r::lck_f<0> { using type = gpiob_p::lckr_r::lck0_f; };

template<> struct gpiob_p::afrl_r::afrl_f<7> { using type = gpiob_p::afrl_r::afrl7_f; };
template<> struct gpiob_p::afrl_r::afrl_f<6> { using type = gpiob_p::afrl_r::afrl6_f; };
template<> struct gpiob_p::afrl_r::afrl_f<5> { using type = gpiob_p::afrl_r::afrl5_f; };
template<> struct gpiob_p::afrl_r::afrl_f<4> { using type = gpiob_p::afrl_r::afrl4_f; };
template<> struct gpiob_p::afrl_r::afrl_f<3> { using type = gpiob_p::afrl_r::afrl3_f; };
template<> struct gpiob_p::afrl_r::afrl_f<2> { using type = gpiob_p::afrl_r::afrl2_f; };
template<> struct gpiob_p::afrl_r::afrl_f<1> { using type = gpiob_p::afrl_r::afrl1_f; };
template<> struct gpiob_p::afrl_r::afrl_f<0> { using type = gpiob_p::afrl_r::afrl0_f; };

template<> struct gpiob_p::afrh_r::afrh_f<15> { using type = gpiob_p::afrh_r::afrh15_f; };
template<> struct gpiob_p::afrh_r::afrh_f<14> { using type = gpiob_p::afrh_r::afrh14_f; };
template<> struct gpiob_p::afrh_r::afrh_f<13> { using type = gpiob_p::afrh_r::afrh13_f; };
template<> struct gpiob_p::afrh_r::afrh_f<12> { using type = gpiob_p::afrh_r::afrh12_f; };
template<> struct gpiob_p::afrh_r::afrh_f<11> { using type = gpiob_p::afrh_r::afrh11_f; };
template<> struct gpiob_p::afrh_r::afrh_f<10> { using type = gpiob_p::afrh_r::afrh10_f; };
template<> struct gpiob_p::afrh_r::afrh_f<9> { using type = gpiob_p::afrh_r::afrh9_f; };
template<> struct gpiob_p::afrh_r::afrh_f<8> { using type = gpiob_p::afrh_r::afrh8_f; };

template<> struct gpiob_p::brr_r::br_f<0> { using type = gpiob_p::brr_r::br0_f; };
template<> struct gpiob_p::brr_r::br_f<1> { using type = gpiob_p::brr_r::br1_f; };
template<> struct gpiob_p::brr_r::br_f<2> { using type = gpiob_p::brr_r::br2_f; };
template<> struct gpiob_p::brr_r::br_f<3> { using type = gpiob_p::brr_r::br3_f; };
template<> struct gpiob_p::brr_r::br_f<4> { using type = gpiob_p::brr_r::br4_f; };
template<> struct gpiob_p::brr_r::br_f<5> { using type = gpiob_p::brr_r::br5_f; };
template<> struct gpiob_p::brr_r::br_f<6> { using type = gpiob_p::brr_r::br6_f; };
template<> struct gpiob_p::brr_r::br_f<7> { using type = gpiob_p::brr_r::br7_f; };
template<> struct gpiob_p::brr_r::br_f<8> { using type = gpiob_p::brr_r::br8_f; };
template<> struct gpiob_p::brr_r::br_f<9> { using type = gpiob_p::brr_r::br9_f; };
template<> struct gpiob_p::brr_r::br_f<10> { using type = gpiob_p::brr_r::br10_f; };
template<> struct gpiob_p::brr_r::br_f<11> { using type = gpiob_p::brr_r::br11_f; };
template<> struct gpiob_p::brr_r::br_f<12> { using type = gpiob_p::brr_r::br12_f; };
template<> struct gpiob_p::brr_r::br_f<13> { using type = gpiob_p::brr_r::br13_f; };
template<> struct gpiob_p::brr_r::br_f<14> { using type = gpiob_p::brr_r::br14_f; };
template<> struct gpiob_p::brr_r::br_f<15> { using type = gpiob_p::brr_r::br15_f; };

static_assert(std::is_standard_layout_v<gpiob_p>);
static_assert(offsetof(gpiob_p, moder) == gpiob_p::moder_r::Offset);
static_assert(offsetof(gpiob_p, otyper) == gpiob_p::otyper_r::Offset);
static_assert(offsetof(gpiob_p, ospeedr) == gpiob_p::ospeedr_r::Offset);
static_assert(offsetof(gpiob_p, pupdr) == gpiob_p::pupdr_r::Offset);
static_assert(offsetof(gpiob_p, idr) == gpiob_p::idr_r::Offset);
static_assert(offsetof(gpiob_p, odr) == gpiob_p::odr_r::Offset);
static_assert(offsetof(gpiob_p, bsrr) == gpiob_p::bsrr_r::Offset);
static_assert(offsetof(gpiob_p, lckr) == gpiob_p::lckr_r::Offset);
static_assert(offsetof(gpiob_p, afrl) == gpiob_p::afrl_r::Offset);
static_assert(offsetof(gpiob_p, afrh) == gpiob_p::afrh_r::Offset);
static_assert(offsetof(gpiob_p, brr) == gpiob_p::brr_r::Offset);

/**
 * General-purpose I/Os
 */
class gpioc_p {
public:
/**
 * GPIO port mode register
 */
class moder_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class moder15_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder14_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder13_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder12_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder11_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder10_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder9_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder8_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr moder8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder7_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder6_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder4_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr moder4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder3_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class moder0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr moder0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator moder_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(moder_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<moder_r>() const {return ClearSet<moder_r>(Mask, *this);}
	constexpr auto operator|(moder_r other) const -> moder_r { return static_cast<moder_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<moder_r> other) const -> ClearSet<moder_r> {return ClearSet<moder_r>(moder_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto moder15() const -> moder15_f {return moder15_f(static_cast<uint8_t>(m_value >> moder15_f::Offset));}
	[[nodiscard]] constexpr auto moder14() const -> moder14_f {return moder14_f(static_cast<uint8_t>(m_value >> moder14_f::Offset));}
	[[nodiscard]] constexpr auto moder13() const -> moder13_f {return moder13_f(static_cast<uint8_t>(m_value >> moder13_f::Offset));}
	[[nodiscard]] constexpr auto moder12() const -> moder12_f {return moder12_f(static_cast<uint8_t>(m_value >> moder12_f::Offset));}
	[[nodiscard]] constexpr auto moder11() const -> moder11_f {return moder11_f(static_cast<uint8_t>(m_value >> moder11_f::Offset));}
	[[nodiscard]] constexpr auto moder10() const -> moder10_f {return moder10_f(static_cast<uint8_t>(m_value >> moder10_f::Offset));}
	[[nodiscard]] constexpr auto moder9() const -> moder9_f {return moder9_f(static_cast<uint8_t>(m_value >> moder9_f::Offset));}
	[[nodiscard]] constexpr auto moder8() const -> moder8_f {return moder8_f(static_cast<uint8_t>(m_value >> moder8_f::Offset));}
	[[nodiscard]] constexpr auto moder7() const -> moder7_f {return moder7_f(static_cast<uint8_t>(m_value >> moder7_f::Offset));}
	[[nodiscard]] constexpr auto moder6() const -> moder6_f {return moder6_f(static_cast<uint8_t>(m_value >> moder6_f::Offset));}
	[[nodiscard]] constexpr auto moder5() const -> moder5_f {return moder5_f(static_cast<uint8_t>(m_value >> moder5_f::Offset));}
	[[nodiscard]] constexpr auto moder4() const -> moder4_f {return moder4_f(static_cast<uint8_t>(m_value >> moder4_f::Offset));}
	[[nodiscard]] constexpr auto moder3() const -> moder3_f {return moder3_f(static_cast<uint8_t>(m_value >> moder3_f::Offset));}
	[[nodiscard]] constexpr auto moder2() const -> moder2_f {return moder2_f(static_cast<uint8_t>(m_value >> moder2_f::Offset));}
	[[nodiscard]] constexpr auto moder1() const -> moder1_f {return moder1_f(static_cast<uint8_t>(m_value >> moder1_f::Offset));}
	[[nodiscard]] constexpr auto moder0() const -> moder0_f {return moder0_f(static_cast<uint8_t>(m_value >> moder0_f::Offset));}

	template<std::size_t Index> struct moder_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using moder_v = typename moder_f<Index>::type;
	template<std::size_t Index> constexpr auto moder() const { return moder_v<Index>::get(*this); }

	constexpr moder_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(moder_r other) const -> moder_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> moder_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b11111111111111111111111111111111; // 4294967295 0xFFFFFFFF

private:
	uint32_t m_value;
};
/**
 * GPIO port output type register
 */
class otyper_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class ot15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ot8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ot0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ot0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator otyper_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(otyper_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<otyper_r>() const {return ClearSet<otyper_r>(Mask, *this);}
	constexpr auto operator|(otyper_r other) const -> otyper_r { return static_cast<otyper_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<otyper_r> other) const -> ClearSet<otyper_r> {return ClearSet<otyper_r>(otyper_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ot15() const -> ot15_f {return ot15_f((m_value & ot15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot14() const -> ot14_f {return ot14_f((m_value & ot14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot13() const -> ot13_f {return ot13_f((m_value & ot13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot12() const -> ot12_f {return ot12_f((m_value & ot12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot11() const -> ot11_f {return ot11_f((m_value & ot11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot10() const -> ot10_f {return ot10_f((m_value & ot10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot9() const -> ot9_f {return ot9_f((m_value & ot9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot8() const -> ot8_f {return ot8_f((m_value & ot8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot7() const -> ot7_f {return ot7_f((m_value & ot7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot6() const -> ot6_f {return ot6_f((m_value & ot6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot5() const -> ot5_f {return ot5_f((m_value & ot5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot4() const -> ot4_f {return ot4_f((m_value & ot4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot3() const -> ot3_f {return ot3_f((m_value & ot3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot2() const -> ot2_f {return ot2_f((m_value & ot2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot1() const -> ot1_f {return ot1_f((m_value & ot1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ot0() const -> ot0_f {return ot0_f((m_value & ot0_f::Mask) != 0);}

	template<std::size_t Index> struct ot_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using ot_v = typename ot_f<Index>::type;
	template<std::size_t Index> constexpr auto ot() const { return ot_v<Index>::get(*this); }

	constexpr otyper_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(otyper_r other) const -> otyper_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> otyper_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port output speed register
 */
class ospeedr_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr15_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr14_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr13_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr12_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr11_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr10_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr9_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr8_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ospeedr8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr7_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr6_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr4_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ospeedr4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr3_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class ospeedr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ospeedr0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ospeedr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ospeedr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ospeedr_r>() const {return ClearSet<ospeedr_r>(Mask, *this);}
	constexpr auto operator|(ospeedr_r other) const -> ospeedr_r { return static_cast<ospeedr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ospeedr_r> other) const -> ClearSet<ospeedr_r> {return ClearSet<ospeedr_r>(ospeedr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ospeedr15() const -> ospeedr15_f {return ospeedr15_f(static_cast<uint8_t>(m_value >> ospeedr15_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr14() const -> ospeedr14_f {return ospeedr14_f(static_cast<uint8_t>(m_value >> ospeedr14_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr13() const -> ospeedr13_f {return ospeedr13_f(static_cast<uint8_t>(m_value >> ospeedr13_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr12() const -> ospeedr12_f {return ospeedr12_f(static_cast<uint8_t>(m_value >> ospeedr12_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr11() const -> ospeedr11_f {return ospeedr11_f(static_cast<uint8_t>(m_value >> ospeedr11_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr10() const -> ospeedr10_f {return ospeedr10_f(static_cast<uint8_t>(m_value >> ospeedr10_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr9() const -> ospeedr9_f {return ospeedr9_f(static_cast<uint8_t>(m_value >> ospeedr9_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr8() const -> ospeedr8_f {return ospeedr8_f(static_cast<uint8_t>(m_value >> ospeedr8_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr7() const -> ospeedr7_f {return ospeedr7_f(static_cast<uint8_t>(m_value >> ospeedr7_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr6() const -> ospeedr6_f {return ospeedr6_f(static_cast<uint8_t>(m_value >> ospeedr6_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr5() const -> ospeedr5_f {return ospeedr5_f(static_cast<uint8_t>(m_value >> ospeedr5_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr4() const -> ospeedr4_f {return ospeedr4_f(static_cast<uint8_t>(m_value >> ospeedr4_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr3() const -> ospeedr3_f {return ospeedr3_f(static_cast<uint8_t>(m_value >> ospeedr3_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr2() const -> ospeedr2_f {return ospeedr2_f(static_cast<uint8_t>(m_value >> ospeedr2_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr1() const -> ospeedr1_f {return ospeedr1_f(static_cast<uint8_t>(m_value >> ospeedr1_f::Offset));}
	[[nodiscard]] constexpr auto ospeedr0() const -> ospeedr0_f {return ospeedr0_f(static_cast<uint8_t>(m_value >> ospeedr0_f::Offset));}

	template<std::size_t Index> struct ospeedr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using ospeedr_v = typename ospeedr_f<Index>::type;
	template<std::size_t Index> constexpr auto ospeedr() const { return ospeedr_v<Index>::get(*this); }

	constexpr ospeedr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ospeedr_r other) const -> ospeedr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ospeedr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port pull-up/pull-down register
 */
class pupdr_r {
public:

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr15_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr14_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr13_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr12_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr11_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr10_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr9_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr8_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pupdr8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr7_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr6_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr4_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pupdr4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr3_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Port x configuration bits (y = 0..15)
 */
class pupdr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pupdr0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pupdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pupdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pupdr_r>() const {return ClearSet<pupdr_r>(Mask, *this);}
	constexpr auto operator|(pupdr_r other) const -> pupdr_r { return static_cast<pupdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pupdr_r> other) const -> ClearSet<pupdr_r> {return ClearSet<pupdr_r>(pupdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pupdr15() const -> pupdr15_f {return pupdr15_f(static_cast<uint8_t>(m_value >> pupdr15_f::Offset));}
	[[nodiscard]] constexpr auto pupdr14() const -> pupdr14_f {return pupdr14_f(static_cast<uint8_t>(m_value >> pupdr14_f::Offset));}
	[[nodiscard]] constexpr auto pupdr13() const -> pupdr13_f {return pupdr13_f(static_cast<uint8_t>(m_value >> pupdr13_f::Offset));}
	[[nodiscard]] constexpr auto pupdr12() const -> pupdr12_f {return pupdr12_f(static_cast<uint8_t>(m_value >> pupdr12_f::Offset));}
	[[nodiscard]] constexpr auto pupdr11() const -> pupdr11_f {return pupdr11_f(static_cast<uint8_t>(m_value >> pupdr11_f::Offset));}
	[[nodiscard]] constexpr auto pupdr10() const -> pupdr10_f {return pupdr10_f(static_cast<uint8_t>(m_value >> pupdr10_f::Offset));}
	[[nodiscard]] constexpr auto pupdr9() const -> pupdr9_f {return pupdr9_f(static_cast<uint8_t>(m_value >> pupdr9_f::Offset));}
	[[nodiscard]] constexpr auto pupdr8() const -> pupdr8_f {return pupdr8_f(static_cast<uint8_t>(m_value >> pupdr8_f::Offset));}
	[[nodiscard]] constexpr auto pupdr7() const -> pupdr7_f {return pupdr7_f(static_cast<uint8_t>(m_value >> pupdr7_f::Offset));}
	[[nodiscard]] constexpr auto pupdr6() const -> pupdr6_f {return pupdr6_f(static_cast<uint8_t>(m_value >> pupdr6_f::Offset));}
	[[nodiscard]] constexpr auto pupdr5() const -> pupdr5_f {return pupdr5_f(static_cast<uint8_t>(m_value >> pupdr5_f::Offset));}
	[[nodiscard]] constexpr auto pupdr4() const -> pupdr4_f {return pupdr4_f(static_cast<uint8_t>(m_value >> pupdr4_f::Offset));}
	[[nodiscard]] constexpr auto pupdr3() const -> pupdr3_f {return pupdr3_f(static_cast<uint8_t>(m_value >> pupdr3_f::Offset));}
	[[nodiscard]] constexpr auto pupdr2() const -> pupdr2_f {return pupdr2_f(static_cast<uint8_t>(m_value >> pupdr2_f::Offset));}
	[[nodiscard]] constexpr auto pupdr1() const -> pupdr1_f {return pupdr1_f(static_cast<uint8_t>(m_value >> pupdr1_f::Offset));}
	[[nodiscard]] constexpr auto pupdr0() const -> pupdr0_f {return pupdr0_f(static_cast<uint8_t>(m_value >> pupdr0_f::Offset));}

	template<std::size_t Index> struct pupdr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pupdr_v = typename pupdr_f<Index>::type;
	template<std::size_t Index> constexpr auto pupdr() const { return pupdr_v<Index>::get(*this); }

	constexpr pupdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pupdr_r other) const -> pupdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pupdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port input data register
 */
class idr_r {
public:

/**
 * Port input data (y = 0..15)
 */
class idr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr idr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port input data (y = 0..15)
 */
class idr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator idr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(idr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto idr15() const -> idr15_f {return idr15_f((m_value & idr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr14() const -> idr14_f {return idr14_f((m_value & idr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr13() const -> idr13_f {return idr13_f((m_value & idr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr12() const -> idr12_f {return idr12_f((m_value & idr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr11() const -> idr11_f {return idr11_f((m_value & idr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr10() const -> idr10_f {return idr10_f((m_value & idr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr9() const -> idr9_f {return idr9_f((m_value & idr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr8() const -> idr8_f {return idr8_f((m_value & idr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr7() const -> idr7_f {return idr7_f((m_value & idr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr6() const -> idr6_f {return idr6_f((m_value & idr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr5() const -> idr5_f {return idr5_f((m_value & idr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr4() const -> idr4_f {return idr4_f((m_value & idr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr3() const -> idr3_f {return idr3_f((m_value & idr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr2() const -> idr2_f {return idr2_f((m_value & idr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr1() const -> idr1_f {return idr1_f((m_value & idr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idr0() const -> idr0_f {return idr0_f((m_value & idr0_f::Mask) != 0);}

	template<std::size_t Index> struct idr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using idr_v = typename idr_f<Index>::type;
	template<std::size_t Index> constexpr auto idr() const { return idr_v<Index>::get(*this); }

	constexpr idr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(idr_r other) const -> idr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> idr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port output data register
 */
class odr_r {
public:

/**
 * Port output data (y = 0..15)
 */
class odr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port output data (y = 0..15)
 */
class odr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr odr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator odr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(odr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<odr_r>() const {return ClearSet<odr_r>(Mask, *this);}
	constexpr auto operator|(odr_r other) const -> odr_r { return static_cast<odr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<odr_r> other) const -> ClearSet<odr_r> {return ClearSet<odr_r>(odr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto odr15() const -> odr15_f {return odr15_f((m_value & odr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr14() const -> odr14_f {return odr14_f((m_value & odr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr13() const -> odr13_f {return odr13_f((m_value & odr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr12() const -> odr12_f {return odr12_f((m_value & odr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr11() const -> odr11_f {return odr11_f((m_value & odr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr10() const -> odr10_f {return odr10_f((m_value & odr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr9() const -> odr9_f {return odr9_f((m_value & odr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr8() const -> odr8_f {return odr8_f((m_value & odr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr7() const -> odr7_f {return odr7_f((m_value & odr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr6() const -> odr6_f {return odr6_f((m_value & odr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr5() const -> odr5_f {return odr5_f((m_value & odr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr4() const -> odr4_f {return odr4_f((m_value & odr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr3() const -> odr3_f {return odr3_f((m_value & odr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr2() const -> odr2_f {return odr2_f((m_value & odr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr1() const -> odr1_f {return odr1_f((m_value & odr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odr0() const -> odr0_f {return odr0_f((m_value & odr0_f::Mask) != 0);}

	template<std::size_t Index> struct odr_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using odr_v = typename odr_f<Index>::type;
	template<std::size_t Index> constexpr auto odr() const { return odr_v<Index>::get(*this); }

	constexpr odr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(odr_r other) const -> odr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> odr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port bit set/reset register
 */
class bsrr_r {
public:

/**
 * Port x reset bit y (y = 0..15)
 */
class br15_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br14_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br13_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br12_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br11_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br10_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br9_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br8_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br7_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br6_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br5_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br4_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br3_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br2_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x reset bit y (y = 0..15)
 */
class br1_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class br0_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr br0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bs8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x set bit y (y= 0..15)
 */
class bs0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bs0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsrr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsrr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsrr_r>() const {return ClearSet<bsrr_r>(Mask, *this);}
	constexpr auto operator|(bsrr_r other) const -> bsrr_r { return static_cast<bsrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsrr_r> other) const -> ClearSet<bsrr_r> {return ClearSet<bsrr_r>(bsrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto br15() const -> br15_f {return br15_f((m_value & br15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br14() const -> br14_f {return br14_f((m_value & br14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br13() const -> br13_f {return br13_f((m_value & br13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br12() const -> br12_f {return br12_f((m_value & br12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br11() const -> br11_f {return br11_f((m_value & br11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br10() const -> br10_f {return br10_f((m_value & br10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br9() const -> br9_f {return br9_f((m_value & br9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br8() const -> br8_f {return br8_f((m_value & br8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br7() const -> br7_f {return br7_f((m_value & br7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br6() const -> br6_f {return br6_f((m_value & br6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br5() const -> br5_f {return br5_f((m_value & br5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br4() const -> br4_f {return br4_f((m_value & br4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br3() const -> br3_f {return br3_f((m_value & br3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br2() const -> br2_f {return br2_f((m_value & br2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br1() const -> br1_f {return br1_f((m_value & br1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br0() const -> br0_f {return br0_f((m_value & br0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs15() const -> bs15_f {return bs15_f((m_value & bs15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs14() const -> bs14_f {return bs14_f((m_value & bs14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs13() const -> bs13_f {return bs13_f((m_value & bs13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs12() const -> bs12_f {return bs12_f((m_value & bs12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs11() const -> bs11_f {return bs11_f((m_value & bs11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs10() const -> bs10_f {return bs10_f((m_value & bs10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs9() const -> bs9_f {return bs9_f((m_value & bs9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs8() const -> bs8_f {return bs8_f((m_value & bs8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs7() const -> bs7_f {return bs7_f((m_value & bs7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs6() const -> bs6_f {return bs6_f((m_value & bs6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs5() const -> bs5_f {return bs5_f((m_value & bs5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs4() const -> bs4_f {return bs4_f((m_value & bs4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs3() const -> bs3_f {return bs3_f((m_value & bs3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs2() const -> bs2_f {return bs2_f((m_value & bs2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs1() const -> bs1_f {return bs1_f((m_value & bs1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bs0() const -> bs0_f {return bs0_f((m_value & bs0_f::Mask) != 0);}

	template<std::size_t Index> struct br_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using br_v = typename br_f<Index>::type;
	template<std::size_t Index> constexpr auto br() const { return br_v<Index>::get(*this); }

	template<std::size_t Index> struct bs_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using bs_v = typename bs_f<Index>::type;
	template<std::size_t Index> constexpr auto bs() const { return bs_v<Index>::get(*this); }

	constexpr bsrr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bsrr_r other) const -> bsrr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bsrr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port configuration lock register
 */
class lckr_r {
public:

/**
 * Port x lock bit y (y= 0..15)
 */
class lckk_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lckk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port x lock bit y (y= 0..15)
 */
class lck0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lck0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lckr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(lckr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lckr_r>() const {return ClearSet<lckr_r>(Mask, *this);}
	constexpr auto operator|(lckr_r other) const -> lckr_r { return static_cast<lckr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lckr_r> other) const -> ClearSet<lckr_r> {return ClearSet<lckr_r>(lckr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lckk() const -> lckk_f {return lckk_f((m_value & lckk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck15() const -> lck15_f {return lck15_f((m_value & lck15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck14() const -> lck14_f {return lck14_f((m_value & lck14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck13() const -> lck13_f {return lck13_f((m_value & lck13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck12() const -> lck12_f {return lck12_f((m_value & lck12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck11() const -> lck11_f {return lck11_f((m_value & lck11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck10() const -> lck10_f {return lck10_f((m_value & lck10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck9() const -> lck9_f {return lck9_f((m_value & lck9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck8() const -> lck8_f {return lck8_f((m_value & lck8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck7() const -> lck7_f {return lck7_f((m_value & lck7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck6() const -> lck6_f {return lck6_f((m_value & lck6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck5() const -> lck5_f {return lck5_f((m_value & lck5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck4() const -> lck4_f {return lck4_f((m_value & lck4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck3() const -> lck3_f {return lck3_f((m_value & lck3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck2() const -> lck2_f {return lck2_f((m_value & lck2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck1() const -> lck1_f {return lck1_f((m_value & lck1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lck0() const -> lck0_f {return lck0_f((m_value & lck0_f::Mask) != 0);}

	template<std::size_t Index> struct lck_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using lck_v = typename lck_f<Index>::type;
	template<std::size_t Index> constexpr auto lck() const { return lck_v<Index>::get(*this); }

	constexpr lckr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(lckr_r other) const -> lckr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> lckr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO alternate function low register
 */
class afrl_r {
public:

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl7_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl6_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl5_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl4_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrl4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl3_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrl3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl2_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrl2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl1_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrl1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 0..7)
 */
class afrl0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrl0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrl_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrl_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrl_r>() const {return ClearSet<afrl_r>(Mask, *this);}
	constexpr auto operator|(afrl_r other) const -> afrl_r { return static_cast<afrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrl_r> other) const -> ClearSet<afrl_r> {return ClearSet<afrl_r>(afrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto afrl7() const -> afrl7_f {return afrl7_f(static_cast<uint8_t>(m_value >> afrl7_f::Offset));}
	[[nodiscard]] constexpr auto afrl6() const -> afrl6_f {return afrl6_f(static_cast<uint8_t>(m_value >> afrl6_f::Offset));}
	[[nodiscard]] constexpr auto afrl5() const -> afrl5_f {return afrl5_f(static_cast<uint8_t>(m_value >> afrl5_f::Offset));}
	[[nodiscard]] constexpr auto afrl4() const -> afrl4_f {return afrl4_f(static_cast<uint8_t>(m_value >> afrl4_f::Offset));}
	[[nodiscard]] constexpr auto afrl3() const -> afrl3_f {return afrl3_f(static_cast<uint8_t>(m_value >> afrl3_f::Offset));}
	[[nodiscard]] constexpr auto afrl2() const -> afrl2_f {return afrl2_f(static_cast<uint8_t>(m_value >> afrl2_f::Offset));}
	[[nodiscard]] constexpr auto afrl1() const -> afrl1_f {return afrl1_f(static_cast<uint8_t>(m_value >> afrl1_f::Offset));}
	[[nodiscard]] constexpr auto afrl0() const -> afrl0_f {return afrl0_f(static_cast<uint8_t>(m_value >> afrl0_f::Offset));}

	template<std::size_t Index> struct afrl_f { static_assert(Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using afrl_v = typename afrl_f<Index>::type;
	template<std::size_t Index> constexpr auto afrl() const { return afrl_v<Index>::get(*this); }

	constexpr afrl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(afrl_r other) const -> afrl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> afrl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO alternate function high register
 */
class afrh_r {
public:

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh15_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh14_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh13_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh12_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr afrh12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh11_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrh11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh10_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr afrh10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh9_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrh9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate function selection for port x bit y (y = 8..15)
 */
class afrh8_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr afrh8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrh_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrh_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrh_r>() const {return ClearSet<afrh_r>(Mask, *this);}
	constexpr auto operator|(afrh_r other) const -> afrh_r { return static_cast<afrh_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrh_r> other) const -> ClearSet<afrh_r> {return ClearSet<afrh_r>(afrh_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto afrh15() const -> afrh15_f {return afrh15_f(static_cast<uint8_t>(m_value >> afrh15_f::Offset));}
	[[nodiscard]] constexpr auto afrh14() const -> afrh14_f {return afrh14_f(static_cast<uint8_t>(m_value >> afrh14_f::Offset));}
	[[nodiscard]] constexpr auto afrh13() const -> afrh13_f {return afrh13_f(static_cast<uint8_t>(m_value >> afrh13_f::Offset));}
	[[nodiscard]] constexpr auto afrh12() const -> afrh12_f {return afrh12_f(static_cast<uint8_t>(m_value >> afrh12_f::Offset));}
	[[nodiscard]] constexpr auto afrh11() const -> afrh11_f {return afrh11_f(static_cast<uint8_t>(m_value >> afrh11_f::Offset));}
	[[nodiscard]] constexpr auto afrh10() const -> afrh10_f {return afrh10_f(static_cast<uint8_t>(m_value >> afrh10_f::Offset));}
	[[nodiscard]] constexpr auto afrh9() const -> afrh9_f {return afrh9_f(static_cast<uint8_t>(m_value >> afrh9_f::Offset));}
	[[nodiscard]] constexpr auto afrh8() const -> afrh8_f {return afrh8_f(static_cast<uint8_t>(m_value >> afrh8_f::Offset));}

	template<std::size_t Index> struct afrh_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8); };
	template<std::size_t Index> using afrh_v = typename afrh_f<Index>::type;
	template<std::size_t Index> constexpr auto afrh() const { return afrh_v<Index>::get(*this); }

	constexpr afrh_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(afrh_r other) const -> afrh_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> afrh_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * GPIO port bit reset register
 */
class brr_r {
public:

/**
 * Port Reset bit
 */
class br0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr br7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port Reset bit
 */
class br15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr br15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator brr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(brr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto br0() const -> br0_f {return br0_f((m_value & br0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br1() const -> br1_f {return br1_f((m_value & br1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br2() const -> br2_f {return br2_f((m_value & br2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br3() const -> br3_f {return br3_f((m_value & br3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br4() const -> br4_f {return br4_f((m_value & br4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br5() const -> br5_f {return br5_f((m_value & br5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br6() const -> br6_f {return br6_f((m_value & br6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br7() const -> br7_f {return br7_f((m_value & br7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br8() const -> br8_f {return br8_f((m_value & br8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br9() const -> br9_f {return br9_f((m_value & br9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br10() const -> br10_f {return br10_f((m_value & br10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br11() const -> br11_f {return br11_f((m_value & br11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br12() const -> br12_f {return br12_f((m_value & br12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br13() const -> br13_f {return br13_f((m_value & br13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br14() const -> br14_f {return br14_f((m_value & br14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br15() const -> br15_f {return br15_f((m_value & br15_f::Mask) != 0);}

	template<std::size_t Index> struct br_f { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8 || Index == 9 || Index == 10 || Index == 11 || Index == 12 || Index == 13 || Index == 14 || Index == 15); };
	template<std::size_t Index> using br_v = typename br_f<Index>::type;
	template<std::size_t Index> constexpr auto br() const { return br_v<Index>::get(*this); }

	constexpr brr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(brr_r other) const -> brr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> brr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,moder_r> moder;
	Memory<uint32_t,otyper_r> otyper;
	Memory<uint32_t,ospeedr_r> ospeedr;
	Memory<uint32_t,pupdr_r> pupdr;
	ReadOnlyMemory<uint32_t,idr_r> idr;
	Memory<uint32_t,odr_r> odr;
	WriteOnlyMemory<uint32_t,bsrr_r> bsrr;
	Memory<uint32_t,lckr_r> lckr;
	Memory<uint32_t,afrl_r> afrl;
	Memory<uint32_t,afrh_r> afrh;
	WriteOnlyMemory<uint32_t,brr_r> brr;
};

template<> struct gpioc_p::moder_r::moder_f<15> { using type = gpioc_p::moder_r::moder15_f; };
template<> struct gpioc_p::moder_r::moder_f<14> { using type = gpioc_p::moder_r::moder14_f; };
template<> struct gpioc_p::moder_r::moder_f<13> { using type = gpioc_p::moder_r::moder13_f; };
template<> struct gpioc_p::moder_r::moder_f<12> { using type = gpioc_p::moder_r::moder12_f; };
template<> struct gpioc_p::moder_r::moder_f<11> { using type = gpioc_p::moder_r::moder11_f; };
template<> struct gpioc_p::moder_r::moder_f<10> { using type = gpioc_p::moder_r::moder10_f; };
template<> struct gpioc_p::moder_r::moder_f<9> { using type = gpioc_p::moder_r::moder9_f; };
template<> struct gpioc_p::moder_r::moder_f<8> { using type = gpioc_p::moder_r::moder8_f; };
template<> struct gpioc_p::moder_r::moder_f<7> { using type = gpioc_p::moder_r::moder7_f; };
template<> struct gpioc_p::moder_r::moder_f<6> { using type = gpioc_p::moder_r::moder6_f; };
template<> struct gpioc_p::moder_r::moder_f<5> { using type = gpioc_p::moder_r::moder5_f; };
template<> struct gpioc_p::moder_r::moder_f<4> { using type = gpioc_p::moder_r::moder4_f; };
template<> struct gpioc_p::moder_r::moder_f<3> { using type = gpioc_p::moder_r::moder3_f; };
template<> struct gpioc_p::moder_r::moder_f<2> { using type = gpioc_p::moder_r::moder2_f; };
template<> struct gpioc_p::moder_r::moder_f<1> { using type = gpioc_p::moder_r::moder1_f; };
template<> struct gpioc_p::moder_r::moder_f<0> { using type = gpioc_p::moder_r::moder0_f; };

template<> struct gpioc_p::otyper_r::ot_f<15> { using type = gpioc_p::otyper_r::ot15_f; };
template<> struct gpioc_p::otyper_r::ot_f<14> { using type = gpioc_p::otyper_r::ot14_f; };
template<> struct gpioc_p::otyper_r::ot_f<13> { using type = gpioc_p::otyper_r::ot13_f; };
template<> struct gpioc_p::otyper_r::ot_f<12> { using type = gpioc_p::otyper_r::ot12_f; };
template<> struct gpioc_p::otyper_r::ot_f<11> { using type = gpioc_p::otyper_r::ot11_f; };
template<> struct gpioc_p::otyper_r::ot_f<10> { using type = gpioc_p::otyper_r::ot10_f; };
template<> struct gpioc_p::otyper_r::ot_f<9> { using type = gpioc_p::otyper_r::ot9_f; };
template<> struct gpioc_p::otyper_r::ot_f<8> { using type = gpioc_p::otyper_r::ot8_f; };
template<> struct gpioc_p::otyper_r::ot_f<7> { using type = gpioc_p::otyper_r::ot7_f; };
template<> struct gpioc_p::otyper_r::ot_f<6> { using type = gpioc_p::otyper_r::ot6_f; };
template<> struct gpioc_p::otyper_r::ot_f<5> { using type = gpioc_p::otyper_r::ot5_f; };
template<> struct gpioc_p::otyper_r::ot_f<4> { using type = gpioc_p::otyper_r::ot4_f; };
template<> struct gpioc_p::otyper_r::ot_f<3> { using type = gpioc_p::otyper_r::ot3_f; };
template<> struct gpioc_p::otyper_r::ot_f<2> { using type = gpioc_p::otyper_r::ot2_f; };
template<> struct gpioc_p::otyper_r::ot_f<1> { using type = gpioc_p::otyper_r::ot1_f; };
template<> struct gpioc_p::otyper_r::ot_f<0> { using type = gpioc_p::otyper_r::ot0_f; };

template<> struct gpioc_p::ospeedr_r::ospeedr_f<15> { using type = gpioc_p::ospeedr_r::ospeedr15_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<14> { using type = gpioc_p::ospeedr_r::ospeedr14_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<13> { using type = gpioc_p::ospeedr_r::ospeedr13_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<12> { using type = gpioc_p::ospeedr_r::ospeedr12_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<11> { using type = gpioc_p::ospeedr_r::ospeedr11_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<10> { using type = gpioc_p::ospeedr_r::ospeedr10_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<9> { using type = gpioc_p::ospeedr_r::ospeedr9_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<8> { using type = gpioc_p::ospeedr_r::ospeedr8_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<7> { using type = gpioc_p::ospeedr_r::ospeedr7_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<6> { using type = gpioc_p::ospeedr_r::ospeedr6_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<5> { using type = gpioc_p::ospeedr_r::ospeedr5_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<4> { using type = gpioc_p::ospeedr_r::ospeedr4_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<3> { using type = gpioc_p::ospeedr_r::ospeedr3_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<2> { using type = gpioc_p::ospeedr_r::ospeedr2_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<1> { using type = gpioc_p::ospeedr_r::ospeedr1_f; };
template<> struct gpioc_p::ospeedr_r::ospeedr_f<0> { using type = gpioc_p::ospeedr_r::ospeedr0_f; };

template<> struct gpioc_p::pupdr_r::pupdr_f<15> { using type = gpioc_p::pupdr_r::pupdr15_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<14> { using type = gpioc_p::pupdr_r::pupdr14_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<13> { using type = gpioc_p::pupdr_r::pupdr13_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<12> { using type = gpioc_p::pupdr_r::pupdr12_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<11> { using type = gpioc_p::pupdr_r::pupdr11_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<10> { using type = gpioc_p::pupdr_r::pupdr10_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<9> { using type = gpioc_p::pupdr_r::pupdr9_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<8> { using type = gpioc_p::pupdr_r::pupdr8_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<7> { using type = gpioc_p::pupdr_r::pupdr7_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<6> { using type = gpioc_p::pupdr_r::pupdr6_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<5> { using type = gpioc_p::pupdr_r::pupdr5_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<4> { using type = gpioc_p::pupdr_r::pupdr4_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<3> { using type = gpioc_p::pupdr_r::pupdr3_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<2> { using type = gpioc_p::pupdr_r::pupdr2_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<1> { using type = gpioc_p::pupdr_r::pupdr1_f; };
template<> struct gpioc_p::pupdr_r::pupdr_f<0> { using type = gpioc_p::pupdr_r::pupdr0_f; };

template<> struct gpioc_p::idr_r::idr_f<15> { using type = gpioc_p::idr_r::idr15_f; };
template<> struct gpioc_p::idr_r::idr_f<14> { using type = gpioc_p::idr_r::idr14_f; };
template<> struct gpioc_p::idr_r::idr_f<13> { using type = gpioc_p::idr_r::idr13_f; };
template<> struct gpioc_p::idr_r::idr_f<12> { using type = gpioc_p::idr_r::idr12_f; };
template<> struct gpioc_p::idr_r::idr_f<11> { using type = gpioc_p::idr_r::idr11_f; };
template<> struct gpioc_p::idr_r::idr_f<10> { using type = gpioc_p::idr_r::idr10_f; };
template<> struct gpioc_p::idr_r::idr_f<9> { using type = gpioc_p::idr_r::idr9_f; };
template<> struct gpioc_p::idr_r::idr_f<8> { using type = gpioc_p::idr_r::idr8_f; };
template<> struct gpioc_p::idr_r::idr_f<7> { using type = gpioc_p::idr_r::idr7_f; };
template<> struct gpioc_p::idr_r::idr_f<6> { using type = gpioc_p::idr_r::idr6_f; };
template<> struct gpioc_p::idr_r::idr_f<5> { using type = gpioc_p::idr_r::idr5_f; };
template<> struct gpioc_p::idr_r::idr_f<4> { using type = gpioc_p::idr_r::idr4_f; };
template<> struct gpioc_p::idr_r::idr_f<3> { using type = gpioc_p::idr_r::idr3_f; };
template<> struct gpioc_p::idr_r::idr_f<2> { using type = gpioc_p::idr_r::idr2_f; };
template<> struct gpioc_p::idr_r::idr_f<1> { using type = gpioc_p::idr_r::idr1_f; };
template<> struct gpioc_p::idr_r::idr_f<0> { using type = gpioc_p::idr_r::idr0_f; };

template<> struct gpioc_p::odr_r::odr_f<15> { using type = gpioc_p::odr_r::odr15_f; };
template<> struct gpioc_p::odr_r::odr_f<14> { using type = gpioc_p::odr_r::odr14_f; };
template<> struct gpioc_p::odr_r::odr_f<13> { using type = gpioc_p::odr_r::odr13_f; };
template<> struct gpioc_p::odr_r::odr_f<12> { using type = gpioc_p::odr_r::odr12_f; };
template<> struct gpioc_p::odr_r::odr_f<11> { using type = gpioc_p::odr_r::odr11_f; };
template<> struct gpioc_p::odr_r::odr_f<10> { using type = gpioc_p::odr_r::odr10_f; };
template<> struct gpioc_p::odr_r::odr_f<9> { using type = gpioc_p::odr_r::odr9_f; };
template<> struct gpioc_p::odr_r::odr_f<8> { using type = gpioc_p::odr_r::odr8_f; };
template<> struct gpioc_p::odr_r::odr_f<7> { using type = gpioc_p::odr_r::odr7_f; };
template<> struct gpioc_p::odr_r::odr_f<6> { using type = gpioc_p::odr_r::odr6_f; };
template<> struct gpioc_p::odr_r::odr_f<5> { using type = gpioc_p::odr_r::odr5_f; };
template<> struct gpioc_p::odr_r::odr_f<4> { using type = gpioc_p::odr_r::odr4_f; };
template<> struct gpioc_p::odr_r::odr_f<3> { using type = gpioc_p::odr_r::odr3_f; };
template<> struct gpioc_p::odr_r::odr_f<2> { using type = gpioc_p::odr_r::odr2_f; };
template<> struct gpioc_p::odr_r::odr_f<1> { using type = gpioc_p::odr_r::odr1_f; };
template<> struct gpioc_p::odr_r::odr_f<0> { using type = gpioc_p::odr_r::odr0_f; };

template<> struct gpioc_p::bsrr_r::br_f<15> { using type = gpioc_p::bsrr_r::br15_f; };
template<> struct gpioc_p::bsrr_r::br_f<14> { using type = gpioc_p::bsrr_r::br14_f; };
template<> struct gpioc_p::bsrr_r::br_f<13> { using type = gpioc_p::bsrr_r::br13_f; };
template<> struct gpioc_p::bsrr_r::br_f<12> { using type = gpioc_p::bsrr_r::br12_f; };
template<> struct gpioc_p::bsrr_r::br_f<11> { using type = gpioc_p::bsrr_r::br11_f; };
template<> struct gpioc_p::bsrr_r::br_f<10> { using type = gpioc_p::bsrr_r::br10_f; };
template<> struct gpioc_p::bsrr_r::br_f<9> { using type = gpioc_p::bsrr_r::br9_f; };
template<> struct gpioc_p::bsrr_r::br_f<8> { using type = gpioc_p::bsrr_r::br8_f; };
template<> struct gpioc_p::bsrr_r::br_f<7> { using type = gpioc_p::bsrr_r::br7_f; };
template<> struct gpioc_p::bsrr_r::br_f<6> { using type = gpioc_p::bsrr_r::br6_f; };
template<> struct gpioc_p::bsrr_r::br_f<5> { using type = gpioc_p::bsrr_r::br5_f; };
template<> struct gpioc_p::bsrr_r::br_f<4> { using type = gpioc_p::bsrr_r::br4_f; };
template<> struct gpioc_p::bsrr_r::br_f<3> { using type = gpioc_p::bsrr_r::br3_f; };
template<> struct gpioc_p::bsrr_r::br_f<2> { using type = gpioc_p::bsrr_r::br2_f; };
template<> struct gpioc_p::bsrr_r::br_f<1> { using type = gpioc_p::bsrr_r::br1_f; };
template<> struct gpioc_p::bsrr_r::br_f<0> { using type = gpioc_p::bsrr_r::br0_f; };
template<> struct gpioc_p::bsrr_r::bs_f<15> { using type = gpioc_p::bsrr_r::bs15_f; };
template<> struct gpioc_p::bsrr_r::bs_f<14> { using type = gpioc_p::bsrr_r::bs14_f; };
template<> struct gpioc_p::bsrr_r::bs_f<13> { using type = gpioc_p::bsrr_r::bs13_f; };
template<> struct gpioc_p::bsrr_r::bs_f<12> { using type = gpioc_p::bsrr_r::bs12_f; };
template<> struct gpioc_p::bsrr_r::bs_f<11> { using type = gpioc_p::bsrr_r::bs11_f; };
template<> struct gpioc_p::bsrr_r::bs_f<10> { using type = gpioc_p::bsrr_r::bs10_f; };
template<> struct gpioc_p::bsrr_r::bs_f<9> { using type = gpioc_p::bsrr_r::bs9_f; };
template<> struct gpioc_p::bsrr_r::bs_f<8> { using type = gpioc_p::bsrr_r::bs8_f; };
template<> struct gpioc_p::bsrr_r::bs_f<7> { using type = gpioc_p::bsrr_r::bs7_f; };
template<> struct gpioc_p::bsrr_r::bs_f<6> { using type = gpioc_p::bsrr_r::bs6_f; };
template<> struct gpioc_p::bsrr_r::bs_f<5> { using type = gpioc_p::bsrr_r::bs5_f; };
template<> struct gpioc_p::bsrr_r::bs_f<4> { using type = gpioc_p::bsrr_r::bs4_f; };
template<> struct gpioc_p::bsrr_r::bs_f<3> { using type = gpioc_p::bsrr_r::bs3_f; };
template<> struct gpioc_p::bsrr_r::bs_f<2> { using type = gpioc_p::bsrr_r::bs2_f; };
template<> struct gpioc_p::bsrr_r::bs_f<1> { using type = gpioc_p::bsrr_r::bs1_f; };
template<> struct gpioc_p::bsrr_r::bs_f<0> { using type = gpioc_p::bsrr_r::bs0_f; };

template<> struct gpioc_p::lckr_r::lck_f<15> { using type = gpioc_p::lckr_r::lck15_f; };
template<> struct gpioc_p::lckr_r::lck_f<14> { using type = gpioc_p::lckr_r::lck14_f; };
template<> struct gpioc_p::lckr_r::lck_f<13> { using type = gpioc_p::lckr_r::lck13_f; };
template<> struct gpioc_p::lckr_r::lck_f<12> { using type = gpioc_p::lckr_r::lck12_f; };
template<> struct gpioc_p::lckr_r::lck_f<11> { using type = gpioc_p::lckr_r::lck11_f; };
template<> struct gpioc_p::lckr_r::lck_f<10> { using type = gpioc_p::lckr_r::lck10_f; };
template<> struct gpioc_p::lckr_r::lck_f<9> { using type = gpioc_p::lckr_r::lck9_f; };
template<> struct gpioc_p::lckr_r::lck_f<8> { using type = gpioc_p::lckr_r::lck8_f; };
template<> struct gpioc_p::lckr_r::lck_f<7> { using type = gpioc_p::lckr_r::lck7_f; };
template<> struct gpioc_p::lckr_r::lck_f<6> { using type = gpioc_p::lckr_r::lck6_f; };
template<> struct gpioc_p::lckr_r::lck_f<5> { using type = gpioc_p::lckr_r::lck5_f; };
template<> struct gpioc_p::lckr_r::lck_f<4> { using type = gpioc_p::lckr_r::lck4_f; };
template<> struct gpioc_p::lckr_r::lck_f<3> { using type = gpioc_p::lckr_r::lck3_f; };
template<> struct gpioc_p::lckr_r::lck_f<2> { using type = gpioc_p::lckr_r::lck2_f; };
template<> struct gpioc_p::lckr_r::lck_f<1> { using type = gpioc_p::lckr_r::lck1_f; };
template<> struct gpioc_p::lckr_r::lck_f<0> { using type = gpioc_p::lckr_r::lck0_f; };

template<> struct gpioc_p::afrl_r::afrl_f<7> { using type = gpioc_p::afrl_r::afrl7_f; };
template<> struct gpioc_p::afrl_r::afrl_f<6> { using type = gpioc_p::afrl_r::afrl6_f; };
template<> struct gpioc_p::afrl_r::afrl_f<5> { using type = gpioc_p::afrl_r::afrl5_f; };
template<> struct gpioc_p::afrl_r::afrl_f<4> { using type = gpioc_p::afrl_r::afrl4_f; };
template<> struct gpioc_p::afrl_r::afrl_f<3> { using type = gpioc_p::afrl_r::afrl3_f; };
template<> struct gpioc_p::afrl_r::afrl_f<2> { using type = gpioc_p::afrl_r::afrl2_f; };
template<> struct gpioc_p::afrl_r::afrl_f<1> { using type = gpioc_p::afrl_r::afrl1_f; };
template<> struct gpioc_p::afrl_r::afrl_f<0> { using type = gpioc_p::afrl_r::afrl0_f; };

template<> struct gpioc_p::afrh_r::afrh_f<15> { using type = gpioc_p::afrh_r::afrh15_f; };
template<> struct gpioc_p::afrh_r::afrh_f<14> { using type = gpioc_p::afrh_r::afrh14_f; };
template<> struct gpioc_p::afrh_r::afrh_f<13> { using type = gpioc_p::afrh_r::afrh13_f; };
template<> struct gpioc_p::afrh_r::afrh_f<12> { using type = gpioc_p::afrh_r::afrh12_f; };
template<> struct gpioc_p::afrh_r::afrh_f<11> { using type = gpioc_p::afrh_r::afrh11_f; };
template<> struct gpioc_p::afrh_r::afrh_f<10> { using type = gpioc_p::afrh_r::afrh10_f; };
template<> struct gpioc_p::afrh_r::afrh_f<9> { using type = gpioc_p::afrh_r::afrh9_f; };
template<> struct gpioc_p::afrh_r::afrh_f<8> { using type = gpioc_p::afrh_r::afrh8_f; };

template<> struct gpioc_p::brr_r::br_f<0> { using type = gpioc_p::brr_r::br0_f; };
template<> struct gpioc_p::brr_r::br_f<1> { using type = gpioc_p::brr_r::br1_f; };
template<> struct gpioc_p::brr_r::br_f<2> { using type = gpioc_p::brr_r::br2_f; };
template<> struct gpioc_p::brr_r::br_f<3> { using type = gpioc_p::brr_r::br3_f; };
template<> struct gpioc_p::brr_r::br_f<4> { using type = gpioc_p::brr_r::br4_f; };
template<> struct gpioc_p::brr_r::br_f<5> { using type = gpioc_p::brr_r::br5_f; };
template<> struct gpioc_p::brr_r::br_f<6> { using type = gpioc_p::brr_r::br6_f; };
template<> struct gpioc_p::brr_r::br_f<7> { using type = gpioc_p::brr_r::br7_f; };
template<> struct gpioc_p::brr_r::br_f<8> { using type = gpioc_p::brr_r::br8_f; };
template<> struct gpioc_p::brr_r::br_f<9> { using type = gpioc_p::brr_r::br9_f; };
template<> struct gpioc_p::brr_r::br_f<10> { using type = gpioc_p::brr_r::br10_f; };
template<> struct gpioc_p::brr_r::br_f<11> { using type = gpioc_p::brr_r::br11_f; };
template<> struct gpioc_p::brr_r::br_f<12> { using type = gpioc_p::brr_r::br12_f; };
template<> struct gpioc_p::brr_r::br_f<13> { using type = gpioc_p::brr_r::br13_f; };
template<> struct gpioc_p::brr_r::br_f<14> { using type = gpioc_p::brr_r::br14_f; };
template<> struct gpioc_p::brr_r::br_f<15> { using type = gpioc_p::brr_r::br15_f; };

static_assert(std::is_standard_layout_v<gpioc_p>);
static_assert(offsetof(gpioc_p, moder) == gpioc_p::moder_r::Offset);
static_assert(offsetof(gpioc_p, otyper) == gpioc_p::otyper_r::Offset);
static_assert(offsetof(gpioc_p, ospeedr) == gpioc_p::ospeedr_r::Offset);
static_assert(offsetof(gpioc_p, pupdr) == gpioc_p::pupdr_r::Offset);
static_assert(offsetof(gpioc_p, idr) == gpioc_p::idr_r::Offset);
static_assert(offsetof(gpioc_p, odr) == gpioc_p::odr_r::Offset);
static_assert(offsetof(gpioc_p, bsrr) == gpioc_p::bsrr_r::Offset);
static_assert(offsetof(gpioc_p, lckr) == gpioc_p::lckr_r::Offset);
static_assert(offsetof(gpioc_p, afrl) == gpioc_p::afrl_r::Offset);
static_assert(offsetof(gpioc_p, afrh) == gpioc_p::afrh_r::Offset);
static_assert(offsetof(gpioc_p, brr) == gpioc_p::brr_r::Offset);

inline gpioa_p& gpioa = *reinterpret_cast<gpioa_p*>(0x48000000);
inline gpiob_p& gpiob = *reinterpret_cast<gpiob_p*>(0x48000400);
inline gpioc_p& gpioc = *reinterpret_cast<gpioc_p*>(0x48000800);
inline gpioc_p& gpiod = *reinterpret_cast<gpioc_p*>(0x48000C00);
inline gpioc_p& gpioe = *reinterpret_cast<gpioc_p*>(0x48001000);
inline gpioc_p& gpiof = *reinterpret_cast<gpioc_p*>(0x48001400);
inline gpioc_p& gpiog = *reinterpret_cast<gpioc_p*>(0x48001800);

} // STM32G473XX

