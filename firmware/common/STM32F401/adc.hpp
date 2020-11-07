#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * ADC common registers
 */
class adc_common_p {
public:
/**
 * ADC Common status register
 */
class csr_r {
public:

/**
 * Overrun flag of ADC3
 */
class ovr3_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ovr3_f(bool value = true) : m_value(value) {}
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
 * Regular channel Start flag of ADC 3
 */
class strt3_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr strt3_f(bool value = true) : m_value(value) {}
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
 * Injected channel Start flag of ADC 3
 */
class jstrt3_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jstrt3_f(bool value = true) : m_value(value) {}
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
 * Injected channel end of conversion of ADC 3
 */
class jeoc3_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jeoc3_f(bool value = true) : m_value(value) {}
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
 * End of conversion of ADC 3
 */
class eoc3_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eoc3_f(bool value = true) : m_value(value) {}
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
 * Analog watchdog flag of ADC 3
 */
class awd3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr awd3_f(bool value = true) : m_value(value) {}
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
 * Overrun flag of ADC 2
 */
class ovr2_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ovr2_f(bool value = true) : m_value(value) {}
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
 * Regular channel Start flag of ADC 2
 */
class strt2_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr strt2_f(bool value = true) : m_value(value) {}
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
 * Injected channel Start flag of ADC 2
 */
class jstrt2_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr jstrt2_f(bool value = true) : m_value(value) {}
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
 * Injected channel end of conversion of ADC 2
 */
class jeoc2_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr jeoc2_f(bool value = true) : m_value(value) {}
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
 * End of conversion of ADC 2
 */
class eoc2_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr eoc2_f(bool value = true) : m_value(value) {}
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
 * Analog watchdog flag of ADC 2
 */
class awd2_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awd2_f(bool value = true) : m_value(value) {}
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
 * Overrun flag of ADC 1
 */
class ovr1_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovr1_f(bool value = true) : m_value(value) {}
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
 * Regular channel Start flag of ADC 1
 */
class strt1_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr strt1_f(bool value = true) : m_value(value) {}
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
 * Injected channel Start flag of ADC 1
 */
class jstrt1_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jstrt1_f(bool value = true) : m_value(value) {}
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
 * Injected channel end of conversion of ADC 1
 */
class jeoc1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeoc1_f(bool value = true) : m_value(value) {}
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
 * End of conversion of ADC 1
 */
class eoc1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eoc1_f(bool value = true) : m_value(value) {}
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
 * Analog watchdog flag of ADC 1
 */
class awd1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr awd1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ovr3() const -> ovr3_f {return ovr3_f((m_value & ovr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto strt3() const -> strt3_f {return strt3_f((m_value & strt3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jstrt3() const -> jstrt3_f {return jstrt3_f((m_value & jstrt3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeoc3() const -> jeoc3_f {return jeoc3_f((m_value & jeoc3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eoc3() const -> eoc3_f {return eoc3_f((m_value & eoc3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd3() const -> awd3_f {return awd3_f((m_value & awd3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovr2() const -> ovr2_f {return ovr2_f((m_value & ovr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto strt2() const -> strt2_f {return strt2_f((m_value & strt2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jstrt2() const -> jstrt2_f {return jstrt2_f((m_value & jstrt2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeoc2() const -> jeoc2_f {return jeoc2_f((m_value & jeoc2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eoc2() const -> eoc2_f {return eoc2_f((m_value & eoc2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd2() const -> awd2_f {return awd2_f((m_value & awd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovr1() const -> ovr1_f {return ovr1_f((m_value & ovr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto strt1() const -> strt1_f {return strt1_f((m_value & strt1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jstrt1() const -> jstrt1_f {return jstrt1_f((m_value & jstrt1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeoc1() const -> jeoc1_f {return jeoc1_f((m_value & jeoc1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eoc1() const -> eoc1_f {return eoc1_f((m_value & eoc1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd1() const -> awd1_f {return awd1_f((m_value & awd1_f::Mask) != 0);}

	template<std::size_t Index> struct ovr_f { static_assert(Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using ovr_v = typename ovr_f<Index>::type;
	template<std::size_t Index> constexpr auto ovr() const { return ovr_v<Index>::get(*this); }

	template<std::size_t Index> struct strt_f { static_assert(Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using strt_v = typename strt_f<Index>::type;
	template<std::size_t Index> constexpr auto strt() const { return strt_v<Index>::get(*this); }

	template<std::size_t Index> struct jstrt_f { static_assert(Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using jstrt_v = typename jstrt_f<Index>::type;
	template<std::size_t Index> constexpr auto jstrt() const { return jstrt_v<Index>::get(*this); }

	template<std::size_t Index> struct jeoc_f { static_assert(Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using jeoc_v = typename jeoc_f<Index>::type;
	template<std::size_t Index> constexpr auto jeoc() const { return jeoc_v<Index>::get(*this); }

	template<std::size_t Index> struct eoc_f { static_assert(Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using eoc_v = typename eoc_f<Index>::type;
	template<std::size_t Index> constexpr auto eoc() const { return eoc_v<Index>::get(*this); }

	template<std::size_t Index> struct awd_f { static_assert(Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using awd_v = typename awd_f<Index>::type;
	template<std::size_t Index> constexpr auto awd() const { return awd_v<Index>::get(*this); }

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
 * Temperature sensor and VREFINT enable
 */
class tsvrefe_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tsvrefe_f(bool value = true) : m_value(value) {}
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
 * VBAT enable
 */
class vbate_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr vbate_f(bool value = true) : m_value(value) {}
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
class adcpre_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr adcpre_f(uint8_t value) : m_value(value & Range) {}
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
 * Direct memory access mode for multi ADC mode
 */
class dma_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dma_f(uint8_t value) : m_value(value & Range) {}
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
 * DMA disable selection for multi-ADC mode
 */
class dds_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dds_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto tsvrefe() const -> tsvrefe_f {return tsvrefe_f((m_value & tsvrefe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vbate() const -> vbate_f {return vbate_f((m_value & vbate_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adcpre() const -> adcpre_f {return adcpre_f(static_cast<uint8_t>(m_value >> adcpre_f::Offset));}
	[[nodiscard]] constexpr auto dma() const -> dma_f {return dma_f(static_cast<uint8_t>(m_value >> dma_f::Offset));}
	[[nodiscard]] constexpr auto dds() const -> dds_f {return dds_f((m_value & dds_f::Mask) != 0);}
	[[nodiscard]] constexpr auto delay() const -> delay_f {return delay_f(static_cast<uint8_t>(m_value >> delay_f::Offset));}

	constexpr ccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr_r other) const -> ccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,csr_r> csr;
	Memory<uint32_t,ccr_r> ccr;
};

template<> struct adc_common_p::csr_r::ovr_f<3> { using type = adc_common_p::csr_r::ovr3_f; };
template<> struct adc_common_p::csr_r::ovr_f<2> { using type = adc_common_p::csr_r::ovr2_f; };
template<> struct adc_common_p::csr_r::ovr_f<1> { using type = adc_common_p::csr_r::ovr1_f; };
template<> struct adc_common_p::csr_r::strt_f<3> { using type = adc_common_p::csr_r::strt3_f; };
template<> struct adc_common_p::csr_r::strt_f<2> { using type = adc_common_p::csr_r::strt2_f; };
template<> struct adc_common_p::csr_r::strt_f<1> { using type = adc_common_p::csr_r::strt1_f; };
template<> struct adc_common_p::csr_r::jstrt_f<3> { using type = adc_common_p::csr_r::jstrt3_f; };
template<> struct adc_common_p::csr_r::jstrt_f<2> { using type = adc_common_p::csr_r::jstrt2_f; };
template<> struct adc_common_p::csr_r::jstrt_f<1> { using type = adc_common_p::csr_r::jstrt1_f; };
template<> struct adc_common_p::csr_r::jeoc_f<3> { using type = adc_common_p::csr_r::jeoc3_f; };
template<> struct adc_common_p::csr_r::jeoc_f<2> { using type = adc_common_p::csr_r::jeoc2_f; };
template<> struct adc_common_p::csr_r::jeoc_f<1> { using type = adc_common_p::csr_r::jeoc1_f; };
template<> struct adc_common_p::csr_r::eoc_f<3> { using type = adc_common_p::csr_r::eoc3_f; };
template<> struct adc_common_p::csr_r::eoc_f<2> { using type = adc_common_p::csr_r::eoc2_f; };
template<> struct adc_common_p::csr_r::eoc_f<1> { using type = adc_common_p::csr_r::eoc1_f; };
template<> struct adc_common_p::csr_r::awd_f<3> { using type = adc_common_p::csr_r::awd3_f; };
template<> struct adc_common_p::csr_r::awd_f<2> { using type = adc_common_p::csr_r::awd2_f; };
template<> struct adc_common_p::csr_r::awd_f<1> { using type = adc_common_p::csr_r::awd1_f; };

static_assert(std::is_standard_layout_v<adc_common_p>);
static_assert(offsetof(adc_common_p, csr) == adc_common_p::csr_r::Offset);
static_assert(offsetof(adc_common_p, ccr) == adc_common_p::ccr_r::Offset);

/**
 * Analog-to-digital converter
 */
class adc1_p {
public:
/**
 * status register
 */
class sr_r {
public:

/**
 * Overrun
 */
class ovr_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovr_f(bool value = true) : m_value(value) {}
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
 * Regular channel start flag
 */
class strt_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr strt_f(bool value = true) : m_value(value) {}
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
 * Injected channel start flag
 */
class jstrt_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jstrt_f(bool value = true) : m_value(value) {}
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
 * Injected channel end of conversion
 */
class jeoc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeoc_f(bool value = true) : m_value(value) {}
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
 * Regular channel end of conversion
 */
class eoc_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eoc_f(bool value = true) : m_value(value) {}
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
 * Analog watchdog flag
 */
class awd_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr awd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ovr() const -> ovr_f {return ovr_f((m_value & ovr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto strt() const -> strt_f {return strt_f((m_value & strt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jstrt() const -> jstrt_f {return jstrt_f((m_value & jstrt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeoc() const -> jeoc_f {return jeoc_f((m_value & jeoc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eoc() const -> eoc_f {return eoc_f((m_value & eoc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awd() const -> awd_f {return awd_f((m_value & awd_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Overrun interrupt enable
 */
class ovrie_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ovrie_f(bool value = true) : m_value(value) {}
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
 * Resolution
 */
class res_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr res_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Analog watchdog enable on regular channels
 */
class awden_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr awden_f(bool value = true) : m_value(value) {}
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
 * Analog watchdog enable on injected channels
 */
class jawden_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jawden_f(bool value = true) : m_value(value) {}
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
 * Discontinuous mode channel count
 */
class discnum_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr discnum_f(uint8_t value) : m_value(value & Range) {}
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
 * Discontinuous mode on injected channels
 */
class jdiscen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr jdiscen_f(bool value = true) : m_value(value) {}
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
 * Discontinuous mode on regular channels
 */
class discen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr discen_f(bool value = true) : m_value(value) {}
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
 * Automatic injected group conversion
 */
class jauto_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr jauto_f(bool value = true) : m_value(value) {}
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
 * Enable the watchdog on a single channel in scan mode
 */
class awdsgl_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr awdsgl_f(bool value = true) : m_value(value) {}
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
 * Scan mode
 */
class scan_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr scan_f(bool value = true) : m_value(value) {}
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
 * Interrupt enable for injected channels
 */
class jeocie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr jeocie_f(bool value = true) : m_value(value) {}
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
 * Analog watchdog interrupt enable
 */
class awdie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr awdie_f(bool value = true) : m_value(value) {}
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
 * Interrupt enable for EOC
 */
class eocie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eocie_f(bool value = true) : m_value(value) {}
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
 * Analog watchdog channel select bits
 */
class awdch_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr awdch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ovrie() const -> ovrie_f {return ovrie_f((m_value & ovrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto res() const -> res_f {return res_f(static_cast<uint8_t>(m_value >> res_f::Offset));}
	[[nodiscard]] constexpr auto awden() const -> awden_f {return awden_f((m_value & awden_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jawden() const -> jawden_f {return jawden_f((m_value & jawden_f::Mask) != 0);}
	[[nodiscard]] constexpr auto discnum() const -> discnum_f {return discnum_f(static_cast<uint8_t>(m_value >> discnum_f::Offset));}
	[[nodiscard]] constexpr auto jdiscen() const -> jdiscen_f {return jdiscen_f((m_value & jdiscen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto discen() const -> discen_f {return discen_f((m_value & discen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jauto() const -> jauto_f {return jauto_f((m_value & jauto_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awdsgl() const -> awdsgl_f {return awdsgl_f((m_value & awdsgl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scan() const -> scan_f {return scan_f((m_value & scan_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jeocie() const -> jeocie_f {return jeocie_f((m_value & jeocie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awdie() const -> awdie_f {return awdie_f((m_value & awdie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eocie() const -> eocie_f {return eocie_f((m_value & eocie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto awdch() const -> awdch_f {return awdch_f(static_cast<uint8_t>(m_value >> awdch_f::Offset));}

	constexpr cr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr1_r other) const -> cr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * control register 2
 */
class cr2_r {
public:

/**
 * Start conversion of regular channels
 */
class swstart_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swstart_f(bool value = true) : m_value(value) {}
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
 * External trigger enable for regular channels
 */
class exten_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr exten_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * External event select for regular group
 */
class extsel_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr extsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Start conversion of injected channels
 */
class jswstart_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr jswstart_f(bool value = true) : m_value(value) {}
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
 * External trigger enable for injected channels
 */
class jexten_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr jexten_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * External event select for injected group
 */
class jextsel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr jextsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Data alignment
 */
class align_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr align_f(bool value = true) : m_value(value) {}
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
 * End of conversion selection
 */
class eocs_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr eocs_f(bool value = true) : m_value(value) {}
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
 * DMA disable selection (for single ADC mode)
 */
class dds_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dds_f(bool value = true) : m_value(value) {}
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
 * Direct memory access mode (for single ADC mode)
 */
class dma_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dma_f(bool value = true) : m_value(value) {}
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
 * Continuous conversion
 */
class cont_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cont_f(bool value = true) : m_value(value) {}
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
 * A/D Converter ON / OFF
 */
class adon_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr adon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto swstart() const -> swstart_f {return swstart_f((m_value & swstart_f::Mask) != 0);}
	[[nodiscard]] constexpr auto exten() const -> exten_f {return exten_f(static_cast<uint8_t>(m_value >> exten_f::Offset));}
	[[nodiscard]] constexpr auto extsel() const -> extsel_f {return extsel_f(static_cast<uint8_t>(m_value >> extsel_f::Offset));}
	[[nodiscard]] constexpr auto jswstart() const -> jswstart_f {return jswstart_f((m_value & jswstart_f::Mask) != 0);}
	[[nodiscard]] constexpr auto jexten() const -> jexten_f {return jexten_f(static_cast<uint8_t>(m_value >> jexten_f::Offset));}
	[[nodiscard]] constexpr auto jextsel() const -> jextsel_f {return jextsel_f(static_cast<uint8_t>(m_value >> jextsel_f::Offset));}
	[[nodiscard]] constexpr auto align() const -> align_f {return align_f((m_value & align_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eocs() const -> eocs_f {return eocs_f((m_value & eocs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dds() const -> dds_f {return dds_f((m_value & dds_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dma() const -> dma_f {return dma_f((m_value & dma_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cont() const -> cont_f {return cont_f((m_value & cont_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adon() const -> adon_f {return adon_f((m_value & adon_f::Mask) != 0);}

	constexpr cr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr2_r other) const -> cr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
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
 * Sample time bits
 */
class smpx_x_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smpx_x_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator smpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr1_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr1_r>() const {return ClearSet<smpr1_r>(Mask, *this);}
	constexpr auto operator|(smpr1_r other) const -> smpr1_r { return static_cast<smpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr1_r> other) const -> ClearSet<smpr1_r> {return ClearSet<smpr1_r>(smpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto smpx_x() const -> smpx_x_f {return smpx_x_f(static_cast<uint32_t>(m_value >> smpx_x_f::Offset));}

	constexpr smpr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smpr1_r other) const -> smpr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smpr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
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
 * Sample time bits
 */
class smpx_x_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr smpx_x_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator smpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smpr2_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smpr2_r>() const {return ClearSet<smpr2_r>(Mask, *this);}
	constexpr auto operator|(smpr2_r other) const -> smpr2_r { return static_cast<smpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smpr2_r> other) const -> ClearSet<smpr2_r> {return ClearSet<smpr2_r>(smpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto smpx_x() const -> smpx_x_f {return smpx_x_f(static_cast<uint32_t>(m_value >> smpx_x_f::Offset));}

	constexpr smpr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smpr2_r other) const -> smpr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smpr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected channel data offset register x
 */
class jofr1_r {
public:

/**
 * Data offset for injected channel x
 */
class joffset1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr joffset1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jofr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jofr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jofr1_r>() const {return ClearSet<jofr1_r>(Mask, *this);}
	constexpr auto operator|(jofr1_r other) const -> jofr1_r { return static_cast<jofr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jofr1_r> other) const -> ClearSet<jofr1_r> {return ClearSet<jofr1_r>(jofr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto joffset1() const -> joffset1_f {return joffset1_f(static_cast<uint16_t>(m_value >> joffset1_f::Offset));}

	constexpr jofr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jofr1_r other) const -> jofr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jofr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected channel data offset register x
 */
class jofr2_r {
public:

/**
 * Data offset for injected channel x
 */
class joffset2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr joffset2_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jofr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jofr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jofr2_r>() const {return ClearSet<jofr2_r>(Mask, *this);}
	constexpr auto operator|(jofr2_r other) const -> jofr2_r { return static_cast<jofr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jofr2_r> other) const -> ClearSet<jofr2_r> {return ClearSet<jofr2_r>(jofr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto joffset2() const -> joffset2_f {return joffset2_f(static_cast<uint16_t>(m_value >> joffset2_f::Offset));}

	constexpr jofr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jofr2_r other) const -> jofr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jofr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected channel data offset register x
 */
class jofr3_r {
public:

/**
 * Data offset for injected channel x
 */
class joffset3_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr joffset3_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jofr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jofr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jofr3_r>() const {return ClearSet<jofr3_r>(Mask, *this);}
	constexpr auto operator|(jofr3_r other) const -> jofr3_r { return static_cast<jofr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jofr3_r> other) const -> ClearSet<jofr3_r> {return ClearSet<jofr3_r>(jofr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto joffset3() const -> joffset3_f {return joffset3_f(static_cast<uint16_t>(m_value >> joffset3_f::Offset));}

	constexpr jofr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jofr3_r other) const -> jofr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jofr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected channel data offset register x
 */
class jofr4_r {
public:

/**
 * Data offset for injected channel x
 */
class joffset4_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr joffset4_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jofr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jofr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jofr4_r>() const {return ClearSet<jofr4_r>(Mask, *this);}
	constexpr auto operator|(jofr4_r other) const -> jofr4_r { return static_cast<jofr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jofr4_r> other) const -> ClearSet<jofr4_r> {return ClearSet<jofr4_r>(jofr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto joffset4() const -> joffset4_f {return joffset4_f(static_cast<uint16_t>(m_value >> joffset4_f::Offset));}

	constexpr jofr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jofr4_r other) const -> jofr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jofr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * watchdog higher threshold register
 */
class htr_r {
public:

/**
 * Analog watchdog higher threshold
 */
class ht_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ht_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator htr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(htr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<htr_r>() const {return ClearSet<htr_r>(Mask, *this);}
	constexpr auto operator|(htr_r other) const -> htr_r { return static_cast<htr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<htr_r> other) const -> ClearSet<htr_r> {return ClearSet<htr_r>(htr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ht() const -> ht_f {return ht_f(static_cast<uint16_t>(m_value >> ht_f::Offset));}

	constexpr htr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(htr_r other) const -> htr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> htr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0b111111111111; // 4095 0xFFF

private:
	uint32_t m_value;
};
/**
 * watchdog lower threshold register
 */
class ltr_r {
public:

/**
 * Analog watchdog lower threshold
 */
class lt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr lt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ltr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ltr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ltr_r>() const {return ClearSet<ltr_r>(Mask, *this);}
	constexpr auto operator|(ltr_r other) const -> ltr_r { return static_cast<ltr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ltr_r> other) const -> ClearSet<ltr_r> {return ClearSet<ltr_r>(ltr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto lt() const -> lt_f {return lt_f(static_cast<uint16_t>(m_value >> lt_f::Offset));}

	constexpr ltr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ltr_r other) const -> ltr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ltr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * regular sequence register 1
 */
class sqr1_r {
public:

/**
 * Regular channel sequence length
 */
class l_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr l_f(uint8_t value) : m_value(value & Range) {}
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
 * 16th conversion in regular sequence
 */
class sq16_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq16_f(uint8_t value) : m_value(value & Range) {}
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
 * 15th conversion in regular sequence
 */
class sq15_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq15_f(uint8_t value) : m_value(value & Range) {}
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
 * 14th conversion in regular sequence
 */
class sq14_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq14_f(uint8_t value) : m_value(value & Range) {}
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
 * 13th conversion in regular sequence
 */
class sq13_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sq13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr1_r>() const {return ClearSet<sqr1_r>(Mask, *this);}
	constexpr auto operator|(sqr1_r other) const -> sqr1_r { return static_cast<sqr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr1_r> other) const -> ClearSet<sqr1_r> {return ClearSet<sqr1_r>(sqr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto l() const -> l_f {return l_f(static_cast<uint8_t>(m_value >> l_f::Offset));}
	[[nodiscard]] constexpr auto sq16() const -> sq16_f {return sq16_f(static_cast<uint8_t>(m_value >> sq16_f::Offset));}
	[[nodiscard]] constexpr auto sq15() const -> sq15_f {return sq15_f(static_cast<uint8_t>(m_value >> sq15_f::Offset));}
	[[nodiscard]] constexpr auto sq14() const -> sq14_f {return sq14_f(static_cast<uint8_t>(m_value >> sq14_f::Offset));}
	[[nodiscard]] constexpr auto sq13() const -> sq13_f {return sq13_f(static_cast<uint8_t>(m_value >> sq13_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 16 || Index == 15 || Index == 14 || Index == 13); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr1_r other) const -> sqr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
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
 * 12th conversion in regular sequence
 */
class sq12_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq12_f(uint8_t value) : m_value(value & Range) {}
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
 * 11th conversion in regular sequence
 */
class sq11_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq11_f(uint8_t value) : m_value(value & Range) {}
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
 * 10th conversion in regular sequence
 */
class sq10_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq10_f(uint8_t value) : m_value(value & Range) {}
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
 * 9th conversion in regular sequence
 */
class sq9_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq9_f(uint8_t value) : m_value(value & Range) {}
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
 * 8th conversion in regular sequence
 */
class sq8_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq8_f(uint8_t value) : m_value(value & Range) {}
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
 * 7th conversion in regular sequence
 */
class sq7_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sq7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr2_r>() const {return ClearSet<sqr2_r>(Mask, *this);}
	constexpr auto operator|(sqr2_r other) const -> sqr2_r { return static_cast<sqr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr2_r> other) const -> ClearSet<sqr2_r> {return ClearSet<sqr2_r>(sqr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sq12() const -> sq12_f {return sq12_f(static_cast<uint8_t>(m_value >> sq12_f::Offset));}
	[[nodiscard]] constexpr auto sq11() const -> sq11_f {return sq11_f(static_cast<uint8_t>(m_value >> sq11_f::Offset));}
	[[nodiscard]] constexpr auto sq10() const -> sq10_f {return sq10_f(static_cast<uint8_t>(m_value >> sq10_f::Offset));}
	[[nodiscard]] constexpr auto sq9() const -> sq9_f {return sq9_f(static_cast<uint8_t>(m_value >> sq9_f::Offset));}
	[[nodiscard]] constexpr auto sq8() const -> sq8_f {return sq8_f(static_cast<uint8_t>(m_value >> sq8_f::Offset));}
	[[nodiscard]] constexpr auto sq7() const -> sq7_f {return sq7_f(static_cast<uint8_t>(m_value >> sq7_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 12 || Index == 11 || Index == 10 || Index == 9 || Index == 8 || Index == 7); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr2_r other) const -> sqr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
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
 * 6th conversion in regular sequence
 */
class sq6_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq6_f(uint8_t value) : m_value(value & Range) {}
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
 * 5th conversion in regular sequence
 */
class sq5_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq5_f(uint8_t value) : m_value(value & Range) {}
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
 * 4th conversion in regular sequence
 */
class sq4_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sq4_f(uint8_t value) : m_value(value & Range) {}
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
 * 3rd conversion in regular sequence
 */
class sq3_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq3_f(uint8_t value) : m_value(value & Range) {}
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
 * 2nd conversion in regular sequence
 */
class sq2_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sq2_f(uint8_t value) : m_value(value & Range) {}
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
 * 1st conversion in regular sequence
 */
class sq1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sq1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sqr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sqr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sqr3_r>() const {return ClearSet<sqr3_r>(Mask, *this);}
	constexpr auto operator|(sqr3_r other) const -> sqr3_r { return static_cast<sqr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sqr3_r> other) const -> ClearSet<sqr3_r> {return ClearSet<sqr3_r>(sqr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sq6() const -> sq6_f {return sq6_f(static_cast<uint8_t>(m_value >> sq6_f::Offset));}
	[[nodiscard]] constexpr auto sq5() const -> sq5_f {return sq5_f(static_cast<uint8_t>(m_value >> sq5_f::Offset));}
	[[nodiscard]] constexpr auto sq4() const -> sq4_f {return sq4_f(static_cast<uint8_t>(m_value >> sq4_f::Offset));}
	[[nodiscard]] constexpr auto sq3() const -> sq3_f {return sq3_f(static_cast<uint8_t>(m_value >> sq3_f::Offset));}
	[[nodiscard]] constexpr auto sq2() const -> sq2_f {return sq2_f(static_cast<uint8_t>(m_value >> sq2_f::Offset));}
	[[nodiscard]] constexpr auto sq1() const -> sq1_f {return sq1_f(static_cast<uint8_t>(m_value >> sq1_f::Offset));}

	template<std::size_t Index> struct sq_f { static_assert(Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using sq_v = typename sq_f<Index>::type;
	template<std::size_t Index> constexpr auto sq() const { return sq_v<Index>::get(*this); }

	constexpr sqr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sqr3_r other) const -> sqr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sqr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
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
 * Injected sequence length
 */
class jl_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr jl_f(uint8_t value) : m_value(value & Range) {}
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
 * 4th conversion in injected sequence
 */
class jsq4_f {
public:
	static constexpr std::size_t Offset = 15;
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
 * 3rd conversion in injected sequence
 */
class jsq3_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jsq3_f(uint8_t value) : m_value(value & Range) {}
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
 * 2nd conversion in injected sequence
 */
class jsq2_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jsq2_f(uint8_t value) : m_value(value & Range) {}
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
 * 1st conversion in injected sequence
 */
class jsq1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr jsq1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator jsqr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(jsqr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jsqr_r>() const {return ClearSet<jsqr_r>(Mask, *this);}
	constexpr auto operator|(jsqr_r other) const -> jsqr_r { return static_cast<jsqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jsqr_r> other) const -> ClearSet<jsqr_r> {return ClearSet<jsqr_r>(jsqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto jl() const -> jl_f {return jl_f(static_cast<uint8_t>(m_value >> jl_f::Offset));}
	[[nodiscard]] constexpr auto jsq4() const -> jsq4_f {return jsq4_f(static_cast<uint8_t>(m_value >> jsq4_f::Offset));}
	[[nodiscard]] constexpr auto jsq3() const -> jsq3_f {return jsq3_f(static_cast<uint8_t>(m_value >> jsq3_f::Offset));}
	[[nodiscard]] constexpr auto jsq2() const -> jsq2_f {return jsq2_f(static_cast<uint8_t>(m_value >> jsq2_f::Offset));}
	[[nodiscard]] constexpr auto jsq1() const -> jsq1_f {return jsq1_f(static_cast<uint8_t>(m_value >> jsq1_f::Offset));}

	template<std::size_t Index> struct jsq_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using jsq_v = typename jsq_f<Index>::type;
	template<std::size_t Index> constexpr auto jsq() const { return jsq_v<Index>::get(*this); }

	constexpr jsqr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jsqr_r other) const -> jsqr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jsqr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register x
 */
class jdr1_r {
public:

/**
 * Injected data
 */
class jdata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr1_r>() const {return ClearSet<jdr1_r>(Mask, *this);}
	constexpr auto operator|(jdr1_r other) const -> jdr1_r { return static_cast<jdr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr1_r> other) const -> ClearSet<jdr1_r> {return ClearSet<jdr1_r>(jdr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata() const -> jdata_f {return jdata_f(static_cast<uint16_t>(m_value >> jdata_f::Offset));}

	constexpr jdr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr1_r other) const -> jdr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register x
 */
class jdr2_r {
public:

/**
 * Injected data
 */
class jdata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr2_r>() const {return ClearSet<jdr2_r>(Mask, *this);}
	constexpr auto operator|(jdr2_r other) const -> jdr2_r { return static_cast<jdr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr2_r> other) const -> ClearSet<jdr2_r> {return ClearSet<jdr2_r>(jdr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata() const -> jdata_f {return jdata_f(static_cast<uint16_t>(m_value >> jdata_f::Offset));}

	constexpr jdr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr2_r other) const -> jdr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register x
 */
class jdr3_r {
public:

/**
 * Injected data
 */
class jdata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr3_r>() const {return ClearSet<jdr3_r>(Mask, *this);}
	constexpr auto operator|(jdr3_r other) const -> jdr3_r { return static_cast<jdr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr3_r> other) const -> ClearSet<jdr3_r> {return ClearSet<jdr3_r>(jdr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata() const -> jdata_f {return jdata_f(static_cast<uint16_t>(m_value >> jdata_f::Offset));}

	constexpr jdr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr3_r other) const -> jdr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * injected data register x
 */
class jdr4_r {
public:

/**
 * Injected data
 */
class jdata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr jdata_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator jdr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(jdr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<jdr4_r>() const {return ClearSet<jdr4_r>(Mask, *this);}
	constexpr auto operator|(jdr4_r other) const -> jdr4_r { return static_cast<jdr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<jdr4_r> other) const -> ClearSet<jdr4_r> {return ClearSet<jdr4_r>(jdr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto jdata() const -> jdata_f {return jdata_f(static_cast<uint16_t>(m_value >> jdata_f::Offset));}

	constexpr jdr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(jdr4_r other) const -> jdr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> jdr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * regular data register
 */
class dr_r {
public:

/**
 * Regular data
 */
class data_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr data_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto data() const -> data_f {return data_f(static_cast<uint16_t>(m_value >> data_f::Offset));}

	constexpr dr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dr_r other) const -> dr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct smpr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using smpr_v = typename smpr_r<Index>::type;
	template<std::size_t Index> constexpr auto& smpr() { }

	template<std::size_t Index> struct jofr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using jofr_v = typename jofr_r<Index>::type;
	template<std::size_t Index> constexpr auto& jofr() { }

	template<std::size_t Index> struct sqr_r { static_assert(Index == 1 || Index == 2 || Index == 3); };
	template<std::size_t Index> using sqr_v = typename sqr_r<Index>::type;
	template<std::size_t Index> constexpr auto& sqr() { }

	template<std::size_t Index> struct jdr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using jdr_v = typename jdr_r<Index>::type;
	template<std::size_t Index> constexpr auto& jdr() { }

	Memory<uint32_t,sr_r> sr;
	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,smpr1_r> smpr1;
	Memory<uint32_t,smpr2_r> smpr2;
	Memory<uint32_t,jofr1_r> jofr1;
	Memory<uint32_t,jofr2_r> jofr2;
	Memory<uint32_t,jofr3_r> jofr3;
	Memory<uint32_t,jofr4_r> jofr4;
	Memory<uint32_t,htr_r> htr;
	Memory<uint32_t,ltr_r> ltr;
	Memory<uint32_t,sqr1_r> sqr1;
	Memory<uint32_t,sqr2_r> sqr2;
	Memory<uint32_t,sqr3_r> sqr3;
	Memory<uint32_t,jsqr_r> jsqr;
	ReadOnlyMemory<uint32_t,jdr1_r> jdr1;
	ReadOnlyMemory<uint32_t,jdr2_r> jdr2;
	ReadOnlyMemory<uint32_t,jdr3_r> jdr3;
	ReadOnlyMemory<uint32_t,jdr4_r> jdr4;
	ReadOnlyMemory<uint32_t,dr_r> dr;
};

template<> struct adc1_p::sqr1_r::sq_f<16> { using type = adc1_p::sqr1_r::sq16_f; };
template<> struct adc1_p::sqr1_r::sq_f<15> { using type = adc1_p::sqr1_r::sq15_f; };
template<> struct adc1_p::sqr1_r::sq_f<14> { using type = adc1_p::sqr1_r::sq14_f; };
template<> struct adc1_p::sqr1_r::sq_f<13> { using type = adc1_p::sqr1_r::sq13_f; };

template<> struct adc1_p::sqr2_r::sq_f<12> { using type = adc1_p::sqr2_r::sq12_f; };
template<> struct adc1_p::sqr2_r::sq_f<11> { using type = adc1_p::sqr2_r::sq11_f; };
template<> struct adc1_p::sqr2_r::sq_f<10> { using type = adc1_p::sqr2_r::sq10_f; };
template<> struct adc1_p::sqr2_r::sq_f<9> { using type = adc1_p::sqr2_r::sq9_f; };
template<> struct adc1_p::sqr2_r::sq_f<8> { using type = adc1_p::sqr2_r::sq8_f; };
template<> struct adc1_p::sqr2_r::sq_f<7> { using type = adc1_p::sqr2_r::sq7_f; };

template<> struct adc1_p::sqr3_r::sq_f<6> { using type = adc1_p::sqr3_r::sq6_f; };
template<> struct adc1_p::sqr3_r::sq_f<5> { using type = adc1_p::sqr3_r::sq5_f; };
template<> struct adc1_p::sqr3_r::sq_f<4> { using type = adc1_p::sqr3_r::sq4_f; };
template<> struct adc1_p::sqr3_r::sq_f<3> { using type = adc1_p::sqr3_r::sq3_f; };
template<> struct adc1_p::sqr3_r::sq_f<2> { using type = adc1_p::sqr3_r::sq2_f; };
template<> struct adc1_p::sqr3_r::sq_f<1> { using type = adc1_p::sqr3_r::sq1_f; };

template<> struct adc1_p::jsqr_r::jsq_f<4> { using type = adc1_p::jsqr_r::jsq4_f; };
template<> struct adc1_p::jsqr_r::jsq_f<3> { using type = adc1_p::jsqr_r::jsq3_f; };
template<> struct adc1_p::jsqr_r::jsq_f<2> { using type = adc1_p::jsqr_r::jsq2_f; };
template<> struct adc1_p::jsqr_r::jsq_f<1> { using type = adc1_p::jsqr_r::jsq1_f; };

template<> constexpr auto& adc1_p::cr<1>() { return cr1; }
template<> constexpr auto& adc1_p::cr<2>() { return cr2; }

template<> struct adc1_p::cr_r<1> { using type = adc1_p::cr1_r; };
template<> struct adc1_p::cr_r<2> { using type = adc1_p::cr2_r; };

template<> constexpr auto& adc1_p::smpr<1>() { return smpr1; }
template<> constexpr auto& adc1_p::smpr<2>() { return smpr2; }

template<> struct adc1_p::smpr_r<1> { using type = adc1_p::smpr1_r; };
template<> struct adc1_p::smpr_r<2> { using type = adc1_p::smpr2_r; };

template<> constexpr auto& adc1_p::jofr<1>() { return jofr1; }
template<> constexpr auto& adc1_p::jofr<2>() { return jofr2; }
template<> constexpr auto& adc1_p::jofr<3>() { return jofr3; }
template<> constexpr auto& adc1_p::jofr<4>() { return jofr4; }

template<> struct adc1_p::jofr_r<1> { using type = adc1_p::jofr1_r; };
template<> struct adc1_p::jofr_r<2> { using type = adc1_p::jofr2_r; };
template<> struct adc1_p::jofr_r<3> { using type = adc1_p::jofr3_r; };
template<> struct adc1_p::jofr_r<4> { using type = adc1_p::jofr4_r; };

template<> constexpr auto& adc1_p::sqr<1>() { return sqr1; }
template<> constexpr auto& adc1_p::sqr<2>() { return sqr2; }
template<> constexpr auto& adc1_p::sqr<3>() { return sqr3; }

template<> struct adc1_p::sqr_r<1> { using type = adc1_p::sqr1_r; };
template<> struct adc1_p::sqr_r<2> { using type = adc1_p::sqr2_r; };
template<> struct adc1_p::sqr_r<3> { using type = adc1_p::sqr3_r; };

template<> constexpr auto& adc1_p::jdr<1>() { return jdr1; }
template<> constexpr auto& adc1_p::jdr<2>() { return jdr2; }
template<> constexpr auto& adc1_p::jdr<3>() { return jdr3; }
template<> constexpr auto& adc1_p::jdr<4>() { return jdr4; }

template<> struct adc1_p::jdr_r<1> { using type = adc1_p::jdr1_r; };
template<> struct adc1_p::jdr_r<2> { using type = adc1_p::jdr2_r; };
template<> struct adc1_p::jdr_r<3> { using type = adc1_p::jdr3_r; };
template<> struct adc1_p::jdr_r<4> { using type = adc1_p::jdr4_r; };

static_assert(std::is_standard_layout_v<adc1_p>);
static_assert(offsetof(adc1_p, sr) == adc1_p::sr_r::Offset);
static_assert(offsetof(adc1_p, cr1) == adc1_p::cr1_r::Offset);
static_assert(offsetof(adc1_p, cr2) == adc1_p::cr2_r::Offset);
static_assert(offsetof(adc1_p, smpr1) == adc1_p::smpr1_r::Offset);
static_assert(offsetof(adc1_p, smpr2) == adc1_p::smpr2_r::Offset);
static_assert(offsetof(adc1_p, jofr1) == adc1_p::jofr1_r::Offset);
static_assert(offsetof(adc1_p, jofr2) == adc1_p::jofr2_r::Offset);
static_assert(offsetof(adc1_p, jofr3) == adc1_p::jofr3_r::Offset);
static_assert(offsetof(adc1_p, jofr4) == adc1_p::jofr4_r::Offset);
static_assert(offsetof(adc1_p, htr) == adc1_p::htr_r::Offset);
static_assert(offsetof(adc1_p, ltr) == adc1_p::ltr_r::Offset);
static_assert(offsetof(adc1_p, sqr1) == adc1_p::sqr1_r::Offset);
static_assert(offsetof(adc1_p, sqr2) == adc1_p::sqr2_r::Offset);
static_assert(offsetof(adc1_p, sqr3) == adc1_p::sqr3_r::Offset);
static_assert(offsetof(adc1_p, jsqr) == adc1_p::jsqr_r::Offset);
static_assert(offsetof(adc1_p, jdr1) == adc1_p::jdr1_r::Offset);
static_assert(offsetof(adc1_p, jdr2) == adc1_p::jdr2_r::Offset);
static_assert(offsetof(adc1_p, jdr3) == adc1_p::jdr3_r::Offset);
static_assert(offsetof(adc1_p, jdr4) == adc1_p::jdr4_r::Offset);
static_assert(offsetof(adc1_p, dr) == adc1_p::dr_r::Offset);

inline adc_common_p& adc_common = *reinterpret_cast<adc_common_p*>(0x40012300);
inline adc1_p& adc1 = *reinterpret_cast<adc1_p*>(0x40012000);

} // STM32F401

