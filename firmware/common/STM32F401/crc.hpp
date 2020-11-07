#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * Cryptographic processor
 */
class crc_p {
public:
/**
 * Data register
 */
class dr_r {
public:

/**
 * Data Register
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
 * Independent Data register
 */
class idr_r {
public:

/**
 * Independent Data register
 */
class idr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr idr_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator idr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(idr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idr_r>() const {return ClearSet<idr_r>(Mask, *this);}
	constexpr auto operator|(idr_r other) const -> idr_r { return static_cast<idr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idr_r> other) const -> ClearSet<idr_r> {return ClearSet<idr_r>(idr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto idr() const -> idr_f {return idr_f(static_cast<uint8_t>(m_value >> idr_f::Offset));}

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
 * Control regidter
 */
class cr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cr() const -> cr_f {return cr_f((m_value & cr_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,dr_r> dr;
	Memory<uint32_t,idr_r> idr;
	WriteOnlyMemory<uint32_t,cr_r> cr;
};

static_assert(std::is_standard_layout_v<crc_p>);
static_assert(offsetof(crc_p, dr) == crc_p::dr_r::Offset);
static_assert(offsetof(crc_p, idr) == crc_p::idr_r::Offset);
static_assert(offsetof(crc_p, cr) == crc_p::cr_r::Offset);

inline crc_p& crc = *reinterpret_cast<crc_p*>(0x40023000);

} // STM32F401

