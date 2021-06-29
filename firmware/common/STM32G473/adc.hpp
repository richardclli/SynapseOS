#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Analog-to-Digital Converter
 */
class adc1_p {
public:
/**
 * interrupt and status register
 */
class isr_r {
public:

/**
 * JQOVF
 */
class jqovf_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr jqovf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD3
 */
class awd3_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD2
 */
class awd2_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD1
 */
class awd1_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr awd1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JEOS
 */
class jeos_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JEOC
 */
class jeoc_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeoc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OVR
 */
class ovr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOS
 */
class eos_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOC
 */
class eoc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eoc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOSMP
 */
class eosmp_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eosmp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADRDY
 */
class adrdy_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr adrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto jqovf() const -> jqovf_f {return jqovf_f((m_value & jqovf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd3() const -> awd3_f {return awd3_f((m_value & awd3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd2() const -> awd2_f {return awd2_f((m_value & awd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1() const -> awd1_f {return awd1_f((m_value & awd1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeos() const -> jeos_f {return jeos_f((m_value & jeos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeoc() const -> jeoc_f {return jeoc_f((m_value & jeoc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovr() const -> ovr_f {return ovr_f((m_value & ovr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eos() const -> eos_f {return eos_f((m_value & eos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eoc() const -> eoc_f {return eoc_f((m_value & eoc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eosmp() const -> eosmp_f {return eosmp_f((m_value & eosmp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adrdy() const -> adrdy_f {return adrdy_f((m_value & adrdy_f::Mask) != 0);}

	template<std::size_t Index> struct awd_f { static_assert(Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using awd_v = typename awd_f<Index>::type;
	template<std::size_t Index> constexpr auto awd() const { return awd_v<Index>::get(*this); }

	constexpr isr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(isr_r other) const -> isr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> isr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * interrupt enable register
 */
class ier_r {
public:

/**
 * JQOVFIE
 */
class jqovfie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr jqovfie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD3IE
 */
class awd3ie_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd3ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD2IE
 */
class awd2ie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd2ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD1IE
 */
class awd1ie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr awd1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JEOSIE
 */
class jeosie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeosie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JEOCIE
 */
class jeocie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeocie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OVRIE
 */
class ovrie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovrie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOSIE
 */
class eosie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eosie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOCIE
 */
class eocie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eocie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOSMPIE
 */
class eosmpie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eosmpie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADRDYIE
 */
class adrdyie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr adrdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto jqovfie() const -> jqovfie_f {return jqovfie_f((m_value & jqovfie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd3ie() const -> awd3ie_f {return awd3ie_f((m_value & awd3ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd2ie() const -> awd2ie_f {return awd2ie_f((m_value & awd2ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1ie() const -> awd1ie_f {return awd1ie_f((m_value & awd1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeosie() const -> jeosie_f {return jeosie_f((m_value & jeosie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeocie() const -> jeocie_f {return jeocie_f((m_value & jeocie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrie() const -> ovrie_f {return ovrie_f((m_value & ovrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eosie() const -> eosie_f {return eosie_f((m_value & eosie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eocie() const -> eocie_f {return eocie_f((m_value & eocie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eosmpie() const -> eosmpie_f {return eosmpie_f((m_value & eosmpie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adrdyie() const -> adrdyie_f {return adrdyie_f((m_value & adrdyie_f::Mask) != 0);}

	constexpr ier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ier_r other) const -> ier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * control register
 */
class cr_r {
public:

/**
 * ADCAL
 */
class adcal_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr adcal_f(bool value = true) : m_value(value) {}
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
 * ADCALDIF
 */
class adcaldif_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr adcaldif_f(bool value = true) : m_value(value) {}
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
 * DEEPPWD
 */
class deeppwd_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deeppwd_f(bool value = true) : m_value(value) {}
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
 * ADVREGEN
 */
class advregen_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr advregen_f(bool value = true) : m_value(value) {}
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
 * JADSTP
 */
class jadstp_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jadstp_f(bool value = true) : m_value(value) {}
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
 * ADSTP
 */
class adstp_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr adstp_f(bool value = true) : m_value(value) {}
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
 * JADSTART
 */
class jadstart_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jadstart_f(bool value = true) : m_value(value) {}
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
 * ADSTART
 */
class adstart_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr adstart_f(bool value = true) : m_value(value) {}
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
 * ADDIS
 */
class addis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr addis_f(bool value = true) : m_value(value) {}
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
 * ADEN
 */
class aden_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr aden_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto adcal() const -> adcal_f {return adcal_f((m_value & adcal_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adcaldif() const -> adcaldif_f {return adcaldif_f((m_value & adcaldif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deeppwd() const -> deeppwd_f {return deeppwd_f((m_value & deeppwd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto advregen() const -> advregen_f {return advregen_f((m_value & advregen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jadstp() const -> jadstp_f {return jadstp_f((m_value & jadstp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adstp() const -> adstp_f {return adstp_f((m_value & adstp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jadstart() const -> jadstart_f {return jadstart_f((m_value & jadstart_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adstart() const -> adstart_f {return adstart_f((m_value & adstart_f::Mask) != 0);}
	[[nodiscard]] constexpr auto addis() const -> addis_f {return addis_f((m_value & addis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto aden() const -> aden_f {return aden_f((m_value & aden_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b100000000000000000000000000000; // 536870912 0x20000000

private:
	uint32_t m_value;
};
/**
 * configuration register
 */
class cfgr_r {
public:

/**
 * Injected Queue disable
 */
class jqdis_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jqdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Analog watchdog 1 channel selection
 */
class awd1ch_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr awd1ch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JAUTO
 */
class jauto_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jauto_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JAWD1EN
 */
class jawd1en_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jawd1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD1EN
 */
class awd1en_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr awd1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD1SGL
 */
class awd1sgl_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr awd1sgl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JQM
 */
class jqm_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jqm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JDISCEN
 */
class jdiscen_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jdiscen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DISCNUM
 */
class discnum_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr discnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DISCEN
 */
class discen_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr discen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ALIGN
 */
class align_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr align_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AUTDLY
 */
class autdly_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr autdly_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CONT
 */
class cont_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cont_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OVRMOD
 */
class ovrmod_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ovrmod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EXTEN
 */
class exten_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr exten_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * External trigger selection for regular group
 */
class extsel_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr extsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RES
 */
class res_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr res_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DMACFG
 */
class dmacfg_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmacfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMAEN
 */
class dmaen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto jqdis() const -> jqdis_f {return jqdis_f((m_value & jqdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1ch() const -> awd1ch_f {return awd1ch_f(static_cast<uint8_t>(m_value >> awd1ch_f::Offset));}
	[[nodiscard]] constexpr auto jauto() const -> jauto_f {return jauto_f((m_value & jauto_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jawd1en() const -> jawd1en_f {return jawd1en_f((m_value & jawd1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1en() const -> awd1en_f {return awd1en_f((m_value & awd1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1sgl() const -> awd1sgl_f {return awd1sgl_f((m_value & awd1sgl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jqm() const -> jqm_f {return jqm_f((m_value & jqm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jdiscen() const -> jdiscen_f {return jdiscen_f((m_value & jdiscen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto discnum() const -> discnum_f {return discnum_f(static_cast<uint8_t>(m_value >> discnum_f::Offset));}
	[[nodiscard]] constexpr auto discen() const -> discen_f {return discen_f((m_value & discen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto align() const -> align_f {return align_f((m_value & align_f::Mask) != 0);}
	[[nodiscard]] constexpr auto autdly() const -> autdly_f {return autdly_f((m_value & autdly_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cont() const -> cont_f {return cont_f((m_value & cont_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrmod() const -> ovrmod_f {return ovrmod_f((m_value & ovrmod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto exten() const -> exten_f {return exten_f(static_cast<uint8_t>(m_value >> exten_f::Offset));}
	[[nodiscard]] constexpr auto extsel() const -> extsel_f {return extsel_f(static_cast<uint8_t>(m_value >> extsel_f::Offset));}
	[[nodiscard]] constexpr auto res() const -> res_f {return res_f(static_cast<uint8_t>(m_value >> res_f::Offset));}
	[[nodiscard]] constexpr auto dmacfg() const -> dmacfg_f {return dmacfg_f((m_value & dmacfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaen() const -> dmaen_f {return dmaen_f((m_value & dmaen_f::Mask) != 0);}

	constexpr cfgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfgr_r other) const -> cfgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0b10000000000000000000000000000000; // 2147483648 0x80000000

private:
	uint32_t m_value;
};
/**
 * configuration register
 */
class cfgr2_r {
public:

/**
 * SMPTRIG
 */
class smptrig_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smptrig_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BULB
 */
class bulb_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bulb_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SWTRIG
 */
class swtrig_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swtrig_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GCOMP
 */
class gcomp_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gcomp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EXTEN
 */
class rovsm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rovsm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Triggered Regular Oversampling
 */
class trovs_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr trovs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ALIGN
 */
class ovss_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ovss_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfgr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RES
 */
class ovsr_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ovsr_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cfgr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DMACFG
 */
class jovse_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jovse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMAEN
 */
class rovse_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rovse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto smptrig() const -> smptrig_f {return smptrig_f((m_value & smptrig_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bulb() const -> bulb_f {return bulb_f((m_value & bulb_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swtrig() const -> swtrig_f {return swtrig_f((m_value & swtrig_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gcomp() const -> gcomp_f {return gcomp_f((m_value & gcomp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rovsm() const -> rovsm_f {return rovsm_f((m_value & rovsm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto trovs() const -> trovs_f {return trovs_f((m_value & trovs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovss() const -> ovss_f {return ovss_f(static_cast<uint8_t>(m_value >> ovss_f::Offset));}
	[[nodiscard]] constexpr auto ovsr() const -> ovsr_f {return ovsr_f(static_cast<uint8_t>(m_value >> ovsr_f::Offset));}
	[[nodiscard]] constexpr auto jovse() const -> jovse_f {return jovse_f((m_value & jovse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rovse() const -> rovse_f {return rovse_f((m_value & rovse_f::Mask) != 0);}

	constexpr cfgr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfgr2_r other) const -> cfgr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfgr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * sample time register 1
 */
class smpr1_r {
public:

/**
 * SMP9
 */
class smp9_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP8
 */
class smp8_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP7
 */
class smp7_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP6
 */
class smp6_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP5
 */
class smp5_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP4
 */
class smp4_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP3
 */
class smp3_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP2
 */
class smp2_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP1
 */
class smp1_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr smp1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Addition of one clock cycle to the sampling time
 */
class smpplus_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smpplus_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smpr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smpr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SMP0
 */
class smp0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr smp0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto smp9() const -> smp9_f {return smp9_f(static_cast<uint8_t>(m_value >> smp9_f::Offset));}
	[[nodiscard]] constexpr auto smp8() const -> smp8_f {return smp8_f(static_cast<uint8_t>(m_value >> smp8_f::Offset));}
	[[nodiscard]] constexpr auto smp7() const -> smp7_f {return smp7_f(static_cast<uint8_t>(m_value >> smp7_f::Offset));}
	[[nodiscard]] constexpr auto smp6() const -> smp6_f {return smp6_f(static_cast<uint8_t>(m_value >> smp6_f::Offset));}
	[[nodiscard]] constexpr auto smp5() const -> smp5_f {return smp5_f(static_cast<uint8_t>(m_value >> smp5_f::Offset));}
	[[nodiscard]] constexpr auto smp4() const -> smp4_f {return smp4_f(static_cast<uint8_t>(m_value >> smp4_f::Offset));}
	[[nodiscard]] constexpr auto smp3() const -> smp3_f {return smp3_f(static_cast<uint8_t>(m_value >> smp3_f::Offset));}
	[[nodiscard]] constexpr auto smp2() const -> smp2_f {return smp2_f(static_cast<uint8_t>(m_value >> smp2_f::Offset));}
	[[nodiscard]] constexpr auto smp1() const -> smp1_f {return smp1_f(static_cast<uint8_t>(m_value >> smp1_f::Offset));}
	[[nodiscard]] constexpr auto smpplus() const -> smpplus_f {return smpplus_f((m_value & smpplus_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smp0() const -> smp0_f {return smp0_f(static_cast<uint8_t>(m_value >> smp0_f::Offset));}

	template<std::size_t Index> struct smp_f { static_assert(Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using smp_v = typename smp_f<Index>::type;
	template<std::size_t Index> constexpr auto smp() const { return smp_v<Index>::get(*this); }

	constexpr smpr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smpr1_r other) const -> smpr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smpr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * sample time register 2
 */
class smpr2_r {
public:

/**
 * SMP18
 */
class smp18_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp18_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP17
 */
class smp17_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp17_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP16
 */
class smp16_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp16_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP15
 */
class smp15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP14
 */
class smp14_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP13
 */
class smp13_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP12
 */
class smp12_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP11
 */
class smp11_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr smp11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP10
 */
class smp10_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr smp10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto smp18() const -> smp18_f {return smp18_f(static_cast<uint8_t>(m_value >> smp18_f::Offset));}
	[[nodiscard]] constexpr auto smp17() const -> smp17_f {return smp17_f(static_cast<uint8_t>(m_value >> smp17_f::Offset));}
	[[nodiscard]] constexpr auto smp16() const -> smp16_f {return smp16_f(static_cast<uint8_t>(m_value >> smp16_f::Offset));}
	[[nodiscard]] constexpr auto smp15() const -> smp15_f {return smp15_f(static_cast<uint8_t>(m_value >> smp15_f::Offset));}
	[[nodiscard]] constexpr auto smp14() const -> smp14_f {return smp14_f(static_cast<uint8_t>(m_value >> smp14_f::Offset));}
	[[nodiscard]] constexpr auto smp13() const -> smp13_f {return smp13_f(static_cast<uint8_t>(m_value >> smp13_f::Offset));}
	[[nodiscard]] constexpr auto smp12() const -> smp12_f {return smp12_f(static_cast<uint8_t>(m_value >> smp12_f::Offset));}
	[[nodiscard]] constexpr auto smp11() const -> smp11_f {return smp11_f(static_cast<uint8_t>(m_value >> smp11_f::Offset));}
	[[nodiscard]] constexpr auto smp10() const -> smp10_f {return smp10_f(static_cast<uint8_t>(m_value >> smp10_f::Offset));}

	template<std::size_t Index> struct smp_f { static_assert(Index == 18 || Index == 17 || Index == 16 || Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10); };
	template<std::size_t Index> using smp_v = typename smp_f<Index>::type;
	template<std::size_t Index> constexpr auto smp() const { return smp_v<Index>::get(*this); }

	constexpr smpr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smpr2_r other) const -> smpr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smpr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * watchdog threshold register 1
 */
class tr1_r {
public:

/**
 * HT1
 */
class ht1_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ht1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr1_r>() const {return ClearSet<tr1_r>(Mask, *this);}
	constexpr auto operator|(tr1_r other) const -> tr1_r { return static_cast<tr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr1_r> other) const -> ClearSet<tr1_r> {return ClearSet<tr1_r>(tr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * AWDFILT
 */
class awdfilt_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr awdfilt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr1_r>() const {return ClearSet<tr1_r>(Mask, *this);}
	constexpr auto operator|(tr1_r other) const -> tr1_r { return static_cast<tr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr1_r> other) const -> ClearSet<tr1_r> {return ClearSet<tr1_r>(tr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LT1
 */
class lt1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr lt1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr1_r>() const {return ClearSet<tr1_r>(Mask, *this);}
	constexpr auto operator|(tr1_r other) const -> tr1_r { return static_cast<tr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr1_r> other) const -> ClearSet<tr1_r> {return ClearSet<tr1_r>(tr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ht1() const -> ht1_f {return ht1_f(static_cast<uint16_t>(m_value >> ht1_f::Offset));}
	[[nodiscard]] constexpr auto awdfilt() const -> awdfilt_f {return awdfilt_f(static_cast<uint8_t>(m_value >> awdfilt_f::Offset));}
	[[nodiscard]] constexpr auto lt1() const -> lt1_f {return lt1_f(static_cast<uint16_t>(m_value >> lt1_f::Offset));}

	constexpr tr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tr1_r other) const -> tr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0b1111111111110000000000000000; // 268369920 0xFFF0000

private:
	uint32_t m_value;
};
/**
 * watchdog threshold register
 */
class tr2_r {
public:

/**
 * HT2
 */
class ht2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ht2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr2_r>() const {return ClearSet<tr2_r>(Mask, *this);}
	constexpr auto operator|(tr2_r other) const -> tr2_r { return static_cast<tr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr2_r> other) const -> ClearSet<tr2_r> {return ClearSet<tr2_r>(tr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LT2
 */
class lt2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr lt2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr2_r>() const {return ClearSet<tr2_r>(Mask, *this);}
	constexpr auto operator|(tr2_r other) const -> tr2_r { return static_cast<tr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr2_r> other) const -> ClearSet<tr2_r> {return ClearSet<tr2_r>(tr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ht2() const -> ht2_f {return ht2_f(static_cast<uint8_t>(m_value >> ht2_f::Offset));}
	[[nodiscard]] constexpr auto lt2() const -> lt2_f {return lt2_f(static_cast<uint8_t>(m_value >> lt2_f::Offset));}

	constexpr tr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tr2_r other) const -> tr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0b111111110000000000000000; // 16711680 0xFF0000

private:
	uint32_t m_value;
};
/**
 * watchdog threshold register 3
 */
class tr3_r {
public:

/**
 * HT3
 */
class ht3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ht3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr3_r>() const {return ClearSet<tr3_r>(Mask, *this);}
	constexpr auto operator|(tr3_r other) const -> tr3_r { return static_cast<tr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr3_r> other) const -> ClearSet<tr3_r> {return ClearSet<tr3_r>(tr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LT3
 */
class lt3_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr lt3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr3_r>() const {return ClearSet<tr3_r>(Mask, *this);}
	constexpr auto operator|(tr3_r other) const -> tr3_r { return static_cast<tr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr3_r> other) const -> ClearSet<tr3_r> {return ClearSet<tr3_r>(tr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ht3() const -> ht3_f {return ht3_f(static_cast<uint8_t>(m_value >> ht3_f::Offset));}
	[[nodiscard]] constexpr auto lt3() const -> lt3_f {return lt3_f(static_cast<uint8_t>(m_value >> lt3_f::Offset));}

	constexpr tr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tr3_r other) const -> tr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0b111111110000000000000000; // 16711680 0xFF0000

private:
	uint32_t m_value;
};
/**
 * regular sequence register 1
 */
class sqr1_r {
public:

/**
 * SQ4
 */
class sq4_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ3
 */
class sq3_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ2
 */
class sq2_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ1
 */
class sq1_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Regular channel sequence length
 */
class l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr l_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sq4() const -> sq4_f {return sq4_f(static_cast<uint8_t>(m_value >> sq4_f::Offset));}
	[[nodiscard]] constexpr auto sq3() const -> sq3_f {return sq3_f(static_cast<uint8_t>(m_value >> sq3_f::Offset));}
	[[nodiscard]] constexpr auto sq2() const -> sq2_f {return sq2_f(static_cast<uint8_t>(m_value >> sq2_f::Offset));}
	[[nodiscard]] constexpr auto sq1() const -> sq1_f {return sq1_f(static_cast<uint8_t>(m_value >> sq1_f::Offset));}
	[[nodiscard]] constexpr auto l() const -> l_f {return l_f(static_cast<uint8_t>(m_value >> l_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr1_r other) const -> sqr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * regular sequence register 2
 */
class sqr2_r {
public:

/**
 * SQ9
 */
class sq9_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ8
 */
class sq8_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ7
 */
class sq7_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ6
 */
class sq6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ5
 */
class sq5_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sq5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sq9() const -> sq9_f {return sq9_f(static_cast<uint8_t>(m_value >> sq9_f::Offset));}
	[[nodiscard]] constexpr auto sq8() const -> sq8_f {return sq8_f(static_cast<uint8_t>(m_value >> sq8_f::Offset));}
	[[nodiscard]] constexpr auto sq7() const -> sq7_f {return sq7_f(static_cast<uint8_t>(m_value >> sq7_f::Offset));}
	[[nodiscard]] constexpr auto sq6() const -> sq6_f {return sq6_f(static_cast<uint8_t>(m_value >> sq6_f::Offset));}
	[[nodiscard]] constexpr auto sq5() const -> sq5_f {return sq5_f(static_cast<uint8_t>(m_value >> sq5_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr2_r other) const -> sqr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * regular sequence register 3
 */
class sqr3_r {
public:

/**
 * SQ14
 */
class sq14_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ13
 */
class sq13_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ12
 */
class sq12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ11
 */
class sq11_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ10
 */
class sq10_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sq10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sq14() const -> sq14_f {return sq14_f(static_cast<uint8_t>(m_value >> sq14_f::Offset));}
	[[nodiscard]] constexpr auto sq13() const -> sq13_f {return sq13_f(static_cast<uint8_t>(m_value >> sq13_f::Offset));}
	[[nodiscard]] constexpr auto sq12() const -> sq12_f {return sq12_f(static_cast<uint8_t>(m_value >> sq12_f::Offset));}
	[[nodiscard]] constexpr auto sq11() const -> sq11_f {return sq11_f(static_cast<uint8_t>(m_value >> sq11_f::Offset));}
	[[nodiscard]] constexpr auto sq10() const -> sq10_f {return sq10_f(static_cast<uint8_t>(m_value >> sq10_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr3_r other) const -> sqr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * regular sequence register 4
 */
class sqr4_r {
public:

/**
 * SQ16
 */
class sq16_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq16_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(sqr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr4_r>() const {return ClearSet<sqr4_r>(Mask, *this);}
	constexpr auto operator|(sqr4_r other) const -> sqr4_r { return static_cast<sqr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr4_r> other) const -> ClearSet<sqr4_r> {return ClearSet<sqr4_r>(sqr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ15
 */
class sq15_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sq15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr4_r>() const {return ClearSet<sqr4_r>(Mask, *this);}
	constexpr auto operator|(sqr4_r other) const -> sqr4_r { return static_cast<sqr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr4_r> other) const -> ClearSet<sqr4_r> {return ClearSet<sqr4_r>(sqr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sq16() const -> sq16_f {return sq16_f(static_cast<uint8_t>(m_value >> sq16_f::Offset));}
	[[nodiscard]] constexpr auto sq15() const -> sq15_f {return sq15_f(static_cast<uint8_t>(m_value >> sq15_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 16 || Index == 15); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr4_r other) const -> sqr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * regular Data Register
 */
class dr_r {
public:

/**
 * Regular Data converted
 */
class rdata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rdata_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rdata() const -> rdata_f {return rdata_f(static_cast<uint16_t>(m_value >> rdata_f::Offset));}

	constexpr dr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dr_r other) const -> dr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected sequence register
 */
class jsqr_r {
public:

/**
 * JSQ4
 */
class jsq4_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr jsq4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JSQ3
 */
class jsq3_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr jsq3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JSQ2
 */
class jsq2_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr jsq2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JSQ1
 */
class jsq1_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jsq1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JEXTEN
 */
class jexten_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jexten_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JEXTSEL
 */
class jextsel_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr jextsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JL
 */
class jl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr jl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto jsq4() const -> jsq4_f {return jsq4_f(static_cast<uint8_t>(m_value >> jsq4_f::Offset));}
	[[nodiscard]] constexpr auto jsq3() const -> jsq3_f {return jsq3_f(static_cast<uint8_t>(m_value >> jsq3_f::Offset));}
	[[nodiscard]] constexpr auto jsq2() const -> jsq2_f {return jsq2_f(static_cast<uint8_t>(m_value >> jsq2_f::Offset));}
	[[nodiscard]] constexpr auto jsq1() const -> jsq1_f {return jsq1_f(static_cast<uint8_t>(m_value >> jsq1_f::Offset));}
	[[nodiscard]] constexpr auto jexten() const -> jexten_f {return jexten_f(static_cast<uint8_t>(m_value >> jexten_f::Offset));}
	[[nodiscard]] constexpr auto jextsel() const -> jextsel_f {return jextsel_f(static_cast<uint8_t>(m_value >> jextsel_f::Offset));}
	[[nodiscard]] constexpr auto jl() const -> jl_f {return jl_f(static_cast<uint8_t>(m_value >> jl_f::Offset));}

	template<std::size_t Index> struct jsq_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using jsq_v = typename jsq_f<Index>::type;
	template<std::size_t Index> constexpr auto jsq() const { return jsq_v<Index>::get(*this); }

	constexpr jsqr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jsqr_r other) const -> jsqr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jsqr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * offset register 1
 */
class ofr1_r {
public:

/**
 * OFFSET1_EN
 */
class offset1_en_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offset1_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr1_r>() const {return ClearSet<ofr1_r>(Mask, *this);}
	constexpr auto operator|(ofr1_r other) const -> ofr1_r { return static_cast<ofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr1_r> other) const -> ClearSet<ofr1_r> {return ClearSet<ofr1_r>(ofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1_CH
 */
class offset1_ch_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr offset1_ch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ofr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ofr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr1_r>() const {return ClearSet<ofr1_r>(Mask, *this);}
	constexpr auto operator|(ofr1_r other) const -> ofr1_r { return static_cast<ofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr1_r> other) const -> ClearSet<ofr1_r> {return ClearSet<ofr1_r>(ofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SATEN
 */
class saten_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr saten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr1_r>() const {return ClearSet<ofr1_r>(Mask, *this);}
	constexpr auto operator|(ofr1_r other) const -> ofr1_r { return static_cast<ofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr1_r> other) const -> ClearSet<ofr1_r> {return ClearSet<ofr1_r>(ofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSETPOS
 */
class offsetpos_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offsetpos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr1_r>() const {return ClearSet<ofr1_r>(Mask, *this);}
	constexpr auto operator|(ofr1_r other) const -> ofr1_r { return static_cast<ofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr1_r> other) const -> ClearSet<ofr1_r> {return ClearSet<ofr1_r>(ofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1
 */
class offset1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr offset1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ofr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ofr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr1_r>() const {return ClearSet<ofr1_r>(Mask, *this);}
	constexpr auto operator|(ofr1_r other) const -> ofr1_r { return static_cast<ofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr1_r> other) const -> ClearSet<ofr1_r> {return ClearSet<ofr1_r>(ofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto offset1_en() const -> offset1_en_f {return offset1_en_f((m_value & offset1_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1_ch() const -> offset1_ch_f {return offset1_ch_f(static_cast<uint8_t>(m_value >> offset1_ch_f::Offset));}
	[[nodiscard]] constexpr auto saten() const -> saten_f {return saten_f((m_value & saten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offsetpos() const -> offsetpos_f {return offsetpos_f((m_value & offsetpos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1() const -> offset1_f {return offset1_f(static_cast<uint16_t>(m_value >> offset1_f::Offset));}

	constexpr ofr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ofr1_r other) const -> ofr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ofr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * offset register 2
 */
class ofr2_r {
public:

/**
 * OFFSET1_EN
 */
class offset1_en_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offset1_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr2_r>() const {return ClearSet<ofr2_r>(Mask, *this);}
	constexpr auto operator|(ofr2_r other) const -> ofr2_r { return static_cast<ofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr2_r> other) const -> ClearSet<ofr2_r> {return ClearSet<ofr2_r>(ofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1_CH
 */
class offset1_ch_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr offset1_ch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ofr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ofr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr2_r>() const {return ClearSet<ofr2_r>(Mask, *this);}
	constexpr auto operator|(ofr2_r other) const -> ofr2_r { return static_cast<ofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr2_r> other) const -> ClearSet<ofr2_r> {return ClearSet<ofr2_r>(ofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SATEN
 */
class saten_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr saten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr2_r>() const {return ClearSet<ofr2_r>(Mask, *this);}
	constexpr auto operator|(ofr2_r other) const -> ofr2_r { return static_cast<ofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr2_r> other) const -> ClearSet<ofr2_r> {return ClearSet<ofr2_r>(ofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSETPOS
 */
class offsetpos_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offsetpos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr2_r>() const {return ClearSet<ofr2_r>(Mask, *this);}
	constexpr auto operator|(ofr2_r other) const -> ofr2_r { return static_cast<ofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr2_r> other) const -> ClearSet<ofr2_r> {return ClearSet<ofr2_r>(ofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1
 */
class offset1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr offset1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ofr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ofr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr2_r>() const {return ClearSet<ofr2_r>(Mask, *this);}
	constexpr auto operator|(ofr2_r other) const -> ofr2_r { return static_cast<ofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr2_r> other) const -> ClearSet<ofr2_r> {return ClearSet<ofr2_r>(ofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto offset1_en() const -> offset1_en_f {return offset1_en_f((m_value & offset1_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1_ch() const -> offset1_ch_f {return offset1_ch_f(static_cast<uint8_t>(m_value >> offset1_ch_f::Offset));}
	[[nodiscard]] constexpr auto saten() const -> saten_f {return saten_f((m_value & saten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offsetpos() const -> offsetpos_f {return offsetpos_f((m_value & offsetpos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1() const -> offset1_f {return offset1_f(static_cast<uint16_t>(m_value >> offset1_f::Offset));}

	constexpr ofr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ofr2_r other) const -> ofr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ofr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 100;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * offset register 3
 */
class ofr3_r {
public:

/**
 * OFFSET1_EN
 */
class offset1_en_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offset1_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr3_r>() const {return ClearSet<ofr3_r>(Mask, *this);}
	constexpr auto operator|(ofr3_r other) const -> ofr3_r { return static_cast<ofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr3_r> other) const -> ClearSet<ofr3_r> {return ClearSet<ofr3_r>(ofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1_CH
 */
class offset1_ch_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr offset1_ch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ofr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ofr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr3_r>() const {return ClearSet<ofr3_r>(Mask, *this);}
	constexpr auto operator|(ofr3_r other) const -> ofr3_r { return static_cast<ofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr3_r> other) const -> ClearSet<ofr3_r> {return ClearSet<ofr3_r>(ofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SATEN
 */
class saten_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr saten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr3_r>() const {return ClearSet<ofr3_r>(Mask, *this);}
	constexpr auto operator|(ofr3_r other) const -> ofr3_r { return static_cast<ofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr3_r> other) const -> ClearSet<ofr3_r> {return ClearSet<ofr3_r>(ofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSETPOS
 */
class offsetpos_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offsetpos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr3_r>() const {return ClearSet<ofr3_r>(Mask, *this);}
	constexpr auto operator|(ofr3_r other) const -> ofr3_r { return static_cast<ofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr3_r> other) const -> ClearSet<ofr3_r> {return ClearSet<ofr3_r>(ofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1
 */
class offset1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr offset1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ofr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ofr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr3_r>() const {return ClearSet<ofr3_r>(Mask, *this);}
	constexpr auto operator|(ofr3_r other) const -> ofr3_r { return static_cast<ofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr3_r> other) const -> ClearSet<ofr3_r> {return ClearSet<ofr3_r>(ofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto offset1_en() const -> offset1_en_f {return offset1_en_f((m_value & offset1_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1_ch() const -> offset1_ch_f {return offset1_ch_f(static_cast<uint8_t>(m_value >> offset1_ch_f::Offset));}
	[[nodiscard]] constexpr auto saten() const -> saten_f {return saten_f((m_value & saten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offsetpos() const -> offsetpos_f {return offsetpos_f((m_value & offsetpos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1() const -> offset1_f {return offset1_f(static_cast<uint16_t>(m_value >> offset1_f::Offset));}

	constexpr ofr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ofr3_r other) const -> ofr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ofr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 104;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * offset register 4
 */
class ofr4_r {
public:

/**
 * OFFSET1_EN
 */
class offset1_en_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offset1_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr4_r>() const {return ClearSet<ofr4_r>(Mask, *this);}
	constexpr auto operator|(ofr4_r other) const -> ofr4_r { return static_cast<ofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr4_r> other) const -> ClearSet<ofr4_r> {return ClearSet<ofr4_r>(ofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1_CH
 */
class offset1_ch_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr offset1_ch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ofr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ofr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr4_r>() const {return ClearSet<ofr4_r>(Mask, *this);}
	constexpr auto operator|(ofr4_r other) const -> ofr4_r { return static_cast<ofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr4_r> other) const -> ClearSet<ofr4_r> {return ClearSet<ofr4_r>(ofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SATEN
 */
class saten_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr saten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr4_r>() const {return ClearSet<ofr4_r>(Mask, *this);}
	constexpr auto operator|(ofr4_r other) const -> ofr4_r { return static_cast<ofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr4_r> other) const -> ClearSet<ofr4_r> {return ClearSet<ofr4_r>(ofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSETPOS
 */
class offsetpos_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offsetpos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr4_r>() const {return ClearSet<ofr4_r>(Mask, *this);}
	constexpr auto operator|(ofr4_r other) const -> ofr4_r { return static_cast<ofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr4_r> other) const -> ClearSet<ofr4_r> {return ClearSet<ofr4_r>(ofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1
 */
class offset1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr offset1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ofr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ofr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr4_r>() const {return ClearSet<ofr4_r>(Mask, *this);}
	constexpr auto operator|(ofr4_r other) const -> ofr4_r { return static_cast<ofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr4_r> other) const -> ClearSet<ofr4_r> {return ClearSet<ofr4_r>(ofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto offset1_en() const -> offset1_en_f {return offset1_en_f((m_value & offset1_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1_ch() const -> offset1_ch_f {return offset1_ch_f(static_cast<uint8_t>(m_value >> offset1_ch_f::Offset));}
	[[nodiscard]] constexpr auto saten() const -> saten_f {return saten_f((m_value & saten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offsetpos() const -> offsetpos_f {return offsetpos_f((m_value & offsetpos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1() const -> offset1_f {return offset1_f(static_cast<uint16_t>(m_value >> offset1_f::Offset));}

	constexpr ofr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ofr4_r other) const -> ofr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ofr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 108;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register 1
 */
class jdr1_r {
public:

/**
 * JDATA1
 */
class jdata1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata1_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr1_r>() const {return ClearSet<jdr1_r>(Mask, *this);}
	constexpr auto operator|(jdr1_r other) const -> jdr1_r { return static_cast<jdr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr1_r> other) const -> ClearSet<jdr1_r> {return ClearSet<jdr1_r>(jdr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata1() const -> jdata1_f {return jdata1_f(static_cast<uint16_t>(m_value >> jdata1_f::Offset));}

	constexpr jdr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr1_r other) const -> jdr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register 2
 */
class jdr2_r {
public:

/**
 * JDATA2
 */
class jdata2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata2_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr2_r>() const {return ClearSet<jdr2_r>(Mask, *this);}
	constexpr auto operator|(jdr2_r other) const -> jdr2_r { return static_cast<jdr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr2_r> other) const -> ClearSet<jdr2_r> {return ClearSet<jdr2_r>(jdr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata2() const -> jdata2_f {return jdata2_f(static_cast<uint16_t>(m_value >> jdata2_f::Offset));}

	constexpr jdr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr2_r other) const -> jdr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 132;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register 3
 */
class jdr3_r {
public:

/**
 * JDATA3
 */
class jdata3_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata3_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr3_r>() const {return ClearSet<jdr3_r>(Mask, *this);}
	constexpr auto operator|(jdr3_r other) const -> jdr3_r { return static_cast<jdr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr3_r> other) const -> ClearSet<jdr3_r> {return ClearSet<jdr3_r>(jdr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata3() const -> jdata3_f {return jdata3_f(static_cast<uint16_t>(m_value >> jdata3_f::Offset));}

	constexpr jdr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr3_r other) const -> jdr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 136;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register 4
 */
class jdr4_r {
public:

/**
 * JDATA4
 */
class jdata4_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata4_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr4_r>() const {return ClearSet<jdr4_r>(Mask, *this);}
	constexpr auto operator|(jdr4_r other) const -> jdr4_r { return static_cast<jdr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr4_r> other) const -> ClearSet<jdr4_r> {return ClearSet<jdr4_r>(jdr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata4() const -> jdata4_f {return jdata4_f(static_cast<uint16_t>(m_value >> jdata4_f::Offset));}

	constexpr jdr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr4_r other) const -> jdr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 140;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Analog Watchdog 2 Configuration Register
 */
class awd2cr_r {
public:

/**
 * AWD2CH
 */
class awd2ch_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr awd2ch_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator awd2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(awd2cr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<awd2cr_r>() const {return ClearSet<awd2cr_r>(Mask, *this);}
	constexpr auto operator|(awd2cr_r other) const -> awd2cr_r { return static_cast<awd2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<awd2cr_r> other) const -> ClearSet<awd2cr_r> {return ClearSet<awd2cr_r>(awd2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto awd2ch() const -> awd2ch_f {return awd2ch_f(static_cast<uint32_t>(m_value >> awd2ch_f::Offset));}

	constexpr awd2cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(awd2cr_r other) const -> awd2cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> awd2cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 160;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Analog Watchdog 3 Configuration Register
 */
class awd3cr_r {
public:

/**
 * AWD3CH
 */
class awd3ch_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr awd3ch_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator awd3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(awd3cr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<awd3cr_r>() const {return ClearSet<awd3cr_r>(Mask, *this);}
	constexpr auto operator|(awd3cr_r other) const -> awd3cr_r { return static_cast<awd3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<awd3cr_r> other) const -> ClearSet<awd3cr_r> {return ClearSet<awd3cr_r>(awd3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto awd3ch() const -> awd3ch_f {return awd3ch_f(static_cast<uint32_t>(m_value >> awd3ch_f::Offset));}

	constexpr awd3cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(awd3cr_r other) const -> awd3cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> awd3cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 164;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Differential Mode Selection Register 2
 */
class difsel_r {
public:

/**
 * Differential mode for channels 0
 */
class difsel_0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr difsel_0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator difsel_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(difsel_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<difsel_r>() const {return ClearSet<difsel_r>(Mask, *this);}
	constexpr auto operator|(difsel_r other) const -> difsel_r { return static_cast<difsel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<difsel_r> other) const -> ClearSet<difsel_r> {return ClearSet<difsel_r>(difsel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Differential mode for channels 15 to 1
 */
class difsel_1_18_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 18;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr difsel_1_18_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator difsel_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(difsel_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<difsel_r>() const {return ClearSet<difsel_r>(Mask, *this);}
	constexpr auto operator|(difsel_r other) const -> difsel_r { return static_cast<difsel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<difsel_r> other) const -> ClearSet<difsel_r> {return ClearSet<difsel_r>(difsel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto difsel_0() const -> difsel_0_f {return difsel_0_f((m_value & difsel_0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto difsel_1_18() const -> difsel_1_18_f {return difsel_1_18_f(static_cast<uint32_t>(m_value >> difsel_1_18_f::Offset));}

	constexpr difsel_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(difsel_r other) const -> difsel_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> difsel_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 176;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Calibration Factors
 */
class calfact_r {
public:

/**
 * CALFACT_D
 */
class calfact_d_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr calfact_d_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator calfact_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(calfact_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calfact_r>() const {return ClearSet<calfact_r>(Mask, *this);}
	constexpr auto operator|(calfact_r other) const -> calfact_r { return static_cast<calfact_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calfact_r> other) const -> ClearSet<calfact_r> {return ClearSet<calfact_r>(calfact_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CALFACT_S
 */
class calfact_s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr calfact_s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator calfact_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(calfact_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calfact_r>() const {return ClearSet<calfact_r>(Mask, *this);}
	constexpr auto operator|(calfact_r other) const -> calfact_r { return static_cast<calfact_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calfact_r> other) const -> ClearSet<calfact_r> {return ClearSet<calfact_r>(calfact_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto calfact_d() const -> calfact_d_f {return calfact_d_f(static_cast<uint8_t>(m_value >> calfact_d_f::Offset));}
	[[nodiscard]] constexpr auto calfact_s() const -> calfact_s_f {return calfact_s_f(static_cast<uint8_t>(m_value >> calfact_s_f::Offset));}

	constexpr calfact_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(calfact_r other) const -> calfact_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> calfact_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 180;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Gain compensation Register
 */
class gcomp_r {
public:

/**
 * GCOMPCOEFF
 */
class gcompcoeff_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 14;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr gcompcoeff_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator gcomp_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(gcomp_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<gcomp_r>() const {return ClearSet<gcomp_r>(Mask, *this);}
	constexpr auto operator|(gcomp_r other) const -> gcomp_r { return static_cast<gcomp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<gcomp_r> other) const -> ClearSet<gcomp_r> {return ClearSet<gcomp_r>(gcomp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto gcompcoeff() const -> gcompcoeff_f {return gcompcoeff_f(static_cast<uint16_t>(m_value >> gcompcoeff_f::Offset));}

	constexpr gcomp_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(gcomp_r other) const -> gcomp_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> gcomp_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 192;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct smpr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using smpr_v = typename smpr_r<Index>::type;
	template<std::size_t Index> constexpr auto& smpr() { }

	template<std::size_t Index> struct tr_r { static_assert(Index == 1 || Index == 2 || Index == 3); };
	template<std::size_t Index> using tr_v = typename tr_r<Index>::type;
	template<std::size_t Index> constexpr auto& tr() { }

	template<std::size_t Index> struct sqr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using sqr_v = typename sqr_r<Index>::type;
	template<std::size_t Index> constexpr auto& sqr() { }

	template<std::size_t Index> struct ofr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using ofr_v = typename ofr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ofr() { }

	template<std::size_t Index> struct jdr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using jdr_v = typename jdr_r<Index>::type;
	template<std::size_t Index> constexpr auto& jdr() { }

	Memory<uint32_t,isr_r> isr;
	Memory<uint32_t,ier_r> ier;
	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,cfgr_r> cfgr;
	Memory<uint32_t,cfgr2_r> cfgr2;
	Memory<uint32_t,smpr1_r> smpr1;
	Memory<uint32_t,smpr2_r> smpr2;
	Padding<4> _p28;
	Memory<uint32_t,tr1_r> tr1;
	Memory<uint32_t,tr2_r> tr2;
	Memory<uint32_t,tr3_r> tr3;
	Padding<4> _p44;
	Memory<uint32_t,sqr1_r> sqr1;
	Memory<uint32_t,sqr2_r> sqr2;
	Memory<uint32_t,sqr3_r> sqr3;
	Memory<uint32_t,sqr4_r> sqr4;
	ReadOnlyMemory<uint32_t,dr_r> dr;
	Padding<8> _p68;
	Memory<uint32_t,jsqr_r> jsqr;
	Padding<16> _p80;
	Memory<uint32_t,ofr1_r> ofr1;
	Memory<uint32_t,ofr2_r> ofr2;
	Memory<uint32_t,ofr3_r> ofr3;
	Memory<uint32_t,ofr4_r> ofr4;
	Padding<16> _p112;
	ReadOnlyMemory<uint32_t,jdr1_r> jdr1;
	ReadOnlyMemory<uint32_t,jdr2_r> jdr2;
	ReadOnlyMemory<uint32_t,jdr3_r> jdr3;
	ReadOnlyMemory<uint32_t,jdr4_r> jdr4;
	Padding<16> _p144;
	Memory<uint32_t,awd2cr_r> awd2cr;
	Memory<uint32_t,awd3cr_r> awd3cr;
	Padding<8> _p168;
	Memory<uint32_t,difsel_r> difsel;
	Memory<uint32_t,calfact_r> calfact;
	Padding<8> _p184;
	Memory<uint32_t,gcomp_r> gcomp;
};

template<> struct adc1_p::isr_r::awd_f<3> { using type = adc1_p::isr_r::awd3_f; };
template<> struct adc1_p::isr_r::awd_f<2> { using type = adc1_p::isr_r::awd2_f; };
template<> struct adc1_p::isr_r::awd_f<1> { using type = adc1_p::isr_r::awd1_f; };

template<> struct adc1_p::smpr1_r::smp_f<9> { using type = adc1_p::smpr1_r::smp9_f; };
template<> struct adc1_p::smpr1_r::smp_f<8> { using type = adc1_p::smpr1_r::smp8_f; };
template<> struct adc1_p::smpr1_r::smp_f<7> { using type = adc1_p::smpr1_r::smp7_f; };
template<> struct adc1_p::smpr1_r::smp_f<6> { using type = adc1_p::smpr1_r::smp6_f; };
template<> struct adc1_p::smpr1_r::smp_f<5> { using type = adc1_p::smpr1_r::smp5_f; };
template<> struct adc1_p::smpr1_r::smp_f<4> { using type = adc1_p::smpr1_r::smp4_f; };
template<> struct adc1_p::smpr1_r::smp_f<3> { using type = adc1_p::smpr1_r::smp3_f; };
template<> struct adc1_p::smpr1_r::smp_f<2> { using type = adc1_p::smpr1_r::smp2_f; };
template<> struct adc1_p::smpr1_r::smp_f<1> { using type = adc1_p::smpr1_r::smp1_f; };
template<> struct adc1_p::smpr1_r::smp_f<0> { using type = adc1_p::smpr1_r::smp0_f; };

template<> struct adc1_p::smpr2_r::smp_f<18> { using type = adc1_p::smpr2_r::smp18_f; };
template<> struct adc1_p::smpr2_r::smp_f<17> { using type = adc1_p::smpr2_r::smp17_f; };
template<> struct adc1_p::smpr2_r::smp_f<16> { using type = adc1_p::smpr2_r::smp16_f; };
template<> struct adc1_p::smpr2_r::smp_f<15> { using type = adc1_p::smpr2_r::smp15_f; };
template<> struct adc1_p::smpr2_r::smp_f<14> { using type = adc1_p::smpr2_r::smp14_f; };
template<> struct adc1_p::smpr2_r::smp_f<13> { using type = adc1_p::smpr2_r::smp13_f; };
template<> struct adc1_p::smpr2_r::smp_f<12> { using type = adc1_p::smpr2_r::smp12_f; };
template<> struct adc1_p::smpr2_r::smp_f<11> { using type = adc1_p::smpr2_r::smp11_f; };
template<> struct adc1_p::smpr2_r::smp_f<10> { using type = adc1_p::smpr2_r::smp10_f; };

template<> struct adc1_p::sqr1_r::sq_f<4> { using type = adc1_p::sqr1_r::sq4_f; };
template<> struct adc1_p::sqr1_r::sq_f<3> { using type = adc1_p::sqr1_r::sq3_f; };
template<> struct adc1_p::sqr1_r::sq_f<2> { using type = adc1_p::sqr1_r::sq2_f; };
template<> struct adc1_p::sqr1_r::sq_f<1> { using type = adc1_p::sqr1_r::sq1_f; };

template<> struct adc1_p::sqr2_r::sq_f<9> { using type = adc1_p::sqr2_r::sq9_f; };
template<> struct adc1_p::sqr2_r::sq_f<8> { using type = adc1_p::sqr2_r::sq8_f; };
template<> struct adc1_p::sqr2_r::sq_f<7> { using type = adc1_p::sqr2_r::sq7_f; };
template<> struct adc1_p::sqr2_r::sq_f<6> { using type = adc1_p::sqr2_r::sq6_f; };
template<> struct adc1_p::sqr2_r::sq_f<5> { using type = adc1_p::sqr2_r::sq5_f; };

template<> struct adc1_p::sqr3_r::sq_f<14> { using type = adc1_p::sqr3_r::sq14_f; };
template<> struct adc1_p::sqr3_r::sq_f<13> { using type = adc1_p::sqr3_r::sq13_f; };
template<> struct adc1_p::sqr3_r::sq_f<12> { using type = adc1_p::sqr3_r::sq12_f; };
template<> struct adc1_p::sqr3_r::sq_f<11> { using type = adc1_p::sqr3_r::sq11_f; };
template<> struct adc1_p::sqr3_r::sq_f<10> { using type = adc1_p::sqr3_r::sq10_f; };

template<> struct adc1_p::sqr4_r::sq_f<16> { using type = adc1_p::sqr4_r::sq16_f; };
template<> struct adc1_p::sqr4_r::sq_f<15> { using type = adc1_p::sqr4_r::sq15_f; };

template<> struct adc1_p::jsqr_r::jsq_f<4> { using type = adc1_p::jsqr_r::jsq4_f; };
template<> struct adc1_p::jsqr_r::jsq_f<3> { using type = adc1_p::jsqr_r::jsq3_f; };
template<> struct adc1_p::jsqr_r::jsq_f<2> { using type = adc1_p::jsqr_r::jsq2_f; };
template<> struct adc1_p::jsqr_r::jsq_f<1> { using type = adc1_p::jsqr_r::jsq1_f; };

template<> constexpr auto& adc1_p::smpr<1>() { return smpr1; }
template<> constexpr auto& adc1_p::smpr<2>() { return smpr2; }

template<> struct adc1_p::smpr_r<1> { using type = adc1_p::smpr1_r; };
template<> struct adc1_p::smpr_r<2> { using type = adc1_p::smpr2_r; };

template<> constexpr auto& adc1_p::tr<1>() { return tr1; }
template<> constexpr auto& adc1_p::tr<2>() { return tr2; }
template<> constexpr auto& adc1_p::tr<3>() { return tr3; }

template<> struct adc1_p::tr_r<1> { using type = adc1_p::tr1_r; };
template<> struct adc1_p::tr_r<2> { using type = adc1_p::tr2_r; };
template<> struct adc1_p::tr_r<3> { using type = adc1_p::tr3_r; };

template<> constexpr auto& adc1_p::sqr<1>() { return sqr1; }
template<> constexpr auto& adc1_p::sqr<2>() { return sqr2; }
template<> constexpr auto& adc1_p::sqr<3>() { return sqr3; }
template<> constexpr auto& adc1_p::sqr<4>() { return sqr4; }

template<> struct adc1_p::sqr_r<1> { using type = adc1_p::sqr1_r; };
template<> struct adc1_p::sqr_r<2> { using type = adc1_p::sqr2_r; };
template<> struct adc1_p::sqr_r<3> { using type = adc1_p::sqr3_r; };
template<> struct adc1_p::sqr_r<4> { using type = adc1_p::sqr4_r; };

template<> constexpr auto& adc1_p::ofr<1>() { return ofr1; }
template<> constexpr auto& adc1_p::ofr<2>() { return ofr2; }
template<> constexpr auto& adc1_p::ofr<3>() { return ofr3; }
template<> constexpr auto& adc1_p::ofr<4>() { return ofr4; }

template<> struct adc1_p::ofr_r<1> { using type = adc1_p::ofr1_r; };
template<> struct adc1_p::ofr_r<2> { using type = adc1_p::ofr2_r; };
template<> struct adc1_p::ofr_r<3> { using type = adc1_p::ofr3_r; };
template<> struct adc1_p::ofr_r<4> { using type = adc1_p::ofr4_r; };

template<> constexpr auto& adc1_p::jdr<1>() { return jdr1; }
template<> constexpr auto& adc1_p::jdr<2>() { return jdr2; }
template<> constexpr auto& adc1_p::jdr<3>() { return jdr3; }
template<> constexpr auto& adc1_p::jdr<4>() { return jdr4; }

template<> struct adc1_p::jdr_r<1> { using type = adc1_p::jdr1_r; };
template<> struct adc1_p::jdr_r<2> { using type = adc1_p::jdr2_r; };
template<> struct adc1_p::jdr_r<3> { using type = adc1_p::jdr3_r; };
template<> struct adc1_p::jdr_r<4> { using type = adc1_p::jdr4_r; };

static_assert(std::is_standard_layout_v<adc1_p>);
static_assert(offsetof(adc1_p, isr) == adc1_p::isr_r::Offset);
static_assert(offsetof(adc1_p, ier) == adc1_p::ier_r::Offset);
static_assert(offsetof(adc1_p, cr) == adc1_p::cr_r::Offset);
static_assert(offsetof(adc1_p, cfgr) == adc1_p::cfgr_r::Offset);
static_assert(offsetof(adc1_p, cfgr2) == adc1_p::cfgr2_r::Offset);
static_assert(offsetof(adc1_p, smpr1) == adc1_p::smpr1_r::Offset);
static_assert(offsetof(adc1_p, smpr2) == adc1_p::smpr2_r::Offset);
static_assert(offsetof(adc1_p, tr1) == adc1_p::tr1_r::Offset);
static_assert(offsetof(adc1_p, tr2) == adc1_p::tr2_r::Offset);
static_assert(offsetof(adc1_p, tr3) == adc1_p::tr3_r::Offset);
static_assert(offsetof(adc1_p, sqr1) == adc1_p::sqr1_r::Offset);
static_assert(offsetof(adc1_p, sqr2) == adc1_p::sqr2_r::Offset);
static_assert(offsetof(adc1_p, sqr3) == adc1_p::sqr3_r::Offset);
static_assert(offsetof(adc1_p, sqr4) == adc1_p::sqr4_r::Offset);
static_assert(offsetof(adc1_p, dr) == adc1_p::dr_r::Offset);
static_assert(offsetof(adc1_p, jsqr) == adc1_p::jsqr_r::Offset);
static_assert(offsetof(adc1_p, ofr1) == adc1_p::ofr1_r::Offset);
static_assert(offsetof(adc1_p, ofr2) == adc1_p::ofr2_r::Offset);
static_assert(offsetof(adc1_p, ofr3) == adc1_p::ofr3_r::Offset);
static_assert(offsetof(adc1_p, ofr4) == adc1_p::ofr4_r::Offset);
static_assert(offsetof(adc1_p, jdr1) == adc1_p::jdr1_r::Offset);
static_assert(offsetof(adc1_p, jdr2) == adc1_p::jdr2_r::Offset);
static_assert(offsetof(adc1_p, jdr3) == adc1_p::jdr3_r::Offset);
static_assert(offsetof(adc1_p, jdr4) == adc1_p::jdr4_r::Offset);
static_assert(offsetof(adc1_p, awd2cr) == adc1_p::awd2cr_r::Offset);
static_assert(offsetof(adc1_p, awd3cr) == adc1_p::awd3cr_r::Offset);
static_assert(offsetof(adc1_p, difsel) == adc1_p::difsel_r::Offset);
static_assert(offsetof(adc1_p, calfact) == adc1_p::calfact_r::Offset);
static_assert(offsetof(adc1_p, gcomp) == adc1_p::gcomp_r::Offset);

/**
 * Analog-to-Digital Converter
 */
class adc3_p {
public:
/**
 * interrupt and status register
 */
class isr_r {
public:

/**
 * JQOVF
 */
class jqovf_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr jqovf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD3
 */
class awd3_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD2
 */
class awd2_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD1
 */
class awd1_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr awd1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JEOS
 */
class jeos_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JEOC
 */
class jeoc_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeoc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OVR
 */
class ovr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOS
 */
class eos_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOC
 */
class eoc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eoc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOSMP
 */
class eosmp_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eosmp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADRDY
 */
class adrdy_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr adrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto jqovf() const -> jqovf_f {return jqovf_f((m_value & jqovf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd3() const -> awd3_f {return awd3_f((m_value & awd3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd2() const -> awd2_f {return awd2_f((m_value & awd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1() const -> awd1_f {return awd1_f((m_value & awd1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeos() const -> jeos_f {return jeos_f((m_value & jeos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeoc() const -> jeoc_f {return jeoc_f((m_value & jeoc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovr() const -> ovr_f {return ovr_f((m_value & ovr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eos() const -> eos_f {return eos_f((m_value & eos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eoc() const -> eoc_f {return eoc_f((m_value & eoc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eosmp() const -> eosmp_f {return eosmp_f((m_value & eosmp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adrdy() const -> adrdy_f {return adrdy_f((m_value & adrdy_f::Mask) != 0);}

	template<std::size_t Index> struct awd_f { static_assert(Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using awd_v = typename awd_f<Index>::type;
	template<std::size_t Index> constexpr auto awd() const { return awd_v<Index>::get(*this); }

	constexpr isr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(isr_r other) const -> isr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> isr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * interrupt enable register
 */
class ier_r {
public:

/**
 * JQOVFIE
 */
class jqovfie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr jqovfie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD3IE
 */
class awd3ie_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd3ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD2IE
 */
class awd2ie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd2ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD1IE
 */
class awd1ie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr awd1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JEOSIE
 */
class jeosie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeosie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JEOCIE
 */
class jeocie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeocie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OVRIE
 */
class ovrie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovrie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOSIE
 */
class eosie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eosie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOCIE
 */
class eocie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eocie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EOSMPIE
 */
class eosmpie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eosmpie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADRDYIE
 */
class adrdyie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr adrdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto jqovfie() const -> jqovfie_f {return jqovfie_f((m_value & jqovfie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd3ie() const -> awd3ie_f {return awd3ie_f((m_value & awd3ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd2ie() const -> awd2ie_f {return awd2ie_f((m_value & awd2ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1ie() const -> awd1ie_f {return awd1ie_f((m_value & awd1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeosie() const -> jeosie_f {return jeosie_f((m_value & jeosie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeocie() const -> jeocie_f {return jeocie_f((m_value & jeocie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrie() const -> ovrie_f {return ovrie_f((m_value & ovrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eosie() const -> eosie_f {return eosie_f((m_value & eosie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eocie() const -> eocie_f {return eocie_f((m_value & eocie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eosmpie() const -> eosmpie_f {return eosmpie_f((m_value & eosmpie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adrdyie() const -> adrdyie_f {return adrdyie_f((m_value & adrdyie_f::Mask) != 0);}

	constexpr ier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ier_r other) const -> ier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * control register
 */
class cr_r {
public:

/**
 * ADCAL
 */
class adcal_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr adcal_f(bool value = true) : m_value(value) {}
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
 * ADCALDIF
 */
class adcaldif_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr adcaldif_f(bool value = true) : m_value(value) {}
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
 * DEEPPWD
 */
class deeppwd_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deeppwd_f(bool value = true) : m_value(value) {}
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
 * ADVREGEN
 */
class advregen_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr advregen_f(bool value = true) : m_value(value) {}
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
 * JADSTP
 */
class jadstp_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jadstp_f(bool value = true) : m_value(value) {}
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
 * ADSTP
 */
class adstp_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr adstp_f(bool value = true) : m_value(value) {}
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
 * JADSTART
 */
class jadstart_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jadstart_f(bool value = true) : m_value(value) {}
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
 * ADSTART
 */
class adstart_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr adstart_f(bool value = true) : m_value(value) {}
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
 * ADDIS
 */
class addis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr addis_f(bool value = true) : m_value(value) {}
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
 * ADEN
 */
class aden_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr aden_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto adcal() const -> adcal_f {return adcal_f((m_value & adcal_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adcaldif() const -> adcaldif_f {return adcaldif_f((m_value & adcaldif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deeppwd() const -> deeppwd_f {return deeppwd_f((m_value & deeppwd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto advregen() const -> advregen_f {return advregen_f((m_value & advregen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jadstp() const -> jadstp_f {return jadstp_f((m_value & jadstp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adstp() const -> adstp_f {return adstp_f((m_value & adstp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jadstart() const -> jadstart_f {return jadstart_f((m_value & jadstart_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adstart() const -> adstart_f {return adstart_f((m_value & adstart_f::Mask) != 0);}
	[[nodiscard]] constexpr auto addis() const -> addis_f {return addis_f((m_value & addis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto aden() const -> aden_f {return aden_f((m_value & aden_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b100000000000000010000000000000; // 536879104 0x20002000

private:
	uint32_t m_value;
};
/**
 * configuration register
 */
class cfgr_r {
public:

/**
 * Injected Queue disable
 */
class jqdis_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jqdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWDCH1CH
 */
class awdch1ch_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr awdch1ch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JAUTO
 */
class jauto_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jauto_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JAWD1EN
 */
class jawd1en_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jawd1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD1EN
 */
class awd1en_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr awd1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AWD1SGL
 */
class awd1sgl_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr awd1sgl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JQM
 */
class jqm_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jqm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * JDISCEN
 */
class jdiscen_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jdiscen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DISCNUM
 */
class discnum_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr discnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DISCEN
 */
class discen_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr discen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ALIGN
 */
class align_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr align_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AUTDLY
 */
class autdly_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr autdly_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CONT
 */
class cont_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cont_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OVRMOD
 */
class ovrmod_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ovrmod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EXTEN
 */
class exten_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr exten_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * EXTSEL
 */
class extsel_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr extsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ALIGN_5
 */
class align_5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr align_5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RES
 */
class res_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr res_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DMACFG
 */
class dmacfg_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmacfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMAEN
 */
class dmaen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto jqdis() const -> jqdis_f {return jqdis_f((m_value & jqdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awdch1ch() const -> awdch1ch_f {return awdch1ch_f(static_cast<uint8_t>(m_value >> awdch1ch_f::Offset));}
	[[nodiscard]] constexpr auto jauto() const -> jauto_f {return jauto_f((m_value & jauto_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jawd1en() const -> jawd1en_f {return jawd1en_f((m_value & jawd1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1en() const -> awd1en_f {return awd1en_f((m_value & awd1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1sgl() const -> awd1sgl_f {return awd1sgl_f((m_value & awd1sgl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jqm() const -> jqm_f {return jqm_f((m_value & jqm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jdiscen() const -> jdiscen_f {return jdiscen_f((m_value & jdiscen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto discnum() const -> discnum_f {return discnum_f(static_cast<uint8_t>(m_value >> discnum_f::Offset));}
	[[nodiscard]] constexpr auto discen() const -> discen_f {return discen_f((m_value & discen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto align() const -> align_f {return align_f((m_value & align_f::Mask) != 0);}
	[[nodiscard]] constexpr auto autdly() const -> autdly_f {return autdly_f((m_value & autdly_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cont() const -> cont_f {return cont_f((m_value & cont_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrmod() const -> ovrmod_f {return ovrmod_f((m_value & ovrmod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto exten() const -> exten_f {return exten_f(static_cast<uint8_t>(m_value >> exten_f::Offset));}
	[[nodiscard]] constexpr auto extsel() const -> extsel_f {return extsel_f(static_cast<uint8_t>(m_value >> extsel_f::Offset));}
	[[nodiscard]] constexpr auto align_5() const -> align_5_f {return align_5_f((m_value & align_5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto res() const -> res_f {return res_f(static_cast<uint8_t>(m_value >> res_f::Offset));}
	[[nodiscard]] constexpr auto dmacfg() const -> dmacfg_f {return dmacfg_f((m_value & dmacfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaen() const -> dmaen_f {return dmaen_f((m_value & dmaen_f::Mask) != 0);}

	constexpr cfgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfgr_r other) const -> cfgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0b10000000000000000000000000000000; // 2147483648 0x80000000

private:
	uint32_t m_value;
};
/**
 * configuration register
 */
class cfgr2_r {
public:

/**
 * SMPTRIG
 */
class smptrig_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smptrig_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BULB
 */
class bulb_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bulb_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SWTRIG
 */
class swtrig_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swtrig_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GCOMP
 */
class gcomp_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gcomp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EXTEN
 */
class rovsm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rovsm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Triggered Regular Oversampling
 */
class trovs_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr trovs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ALIGN
 */
class ovss_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ovss_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfgr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RES
 */
class ovsr_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ovsr_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cfgr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DMACFG
 */
class jovse_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jovse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMAEN
 */
class rovse_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rovse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto smptrig() const -> smptrig_f {return smptrig_f((m_value & smptrig_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bulb() const -> bulb_f {return bulb_f((m_value & bulb_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swtrig() const -> swtrig_f {return swtrig_f((m_value & swtrig_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gcomp() const -> gcomp_f {return gcomp_f((m_value & gcomp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rovsm() const -> rovsm_f {return rovsm_f((m_value & rovsm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto trovs() const -> trovs_f {return trovs_f((m_value & trovs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovss() const -> ovss_f {return ovss_f(static_cast<uint8_t>(m_value >> ovss_f::Offset));}
	[[nodiscard]] constexpr auto ovsr() const -> ovsr_f {return ovsr_f(static_cast<uint8_t>(m_value >> ovsr_f::Offset));}
	[[nodiscard]] constexpr auto jovse() const -> jovse_f {return jovse_f((m_value & jovse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rovse() const -> rovse_f {return rovse_f((m_value & rovse_f::Mask) != 0);}

	constexpr cfgr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfgr2_r other) const -> cfgr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfgr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * sample time register 1
 */
class smpr1_r {
public:

/**
 * SMP9
 */
class smp9_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP8
 */
class smp8_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP7
 */
class smp7_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP6
 */
class smp6_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP5
 */
class smp5_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP4
 */
class smp4_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP3
 */
class smp3_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP2
 */
class smp2_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP1
 */
class smp1_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr smp1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Addition of one clock cycle to the sampling time
 */
class smpplus_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smpplus_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smpr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smpr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SMP0
 */
class smp0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr smp0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto smp9() const -> smp9_f {return smp9_f(static_cast<uint8_t>(m_value >> smp9_f::Offset));}
	[[nodiscard]] constexpr auto smp8() const -> smp8_f {return smp8_f(static_cast<uint8_t>(m_value >> smp8_f::Offset));}
	[[nodiscard]] constexpr auto smp7() const -> smp7_f {return smp7_f(static_cast<uint8_t>(m_value >> smp7_f::Offset));}
	[[nodiscard]] constexpr auto smp6() const -> smp6_f {return smp6_f(static_cast<uint8_t>(m_value >> smp6_f::Offset));}
	[[nodiscard]] constexpr auto smp5() const -> smp5_f {return smp5_f(static_cast<uint8_t>(m_value >> smp5_f::Offset));}
	[[nodiscard]] constexpr auto smp4() const -> smp4_f {return smp4_f(static_cast<uint8_t>(m_value >> smp4_f::Offset));}
	[[nodiscard]] constexpr auto smp3() const -> smp3_f {return smp3_f(static_cast<uint8_t>(m_value >> smp3_f::Offset));}
	[[nodiscard]] constexpr auto smp2() const -> smp2_f {return smp2_f(static_cast<uint8_t>(m_value >> smp2_f::Offset));}
	[[nodiscard]] constexpr auto smp1() const -> smp1_f {return smp1_f(static_cast<uint8_t>(m_value >> smp1_f::Offset));}
	[[nodiscard]] constexpr auto smpplus() const -> smpplus_f {return smpplus_f((m_value & smpplus_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smp0() const -> smp0_f {return smp0_f(static_cast<uint8_t>(m_value >> smp0_f::Offset));}

	template<std::size_t Index> struct smp_f { static_assert(Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using smp_v = typename smp_f<Index>::type;
	template<std::size_t Index> constexpr auto smp() const { return smp_v<Index>::get(*this); }

	constexpr smpr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smpr1_r other) const -> smpr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smpr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * sample time register 2
 */
class smpr2_r {
public:

/**
 * SMP18
 */
class smp18_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp18_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP17
 */
class smp17_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp17_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP16
 */
class smp16_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp16_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP15
 */
class smp15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smp15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP14
 */
class smp14_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP13
 */
class smp13_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP12
 */
class smp12_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr smp12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP11
 */
class smp11_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr smp11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SMP10
 */
class smp10_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr smp10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto smp18() const -> smp18_f {return smp18_f(static_cast<uint8_t>(m_value >> smp18_f::Offset));}
	[[nodiscard]] constexpr auto smp17() const -> smp17_f {return smp17_f(static_cast<uint8_t>(m_value >> smp17_f::Offset));}
	[[nodiscard]] constexpr auto smp16() const -> smp16_f {return smp16_f(static_cast<uint8_t>(m_value >> smp16_f::Offset));}
	[[nodiscard]] constexpr auto smp15() const -> smp15_f {return smp15_f(static_cast<uint8_t>(m_value >> smp15_f::Offset));}
	[[nodiscard]] constexpr auto smp14() const -> smp14_f {return smp14_f(static_cast<uint8_t>(m_value >> smp14_f::Offset));}
	[[nodiscard]] constexpr auto smp13() const -> smp13_f {return smp13_f(static_cast<uint8_t>(m_value >> smp13_f::Offset));}
	[[nodiscard]] constexpr auto smp12() const -> smp12_f {return smp12_f(static_cast<uint8_t>(m_value >> smp12_f::Offset));}
	[[nodiscard]] constexpr auto smp11() const -> smp11_f {return smp11_f(static_cast<uint8_t>(m_value >> smp11_f::Offset));}
	[[nodiscard]] constexpr auto smp10() const -> smp10_f {return smp10_f(static_cast<uint8_t>(m_value >> smp10_f::Offset));}

	template<std::size_t Index> struct smp_f { static_assert(Index == 18 || Index == 17 || Index == 16 || Index == 15 || Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10); };
	template<std::size_t Index> using smp_v = typename smp_f<Index>::type;
	template<std::size_t Index> constexpr auto smp() const { return smp_v<Index>::get(*this); }

	constexpr smpr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smpr2_r other) const -> smpr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smpr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * watchdog threshold register 1
 */
class tr1_r {
public:

/**
 * HT1
 */
class ht1_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ht1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr1_r>() const {return ClearSet<tr1_r>(Mask, *this);}
	constexpr auto operator|(tr1_r other) const -> tr1_r { return static_cast<tr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr1_r> other) const -> ClearSet<tr1_r> {return ClearSet<tr1_r>(tr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * AWDFILT
 */
class awdfilt_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr awdfilt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr1_r>() const {return ClearSet<tr1_r>(Mask, *this);}
	constexpr auto operator|(tr1_r other) const -> tr1_r { return static_cast<tr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr1_r> other) const -> ClearSet<tr1_r> {return ClearSet<tr1_r>(tr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LT1
 */
class lt1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr lt1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr1_r>() const {return ClearSet<tr1_r>(Mask, *this);}
	constexpr auto operator|(tr1_r other) const -> tr1_r { return static_cast<tr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr1_r> other) const -> ClearSet<tr1_r> {return ClearSet<tr1_r>(tr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ht1() const -> ht1_f {return ht1_f(static_cast<uint16_t>(m_value >> ht1_f::Offset));}
	[[nodiscard]] constexpr auto awdfilt() const -> awdfilt_f {return awdfilt_f(static_cast<uint8_t>(m_value >> awdfilt_f::Offset));}
	[[nodiscard]] constexpr auto lt1() const -> lt1_f {return lt1_f(static_cast<uint16_t>(m_value >> lt1_f::Offset));}

	constexpr tr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tr1_r other) const -> tr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0b1111111111110000000000000000; // 268369920 0xFFF0000

private:
	uint32_t m_value;
};
/**
 * watchdog threshold register
 */
class tr2_r {
public:

/**
 * HT2
 */
class ht2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ht2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr2_r>() const {return ClearSet<tr2_r>(Mask, *this);}
	constexpr auto operator|(tr2_r other) const -> tr2_r { return static_cast<tr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr2_r> other) const -> ClearSet<tr2_r> {return ClearSet<tr2_r>(tr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LT2
 */
class lt2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr lt2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr2_r>() const {return ClearSet<tr2_r>(Mask, *this);}
	constexpr auto operator|(tr2_r other) const -> tr2_r { return static_cast<tr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr2_r> other) const -> ClearSet<tr2_r> {return ClearSet<tr2_r>(tr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ht2() const -> ht2_f {return ht2_f(static_cast<uint8_t>(m_value >> ht2_f::Offset));}
	[[nodiscard]] constexpr auto lt2() const -> lt2_f {return lt2_f(static_cast<uint8_t>(m_value >> lt2_f::Offset));}

	constexpr tr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tr2_r other) const -> tr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0b111111110000000000000000; // 16711680 0xFF0000

private:
	uint32_t m_value;
};
/**
 * watchdog threshold register 3
 */
class tr3_r {
public:

/**
 * HT3
 */
class ht3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ht3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr3_r>() const {return ClearSet<tr3_r>(Mask, *this);}
	constexpr auto operator|(tr3_r other) const -> tr3_r { return static_cast<tr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr3_r> other) const -> ClearSet<tr3_r> {return ClearSet<tr3_r>(tr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LT3
 */
class lt3_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr lt3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr3_r>() const {return ClearSet<tr3_r>(Mask, *this);}
	constexpr auto operator|(tr3_r other) const -> tr3_r { return static_cast<tr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr3_r> other) const -> ClearSet<tr3_r> {return ClearSet<tr3_r>(tr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ht3() const -> ht3_f {return ht3_f(static_cast<uint8_t>(m_value >> ht3_f::Offset));}
	[[nodiscard]] constexpr auto lt3() const -> lt3_f {return lt3_f(static_cast<uint8_t>(m_value >> lt3_f::Offset));}

	constexpr tr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tr3_r other) const -> tr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0b111111110000000000000000; // 16711680 0xFF0000

private:
	uint32_t m_value;
};
/**
 * regular sequence register 1
 */
class sqr1_r {
public:

/**
 * SQ4
 */
class sq4_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ3
 */
class sq3_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ2
 */
class sq2_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ1
 */
class sq1_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Regular channel sequence length
 */
class l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr l_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sq4() const -> sq4_f {return sq4_f(static_cast<uint8_t>(m_value >> sq4_f::Offset));}
	[[nodiscard]] constexpr auto sq3() const -> sq3_f {return sq3_f(static_cast<uint8_t>(m_value >> sq3_f::Offset));}
	[[nodiscard]] constexpr auto sq2() const -> sq2_f {return sq2_f(static_cast<uint8_t>(m_value >> sq2_f::Offset));}
	[[nodiscard]] constexpr auto sq1() const -> sq1_f {return sq1_f(static_cast<uint8_t>(m_value >> sq1_f::Offset));}
	[[nodiscard]] constexpr auto l() const -> l_f {return l_f(static_cast<uint8_t>(m_value >> l_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr1_r other) const -> sqr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * regular sequence register 2
 */
class sqr2_r {
public:

/**
 * SQ9
 */
class sq9_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ8
 */
class sq8_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ7
 */
class sq7_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ6
 */
class sq6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ5
 */
class sq5_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sq5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sq9() const -> sq9_f {return sq9_f(static_cast<uint8_t>(m_value >> sq9_f::Offset));}
	[[nodiscard]] constexpr auto sq8() const -> sq8_f {return sq8_f(static_cast<uint8_t>(m_value >> sq8_f::Offset));}
	[[nodiscard]] constexpr auto sq7() const -> sq7_f {return sq7_f(static_cast<uint8_t>(m_value >> sq7_f::Offset));}
	[[nodiscard]] constexpr auto sq6() const -> sq6_f {return sq6_f(static_cast<uint8_t>(m_value >> sq6_f::Offset));}
	[[nodiscard]] constexpr auto sq5() const -> sq5_f {return sq5_f(static_cast<uint8_t>(m_value >> sq5_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 9 || Index == 8 || Index == 7 || Index == 6 || Index == 5); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr2_r other) const -> sqr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * regular sequence register 3
 */
class sqr3_r {
public:

/**
 * SQ14
 */
class sq14_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ13
 */
class sq13_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ12
 */
class sq12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ11
 */
class sq11_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ10
 */
class sq10_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sq10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sq14() const -> sq14_f {return sq14_f(static_cast<uint8_t>(m_value >> sq14_f::Offset));}
	[[nodiscard]] constexpr auto sq13() const -> sq13_f {return sq13_f(static_cast<uint8_t>(m_value >> sq13_f::Offset));}
	[[nodiscard]] constexpr auto sq12() const -> sq12_f {return sq12_f(static_cast<uint8_t>(m_value >> sq12_f::Offset));}
	[[nodiscard]] constexpr auto sq11() const -> sq11_f {return sq11_f(static_cast<uint8_t>(m_value >> sq11_f::Offset));}
	[[nodiscard]] constexpr auto sq10() const -> sq10_f {return sq10_f(static_cast<uint8_t>(m_value >> sq10_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 14 || Index == 13 || Index == 12 || Index == 11 || Index == 10); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr3_r other) const -> sqr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * regular sequence register 4
 */
class sqr4_r {
public:

/**
 * SQ16
 */
class sq16_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq16_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(sqr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr4_r>() const {return ClearSet<sqr4_r>(Mask, *this);}
	constexpr auto operator|(sqr4_r other) const -> sqr4_r { return static_cast<sqr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr4_r> other) const -> ClearSet<sqr4_r> {return ClearSet<sqr4_r>(sqr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SQ15
 */
class sq15_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sq15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr4_r>() const {return ClearSet<sqr4_r>(Mask, *this);}
	constexpr auto operator|(sqr4_r other) const -> sqr4_r { return static_cast<sqr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr4_r> other) const -> ClearSet<sqr4_r> {return ClearSet<sqr4_r>(sqr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sq16() const -> sq16_f {return sq16_f(static_cast<uint8_t>(m_value >> sq16_f::Offset));}
	[[nodiscard]] constexpr auto sq15() const -> sq15_f {return sq15_f(static_cast<uint8_t>(m_value >> sq15_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 16 || Index == 15); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr4_r other) const -> sqr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * regular Data Register
 */
class dr_r {
public:

/**
 * Regular Data converted
 */
class rdata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rdata_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rdata() const -> rdata_f {return rdata_f(static_cast<uint16_t>(m_value >> rdata_f::Offset));}

	constexpr dr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dr_r other) const -> dr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected sequence register
 */
class jsqr_r {
public:

/**
 * JSQ4
 */
class jsq4_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr jsq4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JSQ3
 */
class jsq3_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr jsq3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JSQ2
 */
class jsq2_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr jsq2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JSQ1
 */
class jsq1_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jsq1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JEXTEN
 */
class jexten_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jexten_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JEXTSEL
 */
class jextsel_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr jextsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * JL
 */
class jl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr jl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto jsq4() const -> jsq4_f {return jsq4_f(static_cast<uint8_t>(m_value >> jsq4_f::Offset));}
	[[nodiscard]] constexpr auto jsq3() const -> jsq3_f {return jsq3_f(static_cast<uint8_t>(m_value >> jsq3_f::Offset));}
	[[nodiscard]] constexpr auto jsq2() const -> jsq2_f {return jsq2_f(static_cast<uint8_t>(m_value >> jsq2_f::Offset));}
	[[nodiscard]] constexpr auto jsq1() const -> jsq1_f {return jsq1_f(static_cast<uint8_t>(m_value >> jsq1_f::Offset));}
	[[nodiscard]] constexpr auto jexten() const -> jexten_f {return jexten_f(static_cast<uint8_t>(m_value >> jexten_f::Offset));}
	[[nodiscard]] constexpr auto jextsel() const -> jextsel_f {return jextsel_f(static_cast<uint8_t>(m_value >> jextsel_f::Offset));}
	[[nodiscard]] constexpr auto jl() const -> jl_f {return jl_f(static_cast<uint8_t>(m_value >> jl_f::Offset));}

	template<std::size_t Index> struct jsq_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using jsq_v = typename jsq_f<Index>::type;
	template<std::size_t Index> constexpr auto jsq() const { return jsq_v<Index>::get(*this); }

	constexpr jsqr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jsqr_r other) const -> jsqr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jsqr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * offset register 1
 */
class ofr1_r {
public:

/**
 * OFFSET1_EN
 */
class offset1_en_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offset1_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr1_r>() const {return ClearSet<ofr1_r>(Mask, *this);}
	constexpr auto operator|(ofr1_r other) const -> ofr1_r { return static_cast<ofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr1_r> other) const -> ClearSet<ofr1_r> {return ClearSet<ofr1_r>(ofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1_CH
 */
class offset1_ch_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr offset1_ch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ofr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ofr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr1_r>() const {return ClearSet<ofr1_r>(Mask, *this);}
	constexpr auto operator|(ofr1_r other) const -> ofr1_r { return static_cast<ofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr1_r> other) const -> ClearSet<ofr1_r> {return ClearSet<ofr1_r>(ofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SATEN
 */
class saten_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr saten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr1_r>() const {return ClearSet<ofr1_r>(Mask, *this);}
	constexpr auto operator|(ofr1_r other) const -> ofr1_r { return static_cast<ofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr1_r> other) const -> ClearSet<ofr1_r> {return ClearSet<ofr1_r>(ofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSETPOS
 */
class offsetpos_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offsetpos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr1_r>() const {return ClearSet<ofr1_r>(Mask, *this);}
	constexpr auto operator|(ofr1_r other) const -> ofr1_r { return static_cast<ofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr1_r> other) const -> ClearSet<ofr1_r> {return ClearSet<ofr1_r>(ofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1
 */
class offset1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr offset1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ofr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ofr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr1_r>() const {return ClearSet<ofr1_r>(Mask, *this);}
	constexpr auto operator|(ofr1_r other) const -> ofr1_r { return static_cast<ofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr1_r> other) const -> ClearSet<ofr1_r> {return ClearSet<ofr1_r>(ofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto offset1_en() const -> offset1_en_f {return offset1_en_f((m_value & offset1_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1_ch() const -> offset1_ch_f {return offset1_ch_f(static_cast<uint8_t>(m_value >> offset1_ch_f::Offset));}
	[[nodiscard]] constexpr auto saten() const -> saten_f {return saten_f((m_value & saten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offsetpos() const -> offsetpos_f {return offsetpos_f((m_value & offsetpos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1() const -> offset1_f {return offset1_f(static_cast<uint16_t>(m_value >> offset1_f::Offset));}

	constexpr ofr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ofr1_r other) const -> ofr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ofr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * offset register 2
 */
class ofr2_r {
public:

/**
 * OFFSET1_EN
 */
class offset1_en_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offset1_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr2_r>() const {return ClearSet<ofr2_r>(Mask, *this);}
	constexpr auto operator|(ofr2_r other) const -> ofr2_r { return static_cast<ofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr2_r> other) const -> ClearSet<ofr2_r> {return ClearSet<ofr2_r>(ofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1_CH
 */
class offset1_ch_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr offset1_ch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ofr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ofr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr2_r>() const {return ClearSet<ofr2_r>(Mask, *this);}
	constexpr auto operator|(ofr2_r other) const -> ofr2_r { return static_cast<ofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr2_r> other) const -> ClearSet<ofr2_r> {return ClearSet<ofr2_r>(ofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SATEN
 */
class saten_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr saten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr2_r>() const {return ClearSet<ofr2_r>(Mask, *this);}
	constexpr auto operator|(ofr2_r other) const -> ofr2_r { return static_cast<ofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr2_r> other) const -> ClearSet<ofr2_r> {return ClearSet<ofr2_r>(ofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSETPOS
 */
class offsetpos_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offsetpos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr2_r>() const {return ClearSet<ofr2_r>(Mask, *this);}
	constexpr auto operator|(ofr2_r other) const -> ofr2_r { return static_cast<ofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr2_r> other) const -> ClearSet<ofr2_r> {return ClearSet<ofr2_r>(ofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1
 */
class offset1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr offset1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ofr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ofr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr2_r>() const {return ClearSet<ofr2_r>(Mask, *this);}
	constexpr auto operator|(ofr2_r other) const -> ofr2_r { return static_cast<ofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr2_r> other) const -> ClearSet<ofr2_r> {return ClearSet<ofr2_r>(ofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto offset1_en() const -> offset1_en_f {return offset1_en_f((m_value & offset1_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1_ch() const -> offset1_ch_f {return offset1_ch_f(static_cast<uint8_t>(m_value >> offset1_ch_f::Offset));}
	[[nodiscard]] constexpr auto saten() const -> saten_f {return saten_f((m_value & saten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offsetpos() const -> offsetpos_f {return offsetpos_f((m_value & offsetpos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1() const -> offset1_f {return offset1_f(static_cast<uint16_t>(m_value >> offset1_f::Offset));}

	constexpr ofr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ofr2_r other) const -> ofr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ofr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 100;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * offset register 3
 */
class ofr3_r {
public:

/**
 * OFFSET1_EN
 */
class offset1_en_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offset1_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr3_r>() const {return ClearSet<ofr3_r>(Mask, *this);}
	constexpr auto operator|(ofr3_r other) const -> ofr3_r { return static_cast<ofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr3_r> other) const -> ClearSet<ofr3_r> {return ClearSet<ofr3_r>(ofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1_CH
 */
class offset1_ch_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr offset1_ch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ofr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ofr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr3_r>() const {return ClearSet<ofr3_r>(Mask, *this);}
	constexpr auto operator|(ofr3_r other) const -> ofr3_r { return static_cast<ofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr3_r> other) const -> ClearSet<ofr3_r> {return ClearSet<ofr3_r>(ofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SATEN
 */
class saten_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr saten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr3_r>() const {return ClearSet<ofr3_r>(Mask, *this);}
	constexpr auto operator|(ofr3_r other) const -> ofr3_r { return static_cast<ofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr3_r> other) const -> ClearSet<ofr3_r> {return ClearSet<ofr3_r>(ofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSETPOS
 */
class offsetpos_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offsetpos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr3_r>() const {return ClearSet<ofr3_r>(Mask, *this);}
	constexpr auto operator|(ofr3_r other) const -> ofr3_r { return static_cast<ofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr3_r> other) const -> ClearSet<ofr3_r> {return ClearSet<ofr3_r>(ofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1
 */
class offset1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr offset1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ofr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ofr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr3_r>() const {return ClearSet<ofr3_r>(Mask, *this);}
	constexpr auto operator|(ofr3_r other) const -> ofr3_r { return static_cast<ofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr3_r> other) const -> ClearSet<ofr3_r> {return ClearSet<ofr3_r>(ofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto offset1_en() const -> offset1_en_f {return offset1_en_f((m_value & offset1_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1_ch() const -> offset1_ch_f {return offset1_ch_f(static_cast<uint8_t>(m_value >> offset1_ch_f::Offset));}
	[[nodiscard]] constexpr auto saten() const -> saten_f {return saten_f((m_value & saten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offsetpos() const -> offsetpos_f {return offsetpos_f((m_value & offsetpos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1() const -> offset1_f {return offset1_f(static_cast<uint16_t>(m_value >> offset1_f::Offset));}

	constexpr ofr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ofr3_r other) const -> ofr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ofr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 104;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * offset register 4
 */
class ofr4_r {
public:

/**
 * OFFSET1_EN
 */
class offset1_en_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offset1_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr4_r>() const {return ClearSet<ofr4_r>(Mask, *this);}
	constexpr auto operator|(ofr4_r other) const -> ofr4_r { return static_cast<ofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr4_r> other) const -> ClearSet<ofr4_r> {return ClearSet<ofr4_r>(ofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1_CH
 */
class offset1_ch_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr offset1_ch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ofr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ofr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr4_r>() const {return ClearSet<ofr4_r>(Mask, *this);}
	constexpr auto operator|(ofr4_r other) const -> ofr4_r { return static_cast<ofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr4_r> other) const -> ClearSet<ofr4_r> {return ClearSet<ofr4_r>(ofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SATEN
 */
class saten_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr saten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr4_r>() const {return ClearSet<ofr4_r>(Mask, *this);}
	constexpr auto operator|(ofr4_r other) const -> ofr4_r { return static_cast<ofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr4_r> other) const -> ClearSet<ofr4_r> {return ClearSet<ofr4_r>(ofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSETPOS
 */
class offsetpos_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr offsetpos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ofr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ofr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr4_r>() const {return ClearSet<ofr4_r>(Mask, *this);}
	constexpr auto operator|(ofr4_r other) const -> ofr4_r { return static_cast<ofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr4_r> other) const -> ClearSet<ofr4_r> {return ClearSet<ofr4_r>(ofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OFFSET1
 */
class offset1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr offset1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ofr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ofr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ofr4_r>() const {return ClearSet<ofr4_r>(Mask, *this);}
	constexpr auto operator|(ofr4_r other) const -> ofr4_r { return static_cast<ofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ofr4_r> other) const -> ClearSet<ofr4_r> {return ClearSet<ofr4_r>(ofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto offset1_en() const -> offset1_en_f {return offset1_en_f((m_value & offset1_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1_ch() const -> offset1_ch_f {return offset1_ch_f(static_cast<uint8_t>(m_value >> offset1_ch_f::Offset));}
	[[nodiscard]] constexpr auto saten() const -> saten_f {return saten_f((m_value & saten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offsetpos() const -> offsetpos_f {return offsetpos_f((m_value & offsetpos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto offset1() const -> offset1_f {return offset1_f(static_cast<uint16_t>(m_value >> offset1_f::Offset));}

	constexpr ofr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ofr4_r other) const -> ofr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ofr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 108;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register 1
 */
class jdr1_r {
public:

/**
 * JDATA1
 */
class jdata1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata1_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr1_r>() const {return ClearSet<jdr1_r>(Mask, *this);}
	constexpr auto operator|(jdr1_r other) const -> jdr1_r { return static_cast<jdr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr1_r> other) const -> ClearSet<jdr1_r> {return ClearSet<jdr1_r>(jdr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata1() const -> jdata1_f {return jdata1_f(static_cast<uint16_t>(m_value >> jdata1_f::Offset));}

	constexpr jdr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr1_r other) const -> jdr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register 2
 */
class jdr2_r {
public:

/**
 * JDATA2
 */
class jdata2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata2_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr2_r>() const {return ClearSet<jdr2_r>(Mask, *this);}
	constexpr auto operator|(jdr2_r other) const -> jdr2_r { return static_cast<jdr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr2_r> other) const -> ClearSet<jdr2_r> {return ClearSet<jdr2_r>(jdr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata2() const -> jdata2_f {return jdata2_f(static_cast<uint16_t>(m_value >> jdata2_f::Offset));}

	constexpr jdr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr2_r other) const -> jdr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 132;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register 3
 */
class jdr3_r {
public:

/**
 * JDATA3
 */
class jdata3_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata3_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr3_r>() const {return ClearSet<jdr3_r>(Mask, *this);}
	constexpr auto operator|(jdr3_r other) const -> jdr3_r { return static_cast<jdr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr3_r> other) const -> ClearSet<jdr3_r> {return ClearSet<jdr3_r>(jdr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata3() const -> jdata3_f {return jdata3_f(static_cast<uint16_t>(m_value >> jdata3_f::Offset));}

	constexpr jdr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr3_r other) const -> jdr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 136;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register 4
 */
class jdr4_r {
public:

/**
 * JDATA4
 */
class jdata4_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata4_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr4_r>() const {return ClearSet<jdr4_r>(Mask, *this);}
	constexpr auto operator|(jdr4_r other) const -> jdr4_r { return static_cast<jdr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr4_r> other) const -> ClearSet<jdr4_r> {return ClearSet<jdr4_r>(jdr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata4() const -> jdata4_f {return jdata4_f(static_cast<uint16_t>(m_value >> jdata4_f::Offset));}

	constexpr jdr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr4_r other) const -> jdr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 140;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Analog Watchdog 2 Configuration Register
 */
class awd2cr_r {
public:

/**
 * AWD2CH
 */
class awd2ch_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr awd2ch_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator awd2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(awd2cr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<awd2cr_r>() const {return ClearSet<awd2cr_r>(Mask, *this);}
	constexpr auto operator|(awd2cr_r other) const -> awd2cr_r { return static_cast<awd2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<awd2cr_r> other) const -> ClearSet<awd2cr_r> {return ClearSet<awd2cr_r>(awd2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto awd2ch() const -> awd2ch_f {return awd2ch_f(static_cast<uint32_t>(m_value >> awd2ch_f::Offset));}

	constexpr awd2cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(awd2cr_r other) const -> awd2cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> awd2cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 160;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Analog Watchdog 3 Configuration Register
 */
class awd3cr_r {
public:

/**
 * AWD3CH
 */
class awd3ch_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr awd3ch_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator awd3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(awd3cr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<awd3cr_r>() const {return ClearSet<awd3cr_r>(Mask, *this);}
	constexpr auto operator|(awd3cr_r other) const -> awd3cr_r { return static_cast<awd3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<awd3cr_r> other) const -> ClearSet<awd3cr_r> {return ClearSet<awd3cr_r>(awd3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto awd3ch() const -> awd3ch_f {return awd3ch_f(static_cast<uint32_t>(m_value >> awd3ch_f::Offset));}

	constexpr awd3cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(awd3cr_r other) const -> awd3cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> awd3cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 164;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Differential Mode Selection Register 2
 */
class difsel_r {
public:

/**
 * Differential mode for channels 0
 */
class difsel_0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr difsel_0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator difsel_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(difsel_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<difsel_r>() const {return ClearSet<difsel_r>(Mask, *this);}
	constexpr auto operator|(difsel_r other) const -> difsel_r { return static_cast<difsel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<difsel_r> other) const -> ClearSet<difsel_r> {return ClearSet<difsel_r>(difsel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Differential mode for channels 15 to 1
 */
class difsel_1_18_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 18;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr difsel_1_18_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator difsel_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(difsel_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<difsel_r>() const {return ClearSet<difsel_r>(Mask, *this);}
	constexpr auto operator|(difsel_r other) const -> difsel_r { return static_cast<difsel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<difsel_r> other) const -> ClearSet<difsel_r> {return ClearSet<difsel_r>(difsel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto difsel_0() const -> difsel_0_f {return difsel_0_f((m_value & difsel_0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto difsel_1_18() const -> difsel_1_18_f {return difsel_1_18_f(static_cast<uint32_t>(m_value >> difsel_1_18_f::Offset));}

	constexpr difsel_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(difsel_r other) const -> difsel_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> difsel_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 176;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Calibration Factors
 */
class calfact_r {
public:

/**
 * CALFACT_D
 */
class calfact_d_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr calfact_d_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator calfact_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(calfact_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calfact_r>() const {return ClearSet<calfact_r>(Mask, *this);}
	constexpr auto operator|(calfact_r other) const -> calfact_r { return static_cast<calfact_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calfact_r> other) const -> ClearSet<calfact_r> {return ClearSet<calfact_r>(calfact_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CALFACT_S
 */
class calfact_s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr calfact_s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator calfact_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(calfact_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calfact_r>() const {return ClearSet<calfact_r>(Mask, *this);}
	constexpr auto operator|(calfact_r other) const -> calfact_r { return static_cast<calfact_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calfact_r> other) const -> ClearSet<calfact_r> {return ClearSet<calfact_r>(calfact_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto calfact_d() const -> calfact_d_f {return calfact_d_f(static_cast<uint8_t>(m_value >> calfact_d_f::Offset));}
	[[nodiscard]] constexpr auto calfact_s() const -> calfact_s_f {return calfact_s_f(static_cast<uint8_t>(m_value >> calfact_s_f::Offset));}

	constexpr calfact_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(calfact_r other) const -> calfact_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> calfact_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 180;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Gain compensation Register
 */
class gcomp_r {
public:

/**
 * GCOMPCOEFF
 */
class gcompcoeff_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 14;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr gcompcoeff_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator gcomp_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(gcomp_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<gcomp_r>() const {return ClearSet<gcomp_r>(Mask, *this);}
	constexpr auto operator|(gcomp_r other) const -> gcomp_r { return static_cast<gcomp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<gcomp_r> other) const -> ClearSet<gcomp_r> {return ClearSet<gcomp_r>(gcomp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto gcompcoeff() const -> gcompcoeff_f {return gcompcoeff_f(static_cast<uint16_t>(m_value >> gcompcoeff_f::Offset));}

	constexpr gcomp_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(gcomp_r other) const -> gcomp_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> gcomp_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 192;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct smpr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using smpr_v = typename smpr_r<Index>::type;
	template<std::size_t Index> constexpr auto& smpr() { }

	template<std::size_t Index> struct tr_r { static_assert(Index == 1 || Index == 2 || Index == 3); };
	template<std::size_t Index> using tr_v = typename tr_r<Index>::type;
	template<std::size_t Index> constexpr auto& tr() { }

	template<std::size_t Index> struct sqr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using sqr_v = typename sqr_r<Index>::type;
	template<std::size_t Index> constexpr auto& sqr() { }

	template<std::size_t Index> struct ofr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using ofr_v = typename ofr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ofr() { }

	template<std::size_t Index> struct jdr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using jdr_v = typename jdr_r<Index>::type;
	template<std::size_t Index> constexpr auto& jdr() { }

	Memory<uint32_t,isr_r> isr;
	Memory<uint32_t,ier_r> ier;
	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,cfgr_r> cfgr;
	Memory<uint32_t,cfgr2_r> cfgr2;
	Memory<uint32_t,smpr1_r> smpr1;
	Memory<uint32_t,smpr2_r> smpr2;
	Padding<4> _p28;
	Memory<uint32_t,tr1_r> tr1;
	Memory<uint32_t,tr2_r> tr2;
	Memory<uint32_t,tr3_r> tr3;
	Padding<4> _p44;
	Memory<uint32_t,sqr1_r> sqr1;
	Memory<uint32_t,sqr2_r> sqr2;
	Memory<uint32_t,sqr3_r> sqr3;
	Memory<uint32_t,sqr4_r> sqr4;
	ReadOnlyMemory<uint32_t,dr_r> dr;
	Padding<8> _p68;
	Memory<uint32_t,jsqr_r> jsqr;
	Padding<16> _p80;
	Memory<uint32_t,ofr1_r> ofr1;
	Memory<uint32_t,ofr2_r> ofr2;
	Memory<uint32_t,ofr3_r> ofr3;
	Memory<uint32_t,ofr4_r> ofr4;
	Padding<16> _p112;
	ReadOnlyMemory<uint32_t,jdr1_r> jdr1;
	ReadOnlyMemory<uint32_t,jdr2_r> jdr2;
	ReadOnlyMemory<uint32_t,jdr3_r> jdr3;
	ReadOnlyMemory<uint32_t,jdr4_r> jdr4;
	Padding<16> _p144;
	Memory<uint32_t,awd2cr_r> awd2cr;
	Memory<uint32_t,awd3cr_r> awd3cr;
	Padding<8> _p168;
	Memory<uint32_t,difsel_r> difsel;
	Memory<uint32_t,calfact_r> calfact;
	Padding<8> _p184;
	Memory<uint32_t,gcomp_r> gcomp;
};

template<> struct adc3_p::isr_r::awd_f<3> { using type = adc3_p::isr_r::awd3_f; };
template<> struct adc3_p::isr_r::awd_f<2> { using type = adc3_p::isr_r::awd2_f; };
template<> struct adc3_p::isr_r::awd_f<1> { using type = adc3_p::isr_r::awd1_f; };

template<> struct adc3_p::smpr1_r::smp_f<9> { using type = adc3_p::smpr1_r::smp9_f; };
template<> struct adc3_p::smpr1_r::smp_f<8> { using type = adc3_p::smpr1_r::smp8_f; };
template<> struct adc3_p::smpr1_r::smp_f<7> { using type = adc3_p::smpr1_r::smp7_f; };
template<> struct adc3_p::smpr1_r::smp_f<6> { using type = adc3_p::smpr1_r::smp6_f; };
template<> struct adc3_p::smpr1_r::smp_f<5> { using type = adc3_p::smpr1_r::smp5_f; };
template<> struct adc3_p::smpr1_r::smp_f<4> { using type = adc3_p::smpr1_r::smp4_f; };
template<> struct adc3_p::smpr1_r::smp_f<3> { using type = adc3_p::smpr1_r::smp3_f; };
template<> struct adc3_p::smpr1_r::smp_f<2> { using type = adc3_p::smpr1_r::smp2_f; };
template<> struct adc3_p::smpr1_r::smp_f<1> { using type = adc3_p::smpr1_r::smp1_f; };
template<> struct adc3_p::smpr1_r::smp_f<0> { using type = adc3_p::smpr1_r::smp0_f; };

template<> struct adc3_p::smpr2_r::smp_f<18> { using type = adc3_p::smpr2_r::smp18_f; };
template<> struct adc3_p::smpr2_r::smp_f<17> { using type = adc3_p::smpr2_r::smp17_f; };
template<> struct adc3_p::smpr2_r::smp_f<16> { using type = adc3_p::smpr2_r::smp16_f; };
template<> struct adc3_p::smpr2_r::smp_f<15> { using type = adc3_p::smpr2_r::smp15_f; };
template<> struct adc3_p::smpr2_r::smp_f<14> { using type = adc3_p::smpr2_r::smp14_f; };
template<> struct adc3_p::smpr2_r::smp_f<13> { using type = adc3_p::smpr2_r::smp13_f; };
template<> struct adc3_p::smpr2_r::smp_f<12> { using type = adc3_p::smpr2_r::smp12_f; };
template<> struct adc3_p::smpr2_r::smp_f<11> { using type = adc3_p::smpr2_r::smp11_f; };
template<> struct adc3_p::smpr2_r::smp_f<10> { using type = adc3_p::smpr2_r::smp10_f; };

template<> struct adc3_p::sqr1_r::sq_f<4> { using type = adc3_p::sqr1_r::sq4_f; };
template<> struct adc3_p::sqr1_r::sq_f<3> { using type = adc3_p::sqr1_r::sq3_f; };
template<> struct adc3_p::sqr1_r::sq_f<2> { using type = adc3_p::sqr1_r::sq2_f; };
template<> struct adc3_p::sqr1_r::sq_f<1> { using type = adc3_p::sqr1_r::sq1_f; };

template<> struct adc3_p::sqr2_r::sq_f<9> { using type = adc3_p::sqr2_r::sq9_f; };
template<> struct adc3_p::sqr2_r::sq_f<8> { using type = adc3_p::sqr2_r::sq8_f; };
template<> struct adc3_p::sqr2_r::sq_f<7> { using type = adc3_p::sqr2_r::sq7_f; };
template<> struct adc3_p::sqr2_r::sq_f<6> { using type = adc3_p::sqr2_r::sq6_f; };
template<> struct adc3_p::sqr2_r::sq_f<5> { using type = adc3_p::sqr2_r::sq5_f; };

template<> struct adc3_p::sqr3_r::sq_f<14> { using type = adc3_p::sqr3_r::sq14_f; };
template<> struct adc3_p::sqr3_r::sq_f<13> { using type = adc3_p::sqr3_r::sq13_f; };
template<> struct adc3_p::sqr3_r::sq_f<12> { using type = adc3_p::sqr3_r::sq12_f; };
template<> struct adc3_p::sqr3_r::sq_f<11> { using type = adc3_p::sqr3_r::sq11_f; };
template<> struct adc3_p::sqr3_r::sq_f<10> { using type = adc3_p::sqr3_r::sq10_f; };

template<> struct adc3_p::sqr4_r::sq_f<16> { using type = adc3_p::sqr4_r::sq16_f; };
template<> struct adc3_p::sqr4_r::sq_f<15> { using type = adc3_p::sqr4_r::sq15_f; };

template<> struct adc3_p::jsqr_r::jsq_f<4> { using type = adc3_p::jsqr_r::jsq4_f; };
template<> struct adc3_p::jsqr_r::jsq_f<3> { using type = adc3_p::jsqr_r::jsq3_f; };
template<> struct adc3_p::jsqr_r::jsq_f<2> { using type = adc3_p::jsqr_r::jsq2_f; };
template<> struct adc3_p::jsqr_r::jsq_f<1> { using type = adc3_p::jsqr_r::jsq1_f; };

template<> constexpr auto& adc3_p::smpr<1>() { return smpr1; }
template<> constexpr auto& adc3_p::smpr<2>() { return smpr2; }

template<> struct adc3_p::smpr_r<1> { using type = adc3_p::smpr1_r; };
template<> struct adc3_p::smpr_r<2> { using type = adc3_p::smpr2_r; };

template<> constexpr auto& adc3_p::tr<1>() { return tr1; }
template<> constexpr auto& adc3_p::tr<2>() { return tr2; }
template<> constexpr auto& adc3_p::tr<3>() { return tr3; }

template<> struct adc3_p::tr_r<1> { using type = adc3_p::tr1_r; };
template<> struct adc3_p::tr_r<2> { using type = adc3_p::tr2_r; };
template<> struct adc3_p::tr_r<3> { using type = adc3_p::tr3_r; };

template<> constexpr auto& adc3_p::sqr<1>() { return sqr1; }
template<> constexpr auto& adc3_p::sqr<2>() { return sqr2; }
template<> constexpr auto& adc3_p::sqr<3>() { return sqr3; }
template<> constexpr auto& adc3_p::sqr<4>() { return sqr4; }

template<> struct adc3_p::sqr_r<1> { using type = adc3_p::sqr1_r; };
template<> struct adc3_p::sqr_r<2> { using type = adc3_p::sqr2_r; };
template<> struct adc3_p::sqr_r<3> { using type = adc3_p::sqr3_r; };
template<> struct adc3_p::sqr_r<4> { using type = adc3_p::sqr4_r; };

template<> constexpr auto& adc3_p::ofr<1>() { return ofr1; }
template<> constexpr auto& adc3_p::ofr<2>() { return ofr2; }
template<> constexpr auto& adc3_p::ofr<3>() { return ofr3; }
template<> constexpr auto& adc3_p::ofr<4>() { return ofr4; }

template<> struct adc3_p::ofr_r<1> { using type = adc3_p::ofr1_r; };
template<> struct adc3_p::ofr_r<2> { using type = adc3_p::ofr2_r; };
template<> struct adc3_p::ofr_r<3> { using type = adc3_p::ofr3_r; };
template<> struct adc3_p::ofr_r<4> { using type = adc3_p::ofr4_r; };

template<> constexpr auto& adc3_p::jdr<1>() { return jdr1; }
template<> constexpr auto& adc3_p::jdr<2>() { return jdr2; }
template<> constexpr auto& adc3_p::jdr<3>() { return jdr3; }
template<> constexpr auto& adc3_p::jdr<4>() { return jdr4; }

template<> struct adc3_p::jdr_r<1> { using type = adc3_p::jdr1_r; };
template<> struct adc3_p::jdr_r<2> { using type = adc3_p::jdr2_r; };
template<> struct adc3_p::jdr_r<3> { using type = adc3_p::jdr3_r; };
template<> struct adc3_p::jdr_r<4> { using type = adc3_p::jdr4_r; };

static_assert(std::is_standard_layout_v<adc3_p>);
static_assert(offsetof(adc3_p, isr) == adc3_p::isr_r::Offset);
static_assert(offsetof(adc3_p, ier) == adc3_p::ier_r::Offset);
static_assert(offsetof(adc3_p, cr) == adc3_p::cr_r::Offset);
static_assert(offsetof(adc3_p, cfgr) == adc3_p::cfgr_r::Offset);
static_assert(offsetof(adc3_p, cfgr2) == adc3_p::cfgr2_r::Offset);
static_assert(offsetof(adc3_p, smpr1) == adc3_p::smpr1_r::Offset);
static_assert(offsetof(adc3_p, smpr2) == adc3_p::smpr2_r::Offset);
static_assert(offsetof(adc3_p, tr1) == adc3_p::tr1_r::Offset);
static_assert(offsetof(adc3_p, tr2) == adc3_p::tr2_r::Offset);
static_assert(offsetof(adc3_p, tr3) == adc3_p::tr3_r::Offset);
static_assert(offsetof(adc3_p, sqr1) == adc3_p::sqr1_r::Offset);
static_assert(offsetof(adc3_p, sqr2) == adc3_p::sqr2_r::Offset);
static_assert(offsetof(adc3_p, sqr3) == adc3_p::sqr3_r::Offset);
static_assert(offsetof(adc3_p, sqr4) == adc3_p::sqr4_r::Offset);
static_assert(offsetof(adc3_p, dr) == adc3_p::dr_r::Offset);
static_assert(offsetof(adc3_p, jsqr) == adc3_p::jsqr_r::Offset);
static_assert(offsetof(adc3_p, ofr1) == adc3_p::ofr1_r::Offset);
static_assert(offsetof(adc3_p, ofr2) == adc3_p::ofr2_r::Offset);
static_assert(offsetof(adc3_p, ofr3) == adc3_p::ofr3_r::Offset);
static_assert(offsetof(adc3_p, ofr4) == adc3_p::ofr4_r::Offset);
static_assert(offsetof(adc3_p, jdr1) == adc3_p::jdr1_r::Offset);
static_assert(offsetof(adc3_p, jdr2) == adc3_p::jdr2_r::Offset);
static_assert(offsetof(adc3_p, jdr3) == adc3_p::jdr3_r::Offset);
static_assert(offsetof(adc3_p, jdr4) == adc3_p::jdr4_r::Offset);
static_assert(offsetof(adc3_p, awd2cr) == adc3_p::awd2cr_r::Offset);
static_assert(offsetof(adc3_p, awd3cr) == adc3_p::awd3cr_r::Offset);
static_assert(offsetof(adc3_p, difsel) == adc3_p::difsel_r::Offset);
static_assert(offsetof(adc3_p, calfact) == adc3_p::calfact_r::Offset);
static_assert(offsetof(adc3_p, gcomp) == adc3_p::gcomp_r::Offset);

/**
 * Analog-to-Digital Converter
 */
class adc12_common_p {
public:
/**
 * ADC Common status register
 */
class csr_r {
public:

/**
 * ADDRDY_MST
 */
class addrdy_mst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr addrdy_mst_f(bool value = true) : m_value(value) {}
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
 * EOSMP_MST
 */
class eosmp_mst_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eosmp_mst_f(bool value = true) : m_value(value) {}
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
 * EOC_MST
 */
class eoc_mst_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eoc_mst_f(bool value = true) : m_value(value) {}
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
 * EOS_MST
 */
class eos_mst_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eos_mst_f(bool value = true) : m_value(value) {}
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
 * OVR_MST
 */
class ovr_mst_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovr_mst_f(bool value = true) : m_value(value) {}
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
 * JEOC_MST
 */
class jeoc_mst_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeoc_mst_f(bool value = true) : m_value(value) {}
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
 * JEOS_MST
 */
class jeos_mst_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeos_mst_f(bool value = true) : m_value(value) {}
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
 * AWD1_MST
 */
class awd1_mst_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr awd1_mst_f(bool value = true) : m_value(value) {}
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
 * AWD2_MST
 */
class awd2_mst_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd2_mst_f(bool value = true) : m_value(value) {}
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
 * AWD3_MST
 */
class awd3_mst_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd3_mst_f(bool value = true) : m_value(value) {}
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
 * JQOVF_MST
 */
class jqovf_mst_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr jqovf_mst_f(bool value = true) : m_value(value) {}
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
 * ADRDY_SLV
 */
class adrdy_slv_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr adrdy_slv_f(bool value = true) : m_value(value) {}
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
 * EOSMP_SLV
 */
class eosmp_slv_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eosmp_slv_f(bool value = true) : m_value(value) {}
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
 * End of regular conversion of the slave ADC
 */
class eoc_slv_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eoc_slv_f(bool value = true) : m_value(value) {}
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
 * End of regular sequence flag of the slave ADC
 */
class eos_slv_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eos_slv_f(bool value = true) : m_value(value) {}
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
 * Overrun flag of the slave ADC
 */
class ovr_slv_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ovr_slv_f(bool value = true) : m_value(value) {}
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
 * End of injected conversion flag of the slave ADC
 */
class jeoc_slv_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jeoc_slv_f(bool value = true) : m_value(value) {}
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
 * End of injected sequence flag of the slave ADC
 */
class jeos_slv_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jeos_slv_f(bool value = true) : m_value(value) {}
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
 * Analog watchdog 1 flag of the slave ADC
 */
class awd1_slv_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr awd1_slv_f(bool value = true) : m_value(value) {}
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
 * Analog watchdog 2 flag of the slave ADC
 */
class awd2_slv_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr awd2_slv_f(bool value = true) : m_value(value) {}
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
 * Analog watchdog 3 flag of the slave ADC
 */
class awd3_slv_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr awd3_slv_f(bool value = true) : m_value(value) {}
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
 * Injected Context Queue Overflow flag of the slave ADC
 */
class jqovf_slv_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jqovf_slv_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto addrdy_mst() const -> addrdy_mst_f {return addrdy_mst_f((m_value & addrdy_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eosmp_mst() const -> eosmp_mst_f {return eosmp_mst_f((m_value & eosmp_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eoc_mst() const -> eoc_mst_f {return eoc_mst_f((m_value & eoc_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eos_mst() const -> eos_mst_f {return eos_mst_f((m_value & eos_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovr_mst() const -> ovr_mst_f {return ovr_mst_f((m_value & ovr_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeoc_mst() const -> jeoc_mst_f {return jeoc_mst_f((m_value & jeoc_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeos_mst() const -> jeos_mst_f {return jeos_mst_f((m_value & jeos_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1_mst() const -> awd1_mst_f {return awd1_mst_f((m_value & awd1_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd2_mst() const -> awd2_mst_f {return awd2_mst_f((m_value & awd2_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd3_mst() const -> awd3_mst_f {return awd3_mst_f((m_value & awd3_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jqovf_mst() const -> jqovf_mst_f {return jqovf_mst_f((m_value & jqovf_mst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adrdy_slv() const -> adrdy_slv_f {return adrdy_slv_f((m_value & adrdy_slv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eosmp_slv() const -> eosmp_slv_f {return eosmp_slv_f((m_value & eosmp_slv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eoc_slv() const -> eoc_slv_f {return eoc_slv_f((m_value & eoc_slv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eos_slv() const -> eos_slv_f {return eos_slv_f((m_value & eos_slv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovr_slv() const -> ovr_slv_f {return ovr_slv_f((m_value & ovr_slv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeoc_slv() const -> jeoc_slv_f {return jeoc_slv_f((m_value & jeoc_slv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeos_slv() const -> jeos_slv_f {return jeos_slv_f((m_value & jeos_slv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1_slv() const -> awd1_slv_f {return awd1_slv_f((m_value & awd1_slv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd2_slv() const -> awd2_slv_f {return awd2_slv_f((m_value & awd2_slv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd3_slv() const -> awd3_slv_f {return awd3_slv_f((m_value & awd3_slv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jqovf_slv() const -> jqovf_slv_f {return jqovf_slv_f((m_value & jqovf_slv_f::Mask) != 0);}

	constexpr csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(csr_r other) const -> csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * ADC common control register
 */
class ccr_r {
public:

/**
 * Dual ADC mode selection
 */
class dual_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dual_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Delay between 2 sampling phases
 */
class delay_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr delay_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DMA configuration (for multi-ADC mode)
 */
class dmacfg_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmacfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Direct memory access mode for multi ADC mode
 */
class mdma_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mdma_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADC clock mode
 */
class ckmode_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ckmode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * VREFINT enable
 */
class vrefen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr vrefen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 *  VTS selection
 */
class vsensesel_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr vsensesel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VBAT selection
 */
class vbatsel_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr vbatsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADC prescaler
 */
class presc_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr presc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dual() const -> dual_f {return dual_f(static_cast<uint8_t>(m_value >> dual_f::Offset));}
	[[nodiscard]] constexpr auto delay() const -> delay_f {return delay_f(static_cast<uint8_t>(m_value >> delay_f::Offset));}
	[[nodiscard]] constexpr auto dmacfg() const -> dmacfg_f {return dmacfg_f((m_value & dmacfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mdma() const -> mdma_f {return mdma_f(static_cast<uint8_t>(m_value >> mdma_f::Offset));}
	[[nodiscard]] constexpr auto ckmode() const -> ckmode_f {return ckmode_f(static_cast<uint8_t>(m_value >> ckmode_f::Offset));}
	[[nodiscard]] constexpr auto vrefen() const -> vrefen_f {return vrefen_f((m_value & vrefen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vsensesel() const -> vsensesel_f {return vsensesel_f((m_value & vsensesel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vbatsel() const -> vbatsel_f {return vbatsel_f((m_value & vbatsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto presc() const -> presc_f {return presc_f(static_cast<uint8_t>(m_value >> presc_f::Offset));}

	constexpr ccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr_r other) const -> ccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * ADC common regular data register for dual and triple modes
 */
class cdr_r {
public:

/**
 * Regular data of the slave ADC
 */
class rdata_slv_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rdata_slv_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cdr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cdr_r>() const {return ClearSet<cdr_r>(Mask, *this);}
	constexpr auto operator|(cdr_r other) const -> cdr_r { return static_cast<cdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cdr_r> other) const -> ClearSet<cdr_r> {return ClearSet<cdr_r>(cdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Regular data of the master ADC
 */
class rdata_mst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rdata_mst_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cdr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cdr_r>() const {return ClearSet<cdr_r>(Mask, *this);}
	constexpr auto operator|(cdr_r other) const -> cdr_r { return static_cast<cdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cdr_r> other) const -> ClearSet<cdr_r> {return ClearSet<cdr_r>(cdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rdata_slv() const -> rdata_slv_f {return rdata_slv_f(static_cast<uint16_t>(m_value >> rdata_slv_f::Offset));}
	[[nodiscard]] constexpr auto rdata_mst() const -> rdata_mst_f {return rdata_mst_f(static_cast<uint16_t>(m_value >> rdata_mst_f::Offset));}

	constexpr cdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cdr_r other) const -> cdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,csr_r> csr;
	Padding<4> _p4;
	Memory<uint32_t,ccr_r> ccr;
	ReadOnlyMemory<uint32_t,cdr_r> cdr;
};

static_assert(std::is_standard_layout_v<adc12_common_p>);
static_assert(offsetof(adc12_common_p, csr) == adc12_common_p::csr_r::Offset);
static_assert(offsetof(adc12_common_p, ccr) == adc12_common_p::ccr_r::Offset);
static_assert(offsetof(adc12_common_p, cdr) == adc12_common_p::cdr_r::Offset);

inline adc1_p& adc1 = *reinterpret_cast<adc1_p*>(0x50000000);
inline adc1_p& adc2 = *reinterpret_cast<adc1_p*>(0x50000100);
inline adc1_p& adc4 = *reinterpret_cast<adc1_p*>(0x50000500);
inline adc3_p& adc3 = *reinterpret_cast<adc3_p*>(0x50000400);
inline adc3_p& adc5 = *reinterpret_cast<adc3_p*>(0x50000600);
inline adc12_common_p& adc12_common = *reinterpret_cast<adc12_common_p*>(0x50000300);
inline adc12_common_p& adc345_common = *reinterpret_cast<adc12_common_p*>(0x50000700);

} // STM32G473XX

