#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * Power control
 */
class pwr_p {
public:
/**
 * power control register
 */
class cr_r {
public:

/**
 * Regulator voltage scaling output selection
 */
class vos_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr vos_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADCDC1
 */
class adcdc1_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr adcdc1_f(bool value = true) : m_value(value) {}
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
 * Flash power down in Stop mode
 */
class fpds_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr fpds_f(bool value = true) : m_value(value) {}
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
 * Disable backup domain write protection
 */
class dbp_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbp_f(bool value = true) : m_value(value) {}
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
 * PVD level selection
 */
class pls_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pls_f(uint8_t value) : m_value(value & Range) {}
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
 * Power voltage detector enable
 */
class pvde_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pvde_f(bool value = true) : m_value(value) {}
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
 * Clear standby flag
 */
class csbf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr csbf_f(bool value = true) : m_value(value) {}
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
 * Clear wakeup flag
 */
class cwuf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cwuf_f(bool value = true) : m_value(value) {}
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
 * Power down deepsleep
 */
class pdds_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pdds_f(bool value = true) : m_value(value) {}
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
 * Low-power deep sleep
 */
class lpds_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lpds_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto vos() const -> vos_f {return vos_f(static_cast<uint8_t>(m_value >> vos_f::Offset));}
	[[nodiscard]] constexpr auto adcdc1() const -> adcdc1_f {return adcdc1_f((m_value & adcdc1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fpds() const -> fpds_f {return fpds_f((m_value & fpds_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbp() const -> dbp_f {return dbp_f((m_value & dbp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pls() const -> pls_f {return pls_f(static_cast<uint8_t>(m_value >> pls_f::Offset));}
	[[nodiscard]] constexpr auto pvde() const -> pvde_f {return pvde_f((m_value & pvde_f::Mask) != 0);}
	[[nodiscard]] constexpr auto csbf() const -> csbf_f {return csbf_f((m_value & csbf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cwuf() const -> cwuf_f {return cwuf_f((m_value & cwuf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pdds() const -> pdds_f {return pdds_f((m_value & pdds_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lpds() const -> lpds_f {return lpds_f((m_value & lpds_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * power control/status register
 */
class csr_r {
public:

/**
 * Wakeup flag
 */
class wuf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wuf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Standby flag
 */
class sbf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sbf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PVD output
 */
class pvdo_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pvdo_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Backup regulator ready
 */
class brr_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr brr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Enable WKUP pin
 */
class ewup_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ewup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Backup regulator enable
 */
class bre_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bre_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Regulator voltage scaling output selection ready bit
 */
class vosrdy_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr vosrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto wuf() const -> wuf_f {return wuf_f((m_value & wuf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbf() const -> sbf_f {return sbf_f((m_value & sbf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pvdo() const -> pvdo_f {return pvdo_f((m_value & pvdo_f::Mask) != 0);}
	[[nodiscard]] constexpr auto brr() const -> brr_f {return brr_f((m_value & brr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ewup() const -> ewup_f {return ewup_f((m_value & ewup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bre() const -> bre_f {return bre_f((m_value & bre_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vosrdy() const -> vosrdy_f {return vosrdy_f((m_value & vosrdy_f::Mask) != 0);}

	constexpr csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(csr_r other) const -> csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,csr_r> csr;
};

static_assert(std::is_standard_layout_v<pwr_p>);
static_assert(offsetof(pwr_p, cr) == pwr_p::cr_r::Offset);
static_assert(offsetof(pwr_p, csr) == pwr_p::csr_r::Offset);

inline pwr_p& pwr = *reinterpret_cast<pwr_p*>(0x40007000);

} // STM32F401

