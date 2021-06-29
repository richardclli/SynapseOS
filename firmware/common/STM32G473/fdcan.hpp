#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * FDCAN
 */
class fdcan_p {
public:
/**
 * FDCAN Core Release Register
 */
class crel_r {
public:

/**
 * DAY
 */
class day_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr day_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator crel_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(crel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<crel_r>() const {return ClearSet<crel_r>(Mask, *this);}
	constexpr auto operator|(crel_r other) const -> crel_r { return static_cast<crel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<crel_r> other) const -> ClearSet<crel_r> {return ClearSet<crel_r>(crel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MON
 */
class mon_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mon_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator crel_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(crel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<crel_r>() const {return ClearSet<crel_r>(Mask, *this);}
	constexpr auto operator|(crel_r other) const -> crel_r { return static_cast<crel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<crel_r> other) const -> ClearSet<crel_r> {return ClearSet<crel_r>(crel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * YEAR
 */
class year_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr year_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator crel_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(crel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<crel_r>() const {return ClearSet<crel_r>(Mask, *this);}
	constexpr auto operator|(crel_r other) const -> crel_r { return static_cast<crel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<crel_r> other) const -> ClearSet<crel_r> {return ClearSet<crel_r>(crel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SUBSTEP
 */
class substep_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr substep_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator crel_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(crel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<crel_r>() const {return ClearSet<crel_r>(Mask, *this);}
	constexpr auto operator|(crel_r other) const -> crel_r { return static_cast<crel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<crel_r> other) const -> ClearSet<crel_r> {return ClearSet<crel_r>(crel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * STEP
 */
class step_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr step_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator crel_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(crel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<crel_r>() const {return ClearSet<crel_r>(Mask, *this);}
	constexpr auto operator|(crel_r other) const -> crel_r { return static_cast<crel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<crel_r> other) const -> ClearSet<crel_r> {return ClearSet<crel_r>(crel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * REL
 */
class rel_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator crel_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(crel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<crel_r>() const {return ClearSet<crel_r>(Mask, *this);}
	constexpr auto operator|(crel_r other) const -> crel_r { return static_cast<crel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<crel_r> other) const -> ClearSet<crel_r> {return ClearSet<crel_r>(crel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto day() const -> day_f {return day_f(static_cast<uint8_t>(m_value >> day_f::Offset));}
	[[nodiscard]] constexpr auto mon() const -> mon_f {return mon_f(static_cast<uint8_t>(m_value >> mon_f::Offset));}
	[[nodiscard]] constexpr auto year() const -> year_f {return year_f(static_cast<uint8_t>(m_value >> year_f::Offset));}
	[[nodiscard]] constexpr auto substep() const -> substep_f {return substep_f(static_cast<uint8_t>(m_value >> substep_f::Offset));}
	[[nodiscard]] constexpr auto step() const -> step_f {return step_f(static_cast<uint8_t>(m_value >> step_f::Offset));}
	[[nodiscard]] constexpr auto rel() const -> rel_f {return rel_f(static_cast<uint8_t>(m_value >> rel_f::Offset));}

	constexpr crel_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(crel_r other) const -> crel_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> crel_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b110010000101000001001000011000; // 840176152 0x32141218

private:
	uint32_t m_value;
};
/**
 * FDCAN Core Release Register
 */
class endn_r {
public:

/**
 * ETV
 */
class etv_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr etv_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator endn_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(endn_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<endn_r>() const {return ClearSet<endn_r>(Mask, *this);}
	constexpr auto operator|(endn_r other) const -> endn_r { return static_cast<endn_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<endn_r> other) const -> ClearSet<endn_r> {return ClearSet<endn_r>(endn_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto etv() const -> etv_f {return etv_f(static_cast<uint32_t>(m_value >> etv_f::Offset));}

	constexpr endn_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(endn_r other) const -> endn_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> endn_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0b10000111011001010100001100100001; // 2271560481 0x87654321

private:
	uint32_t m_value;
};
/**
 * This register is only writable if bits CCCR.CCE and CCCR.INIT are set. The CAN bit time may be programed in the range of 4 to 25 time quanta. The CAN time quantum may be programmed in the range of 1 to 1024 FDCAN clock periods. tq = (DBRP + 1) FDCAN clock period. DTSEG1 is the sum of Prop_Seg and Phase_Seg1. DTSEG2 is Phase_Seg2. Therefore the length of the bit time is (programmed values) [DTSEG1 + DTSEG2 + 3] tq or (functional values) [Sync_Seg + Prop_Seg + Phase_Seg1 + Phase_Seg2] tq. The Information Processing Time (IPT) is zero, meaning the data for the next bit is available at the first clock edge after the sample point.
 */
class dbtp_r {
public:

/**
 * DSJW
 */
class dsjw_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dsjw_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dbtp_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dbtp_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dbtp_r>() const {return ClearSet<dbtp_r>(Mask, *this);}
	constexpr auto operator|(dbtp_r other) const -> dbtp_r { return static_cast<dbtp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbtp_r> other) const -> ClearSet<dbtp_r> {return ClearSet<dbtp_r>(dbtp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTSEG2
 */
class dtseg2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dtseg2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dbtp_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dbtp_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dbtp_r>() const {return ClearSet<dbtp_r>(Mask, *this);}
	constexpr auto operator|(dbtp_r other) const -> dbtp_r { return static_cast<dbtp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbtp_r> other) const -> ClearSet<dbtp_r> {return ClearSet<dbtp_r>(dbtp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTSEG1
 */
class dtseg1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dtseg1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dbtp_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dbtp_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dbtp_r>() const {return ClearSet<dbtp_r>(Mask, *this);}
	constexpr auto operator|(dbtp_r other) const -> dbtp_r { return static_cast<dbtp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbtp_r> other) const -> ClearSet<dbtp_r> {return ClearSet<dbtp_r>(dbtp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DBRP
 */
class dbrp_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dbrp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dbtp_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dbtp_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dbtp_r>() const {return ClearSet<dbtp_r>(Mask, *this);}
	constexpr auto operator|(dbtp_r other) const -> dbtp_r { return static_cast<dbtp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbtp_r> other) const -> ClearSet<dbtp_r> {return ClearSet<dbtp_r>(dbtp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TDC
 */
class tdc_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tdc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dbtp_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dbtp_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dbtp_r>() const {return ClearSet<dbtp_r>(Mask, *this);}
	constexpr auto operator|(dbtp_r other) const -> dbtp_r { return static_cast<dbtp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dbtp_r> other) const -> ClearSet<dbtp_r> {return ClearSet<dbtp_r>(dbtp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dsjw() const -> dsjw_f {return dsjw_f(static_cast<uint8_t>(m_value >> dsjw_f::Offset));}
	[[nodiscard]] constexpr auto dtseg2() const -> dtseg2_f {return dtseg2_f(static_cast<uint8_t>(m_value >> dtseg2_f::Offset));}
	[[nodiscard]] constexpr auto dtseg1() const -> dtseg1_f {return dtseg1_f(static_cast<uint8_t>(m_value >> dtseg1_f::Offset));}
	[[nodiscard]] constexpr auto dbrp() const -> dbrp_f {return dbrp_f(static_cast<uint8_t>(m_value >> dbrp_f::Offset));}
	[[nodiscard]] constexpr auto tdc() const -> tdc_f {return tdc_f((m_value & tdc_f::Mask) != 0);}

	template<std::size_t Index> struct dtseg_f { static_assert(Index == 2 || Index == 1); };
	template<std::size_t Index> using dtseg_v = typename dtseg_f<Index>::type;
	template<std::size_t Index> constexpr auto dtseg() const { return dtseg_v<Index>::get(*this); }

	constexpr dbtp_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dbtp_r other) const -> dbtp_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dbtp_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0b101000110011; // 2611 0xA33

private:
	uint32_t m_value;
};
/**
 * Write access to the Test Register has to be enabled by setting bit CCCR[TEST] to 1 . All Test Register functions are set to their reset values when bit CCCR[TEST] is reset. Loop Back mode and software control of Tx pin FDCANx_TX are hardware test modes. Programming TX differently from 00 may disturb the message transfer on the CAN bus.
 */
class test_r {
public:

/**
 * LBCK
 */
class lbck_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lbck_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator test_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(test_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<test_r>() const {return ClearSet<test_r>(Mask, *this);}
	constexpr auto operator|(test_r other) const -> test_r { return static_cast<test_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<test_r> other) const -> ClearSet<test_r> {return ClearSet<test_r>(test_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TX
 */
class tx_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator test_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(test_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<test_r>() const {return ClearSet<test_r>(Mask, *this);}
	constexpr auto operator|(test_r other) const -> test_r { return static_cast<test_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<test_r> other) const -> ClearSet<test_r> {return ClearSet<test_r>(test_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RX
 */
class rx_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator test_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(test_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<test_r>() const {return ClearSet<test_r>(Mask, *this);}
	constexpr auto operator|(test_r other) const -> test_r { return static_cast<test_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<test_r> other) const -> ClearSet<test_r> {return ClearSet<test_r>(test_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lbck() const -> lbck_f {return lbck_f((m_value & lbck_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tx() const -> tx_f {return tx_f(static_cast<uint8_t>(m_value >> tx_f::Offset));}
	[[nodiscard]] constexpr auto rx() const -> rx_f {return rx_f((m_value & rx_f::Mask) != 0);}

	constexpr test_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(test_r other) const -> test_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> test_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * The RAM Watchdog monitors the READY output of the Message RAM. A Message RAM access starts the Message RAM Watchdog Counter with the value configured by the RWD[WDC] bits. The counter is reloaded with RWD[WDC] bits when the Message RAM signals successful completion by activating its READY output. In case there is no response from the Message RAM until the counter has counted down to 0, the counter stops and interrupt flag IR[WDI] bit is set. The RAM Watchdog Counter is clocked by the fdcan_pclk clock.
 */
class rwd_r {
public:

/**
 * WDC
 */
class wdc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr wdc_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rwd_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rwd_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rwd_r>() const {return ClearSet<rwd_r>(Mask, *this);}
	constexpr auto operator|(rwd_r other) const -> rwd_r { return static_cast<rwd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rwd_r> other) const -> ClearSet<rwd_r> {return ClearSet<rwd_r>(rwd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * WDV
 */
class wdv_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr wdv_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rwd_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rwd_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rwd_r>() const {return ClearSet<rwd_r>(Mask, *this);}
	constexpr auto operator|(rwd_r other) const -> rwd_r { return static_cast<rwd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rwd_r> other) const -> ClearSet<rwd_r> {return ClearSet<rwd_r>(rwd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto wdc() const -> wdc_f {return wdc_f(static_cast<uint8_t>(m_value >> wdc_f::Offset));}
	[[nodiscard]] constexpr auto wdv() const -> wdv_f {return wdv_f(static_cast<uint8_t>(m_value >> wdv_f::Offset));}

	constexpr rwd_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rwd_r other) const -> rwd_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rwd_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * For details about setting and resetting of single bits see Software initialization.
 */
class cccr_r {
public:

/**
 * INIT
 */
class init_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr init_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CCE
 */
class cce_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ASM
 */
class asm_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr asm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CSA
 */
class csa_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr csa_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CSR
 */
class csr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr csr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MON
 */
class mon_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mon_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAR
 */
class dar_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dar_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEST
 */
class test_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr test_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FDOE
 */
class fdoe_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr fdoe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRSE
 */
class brse_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr brse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PXHD
 */
class pxhd_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pxhd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EFBI
 */
class efbi_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr efbi_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXP
 */
class txp_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr txp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * NISO
 */
class niso_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr niso_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cccr_r>() const {return ClearSet<cccr_r>(Mask, *this);}
	constexpr auto operator|(cccr_r other) const -> cccr_r { return static_cast<cccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cccr_r> other) const -> ClearSet<cccr_r> {return ClearSet<cccr_r>(cccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto init() const -> init_f {return init_f((m_value & init_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cce() const -> cce_f {return cce_f((m_value & cce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto asm() const -> asm_f {return asm_f((m_value & asm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto csa() const -> csa_f {return csa_f((m_value & csa_f::Mask) != 0);}
	[[nodiscard]] constexpr auto csr() const -> csr_f {return csr_f((m_value & csr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mon() const -> mon_f {return mon_f((m_value & mon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dar() const -> dar_f {return dar_f((m_value & dar_f::Mask) != 0);}
	[[nodiscard]] constexpr auto test() const -> test_f {return test_f((m_value & test_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fdoe() const -> fdoe_f {return fdoe_f((m_value & fdoe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto brse() const -> brse_f {return brse_f((m_value & brse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pxhd() const -> pxhd_f {return pxhd_f((m_value & pxhd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto efbi() const -> efbi_f {return efbi_f((m_value & efbi_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txp() const -> txp_f {return txp_f((m_value & txp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto niso() const -> niso_f {return niso_f((m_value & niso_f::Mask) != 0);}

	constexpr cccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cccr_r other) const -> cccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0b1; // 1 0x1

private:
	uint32_t m_value;
};
/**
 * FDCAN_NBTP
 */
class nbtp_r {
public:

/**
 * NTSEG2
 */
class ntseg2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ntseg2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator nbtp_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(nbtp_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<nbtp_r>() const {return ClearSet<nbtp_r>(Mask, *this);}
	constexpr auto operator|(nbtp_r other) const -> nbtp_r { return static_cast<nbtp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<nbtp_r> other) const -> ClearSet<nbtp_r> {return ClearSet<nbtp_r>(nbtp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * NTSEG1
 */
class ntseg1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ntseg1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator nbtp_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(nbtp_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<nbtp_r>() const {return ClearSet<nbtp_r>(Mask, *this);}
	constexpr auto operator|(nbtp_r other) const -> nbtp_r { return static_cast<nbtp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<nbtp_r> other) const -> ClearSet<nbtp_r> {return ClearSet<nbtp_r>(nbtp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * NBRP
 */
class nbrp_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbrp_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator nbtp_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(nbtp_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<nbtp_r>() const {return ClearSet<nbtp_r>(Mask, *this);}
	constexpr auto operator|(nbtp_r other) const -> nbtp_r { return static_cast<nbtp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<nbtp_r> other) const -> ClearSet<nbtp_r> {return ClearSet<nbtp_r>(nbtp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * NSJW
 */
class nsjw_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nsjw_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator nbtp_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(nbtp_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<nbtp_r>() const {return ClearSet<nbtp_r>(Mask, *this);}
	constexpr auto operator|(nbtp_r other) const -> nbtp_r { return static_cast<nbtp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<nbtp_r> other) const -> ClearSet<nbtp_r> {return ClearSet<nbtp_r>(nbtp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ntseg2() const -> ntseg2_f {return ntseg2_f(static_cast<uint8_t>(m_value >> ntseg2_f::Offset));}
	[[nodiscard]] constexpr auto ntseg1() const -> ntseg1_f {return ntseg1_f(static_cast<uint8_t>(m_value >> ntseg1_f::Offset));}
	[[nodiscard]] constexpr auto nbrp() const -> nbrp_f {return nbrp_f(static_cast<uint16_t>(m_value >> nbrp_f::Offset));}
	[[nodiscard]] constexpr auto nsjw() const -> nsjw_f {return nsjw_f(static_cast<uint8_t>(m_value >> nsjw_f::Offset));}

	template<std::size_t Index> struct ntseg_f { static_assert(Index == 2 || Index == 1); };
	template<std::size_t Index> using ntseg_v = typename ntseg_f<Index>::type;
	template<std::size_t Index> constexpr auto ntseg() const { return ntseg_v<Index>::get(*this); }

	constexpr nbtp_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(nbtp_r other) const -> nbtp_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> nbtp_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0b110000000000000101000000011; // 100665859 0x6000A03

private:
	uint32_t m_value;
};
/**
 * FDCAN Timestamp Counter Configuration Register
 */
class tscc_r {
public:

/**
 * TSS
 */
class tss_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tss_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tscc_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tscc_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tscc_r>() const {return ClearSet<tscc_r>(Mask, *this);}
	constexpr auto operator|(tscc_r other) const -> tscc_r { return static_cast<tscc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tscc_r> other) const -> ClearSet<tscc_r> {return ClearSet<tscc_r>(tscc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TCP
 */
class tcp_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr tcp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tscc_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tscc_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tscc_r>() const {return ClearSet<tscc_r>(Mask, *this);}
	constexpr auto operator|(tscc_r other) const -> tscc_r { return static_cast<tscc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tscc_r> other) const -> ClearSet<tscc_r> {return ClearSet<tscc_r>(tscc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto tss() const -> tss_f {return tss_f(static_cast<uint8_t>(m_value >> tss_f::Offset));}
	[[nodiscard]] constexpr auto tcp() const -> tcp_f {return tcp_f(static_cast<uint8_t>(m_value >> tcp_f::Offset));}

	constexpr tscc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tscc_r other) const -> tscc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tscc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Timestamp Counter Value Register
 */
class tscv_r {
public:

/**
 * TSC
 */
class tsc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tsc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tscv_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tscv_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tscv_r>() const {return ClearSet<tscv_r>(Mask, *this);}
	constexpr auto operator|(tscv_r other) const -> tscv_r { return static_cast<tscv_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tscv_r> other) const -> ClearSet<tscv_r> {return ClearSet<tscv_r>(tscv_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto tsc() const -> tsc_f {return tsc_f(static_cast<uint16_t>(m_value >> tsc_f::Offset));}

	constexpr tscv_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tscv_r other) const -> tscv_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tscv_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Timeout Counter Configuration Register
 */
class tocc_r {
public:

/**
 * ETOC
 */
class etoc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr etoc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tocc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tocc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tocc_r>() const {return ClearSet<tocc_r>(Mask, *this);}
	constexpr auto operator|(tocc_r other) const -> tocc_r { return static_cast<tocc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tocc_r> other) const -> ClearSet<tocc_r> {return ClearSet<tocc_r>(tocc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TOS
 */
class tos_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tos_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tocc_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tocc_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tocc_r>() const {return ClearSet<tocc_r>(Mask, *this);}
	constexpr auto operator|(tocc_r other) const -> tocc_r { return static_cast<tocc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tocc_r> other) const -> ClearSet<tocc_r> {return ClearSet<tocc_r>(tocc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TOP
 */
class top_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr top_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tocc_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tocc_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tocc_r>() const {return ClearSet<tocc_r>(Mask, *this);}
	constexpr auto operator|(tocc_r other) const -> tocc_r { return static_cast<tocc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tocc_r> other) const -> ClearSet<tocc_r> {return ClearSet<tocc_r>(tocc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto etoc() const -> etoc_f {return etoc_f((m_value & etoc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tos() const -> tos_f {return tos_f(static_cast<uint8_t>(m_value >> tos_f::Offset));}
	[[nodiscard]] constexpr auto top() const -> top_f {return top_f(static_cast<uint16_t>(m_value >> top_f::Offset));}

	constexpr tocc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tocc_r other) const -> tocc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tocc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0b11111111111111110000000000000000; // 4294901760 0xFFFF0000

private:
	uint32_t m_value;
};
/**
 * FDCAN Timeout Counter Value Register
 */
class tocv_r {
public:

/**
 * TOC
 */
class toc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr toc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tocv_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tocv_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tocv_r>() const {return ClearSet<tocv_r>(Mask, *this);}
	constexpr auto operator|(tocv_r other) const -> tocv_r { return static_cast<tocv_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tocv_r> other) const -> ClearSet<tocv_r> {return ClearSet<tocv_r>(tocv_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto toc() const -> toc_f {return toc_f(static_cast<uint16_t>(m_value >> toc_f::Offset));}

	constexpr tocv_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tocv_r other) const -> tocv_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tocv_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0b1111111111111111; // 65535 0xFFFF

private:
	uint32_t m_value;
};
/**
 * FDCAN Error Counter Register
 */
class ecr_r {
public:

/**
 * TEC
 */
class tec_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tec_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TREC
 */
class rec_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rec_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RP
 */
class rp_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ecr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ecr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CEL
 */
class cel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cel_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto tec() const -> tec_f {return tec_f(static_cast<uint8_t>(m_value >> tec_f::Offset));}
	[[nodiscard]] constexpr auto rec() const -> rec_f {return rec_f(static_cast<uint8_t>(m_value >> rec_f::Offset));}
	[[nodiscard]] constexpr auto rp() const -> rp_f {return rp_f((m_value & rp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cel() const -> cel_f {return cel_f(static_cast<uint8_t>(m_value >> cel_f::Offset));}

	constexpr ecr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ecr_r other) const -> ecr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ecr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Protocol Status Register
 */
class psr_r {
public:

/**
 * LEC
 */
class lec_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr lec_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator psr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(psr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ACT
 */
class act_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr act_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator psr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(psr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * EP
 */
class ep_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator psr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(psr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EW
 */
class ew_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ew_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator psr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(psr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BO
 */
class bo_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bo_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator psr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(psr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DLEC
 */
class dlec_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dlec_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator psr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(psr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RESI
 */
class resi_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr resi_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator psr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(psr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RBRS
 */
class rbrs_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rbrs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator psr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(psr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * REDL
 */
class redl_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr redl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator psr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(psr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PXE
 */
class pxe_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pxe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator psr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(psr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TDCV
 */
class tdcv_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr tdcv_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator psr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(psr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psr_r>() const {return ClearSet<psr_r>(Mask, *this);}
	constexpr auto operator|(psr_r other) const -> psr_r { return static_cast<psr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psr_r> other) const -> ClearSet<psr_r> {return ClearSet<psr_r>(psr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto lec() const -> lec_f {return lec_f(static_cast<uint8_t>(m_value >> lec_f::Offset));}
	[[nodiscard]] constexpr auto act() const -> act_f {return act_f(static_cast<uint8_t>(m_value >> act_f::Offset));}
	[[nodiscard]] constexpr auto ep() const -> ep_f {return ep_f((m_value & ep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ew() const -> ew_f {return ew_f((m_value & ew_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bo() const -> bo_f {return bo_f((m_value & bo_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dlec() const -> dlec_f {return dlec_f(static_cast<uint8_t>(m_value >> dlec_f::Offset));}
	[[nodiscard]] constexpr auto resi() const -> resi_f {return resi_f((m_value & resi_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rbrs() const -> rbrs_f {return rbrs_f((m_value & rbrs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto redl() const -> redl_f {return redl_f((m_value & redl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pxe() const -> pxe_f {return pxe_f((m_value & pxe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tdcv() const -> tdcv_f {return tdcv_f(static_cast<uint8_t>(m_value >> tdcv_f::Offset));}

	constexpr psr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(psr_r other) const -> psr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> psr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0b11100000111; // 1799 0x707

private:
	uint32_t m_value;
};
/**
 * FDCAN Transmitter Delay Compensation Register
 */
class tdcr_r {
public:

/**
 * TDCF
 */
class tdcf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tdcf_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tdcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tdcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tdcr_r>() const {return ClearSet<tdcr_r>(Mask, *this);}
	constexpr auto operator|(tdcr_r other) const -> tdcr_r { return static_cast<tdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tdcr_r> other) const -> ClearSet<tdcr_r> {return ClearSet<tdcr_r>(tdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TDCO
 */
class tdco_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tdco_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tdcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tdcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tdcr_r>() const {return ClearSet<tdcr_r>(Mask, *this);}
	constexpr auto operator|(tdcr_r other) const -> tdcr_r { return static_cast<tdcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tdcr_r> other) const -> ClearSet<tdcr_r> {return ClearSet<tdcr_r>(tdcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto tdcf() const -> tdcf_f {return tdcf_f(static_cast<uint8_t>(m_value >> tdcf_f::Offset));}
	[[nodiscard]] constexpr auto tdco() const -> tdco_f {return tdco_f(static_cast<uint8_t>(m_value >> tdco_f::Offset));}

	constexpr tdcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tdcr_r other) const -> tdcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tdcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * The flags are set when one of the listed conditions is detected (edge-sensitive). The flags remain set until the Host clears them. A flag is cleared by writing a 1 to the corresponding bit position. Writing a 0 has no effect. A hard reset will clear the register. The configuration of IE controls whether an interrupt is generated. The configuration of ILS controls on which interrupt line an interrupt is signaled.
 */
class ir_r {
public:

/**
 * RF0N
 */
class rf0n_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf0n_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF0F
 */
class rf0f_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf0f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF0L
 */
class rf0l_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf0l_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF1N
 */
class rf1n_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf1n_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF1F
 */
class rf1f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf1f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF1L
 */
class rf1l_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf1l_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HPM
 */
class hpm_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hpm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TC
 */
class tc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCF
 */
class tcf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TFE
 */
class tfe_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEFN
 */
class tefn_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tefn_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEFF
 */
class teff_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr teff_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEFL
 */
class tefl_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tefl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TSW
 */
class tsw_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tsw_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MRAF
 */
class mraf_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mraf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TOO
 */
class too_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr too_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ELO
 */
class elo_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr elo_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP
 */
class ep_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EW
 */
class ew_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ew_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BO
 */
class bo_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bo_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WDI
 */
class wdi_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wdi_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PEA
 */
class pea_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pea_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PED
 */
class ped_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ped_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ARA
 */
class ara_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ara_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ir_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ir_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ir_r>() const {return ClearSet<ir_r>(Mask, *this);}
	constexpr auto operator|(ir_r other) const -> ir_r { return static_cast<ir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ir_r> other) const -> ClearSet<ir_r> {return ClearSet<ir_r>(ir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rf0n() const -> rf0n_f {return rf0n_f((m_value & rf0n_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf0f() const -> rf0f_f {return rf0f_f((m_value & rf0f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf0l() const -> rf0l_f {return rf0l_f((m_value & rf0l_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf1n() const -> rf1n_f {return rf1n_f((m_value & rf1n_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf1f() const -> rf1f_f {return rf1f_f((m_value & rf1f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf1l() const -> rf1l_f {return rf1l_f((m_value & rf1l_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hpm() const -> hpm_f {return hpm_f((m_value & hpm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tc() const -> tc_f {return tc_f((m_value & tc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcf() const -> tcf_f {return tcf_f((m_value & tcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tfe() const -> tfe_f {return tfe_f((m_value & tfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tefn() const -> tefn_f {return tefn_f((m_value & tefn_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teff() const -> teff_f {return teff_f((m_value & teff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tefl() const -> tefl_f {return tefl_f((m_value & tefl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsw() const -> tsw_f {return tsw_f((m_value & tsw_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mraf() const -> mraf_f {return mraf_f((m_value & mraf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto too() const -> too_f {return too_f((m_value & too_f::Mask) != 0);}
	[[nodiscard]] constexpr auto elo() const -> elo_f {return elo_f((m_value & elo_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep() const -> ep_f {return ep_f((m_value & ep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ew() const -> ew_f {return ew_f((m_value & ew_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bo() const -> bo_f {return bo_f((m_value & bo_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wdi() const -> wdi_f {return wdi_f((m_value & wdi_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pea() const -> pea_f {return pea_f((m_value & pea_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ped() const -> ped_f {return ped_f((m_value & ped_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ara() const -> ara_f {return ara_f((m_value & ara_f::Mask) != 0);}

	constexpr ir_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ir_r other) const -> ir_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ir_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * The settings in the Interrupt Enable register determine which status changes in the Interrupt Register will be signaled on an interrupt line.
 */
class ie_r {
public:

/**
 * RF0NE
 */
class rf0ne_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf0ne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF0FE
 */
class rf0fe_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf0fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF0LE
 */
class rf0le_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf0le_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF1NE
 */
class rf1ne_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf1ne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF1FE
 */
class rf1fe_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf1fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF1LE
 */
class rf1le_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rf1le_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HPME
 */
class hpme_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hpme_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCE
 */
class tce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCFE
 */
class tcfe_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tcfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TFEE
 */
class tfee_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tfee_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEFNE
 */
class tefne_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tefne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEFFE
 */
class teffe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr teffe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEFLE
 */
class tefle_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tefle_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TSWE
 */
class tswe_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tswe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MRAFE
 */
class mrafe_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mrafe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TOOE
 */
class tooe_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tooe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ELOE
 */
class eloe_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eloe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EPE
 */
class epe_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EWE
 */
class ewe_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ewe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BOE
 */
class boe_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr boe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WDIE
 */
class wdie_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wdie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PEAE
 */
class peae_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr peae_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PEDE
 */
class pede_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pede_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ARAE
 */
class arae_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr arae_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ie_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ie_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ie_r>() const {return ClearSet<ie_r>(Mask, *this);}
	constexpr auto operator|(ie_r other) const -> ie_r { return static_cast<ie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ie_r> other) const -> ClearSet<ie_r> {return ClearSet<ie_r>(ie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rf0ne() const -> rf0ne_f {return rf0ne_f((m_value & rf0ne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf0fe() const -> rf0fe_f {return rf0fe_f((m_value & rf0fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf0le() const -> rf0le_f {return rf0le_f((m_value & rf0le_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf1ne() const -> rf1ne_f {return rf1ne_f((m_value & rf1ne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf1fe() const -> rf1fe_f {return rf1fe_f((m_value & rf1fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf1le() const -> rf1le_f {return rf1le_f((m_value & rf1le_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hpme() const -> hpme_f {return hpme_f((m_value & hpme_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tce() const -> tce_f {return tce_f((m_value & tce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcfe() const -> tcfe_f {return tcfe_f((m_value & tcfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tfee() const -> tfee_f {return tfee_f((m_value & tfee_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tefne() const -> tefne_f {return tefne_f((m_value & tefne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teffe() const -> teffe_f {return teffe_f((m_value & teffe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tefle() const -> tefle_f {return tefle_f((m_value & tefle_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tswe() const -> tswe_f {return tswe_f((m_value & tswe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mrafe() const -> mrafe_f {return mrafe_f((m_value & mrafe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tooe() const -> tooe_f {return tooe_f((m_value & tooe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eloe() const -> eloe_f {return eloe_f((m_value & eloe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epe() const -> epe_f {return epe_f((m_value & epe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ewe() const -> ewe_f {return ewe_f((m_value & ewe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto boe() const -> boe_f {return boe_f((m_value & boe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wdie() const -> wdie_f {return wdie_f((m_value & wdie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto peae() const -> peae_f {return peae_f((m_value & peae_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pede() const -> pede_f {return pede_f((m_value & pede_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arae() const -> arae_f {return arae_f((m_value & arae_f::Mask) != 0);}

	constexpr ie_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ie_r other) const -> ie_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ie_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * The Interrupt Line Select register assigns an interrupt generated by a specific interrupt flag from the Interrupt Register to one of the two module interrupt lines. For interrupt generation the respective interrupt line has to be enabled via ILE[EINT0] and ILE[EINT1].
 */
class ils_r {
public:

/**
 * RxFIFO0
 */
class rxfifo0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxfifo0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ils_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ils_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ils_r>() const {return ClearSet<ils_r>(Mask, *this);}
	constexpr auto operator|(ils_r other) const -> ils_r { return static_cast<ils_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ils_r> other) const -> ClearSet<ils_r> {return ClearSet<ils_r>(ils_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RxFIFO1
 */
class rxfifo1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxfifo1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ils_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ils_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ils_r>() const {return ClearSet<ils_r>(Mask, *this);}
	constexpr auto operator|(ils_r other) const -> ils_r { return static_cast<ils_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ils_r> other) const -> ClearSet<ils_r> {return ClearSet<ils_r>(ils_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SMSG
 */
class smsg_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr smsg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ils_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ils_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ils_r>() const {return ClearSet<ils_r>(Mask, *this);}
	constexpr auto operator|(ils_r other) const -> ils_r { return static_cast<ils_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ils_r> other) const -> ClearSet<ils_r> {return ClearSet<ils_r>(ils_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TFERR
 */
class tferr_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tferr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ils_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ils_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ils_r>() const {return ClearSet<ils_r>(Mask, *this);}
	constexpr auto operator|(ils_r other) const -> ils_r { return static_cast<ils_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ils_r> other) const -> ClearSet<ils_r> {return ClearSet<ils_r>(ils_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MISC
 */
class misc_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr misc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ils_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ils_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ils_r>() const {return ClearSet<ils_r>(Mask, *this);}
	constexpr auto operator|(ils_r other) const -> ils_r { return static_cast<ils_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ils_r> other) const -> ClearSet<ils_r> {return ClearSet<ils_r>(ils_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BERR
 */
class berr_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr berr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ils_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ils_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ils_r>() const {return ClearSet<ils_r>(Mask, *this);}
	constexpr auto operator|(ils_r other) const -> ils_r { return static_cast<ils_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ils_r> other) const -> ClearSet<ils_r> {return ClearSet<ils_r>(ils_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PERR
 */
class perr_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr perr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ils_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ils_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ils_r>() const {return ClearSet<ils_r>(Mask, *this);}
	constexpr auto operator|(ils_r other) const -> ils_r { return static_cast<ils_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ils_r> other) const -> ClearSet<ils_r> {return ClearSet<ils_r>(ils_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rxfifo0() const -> rxfifo0_f {return rxfifo0_f((m_value & rxfifo0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfifo1() const -> rxfifo1_f {return rxfifo1_f((m_value & rxfifo1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smsg() const -> smsg_f {return smsg_f((m_value & smsg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tferr() const -> tferr_f {return tferr_f((m_value & tferr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto misc() const -> misc_f {return misc_f((m_value & misc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto berr() const -> berr_f {return berr_f((m_value & berr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto perr() const -> perr_f {return perr_f((m_value & perr_f::Mask) != 0);}

	template<std::size_t Index> struct rxfifo_f { static_assert(Index == 0 || Index == 1); };
	template<std::size_t Index> using rxfifo_v = typename rxfifo_f<Index>::type;
	template<std::size_t Index> constexpr auto rxfifo() const { return rxfifo_v<Index>::get(*this); }

	constexpr ils_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ils_r other) const -> ils_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ils_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 88;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Each of the two interrupt lines to the CPU can be enabled/disabled separately by programming bits EINT0 and EINT1.
 */
class ile_r {
public:

/**
 * EINT0
 */
class eint0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eint0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ile_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ile_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ile_r>() const {return ClearSet<ile_r>(Mask, *this);}
	constexpr auto operator|(ile_r other) const -> ile_r { return static_cast<ile_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ile_r> other) const -> ClearSet<ile_r> {return ClearSet<ile_r>(ile_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EINT1
 */
class eint1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eint1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ile_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ile_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ile_r>() const {return ClearSet<ile_r>(Mask, *this);}
	constexpr auto operator|(ile_r other) const -> ile_r { return static_cast<ile_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ile_r> other) const -> ClearSet<ile_r> {return ClearSet<ile_r>(ile_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto eint0() const -> eint0_f {return eint0_f((m_value & eint0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eint1() const -> eint1_f {return eint1_f((m_value & eint1_f::Mask) != 0);}

	template<std::size_t Index> struct eint_f { static_assert(Index == 0 || Index == 1); };
	template<std::size_t Index> using eint_v = typename eint_f<Index>::type;
	template<std::size_t Index> constexpr auto eint() const { return eint_v<Index>::get(*this); }

	constexpr ile_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ile_r other) const -> ile_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ile_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Global settings for Message ID filtering. The Global Filter Configuration controls the filter path for standard and extended messages as described in Figure706: Standard Message ID filter path and Figure707: Extended Message ID filter path.
 */
class rxgfc_r {
public:

/**
 * RRFE
 */
class rrfe_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rrfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rxgfc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rxgfc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxgfc_r>() const {return ClearSet<rxgfc_r>(Mask, *this);}
	constexpr auto operator|(rxgfc_r other) const -> rxgfc_r { return static_cast<rxgfc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxgfc_r> other) const -> ClearSet<rxgfc_r> {return ClearSet<rxgfc_r>(rxgfc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RRFS
 */
class rrfs_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rrfs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rxgfc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rxgfc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxgfc_r>() const {return ClearSet<rxgfc_r>(Mask, *this);}
	constexpr auto operator|(rxgfc_r other) const -> rxgfc_r { return static_cast<rxgfc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxgfc_r> other) const -> ClearSet<rxgfc_r> {return ClearSet<rxgfc_r>(rxgfc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ANFE
 */
class anfe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr anfe_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxgfc_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rxgfc_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxgfc_r>() const {return ClearSet<rxgfc_r>(Mask, *this);}
	constexpr auto operator|(rxgfc_r other) const -> rxgfc_r { return static_cast<rxgfc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxgfc_r> other) const -> ClearSet<rxgfc_r> {return ClearSet<rxgfc_r>(rxgfc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ANFS
 */
class anfs_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr anfs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxgfc_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rxgfc_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxgfc_r>() const {return ClearSet<rxgfc_r>(Mask, *this);}
	constexpr auto operator|(rxgfc_r other) const -> rxgfc_r { return static_cast<rxgfc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxgfc_r> other) const -> ClearSet<rxgfc_r> {return ClearSet<rxgfc_r>(rxgfc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * F1OM
 */
class f1om_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr f1om_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rxgfc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rxgfc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxgfc_r>() const {return ClearSet<rxgfc_r>(Mask, *this);}
	constexpr auto operator|(rxgfc_r other) const -> rxgfc_r { return static_cast<rxgfc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxgfc_r> other) const -> ClearSet<rxgfc_r> {return ClearSet<rxgfc_r>(rxgfc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * F0OM
 */
class f0om_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr f0om_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rxgfc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rxgfc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxgfc_r>() const {return ClearSet<rxgfc_r>(Mask, *this);}
	constexpr auto operator|(rxgfc_r other) const -> rxgfc_r { return static_cast<rxgfc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxgfc_r> other) const -> ClearSet<rxgfc_r> {return ClearSet<rxgfc_r>(rxgfc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LSS
 */
class lss_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr lss_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxgfc_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rxgfc_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxgfc_r>() const {return ClearSet<rxgfc_r>(Mask, *this);}
	constexpr auto operator|(rxgfc_r other) const -> rxgfc_r { return static_cast<rxgfc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxgfc_r> other) const -> ClearSet<rxgfc_r> {return ClearSet<rxgfc_r>(rxgfc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LSE
 */
class lse_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr lse_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxgfc_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rxgfc_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxgfc_r>() const {return ClearSet<rxgfc_r>(Mask, *this);}
	constexpr auto operator|(rxgfc_r other) const -> rxgfc_r { return static_cast<rxgfc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxgfc_r> other) const -> ClearSet<rxgfc_r> {return ClearSet<rxgfc_r>(rxgfc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto rrfe() const -> rrfe_f {return rrfe_f((m_value & rrfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rrfs() const -> rrfs_f {return rrfs_f((m_value & rrfs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto anfe() const -> anfe_f {return anfe_f(static_cast<uint8_t>(m_value >> anfe_f::Offset));}
	[[nodiscard]] constexpr auto anfs() const -> anfs_f {return anfs_f(static_cast<uint8_t>(m_value >> anfs_f::Offset));}
	[[nodiscard]] constexpr auto f1om() const -> f1om_f {return f1om_f((m_value & f1om_f::Mask) != 0);}
	[[nodiscard]] constexpr auto f0om() const -> f0om_f {return f0om_f((m_value & f0om_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lss() const -> lss_f {return lss_f(static_cast<uint8_t>(m_value >> lss_f::Offset));}
	[[nodiscard]] constexpr auto lse() const -> lse_f {return lse_f(static_cast<uint8_t>(m_value >> lse_f::Offset));}

	constexpr rxgfc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rxgfc_r other) const -> rxgfc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rxgfc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Extended ID and Mask Register
 */
class xidam_r {
public:

/**
 * EIDM
 */
class eidm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 29;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eidm_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator xidam_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(xidam_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<xidam_r>() const {return ClearSet<xidam_r>(Mask, *this);}
	constexpr auto operator|(xidam_r other) const -> xidam_r { return static_cast<xidam_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<xidam_r> other) const -> ClearSet<xidam_r> {return ClearSet<xidam_r>(xidam_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto eidm() const -> eidm_f {return eidm_f(static_cast<uint32_t>(m_value >> eidm_f::Offset));}

	constexpr xidam_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(xidam_r other) const -> xidam_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> xidam_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 132;
	static constexpr uint32_t ResetValue = 0b11111111111111111111111111111; // 536870911 0x1FFFFFFF

private:
	uint32_t m_value;
};
/**
 * This register is updated every time a Message ID filter element configured to generate a priority event match. This can be used to monitor the status of incoming high priority messages and to enable fast access to these messages.
 */
class hpms_r {
public:

/**
 * BIDX
 */
class bidx_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr bidx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator hpms_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(hpms_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<hpms_r>() const {return ClearSet<hpms_r>(Mask, *this);}
	constexpr auto operator|(hpms_r other) const -> hpms_r { return static_cast<hpms_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<hpms_r> other) const -> ClearSet<hpms_r> {return ClearSet<hpms_r>(hpms_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MSI
 */
class msi_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr msi_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator hpms_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(hpms_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<hpms_r>() const {return ClearSet<hpms_r>(Mask, *this);}
	constexpr auto operator|(hpms_r other) const -> hpms_r { return static_cast<hpms_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<hpms_r> other) const -> ClearSet<hpms_r> {return ClearSet<hpms_r>(hpms_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * FIDX
 */
class fidx_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr fidx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator hpms_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(hpms_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<hpms_r>() const {return ClearSet<hpms_r>(Mask, *this);}
	constexpr auto operator|(hpms_r other) const -> hpms_r { return static_cast<hpms_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<hpms_r> other) const -> ClearSet<hpms_r> {return ClearSet<hpms_r>(hpms_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * FLST
 */
class flst_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr flst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hpms_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(hpms_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<hpms_r>() const {return ClearSet<hpms_r>(Mask, *this);}
	constexpr auto operator|(hpms_r other) const -> hpms_r { return static_cast<hpms_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<hpms_r> other) const -> ClearSet<hpms_r> {return ClearSet<hpms_r>(hpms_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto bidx() const -> bidx_f {return bidx_f(static_cast<uint8_t>(m_value >> bidx_f::Offset));}
	[[nodiscard]] constexpr auto msi() const -> msi_f {return msi_f(static_cast<uint8_t>(m_value >> msi_f::Offset));}
	[[nodiscard]] constexpr auto fidx() const -> fidx_f {return fidx_f(static_cast<uint8_t>(m_value >> fidx_f::Offset));}
	[[nodiscard]] constexpr auto flst() const -> flst_f {return flst_f((m_value & flst_f::Mask) != 0);}

	constexpr hpms_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(hpms_r other) const -> hpms_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> hpms_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 136;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Rx FIFO 0 Status Register
 */
class rxf0s_r {
public:

/**
 * F0FL
 */
class f0fl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr f0fl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxf0s_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rxf0s_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf0s_r>() const {return ClearSet<rxf0s_r>(Mask, *this);}
	constexpr auto operator|(rxf0s_r other) const -> rxf0s_r { return static_cast<rxf0s_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf0s_r> other) const -> ClearSet<rxf0s_r> {return ClearSet<rxf0s_r>(rxf0s_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * F0GI
 */
class f0gi_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr f0gi_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxf0s_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rxf0s_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf0s_r>() const {return ClearSet<rxf0s_r>(Mask, *this);}
	constexpr auto operator|(rxf0s_r other) const -> rxf0s_r { return static_cast<rxf0s_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf0s_r> other) const -> ClearSet<rxf0s_r> {return ClearSet<rxf0s_r>(rxf0s_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * F0PI
 */
class f0pi_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr f0pi_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxf0s_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rxf0s_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf0s_r>() const {return ClearSet<rxf0s_r>(Mask, *this);}
	constexpr auto operator|(rxf0s_r other) const -> rxf0s_r { return static_cast<rxf0s_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf0s_r> other) const -> ClearSet<rxf0s_r> {return ClearSet<rxf0s_r>(rxf0s_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * F0F
 */
class f0f_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr f0f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rxf0s_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rxf0s_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf0s_r>() const {return ClearSet<rxf0s_r>(Mask, *this);}
	constexpr auto operator|(rxf0s_r other) const -> rxf0s_r { return static_cast<rxf0s_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf0s_r> other) const -> ClearSet<rxf0s_r> {return ClearSet<rxf0s_r>(rxf0s_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF0L
 */
class rf0l_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rf0l_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rxf0s_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rxf0s_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf0s_r>() const {return ClearSet<rxf0s_r>(Mask, *this);}
	constexpr auto operator|(rxf0s_r other) const -> rxf0s_r { return static_cast<rxf0s_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf0s_r> other) const -> ClearSet<rxf0s_r> {return ClearSet<rxf0s_r>(rxf0s_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto f0fl() const -> f0fl_f {return f0fl_f(static_cast<uint8_t>(m_value >> f0fl_f::Offset));}
	[[nodiscard]] constexpr auto f0gi() const -> f0gi_f {return f0gi_f(static_cast<uint8_t>(m_value >> f0gi_f::Offset));}
	[[nodiscard]] constexpr auto f0pi() const -> f0pi_f {return f0pi_f(static_cast<uint8_t>(m_value >> f0pi_f::Offset));}
	[[nodiscard]] constexpr auto f0f() const -> f0f_f {return f0f_f((m_value & f0f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf0l() const -> rf0l_f {return rf0l_f((m_value & rf0l_f::Mask) != 0);}

	constexpr rxf0s_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rxf0s_r other) const -> rxf0s_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rxf0s_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 144;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * CAN Rx FIFO 0 Acknowledge Register
 */
class rxf0a_r {
public:

/**
 * F0AI
 */
class f0ai_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr f0ai_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxf0a_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rxf0a_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf0a_r>() const {return ClearSet<rxf0a_r>(Mask, *this);}
	constexpr auto operator|(rxf0a_r other) const -> rxf0a_r { return static_cast<rxf0a_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf0a_r> other) const -> ClearSet<rxf0a_r> {return ClearSet<rxf0a_r>(rxf0a_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto f0ai() const -> f0ai_f {return f0ai_f(static_cast<uint8_t>(m_value >> f0ai_f::Offset));}

	constexpr rxf0a_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rxf0a_r other) const -> rxf0a_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rxf0a_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 148;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Rx FIFO 1 Status Register
 */
class rxf1s_r {
public:

/**
 * F1FL
 */
class f1fl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr f1fl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxf1s_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rxf1s_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf1s_r>() const {return ClearSet<rxf1s_r>(Mask, *this);}
	constexpr auto operator|(rxf1s_r other) const -> rxf1s_r { return static_cast<rxf1s_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf1s_r> other) const -> ClearSet<rxf1s_r> {return ClearSet<rxf1s_r>(rxf1s_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * F1GI
 */
class f1gi_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr f1gi_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxf1s_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rxf1s_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf1s_r>() const {return ClearSet<rxf1s_r>(Mask, *this);}
	constexpr auto operator|(rxf1s_r other) const -> rxf1s_r { return static_cast<rxf1s_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf1s_r> other) const -> ClearSet<rxf1s_r> {return ClearSet<rxf1s_r>(rxf1s_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * F1PI
 */
class f1pi_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr f1pi_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxf1s_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rxf1s_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf1s_r>() const {return ClearSet<rxf1s_r>(Mask, *this);}
	constexpr auto operator|(rxf1s_r other) const -> rxf1s_r { return static_cast<rxf1s_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf1s_r> other) const -> ClearSet<rxf1s_r> {return ClearSet<rxf1s_r>(rxf1s_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * F1F
 */
class f1f_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr f1f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rxf1s_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rxf1s_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf1s_r>() const {return ClearSet<rxf1s_r>(Mask, *this);}
	constexpr auto operator|(rxf1s_r other) const -> rxf1s_r { return static_cast<rxf1s_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf1s_r> other) const -> ClearSet<rxf1s_r> {return ClearSet<rxf1s_r>(rxf1s_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RF1L
 */
class rf1l_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rf1l_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rxf1s_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rxf1s_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf1s_r>() const {return ClearSet<rxf1s_r>(Mask, *this);}
	constexpr auto operator|(rxf1s_r other) const -> rxf1s_r { return static_cast<rxf1s_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf1s_r> other) const -> ClearSet<rxf1s_r> {return ClearSet<rxf1s_r>(rxf1s_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto f1fl() const -> f1fl_f {return f1fl_f(static_cast<uint8_t>(m_value >> f1fl_f::Offset));}
	[[nodiscard]] constexpr auto f1gi() const -> f1gi_f {return f1gi_f(static_cast<uint8_t>(m_value >> f1gi_f::Offset));}
	[[nodiscard]] constexpr auto f1pi() const -> f1pi_f {return f1pi_f(static_cast<uint8_t>(m_value >> f1pi_f::Offset));}
	[[nodiscard]] constexpr auto f1f() const -> f1f_f {return f1f_f((m_value & f1f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rf1l() const -> rf1l_f {return rf1l_f((m_value & rf1l_f::Mask) != 0);}

	constexpr rxf1s_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rxf1s_r other) const -> rxf1s_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rxf1s_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 152;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Rx FIFO 1 Acknowledge Register
 */
class rxf1a_r {
public:

/**
 * F1AI
 */
class f1ai_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr f1ai_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rxf1a_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rxf1a_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rxf1a_r>() const {return ClearSet<rxf1a_r>(Mask, *this);}
	constexpr auto operator|(rxf1a_r other) const -> rxf1a_r { return static_cast<rxf1a_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rxf1a_r> other) const -> ClearSet<rxf1a_r> {return ClearSet<rxf1a_r>(rxf1a_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto f1ai() const -> f1ai_f {return f1ai_f(static_cast<uint8_t>(m_value >> f1ai_f::Offset));}

	constexpr rxf1a_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rxf1a_r other) const -> rxf1a_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rxf1a_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 156;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Tx Buffer Configuration Register
 */
class txbc_r {
public:

/**
 * TFQM
 */
class tfqm_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tfqm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator txbc_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(txbc_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txbc_r>() const {return ClearSet<txbc_r>(Mask, *this);}
	constexpr auto operator|(txbc_r other) const -> txbc_r { return static_cast<txbc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txbc_r> other) const -> ClearSet<txbc_r> {return ClearSet<txbc_r>(txbc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tfqm() const -> tfqm_f {return tfqm_f((m_value & tfqm_f::Mask) != 0);}

	constexpr txbc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txbc_r other) const -> txbc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txbc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 192;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * The Tx FIFO/Queue status is related to the pending Tx requests listed in register TXBRP. Therefore the effect of Add/Cancellation requests may be delayed due to a running Tx scan (TXBRP not yet updated).
 */
class txfqs_r {
public:

/**
 * TFFL
 */
class tffl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tffl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txfqs_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txfqs_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txfqs_r>() const {return ClearSet<txfqs_r>(Mask, *this);}
	constexpr auto operator|(txfqs_r other) const -> txfqs_r { return static_cast<txfqs_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txfqs_r> other) const -> ClearSet<txfqs_r> {return ClearSet<txfqs_r>(txfqs_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TFGI
 */
class tfgi_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tfgi_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txfqs_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(txfqs_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txfqs_r>() const {return ClearSet<txfqs_r>(Mask, *this);}
	constexpr auto operator|(txfqs_r other) const -> txfqs_r { return static_cast<txfqs_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txfqs_r> other) const -> ClearSet<txfqs_r> {return ClearSet<txfqs_r>(txfqs_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TFQPI
 */
class tfqpi_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr tfqpi_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txfqs_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(txfqs_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txfqs_r>() const {return ClearSet<txfqs_r>(Mask, *this);}
	constexpr auto operator|(txfqs_r other) const -> txfqs_r { return static_cast<txfqs_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txfqs_r> other) const -> ClearSet<txfqs_r> {return ClearSet<txfqs_r>(txfqs_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TFQF
 */
class tfqf_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tfqf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator txfqs_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(txfqs_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txfqs_r>() const {return ClearSet<txfqs_r>(Mask, *this);}
	constexpr auto operator|(txfqs_r other) const -> txfqs_r { return static_cast<txfqs_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txfqs_r> other) const -> ClearSet<txfqs_r> {return ClearSet<txfqs_r>(txfqs_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tffl() const -> tffl_f {return tffl_f(static_cast<uint8_t>(m_value >> tffl_f::Offset));}
	[[nodiscard]] constexpr auto tfgi() const -> tfgi_f {return tfgi_f(static_cast<uint8_t>(m_value >> tfgi_f::Offset));}
	[[nodiscard]] constexpr auto tfqpi() const -> tfqpi_f {return tfqpi_f(static_cast<uint8_t>(m_value >> tfqpi_f::Offset));}
	[[nodiscard]] constexpr auto tfqf() const -> tfqf_f {return tfqf_f((m_value & tfqf_f::Mask) != 0);}

	constexpr txfqs_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txfqs_r other) const -> txfqs_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txfqs_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 196;
	static constexpr uint32_t ResetValue = 0b11; // 3 0x3

private:
	uint32_t m_value;
};
/**
 * FDCAN Tx Buffer Request Pending Register
 */
class txbrp_r {
public:

/**
 * TRP
 */
class trp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr trp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txbrp_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txbrp_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txbrp_r>() const {return ClearSet<txbrp_r>(Mask, *this);}
	constexpr auto operator|(txbrp_r other) const -> txbrp_r { return static_cast<txbrp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txbrp_r> other) const -> ClearSet<txbrp_r> {return ClearSet<txbrp_r>(txbrp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto trp() const -> trp_f {return trp_f(static_cast<uint8_t>(m_value >> trp_f::Offset));}

	constexpr txbrp_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txbrp_r other) const -> txbrp_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txbrp_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 200;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Tx Buffer Add Request Register
 */
class txbar_r {
public:

/**
 * AR
 */
class ar_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ar_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txbar_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txbar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txbar_r>() const {return ClearSet<txbar_r>(Mask, *this);}
	constexpr auto operator|(txbar_r other) const -> txbar_r { return static_cast<txbar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txbar_r> other) const -> ClearSet<txbar_r> {return ClearSet<txbar_r>(txbar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ar() const -> ar_f {return ar_f(static_cast<uint8_t>(m_value >> ar_f::Offset));}

	constexpr txbar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txbar_r other) const -> txbar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txbar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 204;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Tx Buffer Cancellation Request Register
 */
class txbcr_r {
public:

/**
 * CR
 */
class cr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cr_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txbcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txbcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txbcr_r>() const {return ClearSet<txbcr_r>(Mask, *this);}
	constexpr auto operator|(txbcr_r other) const -> txbcr_r { return static_cast<txbcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txbcr_r> other) const -> ClearSet<txbcr_r> {return ClearSet<txbcr_r>(txbcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto cr() const -> cr_f {return cr_f(static_cast<uint8_t>(m_value >> cr_f::Offset));}

	constexpr txbcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txbcr_r other) const -> txbcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txbcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 208;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Tx Buffer Transmission Occurred Register
 */
class txbto_r {
public:

/**
 * TO
 */
class to_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr to_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txbto_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txbto_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txbto_r>() const {return ClearSet<txbto_r>(Mask, *this);}
	constexpr auto operator|(txbto_r other) const -> txbto_r { return static_cast<txbto_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txbto_r> other) const -> ClearSet<txbto_r> {return ClearSet<txbto_r>(txbto_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto to() const -> to_f {return to_f(static_cast<uint8_t>(m_value >> to_f::Offset));}

	constexpr txbto_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txbto_r other) const -> txbto_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txbto_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 212;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Tx Buffer Cancellation Finished Register
 */
class txbcf_r {
public:

/**
 * CF
 */
class cf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cf_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txbcf_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txbcf_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txbcf_r>() const {return ClearSet<txbcf_r>(Mask, *this);}
	constexpr auto operator|(txbcf_r other) const -> txbcf_r { return static_cast<txbcf_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txbcf_r> other) const -> ClearSet<txbcf_r> {return ClearSet<txbcf_r>(txbcf_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto cf() const -> cf_f {return cf_f(static_cast<uint8_t>(m_value >> cf_f::Offset));}

	constexpr txbcf_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txbcf_r other) const -> txbcf_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txbcf_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 216;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Tx Buffer Transmission Interrupt Enable Register
 */
class txbtie_r {
public:

/**
 * TIE
 */
class tie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tie_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txbtie_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txbtie_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txbtie_r>() const {return ClearSet<txbtie_r>(Mask, *this);}
	constexpr auto operator|(txbtie_r other) const -> txbtie_r { return static_cast<txbtie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txbtie_r> other) const -> ClearSet<txbtie_r> {return ClearSet<txbtie_r>(txbtie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto tie() const -> tie_f {return tie_f(static_cast<uint8_t>(m_value >> tie_f::Offset));}

	constexpr txbtie_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txbtie_r other) const -> txbtie_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txbtie_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 220;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Tx Buffer Cancellation Finished Interrupt Enable Register
 */
class txbcie_r {
public:

/**
 * CFIE
 */
class cfie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cfie_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txbcie_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txbcie_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txbcie_r>() const {return ClearSet<txbcie_r>(Mask, *this);}
	constexpr auto operator|(txbcie_r other) const -> txbcie_r { return static_cast<txbcie_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txbcie_r> other) const -> ClearSet<txbcie_r> {return ClearSet<txbcie_r>(txbcie_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto cfie() const -> cfie_f {return cfie_f(static_cast<uint8_t>(m_value >> cfie_f::Offset));}

	constexpr txbcie_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txbcie_r other) const -> txbcie_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txbcie_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 224;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Tx Event FIFO Status Register
 */
class txefs_r {
public:

/**
 * EFFL
 */
class effl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr effl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txefs_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txefs_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txefs_r>() const {return ClearSet<txefs_r>(Mask, *this);}
	constexpr auto operator|(txefs_r other) const -> txefs_r { return static_cast<txefs_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txefs_r> other) const -> ClearSet<txefs_r> {return ClearSet<txefs_r>(txefs_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * EFGI
 */
class efgi_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr efgi_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txefs_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(txefs_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txefs_r>() const {return ClearSet<txefs_r>(Mask, *this);}
	constexpr auto operator|(txefs_r other) const -> txefs_r { return static_cast<txefs_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txefs_r> other) const -> ClearSet<txefs_r> {return ClearSet<txefs_r>(txefs_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * EFPI
 */
class efpi_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr efpi_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txefs_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(txefs_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txefs_r>() const {return ClearSet<txefs_r>(Mask, *this);}
	constexpr auto operator|(txefs_r other) const -> txefs_r { return static_cast<txefs_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txefs_r> other) const -> ClearSet<txefs_r> {return ClearSet<txefs_r>(txefs_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * EFF
 */
class eff_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eff_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator txefs_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(txefs_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txefs_r>() const {return ClearSet<txefs_r>(Mask, *this);}
	constexpr auto operator|(txefs_r other) const -> txefs_r { return static_cast<txefs_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txefs_r> other) const -> ClearSet<txefs_r> {return ClearSet<txefs_r>(txefs_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEFL
 */
class tefl_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tefl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator txefs_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(txefs_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txefs_r>() const {return ClearSet<txefs_r>(Mask, *this);}
	constexpr auto operator|(txefs_r other) const -> txefs_r { return static_cast<txefs_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txefs_r> other) const -> ClearSet<txefs_r> {return ClearSet<txefs_r>(txefs_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto effl() const -> effl_f {return effl_f(static_cast<uint8_t>(m_value >> effl_f::Offset));}
	[[nodiscard]] constexpr auto efgi() const -> efgi_f {return efgi_f(static_cast<uint8_t>(m_value >> efgi_f::Offset));}
	[[nodiscard]] constexpr auto efpi() const -> efpi_f {return efpi_f(static_cast<uint8_t>(m_value >> efpi_f::Offset));}
	[[nodiscard]] constexpr auto eff() const -> eff_f {return eff_f((m_value & eff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tefl() const -> tefl_f {return tefl_f((m_value & tefl_f::Mask) != 0);}

	constexpr txefs_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txefs_r other) const -> txefs_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txefs_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 228;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN Tx Event FIFO Acknowledge Register
 */
class txefa_r {
public:

/**
 * EFAI
 */
class efai_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr efai_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator txefa_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(txefa_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<txefa_r>() const {return ClearSet<txefa_r>(Mask, *this);}
	constexpr auto operator|(txefa_r other) const -> txefa_r { return static_cast<txefa_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<txefa_r> other) const -> ClearSet<txefa_r> {return ClearSet<txefa_r>(txefa_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto efai() const -> efai_f {return efai_f(static_cast<uint8_t>(m_value >> efai_f::Offset));}

	constexpr txefa_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(txefa_r other) const -> txefa_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> txefa_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 232;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FDCAN CFG clock divider register
 */
class ckdiv_r {
public:

/**
 * input clock divider. the APB clock could be divided prior to be used by the CAN sub
 */
class pdiv_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pdiv_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ckdiv_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ckdiv_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ckdiv_r>() const {return ClearSet<ckdiv_r>(Mask, *this);}
	constexpr auto operator|(ckdiv_r other) const -> ckdiv_r { return static_cast<ckdiv_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ckdiv_r> other) const -> ClearSet<ckdiv_r> {return ClearSet<ckdiv_r>(ckdiv_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pdiv() const -> pdiv_f {return pdiv_f(static_cast<uint8_t>(m_value >> pdiv_f::Offset));}

	constexpr ckdiv_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ckdiv_r other) const -> ckdiv_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ckdiv_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 256;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,crel_r> crel;
	ReadOnlyMemory<uint32_t,endn_r> endn;
	Padding<4> _p8;
	Memory<uint32_t,dbtp_r> dbtp;
	Memory<uint32_t,test_r> test;
	Memory<uint32_t,rwd_r> rwd;
	Memory<uint32_t,cccr_r> cccr;
	Memory<uint32_t,nbtp_r> nbtp;
	Memory<uint32_t,tscc_r> tscc;
	ReadOnlyMemory<uint32_t,tscv_r> tscv;
	Memory<uint32_t,tocc_r> tocc;
	ReadOnlyMemory<uint32_t,tocv_r> tocv;
	Padding<16> _p48;
	ReadOnlyMemory<uint32_t,ecr_r> ecr;
	Memory<uint32_t,psr_r> psr;
	Memory<uint32_t,tdcr_r> tdcr;
	Padding<4> _p76;
	Memory<uint32_t,ir_r> ir;
	Memory<uint32_t,ie_r> ie;
	Memory<uint32_t,ils_r> ils;
	Memory<uint32_t,ile_r> ile;
	Padding<32> _p96;
	Memory<uint32_t,rxgfc_r> rxgfc;
	Memory<uint32_t,xidam_r> xidam;
	ReadOnlyMemory<uint32_t,hpms_r> hpms;
	Padding<4> _p140;
	ReadOnlyMemory<uint32_t,rxf0s_r> rxf0s;
	Memory<uint32_t,rxf0a_r> rxf0a;
	ReadOnlyMemory<uint32_t,rxf1s_r> rxf1s;
	Memory<uint32_t,rxf1a_r> rxf1a;
	Padding<32> _p160;
	Memory<uint32_t,txbc_r> txbc;
	ReadOnlyMemory<uint32_t,txfqs_r> txfqs;
	ReadOnlyMemory<uint32_t,txbrp_r> txbrp;
	Memory<uint32_t,txbar_r> txbar;
	Memory<uint32_t,txbcr_r> txbcr;
	ReadOnlyMemory<uint32_t,txbto_r> txbto;
	ReadOnlyMemory<uint32_t,txbcf_r> txbcf;
	Memory<uint32_t,txbtie_r> txbtie;
	Memory<uint32_t,txbcie_r> txbcie;
	ReadOnlyMemory<uint32_t,txefs_r> txefs;
	Memory<uint32_t,txefa_r> txefa;
	Padding<20> _p236;
	Memory<uint32_t,ckdiv_r> ckdiv;
};

template<> struct fdcan_p::dbtp_r::dtseg_f<2> { using type = fdcan_p::dbtp_r::dtseg2_f; };
template<> struct fdcan_p::dbtp_r::dtseg_f<1> { using type = fdcan_p::dbtp_r::dtseg1_f; };

template<> struct fdcan_p::nbtp_r::ntseg_f<2> { using type = fdcan_p::nbtp_r::ntseg2_f; };
template<> struct fdcan_p::nbtp_r::ntseg_f<1> { using type = fdcan_p::nbtp_r::ntseg1_f; };

template<> struct fdcan_p::ils_r::rxfifo_f<0> { using type = fdcan_p::ils_r::rxfifo0_f; };
template<> struct fdcan_p::ils_r::rxfifo_f<1> { using type = fdcan_p::ils_r::rxfifo1_f; };

template<> struct fdcan_p::ile_r::eint_f<0> { using type = fdcan_p::ile_r::eint0_f; };
template<> struct fdcan_p::ile_r::eint_f<1> { using type = fdcan_p::ile_r::eint1_f; };

static_assert(std::is_standard_layout_v<fdcan_p>);
static_assert(offsetof(fdcan_p, crel) == fdcan_p::crel_r::Offset);
static_assert(offsetof(fdcan_p, endn) == fdcan_p::endn_r::Offset);
static_assert(offsetof(fdcan_p, dbtp) == fdcan_p::dbtp_r::Offset);
static_assert(offsetof(fdcan_p, test) == fdcan_p::test_r::Offset);
static_assert(offsetof(fdcan_p, rwd) == fdcan_p::rwd_r::Offset);
static_assert(offsetof(fdcan_p, cccr) == fdcan_p::cccr_r::Offset);
static_assert(offsetof(fdcan_p, nbtp) == fdcan_p::nbtp_r::Offset);
static_assert(offsetof(fdcan_p, tscc) == fdcan_p::tscc_r::Offset);
static_assert(offsetof(fdcan_p, tscv) == fdcan_p::tscv_r::Offset);
static_assert(offsetof(fdcan_p, tocc) == fdcan_p::tocc_r::Offset);
static_assert(offsetof(fdcan_p, tocv) == fdcan_p::tocv_r::Offset);
static_assert(offsetof(fdcan_p, ecr) == fdcan_p::ecr_r::Offset);
static_assert(offsetof(fdcan_p, psr) == fdcan_p::psr_r::Offset);
static_assert(offsetof(fdcan_p, tdcr) == fdcan_p::tdcr_r::Offset);
static_assert(offsetof(fdcan_p, ir) == fdcan_p::ir_r::Offset);
static_assert(offsetof(fdcan_p, ie) == fdcan_p::ie_r::Offset);
static_assert(offsetof(fdcan_p, ils) == fdcan_p::ils_r::Offset);
static_assert(offsetof(fdcan_p, ile) == fdcan_p::ile_r::Offset);
static_assert(offsetof(fdcan_p, rxgfc) == fdcan_p::rxgfc_r::Offset);
static_assert(offsetof(fdcan_p, xidam) == fdcan_p::xidam_r::Offset);
static_assert(offsetof(fdcan_p, hpms) == fdcan_p::hpms_r::Offset);
static_assert(offsetof(fdcan_p, rxf0s) == fdcan_p::rxf0s_r::Offset);
static_assert(offsetof(fdcan_p, rxf0a) == fdcan_p::rxf0a_r::Offset);
static_assert(offsetof(fdcan_p, rxf1s) == fdcan_p::rxf1s_r::Offset);
static_assert(offsetof(fdcan_p, rxf1a) == fdcan_p::rxf1a_r::Offset);
static_assert(offsetof(fdcan_p, txbc) == fdcan_p::txbc_r::Offset);
static_assert(offsetof(fdcan_p, txfqs) == fdcan_p::txfqs_r::Offset);
static_assert(offsetof(fdcan_p, txbrp) == fdcan_p::txbrp_r::Offset);
static_assert(offsetof(fdcan_p, txbar) == fdcan_p::txbar_r::Offset);
static_assert(offsetof(fdcan_p, txbcr) == fdcan_p::txbcr_r::Offset);
static_assert(offsetof(fdcan_p, txbto) == fdcan_p::txbto_r::Offset);
static_assert(offsetof(fdcan_p, txbcf) == fdcan_p::txbcf_r::Offset);
static_assert(offsetof(fdcan_p, txbtie) == fdcan_p::txbtie_r::Offset);
static_assert(offsetof(fdcan_p, txbcie) == fdcan_p::txbcie_r::Offset);
static_assert(offsetof(fdcan_p, txefs) == fdcan_p::txefs_r::Offset);
static_assert(offsetof(fdcan_p, txefa) == fdcan_p::txefa_r::Offset);
static_assert(offsetof(fdcan_p, ckdiv) == fdcan_p::ckdiv_r::Offset);

inline fdcan_p& fdcan = *reinterpret_cast<fdcan_p*>(0x4000A400);
inline fdcan_p& fdcan1 = *reinterpret_cast<fdcan_p*>(0x40006400);
inline fdcan_p& fdcan2 = *reinterpret_cast<fdcan_p*>(0x40006800);
inline fdcan_p& fdcan3 = *reinterpret_cast<fdcan_p*>(0x40006C00);

} // STM32G473XX

