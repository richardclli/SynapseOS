#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * FLASH
 */
class flash_p {
public:
/**
 * Flash access control register
 */
class acr_r {
public:

/**
 * Latency
 */
class latency_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr latency_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator acr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Prefetch enable
 */
class prften_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr prften_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Instruction cache enable
 */
class icen_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr icen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data cache enable
 */
class dcen_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dcen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Instruction cache reset
 */
class icrst_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr icrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data cache reset
 */
class dcrst_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dcrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto latency() const -> latency_f {return latency_f(static_cast<uint8_t>(m_value >> latency_f::Offset));}
	[[nodiscard]] constexpr auto prften() const -> prften_f {return prften_f((m_value & prften_f::Mask) != 0);}
	[[nodiscard]] constexpr auto icen() const -> icen_f {return icen_f((m_value & icen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dcen() const -> dcen_f {return dcen_f((m_value & dcen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto icrst() const -> icrst_f {return icrst_f((m_value & icrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dcrst() const -> dcrst_f {return dcrst_f((m_value & dcrst_f::Mask) != 0);}

	constexpr acr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(acr_r other) const -> acr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> acr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * Flash key register
 */
class keyr_r {
public:

/**
 * FPEC key
 */
class key_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr key_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator keyr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(keyr_r other) const -> keyr_r { return static_cast<keyr_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto key() const -> key_f {return key_f(static_cast<uint32_t>(m_value >> key_f::Offset));}

	constexpr keyr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(keyr_r other) const -> keyr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> keyr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * Flash option key register
 */
class optkeyr_r {
public:

/**
 * Option byte key
 */
class optkey_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr optkey_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator optkeyr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(optkeyr_r other) const -> optkeyr_r { return static_cast<optkeyr_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto optkey() const -> optkey_f {return optkey_f(static_cast<uint32_t>(m_value >> optkey_f::Offset));}

	constexpr optkeyr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(optkeyr_r other) const -> optkeyr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> optkeyr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * Status register
 */
class sr_r {
public:

/**
 * End of operation
 */
class eop_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Operation error
 */
class operr_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr operr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Write protection error
 */
class wrperr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wrperr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Programming alignment error
 */
class pgaerr_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pgaerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Programming parallelism error
 */
class pgperr_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pgperr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Programming sequence error
 */
class pgserr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pgserr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Busy
 */
class bsy_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bsy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto eop() const -> eop_f {return eop_f((m_value & eop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto operr() const -> operr_f {return operr_f((m_value & operr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wrperr() const -> wrperr_f {return wrperr_f((m_value & wrperr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pgaerr() const -> pgaerr_f {return pgaerr_f((m_value & pgaerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pgperr() const -> pgperr_f {return pgperr_f((m_value & pgperr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pgserr() const -> pgserr_f {return pgserr_f((m_value & pgserr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bsy() const -> bsy_f {return bsy_f((m_value & bsy_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * Control register
 */
class cr_r {
public:

/**
 * Programming
 */
class pg_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Sector Erase
 */
class ser_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ser_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Mass Erase
 */
class mer_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mer_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Sector number
 */
class snb_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr snb_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Program size
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Start
 */
class strt_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr strt_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * End of operation interrupt enable
 */
class eopie_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eopie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Error interrupt enable
 */
class errie_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr errie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Lock
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pg() const -> pg_f {return pg_f((m_value & pg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ser() const -> ser_f {return ser_f((m_value & ser_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mer() const -> mer_f {return mer_f((m_value & mer_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snb() const -> snb_f {return snb_f(static_cast<uint8_t>(m_value >> snb_f::Offset));}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto strt() const -> strt_f {return strt_f((m_value & strt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eopie() const -> eopie_f {return eopie_f((m_value & eopie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto errie() const -> errie_f {return errie_f((m_value & errie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0b10000000000000000000000000000000;

private:
	uint32_t m_value;
};
/**
 * Flash option control register
 */
class optcr_r {
public:

/**
 * Option lock
 */
class optlock_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr optlock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(optcr_r other) const -> optcr_r { return static_cast<optcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Option start
 */
class optstrt_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr optstrt_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(optcr_r other) const -> optcr_r { return static_cast<optcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * BOR reset Level
 */
class bor_lev_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr bor_lev_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator optcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(optcr_r other) const -> optcr_r { return static_cast<optcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * WDG_SW User option bytes
 */
class wdg_sw_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wdg_sw_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(optcr_r other) const -> optcr_r { return static_cast<optcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * nRST_STOP User option bytes
 */
class nrst_stop_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nrst_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(optcr_r other) const -> optcr_r { return static_cast<optcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * nRST_STDBY User option bytes
 */
class nrst_stdby_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nrst_stdby_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(optcr_r other) const -> optcr_r { return static_cast<optcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Read protect
 */
class rdp_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rdp_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator optcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(optcr_r other) const -> optcr_r { return static_cast<optcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Not write protect
 */
class nwrp_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nwrp_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator optcr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(optcr_r other) const -> optcr_r { return static_cast<optcr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto optlock() const -> optlock_f {return optlock_f((m_value & optlock_f::Mask) != 0);}
	[[nodiscard]] constexpr auto optstrt() const -> optstrt_f {return optstrt_f((m_value & optstrt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bor_lev() const -> bor_lev_f {return bor_lev_f(static_cast<uint8_t>(m_value >> bor_lev_f::Offset));}
	[[nodiscard]] constexpr auto wdg_sw() const -> wdg_sw_f {return wdg_sw_f((m_value & wdg_sw_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nrst_stop() const -> nrst_stop_f {return nrst_stop_f((m_value & nrst_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nrst_stdby() const -> nrst_stdby_f {return nrst_stdby_f((m_value & nrst_stdby_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rdp() const -> rdp_f {return rdp_f(static_cast<uint8_t>(m_value >> rdp_f::Offset));}
	[[nodiscard]] constexpr auto nwrp() const -> nwrp_f {return nwrp_f(static_cast<uint16_t>(m_value >> nwrp_f::Offset));}

	constexpr optcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(optcr_r other) const -> optcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> optcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0b10100;

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,acr_r> acr;
	WriteOnlyMemory<uint32_t,keyr_r> keyr;
	WriteOnlyMemory<uint32_t,optkeyr_r> optkeyr;
	ReadOnlyMemory<uint32_t,sr_r> sr;
	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,optcr_r> optcr;
};

static_assert(std::is_standard_layout_v<flash_p>);
static_assert(offsetof(flash_p, acr) == flash_p::acr_r::Offset);
static_assert(offsetof(flash_p, keyr) == flash_p::keyr_r::Offset);
static_assert(offsetof(flash_p, optkeyr) == flash_p::optkeyr_r::Offset);
static_assert(offsetof(flash_p, sr) == flash_p::sr_r::Offset);
static_assert(offsetof(flash_p, cr) == flash_p::cr_r::Offset);
static_assert(offsetof(flash_p, optcr) == flash_p::optcr_r::Offset);


}; // STM32F401

flash_p& flash = *reinterpret_cast<flash_p*>(0x40023C00);
