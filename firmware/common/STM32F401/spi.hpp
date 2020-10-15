#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * Serial peripheral interface
 */
class spi_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Bidirectional data mode enable
 */
class bidimode_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bidimode_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Output enable in bidirectional mode
 */
class bidioe_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bidioe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Hardware CRC calculation enable
 */
class crcen_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr crcen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CRC transfer next
 */
class crcnext_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr crcnext_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data frame format
 */
class dff_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dff_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Receive only
 */
class rxonly_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxonly_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Software slave management
 */
class ssm_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ssm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Internal slave select
 */
class ssi_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ssi_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame format
 */
class lsbfirst_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lsbfirst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SPI enable
 */
class spe_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr spe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Baud rate control
 */
class br_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr br_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Master selection
 */
class mstr_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mstr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Clock polarity
 */
class cpol_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cpol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Clock phase
 */
class cpha_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cpha_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto bidimode() const -> bidimode_f {return bidimode_f((m_value & bidimode_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bidioe() const -> bidioe_f {return bidioe_f((m_value & bidioe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crcen() const -> crcen_f {return crcen_f((m_value & crcen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crcnext() const -> crcnext_f {return crcnext_f((m_value & crcnext_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dff() const -> dff_f {return dff_f((m_value & dff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxonly() const -> rxonly_f {return rxonly_f((m_value & rxonly_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ssm() const -> ssm_f {return ssm_f((m_value & ssm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ssi() const -> ssi_f {return ssi_f((m_value & ssi_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsbfirst() const -> lsbfirst_f {return lsbfirst_f((m_value & lsbfirst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spe() const -> spe_f {return spe_f((m_value & spe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto br() const -> br_f {return br_f(static_cast<uint8_t>(m_value >> br_f::Offset));}
	[[nodiscard]] constexpr auto mstr() const -> mstr_f {return mstr_f((m_value & mstr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpol() const -> cpol_f {return cpol_f((m_value & cpol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpha() const -> cpha_f {return cpha_f((m_value & cpha_f::Mask) != 0);}

	constexpr cr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr1_r other) const -> cr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * control register 2
 */
class cr2_r {
public:

/**
 * Tx buffer empty interrupt enable
 */
class txeie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * RX buffer not empty interrupt enable
 */
class rxneie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxneie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Error interrupt enable
 */
class errie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr errie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame format
 */
class frf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr frf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SS output enable
 */
class ssoe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ssoe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Tx buffer DMA enable
 */
class txdmaen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txdmaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Rx buffer DMA enable
 */
class rxdmaen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxdmaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txeie() const -> txeie_f {return txeie_f((m_value & txeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxneie() const -> rxneie_f {return rxneie_f((m_value & rxneie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto errie() const -> errie_f {return errie_f((m_value & errie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frf() const -> frf_f {return frf_f((m_value & frf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ssoe() const -> ssoe_f {return ssoe_f((m_value & ssoe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txdmaen() const -> txdmaen_f {return txdmaen_f((m_value & txdmaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxdmaen() const -> rxdmaen_f {return rxdmaen_f((m_value & rxdmaen_f::Mask) != 0);}

	constexpr cr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr2_r other) const -> cr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * status register
 */
class sr_r {
public:

/**
 * TI frame format error
 */
class tifrfe_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tifrfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Busy flag
 */
class bsy_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bsy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Overrun flag
 */
class ovr_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Mode fault
 */
class modf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr modf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CRC error flag
 */
class crcerr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr crcerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Underrun flag
 */
class udr_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr udr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel side
 */
class chside_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chside_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transmit buffer empty
 */
class txe_f {
public:
	static constexpr std::size_t Offset = 1;
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
 * Receive buffer not empty
 */
class rxne_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tifrfe() const -> tifrfe_f {return tifrfe_f((m_value & tifrfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bsy() const -> bsy_f {return bsy_f((m_value & bsy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovr() const -> ovr_f {return ovr_f((m_value & ovr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto modf() const -> modf_f {return modf_f((m_value & modf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto crcerr() const -> crcerr_f {return crcerr_f((m_value & crcerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udr() const -> udr_f {return udr_f((m_value & udr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chside() const -> chside_f {return chside_f((m_value & chside_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txe() const -> txe_f {return txe_f((m_value & txe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxne() const -> rxne_f {return rxne_f((m_value & rxne_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b10;

private:
	uint32_t m_value;
};
/**
 * data register
 */
class dr_r {
public:

/**
 * Data register
 */
class dr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dr_f(uint16_t value) : m_value(value) {}
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

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * CRC polynomial register
 */
class crcpr_r {
public:

/**
 * CRC polynomial register
 */
class crcpoly_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr crcpoly_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator crcpr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(crcpr_r other) const -> crcpr_r { return static_cast<crcpr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto crcpoly() const -> crcpoly_f {return crcpoly_f(static_cast<uint16_t>(m_value >> crcpoly_f::Offset));}

	constexpr crcpr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(crcpr_r other) const -> crcpr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> crcpr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0b111;

private:
	uint32_t m_value;
};
/**
 * RX CRC register
 */
class rxcrcr_r {
public:

/**
 * Rx CRC register
 */
class rxcrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rxcrc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator rxcrcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(rxcrcr_r other) const -> rxcrcr_r { return static_cast<rxcrcr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rxcrc() const -> rxcrc_f {return rxcrc_f(static_cast<uint16_t>(m_value >> rxcrc_f::Offset));}

	constexpr rxcrcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rxcrcr_r other) const -> rxcrcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rxcrcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * TX CRC register
 */
class txcrcr_r {
public:

/**
 * Tx CRC register
 */
class txcrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr txcrc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator txcrcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(txcrcr_r other) const -> txcrcr_r { return static_cast<txcrcr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto txcrc() const -> txcrc_f {return txcrc_f(static_cast<uint16_t>(m_value >> txcrc_f::Offset));}

	constexpr txcrcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txcrcr_r other) const -> txcrcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txcrcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * I2S configuration register
 */
class i2scfgr_r {
public:

/**
 * I2S mode selection
 */
class i2smod_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr i2smod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator i2scfgr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(i2scfgr_r other) const -> i2scfgr_r { return static_cast<i2scfgr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * I2S Enable
 */
class i2se_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr i2se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator i2scfgr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(i2scfgr_r other) const -> i2scfgr_r { return static_cast<i2scfgr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * I2S configuration mode
 */
class i2scfg_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr i2scfg_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator i2scfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(i2scfgr_r other) const -> i2scfgr_r { return static_cast<i2scfgr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * PCM frame synchronization
 */
class pcmsync_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pcmsync_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator i2scfgr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(i2scfgr_r other) const -> i2scfgr_r { return static_cast<i2scfgr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * I2S standard selection
 */
class i2sstd_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr i2sstd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator i2scfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(i2scfgr_r other) const -> i2scfgr_r { return static_cast<i2scfgr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Steady state clock polarity
 */
class ckpol_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ckpol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator i2scfgr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(i2scfgr_r other) const -> i2scfgr_r { return static_cast<i2scfgr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data length to be transferred
 */
class datlen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr datlen_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator i2scfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(i2scfgr_r other) const -> i2scfgr_r { return static_cast<i2scfgr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Channel length (number of bits per audio channel)
 */
class chlen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chlen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator i2scfgr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(i2scfgr_r other) const -> i2scfgr_r { return static_cast<i2scfgr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto i2smod() const -> i2smod_f {return i2smod_f((m_value & i2smod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2se() const -> i2se_f {return i2se_f((m_value & i2se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2scfg() const -> i2scfg_f {return i2scfg_f(static_cast<uint8_t>(m_value >> i2scfg_f::Offset));}
	[[nodiscard]] constexpr auto pcmsync() const -> pcmsync_f {return pcmsync_f((m_value & pcmsync_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2sstd() const -> i2sstd_f {return i2sstd_f(static_cast<uint8_t>(m_value >> i2sstd_f::Offset));}
	[[nodiscard]] constexpr auto ckpol() const -> ckpol_f {return ckpol_f((m_value & ckpol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto datlen() const -> datlen_f {return datlen_f(static_cast<uint8_t>(m_value >> datlen_f::Offset));}
	[[nodiscard]] constexpr auto chlen() const -> chlen_f {return chlen_f((m_value & chlen_f::Mask) != 0);}

	constexpr i2scfgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(i2scfgr_r other) const -> i2scfgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> i2scfgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * I2S prescaler register
 */
class i2spr_r {
public:

/**
 * Master clock output enable
 */
class mckoe_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mckoe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator i2spr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(i2spr_r other) const -> i2spr_r { return static_cast<i2spr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Odd factor for the prescaler
 */
class odd_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr odd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator i2spr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(i2spr_r other) const -> i2spr_r { return static_cast<i2spr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * I2S Linear prescaler
 */
class i2sdiv_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr i2sdiv_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator i2spr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(i2spr_r other) const -> i2spr_r { return static_cast<i2spr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mckoe() const -> mckoe_f {return mckoe_f((m_value & mckoe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto odd() const -> odd_f {return odd_f((m_value & odd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2sdiv() const -> i2sdiv_f {return i2sdiv_f(static_cast<uint8_t>(m_value >> i2sdiv_f::Offset));}

	constexpr i2spr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(i2spr_r other) const -> i2spr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> i2spr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0b1010;

private:
	uint32_t m_value;
};

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	ReadOnlyMemory<uint32_t,sr_r> sr;
	Memory<uint32_t,dr_r> dr;
	Memory<uint32_t,crcpr_r> crcpr;
	ReadOnlyMemory<uint32_t,rxcrcr_r> rxcrcr;
	ReadOnlyMemory<uint32_t,txcrcr_r> txcrcr;
	Memory<uint32_t,i2scfgr_r> i2scfgr;
	Memory<uint32_t,i2spr_r> i2spr;
};

static_assert(std::is_standard_layout_v<spi_p>);
static_assert(offsetof(spi_p, cr1) == spi_p::cr1_r::Offset);
static_assert(offsetof(spi_p, cr2) == spi_p::cr2_r::Offset);
static_assert(offsetof(spi_p, sr) == spi_p::sr_r::Offset);
static_assert(offsetof(spi_p, dr) == spi_p::dr_r::Offset);
static_assert(offsetof(spi_p, crcpr) == spi_p::crcpr_r::Offset);
static_assert(offsetof(spi_p, rxcrcr) == spi_p::rxcrcr_r::Offset);
static_assert(offsetof(spi_p, txcrcr) == spi_p::txcrcr_r::Offset);
static_assert(offsetof(spi_p, i2scfgr) == spi_p::i2scfgr_r::Offset);
static_assert(offsetof(spi_p, i2spr) == spi_p::i2spr_r::Offset);


}; // STM32F401

spi_p& i2s2ext = *reinterpret_cast<spi_p*>(0x40003400);
spi_p& i2s3ext = *reinterpret_cast<spi_p*>(0x40004000);
spi_p& spi1 = *reinterpret_cast<spi_p*>(0x40013000);
spi_p& spi2 = *reinterpret_cast<spi_p*>(0x40003800);
spi_p& spi3 = *reinterpret_cast<spi_p*>(0x40003C00);
spi_p& spi4 = *reinterpret_cast<spi_p*>(0x40013400);
