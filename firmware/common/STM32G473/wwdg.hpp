#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * System window watchdog
 */
class wwdg_p {
public:
/**
 * Control register
 */
class cr_r {
public:

/**
 * Activation bit
 */
class wdga_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wdga_f(bool value = true) : m_value(value) {}
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
 * 7-bit counter (MSB to LSB)
 */
class t_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr t_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto wdga() const -> wdga_f {return wdga_f((m_value & wdga_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t() const -> t_f {return t_f(static_cast<uint8_t>(m_value >> t_f::Offset));}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b1111111; // 127 0x7F

private:
	uint32_t m_value;
};
/**
 * Configuration register
 */
class cfr_r {
public:

/**
 * Timer base
 */
class wdgtb_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr wdgtb_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfr_r>() const {return ClearSet<cfr_r>(Mask, *this);}
	constexpr auto operator|(cfr_r other) const -> cfr_r { return static_cast<cfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfr_r> other) const -> ClearSet<cfr_r> {return ClearSet<cfr_r>(cfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Early wakeup interrupt
 */
class ewi_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ewi_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfr_r>() const {return ClearSet<cfr_r>(Mask, *this);}
	constexpr auto operator|(cfr_r other) const -> cfr_r { return static_cast<cfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfr_r> other) const -> ClearSet<cfr_r> {return ClearSet<cfr_r>(cfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * 7-bit window value
 */
class w_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr w_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cfr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfr_r>() const {return ClearSet<cfr_r>(Mask, *this);}
	constexpr auto operator|(cfr_r other) const -> cfr_r { return static_cast<cfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfr_r> other) const -> ClearSet<cfr_r> {return ClearSet<cfr_r>(cfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto wdgtb() const -> wdgtb_f {return wdgtb_f(static_cast<uint8_t>(m_value >> wdgtb_f::Offset));}
	[[nodiscard]] constexpr auto ewi() const -> ewi_f {return ewi_f((m_value & ewi_f::Mask) != 0);}
	[[nodiscard]] constexpr auto w() const -> w_f {return w_f(static_cast<uint8_t>(m_value >> w_f::Offset));}

	constexpr cfr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfr_r other) const -> cfr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0b1111111; // 127 0x7F

private:
	uint32_t m_value;
};
/**
 * Status register
 */
class sr_r {
public:

/**
 * Early wakeup interrupt flag
 */
class ewif_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ewif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ewif() const -> ewif_f {return ewif_f((m_value & ewif_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,cfr_r> cfr;
	Memory<uint32_t,sr_r> sr;
};

static_assert(std::is_standard_layout_v<wwdg_p>);
static_assert(offsetof(wwdg_p, cr) == wwdg_p::cr_r::Offset);
static_assert(offsetof(wwdg_p, cfr) == wwdg_p::cfr_r::Offset);
static_assert(offsetof(wwdg_p, sr) == wwdg_p::sr_r::Offset);

inline wwdg_p& wwdg = *reinterpret_cast<wwdg_p*>(0x40002C00);

} // STM32G473XX

