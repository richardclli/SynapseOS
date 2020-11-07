#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Operational amplifiers
 */
class opamp_p {
public:
/**
 * OPAMP1 control/status register
 */
class opamp1_csr_r {
public:

/**
 * Operational amplifier Enable
 */
class opaen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FORCE_VP
 */
class force_vp_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr force_vp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VP_SEL
 */
class vp_sel_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vp_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp1_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * USERTRIM
 */
class usertrim_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usertrim_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VM_SEL
 */
class vm_sel_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vm_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp1_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OPAHSM
 */
class opahsm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opahsm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OPAINTOEN
 */
class opaintoen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr opaintoen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALON
 */
class calon_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr calon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALSEL
 */
class calsel_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr calsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(opamp1_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PGA_GAIN
 */
class pga_gain_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pga_gain_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp1_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETP
 */
class trimoffsetp_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp1_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETN
 */
class trimoffsetn_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp1_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CALOUT
 */
class calout_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr calout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_csr_r>() const {return ClearSet<opamp1_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_csr_r other) const -> opamp1_csr_r { return static_cast<opamp1_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_csr_r> other) const -> ClearSet<opamp1_csr_r> {return ClearSet<opamp1_csr_r>(opamp1_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto opaen() const -> opaen_f {return opaen_f((m_value & opaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto force_vp() const -> force_vp_f {return force_vp_f((m_value & force_vp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vp_sel() const -> vp_sel_f {return vp_sel_f(static_cast<uint8_t>(m_value >> vp_sel_f::Offset));}
	[[nodiscard]] constexpr auto usertrim() const -> usertrim_f {return usertrim_f((m_value & usertrim_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vm_sel() const -> vm_sel_f {return vm_sel_f(static_cast<uint8_t>(m_value >> vm_sel_f::Offset));}
	[[nodiscard]] constexpr auto opahsm() const -> opahsm_f {return opahsm_f((m_value & opahsm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opaintoen() const -> opaintoen_f {return opaintoen_f((m_value & opaintoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calon() const -> calon_f {return calon_f((m_value & calon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calsel() const -> calsel_f {return calsel_f(static_cast<uint8_t>(m_value >> calsel_f::Offset));}
	[[nodiscard]] constexpr auto pga_gain() const -> pga_gain_f {return pga_gain_f(static_cast<uint8_t>(m_value >> pga_gain_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetp() const -> trimoffsetp_f {return trimoffsetp_f(static_cast<uint8_t>(m_value >> trimoffsetp_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetn() const -> trimoffsetn_f {return trimoffsetn_f(static_cast<uint8_t>(m_value >> trimoffsetn_f::Offset));}
	[[nodiscard]] constexpr auto calout() const -> calout_f {return calout_f((m_value & calout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp1_csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp1_csr_r other) const -> opamp1_csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp1_csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP2 control/status register
 */
class opamp2_csr_r {
public:

/**
 * Operational amplifier Enable
 */
class opaen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FORCE_VP
 */
class force_vp_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr force_vp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VP_SEL
 */
class vp_sel_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vp_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp2_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * USERTRIM
 */
class usertrim_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usertrim_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VM_SEL
 */
class vm_sel_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vm_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp2_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OPAHSM
 */
class opahsm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opahsm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OPAINTOEN
 */
class opaintoen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr opaintoen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALON
 */
class calon_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr calon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALSEL
 */
class calsel_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr calsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(opamp2_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PGA_GAIN
 */
class pga_gain_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pga_gain_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp2_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETP
 */
class trimoffsetp_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp2_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETN
 */
class trimoffsetn_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp2_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CALOUT
 */
class calout_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr calout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_csr_r>() const {return ClearSet<opamp2_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_csr_r other) const -> opamp2_csr_r { return static_cast<opamp2_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_csr_r> other) const -> ClearSet<opamp2_csr_r> {return ClearSet<opamp2_csr_r>(opamp2_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto opaen() const -> opaen_f {return opaen_f((m_value & opaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto force_vp() const -> force_vp_f {return force_vp_f((m_value & force_vp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vp_sel() const -> vp_sel_f {return vp_sel_f(static_cast<uint8_t>(m_value >> vp_sel_f::Offset));}
	[[nodiscard]] constexpr auto usertrim() const -> usertrim_f {return usertrim_f((m_value & usertrim_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vm_sel() const -> vm_sel_f {return vm_sel_f(static_cast<uint8_t>(m_value >> vm_sel_f::Offset));}
	[[nodiscard]] constexpr auto opahsm() const -> opahsm_f {return opahsm_f((m_value & opahsm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opaintoen() const -> opaintoen_f {return opaintoen_f((m_value & opaintoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calon() const -> calon_f {return calon_f((m_value & calon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calsel() const -> calsel_f {return calsel_f(static_cast<uint8_t>(m_value >> calsel_f::Offset));}
	[[nodiscard]] constexpr auto pga_gain() const -> pga_gain_f {return pga_gain_f(static_cast<uint8_t>(m_value >> pga_gain_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetp() const -> trimoffsetp_f {return trimoffsetp_f(static_cast<uint8_t>(m_value >> trimoffsetp_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetn() const -> trimoffsetn_f {return trimoffsetn_f(static_cast<uint8_t>(m_value >> trimoffsetn_f::Offset));}
	[[nodiscard]] constexpr auto calout() const -> calout_f {return calout_f((m_value & calout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp2_csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp2_csr_r other) const -> opamp2_csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp2_csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP3 control/status register
 */
class opamp3_csr_r {
public:

/**
 * Operational amplifier Enable
 */
class opaen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FORCE_VP
 */
class force_vp_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr force_vp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VP_SEL
 */
class vp_sel_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vp_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp3_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * USERTRIM
 */
class usertrim_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usertrim_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VM_SEL
 */
class vm_sel_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vm_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp3_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OPAHSM
 */
class opahsm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opahsm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OPAINTOEN
 */
class opaintoen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr opaintoen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALON
 */
class calon_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr calon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALSEL
 */
class calsel_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr calsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(opamp3_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PGA_GAIN
 */
class pga_gain_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pga_gain_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp3_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETP
 */
class trimoffsetp_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp3_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETN
 */
class trimoffsetn_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp3_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CALOUT
 */
class calout_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr calout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_csr_r>() const {return ClearSet<opamp3_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_csr_r other) const -> opamp3_csr_r { return static_cast<opamp3_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_csr_r> other) const -> ClearSet<opamp3_csr_r> {return ClearSet<opamp3_csr_r>(opamp3_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto opaen() const -> opaen_f {return opaen_f((m_value & opaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto force_vp() const -> force_vp_f {return force_vp_f((m_value & force_vp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vp_sel() const -> vp_sel_f {return vp_sel_f(static_cast<uint8_t>(m_value >> vp_sel_f::Offset));}
	[[nodiscard]] constexpr auto usertrim() const -> usertrim_f {return usertrim_f((m_value & usertrim_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vm_sel() const -> vm_sel_f {return vm_sel_f(static_cast<uint8_t>(m_value >> vm_sel_f::Offset));}
	[[nodiscard]] constexpr auto opahsm() const -> opahsm_f {return opahsm_f((m_value & opahsm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opaintoen() const -> opaintoen_f {return opaintoen_f((m_value & opaintoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calon() const -> calon_f {return calon_f((m_value & calon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calsel() const -> calsel_f {return calsel_f(static_cast<uint8_t>(m_value >> calsel_f::Offset));}
	[[nodiscard]] constexpr auto pga_gain() const -> pga_gain_f {return pga_gain_f(static_cast<uint8_t>(m_value >> pga_gain_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetp() const -> trimoffsetp_f {return trimoffsetp_f(static_cast<uint8_t>(m_value >> trimoffsetp_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetn() const -> trimoffsetn_f {return trimoffsetn_f(static_cast<uint8_t>(m_value >> trimoffsetn_f::Offset));}
	[[nodiscard]] constexpr auto calout() const -> calout_f {return calout_f((m_value & calout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp3_csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp3_csr_r other) const -> opamp3_csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp3_csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP4 control/status register
 */
class opamp4_csr_r {
public:

/**
 * Operational amplifier Enable
 */
class opaen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FORCE_VP
 */
class force_vp_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr force_vp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VP_SEL
 */
class vp_sel_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vp_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp4_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * USERTRIM
 */
class usertrim_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usertrim_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VM_SEL
 */
class vm_sel_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vm_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp4_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OPAHSM
 */
class opahsm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opahsm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OPAINTOEN
 */
class opaintoen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr opaintoen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALON
 */
class calon_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr calon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALSEL
 */
class calsel_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr calsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(opamp4_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PGA_GAIN
 */
class pga_gain_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pga_gain_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp4_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETP
 */
class trimoffsetp_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp4_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETN
 */
class trimoffsetn_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp4_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CALOUT
 */
class calout_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr calout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_csr_r>() const {return ClearSet<opamp4_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_csr_r other) const -> opamp4_csr_r { return static_cast<opamp4_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_csr_r> other) const -> ClearSet<opamp4_csr_r> {return ClearSet<opamp4_csr_r>(opamp4_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto opaen() const -> opaen_f {return opaen_f((m_value & opaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto force_vp() const -> force_vp_f {return force_vp_f((m_value & force_vp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vp_sel() const -> vp_sel_f {return vp_sel_f(static_cast<uint8_t>(m_value >> vp_sel_f::Offset));}
	[[nodiscard]] constexpr auto usertrim() const -> usertrim_f {return usertrim_f((m_value & usertrim_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vm_sel() const -> vm_sel_f {return vm_sel_f(static_cast<uint8_t>(m_value >> vm_sel_f::Offset));}
	[[nodiscard]] constexpr auto opahsm() const -> opahsm_f {return opahsm_f((m_value & opahsm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opaintoen() const -> opaintoen_f {return opaintoen_f((m_value & opaintoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calon() const -> calon_f {return calon_f((m_value & calon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calsel() const -> calsel_f {return calsel_f(static_cast<uint8_t>(m_value >> calsel_f::Offset));}
	[[nodiscard]] constexpr auto pga_gain() const -> pga_gain_f {return pga_gain_f(static_cast<uint8_t>(m_value >> pga_gain_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetp() const -> trimoffsetp_f {return trimoffsetp_f(static_cast<uint8_t>(m_value >> trimoffsetp_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetn() const -> trimoffsetn_f {return trimoffsetn_f(static_cast<uint8_t>(m_value >> trimoffsetn_f::Offset));}
	[[nodiscard]] constexpr auto calout() const -> calout_f {return calout_f((m_value & calout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp4_csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp4_csr_r other) const -> opamp4_csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp4_csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP5 control/status register
 */
class opamp5_csr_r {
public:

/**
 * Operational amplifier Enable
 */
class opaen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FORCE_VP
 */
class force_vp_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr force_vp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VP_SEL
 */
class vp_sel_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vp_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp5_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * USERTRIM
 */
class usertrim_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usertrim_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VM_SEL
 */
class vm_sel_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vm_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp5_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OPAHSM
 */
class opahsm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opahsm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OPAINTOEN
 */
class opaintoen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr opaintoen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALON
 */
class calon_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr calon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALSEL
 */
class calsel_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr calsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(opamp5_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PGA_GAIN
 */
class pga_gain_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pga_gain_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp5_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETP
 */
class trimoffsetp_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp5_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETN
 */
class trimoffsetn_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp5_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CALOUT
 */
class calout_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr calout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_csr_r>() const {return ClearSet<opamp5_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_csr_r other) const -> opamp5_csr_r { return static_cast<opamp5_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_csr_r> other) const -> ClearSet<opamp5_csr_r> {return ClearSet<opamp5_csr_r>(opamp5_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto opaen() const -> opaen_f {return opaen_f((m_value & opaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto force_vp() const -> force_vp_f {return force_vp_f((m_value & force_vp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vp_sel() const -> vp_sel_f {return vp_sel_f(static_cast<uint8_t>(m_value >> vp_sel_f::Offset));}
	[[nodiscard]] constexpr auto usertrim() const -> usertrim_f {return usertrim_f((m_value & usertrim_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vm_sel() const -> vm_sel_f {return vm_sel_f(static_cast<uint8_t>(m_value >> vm_sel_f::Offset));}
	[[nodiscard]] constexpr auto opahsm() const -> opahsm_f {return opahsm_f((m_value & opahsm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opaintoen() const -> opaintoen_f {return opaintoen_f((m_value & opaintoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calon() const -> calon_f {return calon_f((m_value & calon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calsel() const -> calsel_f {return calsel_f(static_cast<uint8_t>(m_value >> calsel_f::Offset));}
	[[nodiscard]] constexpr auto pga_gain() const -> pga_gain_f {return pga_gain_f(static_cast<uint8_t>(m_value >> pga_gain_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetp() const -> trimoffsetp_f {return trimoffsetp_f(static_cast<uint8_t>(m_value >> trimoffsetp_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetn() const -> trimoffsetn_f {return trimoffsetn_f(static_cast<uint8_t>(m_value >> trimoffsetn_f::Offset));}
	[[nodiscard]] constexpr auto calout() const -> calout_f {return calout_f((m_value & calout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp5_csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp5_csr_r other) const -> opamp5_csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp5_csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP6 control/status register
 */
class opamp6_csr_r {
public:

/**
 * Operational amplifier Enable
 */
class opaen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FORCE_VP
 */
class force_vp_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr force_vp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VP_SEL
 */
class vp_sel_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vp_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp6_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * USERTRIM
 */
class usertrim_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usertrim_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VM_SEL
 */
class vm_sel_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vm_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp6_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OPAHSM
 */
class opahsm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opahsm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OPAINTOEN
 */
class opaintoen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr opaintoen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALON
 */
class calon_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr calon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALSEL
 */
class calsel_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr calsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(opamp6_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PGA_GAIN
 */
class pga_gain_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pga_gain_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp6_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETP
 */
class trimoffsetp_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp6_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRIMOFFSETN
 */
class trimoffsetn_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trimoffsetn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(opamp6_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CALOUT
 */
class calout_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr calout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_csr_r>() const {return ClearSet<opamp6_csr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_csr_r other) const -> opamp6_csr_r { return static_cast<opamp6_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_csr_r> other) const -> ClearSet<opamp6_csr_r> {return ClearSet<opamp6_csr_r>(opamp6_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto opaen() const -> opaen_f {return opaen_f((m_value & opaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto force_vp() const -> force_vp_f {return force_vp_f((m_value & force_vp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vp_sel() const -> vp_sel_f {return vp_sel_f(static_cast<uint8_t>(m_value >> vp_sel_f::Offset));}
	[[nodiscard]] constexpr auto usertrim() const -> usertrim_f {return usertrim_f((m_value & usertrim_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vm_sel() const -> vm_sel_f {return vm_sel_f(static_cast<uint8_t>(m_value >> vm_sel_f::Offset));}
	[[nodiscard]] constexpr auto opahsm() const -> opahsm_f {return opahsm_f((m_value & opahsm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opaintoen() const -> opaintoen_f {return opaintoen_f((m_value & opaintoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calon() const -> calon_f {return calon_f((m_value & calon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calsel() const -> calsel_f {return calsel_f(static_cast<uint8_t>(m_value >> calsel_f::Offset));}
	[[nodiscard]] constexpr auto pga_gain() const -> pga_gain_f {return pga_gain_f(static_cast<uint8_t>(m_value >> pga_gain_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetp() const -> trimoffsetp_f {return trimoffsetp_f(static_cast<uint8_t>(m_value >> trimoffsetp_f::Offset));}
	[[nodiscard]] constexpr auto trimoffsetn() const -> trimoffsetn_f {return trimoffsetn_f(static_cast<uint8_t>(m_value >> trimoffsetn_f::Offset));}
	[[nodiscard]] constexpr auto calout() const -> calout_f {return calout_f((m_value & calout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp6_csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp6_csr_r other) const -> opamp6_csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp6_csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP1 control/status register
 */
class opamp1_tcmr_r {
public:

/**
 * VMS_SEL
 */
class vms_sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr vms_sel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_tcmr_r>() const {return ClearSet<opamp1_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_tcmr_r other) const -> opamp1_tcmr_r { return static_cast<opamp1_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_tcmr_r> other) const -> ClearSet<opamp1_tcmr_r> {return ClearSet<opamp1_tcmr_r>(opamp1_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VPS_SEL
 */
class vps_sel_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vps_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp1_tcmr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp1_tcmr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_tcmr_r>() const {return ClearSet<opamp1_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_tcmr_r other) const -> opamp1_tcmr_r { return static_cast<opamp1_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_tcmr_r> other) const -> ClearSet<opamp1_tcmr_r> {return ClearSet<opamp1_tcmr_r>(opamp1_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * T1CM_EN
 */
class t1cm_en_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t1cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_tcmr_r>() const {return ClearSet<opamp1_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_tcmr_r other) const -> opamp1_tcmr_r { return static_cast<opamp1_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_tcmr_r> other) const -> ClearSet<opamp1_tcmr_r> {return ClearSet<opamp1_tcmr_r>(opamp1_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T8CM_EN
 */
class t8cm_en_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t8cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_tcmr_r>() const {return ClearSet<opamp1_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_tcmr_r other) const -> opamp1_tcmr_r { return static_cast<opamp1_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_tcmr_r> other) const -> ClearSet<opamp1_tcmr_r> {return ClearSet<opamp1_tcmr_r>(opamp1_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T20CM_EN
 */
class t20cm_en_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t20cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_tcmr_r>() const {return ClearSet<opamp1_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_tcmr_r other) const -> opamp1_tcmr_r { return static_cast<opamp1_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_tcmr_r> other) const -> ClearSet<opamp1_tcmr_r> {return ClearSet<opamp1_tcmr_r>(opamp1_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp1_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp1_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp1_tcmr_r>() const {return ClearSet<opamp1_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp1_tcmr_r other) const -> opamp1_tcmr_r { return static_cast<opamp1_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp1_tcmr_r> other) const -> ClearSet<opamp1_tcmr_r> {return ClearSet<opamp1_tcmr_r>(opamp1_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto vms_sel() const -> vms_sel_f {return vms_sel_f((m_value & vms_sel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vps_sel() const -> vps_sel_f {return vps_sel_f(static_cast<uint8_t>(m_value >> vps_sel_f::Offset));}
	[[nodiscard]] constexpr auto t1cm_en() const -> t1cm_en_f {return t1cm_en_f((m_value & t1cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t8cm_en() const -> t8cm_en_f {return t8cm_en_f((m_value & t8cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t20cm_en() const -> t20cm_en_f {return t20cm_en_f((m_value & t20cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp1_tcmr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp1_tcmr_r other) const -> opamp1_tcmr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp1_tcmr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP2 control/status register
 */
class opamp2_tcmr_r {
public:

/**
 * VMS_SEL
 */
class vms_sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr vms_sel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_tcmr_r>() const {return ClearSet<opamp2_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_tcmr_r other) const -> opamp2_tcmr_r { return static_cast<opamp2_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_tcmr_r> other) const -> ClearSet<opamp2_tcmr_r> {return ClearSet<opamp2_tcmr_r>(opamp2_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VPS_SEL
 */
class vps_sel_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vps_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp2_tcmr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp2_tcmr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_tcmr_r>() const {return ClearSet<opamp2_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_tcmr_r other) const -> opamp2_tcmr_r { return static_cast<opamp2_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_tcmr_r> other) const -> ClearSet<opamp2_tcmr_r> {return ClearSet<opamp2_tcmr_r>(opamp2_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * T1CM_EN
 */
class t1cm_en_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t1cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_tcmr_r>() const {return ClearSet<opamp2_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_tcmr_r other) const -> opamp2_tcmr_r { return static_cast<opamp2_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_tcmr_r> other) const -> ClearSet<opamp2_tcmr_r> {return ClearSet<opamp2_tcmr_r>(opamp2_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T8CM_EN
 */
class t8cm_en_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t8cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_tcmr_r>() const {return ClearSet<opamp2_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_tcmr_r other) const -> opamp2_tcmr_r { return static_cast<opamp2_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_tcmr_r> other) const -> ClearSet<opamp2_tcmr_r> {return ClearSet<opamp2_tcmr_r>(opamp2_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T20CM_EN
 */
class t20cm_en_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t20cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_tcmr_r>() const {return ClearSet<opamp2_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_tcmr_r other) const -> opamp2_tcmr_r { return static_cast<opamp2_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_tcmr_r> other) const -> ClearSet<opamp2_tcmr_r> {return ClearSet<opamp2_tcmr_r>(opamp2_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp2_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp2_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp2_tcmr_r>() const {return ClearSet<opamp2_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp2_tcmr_r other) const -> opamp2_tcmr_r { return static_cast<opamp2_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp2_tcmr_r> other) const -> ClearSet<opamp2_tcmr_r> {return ClearSet<opamp2_tcmr_r>(opamp2_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto vms_sel() const -> vms_sel_f {return vms_sel_f((m_value & vms_sel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vps_sel() const -> vps_sel_f {return vps_sel_f(static_cast<uint8_t>(m_value >> vps_sel_f::Offset));}
	[[nodiscard]] constexpr auto t1cm_en() const -> t1cm_en_f {return t1cm_en_f((m_value & t1cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t8cm_en() const -> t8cm_en_f {return t8cm_en_f((m_value & t8cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t20cm_en() const -> t20cm_en_f {return t20cm_en_f((m_value & t20cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp2_tcmr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp2_tcmr_r other) const -> opamp2_tcmr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp2_tcmr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP3 control/status register
 */
class opamp3_tcmr_r {
public:

/**
 * VMS_SEL
 */
class vms_sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr vms_sel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_tcmr_r>() const {return ClearSet<opamp3_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_tcmr_r other) const -> opamp3_tcmr_r { return static_cast<opamp3_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_tcmr_r> other) const -> ClearSet<opamp3_tcmr_r> {return ClearSet<opamp3_tcmr_r>(opamp3_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VPS_SEL
 */
class vps_sel_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vps_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp3_tcmr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp3_tcmr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_tcmr_r>() const {return ClearSet<opamp3_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_tcmr_r other) const -> opamp3_tcmr_r { return static_cast<opamp3_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_tcmr_r> other) const -> ClearSet<opamp3_tcmr_r> {return ClearSet<opamp3_tcmr_r>(opamp3_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * T1CM_EN
 */
class t1cm_en_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t1cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_tcmr_r>() const {return ClearSet<opamp3_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_tcmr_r other) const -> opamp3_tcmr_r { return static_cast<opamp3_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_tcmr_r> other) const -> ClearSet<opamp3_tcmr_r> {return ClearSet<opamp3_tcmr_r>(opamp3_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T8CM_EN
 */
class t8cm_en_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t8cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_tcmr_r>() const {return ClearSet<opamp3_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_tcmr_r other) const -> opamp3_tcmr_r { return static_cast<opamp3_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_tcmr_r> other) const -> ClearSet<opamp3_tcmr_r> {return ClearSet<opamp3_tcmr_r>(opamp3_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T20CM_EN
 */
class t20cm_en_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t20cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_tcmr_r>() const {return ClearSet<opamp3_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_tcmr_r other) const -> opamp3_tcmr_r { return static_cast<opamp3_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_tcmr_r> other) const -> ClearSet<opamp3_tcmr_r> {return ClearSet<opamp3_tcmr_r>(opamp3_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp3_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp3_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp3_tcmr_r>() const {return ClearSet<opamp3_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp3_tcmr_r other) const -> opamp3_tcmr_r { return static_cast<opamp3_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp3_tcmr_r> other) const -> ClearSet<opamp3_tcmr_r> {return ClearSet<opamp3_tcmr_r>(opamp3_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto vms_sel() const -> vms_sel_f {return vms_sel_f((m_value & vms_sel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vps_sel() const -> vps_sel_f {return vps_sel_f(static_cast<uint8_t>(m_value >> vps_sel_f::Offset));}
	[[nodiscard]] constexpr auto t1cm_en() const -> t1cm_en_f {return t1cm_en_f((m_value & t1cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t8cm_en() const -> t8cm_en_f {return t8cm_en_f((m_value & t8cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t20cm_en() const -> t20cm_en_f {return t20cm_en_f((m_value & t20cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp3_tcmr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp3_tcmr_r other) const -> opamp3_tcmr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp3_tcmr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP4 control/status register
 */
class opamp4_tcmr_r {
public:

/**
 * VMS_SEL
 */
class vms_sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr vms_sel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_tcmr_r>() const {return ClearSet<opamp4_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_tcmr_r other) const -> opamp4_tcmr_r { return static_cast<opamp4_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_tcmr_r> other) const -> ClearSet<opamp4_tcmr_r> {return ClearSet<opamp4_tcmr_r>(opamp4_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VPS_SEL
 */
class vps_sel_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vps_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp4_tcmr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp4_tcmr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_tcmr_r>() const {return ClearSet<opamp4_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_tcmr_r other) const -> opamp4_tcmr_r { return static_cast<opamp4_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_tcmr_r> other) const -> ClearSet<opamp4_tcmr_r> {return ClearSet<opamp4_tcmr_r>(opamp4_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * T1CM_EN
 */
class t1cm_en_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t1cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_tcmr_r>() const {return ClearSet<opamp4_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_tcmr_r other) const -> opamp4_tcmr_r { return static_cast<opamp4_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_tcmr_r> other) const -> ClearSet<opamp4_tcmr_r> {return ClearSet<opamp4_tcmr_r>(opamp4_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T8CM_EN
 */
class t8cm_en_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t8cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_tcmr_r>() const {return ClearSet<opamp4_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_tcmr_r other) const -> opamp4_tcmr_r { return static_cast<opamp4_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_tcmr_r> other) const -> ClearSet<opamp4_tcmr_r> {return ClearSet<opamp4_tcmr_r>(opamp4_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T20CM_EN
 */
class t20cm_en_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t20cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_tcmr_r>() const {return ClearSet<opamp4_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_tcmr_r other) const -> opamp4_tcmr_r { return static_cast<opamp4_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_tcmr_r> other) const -> ClearSet<opamp4_tcmr_r> {return ClearSet<opamp4_tcmr_r>(opamp4_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp4_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp4_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp4_tcmr_r>() const {return ClearSet<opamp4_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp4_tcmr_r other) const -> opamp4_tcmr_r { return static_cast<opamp4_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp4_tcmr_r> other) const -> ClearSet<opamp4_tcmr_r> {return ClearSet<opamp4_tcmr_r>(opamp4_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto vms_sel() const -> vms_sel_f {return vms_sel_f((m_value & vms_sel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vps_sel() const -> vps_sel_f {return vps_sel_f(static_cast<uint8_t>(m_value >> vps_sel_f::Offset));}
	[[nodiscard]] constexpr auto t1cm_en() const -> t1cm_en_f {return t1cm_en_f((m_value & t1cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t8cm_en() const -> t8cm_en_f {return t8cm_en_f((m_value & t8cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t20cm_en() const -> t20cm_en_f {return t20cm_en_f((m_value & t20cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp4_tcmr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp4_tcmr_r other) const -> opamp4_tcmr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp4_tcmr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP5 control/status register
 */
class opamp5_tcmr_r {
public:

/**
 * VMS_SEL
 */
class vms_sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr vms_sel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_tcmr_r>() const {return ClearSet<opamp5_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_tcmr_r other) const -> opamp5_tcmr_r { return static_cast<opamp5_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_tcmr_r> other) const -> ClearSet<opamp5_tcmr_r> {return ClearSet<opamp5_tcmr_r>(opamp5_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VPS_SEL
 */
class vps_sel_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vps_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp5_tcmr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp5_tcmr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_tcmr_r>() const {return ClearSet<opamp5_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_tcmr_r other) const -> opamp5_tcmr_r { return static_cast<opamp5_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_tcmr_r> other) const -> ClearSet<opamp5_tcmr_r> {return ClearSet<opamp5_tcmr_r>(opamp5_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * T1CM_EN
 */
class t1cm_en_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t1cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_tcmr_r>() const {return ClearSet<opamp5_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_tcmr_r other) const -> opamp5_tcmr_r { return static_cast<opamp5_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_tcmr_r> other) const -> ClearSet<opamp5_tcmr_r> {return ClearSet<opamp5_tcmr_r>(opamp5_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T8CM_EN
 */
class t8cm_en_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t8cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_tcmr_r>() const {return ClearSet<opamp5_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_tcmr_r other) const -> opamp5_tcmr_r { return static_cast<opamp5_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_tcmr_r> other) const -> ClearSet<opamp5_tcmr_r> {return ClearSet<opamp5_tcmr_r>(opamp5_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T20CM_EN
 */
class t20cm_en_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t20cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_tcmr_r>() const {return ClearSet<opamp5_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_tcmr_r other) const -> opamp5_tcmr_r { return static_cast<opamp5_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_tcmr_r> other) const -> ClearSet<opamp5_tcmr_r> {return ClearSet<opamp5_tcmr_r>(opamp5_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp5_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp5_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp5_tcmr_r>() const {return ClearSet<opamp5_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp5_tcmr_r other) const -> opamp5_tcmr_r { return static_cast<opamp5_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp5_tcmr_r> other) const -> ClearSet<opamp5_tcmr_r> {return ClearSet<opamp5_tcmr_r>(opamp5_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto vms_sel() const -> vms_sel_f {return vms_sel_f((m_value & vms_sel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vps_sel() const -> vps_sel_f {return vps_sel_f(static_cast<uint8_t>(m_value >> vps_sel_f::Offset));}
	[[nodiscard]] constexpr auto t1cm_en() const -> t1cm_en_f {return t1cm_en_f((m_value & t1cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t8cm_en() const -> t8cm_en_f {return t8cm_en_f((m_value & t8cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t20cm_en() const -> t20cm_en_f {return t20cm_en_f((m_value & t20cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp5_tcmr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp5_tcmr_r other) const -> opamp5_tcmr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp5_tcmr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * OPAMP6 control/status register
 */
class opamp6_tcmr_r {
public:

/**
 * VMS_SEL
 */
class vms_sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr vms_sel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_tcmr_r>() const {return ClearSet<opamp6_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_tcmr_r other) const -> opamp6_tcmr_r { return static_cast<opamp6_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_tcmr_r> other) const -> ClearSet<opamp6_tcmr_r> {return ClearSet<opamp6_tcmr_r>(opamp6_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VPS_SEL
 */
class vps_sel_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vps_sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator opamp6_tcmr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(opamp6_tcmr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_tcmr_r>() const {return ClearSet<opamp6_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_tcmr_r other) const -> opamp6_tcmr_r { return static_cast<opamp6_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_tcmr_r> other) const -> ClearSet<opamp6_tcmr_r> {return ClearSet<opamp6_tcmr_r>(opamp6_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * T1CM_EN
 */
class t1cm_en_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t1cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_tcmr_r>() const {return ClearSet<opamp6_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_tcmr_r other) const -> opamp6_tcmr_r { return static_cast<opamp6_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_tcmr_r> other) const -> ClearSet<opamp6_tcmr_r> {return ClearSet<opamp6_tcmr_r>(opamp6_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T8CM_EN
 */
class t8cm_en_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t8cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_tcmr_r>() const {return ClearSet<opamp6_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_tcmr_r other) const -> opamp6_tcmr_r { return static_cast<opamp6_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_tcmr_r> other) const -> ClearSet<opamp6_tcmr_r> {return ClearSet<opamp6_tcmr_r>(opamp6_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * T20CM_EN
 */
class t20cm_en_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr t20cm_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_tcmr_r>() const {return ClearSet<opamp6_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_tcmr_r other) const -> opamp6_tcmr_r { return static_cast<opamp6_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_tcmr_r> other) const -> ClearSet<opamp6_tcmr_r> {return ClearSet<opamp6_tcmr_r>(opamp6_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator opamp6_tcmr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(opamp6_tcmr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<opamp6_tcmr_r>() const {return ClearSet<opamp6_tcmr_r>(Mask, *this);}
	constexpr auto operator|(opamp6_tcmr_r other) const -> opamp6_tcmr_r { return static_cast<opamp6_tcmr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<opamp6_tcmr_r> other) const -> ClearSet<opamp6_tcmr_r> {return ClearSet<opamp6_tcmr_r>(opamp6_tcmr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto vms_sel() const -> vms_sel_f {return vms_sel_f((m_value & vms_sel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vps_sel() const -> vps_sel_f {return vps_sel_f(static_cast<uint8_t>(m_value >> vps_sel_f::Offset));}
	[[nodiscard]] constexpr auto t1cm_en() const -> t1cm_en_f {return t1cm_en_f((m_value & t1cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t8cm_en() const -> t8cm_en_f {return t8cm_en_f((m_value & t8cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto t20cm_en() const -> t20cm_en_f {return t20cm_en_f((m_value & t20cm_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr opamp6_tcmr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(opamp6_tcmr_r other) const -> opamp6_tcmr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> opamp6_tcmr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,opamp1_csr_r> opamp1_csr;
	Memory<uint32_t,opamp2_csr_r> opamp2_csr;
	Memory<uint32_t,opamp3_csr_r> opamp3_csr;
	Memory<uint32_t,opamp4_csr_r> opamp4_csr;
	Memory<uint32_t,opamp5_csr_r> opamp5_csr;
	Memory<uint32_t,opamp6_csr_r> opamp6_csr;
	Memory<uint32_t,opamp1_tcmr_r> opamp1_tcmr;
	Memory<uint32_t,opamp2_tcmr_r> opamp2_tcmr;
	Memory<uint32_t,opamp3_tcmr_r> opamp3_tcmr;
	Memory<uint32_t,opamp4_tcmr_r> opamp4_tcmr;
	Memory<uint32_t,opamp5_tcmr_r> opamp5_tcmr;
	Memory<uint32_t,opamp6_tcmr_r> opamp6_tcmr;
};

static_assert(std::is_standard_layout_v<opamp_p>);
static_assert(offsetof(opamp_p, opamp1_csr) == opamp_p::opamp1_csr_r::Offset);
static_assert(offsetof(opamp_p, opamp2_csr) == opamp_p::opamp2_csr_r::Offset);
static_assert(offsetof(opamp_p, opamp3_csr) == opamp_p::opamp3_csr_r::Offset);
static_assert(offsetof(opamp_p, opamp4_csr) == opamp_p::opamp4_csr_r::Offset);
static_assert(offsetof(opamp_p, opamp5_csr) == opamp_p::opamp5_csr_r::Offset);
static_assert(offsetof(opamp_p, opamp6_csr) == opamp_p::opamp6_csr_r::Offset);
static_assert(offsetof(opamp_p, opamp1_tcmr) == opamp_p::opamp1_tcmr_r::Offset);
static_assert(offsetof(opamp_p, opamp2_tcmr) == opamp_p::opamp2_tcmr_r::Offset);
static_assert(offsetof(opamp_p, opamp3_tcmr) == opamp_p::opamp3_tcmr_r::Offset);
static_assert(offsetof(opamp_p, opamp4_tcmr) == opamp_p::opamp4_tcmr_r::Offset);
static_assert(offsetof(opamp_p, opamp5_tcmr) == opamp_p::opamp5_tcmr_r::Offset);
static_assert(offsetof(opamp_p, opamp6_tcmr) == opamp_p::opamp6_tcmr_r::Offset);

inline opamp_p& opamp = *reinterpret_cast<opamp_p*>(0x40010300);

} // STM32G473XX

