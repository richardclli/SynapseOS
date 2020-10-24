#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * Debug support
 */
class dbg_p {
public:
/**
 * IDCODE
 */
class dbgmcu_idcode_r {
public:

/**
 * DEV_ID
 */
class dev_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dev_id_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dbgmcu_idcode_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr operator ClearSet<dbgmcu_idcode_r>() const {return ClearSet<dbgmcu_idcode_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_idcode_r other) const -> dbgmcu_idcode_r { return static_cast<dbgmcu_idcode_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_idcode_r> other) const -> ClearSet<dbgmcu_idcode_r> {return ClearSet<dbgmcu_idcode_r>(dbgmcu_idcode_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * REV_ID
 */
class rev_id_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rev_id_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dbgmcu_idcode_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<dbgmcu_idcode_r>() const {return ClearSet<dbgmcu_idcode_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_idcode_r other) const -> dbgmcu_idcode_r { return static_cast<dbgmcu_idcode_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_idcode_r> other) const -> ClearSet<dbgmcu_idcode_r> {return ClearSet<dbgmcu_idcode_r>(dbgmcu_idcode_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dev_id() const -> dev_id_f {return dev_id_f(static_cast<uint16_t>(m_value >> dev_id_f::Offset));}
	[[nodiscard]] constexpr auto rev_id() const -> rev_id_f {return rev_id_f(static_cast<uint16_t>(m_value >> rev_id_f::Offset));}

	constexpr dbgmcu_idcode_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dbgmcu_idcode_r other) const -> dbgmcu_idcode_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dbgmcu_idcode_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b10000000000000110010000010001; // 268461073 0x10006411

private:
	uint32_t m_value;
};
/**
 * Control Register
 */
class dbgmcu_cr_r {
public:

/**
 * DBG_SLEEP
 */
class dbg_sleep_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_sleep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_cr_r>() const {return ClearSet<dbgmcu_cr_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_cr_r other) const -> dbgmcu_cr_r { return static_cast<dbgmcu_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_cr_r> other) const -> ClearSet<dbgmcu_cr_r> {return ClearSet<dbgmcu_cr_r>(dbgmcu_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_STOP
 */
class dbg_stop_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_cr_r>() const {return ClearSet<dbgmcu_cr_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_cr_r other) const -> dbgmcu_cr_r { return static_cast<dbgmcu_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_cr_r> other) const -> ClearSet<dbgmcu_cr_r> {return ClearSet<dbgmcu_cr_r>(dbgmcu_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_STANDBY
 */
class dbg_standby_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_standby_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_cr_r>() const {return ClearSet<dbgmcu_cr_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_cr_r other) const -> dbgmcu_cr_r { return static_cast<dbgmcu_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_cr_r> other) const -> ClearSet<dbgmcu_cr_r> {return ClearSet<dbgmcu_cr_r>(dbgmcu_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TRACE_IOEN
 */
class trace_ioen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr trace_ioen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_cr_r>() const {return ClearSet<dbgmcu_cr_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_cr_r other) const -> dbgmcu_cr_r { return static_cast<dbgmcu_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_cr_r> other) const -> ClearSet<dbgmcu_cr_r> {return ClearSet<dbgmcu_cr_r>(dbgmcu_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TRACE_MODE
 */
class trace_mode_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr trace_mode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dbgmcu_cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr operator ClearSet<dbgmcu_cr_r>() const {return ClearSet<dbgmcu_cr_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_cr_r other) const -> dbgmcu_cr_r { return static_cast<dbgmcu_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_cr_r> other) const -> ClearSet<dbgmcu_cr_r> {return ClearSet<dbgmcu_cr_r>(dbgmcu_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dbg_sleep() const -> dbg_sleep_f {return dbg_sleep_f((m_value & dbg_sleep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_stop() const -> dbg_stop_f {return dbg_stop_f((m_value & dbg_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_standby() const -> dbg_standby_f {return dbg_standby_f((m_value & dbg_standby_f::Mask) != 0);}
	[[nodiscard]] constexpr auto trace_ioen() const -> trace_ioen_f {return trace_ioen_f((m_value & trace_ioen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto trace_mode() const -> trace_mode_f {return trace_mode_f(static_cast<uint8_t>(m_value >> trace_mode_f::Offset));}

	constexpr dbgmcu_cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dbgmcu_cr_r other) const -> dbgmcu_cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dbgmcu_cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Debug MCU APB1 Freeze registe
 */
class dbgmcu_apb1_fz_r {
public:

/**
 * DBG_TIM2_STOP
 */
class dbg_tim2_stop_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_tim2_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb1_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb1_fz_r>() const {return ClearSet<dbgmcu_apb1_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return static_cast<dbgmcu_apb1_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb1_fz_r> other) const -> ClearSet<dbgmcu_apb1_fz_r> {return ClearSet<dbgmcu_apb1_fz_r>(dbgmcu_apb1_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_TIM3 _STOP
 */
class dbg_tim3_stop_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_tim3_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb1_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb1_fz_r>() const {return ClearSet<dbgmcu_apb1_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return static_cast<dbgmcu_apb1_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb1_fz_r> other) const -> ClearSet<dbgmcu_apb1_fz_r> {return ClearSet<dbgmcu_apb1_fz_r>(dbgmcu_apb1_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_TIM4_STOP
 */
class dbg_tim4_stop_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_tim4_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb1_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb1_fz_r>() const {return ClearSet<dbgmcu_apb1_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return static_cast<dbgmcu_apb1_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb1_fz_r> other) const -> ClearSet<dbgmcu_apb1_fz_r> {return ClearSet<dbgmcu_apb1_fz_r>(dbgmcu_apb1_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_TIM5_STOP
 */
class dbg_tim5_stop_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_tim5_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb1_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb1_fz_r>() const {return ClearSet<dbgmcu_apb1_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return static_cast<dbgmcu_apb1_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb1_fz_r> other) const -> ClearSet<dbgmcu_apb1_fz_r> {return ClearSet<dbgmcu_apb1_fz_r>(dbgmcu_apb1_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RTC stopped when Core is halted
 */
class dbg_rtc_stop_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbg_rtc_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb1_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb1_fz_r>() const {return ClearSet<dbgmcu_apb1_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return static_cast<dbgmcu_apb1_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb1_fz_r> other) const -> ClearSet<dbgmcu_apb1_fz_r> {return ClearSet<dbgmcu_apb1_fz_r>(dbgmcu_apb1_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_WWDG_STOP
 */
class dbg_wwdg_stop_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbg_wwdg_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb1_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb1_fz_r>() const {return ClearSet<dbgmcu_apb1_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return static_cast<dbgmcu_apb1_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb1_fz_r> other) const -> ClearSet<dbgmcu_apb1_fz_r> {return ClearSet<dbgmcu_apb1_fz_r>(dbgmcu_apb1_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_IWDEG_STOP
 */
class dbg_iwdeg_stop_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbg_iwdeg_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb1_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb1_fz_r>() const {return ClearSet<dbgmcu_apb1_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return static_cast<dbgmcu_apb1_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb1_fz_r> other) const -> ClearSet<dbgmcu_apb1_fz_r> {return ClearSet<dbgmcu_apb1_fz_r>(dbgmcu_apb1_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_J2C1_SMBUS_TIMEOUT
 */
class dbg_i2c1_smbus_timeout_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_i2c1_smbus_timeout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb1_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb1_fz_r>() const {return ClearSet<dbgmcu_apb1_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return static_cast<dbgmcu_apb1_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb1_fz_r> other) const -> ClearSet<dbgmcu_apb1_fz_r> {return ClearSet<dbgmcu_apb1_fz_r>(dbgmcu_apb1_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_J2C2_SMBUS_TIMEOUT
 */
class dbg_i2c2_smbus_timeout_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_i2c2_smbus_timeout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb1_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb1_fz_r>() const {return ClearSet<dbgmcu_apb1_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return static_cast<dbgmcu_apb1_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb1_fz_r> other) const -> ClearSet<dbgmcu_apb1_fz_r> {return ClearSet<dbgmcu_apb1_fz_r>(dbgmcu_apb1_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBG_J2C3SMBUS_TIMEOUT
 */
class dbg_i2c3smbus_timeout_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_i2c3smbus_timeout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb1_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb1_fz_r>() const {return ClearSet<dbgmcu_apb1_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return static_cast<dbgmcu_apb1_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb1_fz_r> other) const -> ClearSet<dbgmcu_apb1_fz_r> {return ClearSet<dbgmcu_apb1_fz_r>(dbgmcu_apb1_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dbg_tim2_stop() const -> dbg_tim2_stop_f {return dbg_tim2_stop_f((m_value & dbg_tim2_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim3_stop() const -> dbg_tim3_stop_f {return dbg_tim3_stop_f((m_value & dbg_tim3_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim4_stop() const -> dbg_tim4_stop_f {return dbg_tim4_stop_f((m_value & dbg_tim4_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim5_stop() const -> dbg_tim5_stop_f {return dbg_tim5_stop_f((m_value & dbg_tim5_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_rtc_stop() const -> dbg_rtc_stop_f {return dbg_rtc_stop_f((m_value & dbg_rtc_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_wwdg_stop() const -> dbg_wwdg_stop_f {return dbg_wwdg_stop_f((m_value & dbg_wwdg_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_iwdeg_stop() const -> dbg_iwdeg_stop_f {return dbg_iwdeg_stop_f((m_value & dbg_iwdeg_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_i2c1_smbus_timeout() const -> dbg_i2c1_smbus_timeout_f {return dbg_i2c1_smbus_timeout_f((m_value & dbg_i2c1_smbus_timeout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_i2c2_smbus_timeout() const -> dbg_i2c2_smbus_timeout_f {return dbg_i2c2_smbus_timeout_f((m_value & dbg_i2c2_smbus_timeout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_i2c3smbus_timeout() const -> dbg_i2c3smbus_timeout_f {return dbg_i2c3smbus_timeout_f((m_value & dbg_i2c3smbus_timeout_f::Mask) != 0);}

	constexpr dbgmcu_apb1_fz_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dbgmcu_apb1_fz_r other) const -> dbgmcu_apb1_fz_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dbgmcu_apb1_fz_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Debug MCU APB2 Freeze registe
 */
class dbgmcu_apb2_fz_r {
public:

/**
 * TIM1 counter stopped when core is halted
 */
class dbg_tim1_stop_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dbg_tim1_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb2_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb2_fz_r>() const {return ClearSet<dbgmcu_apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb2_fz_r other) const -> dbgmcu_apb2_fz_r { return static_cast<dbgmcu_apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb2_fz_r> other) const -> ClearSet<dbgmcu_apb2_fz_r> {return ClearSet<dbgmcu_apb2_fz_r>(dbgmcu_apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM9 counter stopped when core is halted
 */
class dbg_tim9_stop_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_tim9_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb2_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb2_fz_r>() const {return ClearSet<dbgmcu_apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb2_fz_r other) const -> dbgmcu_apb2_fz_r { return static_cast<dbgmcu_apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb2_fz_r> other) const -> ClearSet<dbgmcu_apb2_fz_r> {return ClearSet<dbgmcu_apb2_fz_r>(dbgmcu_apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM10 counter stopped when core is halted
 */
class dbg_tim10_stop_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_tim10_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb2_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb2_fz_r>() const {return ClearSet<dbgmcu_apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb2_fz_r other) const -> dbgmcu_apb2_fz_r { return static_cast<dbgmcu_apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb2_fz_r> other) const -> ClearSet<dbgmcu_apb2_fz_r> {return ClearSet<dbgmcu_apb2_fz_r>(dbgmcu_apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM11 counter stopped when core is halted
 */
class dbg_tim11_stop_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_tim11_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbgmcu_apb2_fz_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<dbgmcu_apb2_fz_r>() const {return ClearSet<dbgmcu_apb2_fz_r>(Mask, *this);}
	constexpr auto operator|(dbgmcu_apb2_fz_r other) const -> dbgmcu_apb2_fz_r { return static_cast<dbgmcu_apb2_fz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbgmcu_apb2_fz_r> other) const -> ClearSet<dbgmcu_apb2_fz_r> {return ClearSet<dbgmcu_apb2_fz_r>(dbgmcu_apb2_fz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dbg_tim1_stop() const -> dbg_tim1_stop_f {return dbg_tim1_stop_f((m_value & dbg_tim1_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim9_stop() const -> dbg_tim9_stop_f {return dbg_tim9_stop_f((m_value & dbg_tim9_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim10_stop() const -> dbg_tim10_stop_f {return dbg_tim10_stop_f((m_value & dbg_tim10_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_tim11_stop() const -> dbg_tim11_stop_f {return dbg_tim11_stop_f((m_value & dbg_tim11_stop_f::Mask) != 0);}

	constexpr dbgmcu_apb2_fz_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dbgmcu_apb2_fz_r other) const -> dbgmcu_apb2_fz_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dbgmcu_apb2_fz_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,dbgmcu_idcode_r> dbgmcu_idcode;
	Memory<uint32_t,dbgmcu_cr_r> dbgmcu_cr;
	Memory<uint32_t,dbgmcu_apb1_fz_r> dbgmcu_apb1_fz;
	Memory<uint32_t,dbgmcu_apb2_fz_r> dbgmcu_apb2_fz;
};

static_assert(std::is_standard_layout_v<dbg_p>);
static_assert(offsetof(dbg_p, dbgmcu_idcode) == dbg_p::dbgmcu_idcode_r::Offset);
static_assert(offsetof(dbg_p, dbgmcu_cr) == dbg_p::dbgmcu_cr_r::Offset);
static_assert(offsetof(dbg_p, dbgmcu_apb1_fz) == dbg_p::dbgmcu_apb1_fz_r::Offset);
static_assert(offsetof(dbg_p, dbgmcu_apb2_fz) == dbg_p::dbgmcu_apb2_fz_r::Offset);

inline dbg_p& dbg = *reinterpret_cast<dbg_p*>(0xE0042000);

} // STM32F401

