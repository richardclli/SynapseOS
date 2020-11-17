#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Reset and clock control
 */
class rcc_p {
public:
/**
 * Clock control register
 */
class cr_r {
public:

/**
 * Main PLL clock ready flag
 */
class pllsysrdy_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pllsysrdy_f(bool value = true) : m_value(value) {}
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
 * Main PLL enable
 */
class pllsyson_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pllsyson_f(bool value = true) : m_value(value) {}
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
 * Clock security system enable
 */
class hsecsson_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hsecsson_f(bool value = true) : m_value(value) {}
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
 * HSE crystal oscillator bypass
 */
class hsebyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hsebyp_f(bool value = true) : m_value(value) {}
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
 * HSE clock ready flag
 */
class hserdy_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hserdy_f(bool value = true) : m_value(value) {}
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
 * HSE clock enable
 */
class hseon_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hseon_f(bool value = true) : m_value(value) {}
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
 * HSI clock ready flag
 */
class hsirdy_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hsirdy_f(bool value = true) : m_value(value) {}
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
 * HSI always enable for peripheral kernels
 */
class hsikeron_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hsikeron_f(bool value = true) : m_value(value) {}
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
 * HSI clock enable
 */
class hsion_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hsion_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pllsysrdy() const -> pllsysrdy_f {return pllsysrdy_f((m_value & pllsysrdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllsyson() const -> pllsyson_f {return pllsyson_f((m_value & pllsyson_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsecsson() const -> hsecsson_f {return hsecsson_f((m_value & hsecsson_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsebyp() const -> hsebyp_f {return hsebyp_f((m_value & hsebyp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hserdy() const -> hserdy_f {return hserdy_f((m_value & hserdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hseon() const -> hseon_f {return hseon_f((m_value & hseon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsirdy() const -> hsirdy_f {return hsirdy_f((m_value & hsirdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsikeron() const -> hsikeron_f {return hsikeron_f((m_value & hsikeron_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsion() const -> hsion_f {return hsion_f((m_value & hsion_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b1100011; // 99 0x63

private:
	uint32_t m_value;
};
/**
 * Internal clock sources calibration register
 */
class icscr_r {
public:

/**
 * Internal High Speed clock Calibration
 */
class hsical0_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hsical0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator icscr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(icscr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icscr_r>() const {return ClearSet<icscr_r>(Mask, *this);}
	constexpr auto operator|(icscr_r other) const -> icscr_r { return static_cast<icscr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icscr_r> other) const -> ClearSet<icscr_r> {return ClearSet<icscr_r>(icscr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Internal High Speed clock trimming
 */
class hsitrim_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hsitrim_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator icscr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(icscr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icscr_r>() const {return ClearSet<icscr_r>(Mask, *this);}
	constexpr auto operator|(icscr_r other) const -> icscr_r { return static_cast<icscr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icscr_r> other) const -> ClearSet<icscr_r> {return ClearSet<icscr_r>(icscr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto hsical0() const -> hsical0_f {return hsical0_f(static_cast<uint8_t>(m_value >> hsical0_f::Offset));}
	[[nodiscard]] constexpr auto hsitrim() const -> hsitrim_f {return hsitrim_f(static_cast<uint8_t>(m_value >> hsitrim_f::Offset));}

	constexpr icscr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icscr_r other) const -> icscr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icscr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0b1000000000000000000000000000000; // 1073741824 0x40000000

private:
	uint32_t m_value;
};
/**
 * Clock configuration register
 */
class cfgr_r {
public:

/**
 * Microcontroller clock output prescaler
 */
class mcopre_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcopre_f(uint8_t value) : m_value(value & Range) {}
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
 * Microcontroller clock output
 */
class mcosel_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcosel_f(uint8_t value) : m_value(value & Range) {}
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
 * APB high-speed prescaler (APB2)
 */
class ppre2_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ppre2_f(uint8_t value) : m_value(value & Range) {}
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
 * PB low-speed prescaler (APB1)
 */
class ppre1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ppre1_f(uint8_t value) : m_value(value & Range) {}
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
 * AHB prescaler
 */
class hpre_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr hpre_f(uint8_t value) : m_value(value & Range) {}
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
 * System clock switch status
 */
class sws_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sws_f(uint8_t value) : m_value(value & Range) {}
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
 * System clock switch
 */
class sw_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sw_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mcopre() const -> mcopre_f {return mcopre_f(static_cast<uint8_t>(m_value >> mcopre_f::Offset));}
	[[nodiscard]] constexpr auto mcosel() const -> mcosel_f {return mcosel_f(static_cast<uint8_t>(m_value >> mcosel_f::Offset));}
	[[nodiscard]] constexpr auto ppre2() const -> ppre2_f {return ppre2_f(static_cast<uint8_t>(m_value >> ppre2_f::Offset));}
	[[nodiscard]] constexpr auto ppre1() const -> ppre1_f {return ppre1_f(static_cast<uint8_t>(m_value >> ppre1_f::Offset));}
	[[nodiscard]] constexpr auto hpre() const -> hpre_f {return hpre_f(static_cast<uint8_t>(m_value >> hpre_f::Offset));}
	[[nodiscard]] constexpr auto sws() const -> sws_f {return sws_f(static_cast<uint8_t>(m_value >> sws_f::Offset));}
	[[nodiscard]] constexpr auto sw() const -> sw_f {return sw_f(static_cast<uint8_t>(m_value >> sw_f::Offset));}

	template<std::size_t Index> struct ppre_f { static_assert(Index == 2 || Index == 1); };
	template<std::size_t Index> using ppre_v = typename ppre_f<Index>::type;
	template<std::size_t Index> constexpr auto ppre() const { return ppre_v<Index>::get(*this); }

	constexpr cfgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfgr_r other) const -> cfgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b101; // 5 0x5

private:
	uint32_t m_value;
};
/**
 * PLL configuration register
 */
class pllsyscfgr_r {
public:

/**
 * Main PLL division factor for PLLSAI2CLK
 */
class pllsyspdiv_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pllsyspdiv_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pllsyscfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pllsyscfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pllsyscfgr_r>() const {return ClearSet<pllsyscfgr_r>(Mask, *this);}
	constexpr auto operator|(pllsyscfgr_r other) const -> pllsyscfgr_r { return static_cast<pllsyscfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllsyscfgr_r> other) const -> ClearSet<pllsyscfgr_r> {return ClearSet<pllsyscfgr_r>(pllsyscfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Main PLL division factor for PLLCLK (system clock)
 */
class pllsysr_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pllsysr_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pllsyscfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pllsyscfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pllsyscfgr_r>() const {return ClearSet<pllsyscfgr_r>(Mask, *this);}
	constexpr auto operator|(pllsyscfgr_r other) const -> pllsyscfgr_r { return static_cast<pllsyscfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllsyscfgr_r> other) const -> ClearSet<pllsyscfgr_r> {return ClearSet<pllsyscfgr_r>(pllsyscfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Main PLL PLLCLK output enable
 */
class pllsysren_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pllsysren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pllsyscfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pllsyscfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pllsyscfgr_r>() const {return ClearSet<pllsyscfgr_r>(Mask, *this);}
	constexpr auto operator|(pllsyscfgr_r other) const -> pllsyscfgr_r { return static_cast<pllsyscfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllsyscfgr_r> other) const -> ClearSet<pllsyscfgr_r> {return ClearSet<pllsyscfgr_r>(pllsyscfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Main PLL division factor for PLLUSB1CLK(48 MHz clock)
 */
class pllsysq_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pllsysq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pllsyscfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pllsyscfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pllsyscfgr_r>() const {return ClearSet<pllsyscfgr_r>(Mask, *this);}
	constexpr auto operator|(pllsyscfgr_r other) const -> pllsyscfgr_r { return static_cast<pllsyscfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllsyscfgr_r> other) const -> ClearSet<pllsyscfgr_r> {return ClearSet<pllsyscfgr_r>(pllsyscfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Main PLL PLLUSB1CLK output enable
 */
class pllsysqen_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pllsysqen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pllsyscfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pllsyscfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pllsyscfgr_r>() const {return ClearSet<pllsyscfgr_r>(Mask, *this);}
	constexpr auto operator|(pllsyscfgr_r other) const -> pllsyscfgr_r { return static_cast<pllsyscfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllsyscfgr_r> other) const -> ClearSet<pllsyscfgr_r> {return ClearSet<pllsyscfgr_r>(pllsyscfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Main PLL division factor for PLLSAI3CLK (SAI1 and SAI2 clock)
 */
class pllsysp_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pllsysp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pllsyscfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pllsyscfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pllsyscfgr_r>() const {return ClearSet<pllsyscfgr_r>(Mask, *this);}
	constexpr auto operator|(pllsyscfgr_r other) const -> pllsyscfgr_r { return static_cast<pllsyscfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllsyscfgr_r> other) const -> ClearSet<pllsyscfgr_r> {return ClearSet<pllsyscfgr_r>(pllsyscfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Main PLL PLLSAI3CLK output enable
 */
class pllpen_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pllpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pllsyscfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pllsyscfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pllsyscfgr_r>() const {return ClearSet<pllsyscfgr_r>(Mask, *this);}
	constexpr auto operator|(pllsyscfgr_r other) const -> pllsyscfgr_r { return static_cast<pllsyscfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllsyscfgr_r> other) const -> ClearSet<pllsyscfgr_r> {return ClearSet<pllsyscfgr_r>(pllsyscfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Main PLL multiplication factor for VCO
 */
class pllsysn_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pllsysn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pllsyscfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pllsyscfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pllsyscfgr_r>() const {return ClearSet<pllsyscfgr_r>(Mask, *this);}
	constexpr auto operator|(pllsyscfgr_r other) const -> pllsyscfgr_r { return static_cast<pllsyscfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllsyscfgr_r> other) const -> ClearSet<pllsyscfgr_r> {return ClearSet<pllsyscfgr_r>(pllsyscfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Division factor for the main PLL and audio PLL (PLLSAI1 and PLLSAI2) input clock
 */
class pllsysm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pllsysm_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pllsyscfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pllsyscfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pllsyscfgr_r>() const {return ClearSet<pllsyscfgr_r>(Mask, *this);}
	constexpr auto operator|(pllsyscfgr_r other) const -> pllsyscfgr_r { return static_cast<pllsyscfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllsyscfgr_r> other) const -> ClearSet<pllsyscfgr_r> {return ClearSet<pllsyscfgr_r>(pllsyscfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Main PLL, PLLSAI1 and PLLSAI2 entry clock source
 */
class pllsrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pllsrc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pllsyscfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pllsyscfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pllsyscfgr_r>() const {return ClearSet<pllsyscfgr_r>(Mask, *this);}
	constexpr auto operator|(pllsyscfgr_r other) const -> pllsyscfgr_r { return static_cast<pllsyscfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllsyscfgr_r> other) const -> ClearSet<pllsyscfgr_r> {return ClearSet<pllsyscfgr_r>(pllsyscfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pllsyspdiv() const -> pllsyspdiv_f {return pllsyspdiv_f(static_cast<uint8_t>(m_value >> pllsyspdiv_f::Offset));}
	[[nodiscard]] constexpr auto pllsysr() const -> pllsysr_f {return pllsysr_f(static_cast<uint8_t>(m_value >> pllsysr_f::Offset));}
	[[nodiscard]] constexpr auto pllsysren() const -> pllsysren_f {return pllsysren_f((m_value & pllsysren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllsysq() const -> pllsysq_f {return pllsysq_f(static_cast<uint8_t>(m_value >> pllsysq_f::Offset));}
	[[nodiscard]] constexpr auto pllsysqen() const -> pllsysqen_f {return pllsysqen_f((m_value & pllsysqen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllsysp() const -> pllsysp_f {return pllsysp_f((m_value & pllsysp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllpen() const -> pllpen_f {return pllpen_f((m_value & pllpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllsysn() const -> pllsysn_f {return pllsysn_f(static_cast<uint8_t>(m_value >> pllsysn_f::Offset));}
	[[nodiscard]] constexpr auto pllsysm() const -> pllsysm_f {return pllsysm_f(static_cast<uint8_t>(m_value >> pllsysm_f::Offset));}
	[[nodiscard]] constexpr auto pllsrc() const -> pllsrc_f {return pllsrc_f(static_cast<uint8_t>(m_value >> pllsrc_f::Offset));}

	constexpr pllsyscfgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pllsyscfgr_r other) const -> pllsyscfgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pllsyscfgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0b1000000000000; // 4096 0x1000

private:
	uint32_t m_value;
};
/**
 * Clock interrupt enable register
 */
class cier_r {
public:

/**
 * LSI ready interrupt enable
 */
class lsirdyie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsirdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cier_r>() const {return ClearSet<cier_r>(Mask, *this);}
	constexpr auto operator|(cier_r other) const -> cier_r { return static_cast<cier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cier_r> other) const -> ClearSet<cier_r> {return ClearSet<cier_r>(cier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSE ready interrupt enable
 */
class lserdyie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lserdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cier_r>() const {return ClearSet<cier_r>(Mask, *this);}
	constexpr auto operator|(cier_r other) const -> cier_r { return static_cast<cier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cier_r> other) const -> ClearSet<cier_r> {return ClearSet<cier_r>(cier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI ready interrupt enable
 */
class hsirdyie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hsirdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cier_r>() const {return ClearSet<cier_r>(Mask, *this);}
	constexpr auto operator|(cier_r other) const -> cier_r { return static_cast<cier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cier_r> other) const -> ClearSet<cier_r> {return ClearSet<cier_r>(cier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSE ready interrupt enable
 */
class hserdyie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hserdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cier_r>() const {return ClearSet<cier_r>(Mask, *this);}
	constexpr auto operator|(cier_r other) const -> cier_r { return static_cast<cier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cier_r> other) const -> ClearSet<cier_r> {return ClearSet<cier_r>(cier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PLL ready interrupt enable
 */
class pllsysrdyie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pllsysrdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cier_r>() const {return ClearSet<cier_r>(Mask, *this);}
	constexpr auto operator|(cier_r other) const -> cier_r { return static_cast<cier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cier_r> other) const -> ClearSet<cier_r> {return ClearSet<cier_r>(cier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSE clock security system interrupt enable
 */
class lsecssie_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lsecssie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cier_r>() const {return ClearSet<cier_r>(Mask, *this);}
	constexpr auto operator|(cier_r other) const -> cier_r { return static_cast<cier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cier_r> other) const -> ClearSet<cier_r> {return ClearSet<cier_r>(cier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI48 ready interrupt enable
 */
class rc48rdyie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rc48rdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cier_r>() const {return ClearSet<cier_r>(Mask, *this);}
	constexpr auto operator|(cier_r other) const -> cier_r { return static_cast<cier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cier_r> other) const -> ClearSet<cier_r> {return ClearSet<cier_r>(cier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lsirdyie() const -> lsirdyie_f {return lsirdyie_f((m_value & lsirdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lserdyie() const -> lserdyie_f {return lserdyie_f((m_value & lserdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsirdyie() const -> hsirdyie_f {return hsirdyie_f((m_value & hsirdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hserdyie() const -> hserdyie_f {return hserdyie_f((m_value & hserdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllsysrdyie() const -> pllsysrdyie_f {return pllsysrdyie_f((m_value & pllsysrdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsecssie() const -> lsecssie_f {return lsecssie_f((m_value & lsecssie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rc48rdyie() const -> rc48rdyie_f {return rc48rdyie_f((m_value & rc48rdyie_f::Mask) != 0);}

	constexpr cier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cier_r other) const -> cier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Clock interrupt flag register
 */
class cifr_r {
public:

/**
 * LSI ready interrupt flag
 */
class lsirdyf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsirdyf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cifr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cifr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cifr_r>() const {return ClearSet<cifr_r>(Mask, *this);}
	constexpr auto operator|(cifr_r other) const -> cifr_r { return static_cast<cifr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cifr_r> other) const -> ClearSet<cifr_r> {return ClearSet<cifr_r>(cifr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSE ready interrupt flag
 */
class lserdyf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lserdyf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cifr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cifr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cifr_r>() const {return ClearSet<cifr_r>(Mask, *this);}
	constexpr auto operator|(cifr_r other) const -> cifr_r { return static_cast<cifr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cifr_r> other) const -> ClearSet<cifr_r> {return ClearSet<cifr_r>(cifr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI ready interrupt flag
 */
class hsirdyf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hsirdyf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cifr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cifr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cifr_r>() const {return ClearSet<cifr_r>(Mask, *this);}
	constexpr auto operator|(cifr_r other) const -> cifr_r { return static_cast<cifr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cifr_r> other) const -> ClearSet<cifr_r> {return ClearSet<cifr_r>(cifr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSE ready interrupt flag
 */
class hserdyf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hserdyf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cifr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cifr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cifr_r>() const {return ClearSet<cifr_r>(Mask, *this);}
	constexpr auto operator|(cifr_r other) const -> cifr_r { return static_cast<cifr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cifr_r> other) const -> ClearSet<cifr_r> {return ClearSet<cifr_r>(cifr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PLL ready interrupt flag
 */
class pllsysrdyf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pllsysrdyf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cifr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cifr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cifr_r>() const {return ClearSet<cifr_r>(Mask, *this);}
	constexpr auto operator|(cifr_r other) const -> cifr_r { return static_cast<cifr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cifr_r> other) const -> ClearSet<cifr_r> {return ClearSet<cifr_r>(cifr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clock security system interrupt flag
 */
class hsecssf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hsecssf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cifr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cifr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cifr_r>() const {return ClearSet<cifr_r>(Mask, *this);}
	constexpr auto operator|(cifr_r other) const -> cifr_r { return static_cast<cifr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cifr_r> other) const -> ClearSet<cifr_r> {return ClearSet<cifr_r>(cifr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSE Clock security system interrupt flag
 */
class lsecssf_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lsecssf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cifr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cifr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cifr_r>() const {return ClearSet<cifr_r>(Mask, *this);}
	constexpr auto operator|(cifr_r other) const -> cifr_r { return static_cast<cifr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cifr_r> other) const -> ClearSet<cifr_r> {return ClearSet<cifr_r>(cifr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI48 ready interrupt flag
 */
class rc48rdyf_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rc48rdyf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cifr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cifr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cifr_r>() const {return ClearSet<cifr_r>(Mask, *this);}
	constexpr auto operator|(cifr_r other) const -> cifr_r { return static_cast<cifr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cifr_r> other) const -> ClearSet<cifr_r> {return ClearSet<cifr_r>(cifr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lsirdyf() const -> lsirdyf_f {return lsirdyf_f((m_value & lsirdyf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lserdyf() const -> lserdyf_f {return lserdyf_f((m_value & lserdyf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsirdyf() const -> hsirdyf_f {return hsirdyf_f((m_value & hsirdyf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hserdyf() const -> hserdyf_f {return hserdyf_f((m_value & hserdyf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllsysrdyf() const -> pllsysrdyf_f {return pllsysrdyf_f((m_value & pllsysrdyf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsecssf() const -> hsecssf_f {return hsecssf_f((m_value & hsecssf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsecssf() const -> lsecssf_f {return lsecssf_f((m_value & lsecssf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rc48rdyf() const -> rc48rdyf_f {return rc48rdyf_f((m_value & rc48rdyf_f::Mask) != 0);}

	constexpr cifr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cifr_r other) const -> cifr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cifr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Clock interrupt clear register
 */
class cicr_r {
public:

/**
 * LSI ready interrupt clear
 */
class lsirdyc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsirdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cicr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cicr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cicr_r>() const {return ClearSet<cicr_r>(Mask, *this);}
	constexpr auto operator|(cicr_r other) const -> cicr_r { return static_cast<cicr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cicr_r> other) const -> ClearSet<cicr_r> {return ClearSet<cicr_r>(cicr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSE ready interrupt clear
 */
class lserdyc_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lserdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cicr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cicr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cicr_r>() const {return ClearSet<cicr_r>(Mask, *this);}
	constexpr auto operator|(cicr_r other) const -> cicr_r { return static_cast<cicr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cicr_r> other) const -> ClearSet<cicr_r> {return ClearSet<cicr_r>(cicr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI ready interrupt clear
 */
class hsirdyc_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hsirdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cicr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cicr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cicr_r>() const {return ClearSet<cicr_r>(Mask, *this);}
	constexpr auto operator|(cicr_r other) const -> cicr_r { return static_cast<cicr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cicr_r> other) const -> ClearSet<cicr_r> {return ClearSet<cicr_r>(cicr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSE ready interrupt clear
 */
class hserdyc_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hserdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cicr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cicr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cicr_r>() const {return ClearSet<cicr_r>(Mask, *this);}
	constexpr auto operator|(cicr_r other) const -> cicr_r { return static_cast<cicr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cicr_r> other) const -> ClearSet<cicr_r> {return ClearSet<cicr_r>(cicr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PLL ready interrupt clear
 */
class pllsysrdyc_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pllsysrdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cicr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cicr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cicr_r>() const {return ClearSet<cicr_r>(Mask, *this);}
	constexpr auto operator|(cicr_r other) const -> cicr_r { return static_cast<cicr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cicr_r> other) const -> ClearSet<cicr_r> {return ClearSet<cicr_r>(cicr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clock security system interrupt clear
 */
class hsecssc_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hsecssc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cicr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cicr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cicr_r>() const {return ClearSet<cicr_r>(Mask, *this);}
	constexpr auto operator|(cicr_r other) const -> cicr_r { return static_cast<cicr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cicr_r> other) const -> ClearSet<cicr_r> {return ClearSet<cicr_r>(cicr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSE Clock security system interrupt clear
 */
class lsecssc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lsecssc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cicr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cicr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cicr_r>() const {return ClearSet<cicr_r>(Mask, *this);}
	constexpr auto operator|(cicr_r other) const -> cicr_r { return static_cast<cicr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cicr_r> other) const -> ClearSet<cicr_r> {return ClearSet<cicr_r>(cicr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI48 oscillator ready interrupt clear
 */
class rc48rdyc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rc48rdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cicr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cicr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cicr_r>() const {return ClearSet<cicr_r>(Mask, *this);}
	constexpr auto operator|(cicr_r other) const -> cicr_r { return static_cast<cicr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cicr_r> other) const -> ClearSet<cicr_r> {return ClearSet<cicr_r>(cicr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lsirdyc() const -> lsirdyc_f {return lsirdyc_f((m_value & lsirdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lserdyc() const -> lserdyc_f {return lserdyc_f((m_value & lserdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsirdyc() const -> hsirdyc_f {return hsirdyc_f((m_value & hsirdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hserdyc() const -> hserdyc_f {return hserdyc_f((m_value & hserdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllsysrdyc() const -> pllsysrdyc_f {return pllsysrdyc_f((m_value & pllsysrdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsecssc() const -> hsecssc_f {return hsecssc_f((m_value & hsecssc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsecssc() const -> lsecssc_f {return lsecssc_f((m_value & lsecssc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rc48rdyc() const -> rc48rdyc_f {return rc48rdyc_f((m_value & rc48rdyc_f::Mask) != 0);}

	constexpr cicr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cicr_r other) const -> cicr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cicr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AHB1 peripheral reset register
 */
class ahb1rstr_r {
public:

/**
 * DMA1 reset
 */
class dma1rst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dma1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA2 reset
 */
class dma2rst_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dma2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMAMUXRST
 */
class dmamux1rst_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmamux1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CORDIC reset
 */
class cordicrst_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cordicrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MATRIX reset
 */
class matrixrst_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr matrixrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FLITF reset
 */
class flitfrst__f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr flitfrst__f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CRC reset
 */
class crcrst_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr crcrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dma1rst() const -> dma1rst_f {return dma1rst_f((m_value & dma1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dma2rst() const -> dma2rst_f {return dma2rst_f((m_value & dma2rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmamux1rst() const -> dmamux1rst_f {return dmamux1rst_f((m_value & dmamux1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cordicrst() const -> cordicrst_f {return cordicrst_f((m_value & cordicrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto matrixrst() const -> matrixrst_f {return matrixrst_f((m_value & matrixrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto flitfrst_() const -> flitfrst__f {return flitfrst__f((m_value & flitfrst__f::Mask) != 0);}
	[[nodiscard]] constexpr auto crcrst() const -> crcrst_f {return crcrst_f((m_value & crcrst_f::Mask) != 0);}

	constexpr ahb1rstr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb1rstr_r other) const -> ahb1rstr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb1rstr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AHB2 peripheral reset register
 */
class ahb2rstr_r {
public:

/**
 * IO port A reset
 */
class gpioarst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioarst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port B reset
 */
class gpiobrst_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiobrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port C reset
 */
class gpiocrst_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiocrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port D reset
 */
class gpiodrst_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiodrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port E reset
 */
class gpioerst_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioerst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port F reset
 */
class gpiofrst_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiofrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port G reset
 */
class gpiogrst_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiogrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADC reset
 */
class adc12rst_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr adc12rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SAR ADC345 interface reset
 */
class adc345rst__f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr adc345rst__f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC1 interface reset
 */
class dac1rst__f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac1rst__f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC2 interface reset
 */
class dac2rst_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC3 interface reset
 */
class dac3rst_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac3rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC4 interface reset
 */
class dac4rst_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac4rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Cryptography module reset
 */
class cryptrst_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cryptrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Random Number Generator module reset
 */
class rngrst_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rngrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto gpioarst() const -> gpioarst_f {return gpioarst_f((m_value & gpioarst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiobrst() const -> gpiobrst_f {return gpiobrst_f((m_value & gpiobrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiocrst() const -> gpiocrst_f {return gpiocrst_f((m_value & gpiocrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiodrst() const -> gpiodrst_f {return gpiodrst_f((m_value & gpiodrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioerst() const -> gpioerst_f {return gpioerst_f((m_value & gpioerst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiofrst() const -> gpiofrst_f {return gpiofrst_f((m_value & gpiofrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiogrst() const -> gpiogrst_f {return gpiogrst_f((m_value & gpiogrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adc12rst() const -> adc12rst_f {return adc12rst_f((m_value & adc12rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adc345rst_() const -> adc345rst__f {return adc345rst__f((m_value & adc345rst__f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac1rst_() const -> dac1rst__f {return dac1rst__f((m_value & dac1rst__f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac2rst() const -> dac2rst_f {return dac2rst_f((m_value & dac2rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac3rst() const -> dac3rst_f {return dac3rst_f((m_value & dac3rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac4rst() const -> dac4rst_f {return dac4rst_f((m_value & dac4rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cryptrst() const -> cryptrst_f {return cryptrst_f((m_value & cryptrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rngrst() const -> rngrst_f {return rngrst_f((m_value & rngrst_f::Mask) != 0);}

	constexpr ahb2rstr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb2rstr_r other) const -> ahb2rstr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb2rstr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AHB3 peripheral reset register
 */
class ahb3rstr_r {
public:

/**
 * Flexible memory controller reset
 */
class fmcrst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fmcrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb3rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb3rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb3rstr_r>() const {return ClearSet<ahb3rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb3rstr_r other) const -> ahb3rstr_r { return static_cast<ahb3rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb3rstr_r> other) const -> ClearSet<ahb3rstr_r> {return ClearSet<ahb3rstr_r>(ahb3rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Quad SPI 1 module reset
 */
class quadspi1rst_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr quadspi1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb3rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb3rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb3rstr_r>() const {return ClearSet<ahb3rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb3rstr_r other) const -> ahb3rstr_r { return static_cast<ahb3rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb3rstr_r> other) const -> ClearSet<ahb3rstr_r> {return ClearSet<ahb3rstr_r>(ahb3rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto fmcrst() const -> fmcrst_f {return fmcrst_f((m_value & fmcrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto quadspi1rst() const -> quadspi1rst_f {return quadspi1rst_f((m_value & quadspi1rst_f::Mask) != 0);}

	constexpr ahb3rstr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb3rstr_r other) const -> ahb3rstr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb3rstr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB1 peripheral reset register 1
 */
class apb1rstr1_r {
public:

/**
 * Low Power Timer 1 reset
 */
class lptim1rst_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lptim1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C3 interface reset
 */
class i2c3_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Power interface reset
 */
class pwrrst_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pwrrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FDCAN reset
 */
class fdcanrst_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fdcanrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USBD reset
 */
class usbdrst_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usbdrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C2 reset
 */
class i2c2rst_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C1 reset
 */
class i2c1rst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * UART5 reset
 */
class uart5rst_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uart5rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * UART4 reset
 */
class uart4rst_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uart4rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART3 reset
 */
class usart3rst_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usart3rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART2 reset
 */
class usart2rst_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usart2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI3 reset
 */
class spi3rst_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi3rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI2 reset
 */
class spi2rst_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clock recovery system reset
 */
class crsrst_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr crsrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM7 timer reset
 */
class tim7rst_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim7rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM6 timer reset
 */
class tim6rst_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim6rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM5 timer reset
 */
class tim5rst_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim5rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM3 timer reset
 */
class tim4rst_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim4rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM3 timer reset
 */
class tim3rst_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim3rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM2 timer reset
 */
class tim2rst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr1_r>() const {return ClearSet<apb1rstr1_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr1_r other) const -> apb1rstr1_r { return static_cast<apb1rstr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr1_r> other) const -> ClearSet<apb1rstr1_r> {return ClearSet<apb1rstr1_r>(apb1rstr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lptim1rst() const -> lptim1rst_f {return lptim1rst_f((m_value & lptim1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c3() const -> i2c3_f {return i2c3_f((m_value & i2c3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pwrrst() const -> pwrrst_f {return pwrrst_f((m_value & pwrrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fdcanrst() const -> fdcanrst_f {return fdcanrst_f((m_value & fdcanrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbdrst() const -> usbdrst_f {return usbdrst_f((m_value & usbdrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c2rst() const -> i2c2rst_f {return i2c2rst_f((m_value & i2c2rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c1rst() const -> i2c1rst_f {return i2c1rst_f((m_value & i2c1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uart5rst() const -> uart5rst_f {return uart5rst_f((m_value & uart5rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uart4rst() const -> uart4rst_f {return uart4rst_f((m_value & uart4rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart3rst() const -> usart3rst_f {return usart3rst_f((m_value & usart3rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart2rst() const -> usart2rst_f {return usart2rst_f((m_value & usart2rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi3rst() const -> spi3rst_f {return spi3rst_f((m_value & spi3rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi2rst() const -> spi2rst_f {return spi2rst_f((m_value & spi2rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crsrst() const -> crsrst_f {return crsrst_f((m_value & crsrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim7rst() const -> tim7rst_f {return tim7rst_f((m_value & tim7rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim6rst() const -> tim6rst_f {return tim6rst_f((m_value & tim6rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim5rst() const -> tim5rst_f {return tim5rst_f((m_value & tim5rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim4rst() const -> tim4rst_f {return tim4rst_f((m_value & tim4rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim3rst() const -> tim3rst_f {return tim3rst_f((m_value & tim3rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim2rst() const -> tim2rst_f {return tim2rst_f((m_value & tim2rst_f::Mask) != 0);}

	constexpr apb1rstr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1rstr1_r other) const -> apb1rstr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1rstr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB1 peripheral reset register 2
 */
class apb1rstr2_r {
public:

/**
 * Low-power UART 1 reset
 */
class lpuart1rst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lpuart1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr2_r>() const {return ClearSet<apb1rstr2_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr2_r other) const -> apb1rstr2_r { return static_cast<apb1rstr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr2_r> other) const -> ClearSet<apb1rstr2_r> {return ClearSet<apb1rstr2_r>(apb1rstr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C4 reset
 */
class i2c4rst_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr i2c4rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr2_r>() const {return ClearSet<apb1rstr2_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr2_r other) const -> apb1rstr2_r { return static_cast<apb1rstr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr2_r> other) const -> ClearSet<apb1rstr2_r> {return ClearSet<apb1rstr2_r>(apb1rstr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USBPD reset
 */
class usbpdrst_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbpdrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1rstr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1rstr2_r>() const {return ClearSet<apb1rstr2_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr2_r other) const -> apb1rstr2_r { return static_cast<apb1rstr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr2_r> other) const -> ClearSet<apb1rstr2_r> {return ClearSet<apb1rstr2_r>(apb1rstr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lpuart1rst() const -> lpuart1rst_f {return lpuart1rst_f((m_value & lpuart1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c4rst() const -> i2c4rst_f {return i2c4rst_f((m_value & i2c4rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbpdrst() const -> usbpdrst_f {return usbpdrst_f((m_value & usbpdrst_f::Mask) != 0);}

	constexpr apb1rstr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1rstr2_r other) const -> apb1rstr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1rstr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB2 peripheral reset register
 */
class apb2rstr_r {
public:

/**
 * System configuration (SYSCFG) reset
 */
class syscfgrst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr syscfgrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM1 timer reset
 */
class tim1rst_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tim1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI1 reset
 */
class spi1rst_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM8 timer reset
 */
class tim8rst_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tim8rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART1 reset
 */
class usart1rst_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usart1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI 4 reset
 */
class spi4rst_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi4rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM15 timer reset
 */
class tim15rst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim15rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM16 timer reset
 */
class tim16rst_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim16rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM17 timer reset
 */
class tim17rst_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim17rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Timer 20 reset
 */
class tim20rst_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim20rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Serial audio interface 1 (SAI1) reset
 */
class sai1rst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sai1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HRTIMER reset
 */
class hrtim1rst_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hrtim1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2rstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto syscfgrst() const -> syscfgrst_f {return syscfgrst_f((m_value & syscfgrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim1rst() const -> tim1rst_f {return tim1rst_f((m_value & tim1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi1rst() const -> spi1rst_f {return spi1rst_f((m_value & spi1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim8rst() const -> tim8rst_f {return tim8rst_f((m_value & tim8rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart1rst() const -> usart1rst_f {return usart1rst_f((m_value & usart1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi4rst() const -> spi4rst_f {return spi4rst_f((m_value & spi4rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim15rst() const -> tim15rst_f {return tim15rst_f((m_value & tim15rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim16rst() const -> tim16rst_f {return tim16rst_f((m_value & tim16rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim17rst() const -> tim17rst_f {return tim17rst_f((m_value & tim17rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim20rst() const -> tim20rst_f {return tim20rst_f((m_value & tim20rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sai1rst() const -> sai1rst_f {return sai1rst_f((m_value & sai1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hrtim1rst() const -> hrtim1rst_f {return hrtim1rst_f((m_value & hrtim1rst_f::Mask) != 0);}

	constexpr apb2rstr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb2rstr_r other) const -> apb2rstr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb2rstr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AHB1 peripheral clock enable register
 */
class ahb1enr_r {
public:

/**
 * DMA1 clock enable
 */
class dma1en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dma1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA2 clock enable
 */
class dma2en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dma2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMAMUX clock enable
 */
class dmamuxen_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmamuxen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CORDIC clock enable
 */
class cordicen_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cordicen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FMAC clock enable
 */
class fmacen_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fmacen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FLITF clock enable
 */
class flitfen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr flitfen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CRC clock enable
 */
class crcen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr crcen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dma1en() const -> dma1en_f {return dma1en_f((m_value & dma1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dma2en() const -> dma2en_f {return dma2en_f((m_value & dma2en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmamuxen() const -> dmamuxen_f {return dmamuxen_f((m_value & dmamuxen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cordicen() const -> cordicen_f {return cordicen_f((m_value & cordicen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fmacen() const -> fmacen_f {return fmacen_f((m_value & fmacen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto flitfen() const -> flitfen_f {return flitfen_f((m_value & flitfen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crcen() const -> crcen_f {return crcen_f((m_value & crcen_f::Mask) != 0);}

	constexpr ahb1enr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb1enr_r other) const -> ahb1enr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb1enr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0b100000000; // 256 0x100

private:
	uint32_t m_value;
};
/**
 * AHB2 peripheral clock enable register
 */
class ahb2enr_r {
public:

/**
 * IO port A clock enable
 */
class gpioaen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port B clock enable
 */
class gpioben_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioben_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port C clock enable
 */
class gpiocen_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiocen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port D clock enable
 */
class gpioden_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioden_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port E clock enable
 */
class gpioeen_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioeen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port F clock enable
 */
class gpiofen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiofen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port G clock enable
 */
class gpiogen_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiogen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADC clock enable
 */
class adc12en_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr adc12en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DCMI clock enable
 */
class adc345en_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr adc345en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AES accelerator clock enable
 */
class dac1_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HASH clock enable
 */
class dac2_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Random Number Generator clock enable
 */
class dac3_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC4 clock enable
 */
class dac4_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Cryptography clock enable
 */
class crypten_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr crypten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Random Number Generator clock enable
 */
class rngen_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rngen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto gpioaen() const -> gpioaen_f {return gpioaen_f((m_value & gpioaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioben() const -> gpioben_f {return gpioben_f((m_value & gpioben_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiocen() const -> gpiocen_f {return gpiocen_f((m_value & gpiocen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioden() const -> gpioden_f {return gpioden_f((m_value & gpioden_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioeen() const -> gpioeen_f {return gpioeen_f((m_value & gpioeen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiofen() const -> gpiofen_f {return gpiofen_f((m_value & gpiofen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiogen() const -> gpiogen_f {return gpiogen_f((m_value & gpiogen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adc12en() const -> adc12en_f {return adc12en_f((m_value & adc12en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adc345en() const -> adc345en_f {return adc345en_f((m_value & adc345en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac1() const -> dac1_f {return dac1_f((m_value & dac1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac2() const -> dac2_f {return dac2_f((m_value & dac2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac3() const -> dac3_f {return dac3_f((m_value & dac3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac4() const -> dac4_f {return dac4_f((m_value & dac4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crypten() const -> crypten_f {return crypten_f((m_value & crypten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rngen() const -> rngen_f {return rngen_f((m_value & rngen_f::Mask) != 0);}

	template<std::size_t Index> struct dac_f { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using dac_v = typename dac_f<Index>::type;
	template<std::size_t Index> constexpr auto dac() const { return dac_v<Index>::get(*this); }

	constexpr ahb2enr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb2enr_r other) const -> ahb2enr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb2enr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AHB3 peripheral clock enable register
 */
class ahb3enr_r {
public:

/**
 * Flexible memory controller clock enable
 */
class fmcen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fmcen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb3enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb3enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb3enr_r>() const {return ClearSet<ahb3enr_r>(Mask, *this);}
	constexpr auto operator|(ahb3enr_r other) const -> ahb3enr_r { return static_cast<ahb3enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb3enr_r> other) const -> ClearSet<ahb3enr_r> {return ClearSet<ahb3enr_r>(ahb3enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Quad SPI 1 module clock enable
 */
class quadspi1en_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr quadspi1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb3enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb3enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb3enr_r>() const {return ClearSet<ahb3enr_r>(Mask, *this);}
	constexpr auto operator|(ahb3enr_r other) const -> ahb3enr_r { return static_cast<ahb3enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb3enr_r> other) const -> ClearSet<ahb3enr_r> {return ClearSet<ahb3enr_r>(ahb3enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto fmcen() const -> fmcen_f {return fmcen_f((m_value & fmcen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto quadspi1en() const -> quadspi1en_f {return quadspi1en_f((m_value & quadspi1en_f::Mask) != 0);}

	constexpr ahb3enr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb3enr_r other) const -> ahb3enr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb3enr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB1ENR1
 */
class apb1enr1_r {
public:

/**
 * TIM2 timer clock enable
 */
class tim2en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM3 timer clock enable
 */
class tim3en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim3en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM4 timer clock enable
 */
class tim4en_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim4en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM5 timer clock enable
 */
class tim5en_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim5en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM6 timer clock enable
 */
class tim6en_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim6en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM7 timer clock enable
 */
class tim7en_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim7en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CRSclock enable
 */
class crsen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr crsen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RTC APB clock enable
 */
class rtcapben_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtcapben_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Window watchdog clock enable
 */
class wwdgen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wwdgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI2 clock enable
 */
class spi2en_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI3 clock enable
 */
class sp3en_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sp3en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART2 clock enable
 */
class usart2en_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usart2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART3 clock enable
 */
class usart3en_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usart3en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * UART4 clock enable
 */
class uart4en_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uart4en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * UART5 clock enable
 */
class uart5en_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uart5en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C1 clock enable
 */
class i2c1en_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C2 clock enable
 */
class i2c2en_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USBDclock enable
 */
class usbden_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usbden_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FDCAN clock enable
 */
class fdcanen_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fdcanen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Power interface clock enable
 */
class pwren_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pwren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OPAMP interface clock enable
 */
class i2c3_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Low power timer 1 clock enable
 */
class lptim1en_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lptim1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr1_r>() const {return ClearSet<apb1enr1_r>(Mask, *this);}
	constexpr auto operator|(apb1enr1_r other) const -> apb1enr1_r { return static_cast<apb1enr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr1_r> other) const -> ClearSet<apb1enr1_r> {return ClearSet<apb1enr1_r>(apb1enr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tim2en() const -> tim2en_f {return tim2en_f((m_value & tim2en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim3en() const -> tim3en_f {return tim3en_f((m_value & tim3en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim4en() const -> tim4en_f {return tim4en_f((m_value & tim4en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim5en() const -> tim5en_f {return tim5en_f((m_value & tim5en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim6en() const -> tim6en_f {return tim6en_f((m_value & tim6en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim7en() const -> tim7en_f {return tim7en_f((m_value & tim7en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crsen() const -> crsen_f {return crsen_f((m_value & crsen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtcapben() const -> rtcapben_f {return rtcapben_f((m_value & rtcapben_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wwdgen() const -> wwdgen_f {return wwdgen_f((m_value & wwdgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi2en() const -> spi2en_f {return spi2en_f((m_value & spi2en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sp3en() const -> sp3en_f {return sp3en_f((m_value & sp3en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart2en() const -> usart2en_f {return usart2en_f((m_value & usart2en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart3en() const -> usart3en_f {return usart3en_f((m_value & usart3en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uart4en() const -> uart4en_f {return uart4en_f((m_value & uart4en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uart5en() const -> uart5en_f {return uart5en_f((m_value & uart5en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c1en() const -> i2c1en_f {return i2c1en_f((m_value & i2c1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c2en() const -> i2c2en_f {return i2c2en_f((m_value & i2c2en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbden() const -> usbden_f {return usbden_f((m_value & usbden_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fdcanen() const -> fdcanen_f {return fdcanen_f((m_value & fdcanen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pwren() const -> pwren_f {return pwren_f((m_value & pwren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c3() const -> i2c3_f {return i2c3_f((m_value & i2c3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lptim1en() const -> lptim1en_f {return lptim1en_f((m_value & lptim1en_f::Mask) != 0);}

	constexpr apb1enr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1enr1_r other) const -> apb1enr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1enr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 88;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB1 peripheral clock enable register 2
 */
class apb1enr2_r {
public:

/**
 * Low power UART 1 clock enable
 */
class lpuart1en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lpuart1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr2_r>() const {return ClearSet<apb1enr2_r>(Mask, *this);}
	constexpr auto operator|(apb1enr2_r other) const -> apb1enr2_r { return static_cast<apb1enr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr2_r> other) const -> ClearSet<apb1enr2_r> {return ClearSet<apb1enr2_r>(apb1enr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C4 clock enable
 */
class i2c4en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr i2c4en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr2_r>() const {return ClearSet<apb1enr2_r>(Mask, *this);}
	constexpr auto operator|(apb1enr2_r other) const -> apb1enr2_r { return static_cast<apb1enr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr2_r> other) const -> ClearSet<apb1enr2_r> {return ClearSet<apb1enr2_r>(apb1enr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USBPD clock enable
 */
class usbpden_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbpden_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1enr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1enr2_r>() const {return ClearSet<apb1enr2_r>(Mask, *this);}
	constexpr auto operator|(apb1enr2_r other) const -> apb1enr2_r { return static_cast<apb1enr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr2_r> other) const -> ClearSet<apb1enr2_r> {return ClearSet<apb1enr2_r>(apb1enr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lpuart1en() const -> lpuart1en_f {return lpuart1en_f((m_value & lpuart1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c4en() const -> i2c4en_f {return i2c4en_f((m_value & i2c4en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbpden() const -> usbpden_f {return usbpden_f((m_value & usbpden_f::Mask) != 0);}

	constexpr apb1enr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1enr2_r other) const -> apb1enr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1enr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB2ENR
 */
class apb2enr_r {
public:

/**
 * SYSCFG clock enable
 */
class syscfgen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr syscfgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM1 timer clock enable
 */
class tim1en_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tim1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI1 clock enable
 */
class spi1en_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM8 timer clock enable
 */
class tim8en_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tim8en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART1clock enable
 */
class usart1en_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usart1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI 4 clock enable
 */
class spi4en_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi4en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM15 timer clock enable
 */
class tim15en_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim15en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM16 timer clock enable
 */
class tim16en_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim16en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM17 timer clock enable
 */
class tim17en_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim17en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Timer 20 clock enable
 */
class tim20en_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim20en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SAI1 clock enable
 */
class sai1en_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sai1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HRTIMER clock enable
 */
class hrtimeren_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hrtimeren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2enr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto syscfgen() const -> syscfgen_f {return syscfgen_f((m_value & syscfgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim1en() const -> tim1en_f {return tim1en_f((m_value & tim1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi1en() const -> spi1en_f {return spi1en_f((m_value & spi1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim8en() const -> tim8en_f {return tim8en_f((m_value & tim8en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart1en() const -> usart1en_f {return usart1en_f((m_value & usart1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi4en() const -> spi4en_f {return spi4en_f((m_value & spi4en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim15en() const -> tim15en_f {return tim15en_f((m_value & tim15en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim16en() const -> tim16en_f {return tim16en_f((m_value & tim16en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim17en() const -> tim17en_f {return tim17en_f((m_value & tim17en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim20en() const -> tim20en_f {return tim20en_f((m_value & tim20en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sai1en() const -> sai1en_f {return sai1en_f((m_value & sai1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hrtimeren() const -> hrtimeren_f {return hrtimeren_f((m_value & hrtimeren_f::Mask) != 0);}

	constexpr apb2enr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb2enr_r other) const -> apb2enr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb2enr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AHB1 peripheral clocks enable in Sleep and Stop modes register
 */
class ahb1smenr_r {
public:

/**
 * DMA1 clocks enable during Sleep and Stop modes
 */
class dma1smen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dma1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1smenr_r>() const {return ClearSet<ahb1smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1smenr_r other) const -> ahb1smenr_r { return static_cast<ahb1smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1smenr_r> other) const -> ClearSet<ahb1smenr_r> {return ClearSet<ahb1smenr_r>(ahb1smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA2 clocks enable during Sleep and Stop modes
 */
class dma2smen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dma2smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1smenr_r>() const {return ClearSet<ahb1smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1smenr_r other) const -> ahb1smenr_r { return static_cast<ahb1smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1smenr_r> other) const -> ClearSet<ahb1smenr_r> {return ClearSet<ahb1smenr_r>(ahb1smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMAMUX clock enable during Sleep and Stop modes
 */
class dmamux1smen_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmamux1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1smenr_r>() const {return ClearSet<ahb1smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1smenr_r other) const -> ahb1smenr_r { return static_cast<ahb1smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1smenr_r> other) const -> ClearSet<ahb1smenr_r> {return ClearSet<ahb1smenr_r>(ahb1smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CORDIC clock enable during sleep mode
 */
class cordicsmen_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cordicsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1smenr_r>() const {return ClearSet<ahb1smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1smenr_r other) const -> ahb1smenr_r { return static_cast<ahb1smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1smenr_r> other) const -> ClearSet<ahb1smenr_r> {return ClearSet<ahb1smenr_r>(ahb1smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Flash memory interface clocks enable during Sleep and Stop modes
 */
class flashsmen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr flashsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1smenr_r>() const {return ClearSet<ahb1smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1smenr_r other) const -> ahb1smenr_r { return static_cast<ahb1smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1smenr_r> other) const -> ClearSet<ahb1smenr_r> {return ClearSet<ahb1smenr_r>(ahb1smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SRAM1 interface clocks enable during Sleep and Stop modes
 */
class sram1smen_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sram1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1smenr_r>() const {return ClearSet<ahb1smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1smenr_r other) const -> ahb1smenr_r { return static_cast<ahb1smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1smenr_r> other) const -> ClearSet<ahb1smenr_r> {return ClearSet<ahb1smenr_r>(ahb1smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CRCSMEN
 */
class crcsmen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr crcsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1smenr_r>() const {return ClearSet<ahb1smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1smenr_r other) const -> ahb1smenr_r { return static_cast<ahb1smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1smenr_r> other) const -> ClearSet<ahb1smenr_r> {return ClearSet<ahb1smenr_r>(ahb1smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FMACSM clock enable
 */
class fmacsmen_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fmacsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb1smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb1smenr_r>() const {return ClearSet<ahb1smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1smenr_r other) const -> ahb1smenr_r { return static_cast<ahb1smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1smenr_r> other) const -> ClearSet<ahb1smenr_r> {return ClearSet<ahb1smenr_r>(ahb1smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dma1smen() const -> dma1smen_f {return dma1smen_f((m_value & dma1smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dma2smen() const -> dma2smen_f {return dma2smen_f((m_value & dma2smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmamux1smen() const -> dmamux1smen_f {return dmamux1smen_f((m_value & dmamux1smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cordicsmen() const -> cordicsmen_f {return cordicsmen_f((m_value & cordicsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto flashsmen() const -> flashsmen_f {return flashsmen_f((m_value & flashsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sram1smen() const -> sram1smen_f {return sram1smen_f((m_value & sram1smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crcsmen() const -> crcsmen_f {return crcsmen_f((m_value & crcsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fmacsmen() const -> fmacsmen_f {return fmacsmen_f((m_value & fmacsmen_f::Mask) != 0);}

	constexpr ahb1smenr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb1smenr_r other) const -> ahb1smenr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb1smenr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 104;
	static constexpr uint32_t ResetValue = 0b1001100001111; // 4879 0x130F

private:
	uint32_t m_value;
};
/**
 * AHB2 peripheral clocks enable in Sleep and Stop modes register
 */
class ahb2smenr_r {
public:

/**
 * IO port A clocks enable during Sleep and Stop modes
 */
class gpioasmen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioasmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port B clocks enable during Sleep and Stop modes
 */
class gpiobsmen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiobsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port C clocks enable during Sleep and Stop modes
 */
class gpiocsmen_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiocsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port D clocks enable during Sleep and Stop modes
 */
class gpiodsmen_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiodsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port E clocks enable during Sleep and Stop modes
 */
class gpioesmen_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioesmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port F clocks enable during Sleep and Stop modes
 */
class gpiofsmen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiofsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port G clocks enable during Sleep and Stop modes
 */
class gpiogsmen_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiogsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SRAM2 interface clocks enable during Sleep and Stop modes
 */
class sram2smen_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sram2smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SRAM2 interface clocks enable during Sleep and Stop modes
 */
class sram3smen_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sram3smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADC clocks enable during Sleep and Stop modes
 */
class ad12csmen_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ad12csmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DCMI clock enable during Sleep and Stop modes
 */
class adc345smen_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr adc345smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AES accelerator clocks enable during Sleep and Stop modes
 */
class dac1smen_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HASH clock enable during Sleep and Stop modes
 */
class dac2smen_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac2smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC3 clock enable during sleep mode
 */
class dac3smen_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac3smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC4 clock enable during sleep mode
 */
class dac4smen_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac4smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Cryptography clock enable during sleep mode
 */
class cryptsmen_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cryptsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Random Number Generator clock enable during sleep mode
 */
class rngsmen_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rngsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb2smenr_r>() const {return ClearSet<ahb2smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2smenr_r other) const -> ahb2smenr_r { return static_cast<ahb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2smenr_r> other) const -> ClearSet<ahb2smenr_r> {return ClearSet<ahb2smenr_r>(ahb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto gpioasmen() const -> gpioasmen_f {return gpioasmen_f((m_value & gpioasmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiobsmen() const -> gpiobsmen_f {return gpiobsmen_f((m_value & gpiobsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiocsmen() const -> gpiocsmen_f {return gpiocsmen_f((m_value & gpiocsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiodsmen() const -> gpiodsmen_f {return gpiodsmen_f((m_value & gpiodsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioesmen() const -> gpioesmen_f {return gpioesmen_f((m_value & gpioesmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiofsmen() const -> gpiofsmen_f {return gpiofsmen_f((m_value & gpiofsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiogsmen() const -> gpiogsmen_f {return gpiogsmen_f((m_value & gpiogsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sram2smen() const -> sram2smen_f {return sram2smen_f((m_value & sram2smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sram3smen() const -> sram3smen_f {return sram3smen_f((m_value & sram3smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ad12csmen() const -> ad12csmen_f {return ad12csmen_f((m_value & ad12csmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adc345smen() const -> adc345smen_f {return adc345smen_f((m_value & adc345smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac1smen() const -> dac1smen_f {return dac1smen_f((m_value & dac1smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac2smen() const -> dac2smen_f {return dac2smen_f((m_value & dac2smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac3smen() const -> dac3smen_f {return dac3smen_f((m_value & dac3smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac4smen() const -> dac4smen_f {return dac4smen_f((m_value & dac4smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cryptsmen() const -> cryptsmen_f {return cryptsmen_f((m_value & cryptsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rngsmen() const -> rngsmen_f {return rngsmen_f((m_value & rngsmen_f::Mask) != 0);}

	constexpr ahb2smenr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb2smenr_r other) const -> ahb2smenr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb2smenr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 108;
	static constexpr uint32_t ResetValue = 0b101000011110110011001111111; // 84895359 0x50F667F

private:
	uint32_t m_value;
};
/**
 * AHB3 peripheral clocks enable in Sleep and Stop modes register
 */
class ahb3smenr_r {
public:

/**
 * Flexible memory controller clocks enable during Sleep and Stop modes
 */
class fmcsmen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fmcsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb3smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb3smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb3smenr_r>() const {return ClearSet<ahb3smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb3smenr_r other) const -> ahb3smenr_r { return static_cast<ahb3smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb3smenr_r> other) const -> ClearSet<ahb3smenr_r> {return ClearSet<ahb3smenr_r>(ahb3smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * QUAD SPI 1 module clock enable during sleep mode
 */
class quadspi1smen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr quadspi1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb3smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ahb3smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ahb3smenr_r>() const {return ClearSet<ahb3smenr_r>(Mask, *this);}
	constexpr auto operator|(ahb3smenr_r other) const -> ahb3smenr_r { return static_cast<ahb3smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb3smenr_r> other) const -> ClearSet<ahb3smenr_r> {return ClearSet<ahb3smenr_r>(ahb3smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto fmcsmen() const -> fmcsmen_f {return fmcsmen_f((m_value & fmcsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto quadspi1smen() const -> quadspi1smen_f {return quadspi1smen_f((m_value & quadspi1smen_f::Mask) != 0);}

	constexpr ahb3smenr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb3smenr_r other) const -> ahb3smenr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb3smenr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 112;
	static constexpr uint32_t ResetValue = 0b100000001; // 257 0x101

private:
	uint32_t m_value;
};
/**
 * APB1SMENR1
 */
class apb1smenr1_r {
public:

/**
 * TIM2 timer clocks enable during Sleep and Stop modes
 */
class tim2smen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim2smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM3 timer clocks enable during Sleep and Stop modes
 */
class tim3smen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim3smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM4 timer clocks enable during Sleep and Stop modes
 */
class tim4smen_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim4smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM5 timer clocks enable during Sleep and Stop modes
 */
class tim5smen_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim5smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM6 timer clocks enable during Sleep and Stop modes
 */
class tim6smen_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim6smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM7 timer clocks enable during Sleep and Stop modes
 */
class tim7smen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim7smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CRS clock enable during sleep mode
 */
class crssmen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr crssmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RTC APB clock enable during Sleep and Stop modes
 */
class rtcapbsmen_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtcapbsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Window watchdog clocks enable during Sleep and Stop modes
 */
class wwdgsmen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wwdgsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI2 clocks enable during Sleep and Stop modes
 */
class spi2smen_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi2smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI3 clocks enable during Sleep and Stop modes
 */
class sp3smen_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sp3smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART2 clocks enable during Sleep and Stop modes
 */
class usart2smen_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usart2smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART3 clocks enable during Sleep and Stop modes
 */
class usart3smen_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usart3smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * UART4 clocks enable during Sleep and Stop modes
 */
class uart4smen_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uart4smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * UART5 clocks enable during Sleep and Stop modes
 */
class uart5smen_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uart5smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C1 clocks enable during Sleep and Stop modes
 */
class i2c1smen_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C2 clocks enable during Sleep and Stop modes
 */
class i2c2smen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c2smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C3 clocks enable during Sleep and Stop modes
 */
class i2c3smen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c3smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FDCAN clock enable during sleep mode
 */
class fdcansmen_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fdcansmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Power interface clocks enable during Sleep and Stop modes
 */
class pwrsmen_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pwrsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C 3 interface clock enable during sleep mode
 */
class i2c3smen_3_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c3smen_3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Low Power Timer1 clock enable during sleep mode
 */
class lptim1smen_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lptim1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr1_r>() const {return ClearSet<apb1smenr1_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr1_r other) const -> apb1smenr1_r { return static_cast<apb1smenr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr1_r> other) const -> ClearSet<apb1smenr1_r> {return ClearSet<apb1smenr1_r>(apb1smenr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tim2smen() const -> tim2smen_f {return tim2smen_f((m_value & tim2smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim3smen() const -> tim3smen_f {return tim3smen_f((m_value & tim3smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim4smen() const -> tim4smen_f {return tim4smen_f((m_value & tim4smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim5smen() const -> tim5smen_f {return tim5smen_f((m_value & tim5smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim6smen() const -> tim6smen_f {return tim6smen_f((m_value & tim6smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim7smen() const -> tim7smen_f {return tim7smen_f((m_value & tim7smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crssmen() const -> crssmen_f {return crssmen_f((m_value & crssmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtcapbsmen() const -> rtcapbsmen_f {return rtcapbsmen_f((m_value & rtcapbsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wwdgsmen() const -> wwdgsmen_f {return wwdgsmen_f((m_value & wwdgsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi2smen() const -> spi2smen_f {return spi2smen_f((m_value & spi2smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sp3smen() const -> sp3smen_f {return sp3smen_f((m_value & sp3smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart2smen() const -> usart2smen_f {return usart2smen_f((m_value & usart2smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart3smen() const -> usart3smen_f {return usart3smen_f((m_value & usart3smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uart4smen() const -> uart4smen_f {return uart4smen_f((m_value & uart4smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uart5smen() const -> uart5smen_f {return uart5smen_f((m_value & uart5smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c1smen() const -> i2c1smen_f {return i2c1smen_f((m_value & i2c1smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c2smen() const -> i2c2smen_f {return i2c2smen_f((m_value & i2c2smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c3smen() const -> i2c3smen_f {return i2c3smen_f((m_value & i2c3smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fdcansmen() const -> fdcansmen_f {return fdcansmen_f((m_value & fdcansmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pwrsmen() const -> pwrsmen_f {return pwrsmen_f((m_value & pwrsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c3smen_3() const -> i2c3smen_3_f {return i2c3smen_3_f((m_value & i2c3smen_3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lptim1smen() const -> lptim1smen_f {return lptim1smen_f((m_value & lptim1smen_f::Mask) != 0);}

	constexpr apb1smenr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1smenr1_r other) const -> apb1smenr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1smenr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 120;
	static constexpr uint32_t ResetValue = 0b11010010111111101100110100111111; // 3539914047 0xD2FECD3F

private:
	uint32_t m_value;
};
/**
 * APB1 peripheral clocks enable in Sleep and Stop modes register 2
 */
class apb1smenr2_r {
public:

/**
 * Low power UART 1 clocks enable during Sleep and Stop modes
 */
class lpuart1smen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lpuart1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr2_r>() const {return ClearSet<apb1smenr2_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr2_r other) const -> apb1smenr2_r { return static_cast<apb1smenr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr2_r> other) const -> ClearSet<apb1smenr2_r> {return ClearSet<apb1smenr2_r>(apb1smenr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C4 clocks enable during Sleep and Stop modes
 */
class i2c4smen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr i2c4smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr2_r>() const {return ClearSet<apb1smenr2_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr2_r other) const -> apb1smenr2_r { return static_cast<apb1smenr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr2_r> other) const -> ClearSet<apb1smenr2_r> {return ClearSet<apb1smenr2_r>(apb1smenr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USB PD clock enable during sleep mode
 */
class usbpdsmen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbpdsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1smenr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb1smenr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb1smenr2_r>() const {return ClearSet<apb1smenr2_r>(Mask, *this);}
	constexpr auto operator|(apb1smenr2_r other) const -> apb1smenr2_r { return static_cast<apb1smenr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1smenr2_r> other) const -> ClearSet<apb1smenr2_r> {return ClearSet<apb1smenr2_r>(apb1smenr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lpuart1smen() const -> lpuart1smen_f {return lpuart1smen_f((m_value & lpuart1smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c4smen() const -> i2c4smen_f {return i2c4smen_f((m_value & i2c4smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbpdsmen() const -> usbpdsmen_f {return usbpdsmen_f((m_value & usbpdsmen_f::Mask) != 0);}

	constexpr apb1smenr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1smenr2_r other) const -> apb1smenr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1smenr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 124;
	static constexpr uint32_t ResetValue = 0b100000011; // 259 0x103

private:
	uint32_t m_value;
};
/**
 * APB2SMENR
 */
class apb2smenr_r {
public:

/**
 * SYSCFG clocks enable during Sleep and Stop modes
 */
class syscfgsmen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr syscfgsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM1 timer clocks enable during Sleep and Stop modes
 */
class tim1smen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tim1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI1 clocks enable during Sleep and Stop modes
 */
class spi1smen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM8 timer clocks enable during Sleep and Stop modes
 */
class tim8smen_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tim8smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART1clocks enable during Sleep and Stop modes
 */
class usart1smen_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usart1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI4 timer clocks enable during Sleep and Stop modes
 */
class spi4smen_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi4smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM15 timer clocks enable during Sleep and Stop modes
 */
class tim15smen_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim15smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM16 timer clocks enable during Sleep and Stop modes
 */
class tim16smen_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim16smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM17 timer clocks enable during Sleep and Stop modes
 */
class tim17smen_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim17smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Timer 20clock enable during sleep mode
 */
class tim20smen_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim20smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SAI1 clock enable during sleep mode
 */
class sai1smen_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sai1smen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HRTIMER clock enable during sleep mode
 */
class hrtimersmen_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hrtimersmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2smenr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(apb2smenr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<apb2smenr_r>() const {return ClearSet<apb2smenr_r>(Mask, *this);}
	constexpr auto operator|(apb2smenr_r other) const -> apb2smenr_r { return static_cast<apb2smenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2smenr_r> other) const -> ClearSet<apb2smenr_r> {return ClearSet<apb2smenr_r>(apb2smenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto syscfgsmen() const -> syscfgsmen_f {return syscfgsmen_f((m_value & syscfgsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim1smen() const -> tim1smen_f {return tim1smen_f((m_value & tim1smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi1smen() const -> spi1smen_f {return spi1smen_f((m_value & spi1smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim8smen() const -> tim8smen_f {return tim8smen_f((m_value & tim8smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart1smen() const -> usart1smen_f {return usart1smen_f((m_value & usart1smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi4smen() const -> spi4smen_f {return spi4smen_f((m_value & spi4smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim15smen() const -> tim15smen_f {return tim15smen_f((m_value & tim15smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim16smen() const -> tim16smen_f {return tim16smen_f((m_value & tim16smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim17smen() const -> tim17smen_f {return tim17smen_f((m_value & tim17smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim20smen() const -> tim20smen_f {return tim20smen_f((m_value & tim20smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sai1smen() const -> sai1smen_f {return sai1smen_f((m_value & sai1smen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hrtimersmen() const -> hrtimersmen_f {return hrtimersmen_f((m_value & hrtimersmen_f::Mask) != 0);}

	constexpr apb2smenr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb2smenr_r other) const -> apb2smenr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb2smenr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0b100001101111111100000000001; // 70776833 0x437F801

private:
	uint32_t m_value;
};
/**
 * CCIPR
 */
class ccipr1_r {
public:

/**
 * ADC3/4/5 clock source selection
 */
class adc345sel_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr adc345sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADCs clock source selection
 */
class adcsel_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr adcsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * 48 MHz clock source selection
 */
class clk48sel_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clk48sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SAI2 clock source selection
 */
class fdcansel_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr fdcansel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SAI1 clock source selection
 */
class spisel__f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spisel__f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Low power timer 2 clock source selection
 */
class saisel_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr saisel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Low power timer 1 clock source selection
 */
class lptim1sel_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr lptim1sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * I2C3 clock source selection
 */
class i2c3sel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr i2c3sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * I2C2 clock source selection
 */
class i2c2sel_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr i2c2sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * I2C1 clock source selection
 */
class i2c1sel_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr i2c1sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LPUART1 clock source selection
 */
class lpuart1sel_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr lpuart1sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * UART5 clock source selection
 */
class uart5sel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr uart5sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * UART4 clock source selection
 */
class uart4sel_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr uart4sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * USART3 clock source selection
 */
class usart3sel_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr usart3sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * USART2 clock source selection
 */
class usart2sel_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr usart2sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * USART1 clock source selection
 */
class usart1sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr usart1sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccipr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr1_r>() const {return ClearSet<ccipr1_r>(Mask, *this);}
	constexpr auto operator|(ccipr1_r other) const -> ccipr1_r { return static_cast<ccipr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr1_r> other) const -> ClearSet<ccipr1_r> {return ClearSet<ccipr1_r>(ccipr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto adc345sel() const -> adc345sel_f {return adc345sel_f(static_cast<uint8_t>(m_value >> adc345sel_f::Offset));}
	[[nodiscard]] constexpr auto adcsel() const -> adcsel_f {return adcsel_f(static_cast<uint8_t>(m_value >> adcsel_f::Offset));}
	[[nodiscard]] constexpr auto clk48sel() const -> clk48sel_f {return clk48sel_f(static_cast<uint8_t>(m_value >> clk48sel_f::Offset));}
	[[nodiscard]] constexpr auto fdcansel() const -> fdcansel_f {return fdcansel_f(static_cast<uint8_t>(m_value >> fdcansel_f::Offset));}
	[[nodiscard]] constexpr auto spisel_() const -> spisel__f {return spisel__f(static_cast<uint8_t>(m_value >> spisel__f::Offset));}
	[[nodiscard]] constexpr auto saisel() const -> saisel_f {return saisel_f(static_cast<uint8_t>(m_value >> saisel_f::Offset));}
	[[nodiscard]] constexpr auto lptim1sel() const -> lptim1sel_f {return lptim1sel_f(static_cast<uint8_t>(m_value >> lptim1sel_f::Offset));}
	[[nodiscard]] constexpr auto i2c3sel() const -> i2c3sel_f {return i2c3sel_f(static_cast<uint8_t>(m_value >> i2c3sel_f::Offset));}
	[[nodiscard]] constexpr auto i2c2sel() const -> i2c2sel_f {return i2c2sel_f(static_cast<uint8_t>(m_value >> i2c2sel_f::Offset));}
	[[nodiscard]] constexpr auto i2c1sel() const -> i2c1sel_f {return i2c1sel_f(static_cast<uint8_t>(m_value >> i2c1sel_f::Offset));}
	[[nodiscard]] constexpr auto lpuart1sel() const -> lpuart1sel_f {return lpuart1sel_f(static_cast<uint8_t>(m_value >> lpuart1sel_f::Offset));}
	[[nodiscard]] constexpr auto uart5sel() const -> uart5sel_f {return uart5sel_f(static_cast<uint8_t>(m_value >> uart5sel_f::Offset));}
	[[nodiscard]] constexpr auto uart4sel() const -> uart4sel_f {return uart4sel_f(static_cast<uint8_t>(m_value >> uart4sel_f::Offset));}
	[[nodiscard]] constexpr auto usart3sel() const -> usart3sel_f {return usart3sel_f(static_cast<uint8_t>(m_value >> usart3sel_f::Offset));}
	[[nodiscard]] constexpr auto usart2sel() const -> usart2sel_f {return usart2sel_f(static_cast<uint8_t>(m_value >> usart2sel_f::Offset));}
	[[nodiscard]] constexpr auto usart1sel() const -> usart1sel_f {return usart1sel_f(static_cast<uint8_t>(m_value >> usart1sel_f::Offset));}

	constexpr ccipr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccipr1_r other) const -> ccipr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccipr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 136;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * BDCR
 */
class bdcr_r {
public:

/**
 * Low speed clock output selection
 */
class lscosel_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lscosel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Low speed clock output enable
 */
class lsccoen_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lsccoen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Vswitch domain software reset
 */
class vswrst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr vswrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RTC clock enable
 */
class rtcen_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtcen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RTC clock source selection
 */
class rtcsel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rtcsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bdcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bdcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LSECSSD
 */
class lsecssd_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsecssd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSECSSON
 */
class lsecsson_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsecsson_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SE oscillator drive capability
 */
class lsedrv_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr lsedrv_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bdcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bdcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LSE oscillator bypass
 */
class lsebyp_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsebyp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSE oscillator ready
 */
class lserdy_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lserdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSE oscillator enable
 */
class lseon_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lseon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lscosel() const -> lscosel_f {return lscosel_f((m_value & lscosel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsccoen() const -> lsccoen_f {return lsccoen_f((m_value & lsccoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vswrst() const -> vswrst_f {return vswrst_f((m_value & vswrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtcen() const -> rtcen_f {return rtcen_f((m_value & rtcen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtcsel() const -> rtcsel_f {return rtcsel_f(static_cast<uint8_t>(m_value >> rtcsel_f::Offset));}
	[[nodiscard]] constexpr auto lsecssd() const -> lsecssd_f {return lsecssd_f((m_value & lsecssd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsecsson() const -> lsecsson_f {return lsecsson_f((m_value & lsecsson_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsedrv() const -> lsedrv_f {return lsedrv_f(static_cast<uint8_t>(m_value >> lsedrv_f::Offset));}
	[[nodiscard]] constexpr auto lsebyp() const -> lsebyp_f {return lsebyp_f((m_value & lsebyp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lserdy() const -> lserdy_f {return lserdy_f((m_value & lserdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lseon() const -> lseon_f {return lseon_f((m_value & lseon_f::Mask) != 0);}

	constexpr bdcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bdcr_r other) const -> bdcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bdcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 144;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * CSR
 */
class csr_r {
public:

/**
 * Low-power reset flag
 */
class lpwrstf_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lpwrstf_f(bool value = true) : m_value(value) {}
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
 * Window watchdog reset flag
 */
class wwdgrstf_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wwdgrstf_f(bool value = true) : m_value(value) {}
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
 * Independent window watchdog reset flag
 */
class wdgrstf_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wdgrstf_f(bool value = true) : m_value(value) {}
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
 * Software reset flag
 */
class sftrstf_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sftrstf_f(bool value = true) : m_value(value) {}
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
 * BOR flag
 */
class borrstf_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr borrstf_f(bool value = true) : m_value(value) {}
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
 * Pad reset flag
 */
class padrstf_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr padrstf_f(bool value = true) : m_value(value) {}
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
 * Option byte loader reset flag
 */
class oblrstf_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oblrstf_f(bool value = true) : m_value(value) {}
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
 * Remove reset flag
 */
class rmvf_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rmvf_f(bool value = true) : m_value(value) {}
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
 * LSI oscillator ready
 */
class lsirdy_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsirdy_f(bool value = true) : m_value(value) {}
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
 * LSI oscillator enable
 */
class lsion_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsion_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lpwrstf() const -> lpwrstf_f {return lpwrstf_f((m_value & lpwrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wwdgrstf() const -> wwdgrstf_f {return wwdgrstf_f((m_value & wwdgrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wdgrstf() const -> wdgrstf_f {return wdgrstf_f((m_value & wdgrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sftrstf() const -> sftrstf_f {return sftrstf_f((m_value & sftrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto borrstf() const -> borrstf_f {return borrstf_f((m_value & borrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto padrstf() const -> padrstf_f {return padrstf_f((m_value & padrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oblrstf() const -> oblrstf_f {return oblrstf_f((m_value & oblrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rmvf() const -> rmvf_f {return rmvf_f((m_value & rmvf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsirdy() const -> lsirdy_f {return lsirdy_f((m_value & lsirdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsion() const -> lsion_f {return lsion_f((m_value & lsion_f::Mask) != 0);}

	constexpr csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(csr_r other) const -> csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 148;
	static constexpr uint32_t ResetValue = 0b1100000000000000000000000000; // 201326592 0xC000000

private:
	uint32_t m_value;
};
/**
 * Clock recovery RC register
 */
class crrcr_r {
public:

/**
 * HSI48 clock enable
 */
class rc48on_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rc48on_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator crrcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(crrcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<crrcr_r>() const {return ClearSet<crrcr_r>(Mask, *this);}
	constexpr auto operator|(crrcr_r other) const -> crrcr_r { return static_cast<crrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<crrcr_r> other) const -> ClearSet<crrcr_r> {return ClearSet<crrcr_r>(crrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI48 clock ready flag
 */
class rc48rdy_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rc48rdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator crrcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(crrcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<crrcr_r>() const {return ClearSet<crrcr_r>(Mask, *this);}
	constexpr auto operator|(crrcr_r other) const -> crrcr_r { return static_cast<crrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<crrcr_r> other) const -> ClearSet<crrcr_r> {return ClearSet<crrcr_r>(crrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI48 clock calibration
 */
class rc48cal_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rc48cal_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator crrcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(crrcr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<crrcr_r>() const {return ClearSet<crrcr_r>(Mask, *this);}
	constexpr auto operator|(crrcr_r other) const -> crrcr_r { return static_cast<crrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<crrcr_r> other) const -> ClearSet<crrcr_r> {return ClearSet<crrcr_r>(crrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rc48on() const -> rc48on_f {return rc48on_f((m_value & rc48on_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rc48rdy() const -> rc48rdy_f {return rc48rdy_f((m_value & rc48rdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rc48cal() const -> rc48cal_f {return rc48cal_f(static_cast<uint16_t>(m_value >> rc48cal_f::Offset));}

	constexpr crrcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(crrcr_r other) const -> crrcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> crrcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 152;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Peripherals independent clock configuration register
 */
class ccipr2_r {
public:

/**
 * I2C4 clock source selection
 */
class i2c4sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr i2c4sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccipr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr2_r>() const {return ClearSet<ccipr2_r>(Mask, *this);}
	constexpr auto operator|(ccipr2_r other) const -> ccipr2_r { return static_cast<ccipr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr2_r> other) const -> ClearSet<ccipr2_r> {return ClearSet<ccipr2_r>(ccipr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Octospi clock source selection
 */
class quadspisel_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr quadspisel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccipr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccipr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccipr2_r>() const {return ClearSet<ccipr2_r>(Mask, *this);}
	constexpr auto operator|(ccipr2_r other) const -> ccipr2_r { return static_cast<ccipr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccipr2_r> other) const -> ClearSet<ccipr2_r> {return ClearSet<ccipr2_r>(ccipr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto i2c4sel() const -> i2c4sel_f {return i2c4sel_f(static_cast<uint8_t>(m_value >> i2c4sel_f::Offset));}
	[[nodiscard]] constexpr auto quadspisel() const -> quadspisel_f {return quadspisel_f(static_cast<uint8_t>(m_value >> quadspisel_f::Offset));}

	constexpr ccipr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccipr2_r other) const -> ccipr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccipr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 156;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct apb1rstr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using apb1rstr_v = typename apb1rstr_r<Index>::type;
	template<std::size_t Index> constexpr auto& apb1rstr() { }

	template<std::size_t Index> struct apb1enr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using apb1enr_v = typename apb1enr_r<Index>::type;
	template<std::size_t Index> constexpr auto& apb1enr() { }

	template<std::size_t Index> struct apb1smenr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using apb1smenr_v = typename apb1smenr_r<Index>::type;
	template<std::size_t Index> constexpr auto& apb1smenr() { }

	template<std::size_t Index> struct ccipr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using ccipr_v = typename ccipr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ccipr() { }

	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,icscr_r> icscr;
	Memory<uint32_t,cfgr_r> cfgr;
	Memory<uint32_t,pllsyscfgr_r> pllsyscfgr;
	Padding<8> _p16;
	Memory<uint32_t,cier_r> cier;
	ReadOnlyMemory<uint32_t,cifr_r> cifr;
	WriteOnlyMemory<uint32_t,cicr_r> cicr;
	Padding<4> _p36;
	Memory<uint32_t,ahb1rstr_r> ahb1rstr;
	Memory<uint32_t,ahb2rstr_r> ahb2rstr;
	Memory<uint32_t,ahb3rstr_r> ahb3rstr;
	Padding<4> _p52;
	Memory<uint32_t,apb1rstr1_r> apb1rstr1;
	Memory<uint32_t,apb1rstr2_r> apb1rstr2;
	Memory<uint32_t,apb2rstr_r> apb2rstr;
	Padding<4> _p68;
	Memory<uint32_t,ahb1enr_r> ahb1enr;
	Memory<uint32_t,ahb2enr_r> ahb2enr;
	Memory<uint32_t,ahb3enr_r> ahb3enr;
	Padding<4> _p84;
	Memory<uint32_t,apb1enr1_r> apb1enr1;
	Memory<uint32_t,apb1enr2_r> apb1enr2;
	Memory<uint32_t,apb2enr_r> apb2enr;
	Padding<4> _p100;
	Memory<uint32_t,ahb1smenr_r> ahb1smenr;
	Memory<uint32_t,ahb2smenr_r> ahb2smenr;
	Memory<uint32_t,ahb3smenr_r> ahb3smenr;
	Padding<4> _p116;
	Memory<uint32_t,apb1smenr1_r> apb1smenr1;
	Memory<uint32_t,apb1smenr2_r> apb1smenr2;
	Memory<uint32_t,apb2smenr_r> apb2smenr;
	Padding<4> _p132;
	Memory<uint32_t,ccipr1_r> ccipr1;
	Padding<4> _p140;
	Memory<uint32_t,bdcr_r> bdcr;
	Memory<uint32_t,csr_r> csr;
	Memory<uint32_t,crrcr_r> crrcr;
	Memory<uint32_t,ccipr2_r> ccipr2;
};

template<> struct rcc_p::cfgr_r::ppre_f<2> { using type = rcc_p::cfgr_r::ppre2_f; };
template<> struct rcc_p::cfgr_r::ppre_f<1> { using type = rcc_p::cfgr_r::ppre1_f; };

template<> struct rcc_p::ahb2enr_r::dac_f<1> { using type = rcc_p::ahb2enr_r::dac1_f; };
template<> struct rcc_p::ahb2enr_r::dac_f<2> { using type = rcc_p::ahb2enr_r::dac2_f; };
template<> struct rcc_p::ahb2enr_r::dac_f<3> { using type = rcc_p::ahb2enr_r::dac3_f; };
template<> struct rcc_p::ahb2enr_r::dac_f<4> { using type = rcc_p::ahb2enr_r::dac4_f; };

template<> constexpr auto& rcc_p::apb1rstr<1>() { return apb1rstr1; }
template<> constexpr auto& rcc_p::apb1rstr<2>() { return apb1rstr2; }

template<> struct rcc_p::apb1rstr_r<1> { using type = rcc_p::apb1rstr1_r; };
template<> struct rcc_p::apb1rstr_r<2> { using type = rcc_p::apb1rstr2_r; };

template<> constexpr auto& rcc_p::apb1enr<1>() { return apb1enr1; }
template<> constexpr auto& rcc_p::apb1enr<2>() { return apb1enr2; }

template<> struct rcc_p::apb1enr_r<1> { using type = rcc_p::apb1enr1_r; };
template<> struct rcc_p::apb1enr_r<2> { using type = rcc_p::apb1enr2_r; };

template<> constexpr auto& rcc_p::apb1smenr<1>() { return apb1smenr1; }
template<> constexpr auto& rcc_p::apb1smenr<2>() { return apb1smenr2; }

template<> struct rcc_p::apb1smenr_r<1> { using type = rcc_p::apb1smenr1_r; };
template<> struct rcc_p::apb1smenr_r<2> { using type = rcc_p::apb1smenr2_r; };

template<> constexpr auto& rcc_p::ccipr<1>() { return ccipr1; }
template<> constexpr auto& rcc_p::ccipr<2>() { return ccipr2; }

template<> struct rcc_p::ccipr_r<1> { using type = rcc_p::ccipr1_r; };
template<> struct rcc_p::ccipr_r<2> { using type = rcc_p::ccipr2_r; };

static_assert(std::is_standard_layout_v<rcc_p>);
static_assert(offsetof(rcc_p, cr) == rcc_p::cr_r::Offset);
static_assert(offsetof(rcc_p, icscr) == rcc_p::icscr_r::Offset);
static_assert(offsetof(rcc_p, cfgr) == rcc_p::cfgr_r::Offset);
static_assert(offsetof(rcc_p, pllsyscfgr) == rcc_p::pllsyscfgr_r::Offset);
static_assert(offsetof(rcc_p, cier) == rcc_p::cier_r::Offset);
static_assert(offsetof(rcc_p, cifr) == rcc_p::cifr_r::Offset);
static_assert(offsetof(rcc_p, cicr) == rcc_p::cicr_r::Offset);
static_assert(offsetof(rcc_p, ahb1rstr) == rcc_p::ahb1rstr_r::Offset);
static_assert(offsetof(rcc_p, ahb2rstr) == rcc_p::ahb2rstr_r::Offset);
static_assert(offsetof(rcc_p, ahb3rstr) == rcc_p::ahb3rstr_r::Offset);
static_assert(offsetof(rcc_p, apb1rstr1) == rcc_p::apb1rstr1_r::Offset);
static_assert(offsetof(rcc_p, apb1rstr2) == rcc_p::apb1rstr2_r::Offset);
static_assert(offsetof(rcc_p, apb2rstr) == rcc_p::apb2rstr_r::Offset);
static_assert(offsetof(rcc_p, ahb1enr) == rcc_p::ahb1enr_r::Offset);
static_assert(offsetof(rcc_p, ahb2enr) == rcc_p::ahb2enr_r::Offset);
static_assert(offsetof(rcc_p, ahb3enr) == rcc_p::ahb3enr_r::Offset);
static_assert(offsetof(rcc_p, apb1enr1) == rcc_p::apb1enr1_r::Offset);
static_assert(offsetof(rcc_p, apb1enr2) == rcc_p::apb1enr2_r::Offset);
static_assert(offsetof(rcc_p, apb2enr) == rcc_p::apb2enr_r::Offset);
static_assert(offsetof(rcc_p, ahb1smenr) == rcc_p::ahb1smenr_r::Offset);
static_assert(offsetof(rcc_p, ahb2smenr) == rcc_p::ahb2smenr_r::Offset);
static_assert(offsetof(rcc_p, ahb3smenr) == rcc_p::ahb3smenr_r::Offset);
static_assert(offsetof(rcc_p, apb1smenr1) == rcc_p::apb1smenr1_r::Offset);
static_assert(offsetof(rcc_p, apb1smenr2) == rcc_p::apb1smenr2_r::Offset);
static_assert(offsetof(rcc_p, apb2smenr) == rcc_p::apb2smenr_r::Offset);
static_assert(offsetof(rcc_p, ccipr1) == rcc_p::ccipr1_r::Offset);
static_assert(offsetof(rcc_p, bdcr) == rcc_p::bdcr_r::Offset);
static_assert(offsetof(rcc_p, csr) == rcc_p::csr_r::Offset);
static_assert(offsetof(rcc_p, crrcr) == rcc_p::crrcr_r::Offset);
static_assert(offsetof(rcc_p, ccipr2) == rcc_p::ccipr2_r::Offset);

inline rcc_p& rcc = *reinterpret_cast<rcc_p*>(0x40021000);

} // STM32G473XX

