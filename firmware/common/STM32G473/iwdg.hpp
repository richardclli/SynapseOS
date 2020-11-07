#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * WinWATCHDOG
 */
class iwdg_p {
public:
/**
 * Key register
 */
class kr_r {
public:

/**
 * Key value (write only, read 0x0000)
 */
class key_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr key_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator kr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(kr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<kr_r>() const {return ClearSet<kr_r>(Mask, *this);}
	constexpr auto operator|(kr_r other) const -> kr_r { return static_cast<kr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<kr_r> other) const -> ClearSet<kr_r> {return ClearSet<kr_r>(kr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto key() const -> key_f {return key_f(static_cast<uint16_t>(m_value >> key_f::Offset));}

	constexpr kr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(kr_r other) const -> kr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> kr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Prescaler register
 */
class pr_r {
public:

/**
 * Prescaler divider
 */
class pr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pr_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pr() const -> pr_f {return pr_f(static_cast<uint8_t>(m_value >> pr_f::Offset));}

	constexpr pr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pr_r other) const -> pr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Reload register
 */
class rlr_r {
public:

/**
 * Watchdog counter reload value
 */
class rl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rl_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator rlr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rlr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rlr_r>() const {return ClearSet<rlr_r>(Mask, *this);}
	constexpr auto operator|(rlr_r other) const -> rlr_r { return static_cast<rlr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rlr_r> other) const -> ClearSet<rlr_r> {return ClearSet<rlr_r>(rlr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rl() const -> rl_f {return rl_f(static_cast<uint16_t>(m_value >> rl_f::Offset));}

	constexpr rlr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rlr_r other) const -> rlr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rlr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b111111111111; // 4095 0xFFF

private:
	uint32_t m_value;
};
/**
 * Status register
 */
class sr_r {
public:

/**
 * Watchdog counter window value update
 */
class wvu_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wvu_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Watchdog counter reload value update
 */
class rvu_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rvu_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Watchdog prescaler value update
 */
class pvu_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pvu_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto wvu() const -> wvu_f {return wvu_f((m_value & wvu_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rvu() const -> rvu_f {return rvu_f((m_value & rvu_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pvu() const -> pvu_f {return pvu_f((m_value & pvu_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Window register
 */
class winr_r {
public:

/**
 * Watchdog counter window value
 */
class win_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr win_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator winr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(winr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<winr_r>() const {return ClearSet<winr_r>(Mask, *this);}
	constexpr auto operator|(winr_r other) const -> winr_r { return static_cast<winr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<winr_r> other) const -> ClearSet<winr_r> {return ClearSet<winr_r>(winr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto win() const -> win_f {return win_f(static_cast<uint16_t>(m_value >> win_f::Offset));}

	constexpr winr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(winr_r other) const -> winr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> winr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0b111111111111; // 4095 0xFFF

private:
	uint32_t m_value;
};

	WriteOnlyMemory<uint32_t,kr_r> kr;
	Memory<uint32_t,pr_r> pr;
	Memory<uint32_t,rlr_r> rlr;
	ReadOnlyMemory<uint32_t,sr_r> sr;
	Memory<uint32_t,winr_r> winr;
};

static_assert(std::is_standard_layout_v<iwdg_p>);
static_assert(offsetof(iwdg_p, kr) == iwdg_p::kr_r::Offset);
static_assert(offsetof(iwdg_p, pr) == iwdg_p::pr_r::Offset);
static_assert(offsetof(iwdg_p, rlr) == iwdg_p::rlr_r::Offset);
static_assert(offsetof(iwdg_p, sr) == iwdg_p::sr_r::Offset);
static_assert(offsetof(iwdg_p, winr) == iwdg_p::winr_r::Offset);

inline iwdg_p& iwdg = *reinterpret_cast<iwdg_p*>(0x40003000);

} // STM32G473XX

