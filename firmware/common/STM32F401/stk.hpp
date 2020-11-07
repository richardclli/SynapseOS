#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * SysTick timer
 */
class stk_p {
public:
/**
 * SysTick control and status register
 */
class ctrl_r {
public:

/**
 * Counter enable
 */
class enable_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr enable_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ctrl_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ctrl_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ctrl_r>() const {return ClearSet<ctrl_r>(Mask, *this);}
	constexpr auto operator|(ctrl_r other) const -> ctrl_r { return static_cast<ctrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ctrl_r> other) const -> ClearSet<ctrl_r> {return ClearSet<ctrl_r>(ctrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SysTick exception request enable
 */
class tickint_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tickint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ctrl_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ctrl_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ctrl_r>() const {return ClearSet<ctrl_r>(Mask, *this);}
	constexpr auto operator|(ctrl_r other) const -> ctrl_r { return static_cast<ctrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ctrl_r> other) const -> ClearSet<ctrl_r> {return ClearSet<ctrl_r>(ctrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clock source selection
 */
class clksource_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr clksource_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ctrl_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ctrl_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ctrl_r>() const {return ClearSet<ctrl_r>(Mask, *this);}
	constexpr auto operator|(ctrl_r other) const -> ctrl_r { return static_cast<ctrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ctrl_r> other) const -> ClearSet<ctrl_r> {return ClearSet<ctrl_r>(ctrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COUNTFLAG
 */
class countflag_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr countflag_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ctrl_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ctrl_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ctrl_r>() const {return ClearSet<ctrl_r>(Mask, *this);}
	constexpr auto operator|(ctrl_r other) const -> ctrl_r { return static_cast<ctrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ctrl_r> other) const -> ClearSet<ctrl_r> {return ClearSet<ctrl_r>(ctrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto enable() const -> enable_f {return enable_f((m_value & enable_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tickint() const -> tickint_f {return tickint_f((m_value & tickint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto clksource() const -> clksource_f {return clksource_f((m_value & clksource_f::Mask) != 0);}
	[[nodiscard]] constexpr auto countflag() const -> countflag_f {return countflag_f((m_value & countflag_f::Mask) != 0);}

	constexpr ctrl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ctrl_r other) const -> ctrl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ctrl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * SysTick reload value register
 */
class load_r {
public:

/**
 * RELOAD value
 */
class reload_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 24;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr reload_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator load_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(load_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<load_r>() const {return ClearSet<load_r>(Mask, *this);}
	constexpr auto operator|(load_r other) const -> load_r { return static_cast<load_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<load_r> other) const -> ClearSet<load_r> {return ClearSet<load_r>(load_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto reload() const -> reload_f {return reload_f(static_cast<uint32_t>(m_value >> reload_f::Offset));}

	constexpr load_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(load_r other) const -> load_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> load_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * SysTick current value register
 */
class val_r {
public:

/**
 * Current counter value
 */
class current_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 24;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr current_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator val_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(val_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<val_r>() const {return ClearSet<val_r>(Mask, *this);}
	constexpr auto operator|(val_r other) const -> val_r { return static_cast<val_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<val_r> other) const -> ClearSet<val_r> {return ClearSet<val_r>(val_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto current() const -> current_f {return current_f(static_cast<uint32_t>(m_value >> current_f::Offset));}

	constexpr val_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(val_r other) const -> val_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> val_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * SysTick calibration value register
 */
class calib_r {
public:

/**
 * Calibration value
 */
class tenms_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 24;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr tenms_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator calib_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(calib_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calib_r>() const {return ClearSet<calib_r>(Mask, *this);}
	constexpr auto operator|(calib_r other) const -> calib_r { return static_cast<calib_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calib_r> other) const -> ClearSet<calib_r> {return ClearSet<calib_r>(calib_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

/**
 * SKEW flag: Indicates whether the TENMS value is exact
 */
class skew_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr skew_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator calib_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(calib_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calib_r>() const {return ClearSet<calib_r>(Mask, *this);}
	constexpr auto operator|(calib_r other) const -> calib_r { return static_cast<calib_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calib_r> other) const -> ClearSet<calib_r> {return ClearSet<calib_r>(calib_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * NOREF flag. Reads as zero
 */
class noref_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr noref_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator calib_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(calib_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calib_r>() const {return ClearSet<calib_r>(Mask, *this);}
	constexpr auto operator|(calib_r other) const -> calib_r { return static_cast<calib_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calib_r> other) const -> ClearSet<calib_r> {return ClearSet<calib_r>(calib_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tenms() const -> tenms_f {return tenms_f(static_cast<uint32_t>(m_value >> tenms_f::Offset));}
	[[nodiscard]] constexpr auto skew() const -> skew_f {return skew_f((m_value & skew_f::Mask) != 0);}
	[[nodiscard]] constexpr auto noref() const -> noref_f {return noref_f((m_value & noref_f::Mask) != 0);}

	constexpr calib_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(calib_r other) const -> calib_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> calib_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,ctrl_r> ctrl;
	Memory<uint32_t,load_r> load;
	Memory<uint32_t,val_r> val;
	Memory<uint32_t,calib_r> calib;
};

static_assert(std::is_standard_layout_v<stk_p>);
static_assert(offsetof(stk_p, ctrl) == stk_p::ctrl_r::Offset);
static_assert(offsetof(stk_p, load) == stk_p::load_r::Offset);
static_assert(offsetof(stk_p, val) == stk_p::val_r::Offset);
static_assert(offsetof(stk_p, calib) == stk_p::calib_r::Offset);

inline stk_p& stk = *reinterpret_cast<stk_p*>(0xE000E010);

} // STM32F401

