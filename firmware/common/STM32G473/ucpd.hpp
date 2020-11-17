#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * UCPD1
 */
class ucpd_p {
public:
/**
 * UCPD configuration register 1
 */
class cfg1_r {
public:

/**
 * HBITCLKDIV
 */
class hbitclkdiv_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr hbitclkdiv_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfg1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cfg1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg1_r>() const {return ClearSet<cfg1_r>(Mask, *this);}
	constexpr auto operator|(cfg1_r other) const -> cfg1_r { return static_cast<cfg1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg1_r> other) const -> ClearSet<cfg1_r> {return ClearSet<cfg1_r>(cfg1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * IFRGAP
 */
class ifrgap_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ifrgap_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfg1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfg1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg1_r>() const {return ClearSet<cfg1_r>(Mask, *this);}
	constexpr auto operator|(cfg1_r other) const -> cfg1_r { return static_cast<cfg1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg1_r> other) const -> ClearSet<cfg1_r> {return ClearSet<cfg1_r>(cfg1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TRANSWIN
 */
class transwin_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr transwin_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfg1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfg1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg1_r>() const {return ClearSet<cfg1_r>(Mask, *this);}
	constexpr auto operator|(cfg1_r other) const -> cfg1_r { return static_cast<cfg1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg1_r> other) const -> ClearSet<cfg1_r> {return ClearSet<cfg1_r>(cfg1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PSC_USBPDCLK
 */
class psc_usbpdclk_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr psc_usbpdclk_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfg1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cfg1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg1_r>() const {return ClearSet<cfg1_r>(Mask, *this);}
	constexpr auto operator|(cfg1_r other) const -> cfg1_r { return static_cast<cfg1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg1_r> other) const -> ClearSet<cfg1_r> {return ClearSet<cfg1_r>(cfg1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RXORDSETEN
 */
class rxordseten_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rxordseten_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cfg1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cfg1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg1_r>() const {return ClearSet<cfg1_r>(Mask, *this);}
	constexpr auto operator|(cfg1_r other) const -> cfg1_r { return static_cast<cfg1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg1_r> other) const -> ClearSet<cfg1_r> {return ClearSet<cfg1_r>(cfg1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * TXDMAEN
 */
class txdmaen_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txdmaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfg1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfg1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg1_r>() const {return ClearSet<cfg1_r>(Mask, *this);}
	constexpr auto operator|(cfg1_r other) const -> cfg1_r { return static_cast<cfg1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg1_r> other) const -> ClearSet<cfg1_r> {return ClearSet<cfg1_r>(cfg1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXDMAEN
 */
class rxdmaen_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxdmaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfg1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfg1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg1_r>() const {return ClearSet<cfg1_r>(Mask, *this);}
	constexpr auto operator|(cfg1_r other) const -> cfg1_r { return static_cast<cfg1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg1_r> other) const -> ClearSet<cfg1_r> {return ClearSet<cfg1_r>(cfg1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * UCPDEN
 */
class ucpden_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ucpden_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfg1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfg1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg1_r>() const {return ClearSet<cfg1_r>(Mask, *this);}
	constexpr auto operator|(cfg1_r other) const -> cfg1_r { return static_cast<cfg1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg1_r> other) const -> ClearSet<cfg1_r> {return ClearSet<cfg1_r>(cfg1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto hbitclkdiv() const -> hbitclkdiv_f {return hbitclkdiv_f(static_cast<uint8_t>(m_value >> hbitclkdiv_f::Offset));}
	[[nodiscard]] constexpr auto ifrgap() const -> ifrgap_f {return ifrgap_f(static_cast<uint8_t>(m_value >> ifrgap_f::Offset));}
	[[nodiscard]] constexpr auto transwin() const -> transwin_f {return transwin_f(static_cast<uint8_t>(m_value >> transwin_f::Offset));}
	[[nodiscard]] constexpr auto psc_usbpdclk() const -> psc_usbpdclk_f {return psc_usbpdclk_f(static_cast<uint8_t>(m_value >> psc_usbpdclk_f::Offset));}
	[[nodiscard]] constexpr auto rxordseten() const -> rxordseten_f {return rxordseten_f(static_cast<uint16_t>(m_value >> rxordseten_f::Offset));}
	[[nodiscard]] constexpr auto txdmaen() const -> txdmaen_f {return txdmaen_f((m_value & txdmaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxdmaen() const -> rxdmaen_f {return rxdmaen_f((m_value & rxdmaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ucpden() const -> ucpden_f {return ucpden_f((m_value & ucpden_f::Mask) != 0);}

	constexpr cfg1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfg1_r other) const -> cfg1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfg1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD configuration register 2
 */
class cfg2_r {
public:

/**
 * RXFILTDIS
 */
class rxfiltdis_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxfiltdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfg2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfg2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg2_r>() const {return ClearSet<cfg2_r>(Mask, *this);}
	constexpr auto operator|(cfg2_r other) const -> cfg2_r { return static_cast<cfg2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg2_r> other) const -> ClearSet<cfg2_r> {return ClearSet<cfg2_r>(cfg2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXFILT2N3
 */
class rxfilt2n3_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxfilt2n3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfg2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfg2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg2_r>() const {return ClearSet<cfg2_r>(Mask, *this);}
	constexpr auto operator|(cfg2_r other) const -> cfg2_r { return static_cast<cfg2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg2_r> other) const -> ClearSet<cfg2_r> {return ClearSet<cfg2_r>(cfg2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FORCECLK
 */
class forceclk_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr forceclk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfg2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfg2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg2_r>() const {return ClearSet<cfg2_r>(Mask, *this);}
	constexpr auto operator|(cfg2_r other) const -> cfg2_r { return static_cast<cfg2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg2_r> other) const -> ClearSet<cfg2_r> {return ClearSet<cfg2_r>(cfg2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WUPEN
 */
class wupen_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wupen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfg2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfg2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfg2_r>() const {return ClearSet<cfg2_r>(Mask, *this);}
	constexpr auto operator|(cfg2_r other) const -> cfg2_r { return static_cast<cfg2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfg2_r> other) const -> ClearSet<cfg2_r> {return ClearSet<cfg2_r>(cfg2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rxfiltdis() const -> rxfiltdis_f {return rxfiltdis_f((m_value & rxfiltdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfilt2n3() const -> rxfilt2n3_f {return rxfilt2n3_f((m_value & rxfilt2n3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto forceclk() const -> forceclk_f {return forceclk_f((m_value & forceclk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wupen() const -> wupen_f {return wupen_f((m_value & wupen_f::Mask) != 0);}

	constexpr cfg2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfg2_r other) const -> cfg2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfg2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD configuration register 2
 */
class cr_r {
public:

/**
 * TXMODE
 */
class txmode_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr txmode_f(uint8_t value) : m_value(value & Range) {}
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
 * TXSEND
 */
class txsend_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txsend_f(bool value = true) : m_value(value) {}
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
 * TXHRST
 */
class txhrst_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txhrst_f(bool value = true) : m_value(value) {}
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
 * RXMODE
 */
class rxmode_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxmode_f(bool value = true) : m_value(value) {}
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
 * PHYRXEN
 */
class phyrxen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr phyrxen_f(bool value = true) : m_value(value) {}
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
 * PHYCCSEL
 */
class phyccsel_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr phyccsel_f(bool value = true) : m_value(value) {}
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
 * ANASUBMODE
 */
class anasubmode_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr anasubmode_f(uint8_t value) : m_value(value & Range) {}
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
 * ANAMODE
 */
class anamode_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr anamode_f(bool value = true) : m_value(value) {}
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
 * CCENABLE
 */
class ccenable_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccenable_f(uint8_t value) : m_value(value & Range) {}
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
 * FRSRXEN
 */
class frsrxen_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr frsrxen_f(bool value = true) : m_value(value) {}
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
 * FRSTX
 */
class frstx_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr frstx_f(bool value = true) : m_value(value) {}
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
 * RDCH
 */
class rdch_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rdch_f(bool value = true) : m_value(value) {}
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
 * CC1TCDIS
 */
class cc1tcdis_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc1tcdis_f(bool value = true) : m_value(value) {}
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
 * CC2TCDIS
 */
class cc2tcdis_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc2tcdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txmode() const -> txmode_f {return txmode_f(static_cast<uint8_t>(m_value >> txmode_f::Offset));}
	[[nodiscard]] constexpr auto txsend() const -> txsend_f {return txsend_f((m_value & txsend_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txhrst() const -> txhrst_f {return txhrst_f((m_value & txhrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxmode() const -> rxmode_f {return rxmode_f((m_value & rxmode_f::Mask) != 0);}
	[[nodiscard]] constexpr auto phyrxen() const -> phyrxen_f {return phyrxen_f((m_value & phyrxen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto phyccsel() const -> phyccsel_f {return phyccsel_f((m_value & phyccsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto anasubmode() const -> anasubmode_f {return anasubmode_f(static_cast<uint8_t>(m_value >> anasubmode_f::Offset));}
	[[nodiscard]] constexpr auto anamode() const -> anamode_f {return anamode_f((m_value & anamode_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccenable() const -> ccenable_f {return ccenable_f(static_cast<uint8_t>(m_value >> ccenable_f::Offset));}
	[[nodiscard]] constexpr auto frsrxen() const -> frsrxen_f {return frsrxen_f((m_value & frsrxen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frstx() const -> frstx_f {return frstx_f((m_value & frstx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rdch() const -> rdch_f {return rdch_f((m_value & rdch_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1tcdis() const -> cc1tcdis_f {return cc1tcdis_f((m_value & cc1tcdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2tcdis() const -> cc2tcdis_f {return cc2tcdis_f((m_value & cc2tcdis_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Interrupt Mask Register
 */
class imr_r {
public:

/**
 * TXISIE
 */
class txisie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txisie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXMSGDISCIE
 */
class txmsgdiscie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txmsgdiscie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXMSGSENTIE
 */
class txmsgsentie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txmsgsentie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXMSGABTIE
 */
class txmsgabtie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txmsgabtie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HRSTDISCIE
 */
class hrstdiscie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hrstdiscie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HRSTSENTIE
 */
class hrstsentie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hrstsentie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXUNDIE
 */
class txundie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txundie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXNEIE
 */
class rxneie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxneie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXORDDETIE
 */
class rxorddetie_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxorddetie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXHRSTDETIE
 */
class rxhrstdetie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxhrstdetie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXOVRIE
 */
class rxovrie_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxovrie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXMSGENDIE
 */
class rxmsgendie_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxmsgendie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TYPECEVT1IE
 */
class typecevt1ie_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr typecevt1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TYPECEVT2IE
 */
class typecevt2ie_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr typecevt2ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FRSEVTIE
 */
class frsevtie_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr frsevtie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txisie() const -> txisie_f {return txisie_f((m_value & txisie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txmsgdiscie() const -> txmsgdiscie_f {return txmsgdiscie_f((m_value & txmsgdiscie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txmsgsentie() const -> txmsgsentie_f {return txmsgsentie_f((m_value & txmsgsentie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txmsgabtie() const -> txmsgabtie_f {return txmsgabtie_f((m_value & txmsgabtie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hrstdiscie() const -> hrstdiscie_f {return hrstdiscie_f((m_value & hrstdiscie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hrstsentie() const -> hrstsentie_f {return hrstsentie_f((m_value & hrstsentie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txundie() const -> txundie_f {return txundie_f((m_value & txundie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxneie() const -> rxneie_f {return rxneie_f((m_value & rxneie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxorddetie() const -> rxorddetie_f {return rxorddetie_f((m_value & rxorddetie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxhrstdetie() const -> rxhrstdetie_f {return rxhrstdetie_f((m_value & rxhrstdetie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxovrie() const -> rxovrie_f {return rxovrie_f((m_value & rxovrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxmsgendie() const -> rxmsgendie_f {return rxmsgendie_f((m_value & rxmsgendie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto typecevt1ie() const -> typecevt1ie_f {return typecevt1ie_f((m_value & typecevt1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto typecevt2ie() const -> typecevt2ie_f {return typecevt2ie_f((m_value & typecevt2ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frsevtie() const -> frsevtie_f {return frsevtie_f((m_value & frsevtie_f::Mask) != 0);}

	constexpr imr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(imr_r other) const -> imr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> imr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Status Register
 */
class sr_r {
public:

/**
 * TXIS
 */
class txis_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txis_f(bool value = true) : m_value(value) {}
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
 * TXMSGDISC
 */
class txmsgdisc_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txmsgdisc_f(bool value = true) : m_value(value) {}
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
 * TXMSGSENT
 */
class txmsgsent_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txmsgsent_f(bool value = true) : m_value(value) {}
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
 * TXMSGABT
 */
class txmsgabt_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txmsgabt_f(bool value = true) : m_value(value) {}
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
 * HRSTDISC
 */
class hrstdisc_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hrstdisc_f(bool value = true) : m_value(value) {}
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
 * HRSTSENT
 */
class hrstsent_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hrstsent_f(bool value = true) : m_value(value) {}
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
 * TXUND
 */
class txund_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txund_f(bool value = true) : m_value(value) {}
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
 * RXNE
 */
class rxne_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxne_f(bool value = true) : m_value(value) {}
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
 * RXORDDET
 */
class rxorddet_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxorddet_f(bool value = true) : m_value(value) {}
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
 * RXHRSTDET
 */
class rxhrstdet_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxhrstdet_f(bool value = true) : m_value(value) {}
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
 * RXOVR
 */
class rxovr_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxovr_f(bool value = true) : m_value(value) {}
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
 * RXMSGEND
 */
class rxmsgend_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxmsgend_f(bool value = true) : m_value(value) {}
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
 * RXERR
 */
class rxerr_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxerr_f(bool value = true) : m_value(value) {}
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
 * TYPECEVT1
 */
class typecevt1_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr typecevt1_f(bool value = true) : m_value(value) {}
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
 * TYPECEVT2
 */
class typecevt2_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr typecevt2_f(bool value = true) : m_value(value) {}
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
 * TYPEC_VSTATE_CC1
 */
class typec_vstate_cc1_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr typec_vstate_cc1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TYPEC_VSTATE_CC2
 */
class typec_vstate_cc2_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr typec_vstate_cc2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(sr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * FRSEVT
 */
class frsevt_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr frsevt_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txis() const -> txis_f {return txis_f((m_value & txis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txmsgdisc() const -> txmsgdisc_f {return txmsgdisc_f((m_value & txmsgdisc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txmsgsent() const -> txmsgsent_f {return txmsgsent_f((m_value & txmsgsent_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txmsgabt() const -> txmsgabt_f {return txmsgabt_f((m_value & txmsgabt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hrstdisc() const -> hrstdisc_f {return hrstdisc_f((m_value & hrstdisc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hrstsent() const -> hrstsent_f {return hrstsent_f((m_value & hrstsent_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txund() const -> txund_f {return txund_f((m_value & txund_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxne() const -> rxne_f {return rxne_f((m_value & rxne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxorddet() const -> rxorddet_f {return rxorddet_f((m_value & rxorddet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxhrstdet() const -> rxhrstdet_f {return rxhrstdet_f((m_value & rxhrstdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxovr() const -> rxovr_f {return rxovr_f((m_value & rxovr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxmsgend() const -> rxmsgend_f {return rxmsgend_f((m_value & rxmsgend_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxerr() const -> rxerr_f {return rxerr_f((m_value & rxerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto typecevt1() const -> typecevt1_f {return typecevt1_f((m_value & typecevt1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto typecevt2() const -> typecevt2_f {return typecevt2_f((m_value & typecevt2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto typec_vstate_cc1() const -> typec_vstate_cc1_f {return typec_vstate_cc1_f(static_cast<uint8_t>(m_value >> typec_vstate_cc1_f::Offset));}
	[[nodiscard]] constexpr auto typec_vstate_cc2() const -> typec_vstate_cc2_f {return typec_vstate_cc2_f(static_cast<uint8_t>(m_value >> typec_vstate_cc2_f::Offset));}
	[[nodiscard]] constexpr auto frsevt() const -> frsevt_f {return frsevt_f((m_value & frsevt_f::Mask) != 0);}

	template<std::size_t Index> struct typecevt_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using typecevt_v = typename typecevt_f<Index>::type;
	template<std::size_t Index> constexpr auto typecevt() const { return typecevt_v<Index>::get(*this); }

	template<std::size_t Index> struct typec_vstate_cc_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using typec_vstate_cc_v = typename typec_vstate_cc_f<Index>::type;
	template<std::size_t Index> constexpr auto typec_vstate_cc() const { return typec_vstate_cc_v<Index>::get(*this); }

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Interrupt Clear Register
 */
class icr_r {
public:

/**
 * TXMSGDISCCF
 */
class txmsgdisccf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txmsgdisccf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXMSGSENTCF
 */
class txmsgsentcf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txmsgsentcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXMSGABTCF
 */
class txmsgabtcf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txmsgabtcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HRSTDISCCF
 */
class hrstdisccf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hrstdisccf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HRSTSENTCF
 */
class hrstsentcf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hrstsentcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXUNDCF
 */
class txundcf_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txundcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXORDDETCF
 */
class rxorddetcf_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxorddetcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXHRSTDETCF
 */
class rxhrstdetcf_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxhrstdetcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXOVRCF
 */
class rxovrcf_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxovrcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXMSGENDCF
 */
class rxmsgendcf_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxmsgendcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TYPECEVT1CF
 */
class typecevt1cf_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr typecevt1cf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TYPECEVT2CF
 */
class typecevt2cf_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr typecevt2cf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FRSEVTCF
 */
class frsevtcf_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr frsevtcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txmsgdisccf() const -> txmsgdisccf_f {return txmsgdisccf_f((m_value & txmsgdisccf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txmsgsentcf() const -> txmsgsentcf_f {return txmsgsentcf_f((m_value & txmsgsentcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txmsgabtcf() const -> txmsgabtcf_f {return txmsgabtcf_f((m_value & txmsgabtcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hrstdisccf() const -> hrstdisccf_f {return hrstdisccf_f((m_value & hrstdisccf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hrstsentcf() const -> hrstsentcf_f {return hrstsentcf_f((m_value & hrstsentcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txundcf() const -> txundcf_f {return txundcf_f((m_value & txundcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxorddetcf() const -> rxorddetcf_f {return rxorddetcf_f((m_value & rxorddetcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxhrstdetcf() const -> rxhrstdetcf_f {return rxhrstdetcf_f((m_value & rxhrstdetcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxovrcf() const -> rxovrcf_f {return rxovrcf_f((m_value & rxovrcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxmsgendcf() const -> rxmsgendcf_f {return rxmsgendcf_f((m_value & rxmsgendcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto typecevt1cf() const -> typecevt1cf_f {return typecevt1cf_f((m_value & typecevt1cf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto typecevt2cf() const -> typecevt2cf_f {return typecevt2cf_f((m_value & typecevt2cf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frsevtcf() const -> frsevtcf_f {return frsevtcf_f((m_value & frsevtcf_f::Mask) != 0);}

	constexpr icr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icr_r other) const -> icr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Tx Ordered Set Type Register
 */
class tx_ordset_r {
public:

/**
 * TXORDSET
 */
class txordset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 20;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr txordset_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator tx_ordset_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tx_ordset_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tx_ordset_r>() const {return ClearSet<tx_ordset_r>(Mask, *this);}
	constexpr auto operator|(tx_ordset_r other) const -> tx_ordset_r { return static_cast<tx_ordset_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tx_ordset_r> other) const -> ClearSet<tx_ordset_r> {return ClearSet<tx_ordset_r>(tx_ordset_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto txordset() const -> txordset_f {return txordset_f(static_cast<uint32_t>(m_value >> txordset_f::Offset));}

	constexpr tx_ordset_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tx_ordset_r other) const -> tx_ordset_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tx_ordset_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Tx Paysize Register
 */
class tx_paysz_r {
public:

/**
 * TXPAYSZ
 */
class txpaysz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr txpaysz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tx_paysz_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tx_paysz_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tx_paysz_r>() const {return ClearSet<tx_paysz_r>(Mask, *this);}
	constexpr auto operator|(tx_paysz_r other) const -> tx_paysz_r { return static_cast<tx_paysz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tx_paysz_r> other) const -> ClearSet<tx_paysz_r> {return ClearSet<tx_paysz_r>(tx_paysz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto txpaysz() const -> txpaysz_f {return txpaysz_f(static_cast<uint16_t>(m_value >> txpaysz_f::Offset));}

	constexpr tx_paysz_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tx_paysz_r other) const -> tx_paysz_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tx_paysz_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Tx Data Register
 */
class txdr_r {
public:

/**
 * TXDATA
 */
class txdata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr txdata_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txdr_r>() const {return ClearSet<txdr_r>(Mask, *this);}
	constexpr auto operator|(txdr_r other) const -> txdr_r { return static_cast<txdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txdr_r> other) const -> ClearSet<txdr_r> {return ClearSet<txdr_r>(txdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto txdata() const -> txdata_f {return txdata_f(static_cast<uint8_t>(m_value >> txdata_f::Offset));}

	constexpr txdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txdr_r other) const -> txdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Rx Ordered Set Register
 */
class rx_ordset_r {
public:

/**
 * RXORDSET
 */
class rxordset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr rxordset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rx_ordset_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rx_ordset_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rx_ordset_r>() const {return ClearSet<rx_ordset_r>(Mask, *this);}
	constexpr auto operator|(rx_ordset_r other) const -> rx_ordset_r { return static_cast<rx_ordset_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rx_ordset_r> other) const -> ClearSet<rx_ordset_r> {return ClearSet<rx_ordset_r>(rx_ordset_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RXSOP3OF4
 */
class rxsop3of4_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxsop3of4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rx_ordset_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rx_ordset_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rx_ordset_r>() const {return ClearSet<rx_ordset_r>(Mask, *this);}
	constexpr auto operator|(rx_ordset_r other) const -> rx_ordset_r { return static_cast<rx_ordset_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rx_ordset_r> other) const -> ClearSet<rx_ordset_r> {return ClearSet<rx_ordset_r>(rx_ordset_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXSOPKINVALID
 */
class rxsopkinvalid_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr rxsopkinvalid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rx_ordset_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rx_ordset_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rx_ordset_r>() const {return ClearSet<rx_ordset_r>(Mask, *this);}
	constexpr auto operator|(rx_ordset_r other) const -> rx_ordset_r { return static_cast<rx_ordset_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rx_ordset_r> other) const -> ClearSet<rx_ordset_r> {return ClearSet<rx_ordset_r>(rx_ordset_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto rxordset() const -> rxordset_f {return rxordset_f(static_cast<uint8_t>(m_value >> rxordset_f::Offset));}
	[[nodiscard]] constexpr auto rxsop3of4() const -> rxsop3of4_f {return rxsop3of4_f((m_value & rxsop3of4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxsopkinvalid() const -> rxsopkinvalid_f {return rxsopkinvalid_f(static_cast<uint8_t>(m_value >> rxsopkinvalid_f::Offset));}

	constexpr rx_ordset_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rx_ordset_r other) const -> rx_ordset_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rx_ordset_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Rx Paysize Register
 */
class rx_paysz_r {
public:

/**
 * RXPAYSZ
 */
class rxpaysz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rxpaysz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator rx_paysz_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rx_paysz_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rx_paysz_r>() const {return ClearSet<rx_paysz_r>(Mask, *this);}
	constexpr auto operator|(rx_paysz_r other) const -> rx_paysz_r { return static_cast<rx_paysz_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rx_paysz_r> other) const -> ClearSet<rx_paysz_r> {return ClearSet<rx_paysz_r>(rx_paysz_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rxpaysz() const -> rxpaysz_f {return rxpaysz_f(static_cast<uint16_t>(m_value >> rxpaysz_f::Offset));}

	constexpr rx_paysz_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rx_paysz_r other) const -> rx_paysz_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rx_paysz_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Rx Data Register
 */
class rxdr_r {
public:

/**
 * RXDATA
 */
class rxdata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr rxdata_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rxdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxdr_r>() const {return ClearSet<rxdr_r>(Mask, *this);}
	constexpr auto operator|(rxdr_r other) const -> rxdr_r { return static_cast<rxdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxdr_r> other) const -> ClearSet<rxdr_r> {return ClearSet<rxdr_r>(rxdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto rxdata() const -> rxdata_f {return rxdata_f(static_cast<uint8_t>(m_value >> rxdata_f::Offset));}

	constexpr rxdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rxdr_r other) const -> rxdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rxdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Rx Ordered Set Extension Register 1
 */
class rx_ordext1_r {
public:

/**
 * RXSOPX1
 */
class rxsopx1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 20;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rxsopx1_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator rx_ordext1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rx_ordext1_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rx_ordext1_r>() const {return ClearSet<rx_ordext1_r>(Mask, *this);}
	constexpr auto operator|(rx_ordext1_r other) const -> rx_ordext1_r { return static_cast<rx_ordext1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rx_ordext1_r> other) const -> ClearSet<rx_ordext1_r> {return ClearSet<rx_ordext1_r>(rx_ordext1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto rxsopx1() const -> rxsopx1_f {return rxsopx1_f(static_cast<uint32_t>(m_value >> rxsopx1_f::Offset));}

	constexpr rx_ordext1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rx_ordext1_r other) const -> rx_ordext1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rx_ordext1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * UCPD Rx Ordered Set Extension Register 2
 */
class rx_ordext2_r {
public:

/**
 * RXSOPX2
 */
class rxsopx2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 20;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rxsopx2_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator rx_ordext2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rx_ordext2_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rx_ordext2_r>() const {return ClearSet<rx_ordext2_r>(Mask, *this);}
	constexpr auto operator|(rx_ordext2_r other) const -> rx_ordext2_r { return static_cast<rx_ordext2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rx_ordext2_r> other) const -> ClearSet<rx_ordext2_r> {return ClearSet<rx_ordext2_r>(rx_ordext2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto rxsopx2() const -> rxsopx2_f {return rxsopx2_f(static_cast<uint32_t>(m_value >> rxsopx2_f::Offset));}

	constexpr rx_ordext2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rx_ordext2_r other) const -> rx_ordext2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rx_ordext2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cfg_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cfg_v = typename cfg_r<Index>::type;
	template<std::size_t Index> constexpr auto& cfg() { }

	template<std::size_t Index> struct rx_ordext_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using rx_ordext_v = typename rx_ordext_r<Index>::type;
	template<std::size_t Index> constexpr auto& rx_ordext() { }

	Memory<uint32_t,cfg1_r> cfg1;
	Memory<uint32_t,cfg2_r> cfg2;
	Padding<4> _p8;
	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,imr_r> imr;
	Memory<uint32_t,sr_r> sr;
	Memory<uint32_t,icr_r> icr;
	Memory<uint32_t,tx_ordset_r> tx_ordset;
	Memory<uint32_t,tx_paysz_r> tx_paysz;
	Memory<uint32_t,txdr_r> txdr;
	ReadOnlyMemory<uint32_t,rx_ordset_r> rx_ordset;
	ReadOnlyMemory<uint32_t,rx_paysz_r> rx_paysz;
	ReadOnlyMemory<uint32_t,rxdr_r> rxdr;
	Memory<uint32_t,rx_ordext1_r> rx_ordext1;
	Memory<uint32_t,rx_ordext2_r> rx_ordext2;
};

template<> struct ucpd_p::sr_r::typecevt_f<1> { using type = ucpd_p::sr_r::typecevt1_f; };
template<> struct ucpd_p::sr_r::typecevt_f<2> { using type = ucpd_p::sr_r::typecevt2_f; };
template<> struct ucpd_p::sr_r::typec_vstate_cc_f<1> { using type = ucpd_p::sr_r::typec_vstate_cc1_f; };
template<> struct ucpd_p::sr_r::typec_vstate_cc_f<2> { using type = ucpd_p::sr_r::typec_vstate_cc2_f; };

template<> constexpr auto& ucpd_p::cfg<1>() { return cfg1; }
template<> constexpr auto& ucpd_p::cfg<2>() { return cfg2; }

template<> struct ucpd_p::cfg_r<1> { using type = ucpd_p::cfg1_r; };
template<> struct ucpd_p::cfg_r<2> { using type = ucpd_p::cfg2_r; };

template<> constexpr auto& ucpd_p::rx_ordext<1>() { return rx_ordext1; }
template<> constexpr auto& ucpd_p::rx_ordext<2>() { return rx_ordext2; }

template<> struct ucpd_p::rx_ordext_r<1> { using type = ucpd_p::rx_ordext1_r; };
template<> struct ucpd_p::rx_ordext_r<2> { using type = ucpd_p::rx_ordext2_r; };

static_assert(std::is_standard_layout_v<ucpd_p>);
static_assert(offsetof(ucpd_p, cfg1) == ucpd_p::cfg1_r::Offset);
static_assert(offsetof(ucpd_p, cfg2) == ucpd_p::cfg2_r::Offset);
static_assert(offsetof(ucpd_p, cr) == ucpd_p::cr_r::Offset);
static_assert(offsetof(ucpd_p, imr) == ucpd_p::imr_r::Offset);
static_assert(offsetof(ucpd_p, sr) == ucpd_p::sr_r::Offset);
static_assert(offsetof(ucpd_p, icr) == ucpd_p::icr_r::Offset);
static_assert(offsetof(ucpd_p, tx_ordset) == ucpd_p::tx_ordset_r::Offset);
static_assert(offsetof(ucpd_p, tx_paysz) == ucpd_p::tx_paysz_r::Offset);
static_assert(offsetof(ucpd_p, txdr) == ucpd_p::txdr_r::Offset);
static_assert(offsetof(ucpd_p, rx_ordset) == ucpd_p::rx_ordset_r::Offset);
static_assert(offsetof(ucpd_p, rx_paysz) == ucpd_p::rx_paysz_r::Offset);
static_assert(offsetof(ucpd_p, rxdr) == ucpd_p::rxdr_r::Offset);
static_assert(offsetof(ucpd_p, rx_ordext1) == ucpd_p::rx_ordext1_r::Offset);
static_assert(offsetof(ucpd_p, rx_ordext2) == ucpd_p::rx_ordext2_r::Offset);

inline ucpd_p& ucpd1 = *reinterpret_cast<ucpd_p*>(0x4000A000);

} // STM32G473XX

