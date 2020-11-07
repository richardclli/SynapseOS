#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Cyclic redundancy check calculation unit
 */
class crc_p {
public:
/**
 * Data register
 */
class dr_r {
public:

/**
 * Data register bits
 */
class dr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dr_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto dr() const -> dr_f {return dr_f(static_cast<uint32_t>(m_value >> dr_f::Offset));}

	constexpr dr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dr_r other) const -> dr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b11111111111111111111111111111111; // 4294967295 0xFFFFFFFF

private:
	uint32_t m_value;
};
/**
 * Independent data register
 */
class idr_r {
public:

/**
 * General-purpose 8-bit data register bits
 */
class idr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr idr_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator idr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(idr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto idr() const -> idr_f {return idr_f(static_cast<uint32_t>(m_value >> idr_f::Offset));}

	constexpr idr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(idr_r other) const -> idr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> idr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Control register
 */
class cr_r {
public:

/**
 * Reverse output data
 */
class rev_out_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rev_out_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Reverse input data
 */
class rev_in_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr rev_in_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Polynomial size
 */
class polysize_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr polysize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RESET bit
 */
class reset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr reset_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rev_out() const -> rev_out_f {return rev_out_f((m_value & rev_out_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rev_in() const -> rev_in_f {return rev_in_f(static_cast<uint8_t>(m_value >> rev_in_f::Offset));}
	[[nodiscard]] constexpr auto polysize() const -> polysize_f {return polysize_f(static_cast<uint8_t>(m_value >> polysize_f::Offset));}
	[[nodiscard]] constexpr auto reset() const -> reset_f {return reset_f((m_value & reset_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Initial CRC value
 */
class init_r {
public:

/**
 * Programmable initial CRC value
 */
class crc_init_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr crc_init_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator init_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(init_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<init_r>() const {return ClearSet<init_r>(Mask, *this);}
	constexpr auto operator|(init_r other) const -> init_r { return static_cast<init_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<init_r> other) const -> ClearSet<init_r> {return ClearSet<init_r>(init_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto crc_init() const -> crc_init_f {return crc_init_f(static_cast<uint32_t>(m_value >> crc_init_f::Offset));}

	constexpr init_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(init_r other) const -> init_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> init_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0b11111111111111111111111111111111; // 4294967295 0xFFFFFFFF

private:
	uint32_t m_value;
};
/**
 * polynomial
 */
class pol_r {
public:

/**
 * Programmable polynomial
 */
class pol_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pol_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator pol_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pol_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pol_r>() const {return ClearSet<pol_r>(Mask, *this);}
	constexpr auto operator|(pol_r other) const -> pol_r { return static_cast<pol_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pol_r> other) const -> ClearSet<pol_r> {return ClearSet<pol_r>(pol_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pol() const -> pol_f {return pol_f(static_cast<uint32_t>(m_value >> pol_f::Offset));}

	constexpr pol_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pol_r other) const -> pol_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pol_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0b100110000010001110110110111; // 79764919 0x4C11DB7

private:
	uint32_t m_value;
};

	Memory<uint32_t,dr_r> dr;
	Memory<uint32_t,idr_r> idr;
	Memory<uint32_t,cr_r> cr;
	Padding<4> _p12;
	Memory<uint32_t,init_r> init;
	Memory<uint32_t,pol_r> pol;
};

static_assert(std::is_standard_layout_v<crc_p>);
static_assert(offsetof(crc_p, dr) == crc_p::dr_r::Offset);
static_assert(offsetof(crc_p, idr) == crc_p::idr_r::Offset);
static_assert(offsetof(crc_p, cr) == crc_p::cr_r::Offset);
static_assert(offsetof(crc_p, init) == crc_p::init_r::Offset);
static_assert(offsetof(crc_p, pol) == crc_p::pol_r::Offset);

inline crc_p& crc = *reinterpret_cast<crc_p*>(0x40023000);

} // STM32G473XX

