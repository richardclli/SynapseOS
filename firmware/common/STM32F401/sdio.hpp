#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * Secure digital input/output interface
 */
class sdio_p {
public:
/**
 * power control register
 */
class power_r {
public:

/**
 * PWRCTRL
 */
class pwrctrl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pwrctrl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator power_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(power_r other) const -> power_r { return static_cast<power_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pwrctrl() const -> pwrctrl_f {return pwrctrl_f(static_cast<uint8_t>(m_value >> pwrctrl_f::Offset));}

	constexpr power_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(power_r other) const -> power_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> power_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * SDI clock control register
 */
class clkcr_r {
public:

/**
 * HW Flow Control enable
 */
class hwfc_en_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hwfc_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator clkcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(clkcr_r other) const -> clkcr_r { return static_cast<clkcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SDIO_CK dephasing selection bit
 */
class negedge_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr negedge_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator clkcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(clkcr_r other) const -> clkcr_r { return static_cast<clkcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Wide bus mode enable bit
 */
class widbus_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr widbus_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator clkcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(clkcr_r other) const -> clkcr_r { return static_cast<clkcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Clock divider bypass enable bit
 */
class bypass_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bypass_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator clkcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(clkcr_r other) const -> clkcr_r { return static_cast<clkcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Power saving configuration bit
 */
class pwrsav_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pwrsav_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator clkcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(clkcr_r other) const -> clkcr_r { return static_cast<clkcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Clock enable bit
 */
class clken_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr clken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator clkcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(clkcr_r other) const -> clkcr_r { return static_cast<clkcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Clock divide factor
 */
class clkdiv_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr clkdiv_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator clkcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(clkcr_r other) const -> clkcr_r { return static_cast<clkcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto hwfc_en() const -> hwfc_en_f {return hwfc_en_f((m_value & hwfc_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto negedge() const -> negedge_f {return negedge_f((m_value & negedge_f::Mask) != 0);}
	[[nodiscard]] constexpr auto widbus() const -> widbus_f {return widbus_f(static_cast<uint8_t>(m_value >> widbus_f::Offset));}
	[[nodiscard]] constexpr auto bypass() const -> bypass_f {return bypass_f((m_value & bypass_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pwrsav() const -> pwrsav_f {return pwrsav_f((m_value & pwrsav_f::Mask) != 0);}
	[[nodiscard]] constexpr auto clken() const -> clken_f {return clken_f((m_value & clken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto clkdiv() const -> clkdiv_f {return clkdiv_f(static_cast<uint8_t>(m_value >> clkdiv_f::Offset));}

	constexpr clkcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(clkcr_r other) const -> clkcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> clkcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * argument register
 */
class arg_r {
public:

/**
 * Command argument
 */
class cmdarg_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cmdarg_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator arg_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(arg_r other) const -> arg_r { return static_cast<arg_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto cmdarg() const -> cmdarg_f {return cmdarg_f(static_cast<uint32_t>(m_value >> cmdarg_f::Offset));}

	constexpr arg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(arg_r other) const -> arg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> arg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * command register
 */
class cmd_r {
public:

/**
 * CE-ATA command
 */
class ce_atacmd_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ce_atacmd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cmd_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cmd_r other) const -> cmd_r { return static_cast<cmd_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * not Interrupt Enable
 */
class nien_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr nien_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cmd_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cmd_r other) const -> cmd_r { return static_cast<cmd_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Enable CMD completion
 */
class encmdcompl_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr encmdcompl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cmd_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cmd_r other) const -> cmd_r { return static_cast<cmd_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SD I/O suspend command
 */
class sdiosuspend_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sdiosuspend_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cmd_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cmd_r other) const -> cmd_r { return static_cast<cmd_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command path state machine (CPSM) Enable bit
 */
class cpsmen_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cpsmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cmd_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cmd_r other) const -> cmd_r { return static_cast<cmd_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CPSM Waits for ends of data transfer (CmdPend internal signal).
 */
class waitpend_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waitpend_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cmd_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cmd_r other) const -> cmd_r { return static_cast<cmd_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CPSM waits for interrupt request
 */
class waitint_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waitint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cmd_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cmd_r other) const -> cmd_r { return static_cast<cmd_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Wait for response bits
 */
class waitresp_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr waitresp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cmd_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(cmd_r other) const -> cmd_r { return static_cast<cmd_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Command index
 */
class cmdindex_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cmdindex_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cmd_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(cmd_r other) const -> cmd_r { return static_cast<cmd_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ce_atacmd() const -> ce_atacmd_f {return ce_atacmd_f((m_value & ce_atacmd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nien() const -> nien_f {return nien_f((m_value & nien_f::Mask) != 0);}
	[[nodiscard]] constexpr auto encmdcompl() const -> encmdcompl_f {return encmdcompl_f((m_value & encmdcompl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sdiosuspend() const -> sdiosuspend_f {return sdiosuspend_f((m_value & sdiosuspend_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpsmen() const -> cpsmen_f {return cpsmen_f((m_value & cpsmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitpend() const -> waitpend_f {return waitpend_f((m_value & waitpend_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitint() const -> waitint_f {return waitint_f((m_value & waitint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitresp() const -> waitresp_f {return waitresp_f(static_cast<uint8_t>(m_value >> waitresp_f::Offset));}
	[[nodiscard]] constexpr auto cmdindex() const -> cmdindex_f {return cmdindex_f(static_cast<uint8_t>(m_value >> cmdindex_f::Offset));}

	constexpr cmd_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmd_r other) const -> cmd_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmd_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * command response register
 */
class respcmd_r {
public:

/**
 * Response command index
 */
class respcmd_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr respcmd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator respcmd_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(respcmd_r other) const -> respcmd_r { return static_cast<respcmd_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto respcmd() const -> respcmd_f {return respcmd_f(static_cast<uint8_t>(m_value >> respcmd_f::Offset));}

	constexpr respcmd_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(respcmd_r other) const -> respcmd_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> respcmd_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * response 1..4 register
 */
class resp1_r {
public:

/**
 * Card Status
 */
class cardstatus1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cardstatus1_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator resp1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(resp1_r other) const -> resp1_r { return static_cast<resp1_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto cardstatus1() const -> cardstatus1_f {return cardstatus1_f(static_cast<uint32_t>(m_value >> cardstatus1_f::Offset));}

	constexpr resp1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(resp1_r other) const -> resp1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> resp1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * response 1..4 register
 */
class resp2_r {
public:

/**
 * Card Status
 */
class cardstatus2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cardstatus2_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator resp2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(resp2_r other) const -> resp2_r { return static_cast<resp2_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto cardstatus2() const -> cardstatus2_f {return cardstatus2_f(static_cast<uint32_t>(m_value >> cardstatus2_f::Offset));}

	constexpr resp2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(resp2_r other) const -> resp2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> resp2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * response 1..4 register
 */
class resp3_r {
public:

/**
 * Card Status
 */
class cardstatus3_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cardstatus3_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator resp3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(resp3_r other) const -> resp3_r { return static_cast<resp3_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto cardstatus3() const -> cardstatus3_f {return cardstatus3_f(static_cast<uint32_t>(m_value >> cardstatus3_f::Offset));}

	constexpr resp3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(resp3_r other) const -> resp3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> resp3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * response 1..4 register
 */
class resp4_r {
public:

/**
 * Card Status
 */
class cardstatus4_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cardstatus4_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator resp4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(resp4_r other) const -> resp4_r { return static_cast<resp4_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto cardstatus4() const -> cardstatus4_f {return cardstatus4_f(static_cast<uint32_t>(m_value >> cardstatus4_f::Offset));}

	constexpr resp4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(resp4_r other) const -> resp4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> resp4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * data timer register
 */
class dtimer_r {
public:

/**
 * Data timeout period
 */
class datatime_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datatime_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dtimer_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dtimer_r other) const -> dtimer_r { return static_cast<dtimer_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto datatime() const -> datatime_f {return datatime_f(static_cast<uint32_t>(m_value >> datatime_f::Offset));}

	constexpr dtimer_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dtimer_r other) const -> dtimer_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dtimer_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * data length register
 */
class dlen_r {
public:

/**
 * Data length value
 */
class datalength_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 25;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datalength_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dlen_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dlen_r other) const -> dlen_r { return static_cast<dlen_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto datalength() const -> datalength_f {return datalength_f(static_cast<uint32_t>(m_value >> datalength_f::Offset));}

	constexpr dlen_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dlen_r other) const -> dlen_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dlen_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * data control register
 */
class dctrl_r {
public:

/**
 * SD I/O enable functions
 */
class sdioen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sdioen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dctrl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(dctrl_r other) const -> dctrl_r { return static_cast<dctrl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Read wait mode
 */
class rwmod_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rwmod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dctrl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(dctrl_r other) const -> dctrl_r { return static_cast<dctrl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Read wait stop
 */
class rwstop_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rwstop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dctrl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(dctrl_r other) const -> dctrl_r { return static_cast<dctrl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Read wait start
 */
class rwstart_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rwstart_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dctrl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(dctrl_r other) const -> dctrl_r { return static_cast<dctrl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data block size
 */
class dblocksize_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dblocksize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dctrl_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(dctrl_r other) const -> dctrl_r { return static_cast<dctrl_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * DMA enable bit
 */
class dmaen_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dctrl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(dctrl_r other) const -> dctrl_r { return static_cast<dctrl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transfer mode selection 1: Stream or SDIO multibyte data transfer.
 */
class dtmode_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtmode_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dctrl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(dctrl_r other) const -> dctrl_r { return static_cast<dctrl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transfer direction selection
 */
class dtdir_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtdir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dctrl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(dctrl_r other) const -> dctrl_r { return static_cast<dctrl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * DTEN
 */
class dten_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dctrl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(dctrl_r other) const -> dctrl_r { return static_cast<dctrl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto sdioen() const -> sdioen_f {return sdioen_f((m_value & sdioen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rwmod() const -> rwmod_f {return rwmod_f((m_value & rwmod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rwstop() const -> rwstop_f {return rwstop_f((m_value & rwstop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rwstart() const -> rwstart_f {return rwstart_f((m_value & rwstart_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dblocksize() const -> dblocksize_f {return dblocksize_f(static_cast<uint8_t>(m_value >> dblocksize_f::Offset));}
	[[nodiscard]] constexpr auto dmaen() const -> dmaen_f {return dmaen_f((m_value & dmaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtmode() const -> dtmode_f {return dtmode_f((m_value & dtmode_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtdir() const -> dtdir_f {return dtdir_f((m_value & dtdir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dten() const -> dten_f {return dten_f((m_value & dten_f::Mask) != 0);}

	constexpr dctrl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dctrl_r other) const -> dctrl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dctrl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * data counter register
 */
class dcount_r {
public:

/**
 * Data count value
 */
class datacount_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 25;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datacount_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dcount_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dcount_r other) const -> dcount_r { return static_cast<dcount_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto datacount() const -> datacount_f {return datacount_f(static_cast<uint32_t>(m_value >> datacount_f::Offset));}

	constexpr dcount_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dcount_r other) const -> dcount_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dcount_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class sta_r {
public:

/**
 * CE-ATA command completion signal received for CMD61
 */
class ceataend_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ceataend_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SDIO interrupt received
 */
class sdioit_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sdioit_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data available in receive FIFO
 */
class rxdavl_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxdavl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data available in transmit FIFO
 */
class txdavl_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txdavl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Receive FIFO empty
 */
class rxfifoe_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxfifoe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transmit FIFO empty
 */
class txfifoe_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txfifoe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Receive FIFO full
 */
class rxfifof_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxfifof_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transmit FIFO full
 */
class txfifof_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txfifof_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Receive FIFO half full: there are at least 8 words in the FIFO
 */
class rxfifohf_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxfifohf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transmit FIFO half empty: at least 8 words can be written into the FIFO
 */
class txfifohe_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr txfifohe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data receive in progress
 */
class rxact_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxact_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transmit in progress
 */
class txact_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr txact_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command transfer in progress
 */
class cmdact_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cmdact_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data block sent/received (CRC check passed)
 */
class dbckend_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbckend_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Start bit not detected on all data signals in wide bus mode
 */
class stbiterr_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr stbiterr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data end (data counter, SDIDCOUNT, is zero)
 */
class dataend_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dataend_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command sent (no response required)
 */
class cmdsent_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmdsent_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command response received (CRC check passed)
 */
class cmdrend_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmdrend_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Received FIFO overrun error
 */
class rxoverr_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxoverr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transmit FIFO underrun error
 */
class txunderr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txunderr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data timeout
 */
class dtimeout_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtimeout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command response timeout
 */
class ctimeout_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctimeout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data block sent/received (CRC check failed)
 */
class dcrcfail_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dcrcfail_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command response received (CRC check failed)
 */
class ccrcfail_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccrcfail_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sta_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sta_r other) const -> sta_r { return static_cast<sta_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ceataend() const -> ceataend_f {return ceataend_f((m_value & ceataend_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sdioit() const -> sdioit_f {return sdioit_f((m_value & sdioit_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxdavl() const -> rxdavl_f {return rxdavl_f((m_value & rxdavl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txdavl() const -> txdavl_f {return txdavl_f((m_value & txdavl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfifoe() const -> rxfifoe_f {return rxfifoe_f((m_value & rxfifoe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfifoe() const -> txfifoe_f {return txfifoe_f((m_value & txfifoe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfifof() const -> rxfifof_f {return rxfifof_f((m_value & rxfifof_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfifof() const -> txfifof_f {return txfifof_f((m_value & txfifof_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfifohf() const -> rxfifohf_f {return rxfifohf_f((m_value & rxfifohf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfifohe() const -> txfifohe_f {return txfifohe_f((m_value & txfifohe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxact() const -> rxact_f {return rxact_f((m_value & rxact_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txact() const -> txact_f {return txact_f((m_value & txact_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmdact() const -> cmdact_f {return cmdact_f((m_value & cmdact_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbckend() const -> dbckend_f {return dbckend_f((m_value & dbckend_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stbiterr() const -> stbiterr_f {return stbiterr_f((m_value & stbiterr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dataend() const -> dataend_f {return dataend_f((m_value & dataend_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmdsent() const -> cmdsent_f {return cmdsent_f((m_value & cmdsent_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmdrend() const -> cmdrend_f {return cmdrend_f((m_value & cmdrend_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxoverr() const -> rxoverr_f {return rxoverr_f((m_value & rxoverr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txunderr() const -> txunderr_f {return txunderr_f((m_value & txunderr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtimeout() const -> dtimeout_f {return dtimeout_f((m_value & dtimeout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctimeout() const -> ctimeout_f {return ctimeout_f((m_value & ctimeout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dcrcfail() const -> dcrcfail_f {return dcrcfail_f((m_value & dcrcfail_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccrcfail() const -> ccrcfail_f {return ccrcfail_f((m_value & ccrcfail_f::Mask) != 0);}

	constexpr sta_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sta_r other) const -> sta_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sta_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * interrupt clear register
 */
class icr_r {
public:

/**
 * CEATAEND flag clear bit
 */
class ceataendc_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ceataendc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SDIOIT flag clear bit
 */
class sdioitc_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sdioitc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * DBCKEND flag clear bit
 */
class dbckendc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbckendc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STBITERR flag clear bit
 */
class stbiterrc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr stbiterrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * DATAEND flag clear bit
 */
class dataendc_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dataendc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CMDSENT flag clear bit
 */
class cmdsentc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmdsentc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CMDREND flag clear bit
 */
class cmdrendc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmdrendc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * RXOVERR flag clear bit
 */
class rxoverrc_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxoverrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TXUNDERR flag clear bit
 */
class txunderrc_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txunderrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * DTIMEOUT flag clear bit
 */
class dtimeoutc_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtimeoutc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CTIMEOUT flag clear bit
 */
class ctimeoutc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctimeoutc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * DCRCFAIL flag clear bit
 */
class dcrcfailc_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dcrcfailc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CCRCFAIL flag clear bit
 */
class ccrcfailc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccrcfailc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ceataendc() const -> ceataendc_f {return ceataendc_f((m_value & ceataendc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sdioitc() const -> sdioitc_f {return sdioitc_f((m_value & sdioitc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbckendc() const -> dbckendc_f {return dbckendc_f((m_value & dbckendc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stbiterrc() const -> stbiterrc_f {return stbiterrc_f((m_value & stbiterrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dataendc() const -> dataendc_f {return dataendc_f((m_value & dataendc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmdsentc() const -> cmdsentc_f {return cmdsentc_f((m_value & cmdsentc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmdrendc() const -> cmdrendc_f {return cmdrendc_f((m_value & cmdrendc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxoverrc() const -> rxoverrc_f {return rxoverrc_f((m_value & rxoverrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txunderrc() const -> txunderrc_f {return txunderrc_f((m_value & txunderrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtimeoutc() const -> dtimeoutc_f {return dtimeoutc_f((m_value & dtimeoutc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctimeoutc() const -> ctimeoutc_f {return ctimeoutc_f((m_value & ctimeoutc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dcrcfailc() const -> dcrcfailc_f {return dcrcfailc_f((m_value & dcrcfailc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccrcfailc() const -> ccrcfailc_f {return ccrcfailc_f((m_value & ccrcfailc_f::Mask) != 0);}

	constexpr icr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icr_r other) const -> icr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * mask register
 */
class mask_r {
public:

/**
 * CE-ATA command completion signal received interrupt enable
 */
class ceataendie_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ceataendie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SDIO mode interrupt received interrupt enable
 */
class sdioitie_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sdioitie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data available in Rx FIFO interrupt enable
 */
class rxdavlie_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxdavlie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data available in Tx FIFO interrupt enable
 */
class txdavlie_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txdavlie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Rx FIFO empty interrupt enable
 */
class rxfifoeie_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxfifoeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Tx FIFO empty interrupt enable
 */
class txfifoeie_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txfifoeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Rx FIFO full interrupt enable
 */
class rxfifofie_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxfifofie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Tx FIFO full interrupt enable
 */
class txfifofie_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txfifofie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Rx FIFO half full interrupt enable
 */
class rxfifohfie_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxfifohfie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Tx FIFO half empty interrupt enable
 */
class txfifoheie_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr txfifoheie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data receive acting interrupt enable
 */
class rxactie_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxactie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transmit acting interrupt enable
 */
class txactie_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr txactie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command acting interrupt enable
 */
class cmdactie_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cmdactie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data block end interrupt enable
 */
class dbckendie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dbckendie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Start bit error interrupt enable
 */
class stbiterrie_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr stbiterrie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data end interrupt enable
 */
class dataendie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dataendie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command sent interrupt enable
 */
class cmdsentie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmdsentie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command response received interrupt enable
 */
class cmdrendie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmdrendie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Rx FIFO overrun error interrupt enable
 */
class rxoverrie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxoverrie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Tx FIFO underrun error interrupt enable
 */
class txunderrie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txunderrie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data timeout interrupt enable
 */
class dtimeoutie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtimeoutie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command timeout interrupt enable
 */
class ctimeoutie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctimeoutie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data CRC fail interrupt enable
 */
class dcrcfailie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dcrcfailie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Command CRC fail interrupt enable
 */
class ccrcfailie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccrcfailie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator mask_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(mask_r other) const -> mask_r { return static_cast<mask_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ceataendie() const -> ceataendie_f {return ceataendie_f((m_value & ceataendie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sdioitie() const -> sdioitie_f {return sdioitie_f((m_value & sdioitie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxdavlie() const -> rxdavlie_f {return rxdavlie_f((m_value & rxdavlie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txdavlie() const -> txdavlie_f {return txdavlie_f((m_value & txdavlie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfifoeie() const -> rxfifoeie_f {return rxfifoeie_f((m_value & rxfifoeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfifoeie() const -> txfifoeie_f {return txfifoeie_f((m_value & txfifoeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfifofie() const -> rxfifofie_f {return rxfifofie_f((m_value & rxfifofie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfifofie() const -> txfifofie_f {return txfifofie_f((m_value & txfifofie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfifohfie() const -> rxfifohfie_f {return rxfifohfie_f((m_value & rxfifohfie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfifoheie() const -> txfifoheie_f {return txfifoheie_f((m_value & txfifoheie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxactie() const -> rxactie_f {return rxactie_f((m_value & rxactie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txactie() const -> txactie_f {return txactie_f((m_value & txactie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmdactie() const -> cmdactie_f {return cmdactie_f((m_value & cmdactie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbckendie() const -> dbckendie_f {return dbckendie_f((m_value & dbckendie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stbiterrie() const -> stbiterrie_f {return stbiterrie_f((m_value & stbiterrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dataendie() const -> dataendie_f {return dataendie_f((m_value & dataendie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmdsentie() const -> cmdsentie_f {return cmdsentie_f((m_value & cmdsentie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmdrendie() const -> cmdrendie_f {return cmdrendie_f((m_value & cmdrendie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxoverrie() const -> rxoverrie_f {return rxoverrie_f((m_value & rxoverrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txunderrie() const -> txunderrie_f {return txunderrie_f((m_value & txunderrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtimeoutie() const -> dtimeoutie_f {return dtimeoutie_f((m_value & dtimeoutie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctimeoutie() const -> ctimeoutie_f {return ctimeoutie_f((m_value & ctimeoutie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dcrcfailie() const -> dcrcfailie_f {return dcrcfailie_f((m_value & dcrcfailie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccrcfailie() const -> ccrcfailie_f {return ccrcfailie_f((m_value & ccrcfailie_f::Mask) != 0);}

	constexpr mask_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(mask_r other) const -> mask_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> mask_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FIFO counter register
 */
class fifocnt_r {
public:

/**
 * Remaining number of words to be written to or read from the FIFO.
 */
class fifocount_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 24;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr fifocount_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fifocnt_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fifocnt_r other) const -> fifocnt_r { return static_cast<fifocnt_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto fifocount() const -> fifocount_f {return fifocount_f(static_cast<uint32_t>(m_value >> fifocount_f::Offset));}

	constexpr fifocnt_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fifocnt_r other) const -> fifocnt_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fifocnt_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * data FIFO register
 */
class fifo_r {
public:

/**
 * Receive and transmit FIFO data
 */
class fifodata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr fifodata_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fifo_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fifo_r other) const -> fifo_r { return static_cast<fifo_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto fifodata() const -> fifodata_f {return fifodata_f(static_cast<uint32_t>(m_value >> fifodata_f::Offset));}

	constexpr fifo_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fifo_r other) const -> fifo_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fifo_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,power_r> power;
	Memory<uint32_t,clkcr_r> clkcr;
	Memory<uint32_t,arg_r> arg;
	Memory<uint32_t,cmd_r> cmd;
	ReadOnlyMemory<uint32_t,respcmd_r> respcmd;
	ReadOnlyMemory<uint32_t,resp1_r> resp1;
	ReadOnlyMemory<uint32_t,resp2_r> resp2;
	ReadOnlyMemory<uint32_t,resp3_r> resp3;
	ReadOnlyMemory<uint32_t,resp4_r> resp4;
	Memory<uint32_t,dtimer_r> dtimer;
	Memory<uint32_t,dlen_r> dlen;
	Memory<uint32_t,dctrl_r> dctrl;
	ReadOnlyMemory<uint32_t,dcount_r> dcount;
	ReadOnlyMemory<uint32_t,sta_r> sta;
	Memory<uint32_t,icr_r> icr;
	Memory<uint32_t,mask_r> mask;
	Padding<8> _p64;
	ReadOnlyMemory<uint32_t,fifocnt_r> fifocnt;
	Padding<52> _p76;
	Memory<uint32_t,fifo_r> fifo;
};

static_assert(std::is_standard_layout_v<sdio_p>);
static_assert(offsetof(sdio_p, power) == sdio_p::power_r::Offset);
static_assert(offsetof(sdio_p, clkcr) == sdio_p::clkcr_r::Offset);
static_assert(offsetof(sdio_p, arg) == sdio_p::arg_r::Offset);
static_assert(offsetof(sdio_p, cmd) == sdio_p::cmd_r::Offset);
static_assert(offsetof(sdio_p, respcmd) == sdio_p::respcmd_r::Offset);
static_assert(offsetof(sdio_p, resp1) == sdio_p::resp1_r::Offset);
static_assert(offsetof(sdio_p, resp2) == sdio_p::resp2_r::Offset);
static_assert(offsetof(sdio_p, resp3) == sdio_p::resp3_r::Offset);
static_assert(offsetof(sdio_p, resp4) == sdio_p::resp4_r::Offset);
static_assert(offsetof(sdio_p, dtimer) == sdio_p::dtimer_r::Offset);
static_assert(offsetof(sdio_p, dlen) == sdio_p::dlen_r::Offset);
static_assert(offsetof(sdio_p, dctrl) == sdio_p::dctrl_r::Offset);
static_assert(offsetof(sdio_p, dcount) == sdio_p::dcount_r::Offset);
static_assert(offsetof(sdio_p, sta) == sdio_p::sta_r::Offset);
static_assert(offsetof(sdio_p, icr) == sdio_p::icr_r::Offset);
static_assert(offsetof(sdio_p, mask) == sdio_p::mask_r::Offset);
static_assert(offsetof(sdio_p, fifocnt) == sdio_p::fifocnt_r::Offset);
static_assert(offsetof(sdio_p, fifo) == sdio_p::fifo_r::Offset);

inline sdio_p& sdio = *reinterpret_cast<sdio_p*>(0x40012C00);

} // STM32F401

