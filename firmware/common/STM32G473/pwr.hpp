#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Power control
 */
class pwr_p {
public:
/**
 * Power control register 1
 */
class cr1_r {
public:

/**
 * Low-power run
 */
class lpr_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lpr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Voltage scaling range selection
 */
class vos_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr vos_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Disable backup domain write protection
 */
class dbp_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Low-power mode selection
 */
class lpms_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr lpms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto lpr() const -> lpr_f {return lpr_f((m_value & lpr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vos() const -> vos_f {return vos_f(static_cast<uint8_t>(m_value >> vos_f::Offset));}
	[[nodiscard]] constexpr auto dbp() const -> dbp_f {return dbp_f((m_value & dbp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lpms() const -> lpms_f {return lpms_f(static_cast<uint8_t>(m_value >> lpms_f::Offset));}

	constexpr cr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr1_r other) const -> cr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b1000000000; // 512 0x200

private:
	uint32_t m_value;
};
/**
 * Power control register 2
 */
class cr2_r {
public:

/**
 * Peripheral voltage monitoring 1 enable: VDDA vs. COMP min voltage
 */
class pvmen1_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pvmen1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Power voltage detector level selection
 */
class pls_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pls_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Power voltage detector enable
 */
class pvde_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pvde_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Peripheral voltage monitoring 2 enable: VDDA vs. Fast DAC min voltage
 */
class pvmen2_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pvmen2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Peripheral voltage monitoring 3 enable: VDDA vs. ADC min voltage 1.62V
 */
class pvmen3_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pvmen3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Peripheral voltage monitoring 4 enable: VDDA vs. OPAMP/DAC min voltage
 */
class pvmen4_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pvmen4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pvmen1() const -> pvmen1_f {return pvmen1_f((m_value & pvmen1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pls() const -> pls_f {return pls_f(static_cast<uint8_t>(m_value >> pls_f::Offset));}
	[[nodiscard]] constexpr auto pvde() const -> pvde_f {return pvde_f((m_value & pvde_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pvmen2() const -> pvmen2_f {return pvmen2_f((m_value & pvmen2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pvmen3() const -> pvmen3_f {return pvmen3_f((m_value & pvmen3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pvmen4() const -> pvmen4_f {return pvmen4_f((m_value & pvmen4_f::Mask) != 0);}

	template<std::size_t Index> struct pvmen_f { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using pvmen_v = typename pvmen_f<Index>::type;
	template<std::size_t Index> constexpr auto pvmen() const { return pvmen_v<Index>::get(*this); }

	constexpr cr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr2_r other) const -> cr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power control register 3
 */
class cr3_r {
public:

/**
 * Enable Wakeup pin WKUP1
 */
class ewup1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ewup1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Enable Wakeup pin WKUP2
 */
class ewup2_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ewup2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Enable Wakeup pin WKUP3
 */
class ewup3_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ewup3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Enable Wakeup pin WKUP4
 */
class ewup4_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ewup4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Enable Wakeup pin WKUP5
 */
class ewup5_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ewup5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SRAM2 retention in Standby mode
 */
class rrs_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rrs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Apply pull-up and pull-down configuration
 */
class apc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr apc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * STDBY
 */
class ucpd1_stdby_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ucpd1_stdby_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DBDIS
 */
class ucpd1_dbdis_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ucpd1_dbdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Enable external WakeUp line
 */
class eiwul_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr eiwul_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ewup1() const -> ewup1_f {return ewup1_f((m_value & ewup1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ewup2() const -> ewup2_f {return ewup2_f((m_value & ewup2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ewup3() const -> ewup3_f {return ewup3_f((m_value & ewup3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ewup4() const -> ewup4_f {return ewup4_f((m_value & ewup4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ewup5() const -> ewup5_f {return ewup5_f((m_value & ewup5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rrs() const -> rrs_f {return rrs_f((m_value & rrs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto apc() const -> apc_f {return apc_f((m_value & apc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ucpd1_stdby() const -> ucpd1_stdby_f {return ucpd1_stdby_f((m_value & ucpd1_stdby_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ucpd1_dbdis() const -> ucpd1_dbdis_f {return ucpd1_dbdis_f((m_value & ucpd1_dbdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eiwul() const -> eiwul_f {return eiwul_f((m_value & eiwul_f::Mask) != 0);}

	template<std::size_t Index> struct ewup_f { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5); };
	template<std::size_t Index> using ewup_v = typename ewup_f<Index>::type;
	template<std::size_t Index> constexpr auto ewup() const { return ewup_v<Index>::get(*this); }

	constexpr cr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr3_r other) const -> cr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b1000000000000000; // 32768 0x8000

private:
	uint32_t m_value;
};
/**
 * Power control register 4
 */
class cr4_r {
public:

/**
 * VBAT battery charging resistor selection
 */
class vbrs_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr vbrs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr4_r>() const {return ClearSet<cr4_r>(Mask, *this);}
	constexpr auto operator|(cr4_r other) const -> cr4_r { return static_cast<cr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr4_r> other) const -> ClearSet<cr4_r> {return ClearSet<cr4_r>(cr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VBAT battery charging enable
 */
class vbe_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr vbe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr4_r>() const {return ClearSet<cr4_r>(Mask, *this);}
	constexpr auto operator|(cr4_r other) const -> cr4_r { return static_cast<cr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr4_r> other) const -> ClearSet<cr4_r> {return ClearSet<cr4_r>(cr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup pin WKUP5 polarity
 */
class wp5_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wp5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr4_r>() const {return ClearSet<cr4_r>(Mask, *this);}
	constexpr auto operator|(cr4_r other) const -> cr4_r { return static_cast<cr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr4_r> other) const -> ClearSet<cr4_r> {return ClearSet<cr4_r>(cr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup pin WKUP4 polarity
 */
class wp4_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wp4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr4_r>() const {return ClearSet<cr4_r>(Mask, *this);}
	constexpr auto operator|(cr4_r other) const -> cr4_r { return static_cast<cr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr4_r> other) const -> ClearSet<cr4_r> {return ClearSet<cr4_r>(cr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup pin WKUP3 polarity
 */
class wp3_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wp3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr4_r>() const {return ClearSet<cr4_r>(Mask, *this);}
	constexpr auto operator|(cr4_r other) const -> cr4_r { return static_cast<cr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr4_r> other) const -> ClearSet<cr4_r> {return ClearSet<cr4_r>(cr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup pin WKUP2 polarity
 */
class wp2_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wp2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr4_r>() const {return ClearSet<cr4_r>(Mask, *this);}
	constexpr auto operator|(cr4_r other) const -> cr4_r { return static_cast<cr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr4_r> other) const -> ClearSet<cr4_r> {return ClearSet<cr4_r>(cr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup pin WKUP1 polarity
 */
class wp1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wp1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr4_r>() const {return ClearSet<cr4_r>(Mask, *this);}
	constexpr auto operator|(cr4_r other) const -> cr4_r { return static_cast<cr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr4_r> other) const -> ClearSet<cr4_r> {return ClearSet<cr4_r>(cr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto vbrs() const -> vbrs_f {return vbrs_f((m_value & vbrs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vbe() const -> vbe_f {return vbe_f((m_value & vbe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wp5() const -> wp5_f {return wp5_f((m_value & wp5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wp4() const -> wp4_f {return wp4_f((m_value & wp4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wp3() const -> wp3_f {return wp3_f((m_value & wp3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wp2() const -> wp2_f {return wp2_f((m_value & wp2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wp1() const -> wp1_f {return wp1_f((m_value & wp1_f::Mask) != 0);}

	template<std::size_t Index> struct wp_f { static_assert(Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using wp_v = typename wp_f<Index>::type;
	template<std::size_t Index> constexpr auto wp() const { return wp_v<Index>::get(*this); }

	constexpr cr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr4_r other) const -> cr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power status register 1
 */
class sr1_r {
public:

/**
 * Wakeup flag internal
 */
class wufi_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wufi_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr1_r>() const {return ClearSet<sr1_r>(Mask, *this);}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr1_r> other) const -> ClearSet<sr1_r> {return ClearSet<sr1_r>(sr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Standby flag
 */
class sbf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sbf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr1_r>() const {return ClearSet<sr1_r>(Mask, *this);}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr1_r> other) const -> ClearSet<sr1_r> {return ClearSet<sr1_r>(sr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup flag 5
 */
class wuf5_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wuf5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr1_r>() const {return ClearSet<sr1_r>(Mask, *this);}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr1_r> other) const -> ClearSet<sr1_r> {return ClearSet<sr1_r>(sr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup flag 4
 */
class wuf4_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wuf4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr1_r>() const {return ClearSet<sr1_r>(Mask, *this);}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr1_r> other) const -> ClearSet<sr1_r> {return ClearSet<sr1_r>(sr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup flag 3
 */
class wuf3_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wuf3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr1_r>() const {return ClearSet<sr1_r>(Mask, *this);}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr1_r> other) const -> ClearSet<sr1_r> {return ClearSet<sr1_r>(sr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup flag 2
 */
class wuf2_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wuf2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr1_r>() const {return ClearSet<sr1_r>(Mask, *this);}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr1_r> other) const -> ClearSet<sr1_r> {return ClearSet<sr1_r>(sr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup flag 1
 */
class wuf1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wuf1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr1_r>() const {return ClearSet<sr1_r>(Mask, *this);}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr1_r> other) const -> ClearSet<sr1_r> {return ClearSet<sr1_r>(sr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto wufi() const -> wufi_f {return wufi_f((m_value & wufi_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbf() const -> sbf_f {return sbf_f((m_value & sbf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wuf5() const -> wuf5_f {return wuf5_f((m_value & wuf5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wuf4() const -> wuf4_f {return wuf4_f((m_value & wuf4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wuf3() const -> wuf3_f {return wuf3_f((m_value & wuf3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wuf2() const -> wuf2_f {return wuf2_f((m_value & wuf2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wuf1() const -> wuf1_f {return wuf1_f((m_value & wuf1_f::Mask) != 0);}

	template<std::size_t Index> struct wuf_f { static_assert(Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using wuf_v = typename wuf_f<Index>::type;
	template<std::size_t Index> constexpr auto wuf() const { return wuf_v<Index>::get(*this); }

	constexpr sr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr1_r other) const -> sr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power status register 2
 */
class sr2_r {
public:

/**
 * Peripheral voltage monitoring output: VDDA vs. 2.2 V
 */
class pvmo4_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pvmo4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr2_r>() const {return ClearSet<sr2_r>(Mask, *this);}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr2_r> other) const -> ClearSet<sr2_r> {return ClearSet<sr2_r>(sr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Peripheral voltage monitoring output: VDDA vs. 1.62 V
 */
class pvmo3_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pvmo3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr2_r>() const {return ClearSet<sr2_r>(Mask, *this);}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr2_r> other) const -> ClearSet<sr2_r> {return ClearSet<sr2_r>(sr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Peripheral voltage monitoring output: VDDIO2 vs. 0.9 V
 */
class pvmo2_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pvmo2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr2_r>() const {return ClearSet<sr2_r>(Mask, *this);}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr2_r> other) const -> ClearSet<sr2_r> {return ClearSet<sr2_r>(sr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Peripheral voltage monitoring output: VDDUSB vs. 1.2 V
 */
class pvmo1_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pvmo1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr2_r>() const {return ClearSet<sr2_r>(Mask, *this);}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr2_r> other) const -> ClearSet<sr2_r> {return ClearSet<sr2_r>(sr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Power voltage detector output
 */
class pvdo_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pvdo_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr2_r>() const {return ClearSet<sr2_r>(Mask, *this);}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr2_r> other) const -> ClearSet<sr2_r> {return ClearSet<sr2_r>(sr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Voltage scaling flag
 */
class vosf_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr vosf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr2_r>() const {return ClearSet<sr2_r>(Mask, *this);}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr2_r> other) const -> ClearSet<sr2_r> {return ClearSet<sr2_r>(sr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Low-power regulator flag
 */
class reglpf_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr reglpf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr2_r>() const {return ClearSet<sr2_r>(Mask, *this);}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr2_r> other) const -> ClearSet<sr2_r> {return ClearSet<sr2_r>(sr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Low-power regulator started
 */
class reglps_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr reglps_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr2_r>() const {return ClearSet<sr2_r>(Mask, *this);}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr2_r> other) const -> ClearSet<sr2_r> {return ClearSet<sr2_r>(sr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pvmo4() const -> pvmo4_f {return pvmo4_f((m_value & pvmo4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pvmo3() const -> pvmo3_f {return pvmo3_f((m_value & pvmo3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pvmo2() const -> pvmo2_f {return pvmo2_f((m_value & pvmo2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pvmo1() const -> pvmo1_f {return pvmo1_f((m_value & pvmo1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pvdo() const -> pvdo_f {return pvdo_f((m_value & pvdo_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vosf() const -> vosf_f {return vosf_f((m_value & vosf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto reglpf() const -> reglpf_f {return reglpf_f((m_value & reglpf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto reglps() const -> reglps_f {return reglps_f((m_value & reglps_f::Mask) != 0);}

	template<std::size_t Index> struct pvmo_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using pvmo_v = typename pvmo_f<Index>::type;
	template<std::size_t Index> constexpr auto pvmo() const { return pvmo_v<Index>::get(*this); }

	constexpr sr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr2_r other) const -> sr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power status clear register
 */
class scr_r {
public:

/**
 * Clear standby flag
 */
class csbf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr csbf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear wakeup flag 5
 */
class cwuf5_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cwuf5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear wakeup flag 4
 */
class cwuf4_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cwuf4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear wakeup flag 3
 */
class cwuf3_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cwuf3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear wakeup flag 2
 */
class cwuf2_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cwuf2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear wakeup flag 1
 */
class cwuf1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cwuf1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto csbf() const -> csbf_f {return csbf_f((m_value & csbf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cwuf5() const -> cwuf5_f {return cwuf5_f((m_value & cwuf5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cwuf4() const -> cwuf4_f {return cwuf4_f((m_value & cwuf4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cwuf3() const -> cwuf3_f {return cwuf3_f((m_value & cwuf3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cwuf2() const -> cwuf2_f {return cwuf2_f((m_value & cwuf2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cwuf1() const -> cwuf1_f {return cwuf1_f((m_value & cwuf1_f::Mask) != 0);}

	template<std::size_t Index> struct cwuf_f { static_assert(Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using cwuf_v = typename cwuf_f<Index>::type;
	template<std::size_t Index> constexpr auto cwuf() const { return cwuf_v<Index>::get(*this); }

	constexpr scr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(scr_r other) const -> scr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> scr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port A pull-up control register
 */
class pucra_r {
public:

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-up bit y (y=0..15)
 */
class pu0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucra_r>() const {return ClearSet<pucra_r>(Mask, *this);}
	constexpr auto operator|(pucra_r other) const -> pucra_r { return static_cast<pucra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucra_r> other) const -> ClearSet<pucra_r> {return ClearSet<pucra_r>(pucra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pu15() const -> pu15_f {return pu15_f((m_value & pu15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu13() const -> pu13_f {return pu13_f((m_value & pu13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu12() const -> pu12_f {return pu12_f((m_value & pu12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu11() const -> pu11_f {return pu11_f((m_value & pu11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu10() const -> pu10_f {return pu10_f((m_value & pu10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu9() const -> pu9_f {return pu9_f((m_value & pu9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu8() const -> pu8_f {return pu8_f((m_value & pu8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu7() const -> pu7_f {return pu7_f((m_value & pu7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu6() const -> pu6_f {return pu6_f((m_value & pu6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu5() const -> pu5_f {return pu5_f((m_value & pu5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu4() const -> pu4_f {return pu4_f((m_value & pu4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu3() const -> pu3_f {return pu3_f((m_value & pu3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu2() const -> pu2_f {return pu2_f((m_value & pu2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu1() const -> pu1_f {return pu1_f((m_value & pu1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu0() const -> pu0_f {return pu0_f((m_value & pu0_f::Mask) != 0);}

	template<std::size_t Index> struct pu_f { static_assert(Index == 15 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pu_v = typename pu_f<Index>::type;
	template<std::size_t Index> constexpr auto pu() const { return pu_v<Index>::get(*this); }

	constexpr pucra_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pucra_r other) const -> pucra_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pucra_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port A pull-down control register
 */
class pdcra_r {
public:

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port A pull-down bit y (y=0..15)
 */
class pd0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcra_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcra_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcra_r>() const {return ClearSet<pdcra_r>(Mask, *this);}
	constexpr auto operator|(pdcra_r other) const -> pdcra_r { return static_cast<pdcra_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcra_r> other) const -> ClearSet<pdcra_r> {return ClearSet<pdcra_r>(pdcra_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pd14() const -> pd14_f {return pd14_f((m_value & pd14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd12() const -> pd12_f {return pd12_f((m_value & pd12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd11() const -> pd11_f {return pd11_f((m_value & pd11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd10() const -> pd10_f {return pd10_f((m_value & pd10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd9() const -> pd9_f {return pd9_f((m_value & pd9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd8() const -> pd8_f {return pd8_f((m_value & pd8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd7() const -> pd7_f {return pd7_f((m_value & pd7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd6() const -> pd6_f {return pd6_f((m_value & pd6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd5() const -> pd5_f {return pd5_f((m_value & pd5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd4() const -> pd4_f {return pd4_f((m_value & pd4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd3() const -> pd3_f {return pd3_f((m_value & pd3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd2() const -> pd2_f {return pd2_f((m_value & pd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd1() const -> pd1_f {return pd1_f((m_value & pd1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd0() const -> pd0_f {return pd0_f((m_value & pd0_f::Mask) != 0);}

	template<std::size_t Index> struct pd_f { static_assert(Index == 14 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pd_v = typename pd_f<Index>::type;
	template<std::size_t Index> constexpr auto pd() const { return pd_v<Index>::get(*this); }

	constexpr pdcra_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pdcra_r other) const -> pdcra_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pdcra_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port B pull-up control register
 */
class pucrb_r {
public:

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-up bit y (y=0..15)
 */
class pu0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrb_r>() const {return ClearSet<pucrb_r>(Mask, *this);}
	constexpr auto operator|(pucrb_r other) const -> pucrb_r { return static_cast<pucrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrb_r> other) const -> ClearSet<pucrb_r> {return ClearSet<pucrb_r>(pucrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pu15() const -> pu15_f {return pu15_f((m_value & pu15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu14() const -> pu14_f {return pu14_f((m_value & pu14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu13() const -> pu13_f {return pu13_f((m_value & pu13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu12() const -> pu12_f {return pu12_f((m_value & pu12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu11() const -> pu11_f {return pu11_f((m_value & pu11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu10() const -> pu10_f {return pu10_f((m_value & pu10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu9() const -> pu9_f {return pu9_f((m_value & pu9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu8() const -> pu8_f {return pu8_f((m_value & pu8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu7() const -> pu7_f {return pu7_f((m_value & pu7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu6() const -> pu6_f {return pu6_f((m_value & pu6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu5() const -> pu5_f {return pu5_f((m_value & pu5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu4() const -> pu4_f {return pu4_f((m_value & pu4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu3() const -> pu3_f {return pu3_f((m_value & pu3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu2() const -> pu2_f {return pu2_f((m_value & pu2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu1() const -> pu1_f {return pu1_f((m_value & pu1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu0() const -> pu0_f {return pu0_f((m_value & pu0_f::Mask) != 0);}

	template<std::size_t Index> struct pu_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pu_v = typename pu_f<Index>::type;
	template<std::size_t Index> constexpr auto pu() const { return pu_v<Index>::get(*this); }

	constexpr pucrb_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pucrb_r other) const -> pucrb_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pucrb_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port B pull-down control register
 */
class pdcrb_r {
public:

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port B pull-down bit y (y=0..15)
 */
class pd0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrb_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrb_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrb_r>() const {return ClearSet<pdcrb_r>(Mask, *this);}
	constexpr auto operator|(pdcrb_r other) const -> pdcrb_r { return static_cast<pdcrb_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrb_r> other) const -> ClearSet<pdcrb_r> {return ClearSet<pdcrb_r>(pdcrb_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pd15() const -> pd15_f {return pd15_f((m_value & pd15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd14() const -> pd14_f {return pd14_f((m_value & pd14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd13() const -> pd13_f {return pd13_f((m_value & pd13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd12() const -> pd12_f {return pd12_f((m_value & pd12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd11() const -> pd11_f {return pd11_f((m_value & pd11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd10() const -> pd10_f {return pd10_f((m_value & pd10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd9() const -> pd9_f {return pd9_f((m_value & pd9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd8() const -> pd8_f {return pd8_f((m_value & pd8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd7() const -> pd7_f {return pd7_f((m_value & pd7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd6() const -> pd6_f {return pd6_f((m_value & pd6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd5() const -> pd5_f {return pd5_f((m_value & pd5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd3() const -> pd3_f {return pd3_f((m_value & pd3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd2() const -> pd2_f {return pd2_f((m_value & pd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd1() const -> pd1_f {return pd1_f((m_value & pd1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd0() const -> pd0_f {return pd0_f((m_value & pd0_f::Mask) != 0);}

	template<std::size_t Index> struct pd_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pd_v = typename pd_f<Index>::type;
	template<std::size_t Index> constexpr auto pd() const { return pd_v<Index>::get(*this); }

	constexpr pdcrb_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pdcrb_r other) const -> pdcrb_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pdcrb_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port C pull-up control register
 */
class pucrc_r {
public:

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-up bit y (y=0..15)
 */
class pu0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrc_r>() const {return ClearSet<pucrc_r>(Mask, *this);}
	constexpr auto operator|(pucrc_r other) const -> pucrc_r { return static_cast<pucrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrc_r> other) const -> ClearSet<pucrc_r> {return ClearSet<pucrc_r>(pucrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pu15() const -> pu15_f {return pu15_f((m_value & pu15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu14() const -> pu14_f {return pu14_f((m_value & pu14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu13() const -> pu13_f {return pu13_f((m_value & pu13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu12() const -> pu12_f {return pu12_f((m_value & pu12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu11() const -> pu11_f {return pu11_f((m_value & pu11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu10() const -> pu10_f {return pu10_f((m_value & pu10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu9() const -> pu9_f {return pu9_f((m_value & pu9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu8() const -> pu8_f {return pu8_f((m_value & pu8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu7() const -> pu7_f {return pu7_f((m_value & pu7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu6() const -> pu6_f {return pu6_f((m_value & pu6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu5() const -> pu5_f {return pu5_f((m_value & pu5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu4() const -> pu4_f {return pu4_f((m_value & pu4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu3() const -> pu3_f {return pu3_f((m_value & pu3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu2() const -> pu2_f {return pu2_f((m_value & pu2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu1() const -> pu1_f {return pu1_f((m_value & pu1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu0() const -> pu0_f {return pu0_f((m_value & pu0_f::Mask) != 0);}

	template<std::size_t Index> struct pu_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pu_v = typename pu_f<Index>::type;
	template<std::size_t Index> constexpr auto pu() const { return pu_v<Index>::get(*this); }

	constexpr pucrc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pucrc_r other) const -> pucrc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pucrc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port C pull-down control register
 */
class pdcrc_r {
public:

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port C pull-down bit y (y=0..15)
 */
class pd0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrc_r>() const {return ClearSet<pdcrc_r>(Mask, *this);}
	constexpr auto operator|(pdcrc_r other) const -> pdcrc_r { return static_cast<pdcrc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrc_r> other) const -> ClearSet<pdcrc_r> {return ClearSet<pdcrc_r>(pdcrc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pd15() const -> pd15_f {return pd15_f((m_value & pd15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd14() const -> pd14_f {return pd14_f((m_value & pd14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd13() const -> pd13_f {return pd13_f((m_value & pd13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd12() const -> pd12_f {return pd12_f((m_value & pd12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd11() const -> pd11_f {return pd11_f((m_value & pd11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd10() const -> pd10_f {return pd10_f((m_value & pd10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd9() const -> pd9_f {return pd9_f((m_value & pd9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd8() const -> pd8_f {return pd8_f((m_value & pd8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd7() const -> pd7_f {return pd7_f((m_value & pd7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd6() const -> pd6_f {return pd6_f((m_value & pd6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd5() const -> pd5_f {return pd5_f((m_value & pd5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd4() const -> pd4_f {return pd4_f((m_value & pd4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd3() const -> pd3_f {return pd3_f((m_value & pd3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd2() const -> pd2_f {return pd2_f((m_value & pd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd1() const -> pd1_f {return pd1_f((m_value & pd1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd0() const -> pd0_f {return pd0_f((m_value & pd0_f::Mask) != 0);}

	template<std::size_t Index> struct pd_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pd_v = typename pd_f<Index>::type;
	template<std::size_t Index> constexpr auto pd() const { return pd_v<Index>::get(*this); }

	constexpr pdcrc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pdcrc_r other) const -> pdcrc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pdcrc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port D pull-up control register
 */
class pucrd_r {
public:

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-up bit y (y=0..15)
 */
class pu0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrd_r>() const {return ClearSet<pucrd_r>(Mask, *this);}
	constexpr auto operator|(pucrd_r other) const -> pucrd_r { return static_cast<pucrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrd_r> other) const -> ClearSet<pucrd_r> {return ClearSet<pucrd_r>(pucrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pu15() const -> pu15_f {return pu15_f((m_value & pu15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu14() const -> pu14_f {return pu14_f((m_value & pu14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu13() const -> pu13_f {return pu13_f((m_value & pu13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu12() const -> pu12_f {return pu12_f((m_value & pu12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu11() const -> pu11_f {return pu11_f((m_value & pu11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu10() const -> pu10_f {return pu10_f((m_value & pu10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu9() const -> pu9_f {return pu9_f((m_value & pu9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu8() const -> pu8_f {return pu8_f((m_value & pu8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu7() const -> pu7_f {return pu7_f((m_value & pu7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu6() const -> pu6_f {return pu6_f((m_value & pu6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu5() const -> pu5_f {return pu5_f((m_value & pu5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu4() const -> pu4_f {return pu4_f((m_value & pu4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu3() const -> pu3_f {return pu3_f((m_value & pu3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu2() const -> pu2_f {return pu2_f((m_value & pu2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu1() const -> pu1_f {return pu1_f((m_value & pu1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu0() const -> pu0_f {return pu0_f((m_value & pu0_f::Mask) != 0);}

	template<std::size_t Index> struct pu_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pu_v = typename pu_f<Index>::type;
	template<std::size_t Index> constexpr auto pu() const { return pu_v<Index>::get(*this); }

	constexpr pucrd_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pucrd_r other) const -> pucrd_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pucrd_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port D pull-down control register
 */
class pdcrd_r {
public:

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port D pull-down bit y (y=0..15)
 */
class pd0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrd_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrd_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrd_r>() const {return ClearSet<pdcrd_r>(Mask, *this);}
	constexpr auto operator|(pdcrd_r other) const -> pdcrd_r { return static_cast<pdcrd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrd_r> other) const -> ClearSet<pdcrd_r> {return ClearSet<pdcrd_r>(pdcrd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pd15() const -> pd15_f {return pd15_f((m_value & pd15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd14() const -> pd14_f {return pd14_f((m_value & pd14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd13() const -> pd13_f {return pd13_f((m_value & pd13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd12() const -> pd12_f {return pd12_f((m_value & pd12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd11() const -> pd11_f {return pd11_f((m_value & pd11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd10() const -> pd10_f {return pd10_f((m_value & pd10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd9() const -> pd9_f {return pd9_f((m_value & pd9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd8() const -> pd8_f {return pd8_f((m_value & pd8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd7() const -> pd7_f {return pd7_f((m_value & pd7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd6() const -> pd6_f {return pd6_f((m_value & pd6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd5() const -> pd5_f {return pd5_f((m_value & pd5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd4() const -> pd4_f {return pd4_f((m_value & pd4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd3() const -> pd3_f {return pd3_f((m_value & pd3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd2() const -> pd2_f {return pd2_f((m_value & pd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd1() const -> pd1_f {return pd1_f((m_value & pd1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd0() const -> pd0_f {return pd0_f((m_value & pd0_f::Mask) != 0);}

	template<std::size_t Index> struct pd_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pd_v = typename pd_f<Index>::type;
	template<std::size_t Index> constexpr auto pd() const { return pd_v<Index>::get(*this); }

	constexpr pdcrd_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pdcrd_r other) const -> pdcrd_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pdcrd_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port E pull-up control register
 */
class pucre_r {
public:

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-up bit y (y=0..15)
 */
class pu0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucre_r>() const {return ClearSet<pucre_r>(Mask, *this);}
	constexpr auto operator|(pucre_r other) const -> pucre_r { return static_cast<pucre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucre_r> other) const -> ClearSet<pucre_r> {return ClearSet<pucre_r>(pucre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pu15() const -> pu15_f {return pu15_f((m_value & pu15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu14() const -> pu14_f {return pu14_f((m_value & pu14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu13() const -> pu13_f {return pu13_f((m_value & pu13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu12() const -> pu12_f {return pu12_f((m_value & pu12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu11() const -> pu11_f {return pu11_f((m_value & pu11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu10() const -> pu10_f {return pu10_f((m_value & pu10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu9() const -> pu9_f {return pu9_f((m_value & pu9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu8() const -> pu8_f {return pu8_f((m_value & pu8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu7() const -> pu7_f {return pu7_f((m_value & pu7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu6() const -> pu6_f {return pu6_f((m_value & pu6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu5() const -> pu5_f {return pu5_f((m_value & pu5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu4() const -> pu4_f {return pu4_f((m_value & pu4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu3() const -> pu3_f {return pu3_f((m_value & pu3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu2() const -> pu2_f {return pu2_f((m_value & pu2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu1() const -> pu1_f {return pu1_f((m_value & pu1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu0() const -> pu0_f {return pu0_f((m_value & pu0_f::Mask) != 0);}

	template<std::size_t Index> struct pu_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pu_v = typename pu_f<Index>::type;
	template<std::size_t Index> constexpr auto pu() const { return pu_v<Index>::get(*this); }

	constexpr pucre_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pucre_r other) const -> pucre_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pucre_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port E pull-down control register
 */
class pdcre_r {
public:

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port E pull-down bit y (y=0..15)
 */
class pd0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcre_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcre_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcre_r>() const {return ClearSet<pdcre_r>(Mask, *this);}
	constexpr auto operator|(pdcre_r other) const -> pdcre_r { return static_cast<pdcre_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcre_r> other) const -> ClearSet<pdcre_r> {return ClearSet<pdcre_r>(pdcre_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pd15() const -> pd15_f {return pd15_f((m_value & pd15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd14() const -> pd14_f {return pd14_f((m_value & pd14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd13() const -> pd13_f {return pd13_f((m_value & pd13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd12() const -> pd12_f {return pd12_f((m_value & pd12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd11() const -> pd11_f {return pd11_f((m_value & pd11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd10() const -> pd10_f {return pd10_f((m_value & pd10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd9() const -> pd9_f {return pd9_f((m_value & pd9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd8() const -> pd8_f {return pd8_f((m_value & pd8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd7() const -> pd7_f {return pd7_f((m_value & pd7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd6() const -> pd6_f {return pd6_f((m_value & pd6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd5() const -> pd5_f {return pd5_f((m_value & pd5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd4() const -> pd4_f {return pd4_f((m_value & pd4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd3() const -> pd3_f {return pd3_f((m_value & pd3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd2() const -> pd2_f {return pd2_f((m_value & pd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd1() const -> pd1_f {return pd1_f((m_value & pd1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd0() const -> pd0_f {return pd0_f((m_value & pd0_f::Mask) != 0);}

	template<std::size_t Index> struct pd_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pd_v = typename pd_f<Index>::type;
	template<std::size_t Index> constexpr auto pd() const { return pd_v<Index>::get(*this); }

	constexpr pdcre_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pdcre_r other) const -> pdcre_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pdcre_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port F pull-up control register
 */
class pucrf_r {
public:

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-up bit y (y=0..15)
 */
class pu0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrf_r>() const {return ClearSet<pucrf_r>(Mask, *this);}
	constexpr auto operator|(pucrf_r other) const -> pucrf_r { return static_cast<pucrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrf_r> other) const -> ClearSet<pucrf_r> {return ClearSet<pucrf_r>(pucrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pu15() const -> pu15_f {return pu15_f((m_value & pu15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu14() const -> pu14_f {return pu14_f((m_value & pu14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu13() const -> pu13_f {return pu13_f((m_value & pu13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu12() const -> pu12_f {return pu12_f((m_value & pu12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu11() const -> pu11_f {return pu11_f((m_value & pu11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu10() const -> pu10_f {return pu10_f((m_value & pu10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu9() const -> pu9_f {return pu9_f((m_value & pu9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu8() const -> pu8_f {return pu8_f((m_value & pu8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu7() const -> pu7_f {return pu7_f((m_value & pu7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu6() const -> pu6_f {return pu6_f((m_value & pu6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu5() const -> pu5_f {return pu5_f((m_value & pu5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu4() const -> pu4_f {return pu4_f((m_value & pu4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu3() const -> pu3_f {return pu3_f((m_value & pu3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu2() const -> pu2_f {return pu2_f((m_value & pu2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu1() const -> pu1_f {return pu1_f((m_value & pu1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu0() const -> pu0_f {return pu0_f((m_value & pu0_f::Mask) != 0);}

	template<std::size_t Index> struct pu_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pu_v = typename pu_f<Index>::type;
	template<std::size_t Index> constexpr auto pu() const { return pu_v<Index>::get(*this); }

	constexpr pucrf_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pucrf_r other) const -> pucrf_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pucrf_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port F pull-down control register
 */
class pdcrf_r {
public:

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port F pull-down bit y (y=0..15)
 */
class pd0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrf_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrf_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrf_r>() const {return ClearSet<pdcrf_r>(Mask, *this);}
	constexpr auto operator|(pdcrf_r other) const -> pdcrf_r { return static_cast<pdcrf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrf_r> other) const -> ClearSet<pdcrf_r> {return ClearSet<pdcrf_r>(pdcrf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pd15() const -> pd15_f {return pd15_f((m_value & pd15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd14() const -> pd14_f {return pd14_f((m_value & pd14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd13() const -> pd13_f {return pd13_f((m_value & pd13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd12() const -> pd12_f {return pd12_f((m_value & pd12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd11() const -> pd11_f {return pd11_f((m_value & pd11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd10() const -> pd10_f {return pd10_f((m_value & pd10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd9() const -> pd9_f {return pd9_f((m_value & pd9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd8() const -> pd8_f {return pd8_f((m_value & pd8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd7() const -> pd7_f {return pd7_f((m_value & pd7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd6() const -> pd6_f {return pd6_f((m_value & pd6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd5() const -> pd5_f {return pd5_f((m_value & pd5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd4() const -> pd4_f {return pd4_f((m_value & pd4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd3() const -> pd3_f {return pd3_f((m_value & pd3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd2() const -> pd2_f {return pd2_f((m_value & pd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd1() const -> pd1_f {return pd1_f((m_value & pd1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd0() const -> pd0_f {return pd0_f((m_value & pd0_f::Mask) != 0);}

	template<std::size_t Index> struct pd_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pd_v = typename pd_f<Index>::type;
	template<std::size_t Index> constexpr auto pd() const { return pd_v<Index>::get(*this); }

	constexpr pdcrf_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pdcrf_r other) const -> pdcrf_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pdcrf_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port G pull-up control register
 */
class pucrg_r {
public:

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pu8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-up bit y (y=0..15)
 */
class pu0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pu0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pucrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pucrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pucrg_r>() const {return ClearSet<pucrg_r>(Mask, *this);}
	constexpr auto operator|(pucrg_r other) const -> pucrg_r { return static_cast<pucrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pucrg_r> other) const -> ClearSet<pucrg_r> {return ClearSet<pucrg_r>(pucrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pu10() const -> pu10_f {return pu10_f((m_value & pu10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu9() const -> pu9_f {return pu9_f((m_value & pu9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu8() const -> pu8_f {return pu8_f((m_value & pu8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu7() const -> pu7_f {return pu7_f((m_value & pu7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu6() const -> pu6_f {return pu6_f((m_value & pu6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu5() const -> pu5_f {return pu5_f((m_value & pu5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu4() const -> pu4_f {return pu4_f((m_value & pu4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu3() const -> pu3_f {return pu3_f((m_value & pu3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu2() const -> pu2_f {return pu2_f((m_value & pu2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu1() const -> pu1_f {return pu1_f((m_value & pu1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pu0() const -> pu0_f {return pu0_f((m_value & pu0_f::Mask) != 0);}

	template<std::size_t Index> struct pu_f { static_assert(Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pu_v = typename pu_f<Index>::type;
	template<std::size_t Index> constexpr auto pu() const { return pu_v<Index>::get(*this); }

	constexpr pucrg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pucrg_r other) const -> pucrg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pucrg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power Port G pull-down control register
 */
class pdcrg_r {
public:

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pd8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Port G pull-down bit y (y=0..15)
 */
class pd0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pd0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdcrg_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdcrg_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdcrg_r>() const {return ClearSet<pdcrg_r>(Mask, *this);}
	constexpr auto operator|(pdcrg_r other) const -> pdcrg_r { return static_cast<pdcrg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdcrg_r> other) const -> ClearSet<pdcrg_r> {return ClearSet<pdcrg_r>(pdcrg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pd10() const -> pd10_f {return pd10_f((m_value & pd10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd9() const -> pd9_f {return pd9_f((m_value & pd9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd8() const -> pd8_f {return pd8_f((m_value & pd8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd7() const -> pd7_f {return pd7_f((m_value & pd7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd6() const -> pd6_f {return pd6_f((m_value & pd6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd5() const -> pd5_f {return pd5_f((m_value & pd5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd4() const -> pd4_f {return pd4_f((m_value & pd4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd3() const -> pd3_f {return pd3_f((m_value & pd3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd2() const -> pd2_f {return pd2_f((m_value & pd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd1() const -> pd1_f {return pd1_f((m_value & pd1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pd0() const -> pd0_f {return pd0_f((m_value & pd0_f::Mask) != 0);}

	template<std::size_t Index> struct pd_f { static_assert(Index == 10 || Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using pd_v = typename pd_f<Index>::type;
	template<std::size_t Index> constexpr auto pd() const { return pd_v<Index>::get(*this); }

	constexpr pdcrg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pdcrg_r other) const -> pdcrg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pdcrg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Power control register 5
 */
class cr5_r {
public:

/**
 * Main regular range 1 mode
 */
class r1mode_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr r1mode_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr5_r>() const {return ClearSet<cr5_r>(Mask, *this);}
	constexpr auto operator|(cr5_r other) const -> cr5_r { return static_cast<cr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr5_r> other) const -> ClearSet<cr5_r> {return ClearSet<cr5_r>(cr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto r1mode() const -> r1mode_f {return r1mode_f((m_value & r1mode_f::Mask) != 0);}

	constexpr cr5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr5_r other) const -> cr5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0b100000000; // 256 0x100

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct sr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using sr_v = typename sr_r<Index>::type;
	template<std::size_t Index> constexpr auto& sr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,cr3_r> cr3;
	Memory<uint32_t,cr4_r> cr4;
	ReadOnlyMemory<uint32_t,sr1_r> sr1;
	ReadOnlyMemory<uint32_t,sr2_r> sr2;
	WriteOnlyMemory<uint32_t,scr_r> scr;
	Padding<4> _p28;
	Memory<uint32_t,pucra_r> pucra;
	Memory<uint32_t,pdcra_r> pdcra;
	Memory<uint32_t,pucrb_r> pucrb;
	Memory<uint32_t,pdcrb_r> pdcrb;
	Memory<uint32_t,pucrc_r> pucrc;
	Memory<uint32_t,pdcrc_r> pdcrc;
	Memory<uint32_t,pucrd_r> pucrd;
	Memory<uint32_t,pdcrd_r> pdcrd;
	Memory<uint32_t,pucre_r> pucre;
	Memory<uint32_t,pdcre_r> pdcre;
	Memory<uint32_t,pucrf_r> pucrf;
	Memory<uint32_t,pdcrf_r> pdcrf;
	Memory<uint32_t,pucrg_r> pucrg;
	Memory<uint32_t,pdcrg_r> pdcrg;
	Padding<40> _p88;
	Memory<uint32_t,cr5_r> cr5;
};

template<> struct pwr_p::cr2_r::pvmen_f<1> { using type = pwr_p::cr2_r::pvmen1_f; };
template<> struct pwr_p::cr2_r::pvmen_f<2> { using type = pwr_p::cr2_r::pvmen2_f; };
template<> struct pwr_p::cr2_r::pvmen_f<3> { using type = pwr_p::cr2_r::pvmen3_f; };
template<> struct pwr_p::cr2_r::pvmen_f<4> { using type = pwr_p::cr2_r::pvmen4_f; };

template<> struct pwr_p::cr3_r::ewup_f<1> { using type = pwr_p::cr3_r::ewup1_f; };
template<> struct pwr_p::cr3_r::ewup_f<2> { using type = pwr_p::cr3_r::ewup2_f; };
template<> struct pwr_p::cr3_r::ewup_f<3> { using type = pwr_p::cr3_r::ewup3_f; };
template<> struct pwr_p::cr3_r::ewup_f<4> { using type = pwr_p::cr3_r::ewup4_f; };
template<> struct pwr_p::cr3_r::ewup_f<5> { using type = pwr_p::cr3_r::ewup5_f; };

template<> struct pwr_p::cr4_r::wp_f<5> { using type = pwr_p::cr4_r::wp5_f; };
template<> struct pwr_p::cr4_r::wp_f<4> { using type = pwr_p::cr4_r::wp4_f; };
template<> struct pwr_p::cr4_r::wp_f<3> { using type = pwr_p::cr4_r::wp3_f; };
template<> struct pwr_p::cr4_r::wp_f<2> { using type = pwr_p::cr4_r::wp2_f; };
template<> struct pwr_p::cr4_r::wp_f<1> { using type = pwr_p::cr4_r::wp1_f; };

template<> struct pwr_p::sr1_r::wuf_f<5> { using type = pwr_p::sr1_r::wuf5_f; };
template<> struct pwr_p::sr1_r::wuf_f<4> { using type = pwr_p::sr1_r::wuf4_f; };
template<> struct pwr_p::sr1_r::wuf_f<3> { using type = pwr_p::sr1_r::wuf3_f; };
template<> struct pwr_p::sr1_r::wuf_f<2> { using type = pwr_p::sr1_r::wuf2_f; };
template<> struct pwr_p::sr1_r::wuf_f<1> { using type = pwr_p::sr1_r::wuf1_f; };

template<> struct pwr_p::sr2_r::pvmo_f<4> { using type = pwr_p::sr2_r::pvmo4_f; };
template<> struct pwr_p::sr2_r::pvmo_f<3> { using type = pwr_p::sr2_r::pvmo3_f; };
template<> struct pwr_p::sr2_r::pvmo_f<2> { using type = pwr_p::sr2_r::pvmo2_f; };
template<> struct pwr_p::sr2_r::pvmo_f<1> { using type = pwr_p::sr2_r::pvmo1_f; };

template<> struct pwr_p::scr_r::cwuf_f<5> { using type = pwr_p::scr_r::cwuf5_f; };
template<> struct pwr_p::scr_r::cwuf_f<4> { using type = pwr_p::scr_r::cwuf4_f; };
template<> struct pwr_p::scr_r::cwuf_f<3> { using type = pwr_p::scr_r::cwuf3_f; };
template<> struct pwr_p::scr_r::cwuf_f<2> { using type = pwr_p::scr_r::cwuf2_f; };
template<> struct pwr_p::scr_r::cwuf_f<1> { using type = pwr_p::scr_r::cwuf1_f; };

template<> struct pwr_p::pucra_r::pu_f<15> { using type = pwr_p::pucra_r::pu15_f; };
template<> struct pwr_p::pucra_r::pu_f<13> { using type = pwr_p::pucra_r::pu13_f; };
template<> struct pwr_p::pucra_r::pu_f<12> { using type = pwr_p::pucra_r::pu12_f; };
template<> struct pwr_p::pucra_r::pu_f<11> { using type = pwr_p::pucra_r::pu11_f; };
template<> struct pwr_p::pucra_r::pu_f<10> { using type = pwr_p::pucra_r::pu10_f; };
template<> struct pwr_p::pucra_r::pu_f<9> { using type = pwr_p::pucra_r::pu9_f; };
template<> struct pwr_p::pucra_r::pu_f<8> { using type = pwr_p::pucra_r::pu8_f; };
template<> struct pwr_p::pucra_r::pu_f<7> { using type = pwr_p::pucra_r::pu7_f; };
template<> struct pwr_p::pucra_r::pu_f<6> { using type = pwr_p::pucra_r::pu6_f; };
template<> struct pwr_p::pucra_r::pu_f<5> { using type = pwr_p::pucra_r::pu5_f; };
template<> struct pwr_p::pucra_r::pu_f<4> { using type = pwr_p::pucra_r::pu4_f; };
template<> struct pwr_p::pucra_r::pu_f<3> { using type = pwr_p::pucra_r::pu3_f; };
template<> struct pwr_p::pucra_r::pu_f<2> { using type = pwr_p::pucra_r::pu2_f; };
template<> struct pwr_p::pucra_r::pu_f<1> { using type = pwr_p::pucra_r::pu1_f; };
template<> struct pwr_p::pucra_r::pu_f<0> { using type = pwr_p::pucra_r::pu0_f; };

template<> struct pwr_p::pdcra_r::pd_f<14> { using type = pwr_p::pdcra_r::pd14_f; };
template<> struct pwr_p::pdcra_r::pd_f<12> { using type = pwr_p::pdcra_r::pd12_f; };
template<> struct pwr_p::pdcra_r::pd_f<11> { using type = pwr_p::pdcra_r::pd11_f; };
template<> struct pwr_p::pdcra_r::pd_f<10> { using type = pwr_p::pdcra_r::pd10_f; };
template<> struct pwr_p::pdcra_r::pd_f<9> { using type = pwr_p::pdcra_r::pd9_f; };
template<> struct pwr_p::pdcra_r::pd_f<8> { using type = pwr_p::pdcra_r::pd8_f; };
template<> struct pwr_p::pdcra_r::pd_f<7> { using type = pwr_p::pdcra_r::pd7_f; };
template<> struct pwr_p::pdcra_r::pd_f<6> { using type = pwr_p::pdcra_r::pd6_f; };
template<> struct pwr_p::pdcra_r::pd_f<5> { using type = pwr_p::pdcra_r::pd5_f; };
template<> struct pwr_p::pdcra_r::pd_f<4> { using type = pwr_p::pdcra_r::pd4_f; };
template<> struct pwr_p::pdcra_r::pd_f<3> { using type = pwr_p::pdcra_r::pd3_f; };
template<> struct pwr_p::pdcra_r::pd_f<2> { using type = pwr_p::pdcra_r::pd2_f; };
template<> struct pwr_p::pdcra_r::pd_f<1> { using type = pwr_p::pdcra_r::pd1_f; };
template<> struct pwr_p::pdcra_r::pd_f<0> { using type = pwr_p::pdcra_r::pd0_f; };

template<> struct pwr_p::pucrb_r::pu_f<15> { using type = pwr_p::pucrb_r::pu15_f; };
template<> struct pwr_p::pucrb_r::pu_f<14> { using type = pwr_p::pucrb_r::pu14_f; };
template<> struct pwr_p::pucrb_r::pu_f<13> { using type = pwr_p::pucrb_r::pu13_f; };
template<> struct pwr_p::pucrb_r::pu_f<12> { using type = pwr_p::pucrb_r::pu12_f; };
template<> struct pwr_p::pucrb_r::pu_f<11> { using type = pwr_p::pucrb_r::pu11_f; };
template<> struct pwr_p::pucrb_r::pu_f<10> { using type = pwr_p::pucrb_r::pu10_f; };
template<> struct pwr_p::pucrb_r::pu_f<9> { using type = pwr_p::pucrb_r::pu9_f; };
template<> struct pwr_p::pucrb_r::pu_f<8> { using type = pwr_p::pucrb_r::pu8_f; };
template<> struct pwr_p::pucrb_r::pu_f<7> { using type = pwr_p::pucrb_r::pu7_f; };
template<> struct pwr_p::pucrb_r::pu_f<6> { using type = pwr_p::pucrb_r::pu6_f; };
template<> struct pwr_p::pucrb_r::pu_f<5> { using type = pwr_p::pucrb_r::pu5_f; };
template<> struct pwr_p::pucrb_r::pu_f<4> { using type = pwr_p::pucrb_r::pu4_f; };
template<> struct pwr_p::pucrb_r::pu_f<3> { using type = pwr_p::pucrb_r::pu3_f; };
template<> struct pwr_p::pucrb_r::pu_f<2> { using type = pwr_p::pucrb_r::pu2_f; };
template<> struct pwr_p::pucrb_r::pu_f<1> { using type = pwr_p::pucrb_r::pu1_f; };
template<> struct pwr_p::pucrb_r::pu_f<0> { using type = pwr_p::pucrb_r::pu0_f; };

template<> struct pwr_p::pdcrb_r::pd_f<15> { using type = pwr_p::pdcrb_r::pd15_f; };
template<> struct pwr_p::pdcrb_r::pd_f<14> { using type = pwr_p::pdcrb_r::pd14_f; };
template<> struct pwr_p::pdcrb_r::pd_f<13> { using type = pwr_p::pdcrb_r::pd13_f; };
template<> struct pwr_p::pdcrb_r::pd_f<12> { using type = pwr_p::pdcrb_r::pd12_f; };
template<> struct pwr_p::pdcrb_r::pd_f<11> { using type = pwr_p::pdcrb_r::pd11_f; };
template<> struct pwr_p::pdcrb_r::pd_f<10> { using type = pwr_p::pdcrb_r::pd10_f; };
template<> struct pwr_p::pdcrb_r::pd_f<9> { using type = pwr_p::pdcrb_r::pd9_f; };
template<> struct pwr_p::pdcrb_r::pd_f<8> { using type = pwr_p::pdcrb_r::pd8_f; };
template<> struct pwr_p::pdcrb_r::pd_f<7> { using type = pwr_p::pdcrb_r::pd7_f; };
template<> struct pwr_p::pdcrb_r::pd_f<6> { using type = pwr_p::pdcrb_r::pd6_f; };
template<> struct pwr_p::pdcrb_r::pd_f<5> { using type = pwr_p::pdcrb_r::pd5_f; };
template<> struct pwr_p::pdcrb_r::pd_f<3> { using type = pwr_p::pdcrb_r::pd3_f; };
template<> struct pwr_p::pdcrb_r::pd_f<2> { using type = pwr_p::pdcrb_r::pd2_f; };
template<> struct pwr_p::pdcrb_r::pd_f<1> { using type = pwr_p::pdcrb_r::pd1_f; };
template<> struct pwr_p::pdcrb_r::pd_f<0> { using type = pwr_p::pdcrb_r::pd0_f; };

template<> struct pwr_p::pucrc_r::pu_f<15> { using type = pwr_p::pucrc_r::pu15_f; };
template<> struct pwr_p::pucrc_r::pu_f<14> { using type = pwr_p::pucrc_r::pu14_f; };
template<> struct pwr_p::pucrc_r::pu_f<13> { using type = pwr_p::pucrc_r::pu13_f; };
template<> struct pwr_p::pucrc_r::pu_f<12> { using type = pwr_p::pucrc_r::pu12_f; };
template<> struct pwr_p::pucrc_r::pu_f<11> { using type = pwr_p::pucrc_r::pu11_f; };
template<> struct pwr_p::pucrc_r::pu_f<10> { using type = pwr_p::pucrc_r::pu10_f; };
template<> struct pwr_p::pucrc_r::pu_f<9> { using type = pwr_p::pucrc_r::pu9_f; };
template<> struct pwr_p::pucrc_r::pu_f<8> { using type = pwr_p::pucrc_r::pu8_f; };
template<> struct pwr_p::pucrc_r::pu_f<7> { using type = pwr_p::pucrc_r::pu7_f; };
template<> struct pwr_p::pucrc_r::pu_f<6> { using type = pwr_p::pucrc_r::pu6_f; };
template<> struct pwr_p::pucrc_r::pu_f<5> { using type = pwr_p::pucrc_r::pu5_f; };
template<> struct pwr_p::pucrc_r::pu_f<4> { using type = pwr_p::pucrc_r::pu4_f; };
template<> struct pwr_p::pucrc_r::pu_f<3> { using type = pwr_p::pucrc_r::pu3_f; };
template<> struct pwr_p::pucrc_r::pu_f<2> { using type = pwr_p::pucrc_r::pu2_f; };
template<> struct pwr_p::pucrc_r::pu_f<1> { using type = pwr_p::pucrc_r::pu1_f; };
template<> struct pwr_p::pucrc_r::pu_f<0> { using type = pwr_p::pucrc_r::pu0_f; };

template<> struct pwr_p::pdcrc_r::pd_f<15> { using type = pwr_p::pdcrc_r::pd15_f; };
template<> struct pwr_p::pdcrc_r::pd_f<14> { using type = pwr_p::pdcrc_r::pd14_f; };
template<> struct pwr_p::pdcrc_r::pd_f<13> { using type = pwr_p::pdcrc_r::pd13_f; };
template<> struct pwr_p::pdcrc_r::pd_f<12> { using type = pwr_p::pdcrc_r::pd12_f; };
template<> struct pwr_p::pdcrc_r::pd_f<11> { using type = pwr_p::pdcrc_r::pd11_f; };
template<> struct pwr_p::pdcrc_r::pd_f<10> { using type = pwr_p::pdcrc_r::pd10_f; };
template<> struct pwr_p::pdcrc_r::pd_f<9> { using type = pwr_p::pdcrc_r::pd9_f; };
template<> struct pwr_p::pdcrc_r::pd_f<8> { using type = pwr_p::pdcrc_r::pd8_f; };
template<> struct pwr_p::pdcrc_r::pd_f<7> { using type = pwr_p::pdcrc_r::pd7_f; };
template<> struct pwr_p::pdcrc_r::pd_f<6> { using type = pwr_p::pdcrc_r::pd6_f; };
template<> struct pwr_p::pdcrc_r::pd_f<5> { using type = pwr_p::pdcrc_r::pd5_f; };
template<> struct pwr_p::pdcrc_r::pd_f<4> { using type = pwr_p::pdcrc_r::pd4_f; };
template<> struct pwr_p::pdcrc_r::pd_f<3> { using type = pwr_p::pdcrc_r::pd3_f; };
template<> struct pwr_p::pdcrc_r::pd_f<2> { using type = pwr_p::pdcrc_r::pd2_f; };
template<> struct pwr_p::pdcrc_r::pd_f<1> { using type = pwr_p::pdcrc_r::pd1_f; };
template<> struct pwr_p::pdcrc_r::pd_f<0> { using type = pwr_p::pdcrc_r::pd0_f; };

template<> struct pwr_p::pucrd_r::pu_f<15> { using type = pwr_p::pucrd_r::pu15_f; };
template<> struct pwr_p::pucrd_r::pu_f<14> { using type = pwr_p::pucrd_r::pu14_f; };
template<> struct pwr_p::pucrd_r::pu_f<13> { using type = pwr_p::pucrd_r::pu13_f; };
template<> struct pwr_p::pucrd_r::pu_f<12> { using type = pwr_p::pucrd_r::pu12_f; };
template<> struct pwr_p::pucrd_r::pu_f<11> { using type = pwr_p::pucrd_r::pu11_f; };
template<> struct pwr_p::pucrd_r::pu_f<10> { using type = pwr_p::pucrd_r::pu10_f; };
template<> struct pwr_p::pucrd_r::pu_f<9> { using type = pwr_p::pucrd_r::pu9_f; };
template<> struct pwr_p::pucrd_r::pu_f<8> { using type = pwr_p::pucrd_r::pu8_f; };
template<> struct pwr_p::pucrd_r::pu_f<7> { using type = pwr_p::pucrd_r::pu7_f; };
template<> struct pwr_p::pucrd_r::pu_f<6> { using type = pwr_p::pucrd_r::pu6_f; };
template<> struct pwr_p::pucrd_r::pu_f<5> { using type = pwr_p::pucrd_r::pu5_f; };
template<> struct pwr_p::pucrd_r::pu_f<4> { using type = pwr_p::pucrd_r::pu4_f; };
template<> struct pwr_p::pucrd_r::pu_f<3> { using type = pwr_p::pucrd_r::pu3_f; };
template<> struct pwr_p::pucrd_r::pu_f<2> { using type = pwr_p::pucrd_r::pu2_f; };
template<> struct pwr_p::pucrd_r::pu_f<1> { using type = pwr_p::pucrd_r::pu1_f; };
template<> struct pwr_p::pucrd_r::pu_f<0> { using type = pwr_p::pucrd_r::pu0_f; };

template<> struct pwr_p::pdcrd_r::pd_f<15> { using type = pwr_p::pdcrd_r::pd15_f; };
template<> struct pwr_p::pdcrd_r::pd_f<14> { using type = pwr_p::pdcrd_r::pd14_f; };
template<> struct pwr_p::pdcrd_r::pd_f<13> { using type = pwr_p::pdcrd_r::pd13_f; };
template<> struct pwr_p::pdcrd_r::pd_f<12> { using type = pwr_p::pdcrd_r::pd12_f; };
template<> struct pwr_p::pdcrd_r::pd_f<11> { using type = pwr_p::pdcrd_r::pd11_f; };
template<> struct pwr_p::pdcrd_r::pd_f<10> { using type = pwr_p::pdcrd_r::pd10_f; };
template<> struct pwr_p::pdcrd_r::pd_f<9> { using type = pwr_p::pdcrd_r::pd9_f; };
template<> struct pwr_p::pdcrd_r::pd_f<8> { using type = pwr_p::pdcrd_r::pd8_f; };
template<> struct pwr_p::pdcrd_r::pd_f<7> { using type = pwr_p::pdcrd_r::pd7_f; };
template<> struct pwr_p::pdcrd_r::pd_f<6> { using type = pwr_p::pdcrd_r::pd6_f; };
template<> struct pwr_p::pdcrd_r::pd_f<5> { using type = pwr_p::pdcrd_r::pd5_f; };
template<> struct pwr_p::pdcrd_r::pd_f<4> { using type = pwr_p::pdcrd_r::pd4_f; };
template<> struct pwr_p::pdcrd_r::pd_f<3> { using type = pwr_p::pdcrd_r::pd3_f; };
template<> struct pwr_p::pdcrd_r::pd_f<2> { using type = pwr_p::pdcrd_r::pd2_f; };
template<> struct pwr_p::pdcrd_r::pd_f<1> { using type = pwr_p::pdcrd_r::pd1_f; };
template<> struct pwr_p::pdcrd_r::pd_f<0> { using type = pwr_p::pdcrd_r::pd0_f; };

template<> struct pwr_p::pucre_r::pu_f<15> { using type = pwr_p::pucre_r::pu15_f; };
template<> struct pwr_p::pucre_r::pu_f<14> { using type = pwr_p::pucre_r::pu14_f; };
template<> struct pwr_p::pucre_r::pu_f<13> { using type = pwr_p::pucre_r::pu13_f; };
template<> struct pwr_p::pucre_r::pu_f<12> { using type = pwr_p::pucre_r::pu12_f; };
template<> struct pwr_p::pucre_r::pu_f<11> { using type = pwr_p::pucre_r::pu11_f; };
template<> struct pwr_p::pucre_r::pu_f<10> { using type = pwr_p::pucre_r::pu10_f; };
template<> struct pwr_p::pucre_r::pu_f<9> { using type = pwr_p::pucre_r::pu9_f; };
template<> struct pwr_p::pucre_r::pu_f<8> { using type = pwr_p::pucre_r::pu8_f; };
template<> struct pwr_p::pucre_r::pu_f<7> { using type = pwr_p::pucre_r::pu7_f; };
template<> struct pwr_p::pucre_r::pu_f<6> { using type = pwr_p::pucre_r::pu6_f; };
template<> struct pwr_p::pucre_r::pu_f<5> { using type = pwr_p::pucre_r::pu5_f; };
template<> struct pwr_p::pucre_r::pu_f<4> { using type = pwr_p::pucre_r::pu4_f; };
template<> struct pwr_p::pucre_r::pu_f<3> { using type = pwr_p::pucre_r::pu3_f; };
template<> struct pwr_p::pucre_r::pu_f<2> { using type = pwr_p::pucre_r::pu2_f; };
template<> struct pwr_p::pucre_r::pu_f<1> { using type = pwr_p::pucre_r::pu1_f; };
template<> struct pwr_p::pucre_r::pu_f<0> { using type = pwr_p::pucre_r::pu0_f; };

template<> struct pwr_p::pdcre_r::pd_f<15> { using type = pwr_p::pdcre_r::pd15_f; };
template<> struct pwr_p::pdcre_r::pd_f<14> { using type = pwr_p::pdcre_r::pd14_f; };
template<> struct pwr_p::pdcre_r::pd_f<13> { using type = pwr_p::pdcre_r::pd13_f; };
template<> struct pwr_p::pdcre_r::pd_f<12> { using type = pwr_p::pdcre_r::pd12_f; };
template<> struct pwr_p::pdcre_r::pd_f<11> { using type = pwr_p::pdcre_r::pd11_f; };
template<> struct pwr_p::pdcre_r::pd_f<10> { using type = pwr_p::pdcre_r::pd10_f; };
template<> struct pwr_p::pdcre_r::pd_f<9> { using type = pwr_p::pdcre_r::pd9_f; };
template<> struct pwr_p::pdcre_r::pd_f<8> { using type = pwr_p::pdcre_r::pd8_f; };
template<> struct pwr_p::pdcre_r::pd_f<7> { using type = pwr_p::pdcre_r::pd7_f; };
template<> struct pwr_p::pdcre_r::pd_f<6> { using type = pwr_p::pdcre_r::pd6_f; };
template<> struct pwr_p::pdcre_r::pd_f<5> { using type = pwr_p::pdcre_r::pd5_f; };
template<> struct pwr_p::pdcre_r::pd_f<4> { using type = pwr_p::pdcre_r::pd4_f; };
template<> struct pwr_p::pdcre_r::pd_f<3> { using type = pwr_p::pdcre_r::pd3_f; };
template<> struct pwr_p::pdcre_r::pd_f<2> { using type = pwr_p::pdcre_r::pd2_f; };
template<> struct pwr_p::pdcre_r::pd_f<1> { using type = pwr_p::pdcre_r::pd1_f; };
template<> struct pwr_p::pdcre_r::pd_f<0> { using type = pwr_p::pdcre_r::pd0_f; };

template<> struct pwr_p::pucrf_r::pu_f<15> { using type = pwr_p::pucrf_r::pu15_f; };
template<> struct pwr_p::pucrf_r::pu_f<14> { using type = pwr_p::pucrf_r::pu14_f; };
template<> struct pwr_p::pucrf_r::pu_f<13> { using type = pwr_p::pucrf_r::pu13_f; };
template<> struct pwr_p::pucrf_r::pu_f<12> { using type = pwr_p::pucrf_r::pu12_f; };
template<> struct pwr_p::pucrf_r::pu_f<11> { using type = pwr_p::pucrf_r::pu11_f; };
template<> struct pwr_p::pucrf_r::pu_f<10> { using type = pwr_p::pucrf_r::pu10_f; };
template<> struct pwr_p::pucrf_r::pu_f<9> { using type = pwr_p::pucrf_r::pu9_f; };
template<> struct pwr_p::pucrf_r::pu_f<8> { using type = pwr_p::pucrf_r::pu8_f; };
template<> struct pwr_p::pucrf_r::pu_f<7> { using type = pwr_p::pucrf_r::pu7_f; };
template<> struct pwr_p::pucrf_r::pu_f<6> { using type = pwr_p::pucrf_r::pu6_f; };
template<> struct pwr_p::pucrf_r::pu_f<5> { using type = pwr_p::pucrf_r::pu5_f; };
template<> struct pwr_p::pucrf_r::pu_f<4> { using type = pwr_p::pucrf_r::pu4_f; };
template<> struct pwr_p::pucrf_r::pu_f<3> { using type = pwr_p::pucrf_r::pu3_f; };
template<> struct pwr_p::pucrf_r::pu_f<2> { using type = pwr_p::pucrf_r::pu2_f; };
template<> struct pwr_p::pucrf_r::pu_f<1> { using type = pwr_p::pucrf_r::pu1_f; };
template<> struct pwr_p::pucrf_r::pu_f<0> { using type = pwr_p::pucrf_r::pu0_f; };

template<> struct pwr_p::pdcrf_r::pd_f<15> { using type = pwr_p::pdcrf_r::pd15_f; };
template<> struct pwr_p::pdcrf_r::pd_f<14> { using type = pwr_p::pdcrf_r::pd14_f; };
template<> struct pwr_p::pdcrf_r::pd_f<13> { using type = pwr_p::pdcrf_r::pd13_f; };
template<> struct pwr_p::pdcrf_r::pd_f<12> { using type = pwr_p::pdcrf_r::pd12_f; };
template<> struct pwr_p::pdcrf_r::pd_f<11> { using type = pwr_p::pdcrf_r::pd11_f; };
template<> struct pwr_p::pdcrf_r::pd_f<10> { using type = pwr_p::pdcrf_r::pd10_f; };
template<> struct pwr_p::pdcrf_r::pd_f<9> { using type = pwr_p::pdcrf_r::pd9_f; };
template<> struct pwr_p::pdcrf_r::pd_f<8> { using type = pwr_p::pdcrf_r::pd8_f; };
template<> struct pwr_p::pdcrf_r::pd_f<7> { using type = pwr_p::pdcrf_r::pd7_f; };
template<> struct pwr_p::pdcrf_r::pd_f<6> { using type = pwr_p::pdcrf_r::pd6_f; };
template<> struct pwr_p::pdcrf_r::pd_f<5> { using type = pwr_p::pdcrf_r::pd5_f; };
template<> struct pwr_p::pdcrf_r::pd_f<4> { using type = pwr_p::pdcrf_r::pd4_f; };
template<> struct pwr_p::pdcrf_r::pd_f<3> { using type = pwr_p::pdcrf_r::pd3_f; };
template<> struct pwr_p::pdcrf_r::pd_f<2> { using type = pwr_p::pdcrf_r::pd2_f; };
template<> struct pwr_p::pdcrf_r::pd_f<1> { using type = pwr_p::pdcrf_r::pd1_f; };
template<> struct pwr_p::pdcrf_r::pd_f<0> { using type = pwr_p::pdcrf_r::pd0_f; };

template<> struct pwr_p::pucrg_r::pu_f<10> { using type = pwr_p::pucrg_r::pu10_f; };
template<> struct pwr_p::pucrg_r::pu_f<9> { using type = pwr_p::pucrg_r::pu9_f; };
template<> struct pwr_p::pucrg_r::pu_f<8> { using type = pwr_p::pucrg_r::pu8_f; };
template<> struct pwr_p::pucrg_r::pu_f<7> { using type = pwr_p::pucrg_r::pu7_f; };
template<> struct pwr_p::pucrg_r::pu_f<6> { using type = pwr_p::pucrg_r::pu6_f; };
template<> struct pwr_p::pucrg_r::pu_f<5> { using type = pwr_p::pucrg_r::pu5_f; };
template<> struct pwr_p::pucrg_r::pu_f<4> { using type = pwr_p::pucrg_r::pu4_f; };
template<> struct pwr_p::pucrg_r::pu_f<3> { using type = pwr_p::pucrg_r::pu3_f; };
template<> struct pwr_p::pucrg_r::pu_f<2> { using type = pwr_p::pucrg_r::pu2_f; };
template<> struct pwr_p::pucrg_r::pu_f<1> { using type = pwr_p::pucrg_r::pu1_f; };
template<> struct pwr_p::pucrg_r::pu_f<0> { using type = pwr_p::pucrg_r::pu0_f; };

template<> struct pwr_p::pdcrg_r::pd_f<10> { using type = pwr_p::pdcrg_r::pd10_f; };
template<> struct pwr_p::pdcrg_r::pd_f<9> { using type = pwr_p::pdcrg_r::pd9_f; };
template<> struct pwr_p::pdcrg_r::pd_f<8> { using type = pwr_p::pdcrg_r::pd8_f; };
template<> struct pwr_p::pdcrg_r::pd_f<7> { using type = pwr_p::pdcrg_r::pd7_f; };
template<> struct pwr_p::pdcrg_r::pd_f<6> { using type = pwr_p::pdcrg_r::pd6_f; };
template<> struct pwr_p::pdcrg_r::pd_f<5> { using type = pwr_p::pdcrg_r::pd5_f; };
template<> struct pwr_p::pdcrg_r::pd_f<4> { using type = pwr_p::pdcrg_r::pd4_f; };
template<> struct pwr_p::pdcrg_r::pd_f<3> { using type = pwr_p::pdcrg_r::pd3_f; };
template<> struct pwr_p::pdcrg_r::pd_f<2> { using type = pwr_p::pdcrg_r::pd2_f; };
template<> struct pwr_p::pdcrg_r::pd_f<1> { using type = pwr_p::pdcrg_r::pd1_f; };
template<> struct pwr_p::pdcrg_r::pd_f<0> { using type = pwr_p::pdcrg_r::pd0_f; };

template<> constexpr auto& pwr_p::cr<1>() { return cr1; }
template<> constexpr auto& pwr_p::cr<2>() { return cr2; }
template<> constexpr auto& pwr_p::cr<3>() { return cr3; }
template<> constexpr auto& pwr_p::cr<4>() { return cr4; }
template<> constexpr auto& pwr_p::cr<5>() { return cr5; }

template<> struct pwr_p::cr_r<1> { using type = pwr_p::cr1_r; };
template<> struct pwr_p::cr_r<2> { using type = pwr_p::cr2_r; };
template<> struct pwr_p::cr_r<3> { using type = pwr_p::cr3_r; };
template<> struct pwr_p::cr_r<4> { using type = pwr_p::cr4_r; };
template<> struct pwr_p::cr_r<5> { using type = pwr_p::cr5_r; };

template<> constexpr auto& pwr_p::sr<1>() { return sr1; }
template<> constexpr auto& pwr_p::sr<2>() { return sr2; }

template<> struct pwr_p::sr_r<1> { using type = pwr_p::sr1_r; };
template<> struct pwr_p::sr_r<2> { using type = pwr_p::sr2_r; };

static_assert(std::is_standard_layout_v<pwr_p>);
static_assert(offsetof(pwr_p, cr1) == pwr_p::cr1_r::Offset);
static_assert(offsetof(pwr_p, cr2) == pwr_p::cr2_r::Offset);
static_assert(offsetof(pwr_p, cr3) == pwr_p::cr3_r::Offset);
static_assert(offsetof(pwr_p, cr4) == pwr_p::cr4_r::Offset);
static_assert(offsetof(pwr_p, sr1) == pwr_p::sr1_r::Offset);
static_assert(offsetof(pwr_p, sr2) == pwr_p::sr2_r::Offset);
static_assert(offsetof(pwr_p, scr) == pwr_p::scr_r::Offset);
static_assert(offsetof(pwr_p, pucra) == pwr_p::pucra_r::Offset);
static_assert(offsetof(pwr_p, pdcra) == pwr_p::pdcra_r::Offset);
static_assert(offsetof(pwr_p, pucrb) == pwr_p::pucrb_r::Offset);
static_assert(offsetof(pwr_p, pdcrb) == pwr_p::pdcrb_r::Offset);
static_assert(offsetof(pwr_p, pucrc) == pwr_p::pucrc_r::Offset);
static_assert(offsetof(pwr_p, pdcrc) == pwr_p::pdcrc_r::Offset);
static_assert(offsetof(pwr_p, pucrd) == pwr_p::pucrd_r::Offset);
static_assert(offsetof(pwr_p, pdcrd) == pwr_p::pdcrd_r::Offset);
static_assert(offsetof(pwr_p, pucre) == pwr_p::pucre_r::Offset);
static_assert(offsetof(pwr_p, pdcre) == pwr_p::pdcre_r::Offset);
static_assert(offsetof(pwr_p, pucrf) == pwr_p::pucrf_r::Offset);
static_assert(offsetof(pwr_p, pdcrf) == pwr_p::pdcrf_r::Offset);
static_assert(offsetof(pwr_p, pucrg) == pwr_p::pucrg_r::Offset);
static_assert(offsetof(pwr_p, pdcrg) == pwr_p::pdcrg_r::Offset);
static_assert(offsetof(pwr_p, cr5) == pwr_p::cr5_r::Offset);

inline pwr_p& pwr = *reinterpret_cast<pwr_p*>(0x40007000);

} // STM32G473XX

