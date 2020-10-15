#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * Universal synchronous asynchronous receiver transmitter
 */
class usart_p {
public:
/**
 * Status register
 */
class sr_r {
public:

/**
 * CTS flag
 */
class cts_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * LIN break detection flag
 */
class lbd_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lbd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transmit data register empty
 */
class txe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transmission complete
 */
class tc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Read data register not empty
 */
class rxne_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * IDLE line detected
 */
class idle_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idle_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Overrun error
 */
class ore_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ore_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Noise detected flag
 */
class nf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Framing error
 */
class fe_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Parity error
 */
class pe_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cts() const -> cts_f {return cts_f((m_value & cts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbd() const -> lbd_f {return lbd_f((m_value & lbd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txe() const -> txe_f {return txe_f((m_value & txe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tc() const -> tc_f {return tc_f((m_value & tc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxne() const -> rxne_f {return rxne_f((m_value & rxne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idle() const -> idle_f {return idle_f((m_value & idle_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ore() const -> ore_f {return ore_f((m_value & ore_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nf() const -> nf_f {return nf_f((m_value & nf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fe() const -> fe_f {return fe_f((m_value & fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pe() const -> pe_f {return pe_f((m_value & pe_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b110000000000000000000000;

private:
	uint32_t m_value;
};
/**
 * Data register
 */
class dr_r {
public:

/**
 * Data value
 */
class dr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dr() const -> dr_f {return dr_f(static_cast<uint16_t>(m_value >> dr_f::Offset));}

	constexpr dr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dr_r other) const -> dr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * Baud rate register
 */
class brr_r {
public:

/**
 * mantissa of USARTDIV
 */
class div_mantissa_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr div_mantissa_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator brr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * fraction of USARTDIV
 */
class div_fraction_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr div_fraction_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator brr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto div_mantissa() const -> div_mantissa_f {return div_mantissa_f(static_cast<uint16_t>(m_value >> div_mantissa_f::Offset));}
	[[nodiscard]] constexpr auto div_fraction() const -> div_fraction_f {return div_fraction_f(static_cast<uint8_t>(m_value >> div_fraction_f::Offset));}

	constexpr brr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(brr_r other) const -> brr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> brr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * Control register 1
 */
class cr1_r {
public:

/**
 * Oversampling mode
 */
class over8_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr over8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USART enable
 */
class ue_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ue_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Word length
 */
class m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr m_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Wakeup method
 */
class wake_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wake_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Parity control enable
 */
class pce_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Parity selection
 */
class ps_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ps_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * PE interrupt enable
 */
class peie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr peie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TXE interrupt enable
 */
class txeie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transmission complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * RXNE interrupt enable
 */
class rxneie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxneie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * IDLE interrupt enable
 */
class idleie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idleie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transmitter enable
 */
class te_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr te_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Receiver enable
 */
class re_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr re_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Receiver wakeup
 */
class rwu_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rwu_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Send break
 */
class sbk_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sbk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto over8() const -> over8_f {return over8_f((m_value & over8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ue() const -> ue_f {return ue_f((m_value & ue_f::Mask) != 0);}
	[[nodiscard]] constexpr auto m() const -> m_f {return m_f((m_value & m_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wake() const -> wake_f {return wake_f((m_value & wake_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pce() const -> pce_f {return pce_f((m_value & pce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ps() const -> ps_f {return ps_f((m_value & ps_f::Mask) != 0);}
	[[nodiscard]] constexpr auto peie() const -> peie_f {return peie_f((m_value & peie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txeie() const -> txeie_f {return txeie_f((m_value & txeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxneie() const -> rxneie_f {return rxneie_f((m_value & rxneie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idleie() const -> idleie_f {return idleie_f((m_value & idleie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto te() const -> te_f {return te_f((m_value & te_f::Mask) != 0);}
	[[nodiscard]] constexpr auto re() const -> re_f {return re_f((m_value & re_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rwu() const -> rwu_f {return rwu_f((m_value & rwu_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbk() const -> sbk_f {return sbk_f((m_value & sbk_f::Mask) != 0);}

	constexpr cr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr1_r other) const -> cr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * Control register 2
 */
class cr2_r {
public:

/**
 * LIN mode enable
 */
class linen_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr linen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STOP bits
 */
class stop_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stop_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Clock enable
 */
class clken_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr clken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Clock polarity
 */
class cpol_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cpol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Clock phase
 */
class cpha_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cpha_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Last bit clock pulse
 */
class lbcl_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lbcl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * LIN break detection interrupt enable
 */
class lbdie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lbdie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * lin break detection length
 */
class lbdl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lbdl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Address of the USART node
 */
class add_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr add_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto linen() const -> linen_f {return linen_f((m_value & linen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stop() const -> stop_f {return stop_f(static_cast<uint8_t>(m_value >> stop_f::Offset));}
	[[nodiscard]] constexpr auto clken() const -> clken_f {return clken_f((m_value & clken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpol() const -> cpol_f {return cpol_f((m_value & cpol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpha() const -> cpha_f {return cpha_f((m_value & cpha_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbcl() const -> lbcl_f {return lbcl_f((m_value & lbcl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbdie() const -> lbdie_f {return lbdie_f((m_value & lbdie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbdl() const -> lbdl_f {return lbdl_f((m_value & lbdl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto add() const -> add_f {return add_f(static_cast<uint8_t>(m_value >> add_f::Offset));}

	constexpr cr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr2_r other) const -> cr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * Control register 3
 */
class cr3_r {
public:

/**
 * One sample bit method enable
 */
class onebit_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr onebit_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CTS interrupt enable
 */
class ctsie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctsie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CTS enable
 */
class ctse_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * RTS enable
 */
class rtse_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * DMA enable transmitter
 */
class dmat_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmat_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * DMA enable receiver
 */
class dmar_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmar_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Smartcard mode enable
 */
class scen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr scen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Smartcard NACK enable
 */
class nack_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Half-duplex selection
 */
class hdsel_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hdsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * IrDA low-power
 */
class irlp_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr irlp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * IrDA mode enable
 */
class iren_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr iren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Error interrupt enable
 */
class eie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto onebit() const -> onebit_f {return onebit_f((m_value & onebit_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctsie() const -> ctsie_f {return ctsie_f((m_value & ctsie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctse() const -> ctse_f {return ctse_f((m_value & ctse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtse() const -> rtse_f {return rtse_f((m_value & rtse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmat() const -> dmat_f {return dmat_f((m_value & dmat_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmar() const -> dmar_f {return dmar_f((m_value & dmar_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scen() const -> scen_f {return scen_f((m_value & scen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nack() const -> nack_f {return nack_f((m_value & nack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hdsel() const -> hdsel_f {return hdsel_f((m_value & hdsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto irlp() const -> irlp_f {return irlp_f((m_value & irlp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iren() const -> iren_f {return iren_f((m_value & iren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eie() const -> eie_f {return eie_f((m_value & eie_f::Mask) != 0);}

	constexpr cr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr3_r other) const -> cr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * Guard time and prescaler register
 */
class gtpr_r {
public:

/**
 * Guard time value
 */
class gt_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr gt_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator gtpr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(gtpr_r other) const -> gtpr_r { return static_cast<gtpr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Prescaler value
 */
class psc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr psc_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator gtpr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(gtpr_r other) const -> gtpr_r { return static_cast<gtpr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto gt() const -> gt_f {return gt_f(static_cast<uint8_t>(m_value >> gt_f::Offset));}
	[[nodiscard]] constexpr auto psc() const -> psc_f {return psc_f(static_cast<uint8_t>(m_value >> psc_f::Offset));}

	constexpr gtpr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(gtpr_r other) const -> gtpr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> gtpr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,sr_r> sr;
	Memory<uint32_t,dr_r> dr;
	Memory<uint32_t,brr_r> brr;
	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,cr3_r> cr3;
	Memory<uint32_t,gtpr_r> gtpr;
};

static_assert(std::is_standard_layout_v<usart_p>);
static_assert(offsetof(usart_p, sr) == usart_p::sr_r::Offset);
static_assert(offsetof(usart_p, dr) == usart_p::dr_r::Offset);
static_assert(offsetof(usart_p, brr) == usart_p::brr_r::Offset);
static_assert(offsetof(usart_p, cr1) == usart_p::cr1_r::Offset);
static_assert(offsetof(usart_p, cr2) == usart_p::cr2_r::Offset);
static_assert(offsetof(usart_p, cr3) == usart_p::cr3_r::Offset);
static_assert(offsetof(usart_p, gtpr) == usart_p::gtpr_r::Offset);


}; // STM32F401

usart_p& usart1 = *reinterpret_cast<usart_p*>(0x40011000);
usart_p& usart2 = *reinterpret_cast<usart_p*>(0x40004400);
usart_p& usart6 = *reinterpret_cast<usart_p*>(0x40011400);
