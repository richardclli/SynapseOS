#pragma once

#include "Memory.hpp"

namespace STM32F401
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
 * Software reset
 */
class swrst_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

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
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Packet error checking
 */
class pec_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pec_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Acknowledge/PEC Position (for data reception)
 */
class pos_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Acknowledge enable
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stop generation
 */
class stop_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Start generation
 */
class start_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr start_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Clock stretching disable (Slave mode)
 */
class nostretch_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nostretch_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * General call enable
 */
class engc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr engc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * PEC enable
 */
class enpec_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr enpec_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ARP enable
 */
class enarp_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr enarp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SMBus type
 */
class smbtype_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr smbtype_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SMBus mode
 */
class smbus_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr smbus_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

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
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto swrst() const -> swrst_f {return swrst_f((m_value & swrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alert() const -> alert_f {return alert_f((m_value & alert_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pec() const -> pec_f {return pec_f((m_value & pec_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pos() const -> pos_f {return pos_f((m_value & pos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stop() const -> stop_f {return stop_f((m_value & stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto start() const -> start_f {return start_f((m_value & start_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nostretch() const -> nostretch_f {return nostretch_f((m_value & nostretch_f::Mask) != 0);}
	[[nodiscard]] constexpr auto engc() const -> engc_f {return engc_f((m_value & engc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto enpec() const -> enpec_f {return enpec_f((m_value & enpec_f::Mask) != 0);}
	[[nodiscard]] constexpr auto enarp() const -> enarp_f {return enarp_f((m_value & enarp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smbtype() const -> smbtype_f {return smbtype_f((m_value & smbtype_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smbus() const -> smbus_f {return smbus_f((m_value & smbus_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pe() const -> pe_f {return pe_f((m_value & pe_f::Mask) != 0);}

	constexpr cr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr1_r other) const -> cr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

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
 * DMA last transfer
 */
class last_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr last_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * DMA requests enable
 */
class dmaen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Buffer interrupt enable
 */
class itbufen_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr itbufen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Event interrupt enable
 */
class itevten_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr itevten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Error interrupt enable
 */
class iterren_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr iterren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Peripheral clock frequency
 */
class freq_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr freq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto last() const -> last_f {return last_f((m_value & last_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaen() const -> dmaen_f {return dmaen_f((m_value & dmaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itbufen() const -> itbufen_f {return itbufen_f((m_value & itbufen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itevten() const -> itevten_f {return itevten_f((m_value & itevten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iterren() const -> iterren_f {return iterren_f((m_value & iterren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto freq() const -> freq_f {return freq_f(static_cast<uint8_t>(m_value >> freq_f::Offset));}

	constexpr cr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr2_r other) const -> cr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

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
 * Addressing mode (slave mode)
 */
class addmode_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr addmode_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator oar1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(oar1_r other) const -> oar1_r { return static_cast<oar1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Interface address
 */
class add10_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr add10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator oar1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(oar1_r other) const -> oar1_r { return static_cast<oar1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Interface address
 */
class add7_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr add7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator oar1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(oar1_r other) const -> oar1_r { return static_cast<oar1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Interface address
 */
class add0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr add0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator oar1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(oar1_r other) const -> oar1_r { return static_cast<oar1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto addmode() const -> addmode_f {return addmode_f((m_value & addmode_f::Mask) != 0);}
	[[nodiscard]] constexpr auto add10() const -> add10_f {return add10_f(static_cast<uint8_t>(m_value >> add10_f::Offset));}
	[[nodiscard]] constexpr auto add7() const -> add7_f {return add7_f(static_cast<uint8_t>(m_value >> add7_f::Offset));}
	[[nodiscard]] constexpr auto add0() const -> add0_f {return add0_f((m_value & add0_f::Mask) != 0);}

	constexpr oar1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(oar1_r other) const -> oar1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> oar1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

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
class add2_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr add2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator oar2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(oar2_r other) const -> oar2_r { return static_cast<oar2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Dual addressing mode enable
 */
class endual_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr endual_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator oar2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(oar2_r other) const -> oar2_r { return static_cast<oar2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto add2() const -> add2_f {return add2_f(static_cast<uint8_t>(m_value >> add2_f::Offset));}
	[[nodiscard]] constexpr auto endual() const -> endual_f {return endual_f((m_value & endual_f::Mask) != 0);}

	constexpr oar2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(oar2_r other) const -> oar2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> oar2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Data register
 */
class dr_r {
public:

/**
 * 8-bit data register
 */
class dr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dr_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dr() const -> dr_f {return dr_f(static_cast<uint8_t>(m_value >> dr_f::Offset));}

	constexpr dr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dr_r other) const -> dr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Status register 1
 */
class sr1_r {
public:

/**
 * SMBus alert
 */
class smbalert_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr smbalert_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Timeout or Tlow error
 */
class timeout_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr timeout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * PEC Error in reception
 */
class pecerr_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pecerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Overrun/Underrun
 */
class ovr_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ovr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Acknowledge failure
 */
class af_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr af_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Arbitration lost (master mode)
 */
class arlo_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr arlo_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

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
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data register empty (transmitters)
 */
class txe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data register not empty (receivers)
 */
class rxne_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stop detection (slave mode)
 */
class stopf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stopf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * 10-bit header sent (Master mode)
 */
class add10_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr add10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Byte transfer finished
 */
class btf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr btf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Address sent (master mode)/matched (slave mode)
 */
class addr_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr addr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Start bit (Master mode)
 */
class sb_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sb_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr1_r other) const -> sr1_r { return static_cast<sr1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto smbalert() const -> smbalert_f {return smbalert_f((m_value & smbalert_f::Mask) != 0);}
	[[nodiscard]] constexpr auto timeout() const -> timeout_f {return timeout_f((m_value & timeout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pecerr() const -> pecerr_f {return pecerr_f((m_value & pecerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovr() const -> ovr_f {return ovr_f((m_value & ovr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto af() const -> af_f {return af_f((m_value & af_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arlo() const -> arlo_f {return arlo_f((m_value & arlo_f::Mask) != 0);}
	[[nodiscard]] constexpr auto berr() const -> berr_f {return berr_f((m_value & berr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txe() const -> txe_f {return txe_f((m_value & txe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxne() const -> rxne_f {return rxne_f((m_value & rxne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stopf() const -> stopf_f {return stopf_f((m_value & stopf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto add10() const -> add10_f {return add10_f((m_value & add10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto btf() const -> btf_f {return btf_f((m_value & btf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto addr() const -> addr_f {return addr_f((m_value & addr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sb() const -> sb_f {return sb_f((m_value & sb_f::Mask) != 0);}

	constexpr sr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr1_r other) const -> sr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Status register 2
 */
class sr2_r {
public:

/**
 * acket error checking register
 */
class pec_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pec_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Dual flag (Slave mode)
 */
class dualf_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dualf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SMBus host header (Slave mode)
 */
class smbhost_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr smbhost_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SMBus device default address (Slave mode)
 */
class smbdefault_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr smbdefault_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * General call address (Slave mode)
 */
class gencall_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gencall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transmitter/receiver
 */
class tra_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tra_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Bus busy
 */
class busy_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr busy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Master/slave
 */
class msl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr msl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr2_r other) const -> sr2_r { return static_cast<sr2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pec() const -> pec_f {return pec_f(static_cast<uint8_t>(m_value >> pec_f::Offset));}
	[[nodiscard]] constexpr auto dualf() const -> dualf_f {return dualf_f((m_value & dualf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smbhost() const -> smbhost_f {return smbhost_f((m_value & smbhost_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smbdefault() const -> smbdefault_f {return smbdefault_f((m_value & smbdefault_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gencall() const -> gencall_f {return gencall_f((m_value & gencall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tra() const -> tra_f {return tra_f((m_value & tra_f::Mask) != 0);}
	[[nodiscard]] constexpr auto busy() const -> busy_f {return busy_f((m_value & busy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msl() const -> msl_f {return msl_f((m_value & msl_f::Mask) != 0);}

	constexpr sr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr2_r other) const -> sr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Clock control register
 */
class ccr_r {
public:

/**
 * I2C master mode selection
 */
class f_s_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr f_s_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Fast mode duty cycle
 */
class duty_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr duty_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Clock control register in Fast/Standard mode (Master mode)
 */
class ccr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto f_s() const -> f_s_f {return f_s_f((m_value & f_s_f::Mask) != 0);}
	[[nodiscard]] constexpr auto duty() const -> duty_f {return duty_f((m_value & duty_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccr() const -> ccr_f {return ccr_f(static_cast<uint16_t>(m_value >> ccr_f::Offset));}

	constexpr ccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr_r other) const -> ccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TRISE register
 */
class trise_r {
public:

/**
 * Maximum rise time in Fast/Standard mode (Master mode)
 */
class trise_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr trise_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator trise_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(trise_r other) const -> trise_r { return static_cast<trise_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto trise() const -> trise_f {return trise_f(static_cast<uint8_t>(m_value >> trise_f::Offset));}

	constexpr trise_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(trise_r other) const -> trise_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> trise_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0b10; // 2 0x2

private:
	uint32_t m_value;
};

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,oar1_r> oar1;
	Memory<uint32_t,oar2_r> oar2;
	Memory<uint32_t,dr_r> dr;
	Memory<uint32_t,sr1_r> sr1;
	ReadOnlyMemory<uint32_t,sr2_r> sr2;
	Memory<uint32_t,ccr_r> ccr;
	Memory<uint32_t,trise_r> trise;
};

static_assert(std::is_standard_layout_v<i2c_p>);
static_assert(offsetof(i2c_p, cr1) == i2c_p::cr1_r::Offset);
static_assert(offsetof(i2c_p, cr2) == i2c_p::cr2_r::Offset);
static_assert(offsetof(i2c_p, oar1) == i2c_p::oar1_r::Offset);
static_assert(offsetof(i2c_p, oar2) == i2c_p::oar2_r::Offset);
static_assert(offsetof(i2c_p, dr) == i2c_p::dr_r::Offset);
static_assert(offsetof(i2c_p, sr1) == i2c_p::sr1_r::Offset);
static_assert(offsetof(i2c_p, sr2) == i2c_p::sr2_r::Offset);
static_assert(offsetof(i2c_p, ccr) == i2c_p::ccr_r::Offset);
static_assert(offsetof(i2c_p, trise) == i2c_p::trise_r::Offset);

inline i2c_p& i2c1 = *reinterpret_cast<i2c_p*>(0x40005400);
inline i2c_p& i2c2 = *reinterpret_cast<i2c_p*>(0x40005800);
inline i2c_p& i2c3 = *reinterpret_cast<i2c_p*>(0x40005C00);

} // STM32F401

