#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Debug support
 */
class dbgmcu_p {
public:
/**
 * MCU Device ID Code Register
 */
class idcode_r {
public:

/**
 * Device Identifier
 */
class dev_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dev_id_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator idcode_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(idcode_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idcode_r>() const {return ClearSet<idcode_r>(Mask, *this);}
	constexpr auto operator|(idcode_r other) const -> idcode_r { return static_cast<idcode_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idcode_r> other) const -> ClearSet<idcode_r> {return ClearSet<idcode_r>(idcode_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Revision Identifier
 */
class rev_id_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rev_id_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator idcode_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(idcode_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<idcode_r>() const {return ClearSet<idcode_r>(Mask, *this);}
	constexpr auto operator|(idcode_r other) const -> idcode_r { return static_cast<idcode_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<idcode_r> other) const -> ClearSet<idcode_r> {return ClearSet<idcode_r>(idcode_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dev_id() const -> dev_id_f {return dev_id_f(static_cast<uint16_t>(m_value >> dev_id_f::Offset));}
	[[nodiscard]] constexpr auto rev_id() const -> rev_id_f {return rev_id_f(static_cast<uint16_t>(m_value >> rev_id_f::Offset));}

	constexpr idcode_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(idcode_r other) const -> idcode_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> idcode_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Debug MCU Configuration Register
 */
class cr_r {
public:

/**
 * Debug Sleep Mode
 */
class dbg_sleep_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_sleep_f(bool value = true) : m_value(value) {}
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
 * Debug Stop Mode
 */
class dbg_stop_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_stop_f(bool value = true) : m_value(value) {}
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
 * Debug Standby Mode
 */
class dbg_standby_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_standby_f(bool value = true) : m_value(value) {}
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
 * Trace pin assignment control
 */
class trace_ioen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr trace_ioen_f(bool value = true) : m_value(value) {}
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
 * Trace pin assignment control
 */
class trace_mode_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr trace_mode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dbg_sleep() const -> dbg_sleep_f {return dbg_sleep_f((m_value & dbg_sleep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_stop() const -> dbg_stop_f {return dbg_stop_f((m_value & dbg_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_standby() const -> dbg_standby_f {return dbg_standby_f((m_value & dbg_standby_f::Mask) != 0);}
	[[nodiscard]] constexpr auto trace_ioen() const -> trace_ioen_f {return trace_ioen_f((m_value & trace_ioen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto trace_mode() const -> trace_mode_f {return trace_mode_f(static_cast<uint8_t>(m_value >> trace_mode_f::Offset));}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB Low Freeze Register 1
 */
class apb1l_fz_r {
public:

/**
 * Debug Timer 2 stopped when Core is halted
 */
class dbg_timer2_stop_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_timer2_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM3 counter stopped when core is halted
 */
class dbg_tim3_stop_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_tim3_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM4 counter stopped when core is halted
 */
class dbg_tim4_stop_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_tim4_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM5 counter stopped when core is halted
 */
class dbg_tim5_stop_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_tim5_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Debug Timer 6 stopped when Core is halted
 */
class dbg_timer6_stop_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_timer6_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM7 counter stopped when core is halted
 */
class dbg_tim7_stop_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_tim7_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Debug RTC stopped when Core is halted
 */
class dbg_rtc_stop_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbg_rtc_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Debug Window Wachdog stopped when Core is halted
 */
class dbg_wwdg_stop_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbg_wwdg_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Debug Independent Wachdog stopped when Core is halted
 */
class dbg_iwdg_stop_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbg_iwdg_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C1 SMBUS timeout mode stopped when core is halted
 */
class dbg_i2c1_stop_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_i2c1_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C2 SMBUS timeout mode stopped when core is halted
 */
class dbg_i2c2_stop_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_i2c2_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C3 SMBUS timeout mode stopped when core is halted
 */
class dbg_i2c3_stop_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_i2c3_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LPTIM1 counter stopped when core is halted
 */
class dbg_lptimer_stop_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_lptimer_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1l_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1l_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1l_fz_r>() const {return ClearSet<apb1l_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1l_fz_r other) const -> apb1l_fz_r { return static_cast<apb1l_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1l_fz_r> other) const -> ClearSet<apb1l_fz_r> {return ClearSet<apb1l_fz_r>(apb1l_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dbg_timer2_stop() const -> dbg_timer2_stop_f {return dbg_timer2_stop_f((m_value & dbg_timer2_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim3_stop() const -> dbg_tim3_stop_f {return dbg_tim3_stop_f((m_value & dbg_tim3_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim4_stop() const -> dbg_tim4_stop_f {return dbg_tim4_stop_f((m_value & dbg_tim4_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim5_stop() const -> dbg_tim5_stop_f {return dbg_tim5_stop_f((m_value & dbg_tim5_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_timer6_stop() const -> dbg_timer6_stop_f {return dbg_timer6_stop_f((m_value & dbg_timer6_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim7_stop() const -> dbg_tim7_stop_f {return dbg_tim7_stop_f((m_value & dbg_tim7_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_rtc_stop() const -> dbg_rtc_stop_f {return dbg_rtc_stop_f((m_value & dbg_rtc_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_wwdg_stop() const -> dbg_wwdg_stop_f {return dbg_wwdg_stop_f((m_value & dbg_wwdg_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_iwdg_stop() const -> dbg_iwdg_stop_f {return dbg_iwdg_stop_f((m_value & dbg_iwdg_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_i2c1_stop() const -> dbg_i2c1_stop_f {return dbg_i2c1_stop_f((m_value & dbg_i2c1_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_i2c2_stop() const -> dbg_i2c2_stop_f {return dbg_i2c2_stop_f((m_value & dbg_i2c2_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_i2c3_stop() const -> dbg_i2c3_stop_f {return dbg_i2c3_stop_f((m_value & dbg_i2c3_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_lptimer_stop() const -> dbg_lptimer_stop_f {return dbg_lptimer_stop_f((m_value & dbg_lptimer_stop_f::Mask) != 0);}

	constexpr apb1l_fz_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1l_fz_r other) const -> apb1l_fz_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1l_fz_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB Low Freeze Register 2
 */
class apb1h_fz_r {
public:

/**
 * DBG_I2C4_STOP
 */
class dbg_i2c4_stop_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_i2c4_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1h_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1h_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1h_fz_r>() const {return ClearSet<apb1h_fz_r>(Mask, *this);}
	constexpr auto operator|(apb1h_fz_r other) const -> apb1h_fz_r { return static_cast<apb1h_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1h_fz_r> other) const -> ClearSet<apb1h_fz_r> {return ClearSet<apb1h_fz_r>(apb1h_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dbg_i2c4_stop() const -> dbg_i2c4_stop_f {return dbg_i2c4_stop_f((m_value & dbg_i2c4_stop_f::Mask) != 0);}

	constexpr apb1h_fz_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1h_fz_r other) const -> apb1h_fz_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1h_fz_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB High Freeze Register
 */
class apb2_fz_r {
public:

/**
 * TIM1 counter stopped when core is halted
 */
class dbg_tim1_stop_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbg_tim1_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2_fz_r>() const {return ClearSet<apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(apb2_fz_r other) const -> apb2_fz_r { return static_cast<apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2_fz_r> other) const -> ClearSet<apb2_fz_r> {return ClearSet<apb2_fz_r>(apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM8 counter stopped when core is halted
 */
class dbg_tim8_stop_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbg_tim8_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2_fz_r>() const {return ClearSet<apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(apb2_fz_r other) const -> apb2_fz_r { return static_cast<apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2_fz_r> other) const -> ClearSet<apb2_fz_r> {return ClearSet<apb2_fz_r>(apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM15 counter stopped when core is halted
 */
class dbg_tim15_stop_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_tim15_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2_fz_r>() const {return ClearSet<apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(apb2_fz_r other) const -> apb2_fz_r { return static_cast<apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2_fz_r> other) const -> ClearSet<apb2_fz_r> {return ClearSet<apb2_fz_r>(apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM16 counter stopped when core is halted
 */
class dbg_tim16_stop_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_tim16_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2_fz_r>() const {return ClearSet<apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(apb2_fz_r other) const -> apb2_fz_r { return static_cast<apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2_fz_r> other) const -> ClearSet<apb2_fz_r> {return ClearSet<apb2_fz_r>(apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM17 counter stopped when core is halted
 */
class dbg_tim17_stop_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_tim17_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2_fz_r>() const {return ClearSet<apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(apb2_fz_r other) const -> apb2_fz_r { return static_cast<apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2_fz_r> other) const -> ClearSet<apb2_fz_r> {return ClearSet<apb2_fz_r>(apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM20counter stopped when core is halted
 */
class dbg_tim20_stop_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_tim20_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2_fz_r>() const {return ClearSet<apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(apb2_fz_r other) const -> apb2_fz_r { return static_cast<apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2_fz_r> other) const -> ClearSet<apb2_fz_r> {return ClearSet<apb2_fz_r>(apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_HRTIM0_STOP
 */
class dbg_hrtim0_stop_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_hrtim0_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2_fz_r>() const {return ClearSet<apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(apb2_fz_r other) const -> apb2_fz_r { return static_cast<apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2_fz_r> other) const -> ClearSet<apb2_fz_r> {return ClearSet<apb2_fz_r>(apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_HRTIM0_STOP
 */
class dbg_hrtim1_stop_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_hrtim1_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2_fz_r>() const {return ClearSet<apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(apb2_fz_r other) const -> apb2_fz_r { return static_cast<apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2_fz_r> other) const -> ClearSet<apb2_fz_r> {return ClearSet<apb2_fz_r>(apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_HRTIM0_STOP
 */
class dbg_hrtim2_stop_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_hrtim2_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2_fz_r>() const {return ClearSet<apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(apb2_fz_r other) const -> apb2_fz_r { return static_cast<apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2_fz_r> other) const -> ClearSet<apb2_fz_r> {return ClearSet<apb2_fz_r>(apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_HRTIM0_STOP
 */
class dbg_hrtim3_stop_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_hrtim3_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2_fz_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2_fz_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2_fz_r>() const {return ClearSet<apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(apb2_fz_r other) const -> apb2_fz_r { return static_cast<apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2_fz_r> other) const -> ClearSet<apb2_fz_r> {return ClearSet<apb2_fz_r>(apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dbg_tim1_stop() const -> dbg_tim1_stop_f {return dbg_tim1_stop_f((m_value & dbg_tim1_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim8_stop() const -> dbg_tim8_stop_f {return dbg_tim8_stop_f((m_value & dbg_tim8_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim15_stop() const -> dbg_tim15_stop_f {return dbg_tim15_stop_f((m_value & dbg_tim15_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim16_stop() const -> dbg_tim16_stop_f {return dbg_tim16_stop_f((m_value & dbg_tim16_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim17_stop() const -> dbg_tim17_stop_f {return dbg_tim17_stop_f((m_value & dbg_tim17_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim20_stop() const -> dbg_tim20_stop_f {return dbg_tim20_stop_f((m_value & dbg_tim20_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_hrtim0_stop() const -> dbg_hrtim0_stop_f {return dbg_hrtim0_stop_f((m_value & dbg_hrtim0_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_hrtim1_stop() const -> dbg_hrtim1_stop_f {return dbg_hrtim1_stop_f((m_value & dbg_hrtim1_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_hrtim2_stop() const -> dbg_hrtim2_stop_f {return dbg_hrtim2_stop_f((m_value & dbg_hrtim2_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_hrtim3_stop() const -> dbg_hrtim3_stop_f {return dbg_hrtim3_stop_f((m_value & dbg_hrtim3_stop_f::Mask) != 0);}

	constexpr apb2_fz_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb2_fz_r other) const -> apb2_fz_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb2_fz_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,idcode_r> idcode;
	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,apb1l_fz_r> apb1l_fz;
	Memory<uint32_t,apb1h_fz_r> apb1h_fz;
	Memory<uint32_t,apb2_fz_r> apb2_fz;
};

static_assert(std::is_standard_layout_v<dbgmcu_p>);
static_assert(offsetof(dbgmcu_p, idcode) == dbgmcu_p::idcode_r::Offset);
static_assert(offsetof(dbgmcu_p, cr) == dbgmcu_p::cr_r::Offset);
static_assert(offsetof(dbgmcu_p, apb1l_fz) == dbgmcu_p::apb1l_fz_r::Offset);
static_assert(offsetof(dbgmcu_p, apb1h_fz) == dbgmcu_p::apb1h_fz_r::Offset);
static_assert(offsetof(dbgmcu_p, apb2_fz) == dbgmcu_p::apb2_fz_r::Offset);

inline dbgmcu_p& dbgmcu = *reinterpret_cast<dbgmcu_p*>(0xE0042000);

} // STM32G473XX

