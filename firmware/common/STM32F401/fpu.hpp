#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * Floting point unit
 */
class fpu_p {
public:
/**
 * Floating-point context control register
 */
class fpccr_r {
public:

/**
 * LSPACT
 */
class lspact_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lspact_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpccr_r other) const -> fpccr_r { return static_cast<fpccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USER
 */
class user_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr user_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpccr_r other) const -> fpccr_r { return static_cast<fpccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * THREAD
 */
class thread_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr thread_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpccr_r other) const -> fpccr_r { return static_cast<fpccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * HFRDY
 */
class hfrdy_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hfrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpccr_r other) const -> fpccr_r { return static_cast<fpccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * MMRDY
 */
class mmrdy_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mmrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpccr_r other) const -> fpccr_r { return static_cast<fpccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * BFRDY
 */
class bfrdy_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bfrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpccr_r other) const -> fpccr_r { return static_cast<fpccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * MONRDY
 */
class monrdy_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr monrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpccr_r other) const -> fpccr_r { return static_cast<fpccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * LSPEN
 */
class lspen_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lspen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpccr_r other) const -> fpccr_r { return static_cast<fpccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ASPEN
 */
class aspen_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr aspen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpccr_r other) const -> fpccr_r { return static_cast<fpccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lspact() const -> lspact_f {return lspact_f((m_value & lspact_f::Mask) != 0);}
	[[nodiscard]] constexpr auto user() const -> user_f {return user_f((m_value & user_f::Mask) != 0);}
	[[nodiscard]] constexpr auto thread() const -> thread_f {return thread_f((m_value & thread_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hfrdy() const -> hfrdy_f {return hfrdy_f((m_value & hfrdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mmrdy() const -> mmrdy_f {return mmrdy_f((m_value & mmrdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bfrdy() const -> bfrdy_f {return bfrdy_f((m_value & bfrdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto monrdy() const -> monrdy_f {return monrdy_f((m_value & monrdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lspen() const -> lspen_f {return lspen_f((m_value & lspen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto aspen() const -> aspen_f {return aspen_f((m_value & aspen_f::Mask) != 0);}

	constexpr fpccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fpccr_r other) const -> fpccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fpccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Floating-point context address register
 */
class fpcar_r {
public:

/**
 * Location of unpopulated floating-point
 */
class address_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 29;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr address_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fpcar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fpcar_r other) const -> fpcar_r { return static_cast<fpcar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto address() const -> address_f {return address_f(static_cast<uint32_t>(m_value >> address_f::Offset));}

	constexpr fpcar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fpcar_r other) const -> fpcar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fpcar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Floating-point status control register
 */
class fpscr_r {
public:

/**
 * Invalid operation cumulative exception bit
 */
class ioc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ioc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Division by zero cumulative exception bit.
 */
class dzc_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dzc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Overflow cumulative exception bit
 */
class ofc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ofc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Underflow cumulative exception bit
 */
class ufc_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ufc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Inexact cumulative exception bit
 */
class ixc_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ixc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Input denormal cumulative exception bit.
 */
class idc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Rounding Mode control field
 */
class rmode_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rmode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fpscr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Flush-to-zero mode control bit:
 */
class fz_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fz_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Default NaN mode control bit
 */
class dn_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dn_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Alternative half-precision control bit
 */
class ahp_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ahp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Overflow condition code flag
 */
class v_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr v_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Carry condition code flag
 */
class c_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr c_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Zero condition code flag
 */
class z_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr z_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Negative condition code flag
 */
class n_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr n_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fpscr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fpscr_r other) const -> fpscr_r { return static_cast<fpscr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ioc() const -> ioc_f {return ioc_f((m_value & ioc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dzc() const -> dzc_f {return dzc_f((m_value & dzc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ofc() const -> ofc_f {return ofc_f((m_value & ofc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ufc() const -> ufc_f {return ufc_f((m_value & ufc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ixc() const -> ixc_f {return ixc_f((m_value & ixc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idc() const -> idc_f {return idc_f((m_value & idc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rmode() const -> rmode_f {return rmode_f(static_cast<uint8_t>(m_value >> rmode_f::Offset));}
	[[nodiscard]] constexpr auto fz() const -> fz_f {return fz_f((m_value & fz_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dn() const -> dn_f {return dn_f((m_value & dn_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ahp() const -> ahp_f {return ahp_f((m_value & ahp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto v() const -> v_f {return v_f((m_value & v_f::Mask) != 0);}
	[[nodiscard]] constexpr auto c() const -> c_f {return c_f((m_value & c_f::Mask) != 0);}
	[[nodiscard]] constexpr auto z() const -> z_f {return z_f((m_value & z_f::Mask) != 0);}
	[[nodiscard]] constexpr auto n() const -> n_f {return n_f((m_value & n_f::Mask) != 0);}

	constexpr fpscr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fpscr_r other) const -> fpscr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fpscr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,fpccr_r> fpccr;
	Memory<uint32_t,fpcar_r> fpcar;
	Memory<uint32_t,fpscr_r> fpscr;
};

static_assert(std::is_standard_layout_v<fpu_p>);
static_assert(offsetof(fpu_p, fpccr) == fpu_p::fpccr_r::Offset);
static_assert(offsetof(fpu_p, fpcar) == fpu_p::fpcar_r::Offset);
static_assert(offsetof(fpu_p, fpscr) == fpu_p::fpscr_r::Offset);

/**
 * Floating point unit CPACR
 */
class fpu_cpacr_p {
public:
/**
 * Coprocessor access control register
 */
class cpacr_r {
public:

/**
 * CP
 */
class cp_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cpacr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(cpacr_r other) const -> cpacr_r { return static_cast<cpacr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto cp() const -> cp_f {return cp_f(static_cast<uint8_t>(m_value >> cp_f::Offset));}

	constexpr cpacr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cpacr_r other) const -> cpacr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cpacr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,cpacr_r> cpacr;
};

static_assert(std::is_standard_layout_v<fpu_cpacr_p>);
static_assert(offsetof(fpu_cpacr_p, cpacr) == fpu_cpacr_p::cpacr_r::Offset);

inline fpu_p& fpu = *reinterpret_cast<fpu_p*>(0xE000EF34);
inline fpu_cpacr_p& fpu_cpacr = *reinterpret_cast<fpu_cpacr_p*>(0xE000ED88);

} // STM32F401

