#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * Reset and clock control
 */
class rcc_p {
public:
/**
 * clock control register
 */
class cr_r {
public:

/**
 * PLLI2S clock ready flag
 */
class plli2srdy_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr plli2srdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PLLI2S enable
 */
class plli2son_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr plli2son_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Main PLL (PLL) clock ready flag
 */
class pllrdy_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pllrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Main PLL (PLL) enable
 */
class pllon_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pllon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clock security system enable
 */
class csson_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr csson_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSE clock bypass
 */
class hsebyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hsebyp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
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
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Internal high-speed clock calibration
 */
class hsical_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr hsical_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Internal high-speed clock trimming
 */
class hsitrim_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr hsitrim_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Internal high-speed clock ready flag
 */
class hsirdy_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hsirdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Internal high-speed clock enable
 */
class hsion_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hsion_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto plli2srdy() const -> plli2srdy_f {return plli2srdy_f((m_value & plli2srdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto plli2son() const -> plli2son_f {return plli2son_f((m_value & plli2son_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllrdy() const -> pllrdy_f {return pllrdy_f((m_value & pllrdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllon() const -> pllon_f {return pllon_f((m_value & pllon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto csson() const -> csson_f {return csson_f((m_value & csson_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsebyp() const -> hsebyp_f {return hsebyp_f((m_value & hsebyp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hserdy() const -> hserdy_f {return hserdy_f((m_value & hserdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hseon() const -> hseon_f {return hseon_f((m_value & hseon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsical() const -> hsical_f {return hsical_f(static_cast<uint8_t>(m_value >> hsical_f::Offset));}
	[[nodiscard]] constexpr auto hsitrim() const -> hsitrim_f {return hsitrim_f(static_cast<uint8_t>(m_value >> hsitrim_f::Offset));}
	[[nodiscard]] constexpr auto hsirdy() const -> hsirdy_f {return hsirdy_f((m_value & hsirdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsion() const -> hsion_f {return hsion_f((m_value & hsion_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b10000011; // 131 0x83

private:
	uint32_t m_value;
};
/**
 * PLL configuration register
 */
class pllcfgr_r {
public:

/**
 * Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
 */
class pllq_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pllq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pllcfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<pllcfgr_r>() const {return ClearSet<pllcfgr_r>(Mask, *this);}
	constexpr auto operator|(pllcfgr_r other) const -> pllcfgr_r { return static_cast<pllcfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllcfgr_r> other) const -> ClearSet<pllcfgr_r> {return ClearSet<pllcfgr_r>(pllcfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
 */
class pllsrc_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pllsrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pllcfgr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pllcfgr_r>() const {return ClearSet<pllcfgr_r>(Mask, *this);}
	constexpr auto operator|(pllcfgr_r other) const -> pllcfgr_r { return static_cast<pllcfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllcfgr_r> other) const -> ClearSet<pllcfgr_r> {return ClearSet<pllcfgr_r>(pllcfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Main PLL (PLL) division factor for main system clock
 */
class pllp_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pllp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pllcfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<pllcfgr_r>() const {return ClearSet<pllcfgr_r>(Mask, *this);}
	constexpr auto operator|(pllcfgr_r other) const -> pllcfgr_r { return static_cast<pllcfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllcfgr_r> other) const -> ClearSet<pllcfgr_r> {return ClearSet<pllcfgr_r>(pllcfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Main PLL (PLL) multiplication factor for VCO
 */
class plln_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr plln_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator pllcfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr operator ClearSet<pllcfgr_r>() const {return ClearSet<pllcfgr_r>(Mask, *this);}
	constexpr auto operator|(pllcfgr_r other) const -> pllcfgr_r { return static_cast<pllcfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllcfgr_r> other) const -> ClearSet<pllcfgr_r> {return ClearSet<pllcfgr_r>(pllcfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
 */
class pllm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pllm_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pllcfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr operator ClearSet<pllcfgr_r>() const {return ClearSet<pllcfgr_r>(Mask, *this);}
	constexpr auto operator|(pllcfgr_r other) const -> pllcfgr_r { return static_cast<pllcfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pllcfgr_r> other) const -> ClearSet<pllcfgr_r> {return ClearSet<pllcfgr_r>(pllcfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pllq() const -> pllq_f {return pllq_f(static_cast<uint8_t>(m_value >> pllq_f::Offset));}
	[[nodiscard]] constexpr auto pllsrc() const -> pllsrc_f {return pllsrc_f((m_value & pllsrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllp() const -> pllp_f {return pllp_f(static_cast<uint8_t>(m_value >> pllp_f::Offset));}
	[[nodiscard]] constexpr auto plln() const -> plln_f {return plln_f(static_cast<uint16_t>(m_value >> plln_f::Offset));}
	[[nodiscard]] constexpr auto pllm() const -> pllm_f {return pllm_f(static_cast<uint8_t>(m_value >> pllm_f::Offset));}

	constexpr pllcfgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pllcfgr_r other) const -> pllcfgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pllcfgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0b100100000000000011000000010000; // 603992080 0x24003010

private:
	uint32_t m_value;
};
/**
 * clock configuration register
 */
class cfgr_r {
public:

/**
 * Microcontroller clock output 2
 */
class mco2_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mco2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MCO2 prescaler
 */
class mco2pre_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mco2pre_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MCO1 prescaler
 */
class mco1pre_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mco1pre_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * I2S clock selection
 */
class i2ssrc_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2ssrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Microcontroller clock output 1
 */
class mco1_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mco1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * HSE division factor for RTC clock
 */
class rtcpre_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rtcpre_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
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
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ppre2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * APB Low speed prescaler (APB1)
 */
class ppre1_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ppre1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
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
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mco2() const -> mco2_f {return mco2_f(static_cast<uint8_t>(m_value >> mco2_f::Offset));}
	[[nodiscard]] constexpr auto mco2pre() const -> mco2pre_f {return mco2pre_f(static_cast<uint8_t>(m_value >> mco2pre_f::Offset));}
	[[nodiscard]] constexpr auto mco1pre() const -> mco1pre_f {return mco1pre_f(static_cast<uint8_t>(m_value >> mco1pre_f::Offset));}
	[[nodiscard]] constexpr auto i2ssrc() const -> i2ssrc_f {return i2ssrc_f((m_value & i2ssrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mco1() const -> mco1_f {return mco1_f(static_cast<uint8_t>(m_value >> mco1_f::Offset));}
	[[nodiscard]] constexpr auto rtcpre() const -> rtcpre_f {return rtcpre_f(static_cast<uint8_t>(m_value >> rtcpre_f::Offset));}
	[[nodiscard]] constexpr auto ppre2() const -> ppre2_f {return ppre2_f(static_cast<uint8_t>(m_value >> ppre2_f::Offset));}
	[[nodiscard]] constexpr auto ppre1() const -> ppre1_f {return ppre1_f(static_cast<uint8_t>(m_value >> ppre1_f::Offset));}
	[[nodiscard]] constexpr auto hpre() const -> hpre_f {return hpre_f(static_cast<uint8_t>(m_value >> hpre_f::Offset));}
	[[nodiscard]] constexpr auto sws() const -> sws_f {return sws_f(static_cast<uint8_t>(m_value >> sws_f::Offset));}
	[[nodiscard]] constexpr auto sw() const -> sw_f {return sw_f(static_cast<uint8_t>(m_value >> sw_f::Offset));}

	constexpr cfgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfgr_r other) const -> cfgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * clock interrupt register
 */
class cir_r {
public:

/**
 * Clock security system interrupt clear
 */
class cssc_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cssc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PLLI2S ready interrupt clear
 */
class plli2srdyc_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr plli2srdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Main PLL(PLL) ready interrupt clear
 */
class pllrdyc_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pllrdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSE ready interrupt clear
 */
class hserdyc_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hserdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI ready interrupt clear
 */
class hsirdyc_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hsirdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSE ready interrupt clear
 */
class lserdyc_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lserdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSI ready interrupt clear
 */
class lsirdyc_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lsirdyc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PLLI2S ready interrupt enable
 */
class plli2srdyie_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr plli2srdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Main PLL (PLL) ready interrupt enable
 */
class pllrdyie_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pllrdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSE ready interrupt enable
 */
class hserdyie_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hserdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI ready interrupt enable
 */
class hsirdyie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hsirdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSE ready interrupt enable
 */
class lserdyie_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lserdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSI ready interrupt enable
 */
class lsirdyie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lsirdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clock security system interrupt flag
 */
class cssf_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cssf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PLLI2S ready interrupt flag
 */
class plli2srdyf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr plli2srdyf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Main PLL (PLL) ready interrupt flag
 */
class pllrdyf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pllrdyf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSE ready interrupt flag
 */
class hserdyf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hserdyf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HSI ready interrupt flag
 */
class hsirdyf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hsirdyf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

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
	constexpr operator cir_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cir_r>() const {return ClearSet<cir_r>(Mask, *this);}
	constexpr auto operator|(cir_r other) const -> cir_r { return static_cast<cir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cir_r> other) const -> ClearSet<cir_r> {return ClearSet<cir_r>(cir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cssc() const -> cssc_f {return cssc_f((m_value & cssc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto plli2srdyc() const -> plli2srdyc_f {return plli2srdyc_f((m_value & plli2srdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllrdyc() const -> pllrdyc_f {return pllrdyc_f((m_value & pllrdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hserdyc() const -> hserdyc_f {return hserdyc_f((m_value & hserdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsirdyc() const -> hsirdyc_f {return hsirdyc_f((m_value & hsirdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lserdyc() const -> lserdyc_f {return lserdyc_f((m_value & lserdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsirdyc() const -> lsirdyc_f {return lsirdyc_f((m_value & lsirdyc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto plli2srdyie() const -> plli2srdyie_f {return plli2srdyie_f((m_value & plli2srdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllrdyie() const -> pllrdyie_f {return pllrdyie_f((m_value & pllrdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hserdyie() const -> hserdyie_f {return hserdyie_f((m_value & hserdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsirdyie() const -> hsirdyie_f {return hsirdyie_f((m_value & hsirdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lserdyie() const -> lserdyie_f {return lserdyie_f((m_value & lserdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsirdyie() const -> lsirdyie_f {return lsirdyie_f((m_value & lsirdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cssf() const -> cssf_f {return cssf_f((m_value & cssf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto plli2srdyf() const -> plli2srdyf_f {return plli2srdyf_f((m_value & plli2srdyf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pllrdyf() const -> pllrdyf_f {return pllrdyf_f((m_value & pllrdyf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hserdyf() const -> hserdyf_f {return hserdyf_f((m_value & hserdyf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsirdyf() const -> hsirdyf_f {return hsirdyf_f((m_value & hsirdyf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lserdyf() const -> lserdyf_f {return lserdyf_f((m_value & lserdyf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsirdyf() const -> lsirdyf_f {return lsirdyf_f((m_value & lsirdyf_f::Mask) != 0);}

	constexpr cir_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cir_r other) const -> cir_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cir_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
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
 * DMA2 reset
 */
class dma2rst_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dma2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA2 reset
 */
class dma1rst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dma1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
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
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port H reset
 */
class gpiohrst_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiohrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

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
	constexpr operator ahb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1rstr_r>() const {return ClearSet<ahb1rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb1rstr_r other) const -> ahb1rstr_r { return static_cast<ahb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1rstr_r> other) const -> ClearSet<ahb1rstr_r> {return ClearSet<ahb1rstr_r>(ahb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dma2rst() const -> dma2rst_f {return dma2rst_f((m_value & dma2rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dma1rst() const -> dma1rst_f {return dma1rst_f((m_value & dma1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crcrst() const -> crcrst_f {return crcrst_f((m_value & crcrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiohrst() const -> gpiohrst_f {return gpiohrst_f((m_value & gpiohrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioerst() const -> gpioerst_f {return gpioerst_f((m_value & gpioerst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiodrst() const -> gpiodrst_f {return gpiodrst_f((m_value & gpiodrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiocrst() const -> gpiocrst_f {return gpiocrst_f((m_value & gpiocrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiobrst() const -> gpiobrst_f {return gpiobrst_f((m_value & gpiobrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioarst() const -> gpioarst_f {return gpioarst_f((m_value & gpioarst_f::Mask) != 0);}

	constexpr ahb1rstr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb1rstr_r other) const -> ahb1rstr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb1rstr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
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
 * USB OTG FS module reset
 */
class otgfsrst_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr otgfsrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb2rstr_r>() const {return ClearSet<ahb2rstr_r>(Mask, *this);}
	constexpr auto operator|(ahb2rstr_r other) const -> ahb2rstr_r { return static_cast<ahb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2rstr_r> other) const -> ClearSet<ahb2rstr_r> {return ClearSet<ahb2rstr_r>(ahb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto otgfsrst() const -> otgfsrst_f {return otgfsrst_f((m_value & otgfsrst_f::Mask) != 0);}

	constexpr ahb2rstr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb2rstr_r other) const -> ahb2rstr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb2rstr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB1 peripheral reset register
 */
class apb1rstr_r {
public:

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
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C3 reset
 */
class i2c3rst_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c3rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C 2 reset
 */
class i2c2rst_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C 1 reset
 */
class i2c1rst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART 2 reset
 */
class uart2rst_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uart2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI 3 reset
 */
class spi3rst_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi3rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI 2 reset
 */
class spi2rst_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Window watchdog reset
 */
class wwdgrst_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wwdgrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM5 reset
 */
class tim5rst_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim5rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM4 reset
 */
class tim4rst_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim4rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM3 reset
 */
class tim3rst_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim3rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM2 reset
 */
class tim2rst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim2rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1rstr_r>() const {return ClearSet<apb1rstr_r>(Mask, *this);}
	constexpr auto operator|(apb1rstr_r other) const -> apb1rstr_r { return static_cast<apb1rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1rstr_r> other) const -> ClearSet<apb1rstr_r> {return ClearSet<apb1rstr_r>(apb1rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pwrrst() const -> pwrrst_f {return pwrrst_f((m_value & pwrrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c3rst() const -> i2c3rst_f {return i2c3rst_f((m_value & i2c3rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c2rst() const -> i2c2rst_f {return i2c2rst_f((m_value & i2c2rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c1rst() const -> i2c1rst_f {return i2c1rst_f((m_value & i2c1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uart2rst() const -> uart2rst_f {return uart2rst_f((m_value & uart2rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi3rst() const -> spi3rst_f {return spi3rst_f((m_value & spi3rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi2rst() const -> spi2rst_f {return spi2rst_f((m_value & spi2rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wwdgrst() const -> wwdgrst_f {return wwdgrst_f((m_value & wwdgrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim5rst() const -> tim5rst_f {return tim5rst_f((m_value & tim5rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim4rst() const -> tim4rst_f {return tim4rst_f((m_value & tim4rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim3rst() const -> tim3rst_f {return tim3rst_f((m_value & tim3rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim2rst() const -> tim2rst_f {return tim2rst_f((m_value & tim2rst_f::Mask) != 0);}

	constexpr apb1rstr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1rstr_r other) const -> apb1rstr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1rstr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 32;
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
 * TIM11 reset
 */
class tim11rst_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim11rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM10 reset
 */
class tim10rst_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim10rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM9 reset
 */
class tim9rst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim9rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * System configuration controller reset
 */
class syscfgrst_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr syscfgrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI 1 reset
 */
class spi1rst_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SDIO reset
 */
class sdiorst_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sdiorst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADC interface reset (common to all ADCs)
 */
class adcrst_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr adcrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART6 reset
 */
class usart6rst_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usart6rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
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
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usart1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM1 reset
 */
class tim1rst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim1rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2rstr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2rstr_r>() const {return ClearSet<apb2rstr_r>(Mask, *this);}
	constexpr auto operator|(apb2rstr_r other) const -> apb2rstr_r { return static_cast<apb2rstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2rstr_r> other) const -> ClearSet<apb2rstr_r> {return ClearSet<apb2rstr_r>(apb2rstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tim11rst() const -> tim11rst_f {return tim11rst_f((m_value & tim11rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim10rst() const -> tim10rst_f {return tim10rst_f((m_value & tim10rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim9rst() const -> tim9rst_f {return tim9rst_f((m_value & tim9rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto syscfgrst() const -> syscfgrst_f {return syscfgrst_f((m_value & syscfgrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi1rst() const -> spi1rst_f {return spi1rst_f((m_value & spi1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sdiorst() const -> sdiorst_f {return sdiorst_f((m_value & sdiorst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adcrst() const -> adcrst_f {return adcrst_f((m_value & adcrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart6rst() const -> usart6rst_f {return usart6rst_f((m_value & usart6rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart1rst() const -> usart1rst_f {return usart1rst_f((m_value & usart1rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim1rst() const -> tim1rst_f {return tim1rst_f((m_value & tim1rst_f::Mask) != 0);}

	constexpr apb2rstr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb2rstr_r other) const -> apb2rstr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb2rstr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AHB1 peripheral clock register
 */
class ahb1enr_r {
public:

/**
 * DMA2 clock enable
 */
class dma2en_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dma2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA1 clock enable
 */
class dma1en_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dma1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
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
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port H clock enable
 */
class gpiohen_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiohen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

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
	constexpr operator ahb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1enr_r>() const {return ClearSet<ahb1enr_r>(Mask, *this);}
	constexpr auto operator|(ahb1enr_r other) const -> ahb1enr_r { return static_cast<ahb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1enr_r> other) const -> ClearSet<ahb1enr_r> {return ClearSet<ahb1enr_r>(ahb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dma2en() const -> dma2en_f {return dma2en_f((m_value & dma2en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dma1en() const -> dma1en_f {return dma1en_f((m_value & dma1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crcen() const -> crcen_f {return crcen_f((m_value & crcen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiohen() const -> gpiohen_f {return gpiohen_f((m_value & gpiohen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioeen() const -> gpioeen_f {return gpioeen_f((m_value & gpioeen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioden() const -> gpioden_f {return gpioden_f((m_value & gpioden_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiocen() const -> gpiocen_f {return gpiocen_f((m_value & gpiocen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioben() const -> gpioben_f {return gpioben_f((m_value & gpioben_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioaen() const -> gpioaen_f {return gpioaen_f((m_value & gpioaen_f::Mask) != 0);}

	constexpr ahb1enr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb1enr_r other) const -> ahb1enr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb1enr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0b100000000000000000000; // 1048576 0x100000

private:
	uint32_t m_value;
};
/**
 * AHB2 peripheral clock enable register
 */
class ahb2enr_r {
public:

/**
 * USB OTG FS clock enable
 */
class otgfsen_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr otgfsen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb2enr_r>() const {return ClearSet<ahb2enr_r>(Mask, *this);}
	constexpr auto operator|(ahb2enr_r other) const -> ahb2enr_r { return static_cast<ahb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2enr_r> other) const -> ClearSet<ahb2enr_r> {return ClearSet<ahb2enr_r>(ahb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto otgfsen() const -> otgfsen_f {return otgfsen_f((m_value & otgfsen_f::Mask) != 0);}

	constexpr ahb2enr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb2enr_r other) const -> ahb2enr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb2enr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB1 peripheral clock enable register
 */
class apb1enr_r {
public:

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
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C3 clock enable
 */
class i2c3en_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c3en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART 2 clock enable
 */
class usart2en_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usart2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI3 clock enable
 */
class spi3en_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi3en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM5 clock enable
 */
class tim5en_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim5en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM4 clock enable
 */
class tim4en_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim4en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM3 clock enable
 */
class tim3en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim3en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM2 clock enable
 */
class tim2en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1enr_r>() const {return ClearSet<apb1enr_r>(Mask, *this);}
	constexpr auto operator|(apb1enr_r other) const -> apb1enr_r { return static_cast<apb1enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1enr_r> other) const -> ClearSet<apb1enr_r> {return ClearSet<apb1enr_r>(apb1enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pwren() const -> pwren_f {return pwren_f((m_value & pwren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c3en() const -> i2c3en_f {return i2c3en_f((m_value & i2c3en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c2en() const -> i2c2en_f {return i2c2en_f((m_value & i2c2en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c1en() const -> i2c1en_f {return i2c1en_f((m_value & i2c1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart2en() const -> usart2en_f {return usart2en_f((m_value & usart2en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi3en() const -> spi3en_f {return spi3en_f((m_value & spi3en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi2en() const -> spi2en_f {return spi2en_f((m_value & spi2en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wwdgen() const -> wwdgen_f {return wwdgen_f((m_value & wwdgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim5en() const -> tim5en_f {return tim5en_f((m_value & tim5en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim4en() const -> tim4en_f {return tim4en_f((m_value & tim4en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim3en() const -> tim3en_f {return tim3en_f((m_value & tim3en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim2en() const -> tim2en_f {return tim2en_f((m_value & tim2en_f::Mask) != 0);}

	constexpr apb1enr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1enr_r other) const -> apb1enr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1enr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * APB2 peripheral clock enable register
 */
class apb2enr_r {
public:

/**
 * TIM11 clock enable
 */
class tim11en_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim11en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM10 clock enable
 */
class tim10en_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim10en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM9 clock enable
 */
class tim9en_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim9en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * System configuration controller clock enable
 */
class syscfgen_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr syscfgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
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
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SDIO clock enable
 */
class sdioen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sdioen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADC1 clock enable
 */
class adc1en_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr adc1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART6 clock enable
 */
class usart6en_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usart6en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART1 clock enable
 */
class usart1en_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usart1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM1 clock enable
 */
class tim1en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2enr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2enr_r>() const {return ClearSet<apb2enr_r>(Mask, *this);}
	constexpr auto operator|(apb2enr_r other) const -> apb2enr_r { return static_cast<apb2enr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2enr_r> other) const -> ClearSet<apb2enr_r> {return ClearSet<apb2enr_r>(apb2enr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tim11en() const -> tim11en_f {return tim11en_f((m_value & tim11en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim10en() const -> tim10en_f {return tim10en_f((m_value & tim10en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim9en() const -> tim9en_f {return tim9en_f((m_value & tim9en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto syscfgen() const -> syscfgen_f {return syscfgen_f((m_value & syscfgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi1en() const -> spi1en_f {return spi1en_f((m_value & spi1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sdioen() const -> sdioen_f {return sdioen_f((m_value & sdioen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adc1en() const -> adc1en_f {return adc1en_f((m_value & adc1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart6en() const -> usart6en_f {return usart6en_f((m_value & usart6en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart1en() const -> usart1en_f {return usart1en_f((m_value & usart1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim1en() const -> tim1en_f {return tim1en_f((m_value & tim1en_f::Mask) != 0);}

	constexpr apb2enr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb2enr_r other) const -> apb2enr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb2enr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AHB1 peripheral clock enable in low power mode register
 */
class ahb1lpenr_r {
public:

/**
 * DMA2 clock enable during Sleep mode
 */
class dma2lpen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dma2lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA1 clock enable during Sleep mode
 */
class dma1lpen_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dma1lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SRAM 1interface clock enable during Sleep mode
 */
class sram1lpen_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sram1lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Flash interface clock enable during Sleep mode
 */
class flitflpen_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr flitflpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CRC clock enable during Sleep mode
 */
class crclpen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr crclpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port H clock enable during Sleep mode
 */
class gpiohlpen_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiohlpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port E clock enable during Sleep mode
 */
class gpioelpen_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioelpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port D clock enable during Sleep mode
 */
class gpiodlpen_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpiodlpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port C clock enable during Sleep mode
 */
class gpioclpen_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioclpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port B clock enable during Sleep mode
 */
class gpioblpen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioblpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IO port A clock enable during sleep mode
 */
class gpioalpen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gpioalpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb1lpenr_r>() const {return ClearSet<ahb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb1lpenr_r other) const -> ahb1lpenr_r { return static_cast<ahb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb1lpenr_r> other) const -> ClearSet<ahb1lpenr_r> {return ClearSet<ahb1lpenr_r>(ahb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dma2lpen() const -> dma2lpen_f {return dma2lpen_f((m_value & dma2lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dma1lpen() const -> dma1lpen_f {return dma1lpen_f((m_value & dma1lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sram1lpen() const -> sram1lpen_f {return sram1lpen_f((m_value & sram1lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto flitflpen() const -> flitflpen_f {return flitflpen_f((m_value & flitflpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crclpen() const -> crclpen_f {return crclpen_f((m_value & crclpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiohlpen() const -> gpiohlpen_f {return gpiohlpen_f((m_value & gpiohlpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioelpen() const -> gpioelpen_f {return gpioelpen_f((m_value & gpioelpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpiodlpen() const -> gpiodlpen_f {return gpiodlpen_f((m_value & gpiodlpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioclpen() const -> gpioclpen_f {return gpioclpen_f((m_value & gpioclpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioblpen() const -> gpioblpen_f {return gpioblpen_f((m_value & gpioblpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpioalpen() const -> gpioalpen_f {return gpioalpen_f((m_value & gpioalpen_f::Mask) != 0);}

	constexpr ahb1lpenr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb1lpenr_r other) const -> ahb1lpenr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb1lpenr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0b1111110011001111001000111111111; // 2120716799 0x7E6791FF

private:
	uint32_t m_value;
};
/**
 * AHB2 peripheral clock enable in low power mode register
 */
class ahb2lpenr_r {
public:

/**
 * USB OTG FS clock enable during Sleep mode
 */
class otgfslpen_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr otgfslpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ahb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ahb2lpenr_r>() const {return ClearSet<ahb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(ahb2lpenr_r other) const -> ahb2lpenr_r { return static_cast<ahb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ahb2lpenr_r> other) const -> ClearSet<ahb2lpenr_r> {return ClearSet<ahb2lpenr_r>(ahb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto otgfslpen() const -> otgfslpen_f {return otgfslpen_f((m_value & otgfslpen_f::Mask) != 0);}

	constexpr ahb2lpenr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ahb2lpenr_r other) const -> ahb2lpenr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ahb2lpenr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0b11110001; // 241 0xF1

private:
	uint32_t m_value;
};
/**
 * APB1 peripheral clock enable in low power mode register
 */
class apb1lpenr_r {
public:

/**
 * Power interface clock enable during Sleep mode
 */
class pwrlpen_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pwrlpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C3 clock enable during Sleep mode
 */
class i2c3lpen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c3lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C2 clock enable during Sleep mode
 */
class i2c2lpen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c2lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C1 clock enable during Sleep mode
 */
class i2c1lpen_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c1lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART2 clock enable during Sleep mode
 */
class usart2lpen_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usart2lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI3 clock enable during Sleep mode
 */
class spi3lpen_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi3lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI2 clock enable during Sleep mode
 */
class spi2lpen_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi2lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Window watchdog clock enable during Sleep mode
 */
class wwdglpen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wwdglpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM5 clock enable during Sleep mode
 */
class tim5lpen_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim5lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM4 clock enable during Sleep mode
 */
class tim4lpen_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim4lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM3 clock enable during Sleep mode
 */
class tim3lpen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim3lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM2 clock enable during Sleep mode
 */
class tim2lpen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim2lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb1lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb1lpenr_r>() const {return ClearSet<apb1lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb1lpenr_r other) const -> apb1lpenr_r { return static_cast<apb1lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb1lpenr_r> other) const -> ClearSet<apb1lpenr_r> {return ClearSet<apb1lpenr_r>(apb1lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pwrlpen() const -> pwrlpen_f {return pwrlpen_f((m_value & pwrlpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c3lpen() const -> i2c3lpen_f {return i2c3lpen_f((m_value & i2c3lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c2lpen() const -> i2c2lpen_f {return i2c2lpen_f((m_value & i2c2lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c1lpen() const -> i2c1lpen_f {return i2c1lpen_f((m_value & i2c1lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart2lpen() const -> usart2lpen_f {return usart2lpen_f((m_value & usart2lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi3lpen() const -> spi3lpen_f {return spi3lpen_f((m_value & spi3lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi2lpen() const -> spi2lpen_f {return spi2lpen_f((m_value & spi2lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wwdglpen() const -> wwdglpen_f {return wwdglpen_f((m_value & wwdglpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim5lpen() const -> tim5lpen_f {return tim5lpen_f((m_value & tim5lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim4lpen() const -> tim4lpen_f {return tim4lpen_f((m_value & tim4lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim3lpen() const -> tim3lpen_f {return tim3lpen_f((m_value & tim3lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim2lpen() const -> tim2lpen_f {return tim2lpen_f((m_value & tim2lpen_f::Mask) != 0);}

	constexpr apb1lpenr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb1lpenr_r other) const -> apb1lpenr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb1lpenr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0b110110111111101100100111111111; // 922667519 0x36FEC9FF

private:
	uint32_t m_value;
};
/**
 * APB2 peripheral clock enabled in low power mode register
 */
class apb2lpenr_r {
public:

/**
 * TIM11 clock enable during Sleep mode
 */
class tim11lpen_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim11lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2lpenr_r>() const {return ClearSet<apb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb2lpenr_r other) const -> apb2lpenr_r { return static_cast<apb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2lpenr_r> other) const -> ClearSet<apb2lpenr_r> {return ClearSet<apb2lpenr_r>(apb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM10 clock enable during Sleep mode
 */
class tim10lpen_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim10lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2lpenr_r>() const {return ClearSet<apb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb2lpenr_r other) const -> apb2lpenr_r { return static_cast<apb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2lpenr_r> other) const -> ClearSet<apb2lpenr_r> {return ClearSet<apb2lpenr_r>(apb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM9 clock enable during sleep mode
 */
class tim9lpen_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tim9lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2lpenr_r>() const {return ClearSet<apb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb2lpenr_r other) const -> apb2lpenr_r { return static_cast<apb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2lpenr_r> other) const -> ClearSet<apb2lpenr_r> {return ClearSet<apb2lpenr_r>(apb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * System configuration controller clock enable during Sleep mode
 */
class syscfglpen_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr syscfglpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2lpenr_r>() const {return ClearSet<apb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb2lpenr_r other) const -> apb2lpenr_r { return static_cast<apb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2lpenr_r> other) const -> ClearSet<apb2lpenr_r> {return ClearSet<apb2lpenr_r>(apb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SPI 1 clock enable during Sleep mode
 */
class spi1lpen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spi1lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2lpenr_r>() const {return ClearSet<apb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb2lpenr_r other) const -> apb2lpenr_r { return static_cast<apb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2lpenr_r> other) const -> ClearSet<apb2lpenr_r> {return ClearSet<apb2lpenr_r>(apb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SDIO clock enable during Sleep mode
 */
class sdiolpen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sdiolpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2lpenr_r>() const {return ClearSet<apb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb2lpenr_r other) const -> apb2lpenr_r { return static_cast<apb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2lpenr_r> other) const -> ClearSet<apb2lpenr_r> {return ClearSet<apb2lpenr_r>(apb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ADC1 clock enable during Sleep mode
 */
class adc1lpen_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr adc1lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2lpenr_r>() const {return ClearSet<apb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb2lpenr_r other) const -> apb2lpenr_r { return static_cast<apb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2lpenr_r> other) const -> ClearSet<apb2lpenr_r> {return ClearSet<apb2lpenr_r>(apb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART6 clock enable during Sleep mode
 */
class usart6lpen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usart6lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2lpenr_r>() const {return ClearSet<apb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb2lpenr_r other) const -> apb2lpenr_r { return static_cast<apb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2lpenr_r> other) const -> ClearSet<apb2lpenr_r> {return ClearSet<apb2lpenr_r>(apb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USART1 clock enable during Sleep mode
 */
class usart1lpen_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usart1lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2lpenr_r>() const {return ClearSet<apb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb2lpenr_r other) const -> apb2lpenr_r { return static_cast<apb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2lpenr_r> other) const -> ClearSet<apb2lpenr_r> {return ClearSet<apb2lpenr_r>(apb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIM1 clock enable during Sleep mode
 */
class tim1lpen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tim1lpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator apb2lpenr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<apb2lpenr_r>() const {return ClearSet<apb2lpenr_r>(Mask, *this);}
	constexpr auto operator|(apb2lpenr_r other) const -> apb2lpenr_r { return static_cast<apb2lpenr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<apb2lpenr_r> other) const -> ClearSet<apb2lpenr_r> {return ClearSet<apb2lpenr_r>(apb2lpenr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tim11lpen() const -> tim11lpen_f {return tim11lpen_f((m_value & tim11lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim10lpen() const -> tim10lpen_f {return tim10lpen_f((m_value & tim10lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim9lpen() const -> tim9lpen_f {return tim9lpen_f((m_value & tim9lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto syscfglpen() const -> syscfglpen_f {return syscfglpen_f((m_value & syscfglpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spi1lpen() const -> spi1lpen_f {return spi1lpen_f((m_value & spi1lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sdiolpen() const -> sdiolpen_f {return sdiolpen_f((m_value & sdiolpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adc1lpen() const -> adc1lpen_f {return adc1lpen_f((m_value & adc1lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart6lpen() const -> usart6lpen_f {return usart6lpen_f((m_value & usart6lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usart1lpen() const -> usart1lpen_f {return usart1lpen_f((m_value & usart1lpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tim1lpen() const -> tim1lpen_f {return tim1lpen_f((m_value & tim1lpen_f::Mask) != 0);}

	constexpr apb2lpenr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(apb2lpenr_r other) const -> apb2lpenr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> apb2lpenr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 100;
	static constexpr uint32_t ResetValue = 0b1110101111100110011; // 483123 0x75F33

private:
	uint32_t m_value;
};
/**
 * Backup domain control register
 */
class bdcr_r {
public:

/**
 * Backup domain software reset
 */
class bdrst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bdrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
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
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RTC clock source selection
 */
class rtcsel1_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtcsel1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RTC clock source selection
 */
class rtcsel0_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtcsel0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External low-speed oscillator bypass
 */
class lsebyp_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsebyp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External low-speed oscillator ready
 */
class lserdy_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lserdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External low-speed oscillator enable
 */
class lseon_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lseon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdcr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<bdcr_r>() const {return ClearSet<bdcr_r>(Mask, *this);}
	constexpr auto operator|(bdcr_r other) const -> bdcr_r { return static_cast<bdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdcr_r> other) const -> ClearSet<bdcr_r> {return ClearSet<bdcr_r>(bdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto bdrst() const -> bdrst_f {return bdrst_f((m_value & bdrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtcen() const -> rtcen_f {return rtcen_f((m_value & rtcen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtcsel1() const -> rtcsel1_f {return rtcsel1_f((m_value & rtcsel1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtcsel0() const -> rtcsel0_f {return rtcsel0_f((m_value & rtcsel0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsebyp() const -> lsebyp_f {return lsebyp_f((m_value & lsebyp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lserdy() const -> lserdy_f {return lserdy_f((m_value & lserdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lseon() const -> lseon_f {return lseon_f((m_value & lseon_f::Mask) != 0);}

	constexpr bdcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bdcr_r other) const -> bdcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bdcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 112;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * clock control & status register
 */
class csr_r {
public:

/**
 * Low-power reset flag
 */
class lpwrrstf_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lpwrrstf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
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
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Independent watchdog reset flag
 */
class wdgrstf_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wdgrstf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
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
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * POR/PDR reset flag
 */
class porrstf_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr porrstf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PIN reset flag
 */
class padrstf_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr padrstf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BOR reset flag
 */
class borrstf_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr borrstf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
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
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rmvf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Internal low-speed oscillator ready
 */
class lsirdy_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsirdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Internal low-speed oscillator enable
 */
class lsion_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsion_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lpwrrstf() const -> lpwrrstf_f {return lpwrrstf_f((m_value & lpwrrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wwdgrstf() const -> wwdgrstf_f {return wwdgrstf_f((m_value & wwdgrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wdgrstf() const -> wdgrstf_f {return wdgrstf_f((m_value & wdgrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sftrstf() const -> sftrstf_f {return sftrstf_f((m_value & sftrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto porrstf() const -> porrstf_f {return porrstf_f((m_value & porrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto padrstf() const -> padrstf_f {return padrstf_f((m_value & padrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto borrstf() const -> borrstf_f {return borrstf_f((m_value & borrstf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rmvf() const -> rmvf_f {return rmvf_f((m_value & rmvf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsirdy() const -> lsirdy_f {return lsirdy_f((m_value & lsirdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsion() const -> lsion_f {return lsion_f((m_value & lsion_f::Mask) != 0);}

	constexpr csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(csr_r other) const -> csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 116;
	static constexpr uint32_t ResetValue = 0b1110000000000000000000000000; // 234881024 0xE000000

private:
	uint32_t m_value;
};
/**
 * spread spectrum clock generation register
 */
class sscgr_r {
public:

/**
 * Spread spectrum modulation enable
 */
class sscgen_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sscgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sscgr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<sscgr_r>() const {return ClearSet<sscgr_r>(Mask, *this);}
	constexpr auto operator|(sscgr_r other) const -> sscgr_r { return static_cast<sscgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sscgr_r> other) const -> ClearSet<sscgr_r> {return ClearSet<sscgr_r>(sscgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Spread Select
 */
class spreadsel_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr spreadsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sscgr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<sscgr_r>() const {return ClearSet<sscgr_r>(Mask, *this);}
	constexpr auto operator|(sscgr_r other) const -> sscgr_r { return static_cast<sscgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sscgr_r> other) const -> ClearSet<sscgr_r> {return ClearSet<sscgr_r>(sscgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Incrementation step
 */
class incstep_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 15;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr incstep_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator sscgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<sscgr_r>() const {return ClearSet<sscgr_r>(Mask, *this);}
	constexpr auto operator|(sscgr_r other) const -> sscgr_r { return static_cast<sscgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sscgr_r> other) const -> ClearSet<sscgr_r> {return ClearSet<sscgr_r>(sscgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Modulation period
 */
class modper_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 13;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr modper_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator sscgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr operator ClearSet<sscgr_r>() const {return ClearSet<sscgr_r>(Mask, *this);}
	constexpr auto operator|(sscgr_r other) const -> sscgr_r { return static_cast<sscgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sscgr_r> other) const -> ClearSet<sscgr_r> {return ClearSet<sscgr_r>(sscgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto sscgen() const -> sscgen_f {return sscgen_f((m_value & sscgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spreadsel() const -> spreadsel_f {return spreadsel_f((m_value & spreadsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto incstep() const -> incstep_f {return incstep_f(static_cast<uint16_t>(m_value >> incstep_f::Offset));}
	[[nodiscard]] constexpr auto modper() const -> modper_f {return modper_f(static_cast<uint16_t>(m_value >> modper_f::Offset));}

	constexpr sscgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sscgr_r other) const -> sscgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sscgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * PLLI2S configuration register
 */
class plli2scfgr_r {
public:

/**
 * PLLI2S division factor for I2S clocks
 */
class plli2srx_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr plli2srx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator plli2scfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<plli2scfgr_r>() const {return ClearSet<plli2scfgr_r>(Mask, *this);}
	constexpr auto operator|(plli2scfgr_r other) const -> plli2scfgr_r { return static_cast<plli2scfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<plli2scfgr_r> other) const -> ClearSet<plli2scfgr_r> {return ClearSet<plli2scfgr_r>(plli2scfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PLLI2S multiplication factor for VCO
 */
class plli2snx_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr plli2snx_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator plli2scfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr operator ClearSet<plli2scfgr_r>() const {return ClearSet<plli2scfgr_r>(Mask, *this);}
	constexpr auto operator|(plli2scfgr_r other) const -> plli2scfgr_r { return static_cast<plli2scfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<plli2scfgr_r> other) const -> ClearSet<plli2scfgr_r> {return ClearSet<plli2scfgr_r>(plli2scfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto plli2srx() const -> plli2srx_f {return plli2srx_f(static_cast<uint8_t>(m_value >> plli2srx_f::Offset));}
	[[nodiscard]] constexpr auto plli2snx() const -> plli2snx_f {return plli2snx_f(static_cast<uint16_t>(m_value >> plli2snx_f::Offset));}

	constexpr plli2scfgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(plli2scfgr_r other) const -> plli2scfgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> plli2scfgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 132;
	static constexpr uint32_t ResetValue = 0b100000000000000011000000000000; // 536883200 0x20003000

private:
	uint32_t m_value;
};

	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,pllcfgr_r> pllcfgr;
	Memory<uint32_t,cfgr_r> cfgr;
	Memory<uint32_t,cir_r> cir;
	Memory<uint32_t,ahb1rstr_r> ahb1rstr;
	Memory<uint32_t,ahb2rstr_r> ahb2rstr;
	Padding<8> _p24;
	Memory<uint32_t,apb1rstr_r> apb1rstr;
	Memory<uint32_t,apb2rstr_r> apb2rstr;
	Padding<8> _p40;
	Memory<uint32_t,ahb1enr_r> ahb1enr;
	Memory<uint32_t,ahb2enr_r> ahb2enr;
	Padding<8> _p56;
	Memory<uint32_t,apb1enr_r> apb1enr;
	Memory<uint32_t,apb2enr_r> apb2enr;
	Padding<8> _p72;
	Memory<uint32_t,ahb1lpenr_r> ahb1lpenr;
	Memory<uint32_t,ahb2lpenr_r> ahb2lpenr;
	Padding<8> _p88;
	Memory<uint32_t,apb1lpenr_r> apb1lpenr;
	Memory<uint32_t,apb2lpenr_r> apb2lpenr;
	Padding<8> _p104;
	Memory<uint32_t,bdcr_r> bdcr;
	Memory<uint32_t,csr_r> csr;
	Padding<8> _p120;
	Memory<uint32_t,sscgr_r> sscgr;
	Memory<uint32_t,plli2scfgr_r> plli2scfgr;
};

static_assert(std::is_standard_layout_v<rcc_p>);
static_assert(offsetof(rcc_p, cr) == rcc_p::cr_r::Offset);
static_assert(offsetof(rcc_p, pllcfgr) == rcc_p::pllcfgr_r::Offset);
static_assert(offsetof(rcc_p, cfgr) == rcc_p::cfgr_r::Offset);
static_assert(offsetof(rcc_p, cir) == rcc_p::cir_r::Offset);
static_assert(offsetof(rcc_p, ahb1rstr) == rcc_p::ahb1rstr_r::Offset);
static_assert(offsetof(rcc_p, ahb2rstr) == rcc_p::ahb2rstr_r::Offset);
static_assert(offsetof(rcc_p, apb1rstr) == rcc_p::apb1rstr_r::Offset);
static_assert(offsetof(rcc_p, apb2rstr) == rcc_p::apb2rstr_r::Offset);
static_assert(offsetof(rcc_p, ahb1enr) == rcc_p::ahb1enr_r::Offset);
static_assert(offsetof(rcc_p, ahb2enr) == rcc_p::ahb2enr_r::Offset);
static_assert(offsetof(rcc_p, apb1enr) == rcc_p::apb1enr_r::Offset);
static_assert(offsetof(rcc_p, apb2enr) == rcc_p::apb2enr_r::Offset);
static_assert(offsetof(rcc_p, ahb1lpenr) == rcc_p::ahb1lpenr_r::Offset);
static_assert(offsetof(rcc_p, ahb2lpenr) == rcc_p::ahb2lpenr_r::Offset);
static_assert(offsetof(rcc_p, apb1lpenr) == rcc_p::apb1lpenr_r::Offset);
static_assert(offsetof(rcc_p, apb2lpenr) == rcc_p::apb2lpenr_r::Offset);
static_assert(offsetof(rcc_p, bdcr) == rcc_p::bdcr_r::Offset);
static_assert(offsetof(rcc_p, csr) == rcc_p::csr_r::Offset);
static_assert(offsetof(rcc_p, sscgr) == rcc_p::sscgr_r::Offset);
static_assert(offsetof(rcc_p, plli2scfgr) == rcc_p::plli2scfgr_r::Offset);

inline rcc_p& rcc = *reinterpret_cast<rcc_p*>(0x40023800);

} // STM32F401

