#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Inter-integrated circuit
 */
class i2c_p {
public:
/**
 * Control register 1
 */
class cr1_r {
public:

/**
 * Peripheral enable
 */
class pe_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pe_f(bool value = true) : m_value(value) {}
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
 * TX Interrupt enable
 */
class txie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txie_f(bool value = true) : m_value(value) {}
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
 * RX Interrupt enable
 */
class rxie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxie_f(bool value = true) : m_value(value) {}
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
 * Address match interrupt enable (slave only)
 */
class addrie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr addrie_f(bool value = true) : m_value(value) {}
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
 * Not acknowledge received interrupt enable
 */
class nackie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nackie_f(bool value = true) : m_value(value) {}
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
 * STOP detection Interrupt enable
 */
class stopie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stopie_f(bool value = true) : m_value(value) {}
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
 * Transfer Complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
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
 * Error interrupts enable
 */
class errie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr errie_f(bool value = true) : m_value(value) {}
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
 * Digital noise filter
 */
class dnf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dnf_f(uint8_t value) : m_value(value & Range) {}
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
 * Analog noise filter OFF
 */
class anfoff_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr anfoff_f(bool value = true) : m_value(value) {}
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
 * DMA transmission requests enable
 */
class txdmaen_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr txdmaen_f(bool value = true) : m_value(value) {}
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
 * DMA reception requests enable
 */
class rxdmaen_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxdmaen_f(bool value = true) : m_value(value) {}
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
 * Slave byte control
 */
class sbc_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sbc_f(bool value = true) : m_value(value) {}
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
 * Clock stretching disable
 */
class nostretch_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr nostretch_f(bool value = true) : m_value(value) {}
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
 * Wakeup from STOP enable
 */
class wupen_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wupen_f(bool value = true) : m_value(value) {}
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
 * General call enable
 */
class gcen_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gcen_f(bool value = true) : m_value(value) {}
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
 * SMBus Host address enable
 */
class smbhen_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smbhen_f(bool value = true) : m_value(value) {}
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
 * SMBus Device Default address enable
 */
class smbden_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smbden_f(bool value = true) : m_value(value) {}
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
 * SMBUS alert enable
 */
class alerten_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr alerten_f(bool value = true) : m_value(value) {}
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
 * PEC enable
 */
class pecen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pecen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pe() const -> pe_f {return pe_f((m_value & pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txie() const -> txie_f {return txie_f((m_value & txie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxie() const -> rxie_f {return rxie_f((m_value & rxie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto addrie() const -> addrie_f {return addrie_f((m_value & addrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nackie() const -> nackie_f {return nackie_f((m_value & nackie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stopie() const -> stopie_f {return stopie_f((m_value & stopie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto errie() const -> errie_f {return errie_f((m_value & errie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dnf() const -> dnf_f {return dnf_f(static_cast<uint8_t>(m_value >> dnf_f::Offset));}
	[[nodiscard]] constexpr auto anfoff() const -> anfoff_f {return anfoff_f((m_value & anfoff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txdmaen() const -> txdmaen_f {return txdmaen_f((m_value & txdmaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxdmaen() const -> rxdmaen_f {return rxdmaen_f((m_value & rxdmaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbc() const -> sbc_f {return sbc_f((m_value & sbc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nostretch() const -> nostretch_f {return nostretch_f((m_value & nostretch_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wupen() const -> wupen_f {return wupen_f((m_value & wupen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gcen() const -> gcen_f {return gcen_f((m_value & gcen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smbhen() const -> smbhen_f {return smbhen_f((m_value & smbhen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smbden() const -> smbden_f {return smbden_f((m_value & smbden_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alerten() const -> alerten_f {return alerten_f((m_value & alerten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pecen() const -> pecen_f {return pecen_f((m_value & pecen_f::Mask) != 0);}

	constexpr cr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr1_r other) const -> cr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Control register 2
 */
class cr2_r {
public:

/**
 * Packet error checking byte
 */
class pecbyte_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pecbyte_f(bool value = true) : m_value(value) {}
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
 * Automatic end mode (master mode)
 */
class autoend_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr autoend_f(bool value = true) : m_value(value) {}
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
 * NBYTES reload mode
 */
class reload_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr reload_f(bool value = true) : m_value(value) {}
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
 * Number of bytes
 */
class nbytes_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbytes_f(uint8_t value) : m_value(value) {}
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
 * NACK generation (slave mode)
 */
class nack_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr nack_f(bool value = true) : m_value(value) {}
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
 * Stop generation (master mode)
 */
class stop_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr stop_f(bool value = true) : m_value(value) {}
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
 * Start generation
 */
class start_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr start_f(bool value = true) : m_value(value) {}
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
 * 10-bit address header only read direction (master receiver mode)
 */
class head10r_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr head10r_f(bool value = true) : m_value(value) {}
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
 * 10-bit addressing mode (master mode)
 */
class add10_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr add10_f(bool value = true) : m_value(value) {}
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
 * Transfer direction (master mode)
 */
class rd_wrn_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rd_wrn_f(bool value = true) : m_value(value) {}
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
 * Slave address bit (master mode)
 */
class sadd_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sadd_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto pecbyte() const -> pecbyte_f {return pecbyte_f((m_value & pecbyte_f::Mask) != 0);}
	[[nodiscard]] constexpr auto autoend() const -> autoend_f {return autoend_f((m_value & autoend_f::Mask) != 0);}
	[[nodiscard]] constexpr auto reload() const -> reload_f {return reload_f((m_value & reload_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nbytes() const -> nbytes_f {return nbytes_f(static_cast<uint8_t>(m_value >> nbytes_f::Offset));}
	[[nodiscard]] constexpr auto nack() const -> nack_f {return nack_f((m_value & nack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stop() const -> stop_f {return stop_f((m_value & stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto start() const -> start_f {return start_f((m_value & start_f::Mask) != 0);}
	[[nodiscard]] constexpr auto head10r() const -> head10r_f {return head10r_f((m_value & head10r_f::Mask) != 0);}
	[[nodiscard]] constexpr auto add10() const -> add10_f {return add10_f((m_value & add10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rd_wrn() const -> rd_wrn_f {return rd_wrn_f((m_value & rd_wrn_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sadd() const -> sadd_f {return sadd_f(static_cast<uint16_t>(m_value >> sadd_f::Offset));}

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
 * Own address register 1
 */
class oar1_r {
public:

/**
 * Interface address
 */
class oa1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oa1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator oar1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(oar1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<oar1_r>() const {return ClearSet<oar1_r>(Mask, *this);}
	constexpr auto operator|(oar1_r other) const -> oar1_r { return static_cast<oar1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<oar1_r> other) const -> ClearSet<oar1_r> {return ClearSet<oar1_r>(oar1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Own Address 1 10-bit mode
 */
class oa1mode_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oa1mode_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator oar1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(oar1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<oar1_r>() const {return ClearSet<oar1_r>(Mask, *this);}
	constexpr auto operator|(oar1_r other) const -> oar1_r { return static_cast<oar1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<oar1_r> other) const -> ClearSet<oar1_r> {return ClearSet<oar1_r>(oar1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Own Address 1 enable
 */
class oa1en_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oa1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator oar1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(oar1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<oar1_r>() const {return ClearSet<oar1_r>(Mask, *this);}
	constexpr auto operator|(oar1_r other) const -> oar1_r { return static_cast<oar1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<oar1_r> other) const -> ClearSet<oar1_r> {return ClearSet<oar1_r>(oar1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto oa1() const -> oa1_f {return oa1_f(static_cast<uint16_t>(m_value >> oa1_f::Offset));}
	[[nodiscard]] constexpr auto oa1mode() const -> oa1mode_f {return oa1mode_f((m_value & oa1mode_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oa1en() const -> oa1en_f {return oa1en_f((m_value & oa1en_f::Mask) != 0);}

	constexpr oar1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(oar1_r other) const -> oar1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> oar1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Own address register 2
 */
class oar2_r {
public:

/**
 * Interface address
 */
class oa2_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oa2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator oar2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(oar2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<oar2_r>() const {return ClearSet<oar2_r>(Mask, *this);}
	constexpr auto operator|(oar2_r other) const -> oar2_r { return static_cast<oar2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<oar2_r> other) const -> ClearSet<oar2_r> {return ClearSet<oar2_r>(oar2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Own Address 2 masks
 */
class oa2msk_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oa2msk_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator oar2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(oar2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<oar2_r>() const {return ClearSet<oar2_r>(Mask, *this);}
	constexpr auto operator|(oar2_r other) const -> oar2_r { return static_cast<oar2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<oar2_r> other) const -> ClearSet<oar2_r> {return ClearSet<oar2_r>(oar2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Own Address 2 enable
 */
class oa2en_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oa2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator oar2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(oar2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<oar2_r>() const {return ClearSet<oar2_r>(Mask, *this);}
	constexpr auto operator|(oar2_r other) const -> oar2_r { return static_cast<oar2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<oar2_r> other) const -> ClearSet<oar2_r> {return ClearSet<oar2_r>(oar2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto oa2() const -> oa2_f {return oa2_f(static_cast<uint8_t>(m_value >> oa2_f::Offset));}
	[[nodiscard]] constexpr auto oa2msk() const -> oa2msk_f {return oa2msk_f(static_cast<uint8_t>(m_value >> oa2msk_f::Offset));}
	[[nodiscard]] constexpr auto oa2en() const -> oa2en_f {return oa2en_f((m_value & oa2en_f::Mask) != 0);}

	constexpr oar2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(oar2_r other) const -> oar2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> oar2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Timing register
 */
class timingr_r {
public:

/**
 * SCL low period (master mode)
 */
class scll_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr scll_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator timingr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(timingr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<timingr_r>() const {return ClearSet<timingr_r>(Mask, *this);}
	constexpr auto operator|(timingr_r other) const -> timingr_r { return static_cast<timingr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<timingr_r> other) const -> ClearSet<timingr_r> {return ClearSet<timingr_r>(timingr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SCL high period (master mode)
 */
class sclh_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sclh_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator timingr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(timingr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<timingr_r>() const {return ClearSet<timingr_r>(Mask, *this);}
	constexpr auto operator|(timingr_r other) const -> timingr_r { return static_cast<timingr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<timingr_r> other) const -> ClearSet<timingr_r> {return ClearSet<timingr_r>(timingr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Data hold time
 */
class sdadel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sdadel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator timingr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(timingr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<timingr_r>() const {return ClearSet<timingr_r>(Mask, *this);}
	constexpr auto operator|(timingr_r other) const -> timingr_r { return static_cast<timingr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<timingr_r> other) const -> ClearSet<timingr_r> {return ClearSet<timingr_r>(timingr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Data setup time
 */
class scldel_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr scldel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator timingr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(timingr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<timingr_r>() const {return ClearSet<timingr_r>(Mask, *this);}
	constexpr auto operator|(timingr_r other) const -> timingr_r { return static_cast<timingr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<timingr_r> other) const -> ClearSet<timingr_r> {return ClearSet<timingr_r>(timingr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Timing prescaler
 */
class presc_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr presc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator timingr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(timingr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<timingr_r>() const {return ClearSet<timingr_r>(Mask, *this);}
	constexpr auto operator|(timingr_r other) const -> timingr_r { return static_cast<timingr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<timingr_r> other) const -> ClearSet<timingr_r> {return ClearSet<timingr_r>(timingr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto scll() const -> scll_f {return scll_f(static_cast<uint8_t>(m_value >> scll_f::Offset));}
	[[nodiscard]] constexpr auto sclh() const -> sclh_f {return sclh_f(static_cast<uint8_t>(m_value >> sclh_f::Offset));}
	[[nodiscard]] constexpr auto sdadel() const -> sdadel_f {return sdadel_f(static_cast<uint8_t>(m_value >> sdadel_f::Offset));}
	[[nodiscard]] constexpr auto scldel() const -> scldel_f {return scldel_f(static_cast<uint8_t>(m_value >> scldel_f::Offset));}
	[[nodiscard]] constexpr auto presc() const -> presc_f {return presc_f(static_cast<uint8_t>(m_value >> presc_f::Offset));}

	constexpr timingr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(timingr_r other) const -> timingr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> timingr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Status register 1
 */
class timeoutr_r {
public:

/**
 * Bus timeout A
 */
class timeouta_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr timeouta_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator timeoutr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(timeoutr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<timeoutr_r>() const {return ClearSet<timeoutr_r>(Mask, *this);}
	constexpr auto operator|(timeoutr_r other) const -> timeoutr_r { return static_cast<timeoutr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<timeoutr_r> other) const -> ClearSet<timeoutr_r> {return ClearSet<timeoutr_r>(timeoutr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Idle clock timeout detection
 */
class tidle_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tidle_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator timeoutr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(timeoutr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<timeoutr_r>() const {return ClearSet<timeoutr_r>(Mask, *this);}
	constexpr auto operator|(timeoutr_r other) const -> timeoutr_r { return static_cast<timeoutr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<timeoutr_r> other) const -> ClearSet<timeoutr_r> {return ClearSet<timeoutr_r>(timeoutr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clock timeout enable
 */
class timouten_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr timouten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator timeoutr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(timeoutr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<timeoutr_r>() const {return ClearSet<timeoutr_r>(Mask, *this);}
	constexpr auto operator|(timeoutr_r other) const -> timeoutr_r { return static_cast<timeoutr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<timeoutr_r> other) const -> ClearSet<timeoutr_r> {return ClearSet<timeoutr_r>(timeoutr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Bus timeout B
 */
class timeoutb_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr timeoutb_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator timeoutr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(timeoutr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<timeoutr_r>() const {return ClearSet<timeoutr_r>(Mask, *this);}
	constexpr auto operator|(timeoutr_r other) const -> timeoutr_r { return static_cast<timeoutr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<timeoutr_r> other) const -> ClearSet<timeoutr_r> {return ClearSet<timeoutr_r>(timeoutr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Extended clock timeout enable
 */
class texten_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr texten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator timeoutr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(timeoutr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<timeoutr_r>() const {return ClearSet<timeoutr_r>(Mask, *this);}
	constexpr auto operator|(timeoutr_r other) const -> timeoutr_r { return static_cast<timeoutr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<timeoutr_r> other) const -> ClearSet<timeoutr_r> {return ClearSet<timeoutr_r>(timeoutr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto timeouta() const -> timeouta_f {return timeouta_f(static_cast<uint16_t>(m_value >> timeouta_f::Offset));}
	[[nodiscard]] constexpr auto tidle() const -> tidle_f {return tidle_f((m_value & tidle_f::Mask) != 0);}
	[[nodiscard]] constexpr auto timouten() const -> timouten_f {return timouten_f((m_value & timouten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto timeoutb() const -> timeoutb_f {return timeoutb_f(static_cast<uint16_t>(m_value >> timeoutb_f::Offset));}
	[[nodiscard]] constexpr auto texten() const -> texten_f {return texten_f((m_value & texten_f::Mask) != 0);}

	constexpr timeoutr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(timeoutr_r other) const -> timeoutr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> timeoutr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt and Status register
 */
class isr_r {
public:

/**
 * Address match code (Slave mode)
 */
class addcode_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr addcode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator isr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(isr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Transfer direction (Slave mode)
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
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
 * Bus busy
 */
class busy_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr busy_f(bool value = true) : m_value(value) {}
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
 * SMBus alert
 */
class alert_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr alert_f(bool value = true) : m_value(value) {}
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
 * Timeout or t_low detection flag
 */
class timeout_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr timeout_f(bool value = true) : m_value(value) {}
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
 * PEC Error in reception
 */
class pecerr_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pecerr_f(bool value = true) : m_value(value) {}
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
 * Overrun/Underrun (slave mode)
 */
class ovr_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

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
 * Arbitration lost
 */
class arlo_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr arlo_f(bool value = true) : m_value(value) {}
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
 * Bus error
 */
class berr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr berr_f(bool value = true) : m_value(value) {}
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
 * Transfer Complete Reload
 */
class tcr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcr_f(bool value = true) : m_value(value) {}
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
 * Transfer Complete (master mode)
 */
class tc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tc_f(bool value = true) : m_value(value) {}
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
 * Stop detection flag
 */
class stopf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stopf_f(bool value = true) : m_value(value) {}
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
 * Not acknowledge received flag
 */
class nackf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nackf_f(bool value = true) : m_value(value) {}
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
 * Address matched (slave mode)
 */
class addr_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr addr_f(bool value = true) : m_value(value) {}
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
 * Receive data register not empty (receivers)
 */
class rxne_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxne_f(bool value = true) : m_value(value) {}
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
 * Transmit interrupt status (transmitters)
 */
class txis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txis_f(bool value = true) : m_value(value) {}
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
 * Transmit data register empty (transmitters)
 */
class txe_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto addcode() const -> addcode_f {return addcode_f(static_cast<uint8_t>(m_value >> addcode_f::Offset));}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto busy() const -> busy_f {return busy_f((m_value & busy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alert() const -> alert_f {return alert_f((m_value & alert_f::Mask) != 0);}
	[[nodiscard]] constexpr auto timeout() const -> timeout_f {return timeout_f((m_value & timeout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pecerr() const -> pecerr_f {return pecerr_f((m_value & pecerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovr() const -> ovr_f {return ovr_f((m_value & ovr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arlo() const -> arlo_f {return arlo_f((m_value & arlo_f::Mask) != 0);}
	[[nodiscard]] constexpr auto berr() const -> berr_f {return berr_f((m_value & berr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcr() const -> tcr_f {return tcr_f((m_value & tcr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tc() const -> tc_f {return tc_f((m_value & tc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stopf() const -> stopf_f {return stopf_f((m_value & stopf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nackf() const -> nackf_f {return nackf_f((m_value & nackf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto addr() const -> addr_f {return addr_f((m_value & addr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxne() const -> rxne_f {return rxne_f((m_value & rxne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txis() const -> txis_f {return txis_f((m_value & txis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txe() const -> txe_f {return txe_f((m_value & txe_f::Mask) != 0);}

	constexpr isr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(isr_r other) const -> isr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> isr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0b1; // 1 0x1

private:
	uint32_t m_value;
};
/**
 * Interrupt clear register
 */
class icr_r {
public:

/**
 * Alert flag clear
 */
class alertcf_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr alertcf_f(bool value = true) : m_value(value) {}
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
 * Timeout detection flag clear
 */
class timoutcf_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr timoutcf_f(bool value = true) : m_value(value) {}
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
 * PEC Error flag clear
 */
class peccf_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr peccf_f(bool value = true) : m_value(value) {}
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
 * Overrun/Underrun flag clear
 */
class ovrcf_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ovrcf_f(bool value = true) : m_value(value) {}
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
 * Arbitration lost flag clear
 */
class arlocf_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr arlocf_f(bool value = true) : m_value(value) {}
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
 * Bus error flag clear
 */
class berrcf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr berrcf_f(bool value = true) : m_value(value) {}
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
 * Stop detection flag clear
 */
class stopcf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stopcf_f(bool value = true) : m_value(value) {}
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
 * Not Acknowledge flag clear
 */
class nackcf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nackcf_f(bool value = true) : m_value(value) {}
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
 * Address Matched flag clear
 */
class addrcf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr addrcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto alertcf() const -> alertcf_f {return alertcf_f((m_value & alertcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto timoutcf() const -> timoutcf_f {return timoutcf_f((m_value & timoutcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto peccf() const -> peccf_f {return peccf_f((m_value & peccf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrcf() const -> ovrcf_f {return ovrcf_f((m_value & ovrcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arlocf() const -> arlocf_f {return arlocf_f((m_value & arlocf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto berrcf() const -> berrcf_f {return berrcf_f((m_value & berrcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stopcf() const -> stopcf_f {return stopcf_f((m_value & stopcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nackcf() const -> nackcf_f {return nackcf_f((m_value & nackcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto addrcf() const -> addrcf_f {return addrcf_f((m_value & addrcf_f::Mask) != 0);}

	constexpr icr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icr_r other) const -> icr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * PEC register
 */
class pecr_r {
public:

/**
 * Packet error checking register
 */
class pec_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pec_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pecr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pecr_r>() const {return ClearSet<pecr_r>(Mask, *this);}
	constexpr auto operator|(pecr_r other) const -> pecr_r { return static_cast<pecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pecr_r> other) const -> ClearSet<pecr_r> {return ClearSet<pecr_r>(pecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pec() const -> pec_f {return pec_f(static_cast<uint8_t>(m_value >> pec_f::Offset));}

	constexpr pecr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pecr_r other) const -> pecr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pecr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Receive data register
 */
class rxdr_r {
public:

/**
 * 8-bit receive data
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

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Transmit data register
 */
class txdr_r {
public:

/**
 * 8-bit transmit data
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

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct oar_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using oar_v = typename oar_r<Index>::type;
	template<std::size_t Index> constexpr auto& oar() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,oar1_r> oar1;
	Memory<uint32_t,oar2_r> oar2;
	Memory<uint32_t,timingr_r> timingr;
	Memory<uint32_t,timeoutr_r> timeoutr;
	Memory<uint32_t,isr_r> isr;
	WriteOnlyMemory<uint32_t,icr_r> icr;
	ReadOnlyMemory<uint32_t,pecr_r> pecr;
	ReadOnlyMemory<uint32_t,rxdr_r> rxdr;
	Memory<uint32_t,txdr_r> txdr;
};

template<> constexpr auto& i2c_p::cr<1>() { return cr1; }
template<> constexpr auto& i2c_p::cr<2>() { return cr2; }

template<> struct i2c_p::cr_r<1> { using type = i2c_p::cr1_r; };
template<> struct i2c_p::cr_r<2> { using type = i2c_p::cr2_r; };

template<> constexpr auto& i2c_p::oar<1>() { return oar1; }
template<> constexpr auto& i2c_p::oar<2>() { return oar2; }

template<> struct i2c_p::oar_r<1> { using type = i2c_p::oar1_r; };
template<> struct i2c_p::oar_r<2> { using type = i2c_p::oar2_r; };

static_assert(std::is_standard_layout_v<i2c_p>);
static_assert(offsetof(i2c_p, cr1) == i2c_p::cr1_r::Offset);
static_assert(offsetof(i2c_p, cr2) == i2c_p::cr2_r::Offset);
static_assert(offsetof(i2c_p, oar1) == i2c_p::oar1_r::Offset);
static_assert(offsetof(i2c_p, oar2) == i2c_p::oar2_r::Offset);
static_assert(offsetof(i2c_p, timingr) == i2c_p::timingr_r::Offset);
static_assert(offsetof(i2c_p, timeoutr) == i2c_p::timeoutr_r::Offset);
static_assert(offsetof(i2c_p, isr) == i2c_p::isr_r::Offset);
static_assert(offsetof(i2c_p, icr) == i2c_p::icr_r::Offset);
static_assert(offsetof(i2c_p, pecr) == i2c_p::pecr_r::Offset);
static_assert(offsetof(i2c_p, rxdr) == i2c_p::rxdr_r::Offset);
static_assert(offsetof(i2c_p, txdr) == i2c_p::txdr_r::Offset);

inline i2c_p& i2c1 = *reinterpret_cast<i2c_p*>(0x40005400);
inline i2c_p& i2c2 = *reinterpret_cast<i2c_p*>(0x40005800);
inline i2c_p& i2c3 = *reinterpret_cast<i2c_p*>(0x40007800);
inline i2c_p& i2c4 = *reinterpret_cast<i2c_p*>(0x40008400);

} // STM32G473XX

