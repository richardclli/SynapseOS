#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * USB on the go full speed
 */
class otg_fs_device_p {
public:
/**
 * OTG_FS device configuration register (OTG_FS_DCFG)
 */
class fs_dcfg_r {
public:

/**
 * Device speed
 */
class dspd_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dspd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_dcfg_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dcfg_r other) const -> fs_dcfg_r { return static_cast<fs_dcfg_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Non-zero-length status OUT handshake
 */
class nzlsohsk_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nzlsohsk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dcfg_r other) const -> fs_dcfg_r { return static_cast<fs_dcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Device address
 */
class dad_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dad_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_dcfg_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dcfg_r other) const -> fs_dcfg_r { return static_cast<fs_dcfg_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Periodic frame interval
 */
class pfivl_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pfivl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_dcfg_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dcfg_r other) const -> fs_dcfg_r { return static_cast<fs_dcfg_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dspd() const -> dspd_f {return dspd_f(static_cast<uint8_t>(m_value >> dspd_f::Offset));}
	[[nodiscard]] constexpr auto nzlsohsk() const -> nzlsohsk_f {return nzlsohsk_f((m_value & nzlsohsk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dad() const -> dad_f {return dad_f(static_cast<uint8_t>(m_value >> dad_f::Offset));}
	[[nodiscard]] constexpr auto pfivl() const -> pfivl_f {return pfivl_f(static_cast<uint8_t>(m_value >> pfivl_f::Offset));}

	constexpr fs_dcfg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_dcfg_r other) const -> fs_dcfg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_dcfg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b10001000000000000000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device control register (OTG_FS_DCTL)
 */
class fs_dctl_r {
public:

/**
 * Remote wakeup signaling
 */
class rwusig_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rwusig_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dctl_r other) const -> fs_dctl_r { return static_cast<fs_dctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Soft disconnect
 */
class sdis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dctl_r other) const -> fs_dctl_r { return static_cast<fs_dctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Global IN NAK status
 */
class ginsts_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ginsts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dctl_r other) const -> fs_dctl_r { return static_cast<fs_dctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Global OUT NAK status
 */
class gonsts_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gonsts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dctl_r other) const -> fs_dctl_r { return static_cast<fs_dctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Test control
 */
class tctl_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tctl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_dctl_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dctl_r other) const -> fs_dctl_r { return static_cast<fs_dctl_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Set global IN NAK
 */
class sginak_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sginak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dctl_r other) const -> fs_dctl_r { return static_cast<fs_dctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Clear global IN NAK
 */
class cginak_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cginak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dctl_r other) const -> fs_dctl_r { return static_cast<fs_dctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Set global OUT NAK
 */
class sgonak_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sgonak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dctl_r other) const -> fs_dctl_r { return static_cast<fs_dctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Clear global OUT NAK
 */
class cgonak_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cgonak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dctl_r other) const -> fs_dctl_r { return static_cast<fs_dctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Power-on programming done
 */
class poprgdne_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr poprgdne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dctl_r other) const -> fs_dctl_r { return static_cast<fs_dctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rwusig() const -> rwusig_f {return rwusig_f((m_value & rwusig_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sdis() const -> sdis_f {return sdis_f((m_value & sdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ginsts() const -> ginsts_f {return ginsts_f((m_value & ginsts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gonsts() const -> gonsts_f {return gonsts_f((m_value & gonsts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tctl() const -> tctl_f {return tctl_f(static_cast<uint8_t>(m_value >> tctl_f::Offset));}
	[[nodiscard]] constexpr auto sginak() const -> sginak_f {return sginak_f((m_value & sginak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cginak() const -> cginak_f {return cginak_f((m_value & cginak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sgonak() const -> sgonak_f {return sgonak_f((m_value & sgonak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cgonak() const -> cgonak_f {return cgonak_f((m_value & cgonak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto poprgdne() const -> poprgdne_f {return poprgdne_f((m_value & poprgdne_f::Mask) != 0);}

	constexpr fs_dctl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_dctl_r other) const -> fs_dctl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_dctl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device status register (OTG_FS_DSTS)
 */
class fs_dsts_r {
public:

/**
 * Suspend status
 */
class suspsts_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr suspsts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dsts_r other) const -> fs_dsts_r { return static_cast<fs_dsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Enumerated speed
 */
class enumspd_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr enumspd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_dsts_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dsts_r other) const -> fs_dsts_r { return static_cast<fs_dsts_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Erratic error
 */
class eerr_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_dsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_dsts_r other) const -> fs_dsts_r { return static_cast<fs_dsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame number of the received SOF
 */
class fnsof_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 14;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr fnsof_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_dsts_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dsts_r other) const -> fs_dsts_r { return static_cast<fs_dsts_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto suspsts() const -> suspsts_f {return suspsts_f((m_value & suspsts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto enumspd() const -> enumspd_f {return enumspd_f(static_cast<uint8_t>(m_value >> enumspd_f::Offset));}
	[[nodiscard]] constexpr auto eerr() const -> eerr_f {return eerr_f((m_value & eerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fnsof() const -> fnsof_f {return fnsof_f(static_cast<uint16_t>(m_value >> fnsof_f::Offset));}

	constexpr fs_dsts_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_dsts_r other) const -> fs_dsts_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_dsts_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b10000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
 */
class fs_diepmsk_r {
public:

/**
 * Transfer completed interrupt mask
 */
class xfrcm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrcm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepmsk_r other) const -> fs_diepmsk_r { return static_cast<fs_diepmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint disabled interrupt mask
 */
class epdm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr epdm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepmsk_r other) const -> fs_diepmsk_r { return static_cast<fs_diepmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Timeout condition mask (Non-isochronous endpoints)
 */
class tom_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tom_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepmsk_r other) const -> fs_diepmsk_r { return static_cast<fs_diepmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * IN token received when TxFIFO empty mask
 */
class ittxfemsk_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ittxfemsk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepmsk_r other) const -> fs_diepmsk_r { return static_cast<fs_diepmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * IN token received with EP mismatch mask
 */
class inepnmm_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr inepnmm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepmsk_r other) const -> fs_diepmsk_r { return static_cast<fs_diepmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * IN endpoint NAK effective mask
 */
class inepnem_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr inepnem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepmsk_r other) const -> fs_diepmsk_r { return static_cast<fs_diepmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrcm() const -> xfrcm_f {return xfrcm_f((m_value & xfrcm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdm() const -> epdm_f {return epdm_f((m_value & epdm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tom() const -> tom_f {return tom_f((m_value & tom_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ittxfemsk() const -> ittxfemsk_f {return ittxfemsk_f((m_value & ittxfemsk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inepnmm() const -> inepnmm_f {return inepnmm_f((m_value & inepnmm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inepnem() const -> inepnem_f {return inepnem_f((m_value & inepnem_f::Mask) != 0);}

	constexpr fs_diepmsk_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_diepmsk_r other) const -> fs_diepmsk_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_diepmsk_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
 */
class fs_doepmsk_r {
public:

/**
 * Transfer completed interrupt mask
 */
class xfrcm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrcm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_doepmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_doepmsk_r other) const -> fs_doepmsk_r { return static_cast<fs_doepmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint disabled interrupt mask
 */
class epdm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr epdm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_doepmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_doepmsk_r other) const -> fs_doepmsk_r { return static_cast<fs_doepmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SETUP phase done mask
 */
class stupm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stupm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_doepmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_doepmsk_r other) const -> fs_doepmsk_r { return static_cast<fs_doepmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * OUT token received when endpoint disabled mask
 */
class otepdm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr otepdm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_doepmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_doepmsk_r other) const -> fs_doepmsk_r { return static_cast<fs_doepmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrcm() const -> xfrcm_f {return xfrcm_f((m_value & xfrcm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdm() const -> epdm_f {return epdm_f((m_value & epdm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stupm() const -> stupm_f {return stupm_f((m_value & stupm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto otepdm() const -> otepdm_f {return otepdm_f((m_value & otepdm_f::Mask) != 0);}

	constexpr fs_doepmsk_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_doepmsk_r other) const -> fs_doepmsk_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_doepmsk_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
 */
class fs_daint_r {
public:

/**
 * IN endpoint interrupt bits
 */
class iepint_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr iepint_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_daint_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_daint_r other) const -> fs_daint_r { return static_cast<fs_daint_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * OUT endpoint interrupt bits
 */
class oepint_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr oepint_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_daint_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_daint_r other) const -> fs_daint_r { return static_cast<fs_daint_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto iepint() const -> iepint_f {return iepint_f(static_cast<uint16_t>(m_value >> iepint_f::Offset));}
	[[nodiscard]] constexpr auto oepint() const -> oepint_f {return oepint_f(static_cast<uint16_t>(m_value >> oepint_f::Offset));}

	constexpr fs_daint_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_daint_r other) const -> fs_daint_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_daint_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
 */
class fs_daintmsk_r {
public:

/**
 * IN EP interrupt mask bits
 */
class iepm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr iepm_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_daintmsk_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_daintmsk_r other) const -> fs_daintmsk_r { return static_cast<fs_daintmsk_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * OUT endpoint interrupt bits
 */
class oepint_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr oepint_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_daintmsk_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_daintmsk_r other) const -> fs_daintmsk_r { return static_cast<fs_daintmsk_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto iepm() const -> iepm_f {return iepm_f(static_cast<uint16_t>(m_value >> iepm_f::Offset));}
	[[nodiscard]] constexpr auto oepint() const -> oepint_f {return oepint_f(static_cast<uint16_t>(m_value >> oepint_f::Offset));}

	constexpr fs_daintmsk_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_daintmsk_r other) const -> fs_daintmsk_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_daintmsk_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device VBUS discharge time register
 */
class dvbusdis_r {
public:

/**
 * Device VBUS discharge time
 */
class vbusdt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr vbusdt_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dvbusdis_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(dvbusdis_r other) const -> dvbusdis_r { return static_cast<dvbusdis_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto vbusdt() const -> vbusdt_f {return vbusdt_f(static_cast<uint16_t>(m_value >> vbusdt_f::Offset));}

	constexpr dvbusdis_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dvbusdis_r other) const -> dvbusdis_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dvbusdis_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0b1011111010111;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device VBUS pulsing time register
 */
class dvbuspulse_r {
public:

/**
 * Device VBUS pulsing time
 */
class dvbusp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dvbusp_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dvbuspulse_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(dvbuspulse_r other) const -> dvbuspulse_r { return static_cast<dvbuspulse_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dvbusp() const -> dvbusp_f {return dvbusp_f(static_cast<uint16_t>(m_value >> dvbusp_f::Offset));}

	constexpr dvbuspulse_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dvbuspulse_r other) const -> dvbuspulse_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dvbuspulse_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0b10110111000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device IN endpoint FIFO empty interrupt mask register
 */
class diepempmsk_r {
public:

/**
 * IN EP Tx FIFO empty interrupt mask bits
 */
class ineptxfem_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ineptxfem_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator diepempmsk_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(diepempmsk_r other) const -> diepempmsk_r { return static_cast<diepempmsk_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ineptxfem() const -> ineptxfem_f {return ineptxfem_f(static_cast<uint16_t>(m_value >> ineptxfem_f::Offset));}

	constexpr diepempmsk_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(diepempmsk_r other) const -> diepempmsk_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> diepempmsk_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
 */
class fs_diepctl0_r {
public:

/**
 * Maximum packet size
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mpsiz_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_diepctl0_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(fs_diepctl0_r other) const -> fs_diepctl0_r { return static_cast<fs_diepctl0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * USB active endpoint
 */
class usbaep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbaep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepctl0_r other) const -> fs_diepctl0_r { return static_cast<fs_diepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK status
 */
class naksts_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr naksts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepctl0_r other) const -> fs_diepctl0_r { return static_cast<fs_diepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint type
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_diepctl0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_diepctl0_r other) const -> fs_diepctl0_r { return static_cast<fs_diepctl0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * STALL handshake
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepctl0_r other) const -> fs_diepctl0_r { return static_cast<fs_diepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TxFIFO number
 */
class txfnum_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr txfnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_diepctl0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_diepctl0_r other) const -> fs_diepctl0_r { return static_cast<fs_diepctl0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Clear NAK
 */
class cnak_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cnak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepctl0_r other) const -> fs_diepctl0_r { return static_cast<fs_diepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Set NAK
 */
class snak_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepctl0_r other) const -> fs_diepctl0_r { return static_cast<fs_diepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint disable
 */
class epdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepctl0_r other) const -> fs_diepctl0_r { return static_cast<fs_diepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint enable
 */
class epena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_diepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_diepctl0_r other) const -> fs_diepctl0_r { return static_cast<fs_diepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint8_t>(m_value >> mpsiz_f::Offset));}
	[[nodiscard]] constexpr auto usbaep() const -> usbaep_f {return usbaep_f((m_value & usbaep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto naksts() const -> naksts_f {return naksts_f((m_value & naksts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfnum() const -> txfnum_f {return txfnum_f(static_cast<uint8_t>(m_value >> txfnum_f::Offset));}
	[[nodiscard]] constexpr auto cnak() const -> cnak_f {return cnak_f((m_value & cnak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snak() const -> snak_f {return snak_f((m_value & snak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdis() const -> epdis_f {return epdis_f((m_value & epdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epena() const -> epena_f {return epena_f((m_value & epena_f::Mask) != 0);}

	constexpr fs_diepctl0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_diepctl0_r other) const -> fs_diepctl0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_diepctl0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 256;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG device endpoint-1 control register
 */
class diepctl1_r {
public:

/**
 * EPENA
 */
class epena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDIS
 */
class epdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SODDFRM/SD1PID
 */
class soddfrm_sd1pid_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr soddfrm_sd1pid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SD0PID/SEVNFRM
 */
class sd0pid_sevnfrm_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sd0pid_sevnfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNAK
 */
class snak_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CNAK
 */
class cnak_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cnak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TXFNUM
 */
class txfnum_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr txfnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator diepctl1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Stall
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPTYP
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator diepctl1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * NAKSTS
 */
class naksts_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr naksts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EONUM/DPID
 */
class eonum_dpid_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eonum_dpid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USBAEP
 */
class usbaep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbaep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * MPSIZ
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator diepctl1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(diepctl1_r other) const -> diepctl1_r { return static_cast<diepctl1_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto epena() const -> epena_f {return epena_f((m_value & epena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdis() const -> epdis_f {return epdis_f((m_value & epdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto soddfrm_sd1pid() const -> soddfrm_sd1pid_f {return soddfrm_sd1pid_f((m_value & soddfrm_sd1pid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sd0pid_sevnfrm() const -> sd0pid_sevnfrm_f {return sd0pid_sevnfrm_f((m_value & sd0pid_sevnfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snak() const -> snak_f {return snak_f((m_value & snak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnak() const -> cnak_f {return cnak_f((m_value & cnak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfnum() const -> txfnum_f {return txfnum_f(static_cast<uint8_t>(m_value >> txfnum_f::Offset));}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto naksts() const -> naksts_f {return naksts_f((m_value & naksts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eonum_dpid() const -> eonum_dpid_f {return eonum_dpid_f((m_value & eonum_dpid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbaep() const -> usbaep_f {return usbaep_f((m_value & usbaep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}

	constexpr diepctl1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(diepctl1_r other) const -> diepctl1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> diepctl1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 288;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG device endpoint-2 control register
 */
class diepctl2_r {
public:

/**
 * EPENA
 */
class epena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDIS
 */
class epdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SODDFRM
 */
class soddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr soddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SD0PID/SEVNFRM
 */
class sd0pid_sevnfrm_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sd0pid_sevnfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNAK
 */
class snak_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CNAK
 */
class cnak_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cnak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TXFNUM
 */
class txfnum_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr txfnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator diepctl2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Stall
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPTYP
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator diepctl2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * NAKSTS
 */
class naksts_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr naksts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EONUM/DPID
 */
class eonum_dpid_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eonum_dpid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USBAEP
 */
class usbaep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbaep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * MPSIZ
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator diepctl2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(diepctl2_r other) const -> diepctl2_r { return static_cast<diepctl2_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto epena() const -> epena_f {return epena_f((m_value & epena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdis() const -> epdis_f {return epdis_f((m_value & epdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto soddfrm() const -> soddfrm_f {return soddfrm_f((m_value & soddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sd0pid_sevnfrm() const -> sd0pid_sevnfrm_f {return sd0pid_sevnfrm_f((m_value & sd0pid_sevnfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snak() const -> snak_f {return snak_f((m_value & snak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnak() const -> cnak_f {return cnak_f((m_value & cnak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfnum() const -> txfnum_f {return txfnum_f(static_cast<uint8_t>(m_value >> txfnum_f::Offset));}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto naksts() const -> naksts_f {return naksts_f((m_value & naksts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eonum_dpid() const -> eonum_dpid_f {return eonum_dpid_f((m_value & eonum_dpid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbaep() const -> usbaep_f {return usbaep_f((m_value & usbaep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}

	constexpr diepctl2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(diepctl2_r other) const -> diepctl2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> diepctl2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 320;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG device endpoint-3 control register
 */
class diepctl3_r {
public:

/**
 * EPENA
 */
class epena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDIS
 */
class epdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SODDFRM
 */
class soddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr soddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SD0PID/SEVNFRM
 */
class sd0pid_sevnfrm_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sd0pid_sevnfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNAK
 */
class snak_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CNAK
 */
class cnak_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cnak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TXFNUM
 */
class txfnum_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr txfnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator diepctl3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Stall
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPTYP
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator diepctl3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * NAKSTS
 */
class naksts_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr naksts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EONUM/DPID
 */
class eonum_dpid_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eonum_dpid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USBAEP
 */
class usbaep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbaep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * MPSIZ
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator diepctl3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(diepctl3_r other) const -> diepctl3_r { return static_cast<diepctl3_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto epena() const -> epena_f {return epena_f((m_value & epena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdis() const -> epdis_f {return epdis_f((m_value & epdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto soddfrm() const -> soddfrm_f {return soddfrm_f((m_value & soddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sd0pid_sevnfrm() const -> sd0pid_sevnfrm_f {return sd0pid_sevnfrm_f((m_value & sd0pid_sevnfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snak() const -> snak_f {return snak_f((m_value & snak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnak() const -> cnak_f {return cnak_f((m_value & cnak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfnum() const -> txfnum_f {return txfnum_f(static_cast<uint8_t>(m_value >> txfnum_f::Offset));}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto naksts() const -> naksts_f {return naksts_f((m_value & naksts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eonum_dpid() const -> eonum_dpid_f {return eonum_dpid_f((m_value & eonum_dpid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbaep() const -> usbaep_f {return usbaep_f((m_value & usbaep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}

	constexpr diepctl3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(diepctl3_r other) const -> diepctl3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> diepctl3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 352;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device endpoint-0 control register
 */
class doepctl0_r {
public:

/**
 * EPENA
 */
class epena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl0_r other) const -> doepctl0_r { return static_cast<doepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDIS
 */
class epdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl0_r other) const -> doepctl0_r { return static_cast<doepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNAK
 */
class snak_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl0_r other) const -> doepctl0_r { return static_cast<doepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CNAK
 */
class cnak_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cnak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl0_r other) const -> doepctl0_r { return static_cast<doepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stall
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl0_r other) const -> doepctl0_r { return static_cast<doepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNPM
 */
class snpm_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snpm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl0_r other) const -> doepctl0_r { return static_cast<doepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPTYP
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator doepctl0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doepctl0_r other) const -> doepctl0_r { return static_cast<doepctl0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * NAKSTS
 */
class naksts_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr naksts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl0_r other) const -> doepctl0_r { return static_cast<doepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USBAEP
 */
class usbaep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbaep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl0_r other) const -> doepctl0_r { return static_cast<doepctl0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * MPSIZ
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mpsiz_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator doepctl0_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(doepctl0_r other) const -> doepctl0_r { return static_cast<doepctl0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto epena() const -> epena_f {return epena_f((m_value & epena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdis() const -> epdis_f {return epdis_f((m_value & epdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snak() const -> snak_f {return snak_f((m_value & snak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnak() const -> cnak_f {return cnak_f((m_value & cnak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snpm() const -> snpm_f {return snpm_f((m_value & snpm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto naksts() const -> naksts_f {return naksts_f((m_value & naksts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbaep() const -> usbaep_f {return usbaep_f((m_value & usbaep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint8_t>(m_value >> mpsiz_f::Offset));}

	constexpr doepctl0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doepctl0_r other) const -> doepctl0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doepctl0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 768;
	static constexpr uint32_t ResetValue = 0b1000000000000000;

private:
	uint32_t m_value;
};
/**
 * device endpoint-1 control register
 */
class doepctl1_r {
public:

/**
 * EPENA
 */
class epena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDIS
 */
class epdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SODDFRM
 */
class soddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr soddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SD0PID/SEVNFRM
 */
class sd0pid_sevnfrm_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sd0pid_sevnfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNAK
 */
class snak_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CNAK
 */
class cnak_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cnak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stall
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNPM
 */
class snpm_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snpm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPTYP
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator doepctl1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * NAKSTS
 */
class naksts_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr naksts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EONUM/DPID
 */
class eonum_dpid_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eonum_dpid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USBAEP
 */
class usbaep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbaep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * MPSIZ
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator doepctl1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(doepctl1_r other) const -> doepctl1_r { return static_cast<doepctl1_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto epena() const -> epena_f {return epena_f((m_value & epena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdis() const -> epdis_f {return epdis_f((m_value & epdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto soddfrm() const -> soddfrm_f {return soddfrm_f((m_value & soddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sd0pid_sevnfrm() const -> sd0pid_sevnfrm_f {return sd0pid_sevnfrm_f((m_value & sd0pid_sevnfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snak() const -> snak_f {return snak_f((m_value & snak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnak() const -> cnak_f {return cnak_f((m_value & cnak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snpm() const -> snpm_f {return snpm_f((m_value & snpm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto naksts() const -> naksts_f {return naksts_f((m_value & naksts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eonum_dpid() const -> eonum_dpid_f {return eonum_dpid_f((m_value & eonum_dpid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbaep() const -> usbaep_f {return usbaep_f((m_value & usbaep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}

	constexpr doepctl1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doepctl1_r other) const -> doepctl1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doepctl1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 800;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device endpoint-2 control register
 */
class doepctl2_r {
public:

/**
 * EPENA
 */
class epena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDIS
 */
class epdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SODDFRM
 */
class soddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr soddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SD0PID/SEVNFRM
 */
class sd0pid_sevnfrm_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sd0pid_sevnfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNAK
 */
class snak_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CNAK
 */
class cnak_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cnak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stall
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNPM
 */
class snpm_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snpm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPTYP
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator doepctl2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * NAKSTS
 */
class naksts_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr naksts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EONUM/DPID
 */
class eonum_dpid_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eonum_dpid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USBAEP
 */
class usbaep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbaep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * MPSIZ
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator doepctl2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(doepctl2_r other) const -> doepctl2_r { return static_cast<doepctl2_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto epena() const -> epena_f {return epena_f((m_value & epena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdis() const -> epdis_f {return epdis_f((m_value & epdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto soddfrm() const -> soddfrm_f {return soddfrm_f((m_value & soddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sd0pid_sevnfrm() const -> sd0pid_sevnfrm_f {return sd0pid_sevnfrm_f((m_value & sd0pid_sevnfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snak() const -> snak_f {return snak_f((m_value & snak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnak() const -> cnak_f {return cnak_f((m_value & cnak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snpm() const -> snpm_f {return snpm_f((m_value & snpm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto naksts() const -> naksts_f {return naksts_f((m_value & naksts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eonum_dpid() const -> eonum_dpid_f {return eonum_dpid_f((m_value & eonum_dpid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbaep() const -> usbaep_f {return usbaep_f((m_value & usbaep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}

	constexpr doepctl2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doepctl2_r other) const -> doepctl2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doepctl2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 832;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device endpoint-3 control register
 */
class doepctl3_r {
public:

/**
 * EPENA
 */
class epena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDIS
 */
class epdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SODDFRM
 */
class soddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr soddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SD0PID/SEVNFRM
 */
class sd0pid_sevnfrm_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sd0pid_sevnfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNAK
 */
class snak_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * CNAK
 */
class cnak_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cnak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stall
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SNPM
 */
class snpm_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr snpm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPTYP
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator doepctl3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * NAKSTS
 */
class naksts_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr naksts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EONUM/DPID
 */
class eonum_dpid_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eonum_dpid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USBAEP
 */
class usbaep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbaep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepctl3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * MPSIZ
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator doepctl3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(doepctl3_r other) const -> doepctl3_r { return static_cast<doepctl3_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto epena() const -> epena_f {return epena_f((m_value & epena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdis() const -> epdis_f {return epdis_f((m_value & epdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto soddfrm() const -> soddfrm_f {return soddfrm_f((m_value & soddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sd0pid_sevnfrm() const -> sd0pid_sevnfrm_f {return sd0pid_sevnfrm_f((m_value & sd0pid_sevnfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snak() const -> snak_f {return snak_f((m_value & snak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnak() const -> cnak_f {return cnak_f((m_value & cnak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto snpm() const -> snpm_f {return snpm_f((m_value & snpm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto naksts() const -> naksts_f {return naksts_f((m_value & naksts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eonum_dpid() const -> eonum_dpid_f {return eonum_dpid_f((m_value & eonum_dpid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbaep() const -> usbaep_f {return usbaep_f((m_value & usbaep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}

	constexpr doepctl3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doepctl3_r other) const -> doepctl3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doepctl3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 864;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device endpoint-x interrupt register
 */
class diepint0_r {
public:

/**
 * TXFE
 */
class txfe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint0_r other) const -> diepint0_r { return static_cast<diepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * INEPNE
 */
class inepne_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr inepne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint0_r other) const -> diepint0_r { return static_cast<diepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ITTXFE
 */
class ittxfe_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ittxfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint0_r other) const -> diepint0_r { return static_cast<diepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TOC
 */
class toc_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr toc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint0_r other) const -> diepint0_r { return static_cast<diepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDISD
 */
class epdisd_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr epdisd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint0_r other) const -> diepint0_r { return static_cast<diepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * XFRC
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint0_r other) const -> diepint0_r { return static_cast<diepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txfe() const -> txfe_f {return txfe_f((m_value & txfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inepne() const -> inepne_f {return inepne_f((m_value & inepne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ittxfe() const -> ittxfe_f {return ittxfe_f((m_value & ittxfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto toc() const -> toc_f {return toc_f((m_value & toc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdisd() const -> epdisd_f {return epdisd_f((m_value & epdisd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}

	constexpr diepint0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(diepint0_r other) const -> diepint0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> diepint0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 264;
	static constexpr uint32_t ResetValue = 0b10000000;

private:
	uint32_t m_value;
};
/**
 * device endpoint-1 interrupt register
 */
class diepint1_r {
public:

/**
 * TXFE
 */
class txfe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint1_r other) const -> diepint1_r { return static_cast<diepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * INEPNE
 */
class inepne_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr inepne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint1_r other) const -> diepint1_r { return static_cast<diepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ITTXFE
 */
class ittxfe_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ittxfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint1_r other) const -> diepint1_r { return static_cast<diepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TOC
 */
class toc_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr toc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint1_r other) const -> diepint1_r { return static_cast<diepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDISD
 */
class epdisd_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr epdisd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint1_r other) const -> diepint1_r { return static_cast<diepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * XFRC
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint1_r other) const -> diepint1_r { return static_cast<diepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txfe() const -> txfe_f {return txfe_f((m_value & txfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inepne() const -> inepne_f {return inepne_f((m_value & inepne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ittxfe() const -> ittxfe_f {return ittxfe_f((m_value & ittxfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto toc() const -> toc_f {return toc_f((m_value & toc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdisd() const -> epdisd_f {return epdisd_f((m_value & epdisd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}

	constexpr diepint1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(diepint1_r other) const -> diepint1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> diepint1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 296;
	static constexpr uint32_t ResetValue = 0b10000000;

private:
	uint32_t m_value;
};
/**
 * device endpoint-2 interrupt register
 */
class diepint2_r {
public:

/**
 * TXFE
 */
class txfe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint2_r other) const -> diepint2_r { return static_cast<diepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * INEPNE
 */
class inepne_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr inepne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint2_r other) const -> diepint2_r { return static_cast<diepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ITTXFE
 */
class ittxfe_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ittxfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint2_r other) const -> diepint2_r { return static_cast<diepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TOC
 */
class toc_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr toc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint2_r other) const -> diepint2_r { return static_cast<diepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDISD
 */
class epdisd_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr epdisd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint2_r other) const -> diepint2_r { return static_cast<diepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * XFRC
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint2_r other) const -> diepint2_r { return static_cast<diepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txfe() const -> txfe_f {return txfe_f((m_value & txfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inepne() const -> inepne_f {return inepne_f((m_value & inepne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ittxfe() const -> ittxfe_f {return ittxfe_f((m_value & ittxfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto toc() const -> toc_f {return toc_f((m_value & toc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdisd() const -> epdisd_f {return epdisd_f((m_value & epdisd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}

	constexpr diepint2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(diepint2_r other) const -> diepint2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> diepint2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 328;
	static constexpr uint32_t ResetValue = 0b10000000;

private:
	uint32_t m_value;
};
/**
 * device endpoint-3 interrupt register
 */
class diepint3_r {
public:

/**
 * TXFE
 */
class txfe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint3_r other) const -> diepint3_r { return static_cast<diepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * INEPNE
 */
class inepne_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr inepne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint3_r other) const -> diepint3_r { return static_cast<diepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ITTXFE
 */
class ittxfe_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ittxfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint3_r other) const -> diepint3_r { return static_cast<diepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TOC
 */
class toc_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr toc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint3_r other) const -> diepint3_r { return static_cast<diepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDISD
 */
class epdisd_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr epdisd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint3_r other) const -> diepint3_r { return static_cast<diepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * XFRC
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator diepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(diepint3_r other) const -> diepint3_r { return static_cast<diepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txfe() const -> txfe_f {return txfe_f((m_value & txfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inepne() const -> inepne_f {return inepne_f((m_value & inepne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ittxfe() const -> ittxfe_f {return ittxfe_f((m_value & ittxfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto toc() const -> toc_f {return toc_f((m_value & toc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdisd() const -> epdisd_f {return epdisd_f((m_value & epdisd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}

	constexpr diepint3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(diepint3_r other) const -> diepint3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> diepint3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 360;
	static constexpr uint32_t ResetValue = 0b10000000;

private:
	uint32_t m_value;
};
/**
 * device endpoint-0 interrupt register
 */
class doepint0_r {
public:

/**
 * B2BSTUP
 */
class b2bstup_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr b2bstup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint0_r other) const -> doepint0_r { return static_cast<doepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * OTEPDIS
 */
class otepdis_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr otepdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint0_r other) const -> doepint0_r { return static_cast<doepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STUP
 */
class stup_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint0_r other) const -> doepint0_r { return static_cast<doepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDISD
 */
class epdisd_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr epdisd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint0_r other) const -> doepint0_r { return static_cast<doepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * XFRC
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint0_r other) const -> doepint0_r { return static_cast<doepint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto b2bstup() const -> b2bstup_f {return b2bstup_f((m_value & b2bstup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto otepdis() const -> otepdis_f {return otepdis_f((m_value & otepdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stup() const -> stup_f {return stup_f((m_value & stup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdisd() const -> epdisd_f {return epdisd_f((m_value & epdisd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}

	constexpr doepint0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doepint0_r other) const -> doepint0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doepint0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 776;
	static constexpr uint32_t ResetValue = 0b10000000;

private:
	uint32_t m_value;
};
/**
 * device endpoint-1 interrupt register
 */
class doepint1_r {
public:

/**
 * B2BSTUP
 */
class b2bstup_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr b2bstup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint1_r other) const -> doepint1_r { return static_cast<doepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * OTEPDIS
 */
class otepdis_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr otepdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint1_r other) const -> doepint1_r { return static_cast<doepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STUP
 */
class stup_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint1_r other) const -> doepint1_r { return static_cast<doepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDISD
 */
class epdisd_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr epdisd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint1_r other) const -> doepint1_r { return static_cast<doepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * XFRC
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint1_r other) const -> doepint1_r { return static_cast<doepint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto b2bstup() const -> b2bstup_f {return b2bstup_f((m_value & b2bstup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto otepdis() const -> otepdis_f {return otepdis_f((m_value & otepdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stup() const -> stup_f {return stup_f((m_value & stup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdisd() const -> epdisd_f {return epdisd_f((m_value & epdisd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}

	constexpr doepint1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doepint1_r other) const -> doepint1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doepint1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 808;
	static constexpr uint32_t ResetValue = 0b10000000;

private:
	uint32_t m_value;
};
/**
 * device endpoint-2 interrupt register
 */
class doepint2_r {
public:

/**
 * B2BSTUP
 */
class b2bstup_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr b2bstup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint2_r other) const -> doepint2_r { return static_cast<doepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * OTEPDIS
 */
class otepdis_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr otepdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint2_r other) const -> doepint2_r { return static_cast<doepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STUP
 */
class stup_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint2_r other) const -> doepint2_r { return static_cast<doepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDISD
 */
class epdisd_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr epdisd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint2_r other) const -> doepint2_r { return static_cast<doepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * XFRC
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint2_r other) const -> doepint2_r { return static_cast<doepint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto b2bstup() const -> b2bstup_f {return b2bstup_f((m_value & b2bstup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto otepdis() const -> otepdis_f {return otepdis_f((m_value & otepdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stup() const -> stup_f {return stup_f((m_value & stup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdisd() const -> epdisd_f {return epdisd_f((m_value & epdisd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}

	constexpr doepint2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doepint2_r other) const -> doepint2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doepint2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 840;
	static constexpr uint32_t ResetValue = 0b10000000;

private:
	uint32_t m_value;
};
/**
 * device endpoint-3 interrupt register
 */
class doepint3_r {
public:

/**
 * B2BSTUP
 */
class b2bstup_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr b2bstup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint3_r other) const -> doepint3_r { return static_cast<doepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * OTEPDIS
 */
class otepdis_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr otepdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint3_r other) const -> doepint3_r { return static_cast<doepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STUP
 */
class stup_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint3_r other) const -> doepint3_r { return static_cast<doepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * EPDISD
 */
class epdisd_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr epdisd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint3_r other) const -> doepint3_r { return static_cast<doepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * XFRC
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doepint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doepint3_r other) const -> doepint3_r { return static_cast<doepint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto b2bstup() const -> b2bstup_f {return b2bstup_f((m_value & b2bstup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto otepdis() const -> otepdis_f {return otepdis_f((m_value & otepdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stup() const -> stup_f {return stup_f((m_value & stup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epdisd() const -> epdisd_f {return epdisd_f((m_value & epdisd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}

	constexpr doepint3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doepint3_r other) const -> doepint3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doepint3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 872;
	static constexpr uint32_t ResetValue = 0b10000000;

private:
	uint32_t m_value;
};
/**
 * device endpoint-0 transfer size register
 */
class dieptsiz0_r {
public:

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dieptsiz0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz0_r other) const -> dieptsiz0_r { return static_cast<dieptsiz0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr xfrsiz_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dieptsiz0_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz0_r other) const -> dieptsiz0_r { return static_cast<dieptsiz0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint8_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint8_t>(m_value >> xfrsiz_f::Offset));}

	constexpr dieptsiz0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dieptsiz0_r other) const -> dieptsiz0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dieptsiz0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 272;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device OUT endpoint-0 transfer size register
 */
class doeptsiz0_r {
public:

/**
 * SETUP packet count
 */
class stupcnt_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr stupcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator doeptsiz0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz0_r other) const -> doeptsiz0_r { return static_cast<doeptsiz0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pktcnt_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator doeptsiz0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(doeptsiz0_r other) const -> doeptsiz0_r { return static_cast<doeptsiz0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr xfrsiz_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator doeptsiz0_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz0_r other) const -> doeptsiz0_r { return static_cast<doeptsiz0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto stupcnt() const -> stupcnt_f {return stupcnt_f(static_cast<uint8_t>(m_value >> stupcnt_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f((m_value & pktcnt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint8_t>(m_value >> xfrsiz_f::Offset));}

	constexpr doeptsiz0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doeptsiz0_r other) const -> doeptsiz0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doeptsiz0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 784;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device endpoint-1 transfer size register
 */
class dieptsiz1_r {
public:

/**
 * Multi count
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dieptsiz1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz1_r other) const -> dieptsiz1_r { return static_cast<dieptsiz1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dieptsiz1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz1_r other) const -> dieptsiz1_r { return static_cast<dieptsiz1_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dieptsiz1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz1_r other) const -> dieptsiz1_r { return static_cast<dieptsiz1_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}

	constexpr dieptsiz1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dieptsiz1_r other) const -> dieptsiz1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dieptsiz1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 304;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device endpoint-2 transfer size register
 */
class dieptsiz2_r {
public:

/**
 * Multi count
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dieptsiz2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz2_r other) const -> dieptsiz2_r { return static_cast<dieptsiz2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dieptsiz2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz2_r other) const -> dieptsiz2_r { return static_cast<dieptsiz2_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dieptsiz2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz2_r other) const -> dieptsiz2_r { return static_cast<dieptsiz2_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}

	constexpr dieptsiz2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dieptsiz2_r other) const -> dieptsiz2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dieptsiz2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 336;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device endpoint-3 transfer size register
 */
class dieptsiz3_r {
public:

/**
 * Multi count
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dieptsiz3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz3_r other) const -> dieptsiz3_r { return static_cast<dieptsiz3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dieptsiz3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz3_r other) const -> dieptsiz3_r { return static_cast<dieptsiz3_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dieptsiz3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(dieptsiz3_r other) const -> dieptsiz3_r { return static_cast<dieptsiz3_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}

	constexpr dieptsiz3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dieptsiz3_r other) const -> dieptsiz3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dieptsiz3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 368;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device IN endpoint transmit FIFO status register
 */
class dtxfsts0_r {
public:

/**
 * IN endpoint TxFIFO space available
 */
class ineptfsav_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ineptfsav_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dtxfsts0_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(dtxfsts0_r other) const -> dtxfsts0_r { return static_cast<dtxfsts0_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ineptfsav() const -> ineptfsav_f {return ineptfsav_f(static_cast<uint16_t>(m_value >> ineptfsav_f::Offset));}

	constexpr dtxfsts0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dtxfsts0_r other) const -> dtxfsts0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dtxfsts0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 280;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device IN endpoint transmit FIFO status register
 */
class dtxfsts1_r {
public:

/**
 * IN endpoint TxFIFO space available
 */
class ineptfsav_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ineptfsav_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dtxfsts1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(dtxfsts1_r other) const -> dtxfsts1_r { return static_cast<dtxfsts1_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ineptfsav() const -> ineptfsav_f {return ineptfsav_f(static_cast<uint16_t>(m_value >> ineptfsav_f::Offset));}

	constexpr dtxfsts1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dtxfsts1_r other) const -> dtxfsts1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dtxfsts1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 312;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device IN endpoint transmit FIFO status register
 */
class dtxfsts2_r {
public:

/**
 * IN endpoint TxFIFO space available
 */
class ineptfsav_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ineptfsav_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dtxfsts2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(dtxfsts2_r other) const -> dtxfsts2_r { return static_cast<dtxfsts2_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ineptfsav() const -> ineptfsav_f {return ineptfsav_f(static_cast<uint16_t>(m_value >> ineptfsav_f::Offset));}

	constexpr dtxfsts2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dtxfsts2_r other) const -> dtxfsts2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dtxfsts2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 344;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device IN endpoint transmit FIFO status register
 */
class dtxfsts3_r {
public:

/**
 * IN endpoint TxFIFO space available
 */
class ineptfsav_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ineptfsav_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dtxfsts3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(dtxfsts3_r other) const -> dtxfsts3_r { return static_cast<dtxfsts3_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ineptfsav() const -> ineptfsav_f {return ineptfsav_f(static_cast<uint16_t>(m_value >> ineptfsav_f::Offset));}

	constexpr dtxfsts3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dtxfsts3_r other) const -> dtxfsts3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dtxfsts3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 376;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device OUT endpoint-1 transfer size register
 */
class doeptsiz1_r {
public:

/**
 * Received data PID/SETUP packet count
 */
class rxdpid_stupcnt_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rxdpid_stupcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator doeptsiz1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz1_r other) const -> doeptsiz1_r { return static_cast<doeptsiz1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator doeptsiz1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz1_r other) const -> doeptsiz1_r { return static_cast<doeptsiz1_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator doeptsiz1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz1_r other) const -> doeptsiz1_r { return static_cast<doeptsiz1_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto rxdpid_stupcnt() const -> rxdpid_stupcnt_f {return rxdpid_stupcnt_f(static_cast<uint8_t>(m_value >> rxdpid_stupcnt_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}

	constexpr doeptsiz1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doeptsiz1_r other) const -> doeptsiz1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doeptsiz1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 816;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device OUT endpoint-2 transfer size register
 */
class doeptsiz2_r {
public:

/**
 * Received data PID/SETUP packet count
 */
class rxdpid_stupcnt_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rxdpid_stupcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator doeptsiz2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz2_r other) const -> doeptsiz2_r { return static_cast<doeptsiz2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator doeptsiz2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz2_r other) const -> doeptsiz2_r { return static_cast<doeptsiz2_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator doeptsiz2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz2_r other) const -> doeptsiz2_r { return static_cast<doeptsiz2_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto rxdpid_stupcnt() const -> rxdpid_stupcnt_f {return rxdpid_stupcnt_f(static_cast<uint8_t>(m_value >> rxdpid_stupcnt_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}

	constexpr doeptsiz2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doeptsiz2_r other) const -> doeptsiz2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doeptsiz2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 848;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * device OUT endpoint-3 transfer size register
 */
class doeptsiz3_r {
public:

/**
 * Received data PID/SETUP packet count
 */
class rxdpid_stupcnt_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rxdpid_stupcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator doeptsiz3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz3_r other) const -> doeptsiz3_r { return static_cast<doeptsiz3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator doeptsiz3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz3_r other) const -> doeptsiz3_r { return static_cast<doeptsiz3_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator doeptsiz3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(doeptsiz3_r other) const -> doeptsiz3_r { return static_cast<doeptsiz3_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto rxdpid_stupcnt() const -> rxdpid_stupcnt_f {return rxdpid_stupcnt_f(static_cast<uint8_t>(m_value >> rxdpid_stupcnt_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}

	constexpr doeptsiz3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doeptsiz3_r other) const -> doeptsiz3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doeptsiz3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 880;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};

	Memory<uint32_t,fs_dcfg_r> fs_dcfg;
	ReadOnlyMemory<uint32_t,fs_dctl_r> fs_dctl;
	ReadOnlyMemory<uint32_t,fs_dsts_r> fs_dsts;
	Padding<4> _p12;
	Memory<uint32_t,fs_diepmsk_r> fs_diepmsk;
	Memory<uint32_t,fs_doepmsk_r> fs_doepmsk;
	ReadOnlyMemory<uint32_t,fs_daint_r> fs_daint;
	Memory<uint32_t,fs_daintmsk_r> fs_daintmsk;
	Padding<8> _p32;
	Memory<uint32_t,dvbusdis_r> dvbusdis;
	Memory<uint32_t,dvbuspulse_r> dvbuspulse;
	Padding<4> _p48;
	Memory<uint32_t,diepempmsk_r> diepempmsk;
	Padding<200> _p56;
	ReadOnlyMemory<uint32_t,fs_diepctl0_r> fs_diepctl0;
	Padding<4> _p260;
	ReadOnlyMemory<uint32_t,diepint0_r> diepint0;
	Padding<4> _p268;
	Memory<uint32_t,dieptsiz0_r> dieptsiz0;
	Padding<4> _p276;
	ReadOnlyMemory<uint32_t,dtxfsts0_r> dtxfsts0;
	Padding<4> _p284;
	ReadOnlyMemory<uint32_t,diepctl1_r> diepctl1;
	Padding<4> _p292;
	ReadOnlyMemory<uint32_t,diepint1_r> diepint1;
	Padding<4> _p300;
	Memory<uint32_t,dieptsiz1_r> dieptsiz1;
	Padding<4> _p308;
	ReadOnlyMemory<uint32_t,dtxfsts1_r> dtxfsts1;
	Padding<4> _p316;
	ReadOnlyMemory<uint32_t,diepctl2_r> diepctl2;
	Padding<4> _p324;
	ReadOnlyMemory<uint32_t,diepint2_r> diepint2;
	Padding<4> _p332;
	Memory<uint32_t,dieptsiz2_r> dieptsiz2;
	Padding<4> _p340;
	ReadOnlyMemory<uint32_t,dtxfsts2_r> dtxfsts2;
	Padding<4> _p348;
	ReadOnlyMemory<uint32_t,diepctl3_r> diepctl3;
	Padding<4> _p356;
	ReadOnlyMemory<uint32_t,diepint3_r> diepint3;
	Padding<4> _p364;
	Memory<uint32_t,dieptsiz3_r> dieptsiz3;
	Padding<4> _p372;
	ReadOnlyMemory<uint32_t,dtxfsts3_r> dtxfsts3;
	Padding<388> _p380;
	ReadOnlyMemory<uint32_t,doepctl0_r> doepctl0;
	Padding<4> _p772;
	Memory<uint32_t,doepint0_r> doepint0;
	Padding<4> _p780;
	Memory<uint32_t,doeptsiz0_r> doeptsiz0;
	Padding<12> _p788;
	ReadOnlyMemory<uint32_t,doepctl1_r> doepctl1;
	Padding<4> _p804;
	Memory<uint32_t,doepint1_r> doepint1;
	Padding<4> _p812;
	Memory<uint32_t,doeptsiz1_r> doeptsiz1;
	Padding<12> _p820;
	ReadOnlyMemory<uint32_t,doepctl2_r> doepctl2;
	Padding<4> _p836;
	Memory<uint32_t,doepint2_r> doepint2;
	Padding<4> _p844;
	Memory<uint32_t,doeptsiz2_r> doeptsiz2;
	Padding<12> _p852;
	ReadOnlyMemory<uint32_t,doepctl3_r> doepctl3;
	Padding<4> _p868;
	Memory<uint32_t,doepint3_r> doepint3;
	Padding<4> _p876;
	Memory<uint32_t,doeptsiz3_r> doeptsiz3;
};

static_assert(std::is_standard_layout_v<otg_fs_device_p>);
static_assert(offsetof(otg_fs_device_p, fs_dcfg) == otg_fs_device_p::fs_dcfg_r::Offset);
static_assert(offsetof(otg_fs_device_p, fs_dctl) == otg_fs_device_p::fs_dctl_r::Offset);
static_assert(offsetof(otg_fs_device_p, fs_dsts) == otg_fs_device_p::fs_dsts_r::Offset);
static_assert(offsetof(otg_fs_device_p, fs_diepmsk) == otg_fs_device_p::fs_diepmsk_r::Offset);
static_assert(offsetof(otg_fs_device_p, fs_doepmsk) == otg_fs_device_p::fs_doepmsk_r::Offset);
static_assert(offsetof(otg_fs_device_p, fs_daint) == otg_fs_device_p::fs_daint_r::Offset);
static_assert(offsetof(otg_fs_device_p, fs_daintmsk) == otg_fs_device_p::fs_daintmsk_r::Offset);
static_assert(offsetof(otg_fs_device_p, dvbusdis) == otg_fs_device_p::dvbusdis_r::Offset);
static_assert(offsetof(otg_fs_device_p, dvbuspulse) == otg_fs_device_p::dvbuspulse_r::Offset);
static_assert(offsetof(otg_fs_device_p, diepempmsk) == otg_fs_device_p::diepempmsk_r::Offset);
static_assert(offsetof(otg_fs_device_p, fs_diepctl0) == otg_fs_device_p::fs_diepctl0_r::Offset);
static_assert(offsetof(otg_fs_device_p, diepctl1) == otg_fs_device_p::diepctl1_r::Offset);
static_assert(offsetof(otg_fs_device_p, diepctl2) == otg_fs_device_p::diepctl2_r::Offset);
static_assert(offsetof(otg_fs_device_p, diepctl3) == otg_fs_device_p::diepctl3_r::Offset);
static_assert(offsetof(otg_fs_device_p, doepctl0) == otg_fs_device_p::doepctl0_r::Offset);
static_assert(offsetof(otg_fs_device_p, doepctl1) == otg_fs_device_p::doepctl1_r::Offset);
static_assert(offsetof(otg_fs_device_p, doepctl2) == otg_fs_device_p::doepctl2_r::Offset);
static_assert(offsetof(otg_fs_device_p, doepctl3) == otg_fs_device_p::doepctl3_r::Offset);
static_assert(offsetof(otg_fs_device_p, diepint0) == otg_fs_device_p::diepint0_r::Offset);
static_assert(offsetof(otg_fs_device_p, diepint1) == otg_fs_device_p::diepint1_r::Offset);
static_assert(offsetof(otg_fs_device_p, diepint2) == otg_fs_device_p::diepint2_r::Offset);
static_assert(offsetof(otg_fs_device_p, diepint3) == otg_fs_device_p::diepint3_r::Offset);
static_assert(offsetof(otg_fs_device_p, doepint0) == otg_fs_device_p::doepint0_r::Offset);
static_assert(offsetof(otg_fs_device_p, doepint1) == otg_fs_device_p::doepint1_r::Offset);
static_assert(offsetof(otg_fs_device_p, doepint2) == otg_fs_device_p::doepint2_r::Offset);
static_assert(offsetof(otg_fs_device_p, doepint3) == otg_fs_device_p::doepint3_r::Offset);
static_assert(offsetof(otg_fs_device_p, dieptsiz0) == otg_fs_device_p::dieptsiz0_r::Offset);
static_assert(offsetof(otg_fs_device_p, doeptsiz0) == otg_fs_device_p::doeptsiz0_r::Offset);
static_assert(offsetof(otg_fs_device_p, dieptsiz1) == otg_fs_device_p::dieptsiz1_r::Offset);
static_assert(offsetof(otg_fs_device_p, dieptsiz2) == otg_fs_device_p::dieptsiz2_r::Offset);
static_assert(offsetof(otg_fs_device_p, dieptsiz3) == otg_fs_device_p::dieptsiz3_r::Offset);
static_assert(offsetof(otg_fs_device_p, dtxfsts0) == otg_fs_device_p::dtxfsts0_r::Offset);
static_assert(offsetof(otg_fs_device_p, dtxfsts1) == otg_fs_device_p::dtxfsts1_r::Offset);
static_assert(offsetof(otg_fs_device_p, dtxfsts2) == otg_fs_device_p::dtxfsts2_r::Offset);
static_assert(offsetof(otg_fs_device_p, dtxfsts3) == otg_fs_device_p::dtxfsts3_r::Offset);
static_assert(offsetof(otg_fs_device_p, doeptsiz1) == otg_fs_device_p::doeptsiz1_r::Offset);
static_assert(offsetof(otg_fs_device_p, doeptsiz2) == otg_fs_device_p::doeptsiz2_r::Offset);
static_assert(offsetof(otg_fs_device_p, doeptsiz3) == otg_fs_device_p::doeptsiz3_r::Offset);

/**
 * USB on the go full speed
 */
class otg_fs_global_p {
public:
/**
 * OTG_FS control and status register (OTG_FS_GOTGCTL)
 */
class fs_gotgctl_r {
public:

/**
 * Session request success
 */
class srqscs_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr srqscs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgctl_r other) const -> fs_gotgctl_r { return static_cast<fs_gotgctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Session request
 */
class srq_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr srq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgctl_r other) const -> fs_gotgctl_r { return static_cast<fs_gotgctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Host negotiation success
 */
class hngscs_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hngscs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgctl_r other) const -> fs_gotgctl_r { return static_cast<fs_gotgctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * HNP request
 */
class hnprq_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hnprq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgctl_r other) const -> fs_gotgctl_r { return static_cast<fs_gotgctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Host set HNP enable
 */
class hshnpen_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hshnpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgctl_r other) const -> fs_gotgctl_r { return static_cast<fs_gotgctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Device HNP enabled
 */
class dhnpen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dhnpen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgctl_r other) const -> fs_gotgctl_r { return static_cast<fs_gotgctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Connector ID status
 */
class cidsts_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cidsts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgctl_r other) const -> fs_gotgctl_r { return static_cast<fs_gotgctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Long/short debounce time
 */
class dbct_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbct_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgctl_r other) const -> fs_gotgctl_r { return static_cast<fs_gotgctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * A-session valid
 */
class asvld_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr asvld_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgctl_r other) const -> fs_gotgctl_r { return static_cast<fs_gotgctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * B-session valid
 */
class bsvld_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bsvld_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgctl_r other) const -> fs_gotgctl_r { return static_cast<fs_gotgctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto srqscs() const -> srqscs_f {return srqscs_f((m_value & srqscs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto srq() const -> srq_f {return srq_f((m_value & srq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hngscs() const -> hngscs_f {return hngscs_f((m_value & hngscs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hnprq() const -> hnprq_f {return hnprq_f((m_value & hnprq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hshnpen() const -> hshnpen_f {return hshnpen_f((m_value & hshnpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dhnpen() const -> dhnpen_f {return dhnpen_f((m_value & dhnpen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cidsts() const -> cidsts_f {return cidsts_f((m_value & cidsts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbct() const -> dbct_f {return dbct_f((m_value & dbct_f::Mask) != 0);}
	[[nodiscard]] constexpr auto asvld() const -> asvld_f {return asvld_f((m_value & asvld_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bsvld() const -> bsvld_f {return bsvld_f((m_value & bsvld_f::Mask) != 0);}

	constexpr fs_gotgctl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_gotgctl_r other) const -> fs_gotgctl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_gotgctl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b100000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS interrupt register (OTG_FS_GOTGINT)
 */
class fs_gotgint_r {
public:

/**
 * Session end detected
 */
class sedet_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sedet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgint_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgint_r other) const -> fs_gotgint_r { return static_cast<fs_gotgint_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Session request success status change
 */
class srsschg_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr srsschg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgint_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgint_r other) const -> fs_gotgint_r { return static_cast<fs_gotgint_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Host negotiation success status change
 */
class hnsschg_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hnsschg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgint_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgint_r other) const -> fs_gotgint_r { return static_cast<fs_gotgint_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Host negotiation detected
 */
class hngdet_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hngdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgint_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgint_r other) const -> fs_gotgint_r { return static_cast<fs_gotgint_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * A-device timeout change
 */
class adtochg_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr adtochg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgint_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgint_r other) const -> fs_gotgint_r { return static_cast<fs_gotgint_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Debounce done
 */
class dbcdne_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbcdne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gotgint_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gotgint_r other) const -> fs_gotgint_r { return static_cast<fs_gotgint_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto sedet() const -> sedet_f {return sedet_f((m_value & sedet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto srsschg() const -> srsschg_f {return srsschg_f((m_value & srsschg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hnsschg() const -> hnsschg_f {return hnsschg_f((m_value & hnsschg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hngdet() const -> hngdet_f {return hngdet_f((m_value & hngdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto adtochg() const -> adtochg_f {return adtochg_f((m_value & adtochg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbcdne() const -> dbcdne_f {return dbcdne_f((m_value & dbcdne_f::Mask) != 0);}

	constexpr fs_gotgint_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_gotgint_r other) const -> fs_gotgint_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_gotgint_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS AHB configuration register (OTG_FS_GAHBCFG)
 */
class fs_gahbcfg_r {
public:

/**
 * Global interrupt mask
 */
class gint_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gahbcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gahbcfg_r other) const -> fs_gahbcfg_r { return static_cast<fs_gahbcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TxFIFO empty level
 */
class txfelvl_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfelvl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gahbcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gahbcfg_r other) const -> fs_gahbcfg_r { return static_cast<fs_gahbcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Periodic TxFIFO empty level
 */
class ptxfelvl_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ptxfelvl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gahbcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gahbcfg_r other) const -> fs_gahbcfg_r { return static_cast<fs_gahbcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto gint() const -> gint_f {return gint_f((m_value & gint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfelvl() const -> txfelvl_f {return txfelvl_f((m_value & txfelvl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ptxfelvl() const -> ptxfelvl_f {return ptxfelvl_f((m_value & ptxfelvl_f::Mask) != 0);}

	constexpr fs_gahbcfg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_gahbcfg_r other) const -> fs_gahbcfg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_gahbcfg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS USB configuration register (OTG_FS_GUSBCFG)
 */
class fs_gusbcfg_r {
public:

/**
 * FS timeout calibration
 */
class tocal_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tocal_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_gusbcfg_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(fs_gusbcfg_r other) const -> fs_gusbcfg_r { return static_cast<fs_gusbcfg_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Full Speed serial transceiver select
 */
class physel_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr physel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gusbcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gusbcfg_r other) const -> fs_gusbcfg_r { return static_cast<fs_gusbcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SRP-capable
 */
class srpcap_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr srpcap_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gusbcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gusbcfg_r other) const -> fs_gusbcfg_r { return static_cast<fs_gusbcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * HNP-capable
 */
class hnpcap_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr hnpcap_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gusbcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gusbcfg_r other) const -> fs_gusbcfg_r { return static_cast<fs_gusbcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USB turnaround time
 */
class trdt_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr trdt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_gusbcfg_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_gusbcfg_r other) const -> fs_gusbcfg_r { return static_cast<fs_gusbcfg_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Force host mode
 */
class fhmod_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fhmod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gusbcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gusbcfg_r other) const -> fs_gusbcfg_r { return static_cast<fs_gusbcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Force device mode
 */
class fdmod_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fdmod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gusbcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gusbcfg_r other) const -> fs_gusbcfg_r { return static_cast<fs_gusbcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Corrupt Tx packet
 */
class ctxpkt_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ctxpkt_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gusbcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gusbcfg_r other) const -> fs_gusbcfg_r { return static_cast<fs_gusbcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tocal() const -> tocal_f {return tocal_f(static_cast<uint8_t>(m_value >> tocal_f::Offset));}
	[[nodiscard]] constexpr auto physel() const -> physel_f {return physel_f((m_value & physel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto srpcap() const -> srpcap_f {return srpcap_f((m_value & srpcap_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hnpcap() const -> hnpcap_f {return hnpcap_f((m_value & hnpcap_f::Mask) != 0);}
	[[nodiscard]] constexpr auto trdt() const -> trdt_f {return trdt_f(static_cast<uint8_t>(m_value >> trdt_f::Offset));}
	[[nodiscard]] constexpr auto fhmod() const -> fhmod_f {return fhmod_f((m_value & fhmod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fdmod() const -> fdmod_f {return fdmod_f((m_value & fdmod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctxpkt() const -> ctxpkt_f {return ctxpkt_f((m_value & ctxpkt_f::Mask) != 0);}

	constexpr fs_gusbcfg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_gusbcfg_r other) const -> fs_gusbcfg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_gusbcfg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0b101000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS reset register (OTG_FS_GRSTCTL)
 */
class fs_grstctl_r {
public:

/**
 * Core soft reset
 */
class csrst_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr csrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_grstctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_grstctl_r other) const -> fs_grstctl_r { return static_cast<fs_grstctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * HCLK soft reset
 */
class hsrst_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hsrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_grstctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_grstctl_r other) const -> fs_grstctl_r { return static_cast<fs_grstctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Host frame counter reset
 */
class fcrst_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fcrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_grstctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_grstctl_r other) const -> fs_grstctl_r { return static_cast<fs_grstctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * RxFIFO flush
 */
class rxfflsh_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxfflsh_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_grstctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_grstctl_r other) const -> fs_grstctl_r { return static_cast<fs_grstctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TxFIFO flush
 */
class txfflsh_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfflsh_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_grstctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_grstctl_r other) const -> fs_grstctl_r { return static_cast<fs_grstctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * TxFIFO number
 */
class txfnum_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr txfnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_grstctl_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grstctl_r other) const -> fs_grstctl_r { return static_cast<fs_grstctl_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * AHB master idle
 */
class ahbidl_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ahbidl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_grstctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_grstctl_r other) const -> fs_grstctl_r { return static_cast<fs_grstctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto csrst() const -> csrst_f {return csrst_f((m_value & csrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hsrst() const -> hsrst_f {return hsrst_f((m_value & hsrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fcrst() const -> fcrst_f {return fcrst_f((m_value & fcrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfflsh() const -> rxfflsh_f {return rxfflsh_f((m_value & rxfflsh_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfflsh() const -> txfflsh_f {return txfflsh_f((m_value & txfflsh_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfnum() const -> txfnum_f {return txfnum_f(static_cast<uint8_t>(m_value >> txfnum_f::Offset));}
	[[nodiscard]] constexpr auto ahbidl() const -> ahbidl_f {return ahbidl_f((m_value & ahbidl_f::Mask) != 0);}

	constexpr fs_grstctl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_grstctl_r other) const -> fs_grstctl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_grstctl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0b100000000000000000000000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS core interrupt register (OTG_FS_GINTSTS)
 */
class fs_gintsts_r {
public:

/**
 * Current mode of operation
 */
class cmod_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Mode mismatch interrupt
 */
class mmis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mmis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * OTG interrupt
 */
class otgint_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr otgint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Start of frame
 */
class sof_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sof_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * RxFIFO non-empty
 */
class rxflvl_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxflvl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Non-periodic TxFIFO empty
 */
class nptxfe_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nptxfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Global IN non-periodic NAK effective
 */
class ginakeff_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ginakeff_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Global OUT NAK effective
 */
class goutnakeff_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr goutnakeff_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Early suspend
 */
class esusp_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr esusp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USB suspend
 */
class usbsusp_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbsusp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USB reset
 */
class usbrst_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Enumeration done
 */
class enumdne_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr enumdne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Isochronous OUT packet dropped interrupt
 */
class isoodrp_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr isoodrp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * End of periodic frame interrupt
 */
class eopf_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr eopf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * IN endpoint interrupt
 */
class iepint_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr iepint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * OUT endpoint interrupt
 */
class oepint_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oepint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Incomplete isochronous IN transfer
 */
class iisoixfr_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr iisoixfr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)
 */
class ipxfr_incompisoout_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ipxfr_incompisoout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Host port interrupt
 */
class hprtint_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hprtint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Host channels interrupt
 */
class hcint_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hcint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Periodic TxFIFO empty
 */
class ptxfe_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ptxfe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Connector ID status change
 */
class cidschg_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cidschg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Disconnect detected interrupt
 */
class discint_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr discint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Session request/new session detected interrupt
 */
class srqint_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr srqint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Resume/remote wakeup detected interrupt
 */
class wkupint_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wkupint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintsts_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintsts_r other) const -> fs_gintsts_r { return static_cast<fs_gintsts_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cmod() const -> cmod_f {return cmod_f((m_value & cmod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mmis() const -> mmis_f {return mmis_f((m_value & mmis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto otgint() const -> otgint_f {return otgint_f((m_value & otgint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sof() const -> sof_f {return sof_f((m_value & sof_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxflvl() const -> rxflvl_f {return rxflvl_f((m_value & rxflvl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nptxfe() const -> nptxfe_f {return nptxfe_f((m_value & nptxfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ginakeff() const -> ginakeff_f {return ginakeff_f((m_value & ginakeff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto goutnakeff() const -> goutnakeff_f {return goutnakeff_f((m_value & goutnakeff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto esusp() const -> esusp_f {return esusp_f((m_value & esusp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbsusp() const -> usbsusp_f {return usbsusp_f((m_value & usbsusp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbrst() const -> usbrst_f {return usbrst_f((m_value & usbrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto enumdne() const -> enumdne_f {return enumdne_f((m_value & enumdne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto isoodrp() const -> isoodrp_f {return isoodrp_f((m_value & isoodrp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eopf() const -> eopf_f {return eopf_f((m_value & eopf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iepint() const -> iepint_f {return iepint_f((m_value & iepint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oepint() const -> oepint_f {return oepint_f((m_value & oepint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iisoixfr() const -> iisoixfr_f {return iisoixfr_f((m_value & iisoixfr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ipxfr_incompisoout() const -> ipxfr_incompisoout_f {return ipxfr_incompisoout_f((m_value & ipxfr_incompisoout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hprtint() const -> hprtint_f {return hprtint_f((m_value & hprtint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hcint() const -> hcint_f {return hcint_f((m_value & hcint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ptxfe() const -> ptxfe_f {return ptxfe_f((m_value & ptxfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cidschg() const -> cidschg_f {return cidschg_f((m_value & cidschg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto discint() const -> discint_f {return discint_f((m_value & discint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto srqint() const -> srqint_f {return srqint_f((m_value & srqint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wkupint() const -> wkupint_f {return wkupint_f((m_value & wkupint_f::Mask) != 0);}

	constexpr fs_gintsts_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_gintsts_r other) const -> fs_gintsts_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_gintsts_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0b100000000000000000000100000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS interrupt mask register (OTG_FS_GINTMSK)
 */
class fs_gintmsk_r {
public:

/**
 * Mode mismatch interrupt mask
 */
class mmism_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mmism_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * OTG interrupt mask
 */
class otgint_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr otgint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Start of frame mask
 */
class sofm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sofm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Receive FIFO non-empty mask
 */
class rxflvlm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxflvlm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Non-periodic TxFIFO empty mask
 */
class nptxfem_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nptxfem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Global non-periodic IN NAK effective mask
 */
class ginakeffm_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ginakeffm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Global OUT NAK effective mask
 */
class gonakeffm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gonakeffm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Early suspend mask
 */
class esuspm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr esuspm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USB suspend mask
 */
class usbsuspm_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbsuspm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * USB reset mask
 */
class usbrst_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usbrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Enumeration done mask
 */
class enumdnem_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr enumdnem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Isochronous OUT packet dropped interrupt mask
 */
class isoodrpm_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr isoodrpm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * End of periodic frame interrupt mask
 */
class eopfm_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr eopfm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint mismatch interrupt mask
 */
class epmism_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr epmism_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * IN endpoints interrupt mask
 */
class iepint_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr iepint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * OUT endpoints interrupt mask
 */
class oepint_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oepint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Incomplete isochronous IN transfer mask
 */
class iisoixfrm_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr iisoixfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)
 */
class ipxfrm_iisooxfrm_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ipxfrm_iisooxfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Host port interrupt mask
 */
class prtim_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr prtim_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Host channels interrupt mask
 */
class hcim_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr hcim_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Periodic TxFIFO empty mask
 */
class ptxfem_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ptxfem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Connector ID status change mask
 */
class cidschgm_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cidschgm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Disconnect detected interrupt mask
 */
class discint_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr discint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Session request/new session detected interrupt mask
 */
class srqim_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr srqim_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Resume/remote wakeup detected interrupt mask
 */
class wuim_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wuim_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gintmsk_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gintmsk_r other) const -> fs_gintmsk_r { return static_cast<fs_gintmsk_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mmism() const -> mmism_f {return mmism_f((m_value & mmism_f::Mask) != 0);}
	[[nodiscard]] constexpr auto otgint() const -> otgint_f {return otgint_f((m_value & otgint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sofm() const -> sofm_f {return sofm_f((m_value & sofm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxflvlm() const -> rxflvlm_f {return rxflvlm_f((m_value & rxflvlm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nptxfem() const -> nptxfem_f {return nptxfem_f((m_value & nptxfem_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ginakeffm() const -> ginakeffm_f {return ginakeffm_f((m_value & ginakeffm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gonakeffm() const -> gonakeffm_f {return gonakeffm_f((m_value & gonakeffm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto esuspm() const -> esuspm_f {return esuspm_f((m_value & esuspm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbsuspm() const -> usbsuspm_f {return usbsuspm_f((m_value & usbsuspm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usbrst() const -> usbrst_f {return usbrst_f((m_value & usbrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto enumdnem() const -> enumdnem_f {return enumdnem_f((m_value & enumdnem_f::Mask) != 0);}
	[[nodiscard]] constexpr auto isoodrpm() const -> isoodrpm_f {return isoodrpm_f((m_value & isoodrpm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eopfm() const -> eopfm_f {return eopfm_f((m_value & eopfm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto epmism() const -> epmism_f {return epmism_f((m_value & epmism_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iepint() const -> iepint_f {return iepint_f((m_value & iepint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oepint() const -> oepint_f {return oepint_f((m_value & oepint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iisoixfrm() const -> iisoixfrm_f {return iisoixfrm_f((m_value & iisoixfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ipxfrm_iisooxfrm() const -> ipxfrm_iisooxfrm_f {return ipxfrm_iisooxfrm_f((m_value & ipxfrm_iisooxfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto prtim() const -> prtim_f {return prtim_f((m_value & prtim_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hcim() const -> hcim_f {return hcim_f((m_value & hcim_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ptxfem() const -> ptxfem_f {return ptxfem_f((m_value & ptxfem_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cidschgm() const -> cidschgm_f {return cidschgm_f((m_value & cidschgm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto discint() const -> discint_f {return discint_f((m_value & discint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto srqim() const -> srqim_f {return srqim_f((m_value & srqim_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wuim() const -> wuim_f {return wuim_f((m_value & wuim_f::Mask) != 0);}

	constexpr fs_gintmsk_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_gintmsk_r other) const -> fs_gintmsk_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_gintmsk_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS Receive status debug read(Device mode)
 */
class fs_grxstsr_device_r {
public:

/**
 * Endpoint number
 */
class epnum_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr epnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_grxstsr_device_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxstsr_device_r other) const -> fs_grxstsr_device_r { return static_cast<fs_grxstsr_device_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Byte count
 */
class bcnt_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr bcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_grxstsr_device_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxstsr_device_r other) const -> fs_grxstsr_device_r { return static_cast<fs_grxstsr_device_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Data PID
 */
class dpid_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dpid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_grxstsr_device_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxstsr_device_r other) const -> fs_grxstsr_device_r { return static_cast<fs_grxstsr_device_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Packet status
 */
class pktsts_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktsts_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_grxstsr_device_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxstsr_device_r other) const -> fs_grxstsr_device_r { return static_cast<fs_grxstsr_device_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Frame number
 */
class frmnum_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr frmnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_grxstsr_device_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxstsr_device_r other) const -> fs_grxstsr_device_r { return static_cast<fs_grxstsr_device_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto epnum() const -> epnum_f {return epnum_f(static_cast<uint8_t>(m_value >> epnum_f::Offset));}
	[[nodiscard]] constexpr auto bcnt() const -> bcnt_f {return bcnt_f(static_cast<uint16_t>(m_value >> bcnt_f::Offset));}
	[[nodiscard]] constexpr auto dpid() const -> dpid_f {return dpid_f(static_cast<uint8_t>(m_value >> dpid_f::Offset));}
	[[nodiscard]] constexpr auto pktsts() const -> pktsts_f {return pktsts_f(static_cast<uint8_t>(m_value >> pktsts_f::Offset));}
	[[nodiscard]] constexpr auto frmnum() const -> frmnum_f {return frmnum_f(static_cast<uint8_t>(m_value >> frmnum_f::Offset));}

	constexpr fs_grxstsr_device_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_grxstsr_device_r other) const -> fs_grxstsr_device_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_grxstsr_device_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS Receive status debug read(Host mode)
 */
class fs_grxstsr_host_r {
public:

/**
 * Endpoint number
 */
class epnum_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr epnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_grxstsr_host_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxstsr_host_r other) const -> fs_grxstsr_host_r { return static_cast<fs_grxstsr_host_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Byte count
 */
class bcnt_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr bcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_grxstsr_host_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxstsr_host_r other) const -> fs_grxstsr_host_r { return static_cast<fs_grxstsr_host_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Data PID
 */
class dpid_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dpid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_grxstsr_host_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxstsr_host_r other) const -> fs_grxstsr_host_r { return static_cast<fs_grxstsr_host_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Packet status
 */
class pktsts_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktsts_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_grxstsr_host_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxstsr_host_r other) const -> fs_grxstsr_host_r { return static_cast<fs_grxstsr_host_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Frame number
 */
class frmnum_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr frmnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_grxstsr_host_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxstsr_host_r other) const -> fs_grxstsr_host_r { return static_cast<fs_grxstsr_host_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto epnum() const -> epnum_f {return epnum_f(static_cast<uint8_t>(m_value >> epnum_f::Offset));}
	[[nodiscard]] constexpr auto bcnt() const -> bcnt_f {return bcnt_f(static_cast<uint16_t>(m_value >> bcnt_f::Offset));}
	[[nodiscard]] constexpr auto dpid() const -> dpid_f {return dpid_f(static_cast<uint8_t>(m_value >> dpid_f::Offset));}
	[[nodiscard]] constexpr auto pktsts() const -> pktsts_f {return pktsts_f(static_cast<uint8_t>(m_value >> pktsts_f::Offset));}
	[[nodiscard]] constexpr auto frmnum() const -> frmnum_f {return frmnum_f(static_cast<uint8_t>(m_value >> frmnum_f::Offset));}

	constexpr fs_grxstsr_host_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_grxstsr_host_r other) const -> fs_grxstsr_host_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_grxstsr_host_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ)
 */
class fs_grxfsiz_r {
public:

/**
 * RxFIFO depth
 */
class rxfd_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rxfd_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_grxfsiz_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_grxfsiz_r other) const -> fs_grxfsiz_r { return static_cast<fs_grxfsiz_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rxfd() const -> rxfd_f {return rxfd_f(static_cast<uint16_t>(m_value >> rxfd_f::Offset));}

	constexpr fs_grxfsiz_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_grxfsiz_r other) const -> fs_grxfsiz_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_grxfsiz_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0b1000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS non-periodic transmit FIFO size register (Device mode)
 */
class fs_gnptxfsiz_device_r {
public:

/**
 * Endpoint 0 transmit RAM start address
 */
class tx0fsa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tx0fsa_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_gnptxfsiz_device_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_gnptxfsiz_device_r other) const -> fs_gnptxfsiz_device_r { return static_cast<fs_gnptxfsiz_device_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Endpoint 0 TxFIFO depth
 */
class tx0fd_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr tx0fd_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_gnptxfsiz_device_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_gnptxfsiz_device_r other) const -> fs_gnptxfsiz_device_r { return static_cast<fs_gnptxfsiz_device_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto tx0fsa() const -> tx0fsa_f {return tx0fsa_f(static_cast<uint16_t>(m_value >> tx0fsa_f::Offset));}
	[[nodiscard]] constexpr auto tx0fd() const -> tx0fd_f {return tx0fd_f(static_cast<uint16_t>(m_value >> tx0fd_f::Offset));}

	constexpr fs_gnptxfsiz_device_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_gnptxfsiz_device_r other) const -> fs_gnptxfsiz_device_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_gnptxfsiz_device_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0b1000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS non-periodic transmit FIFO size register (Host mode)
 */
class fs_gnptxfsiz_host_r {
public:

/**
 * Non-periodic transmit RAM start address
 */
class nptxfsa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr nptxfsa_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_gnptxfsiz_host_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_gnptxfsiz_host_r other) const -> fs_gnptxfsiz_host_r { return static_cast<fs_gnptxfsiz_host_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Non-periodic TxFIFO depth
 */
class nptxfd_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nptxfd_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_gnptxfsiz_host_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_gnptxfsiz_host_r other) const -> fs_gnptxfsiz_host_r { return static_cast<fs_gnptxfsiz_host_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto nptxfsa() const -> nptxfsa_f {return nptxfsa_f(static_cast<uint16_t>(m_value >> nptxfsa_f::Offset));}
	[[nodiscard]] constexpr auto nptxfd() const -> nptxfd_f {return nptxfd_f(static_cast<uint16_t>(m_value >> nptxfd_f::Offset));}

	constexpr fs_gnptxfsiz_host_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_gnptxfsiz_host_r other) const -> fs_gnptxfsiz_host_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_gnptxfsiz_host_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0b1000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS)
 */
class fs_gnptxsts_r {
public:

/**
 * Non-periodic TxFIFO space available
 */
class nptxfsav_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr nptxfsav_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_gnptxsts_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_gnptxsts_r other) const -> fs_gnptxsts_r { return static_cast<fs_gnptxsts_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Non-periodic transmit request queue space available
 */
class nptqxsav_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nptqxsav_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_gnptxsts_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_gnptxsts_r other) const -> fs_gnptxsts_r { return static_cast<fs_gnptxsts_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Top of the non-periodic transmit request queue
 */
class nptxqtop_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nptxqtop_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_gnptxsts_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_gnptxsts_r other) const -> fs_gnptxsts_r { return static_cast<fs_gnptxsts_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto nptxfsav() const -> nptxfsav_f {return nptxfsav_f(static_cast<uint16_t>(m_value >> nptxfsav_f::Offset));}
	[[nodiscard]] constexpr auto nptqxsav() const -> nptqxsav_f {return nptqxsav_f(static_cast<uint8_t>(m_value >> nptqxsav_f::Offset));}
	[[nodiscard]] constexpr auto nptxqtop() const -> nptxqtop_f {return nptxqtop_f(static_cast<uint8_t>(m_value >> nptxqtop_f::Offset));}

	constexpr fs_gnptxsts_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_gnptxsts_r other) const -> fs_gnptxsts_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_gnptxsts_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0b10000000001000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS general core configuration register (OTG_FS_GCCFG)
 */
class fs_gccfg_r {
public:

/**
 * Power down
 */
class pwrdwn_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pwrdwn_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gccfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gccfg_r other) const -> fs_gccfg_r { return static_cast<fs_gccfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Enable the VBUS sensing device
 */
class vbusasen_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr vbusasen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gccfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gccfg_r other) const -> fs_gccfg_r { return static_cast<fs_gccfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Enable the VBUS sensing device
 */
class vbusbsen_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr vbusbsen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gccfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gccfg_r other) const -> fs_gccfg_r { return static_cast<fs_gccfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * SOF output enable
 */
class sofouten_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sofouten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_gccfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_gccfg_r other) const -> fs_gccfg_r { return static_cast<fs_gccfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pwrdwn() const -> pwrdwn_f {return pwrdwn_f((m_value & pwrdwn_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vbusasen() const -> vbusasen_f {return vbusasen_f((m_value & vbusasen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vbusbsen() const -> vbusbsen_f {return vbusbsen_f((m_value & vbusbsen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sofouten() const -> sofouten_f {return sofouten_f((m_value & sofouten_f::Mask) != 0);}

	constexpr fs_gccfg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_gccfg_r other) const -> fs_gccfg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_gccfg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * core ID register
 */
class fs_cid_r {
public:

/**
 * Product ID field
 */
class product_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr product_id_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fs_cid_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_cid_r other) const -> fs_cid_r { return static_cast<fs_cid_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto product_id() const -> product_id_f {return product_id_f(static_cast<uint32_t>(m_value >> product_id_f::Offset));}

	constexpr fs_cid_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_cid_r other) const -> fs_cid_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_cid_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0b1000000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ)
 */
class fs_hptxfsiz_r {
public:

/**
 * Host periodic TxFIFO start address
 */
class ptxsa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ptxsa_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hptxfsiz_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hptxfsiz_r other) const -> fs_hptxfsiz_r { return static_cast<fs_hptxfsiz_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Host periodic TxFIFO depth
 */
class ptxfsiz_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ptxfsiz_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hptxfsiz_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hptxfsiz_r other) const -> fs_hptxfsiz_r { return static_cast<fs_hptxfsiz_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ptxsa() const -> ptxsa_f {return ptxsa_f(static_cast<uint16_t>(m_value >> ptxsa_f::Offset));}
	[[nodiscard]] constexpr auto ptxfsiz() const -> ptxfsiz_f {return ptxfsiz_f(static_cast<uint16_t>(m_value >> ptxfsiz_f::Offset));}

	constexpr fs_hptxfsiz_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hptxfsiz_r other) const -> fs_hptxfsiz_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hptxfsiz_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 256;
	static constexpr uint32_t ResetValue = 0b10000000000000011000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2)
 */
class fs_dieptxf1_r {
public:

/**
 * IN endpoint FIFO2 transmit RAM start address
 */
class ineptxsa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ineptxsa_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_dieptxf1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dieptxf1_r other) const -> fs_dieptxf1_r { return static_cast<fs_dieptxf1_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * IN endpoint TxFIFO depth
 */
class ineptxfd_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ineptxfd_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_dieptxf1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dieptxf1_r other) const -> fs_dieptxf1_r { return static_cast<fs_dieptxf1_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ineptxsa() const -> ineptxsa_f {return ineptxsa_f(static_cast<uint16_t>(m_value >> ineptxsa_f::Offset));}
	[[nodiscard]] constexpr auto ineptxfd() const -> ineptxfd_f {return ineptxfd_f(static_cast<uint16_t>(m_value >> ineptxfd_f::Offset));}

	constexpr fs_dieptxf1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_dieptxf1_r other) const -> fs_dieptxf1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_dieptxf1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 260;
	static constexpr uint32_t ResetValue = 0b10000000000000010000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3)
 */
class fs_dieptxf2_r {
public:

/**
 * IN endpoint FIFO3 transmit RAM start address
 */
class ineptxsa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ineptxsa_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_dieptxf2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dieptxf2_r other) const -> fs_dieptxf2_r { return static_cast<fs_dieptxf2_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * IN endpoint TxFIFO depth
 */
class ineptxfd_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ineptxfd_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_dieptxf2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dieptxf2_r other) const -> fs_dieptxf2_r { return static_cast<fs_dieptxf2_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ineptxsa() const -> ineptxsa_f {return ineptxsa_f(static_cast<uint16_t>(m_value >> ineptxsa_f::Offset));}
	[[nodiscard]] constexpr auto ineptxfd() const -> ineptxfd_f {return ineptxfd_f(static_cast<uint16_t>(m_value >> ineptxfd_f::Offset));}

	constexpr fs_dieptxf2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_dieptxf2_r other) const -> fs_dieptxf2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_dieptxf2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 264;
	static constexpr uint32_t ResetValue = 0b10000000000000010000000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4)
 */
class fs_dieptxf3_r {
public:

/**
 * IN endpoint FIFO4 transmit RAM start address
 */
class ineptxsa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ineptxsa_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_dieptxf3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dieptxf3_r other) const -> fs_dieptxf3_r { return static_cast<fs_dieptxf3_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * IN endpoint TxFIFO depth
 */
class ineptxfd_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ineptxfd_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_dieptxf3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_dieptxf3_r other) const -> fs_dieptxf3_r { return static_cast<fs_dieptxf3_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ineptxsa() const -> ineptxsa_f {return ineptxsa_f(static_cast<uint16_t>(m_value >> ineptxsa_f::Offset));}
	[[nodiscard]] constexpr auto ineptxfd() const -> ineptxfd_f {return ineptxfd_f(static_cast<uint16_t>(m_value >> ineptxfd_f::Offset));}

	constexpr fs_dieptxf3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_dieptxf3_r other) const -> fs_dieptxf3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_dieptxf3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 268;
	static constexpr uint32_t ResetValue = 0b10000000000000010000000000;

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,fs_gotgctl_r> fs_gotgctl;
	Memory<uint32_t,fs_gotgint_r> fs_gotgint;
	Memory<uint32_t,fs_gahbcfg_r> fs_gahbcfg;
	ReadOnlyMemory<uint32_t,fs_gusbcfg_r> fs_gusbcfg;
	ReadOnlyMemory<uint32_t,fs_grstctl_r> fs_grstctl;
	ReadOnlyMemory<uint32_t,fs_gintsts_r> fs_gintsts;
	ReadOnlyMemory<uint32_t,fs_gintmsk_r> fs_gintmsk;
	union {
	ReadOnlyMemory<uint32_t,fs_grxstsr_device_r> fs_grxstsr_device;
	ReadOnlyMemory<uint32_t,fs_grxstsr_host_r> fs_grxstsr_host;
	};
	Padding<4> _p32;
	Memory<uint32_t,fs_grxfsiz_r> fs_grxfsiz;
	union {
	Memory<uint32_t,fs_gnptxfsiz_device_r> fs_gnptxfsiz_device;
	Memory<uint32_t,fs_gnptxfsiz_host_r> fs_gnptxfsiz_host;
	};
	ReadOnlyMemory<uint32_t,fs_gnptxsts_r> fs_gnptxsts;
	Padding<8> _p48;
	Memory<uint32_t,fs_gccfg_r> fs_gccfg;
	Memory<uint32_t,fs_cid_r> fs_cid;
	Padding<192> _p64;
	Memory<uint32_t,fs_hptxfsiz_r> fs_hptxfsiz;
	Memory<uint32_t,fs_dieptxf1_r> fs_dieptxf1;
	Memory<uint32_t,fs_dieptxf2_r> fs_dieptxf2;
	Memory<uint32_t,fs_dieptxf3_r> fs_dieptxf3;
};

static_assert(std::is_standard_layout_v<otg_fs_global_p>);
static_assert(offsetof(otg_fs_global_p, fs_gotgctl) == otg_fs_global_p::fs_gotgctl_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_gotgint) == otg_fs_global_p::fs_gotgint_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_gahbcfg) == otg_fs_global_p::fs_gahbcfg_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_gusbcfg) == otg_fs_global_p::fs_gusbcfg_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_grstctl) == otg_fs_global_p::fs_grstctl_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_gintsts) == otg_fs_global_p::fs_gintsts_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_gintmsk) == otg_fs_global_p::fs_gintmsk_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_grxstsr_device) == otg_fs_global_p::fs_grxstsr_device_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_grxstsr_host) == otg_fs_global_p::fs_grxstsr_host_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_grxfsiz) == otg_fs_global_p::fs_grxfsiz_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_gnptxfsiz_device) == otg_fs_global_p::fs_gnptxfsiz_device_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_gnptxfsiz_host) == otg_fs_global_p::fs_gnptxfsiz_host_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_gnptxsts) == otg_fs_global_p::fs_gnptxsts_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_gccfg) == otg_fs_global_p::fs_gccfg_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_cid) == otg_fs_global_p::fs_cid_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_hptxfsiz) == otg_fs_global_p::fs_hptxfsiz_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_dieptxf1) == otg_fs_global_p::fs_dieptxf1_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_dieptxf2) == otg_fs_global_p::fs_dieptxf2_r::Offset);
static_assert(offsetof(otg_fs_global_p, fs_dieptxf3) == otg_fs_global_p::fs_dieptxf3_r::Offset);

/**
 * USB on the go full speed
 */
class otg_fs_host_p {
public:
/**
 * OTG_FS host configuration register (OTG_FS_HCFG)
 */
class fs_hcfg_r {
public:

/**
 * FS/LS PHY clock select
 */
class fslspcs_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fslspcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcfg_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcfg_r other) const -> fs_hcfg_r { return static_cast<fs_hcfg_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * FS- and LS-only support
 */
class fslss_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fslss_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcfg_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcfg_r other) const -> fs_hcfg_r { return static_cast<fs_hcfg_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto fslspcs() const -> fslspcs_f {return fslspcs_f(static_cast<uint8_t>(m_value >> fslspcs_f::Offset));}
	[[nodiscard]] constexpr auto fslss() const -> fslss_f {return fslss_f((m_value & fslss_f::Mask) != 0);}

	constexpr fs_hcfg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcfg_r other) const -> fs_hcfg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcfg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS Host frame interval register
 */
class hfir_r {
public:

/**
 * Frame interval
 */
class frivl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr frivl_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator hfir_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(hfir_r other) const -> hfir_r { return static_cast<hfir_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto frivl() const -> frivl_f {return frivl_f(static_cast<uint16_t>(m_value >> frivl_f::Offset));}

	constexpr hfir_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(hfir_r other) const -> hfir_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> hfir_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0b1110101001100000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM)
 */
class fs_hfnum_r {
public:

/**
 * Frame number
 */
class frnum_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr frnum_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hfnum_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hfnum_r other) const -> fs_hfnum_r { return static_cast<fs_hfnum_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Frame time remaining
 */
class ftrem_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ftrem_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hfnum_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hfnum_r other) const -> fs_hfnum_r { return static_cast<fs_hfnum_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto frnum() const -> frnum_f {return frnum_f(static_cast<uint16_t>(m_value >> frnum_f::Offset));}
	[[nodiscard]] constexpr auto ftrem() const -> ftrem_f {return ftrem_f(static_cast<uint16_t>(m_value >> ftrem_f::Offset));}

	constexpr fs_hfnum_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hfnum_r other) const -> fs_hfnum_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hfnum_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b11111111111111;

private:
	uint32_t m_value;
};
/**
 * OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS)
 */
class fs_hptxsts_r {
public:

/**
 * Periodic transmit data FIFO space available
 */
class ptxfsavl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ptxfsavl_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hptxsts_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hptxsts_r other) const -> fs_hptxsts_r { return static_cast<fs_hptxsts_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Periodic transmit request queue space available
 */
class ptxqsav_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ptxqsav_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hptxsts_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hptxsts_r other) const -> fs_hptxsts_r { return static_cast<fs_hptxsts_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Top of the periodic transmit request queue
 */
class ptxqtop_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ptxqtop_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hptxsts_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hptxsts_r other) const -> fs_hptxsts_r { return static_cast<fs_hptxsts_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ptxfsavl() const -> ptxfsavl_f {return ptxfsavl_f(static_cast<uint16_t>(m_value >> ptxfsavl_f::Offset));}
	[[nodiscard]] constexpr auto ptxqsav() const -> ptxqsav_f {return ptxqsav_f(static_cast<uint8_t>(m_value >> ptxqsav_f::Offset));}
	[[nodiscard]] constexpr auto ptxqtop() const -> ptxqtop_f {return ptxqtop_f(static_cast<uint8_t>(m_value >> ptxqtop_f::Offset));}

	constexpr fs_hptxsts_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hptxsts_r other) const -> fs_hptxsts_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hptxsts_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0b10000000000100000000;

private:
	uint32_t m_value;
};
/**
 * OTG_FS Host all channels interrupt register
 */
class haint_r {
public:

/**
 * Channel interrupts
 */
class haint_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr haint_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator haint_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(haint_r other) const -> haint_r { return static_cast<haint_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto haint() const -> haint_f {return haint_f(static_cast<uint16_t>(m_value >> haint_f::Offset));}

	constexpr haint_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(haint_r other) const -> haint_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> haint_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host all channels interrupt mask register
 */
class haintmsk_r {
public:

/**
 * Channel interrupt mask
 */
class haintm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr haintm_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator haintmsk_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(haintmsk_r other) const -> haintmsk_r { return static_cast<haintmsk_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto haintm() const -> haintm_f {return haintm_f(static_cast<uint16_t>(m_value >> haintm_f::Offset));}

	constexpr haintmsk_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(haintmsk_r other) const -> haintmsk_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> haintmsk_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host port control and status register (OTG_FS_HPRT)
 */
class fs_hprt_r {
public:

/**
 * Port connect status
 */
class pcsts_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pcsts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hprt_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Port connect detected
 */
class pcdet_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pcdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hprt_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Port enable
 */
class pena_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hprt_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Port enable/disable change
 */
class penchng_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr penchng_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hprt_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Port overcurrent active
 */
class poca_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr poca_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hprt_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Port overcurrent change
 */
class pocchng_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pocchng_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hprt_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Port resume
 */
class pres_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pres_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hprt_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Port suspend
 */
class psusp_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr psusp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hprt_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Port reset
 */
class prst_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr prst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hprt_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Port line status
 */
class plsts_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr plsts_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hprt_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Port power
 */
class ppwr_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ppwr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hprt_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Port test control
 */
class ptctl_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ptctl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hprt_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Port speed
 */
class pspd_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pspd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hprt_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hprt_r other) const -> fs_hprt_r { return static_cast<fs_hprt_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pcsts() const -> pcsts_f {return pcsts_f((m_value & pcsts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pcdet() const -> pcdet_f {return pcdet_f((m_value & pcdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pena() const -> pena_f {return pena_f((m_value & pena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto penchng() const -> penchng_f {return penchng_f((m_value & penchng_f::Mask) != 0);}
	[[nodiscard]] constexpr auto poca() const -> poca_f {return poca_f((m_value & poca_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pocchng() const -> pocchng_f {return pocchng_f((m_value & pocchng_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pres() const -> pres_f {return pres_f((m_value & pres_f::Mask) != 0);}
	[[nodiscard]] constexpr auto psusp() const -> psusp_f {return psusp_f((m_value & psusp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto prst() const -> prst_f {return prst_f((m_value & prst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto plsts() const -> plsts_f {return plsts_f(static_cast<uint8_t>(m_value >> plsts_f::Offset));}
	[[nodiscard]] constexpr auto ppwr() const -> ppwr_f {return ppwr_f((m_value & ppwr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ptctl() const -> ptctl_f {return ptctl_f(static_cast<uint8_t>(m_value >> ptctl_f::Offset));}
	[[nodiscard]] constexpr auto pspd() const -> pspd_f {return pspd_f(static_cast<uint8_t>(m_value >> pspd_f::Offset));}

	constexpr fs_hprt_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hprt_r other) const -> fs_hprt_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hprt_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0)
 */
class fs_hcchar0_r {
public:

/**
 * Maximum packet size
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hcchar0_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar0_r other) const -> fs_hcchar0_r { return static_cast<fs_hcchar0_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Endpoint number
 */
class epnum_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr epnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar0_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar0_r other) const -> fs_hcchar0_r { return static_cast<fs_hcchar0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Endpoint direction
 */
class epdir_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr epdir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar0_r other) const -> fs_hcchar0_r { return static_cast<fs_hcchar0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Low-speed device
 */
class lsdev_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lsdev_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar0_r other) const -> fs_hcchar0_r { return static_cast<fs_hcchar0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint type
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar0_r other) const -> fs_hcchar0_r { return static_cast<fs_hcchar0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Multicount
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar0_r other) const -> fs_hcchar0_r { return static_cast<fs_hcchar0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Device address
 */
class dad_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dad_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar0_r other) const -> fs_hcchar0_r { return static_cast<fs_hcchar0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Odd frame
 */
class oddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar0_r other) const -> fs_hcchar0_r { return static_cast<fs_hcchar0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel disable
 */
class chdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar0_r other) const -> fs_hcchar0_r { return static_cast<fs_hcchar0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel enable
 */
class chena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar0_r other) const -> fs_hcchar0_r { return static_cast<fs_hcchar0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}
	[[nodiscard]] constexpr auto epnum() const -> epnum_f {return epnum_f(static_cast<uint8_t>(m_value >> epnum_f::Offset));}
	[[nodiscard]] constexpr auto epdir() const -> epdir_f {return epdir_f((m_value & epdir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsdev() const -> lsdev_f {return lsdev_f((m_value & lsdev_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto dad() const -> dad_f {return dad_f(static_cast<uint8_t>(m_value >> dad_f::Offset));}
	[[nodiscard]] constexpr auto oddfrm() const -> oddfrm_f {return oddfrm_f((m_value & oddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chdis() const -> chdis_f {return chdis_f((m_value & chdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chena() const -> chena_f {return chena_f((m_value & chena_f::Mask) != 0);}

	constexpr fs_hcchar0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcchar0_r other) const -> fs_hcchar0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcchar0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 256;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1)
 */
class fs_hcchar1_r {
public:

/**
 * Maximum packet size
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hcchar1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar1_r other) const -> fs_hcchar1_r { return static_cast<fs_hcchar1_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Endpoint number
 */
class epnum_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr epnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar1_r other) const -> fs_hcchar1_r { return static_cast<fs_hcchar1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Endpoint direction
 */
class epdir_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr epdir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar1_r other) const -> fs_hcchar1_r { return static_cast<fs_hcchar1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Low-speed device
 */
class lsdev_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lsdev_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar1_r other) const -> fs_hcchar1_r { return static_cast<fs_hcchar1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint type
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar1_r other) const -> fs_hcchar1_r { return static_cast<fs_hcchar1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Multicount
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar1_r other) const -> fs_hcchar1_r { return static_cast<fs_hcchar1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Device address
 */
class dad_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dad_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar1_r other) const -> fs_hcchar1_r { return static_cast<fs_hcchar1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Odd frame
 */
class oddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar1_r other) const -> fs_hcchar1_r { return static_cast<fs_hcchar1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel disable
 */
class chdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar1_r other) const -> fs_hcchar1_r { return static_cast<fs_hcchar1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel enable
 */
class chena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar1_r other) const -> fs_hcchar1_r { return static_cast<fs_hcchar1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}
	[[nodiscard]] constexpr auto epnum() const -> epnum_f {return epnum_f(static_cast<uint8_t>(m_value >> epnum_f::Offset));}
	[[nodiscard]] constexpr auto epdir() const -> epdir_f {return epdir_f((m_value & epdir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsdev() const -> lsdev_f {return lsdev_f((m_value & lsdev_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto dad() const -> dad_f {return dad_f(static_cast<uint8_t>(m_value >> dad_f::Offset));}
	[[nodiscard]] constexpr auto oddfrm() const -> oddfrm_f {return oddfrm_f((m_value & oddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chdis() const -> chdis_f {return chdis_f((m_value & chdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chena() const -> chena_f {return chena_f((m_value & chena_f::Mask) != 0);}

	constexpr fs_hcchar1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcchar1_r other) const -> fs_hcchar1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcchar1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 288;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2)
 */
class fs_hcchar2_r {
public:

/**
 * Maximum packet size
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hcchar2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar2_r other) const -> fs_hcchar2_r { return static_cast<fs_hcchar2_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Endpoint number
 */
class epnum_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr epnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar2_r other) const -> fs_hcchar2_r { return static_cast<fs_hcchar2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Endpoint direction
 */
class epdir_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr epdir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar2_r other) const -> fs_hcchar2_r { return static_cast<fs_hcchar2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Low-speed device
 */
class lsdev_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lsdev_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar2_r other) const -> fs_hcchar2_r { return static_cast<fs_hcchar2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint type
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar2_r other) const -> fs_hcchar2_r { return static_cast<fs_hcchar2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Multicount
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar2_r other) const -> fs_hcchar2_r { return static_cast<fs_hcchar2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Device address
 */
class dad_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dad_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar2_r other) const -> fs_hcchar2_r { return static_cast<fs_hcchar2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Odd frame
 */
class oddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar2_r other) const -> fs_hcchar2_r { return static_cast<fs_hcchar2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel disable
 */
class chdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar2_r other) const -> fs_hcchar2_r { return static_cast<fs_hcchar2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel enable
 */
class chena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar2_r other) const -> fs_hcchar2_r { return static_cast<fs_hcchar2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}
	[[nodiscard]] constexpr auto epnum() const -> epnum_f {return epnum_f(static_cast<uint8_t>(m_value >> epnum_f::Offset));}
	[[nodiscard]] constexpr auto epdir() const -> epdir_f {return epdir_f((m_value & epdir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsdev() const -> lsdev_f {return lsdev_f((m_value & lsdev_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto dad() const -> dad_f {return dad_f(static_cast<uint8_t>(m_value >> dad_f::Offset));}
	[[nodiscard]] constexpr auto oddfrm() const -> oddfrm_f {return oddfrm_f((m_value & oddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chdis() const -> chdis_f {return chdis_f((m_value & chdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chena() const -> chena_f {return chena_f((m_value & chena_f::Mask) != 0);}

	constexpr fs_hcchar2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcchar2_r other) const -> fs_hcchar2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcchar2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 320;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3)
 */
class fs_hcchar3_r {
public:

/**
 * Maximum packet size
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hcchar3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar3_r other) const -> fs_hcchar3_r { return static_cast<fs_hcchar3_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Endpoint number
 */
class epnum_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr epnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar3_r other) const -> fs_hcchar3_r { return static_cast<fs_hcchar3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Endpoint direction
 */
class epdir_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr epdir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar3_r other) const -> fs_hcchar3_r { return static_cast<fs_hcchar3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Low-speed device
 */
class lsdev_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lsdev_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar3_r other) const -> fs_hcchar3_r { return static_cast<fs_hcchar3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint type
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar3_r other) const -> fs_hcchar3_r { return static_cast<fs_hcchar3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Multicount
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar3_r other) const -> fs_hcchar3_r { return static_cast<fs_hcchar3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Device address
 */
class dad_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dad_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar3_r other) const -> fs_hcchar3_r { return static_cast<fs_hcchar3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Odd frame
 */
class oddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar3_r other) const -> fs_hcchar3_r { return static_cast<fs_hcchar3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel disable
 */
class chdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar3_r other) const -> fs_hcchar3_r { return static_cast<fs_hcchar3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel enable
 */
class chena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar3_r other) const -> fs_hcchar3_r { return static_cast<fs_hcchar3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}
	[[nodiscard]] constexpr auto epnum() const -> epnum_f {return epnum_f(static_cast<uint8_t>(m_value >> epnum_f::Offset));}
	[[nodiscard]] constexpr auto epdir() const -> epdir_f {return epdir_f((m_value & epdir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsdev() const -> lsdev_f {return lsdev_f((m_value & lsdev_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto dad() const -> dad_f {return dad_f(static_cast<uint8_t>(m_value >> dad_f::Offset));}
	[[nodiscard]] constexpr auto oddfrm() const -> oddfrm_f {return oddfrm_f((m_value & oddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chdis() const -> chdis_f {return chdis_f((m_value & chdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chena() const -> chena_f {return chena_f((m_value & chena_f::Mask) != 0);}

	constexpr fs_hcchar3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcchar3_r other) const -> fs_hcchar3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcchar3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 352;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4)
 */
class fs_hcchar4_r {
public:

/**
 * Maximum packet size
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hcchar4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar4_r other) const -> fs_hcchar4_r { return static_cast<fs_hcchar4_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Endpoint number
 */
class epnum_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr epnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar4_r other) const -> fs_hcchar4_r { return static_cast<fs_hcchar4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Endpoint direction
 */
class epdir_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr epdir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar4_r other) const -> fs_hcchar4_r { return static_cast<fs_hcchar4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Low-speed device
 */
class lsdev_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lsdev_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar4_r other) const -> fs_hcchar4_r { return static_cast<fs_hcchar4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint type
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar4_r other) const -> fs_hcchar4_r { return static_cast<fs_hcchar4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Multicount
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar4_r other) const -> fs_hcchar4_r { return static_cast<fs_hcchar4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Device address
 */
class dad_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dad_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar4_r other) const -> fs_hcchar4_r { return static_cast<fs_hcchar4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Odd frame
 */
class oddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar4_r other) const -> fs_hcchar4_r { return static_cast<fs_hcchar4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel disable
 */
class chdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar4_r other) const -> fs_hcchar4_r { return static_cast<fs_hcchar4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel enable
 */
class chena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar4_r other) const -> fs_hcchar4_r { return static_cast<fs_hcchar4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}
	[[nodiscard]] constexpr auto epnum() const -> epnum_f {return epnum_f(static_cast<uint8_t>(m_value >> epnum_f::Offset));}
	[[nodiscard]] constexpr auto epdir() const -> epdir_f {return epdir_f((m_value & epdir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsdev() const -> lsdev_f {return lsdev_f((m_value & lsdev_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto dad() const -> dad_f {return dad_f(static_cast<uint8_t>(m_value >> dad_f::Offset));}
	[[nodiscard]] constexpr auto oddfrm() const -> oddfrm_f {return oddfrm_f((m_value & oddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chdis() const -> chdis_f {return chdis_f((m_value & chdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chena() const -> chena_f {return chena_f((m_value & chena_f::Mask) != 0);}

	constexpr fs_hcchar4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcchar4_r other) const -> fs_hcchar4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcchar4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 384;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5)
 */
class fs_hcchar5_r {
public:

/**
 * Maximum packet size
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hcchar5_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar5_r other) const -> fs_hcchar5_r { return static_cast<fs_hcchar5_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Endpoint number
 */
class epnum_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr epnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar5_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar5_r other) const -> fs_hcchar5_r { return static_cast<fs_hcchar5_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Endpoint direction
 */
class epdir_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr epdir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar5_r other) const -> fs_hcchar5_r { return static_cast<fs_hcchar5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Low-speed device
 */
class lsdev_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lsdev_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar5_r other) const -> fs_hcchar5_r { return static_cast<fs_hcchar5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint type
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar5_r other) const -> fs_hcchar5_r { return static_cast<fs_hcchar5_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Multicount
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar5_r other) const -> fs_hcchar5_r { return static_cast<fs_hcchar5_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Device address
 */
class dad_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dad_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar5_r other) const -> fs_hcchar5_r { return static_cast<fs_hcchar5_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Odd frame
 */
class oddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar5_r other) const -> fs_hcchar5_r { return static_cast<fs_hcchar5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel disable
 */
class chdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar5_r other) const -> fs_hcchar5_r { return static_cast<fs_hcchar5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel enable
 */
class chena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar5_r other) const -> fs_hcchar5_r { return static_cast<fs_hcchar5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}
	[[nodiscard]] constexpr auto epnum() const -> epnum_f {return epnum_f(static_cast<uint8_t>(m_value >> epnum_f::Offset));}
	[[nodiscard]] constexpr auto epdir() const -> epdir_f {return epdir_f((m_value & epdir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsdev() const -> lsdev_f {return lsdev_f((m_value & lsdev_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto dad() const -> dad_f {return dad_f(static_cast<uint8_t>(m_value >> dad_f::Offset));}
	[[nodiscard]] constexpr auto oddfrm() const -> oddfrm_f {return oddfrm_f((m_value & oddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chdis() const -> chdis_f {return chdis_f((m_value & chdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chena() const -> chena_f {return chena_f((m_value & chena_f::Mask) != 0);}

	constexpr fs_hcchar5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcchar5_r other) const -> fs_hcchar5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcchar5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 416;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6)
 */
class fs_hcchar6_r {
public:

/**
 * Maximum packet size
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hcchar6_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar6_r other) const -> fs_hcchar6_r { return static_cast<fs_hcchar6_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Endpoint number
 */
class epnum_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr epnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar6_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar6_r other) const -> fs_hcchar6_r { return static_cast<fs_hcchar6_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Endpoint direction
 */
class epdir_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr epdir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar6_r other) const -> fs_hcchar6_r { return static_cast<fs_hcchar6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Low-speed device
 */
class lsdev_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lsdev_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar6_r other) const -> fs_hcchar6_r { return static_cast<fs_hcchar6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint type
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar6_r other) const -> fs_hcchar6_r { return static_cast<fs_hcchar6_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Multicount
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar6_r other) const -> fs_hcchar6_r { return static_cast<fs_hcchar6_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Device address
 */
class dad_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dad_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar6_r other) const -> fs_hcchar6_r { return static_cast<fs_hcchar6_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Odd frame
 */
class oddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar6_r other) const -> fs_hcchar6_r { return static_cast<fs_hcchar6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel disable
 */
class chdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar6_r other) const -> fs_hcchar6_r { return static_cast<fs_hcchar6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel enable
 */
class chena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar6_r other) const -> fs_hcchar6_r { return static_cast<fs_hcchar6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}
	[[nodiscard]] constexpr auto epnum() const -> epnum_f {return epnum_f(static_cast<uint8_t>(m_value >> epnum_f::Offset));}
	[[nodiscard]] constexpr auto epdir() const -> epdir_f {return epdir_f((m_value & epdir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsdev() const -> lsdev_f {return lsdev_f((m_value & lsdev_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto dad() const -> dad_f {return dad_f(static_cast<uint8_t>(m_value >> dad_f::Offset));}
	[[nodiscard]] constexpr auto oddfrm() const -> oddfrm_f {return oddfrm_f((m_value & oddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chdis() const -> chdis_f {return chdis_f((m_value & chdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chena() const -> chena_f {return chena_f((m_value & chena_f::Mask) != 0);}

	constexpr fs_hcchar6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcchar6_r other) const -> fs_hcchar6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcchar6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 448;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7)
 */
class fs_hcchar7_r {
public:

/**
 * Maximum packet size
 */
class mpsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mpsiz_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hcchar7_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar7_r other) const -> fs_hcchar7_r { return static_cast<fs_hcchar7_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Endpoint number
 */
class epnum_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr epnum_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar7_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar7_r other) const -> fs_hcchar7_r { return static_cast<fs_hcchar7_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Endpoint direction
 */
class epdir_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr epdir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar7_r other) const -> fs_hcchar7_r { return static_cast<fs_hcchar7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Low-speed device
 */
class lsdev_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lsdev_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar7_r other) const -> fs_hcchar7_r { return static_cast<fs_hcchar7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Endpoint type
 */
class eptyp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eptyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar7_r other) const -> fs_hcchar7_r { return static_cast<fs_hcchar7_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Multicount
 */
class mcnt_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar7_r other) const -> fs_hcchar7_r { return static_cast<fs_hcchar7_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Device address
 */
class dad_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dad_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hcchar7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hcchar7_r other) const -> fs_hcchar7_r { return static_cast<fs_hcchar7_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Odd frame
 */
class oddfrm_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oddfrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar7_r other) const -> fs_hcchar7_r { return static_cast<fs_hcchar7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel disable
 */
class chdis_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar7_r other) const -> fs_hcchar7_r { return static_cast<fs_hcchar7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel enable
 */
class chena_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcchar7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcchar7_r other) const -> fs_hcchar7_r { return static_cast<fs_hcchar7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mpsiz() const -> mpsiz_f {return mpsiz_f(static_cast<uint16_t>(m_value >> mpsiz_f::Offset));}
	[[nodiscard]] constexpr auto epnum() const -> epnum_f {return epnum_f(static_cast<uint8_t>(m_value >> epnum_f::Offset));}
	[[nodiscard]] constexpr auto epdir() const -> epdir_f {return epdir_f((m_value & epdir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsdev() const -> lsdev_f {return lsdev_f((m_value & lsdev_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eptyp() const -> eptyp_f {return eptyp_f(static_cast<uint8_t>(m_value >> eptyp_f::Offset));}
	[[nodiscard]] constexpr auto mcnt() const -> mcnt_f {return mcnt_f(static_cast<uint8_t>(m_value >> mcnt_f::Offset));}
	[[nodiscard]] constexpr auto dad() const -> dad_f {return dad_f(static_cast<uint8_t>(m_value >> dad_f::Offset));}
	[[nodiscard]] constexpr auto oddfrm() const -> oddfrm_f {return oddfrm_f((m_value & oddfrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chdis() const -> chdis_f {return chdis_f((m_value & chdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chena() const -> chena_f {return chena_f((m_value & chena_f::Mask) != 0);}

	constexpr fs_hcchar7_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcchar7_r other) const -> fs_hcchar7_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcchar7_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 480;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0)
 */
class fs_hcint0_r {
public:

/**
 * Transfer completed
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint0_r other) const -> fs_hcint0_r { return static_cast<fs_hcint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted
 */
class chh_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chh_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint0_r other) const -> fs_hcint0_r { return static_cast<fs_hcint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint0_r other) const -> fs_hcint0_r { return static_cast<fs_hcint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt
 */
class nak_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint0_r other) const -> fs_hcint0_r { return static_cast<fs_hcint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint0_r other) const -> fs_hcint0_r { return static_cast<fs_hcint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error
 */
class txerr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint0_r other) const -> fs_hcint0_r { return static_cast<fs_hcint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error
 */
class bberr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint0_r other) const -> fs_hcint0_r { return static_cast<fs_hcint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun
 */
class frmor_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmor_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint0_r other) const -> fs_hcint0_r { return static_cast<fs_hcint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error
 */
class dterr_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint0_r other) const -> fs_hcint0_r { return static_cast<fs_hcint0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chh() const -> chh_f {return chh_f((m_value & chh_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nak() const -> nak_f {return nak_f((m_value & nak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerr() const -> txerr_f {return txerr_f((m_value & txerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberr() const -> bberr_f {return bberr_f((m_value & bberr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmor() const -> frmor_f {return frmor_f((m_value & frmor_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterr() const -> dterr_f {return dterr_f((m_value & dterr_f::Mask) != 0);}

	constexpr fs_hcint0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcint0_r other) const -> fs_hcint0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcint0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 264;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1)
 */
class fs_hcint1_r {
public:

/**
 * Transfer completed
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint1_r other) const -> fs_hcint1_r { return static_cast<fs_hcint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted
 */
class chh_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chh_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint1_r other) const -> fs_hcint1_r { return static_cast<fs_hcint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint1_r other) const -> fs_hcint1_r { return static_cast<fs_hcint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt
 */
class nak_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint1_r other) const -> fs_hcint1_r { return static_cast<fs_hcint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint1_r other) const -> fs_hcint1_r { return static_cast<fs_hcint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error
 */
class txerr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint1_r other) const -> fs_hcint1_r { return static_cast<fs_hcint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error
 */
class bberr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint1_r other) const -> fs_hcint1_r { return static_cast<fs_hcint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun
 */
class frmor_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmor_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint1_r other) const -> fs_hcint1_r { return static_cast<fs_hcint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error
 */
class dterr_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint1_r other) const -> fs_hcint1_r { return static_cast<fs_hcint1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chh() const -> chh_f {return chh_f((m_value & chh_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nak() const -> nak_f {return nak_f((m_value & nak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerr() const -> txerr_f {return txerr_f((m_value & txerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberr() const -> bberr_f {return bberr_f((m_value & bberr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmor() const -> frmor_f {return frmor_f((m_value & frmor_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterr() const -> dterr_f {return dterr_f((m_value & dterr_f::Mask) != 0);}

	constexpr fs_hcint1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcint1_r other) const -> fs_hcint1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcint1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 296;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2)
 */
class fs_hcint2_r {
public:

/**
 * Transfer completed
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint2_r other) const -> fs_hcint2_r { return static_cast<fs_hcint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted
 */
class chh_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chh_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint2_r other) const -> fs_hcint2_r { return static_cast<fs_hcint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint2_r other) const -> fs_hcint2_r { return static_cast<fs_hcint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt
 */
class nak_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint2_r other) const -> fs_hcint2_r { return static_cast<fs_hcint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint2_r other) const -> fs_hcint2_r { return static_cast<fs_hcint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error
 */
class txerr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint2_r other) const -> fs_hcint2_r { return static_cast<fs_hcint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error
 */
class bberr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint2_r other) const -> fs_hcint2_r { return static_cast<fs_hcint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun
 */
class frmor_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmor_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint2_r other) const -> fs_hcint2_r { return static_cast<fs_hcint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error
 */
class dterr_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint2_r other) const -> fs_hcint2_r { return static_cast<fs_hcint2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chh() const -> chh_f {return chh_f((m_value & chh_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nak() const -> nak_f {return nak_f((m_value & nak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerr() const -> txerr_f {return txerr_f((m_value & txerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberr() const -> bberr_f {return bberr_f((m_value & bberr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmor() const -> frmor_f {return frmor_f((m_value & frmor_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterr() const -> dterr_f {return dterr_f((m_value & dterr_f::Mask) != 0);}

	constexpr fs_hcint2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcint2_r other) const -> fs_hcint2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcint2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 328;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3)
 */
class fs_hcint3_r {
public:

/**
 * Transfer completed
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint3_r other) const -> fs_hcint3_r { return static_cast<fs_hcint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted
 */
class chh_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chh_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint3_r other) const -> fs_hcint3_r { return static_cast<fs_hcint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint3_r other) const -> fs_hcint3_r { return static_cast<fs_hcint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt
 */
class nak_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint3_r other) const -> fs_hcint3_r { return static_cast<fs_hcint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint3_r other) const -> fs_hcint3_r { return static_cast<fs_hcint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error
 */
class txerr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint3_r other) const -> fs_hcint3_r { return static_cast<fs_hcint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error
 */
class bberr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint3_r other) const -> fs_hcint3_r { return static_cast<fs_hcint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun
 */
class frmor_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmor_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint3_r other) const -> fs_hcint3_r { return static_cast<fs_hcint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error
 */
class dterr_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint3_r other) const -> fs_hcint3_r { return static_cast<fs_hcint3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chh() const -> chh_f {return chh_f((m_value & chh_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nak() const -> nak_f {return nak_f((m_value & nak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerr() const -> txerr_f {return txerr_f((m_value & txerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberr() const -> bberr_f {return bberr_f((m_value & bberr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmor() const -> frmor_f {return frmor_f((m_value & frmor_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterr() const -> dterr_f {return dterr_f((m_value & dterr_f::Mask) != 0);}

	constexpr fs_hcint3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcint3_r other) const -> fs_hcint3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcint3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 360;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4)
 */
class fs_hcint4_r {
public:

/**
 * Transfer completed
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint4_r other) const -> fs_hcint4_r { return static_cast<fs_hcint4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted
 */
class chh_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chh_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint4_r other) const -> fs_hcint4_r { return static_cast<fs_hcint4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint4_r other) const -> fs_hcint4_r { return static_cast<fs_hcint4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt
 */
class nak_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint4_r other) const -> fs_hcint4_r { return static_cast<fs_hcint4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint4_r other) const -> fs_hcint4_r { return static_cast<fs_hcint4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error
 */
class txerr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint4_r other) const -> fs_hcint4_r { return static_cast<fs_hcint4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error
 */
class bberr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint4_r other) const -> fs_hcint4_r { return static_cast<fs_hcint4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun
 */
class frmor_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmor_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint4_r other) const -> fs_hcint4_r { return static_cast<fs_hcint4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error
 */
class dterr_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint4_r other) const -> fs_hcint4_r { return static_cast<fs_hcint4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chh() const -> chh_f {return chh_f((m_value & chh_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nak() const -> nak_f {return nak_f((m_value & nak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerr() const -> txerr_f {return txerr_f((m_value & txerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberr() const -> bberr_f {return bberr_f((m_value & bberr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmor() const -> frmor_f {return frmor_f((m_value & frmor_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterr() const -> dterr_f {return dterr_f((m_value & dterr_f::Mask) != 0);}

	constexpr fs_hcint4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcint4_r other) const -> fs_hcint4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcint4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 392;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5)
 */
class fs_hcint5_r {
public:

/**
 * Transfer completed
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint5_r other) const -> fs_hcint5_r { return static_cast<fs_hcint5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted
 */
class chh_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chh_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint5_r other) const -> fs_hcint5_r { return static_cast<fs_hcint5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint5_r other) const -> fs_hcint5_r { return static_cast<fs_hcint5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt
 */
class nak_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint5_r other) const -> fs_hcint5_r { return static_cast<fs_hcint5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint5_r other) const -> fs_hcint5_r { return static_cast<fs_hcint5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error
 */
class txerr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint5_r other) const -> fs_hcint5_r { return static_cast<fs_hcint5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error
 */
class bberr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint5_r other) const -> fs_hcint5_r { return static_cast<fs_hcint5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun
 */
class frmor_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmor_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint5_r other) const -> fs_hcint5_r { return static_cast<fs_hcint5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error
 */
class dterr_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint5_r other) const -> fs_hcint5_r { return static_cast<fs_hcint5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chh() const -> chh_f {return chh_f((m_value & chh_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nak() const -> nak_f {return nak_f((m_value & nak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerr() const -> txerr_f {return txerr_f((m_value & txerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberr() const -> bberr_f {return bberr_f((m_value & bberr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmor() const -> frmor_f {return frmor_f((m_value & frmor_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterr() const -> dterr_f {return dterr_f((m_value & dterr_f::Mask) != 0);}

	constexpr fs_hcint5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcint5_r other) const -> fs_hcint5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcint5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 424;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6)
 */
class fs_hcint6_r {
public:

/**
 * Transfer completed
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint6_r other) const -> fs_hcint6_r { return static_cast<fs_hcint6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted
 */
class chh_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chh_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint6_r other) const -> fs_hcint6_r { return static_cast<fs_hcint6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint6_r other) const -> fs_hcint6_r { return static_cast<fs_hcint6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt
 */
class nak_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint6_r other) const -> fs_hcint6_r { return static_cast<fs_hcint6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint6_r other) const -> fs_hcint6_r { return static_cast<fs_hcint6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error
 */
class txerr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint6_r other) const -> fs_hcint6_r { return static_cast<fs_hcint6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error
 */
class bberr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint6_r other) const -> fs_hcint6_r { return static_cast<fs_hcint6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun
 */
class frmor_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmor_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint6_r other) const -> fs_hcint6_r { return static_cast<fs_hcint6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error
 */
class dterr_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint6_r other) const -> fs_hcint6_r { return static_cast<fs_hcint6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chh() const -> chh_f {return chh_f((m_value & chh_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nak() const -> nak_f {return nak_f((m_value & nak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerr() const -> txerr_f {return txerr_f((m_value & txerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberr() const -> bberr_f {return bberr_f((m_value & bberr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmor() const -> frmor_f {return frmor_f((m_value & frmor_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterr() const -> dterr_f {return dterr_f((m_value & dterr_f::Mask) != 0);}

	constexpr fs_hcint6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcint6_r other) const -> fs_hcint6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcint6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 456;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7)
 */
class fs_hcint7_r {
public:

/**
 * Transfer completed
 */
class xfrc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint7_r other) const -> fs_hcint7_r { return static_cast<fs_hcint7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted
 */
class chh_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chh_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint7_r other) const -> fs_hcint7_r { return static_cast<fs_hcint7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt
 */
class stall_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stall_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint7_r other) const -> fs_hcint7_r { return static_cast<fs_hcint7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt
 */
class nak_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nak_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint7_r other) const -> fs_hcint7_r { return static_cast<fs_hcint7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint7_r other) const -> fs_hcint7_r { return static_cast<fs_hcint7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error
 */
class txerr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint7_r other) const -> fs_hcint7_r { return static_cast<fs_hcint7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error
 */
class bberr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint7_r other) const -> fs_hcint7_r { return static_cast<fs_hcint7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun
 */
class frmor_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmor_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint7_r other) const -> fs_hcint7_r { return static_cast<fs_hcint7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error
 */
class dterr_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcint7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcint7_r other) const -> fs_hcint7_r { return static_cast<fs_hcint7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrc() const -> xfrc_f {return xfrc_f((m_value & xfrc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chh() const -> chh_f {return chh_f((m_value & chh_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stall() const -> stall_f {return stall_f((m_value & stall_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nak() const -> nak_f {return nak_f((m_value & nak_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerr() const -> txerr_f {return txerr_f((m_value & txerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberr() const -> bberr_f {return bberr_f((m_value & bberr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmor() const -> frmor_f {return frmor_f((m_value & frmor_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterr() const -> dterr_f {return dterr_f((m_value & dterr_f::Mask) != 0);}

	constexpr fs_hcint7_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcint7_r other) const -> fs_hcint7_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcint7_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 488;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0)
 */
class fs_hcintmsk0_r {
public:

/**
 * Transfer completed mask
 */
class xfrcm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrcm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return static_cast<fs_hcintmsk0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted mask
 */
class chhm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chhm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return static_cast<fs_hcintmsk0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt mask
 */
class stallm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stallm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return static_cast<fs_hcintmsk0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt mask
 */
class nakm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nakm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return static_cast<fs_hcintmsk0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt mask
 */
class ackm_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ackm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return static_cast<fs_hcintmsk0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * response received interrupt mask
 */
class nyet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nyet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return static_cast<fs_hcintmsk0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error mask
 */
class txerrm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return static_cast<fs_hcintmsk0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error mask
 */
class bberrm_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return static_cast<fs_hcintmsk0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun mask
 */
class frmorm_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmorm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return static_cast<fs_hcintmsk0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error mask
 */
class dterrm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk0_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return static_cast<fs_hcintmsk0_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrcm() const -> xfrcm_f {return xfrcm_f((m_value & xfrcm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chhm() const -> chhm_f {return chhm_f((m_value & chhm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stallm() const -> stallm_f {return stallm_f((m_value & stallm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nakm() const -> nakm_f {return nakm_f((m_value & nakm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ackm() const -> ackm_f {return ackm_f((m_value & ackm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nyet() const -> nyet_f {return nyet_f((m_value & nyet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerrm() const -> txerrm_f {return txerrm_f((m_value & txerrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberrm() const -> bberrm_f {return bberrm_f((m_value & bberrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmorm() const -> frmorm_f {return frmorm_f((m_value & frmorm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterrm() const -> dterrm_f {return dterrm_f((m_value & dterrm_f::Mask) != 0);}

	constexpr fs_hcintmsk0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcintmsk0_r other) const -> fs_hcintmsk0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcintmsk0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 268;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1)
 */
class fs_hcintmsk1_r {
public:

/**
 * Transfer completed mask
 */
class xfrcm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrcm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return static_cast<fs_hcintmsk1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted mask
 */
class chhm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chhm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return static_cast<fs_hcintmsk1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt mask
 */
class stallm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stallm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return static_cast<fs_hcintmsk1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt mask
 */
class nakm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nakm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return static_cast<fs_hcintmsk1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt mask
 */
class ackm_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ackm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return static_cast<fs_hcintmsk1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * response received interrupt mask
 */
class nyet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nyet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return static_cast<fs_hcintmsk1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error mask
 */
class txerrm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return static_cast<fs_hcintmsk1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error mask
 */
class bberrm_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return static_cast<fs_hcintmsk1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun mask
 */
class frmorm_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmorm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return static_cast<fs_hcintmsk1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error mask
 */
class dterrm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk1_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return static_cast<fs_hcintmsk1_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrcm() const -> xfrcm_f {return xfrcm_f((m_value & xfrcm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chhm() const -> chhm_f {return chhm_f((m_value & chhm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stallm() const -> stallm_f {return stallm_f((m_value & stallm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nakm() const -> nakm_f {return nakm_f((m_value & nakm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ackm() const -> ackm_f {return ackm_f((m_value & ackm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nyet() const -> nyet_f {return nyet_f((m_value & nyet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerrm() const -> txerrm_f {return txerrm_f((m_value & txerrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberrm() const -> bberrm_f {return bberrm_f((m_value & bberrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmorm() const -> frmorm_f {return frmorm_f((m_value & frmorm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterrm() const -> dterrm_f {return dterrm_f((m_value & dterrm_f::Mask) != 0);}

	constexpr fs_hcintmsk1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcintmsk1_r other) const -> fs_hcintmsk1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcintmsk1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 300;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2)
 */
class fs_hcintmsk2_r {
public:

/**
 * Transfer completed mask
 */
class xfrcm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrcm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return static_cast<fs_hcintmsk2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted mask
 */
class chhm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chhm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return static_cast<fs_hcintmsk2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt mask
 */
class stallm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stallm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return static_cast<fs_hcintmsk2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt mask
 */
class nakm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nakm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return static_cast<fs_hcintmsk2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt mask
 */
class ackm_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ackm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return static_cast<fs_hcintmsk2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * response received interrupt mask
 */
class nyet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nyet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return static_cast<fs_hcintmsk2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error mask
 */
class txerrm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return static_cast<fs_hcintmsk2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error mask
 */
class bberrm_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return static_cast<fs_hcintmsk2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun mask
 */
class frmorm_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmorm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return static_cast<fs_hcintmsk2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error mask
 */
class dterrm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk2_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return static_cast<fs_hcintmsk2_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrcm() const -> xfrcm_f {return xfrcm_f((m_value & xfrcm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chhm() const -> chhm_f {return chhm_f((m_value & chhm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stallm() const -> stallm_f {return stallm_f((m_value & stallm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nakm() const -> nakm_f {return nakm_f((m_value & nakm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ackm() const -> ackm_f {return ackm_f((m_value & ackm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nyet() const -> nyet_f {return nyet_f((m_value & nyet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerrm() const -> txerrm_f {return txerrm_f((m_value & txerrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberrm() const -> bberrm_f {return bberrm_f((m_value & bberrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmorm() const -> frmorm_f {return frmorm_f((m_value & frmorm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterrm() const -> dterrm_f {return dterrm_f((m_value & dterrm_f::Mask) != 0);}

	constexpr fs_hcintmsk2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcintmsk2_r other) const -> fs_hcintmsk2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcintmsk2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 332;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3)
 */
class fs_hcintmsk3_r {
public:

/**
 * Transfer completed mask
 */
class xfrcm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrcm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return static_cast<fs_hcintmsk3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted mask
 */
class chhm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chhm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return static_cast<fs_hcintmsk3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt mask
 */
class stallm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stallm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return static_cast<fs_hcintmsk3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt mask
 */
class nakm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nakm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return static_cast<fs_hcintmsk3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt mask
 */
class ackm_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ackm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return static_cast<fs_hcintmsk3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * response received interrupt mask
 */
class nyet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nyet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return static_cast<fs_hcintmsk3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error mask
 */
class txerrm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return static_cast<fs_hcintmsk3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error mask
 */
class bberrm_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return static_cast<fs_hcintmsk3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun mask
 */
class frmorm_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmorm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return static_cast<fs_hcintmsk3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error mask
 */
class dterrm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk3_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return static_cast<fs_hcintmsk3_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrcm() const -> xfrcm_f {return xfrcm_f((m_value & xfrcm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chhm() const -> chhm_f {return chhm_f((m_value & chhm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stallm() const -> stallm_f {return stallm_f((m_value & stallm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nakm() const -> nakm_f {return nakm_f((m_value & nakm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ackm() const -> ackm_f {return ackm_f((m_value & ackm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nyet() const -> nyet_f {return nyet_f((m_value & nyet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerrm() const -> txerrm_f {return txerrm_f((m_value & txerrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberrm() const -> bberrm_f {return bberrm_f((m_value & bberrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmorm() const -> frmorm_f {return frmorm_f((m_value & frmorm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterrm() const -> dterrm_f {return dterrm_f((m_value & dterrm_f::Mask) != 0);}

	constexpr fs_hcintmsk3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcintmsk3_r other) const -> fs_hcintmsk3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcintmsk3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 364;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4)
 */
class fs_hcintmsk4_r {
public:

/**
 * Transfer completed mask
 */
class xfrcm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrcm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return static_cast<fs_hcintmsk4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted mask
 */
class chhm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chhm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return static_cast<fs_hcintmsk4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt mask
 */
class stallm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stallm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return static_cast<fs_hcintmsk4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt mask
 */
class nakm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nakm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return static_cast<fs_hcintmsk4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt mask
 */
class ackm_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ackm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return static_cast<fs_hcintmsk4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * response received interrupt mask
 */
class nyet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nyet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return static_cast<fs_hcintmsk4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error mask
 */
class txerrm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return static_cast<fs_hcintmsk4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error mask
 */
class bberrm_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return static_cast<fs_hcintmsk4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun mask
 */
class frmorm_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmorm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return static_cast<fs_hcintmsk4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error mask
 */
class dterrm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk4_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return static_cast<fs_hcintmsk4_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrcm() const -> xfrcm_f {return xfrcm_f((m_value & xfrcm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chhm() const -> chhm_f {return chhm_f((m_value & chhm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stallm() const -> stallm_f {return stallm_f((m_value & stallm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nakm() const -> nakm_f {return nakm_f((m_value & nakm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ackm() const -> ackm_f {return ackm_f((m_value & ackm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nyet() const -> nyet_f {return nyet_f((m_value & nyet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerrm() const -> txerrm_f {return txerrm_f((m_value & txerrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberrm() const -> bberrm_f {return bberrm_f((m_value & bberrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmorm() const -> frmorm_f {return frmorm_f((m_value & frmorm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterrm() const -> dterrm_f {return dterrm_f((m_value & dterrm_f::Mask) != 0);}

	constexpr fs_hcintmsk4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcintmsk4_r other) const -> fs_hcintmsk4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcintmsk4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 396;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5)
 */
class fs_hcintmsk5_r {
public:

/**
 * Transfer completed mask
 */
class xfrcm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrcm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return static_cast<fs_hcintmsk5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted mask
 */
class chhm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chhm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return static_cast<fs_hcintmsk5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt mask
 */
class stallm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stallm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return static_cast<fs_hcintmsk5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt mask
 */
class nakm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nakm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return static_cast<fs_hcintmsk5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt mask
 */
class ackm_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ackm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return static_cast<fs_hcintmsk5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * response received interrupt mask
 */
class nyet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nyet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return static_cast<fs_hcintmsk5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error mask
 */
class txerrm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return static_cast<fs_hcintmsk5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error mask
 */
class bberrm_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return static_cast<fs_hcintmsk5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun mask
 */
class frmorm_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmorm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return static_cast<fs_hcintmsk5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error mask
 */
class dterrm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk5_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return static_cast<fs_hcintmsk5_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrcm() const -> xfrcm_f {return xfrcm_f((m_value & xfrcm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chhm() const -> chhm_f {return chhm_f((m_value & chhm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stallm() const -> stallm_f {return stallm_f((m_value & stallm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nakm() const -> nakm_f {return nakm_f((m_value & nakm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ackm() const -> ackm_f {return ackm_f((m_value & ackm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nyet() const -> nyet_f {return nyet_f((m_value & nyet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerrm() const -> txerrm_f {return txerrm_f((m_value & txerrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberrm() const -> bberrm_f {return bberrm_f((m_value & bberrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmorm() const -> frmorm_f {return frmorm_f((m_value & frmorm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterrm() const -> dterrm_f {return dterrm_f((m_value & dterrm_f::Mask) != 0);}

	constexpr fs_hcintmsk5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcintmsk5_r other) const -> fs_hcintmsk5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcintmsk5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 428;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6)
 */
class fs_hcintmsk6_r {
public:

/**
 * Transfer completed mask
 */
class xfrcm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrcm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return static_cast<fs_hcintmsk6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted mask
 */
class chhm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chhm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return static_cast<fs_hcintmsk6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt mask
 */
class stallm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stallm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return static_cast<fs_hcintmsk6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt mask
 */
class nakm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nakm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return static_cast<fs_hcintmsk6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt mask
 */
class ackm_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ackm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return static_cast<fs_hcintmsk6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * response received interrupt mask
 */
class nyet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nyet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return static_cast<fs_hcintmsk6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error mask
 */
class txerrm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return static_cast<fs_hcintmsk6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error mask
 */
class bberrm_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return static_cast<fs_hcintmsk6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun mask
 */
class frmorm_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmorm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return static_cast<fs_hcintmsk6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error mask
 */
class dterrm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk6_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return static_cast<fs_hcintmsk6_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrcm() const -> xfrcm_f {return xfrcm_f((m_value & xfrcm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chhm() const -> chhm_f {return chhm_f((m_value & chhm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stallm() const -> stallm_f {return stallm_f((m_value & stallm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nakm() const -> nakm_f {return nakm_f((m_value & nakm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ackm() const -> ackm_f {return ackm_f((m_value & ackm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nyet() const -> nyet_f {return nyet_f((m_value & nyet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerrm() const -> txerrm_f {return txerrm_f((m_value & txerrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberrm() const -> bberrm_f {return bberrm_f((m_value & bberrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmorm() const -> frmorm_f {return frmorm_f((m_value & frmorm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterrm() const -> dterrm_f {return dterrm_f((m_value & dterrm_f::Mask) != 0);}

	constexpr fs_hcintmsk6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcintmsk6_r other) const -> fs_hcintmsk6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcintmsk6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 460;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7)
 */
class fs_hcintmsk7_r {
public:

/**
 * Transfer completed mask
 */
class xfrcm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr xfrcm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return static_cast<fs_hcintmsk7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Channel halted mask
 */
class chhm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chhm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return static_cast<fs_hcintmsk7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * STALL response received interrupt mask
 */
class stallm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stallm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return static_cast<fs_hcintmsk7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * NAK response received interrupt mask
 */
class nakm_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nakm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return static_cast<fs_hcintmsk7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * ACK response received/transmitted interrupt mask
 */
class ackm_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ackm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return static_cast<fs_hcintmsk7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * response received interrupt mask
 */
class nyet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nyet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return static_cast<fs_hcintmsk7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transaction error mask
 */
class txerrm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txerrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return static_cast<fs_hcintmsk7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Babble error mask
 */
class bberrm_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bberrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return static_cast<fs_hcintmsk7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Frame overrun mask
 */
class frmorm_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr frmorm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return static_cast<fs_hcintmsk7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data toggle error mask
 */
class dterrm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dterrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_hcintmsk7_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return static_cast<fs_hcintmsk7_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto xfrcm() const -> xfrcm_f {return xfrcm_f((m_value & xfrcm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chhm() const -> chhm_f {return chhm_f((m_value & chhm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stallm() const -> stallm_f {return stallm_f((m_value & stallm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nakm() const -> nakm_f {return nakm_f((m_value & nakm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ackm() const -> ackm_f {return ackm_f((m_value & ackm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nyet() const -> nyet_f {return nyet_f((m_value & nyet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txerrm() const -> txerrm_f {return txerrm_f((m_value & txerrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bberrm() const -> bberrm_f {return bberrm_f((m_value & bberrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto frmorm() const -> frmorm_f {return frmorm_f((m_value & frmorm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dterrm() const -> dterrm_f {return dterrm_f((m_value & dterrm_f::Mask) != 0);}

	constexpr fs_hcintmsk7_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hcintmsk7_r other) const -> fs_hcintmsk7_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hcintmsk7_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 492;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-0 transfer size register
 */
class fs_hctsiz0_r {
public:

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fs_hctsiz0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz0_r other) const -> fs_hctsiz0_r { return static_cast<fs_hctsiz0_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hctsiz0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz0_r other) const -> fs_hctsiz0_r { return static_cast<fs_hctsiz0_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Data PID
 */
class dpid_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dpid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hctsiz0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz0_r other) const -> fs_hctsiz0_r { return static_cast<fs_hctsiz0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto dpid() const -> dpid_f {return dpid_f(static_cast<uint8_t>(m_value >> dpid_f::Offset));}

	constexpr fs_hctsiz0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hctsiz0_r other) const -> fs_hctsiz0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hctsiz0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 272;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-1 transfer size register
 */
class fs_hctsiz1_r {
public:

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fs_hctsiz1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz1_r other) const -> fs_hctsiz1_r { return static_cast<fs_hctsiz1_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hctsiz1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz1_r other) const -> fs_hctsiz1_r { return static_cast<fs_hctsiz1_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Data PID
 */
class dpid_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dpid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hctsiz1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz1_r other) const -> fs_hctsiz1_r { return static_cast<fs_hctsiz1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto dpid() const -> dpid_f {return dpid_f(static_cast<uint8_t>(m_value >> dpid_f::Offset));}

	constexpr fs_hctsiz1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hctsiz1_r other) const -> fs_hctsiz1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hctsiz1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 304;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-2 transfer size register
 */
class fs_hctsiz2_r {
public:

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fs_hctsiz2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz2_r other) const -> fs_hctsiz2_r { return static_cast<fs_hctsiz2_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hctsiz2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz2_r other) const -> fs_hctsiz2_r { return static_cast<fs_hctsiz2_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Data PID
 */
class dpid_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dpid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hctsiz2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz2_r other) const -> fs_hctsiz2_r { return static_cast<fs_hctsiz2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto dpid() const -> dpid_f {return dpid_f(static_cast<uint8_t>(m_value >> dpid_f::Offset));}

	constexpr fs_hctsiz2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hctsiz2_r other) const -> fs_hctsiz2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hctsiz2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 336;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-3 transfer size register
 */
class fs_hctsiz3_r {
public:

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fs_hctsiz3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz3_r other) const -> fs_hctsiz3_r { return static_cast<fs_hctsiz3_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hctsiz3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz3_r other) const -> fs_hctsiz3_r { return static_cast<fs_hctsiz3_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Data PID
 */
class dpid_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dpid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hctsiz3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz3_r other) const -> fs_hctsiz3_r { return static_cast<fs_hctsiz3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto dpid() const -> dpid_f {return dpid_f(static_cast<uint8_t>(m_value >> dpid_f::Offset));}

	constexpr fs_hctsiz3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hctsiz3_r other) const -> fs_hctsiz3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hctsiz3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 368;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-x transfer size register
 */
class fs_hctsiz4_r {
public:

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fs_hctsiz4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz4_r other) const -> fs_hctsiz4_r { return static_cast<fs_hctsiz4_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hctsiz4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz4_r other) const -> fs_hctsiz4_r { return static_cast<fs_hctsiz4_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Data PID
 */
class dpid_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dpid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hctsiz4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz4_r other) const -> fs_hctsiz4_r { return static_cast<fs_hctsiz4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto dpid() const -> dpid_f {return dpid_f(static_cast<uint8_t>(m_value >> dpid_f::Offset));}

	constexpr fs_hctsiz4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hctsiz4_r other) const -> fs_hctsiz4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hctsiz4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 400;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-5 transfer size register
 */
class fs_hctsiz5_r {
public:

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fs_hctsiz5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz5_r other) const -> fs_hctsiz5_r { return static_cast<fs_hctsiz5_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hctsiz5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz5_r other) const -> fs_hctsiz5_r { return static_cast<fs_hctsiz5_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Data PID
 */
class dpid_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dpid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hctsiz5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz5_r other) const -> fs_hctsiz5_r { return static_cast<fs_hctsiz5_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto dpid() const -> dpid_f {return dpid_f(static_cast<uint8_t>(m_value >> dpid_f::Offset));}

	constexpr fs_hctsiz5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hctsiz5_r other) const -> fs_hctsiz5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hctsiz5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 432;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-6 transfer size register
 */
class fs_hctsiz6_r {
public:

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fs_hctsiz6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz6_r other) const -> fs_hctsiz6_r { return static_cast<fs_hctsiz6_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hctsiz6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz6_r other) const -> fs_hctsiz6_r { return static_cast<fs_hctsiz6_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Data PID
 */
class dpid_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dpid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hctsiz6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz6_r other) const -> fs_hctsiz6_r { return static_cast<fs_hctsiz6_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto dpid() const -> dpid_f {return dpid_f(static_cast<uint8_t>(m_value >> dpid_f::Offset));}

	constexpr fs_hctsiz6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hctsiz6_r other) const -> fs_hctsiz6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hctsiz6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 464;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * OTG_FS host channel-7 transfer size register
 */
class fs_hctsiz7_r {
public:

/**
 * Transfer size
 */
class xfrsiz_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr xfrsiz_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator fs_hctsiz7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz7_r other) const -> fs_hctsiz7_r { return static_cast<fs_hctsiz7_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

/**
 * Packet count
 */
class pktcnt_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pktcnt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fs_hctsiz7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz7_r other) const -> fs_hctsiz7_r { return static_cast<fs_hctsiz7_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

/**
 * Data PID
 */
class dpid_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dpid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fs_hctsiz7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(fs_hctsiz7_r other) const -> fs_hctsiz7_r { return static_cast<fs_hctsiz7_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto xfrsiz() const -> xfrsiz_f {return xfrsiz_f(static_cast<uint32_t>(m_value >> xfrsiz_f::Offset));}
	[[nodiscard]] constexpr auto pktcnt() const -> pktcnt_f {return pktcnt_f(static_cast<uint16_t>(m_value >> pktcnt_f::Offset));}
	[[nodiscard]] constexpr auto dpid() const -> dpid_f {return dpid_f(static_cast<uint8_t>(m_value >> dpid_f::Offset));}

	constexpr fs_hctsiz7_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_hctsiz7_r other) const -> fs_hctsiz7_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_hctsiz7_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 496;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,fs_hcfg_r> fs_hcfg;
	Memory<uint32_t,hfir_r> hfir;
	ReadOnlyMemory<uint32_t,fs_hfnum_r> fs_hfnum;
	Padding<4> _p12;
	ReadOnlyMemory<uint32_t,fs_hptxsts_r> fs_hptxsts;
	ReadOnlyMemory<uint32_t,haint_r> haint;
	Memory<uint32_t,haintmsk_r> haintmsk;
	Padding<36> _p28;
	ReadOnlyMemory<uint32_t,fs_hprt_r> fs_hprt;
	Padding<188> _p68;
	Memory<uint32_t,fs_hcchar0_r> fs_hcchar0;
	Padding<4> _p260;
	Memory<uint32_t,fs_hcint0_r> fs_hcint0;
	Memory<uint32_t,fs_hcintmsk0_r> fs_hcintmsk0;
	Memory<uint32_t,fs_hctsiz0_r> fs_hctsiz0;
	Padding<12> _p276;
	Memory<uint32_t,fs_hcchar1_r> fs_hcchar1;
	Padding<4> _p292;
	Memory<uint32_t,fs_hcint1_r> fs_hcint1;
	Memory<uint32_t,fs_hcintmsk1_r> fs_hcintmsk1;
	Memory<uint32_t,fs_hctsiz1_r> fs_hctsiz1;
	Padding<12> _p308;
	Memory<uint32_t,fs_hcchar2_r> fs_hcchar2;
	Padding<4> _p324;
	Memory<uint32_t,fs_hcint2_r> fs_hcint2;
	Memory<uint32_t,fs_hcintmsk2_r> fs_hcintmsk2;
	Memory<uint32_t,fs_hctsiz2_r> fs_hctsiz2;
	Padding<12> _p340;
	Memory<uint32_t,fs_hcchar3_r> fs_hcchar3;
	Padding<4> _p356;
	Memory<uint32_t,fs_hcint3_r> fs_hcint3;
	Memory<uint32_t,fs_hcintmsk3_r> fs_hcintmsk3;
	Memory<uint32_t,fs_hctsiz3_r> fs_hctsiz3;
	Padding<12> _p372;
	Memory<uint32_t,fs_hcchar4_r> fs_hcchar4;
	Padding<4> _p388;
	Memory<uint32_t,fs_hcint4_r> fs_hcint4;
	Memory<uint32_t,fs_hcintmsk4_r> fs_hcintmsk4;
	Memory<uint32_t,fs_hctsiz4_r> fs_hctsiz4;
	Padding<12> _p404;
	Memory<uint32_t,fs_hcchar5_r> fs_hcchar5;
	Padding<4> _p420;
	Memory<uint32_t,fs_hcint5_r> fs_hcint5;
	Memory<uint32_t,fs_hcintmsk5_r> fs_hcintmsk5;
	Memory<uint32_t,fs_hctsiz5_r> fs_hctsiz5;
	Padding<12> _p436;
	Memory<uint32_t,fs_hcchar6_r> fs_hcchar6;
	Padding<4> _p452;
	Memory<uint32_t,fs_hcint6_r> fs_hcint6;
	Memory<uint32_t,fs_hcintmsk6_r> fs_hcintmsk6;
	Memory<uint32_t,fs_hctsiz6_r> fs_hctsiz6;
	Padding<12> _p468;
	Memory<uint32_t,fs_hcchar7_r> fs_hcchar7;
	Padding<4> _p484;
	Memory<uint32_t,fs_hcint7_r> fs_hcint7;
	Memory<uint32_t,fs_hcintmsk7_r> fs_hcintmsk7;
	Memory<uint32_t,fs_hctsiz7_r> fs_hctsiz7;
};

static_assert(std::is_standard_layout_v<otg_fs_host_p>);
static_assert(offsetof(otg_fs_host_p, fs_hcfg) == otg_fs_host_p::fs_hcfg_r::Offset);
static_assert(offsetof(otg_fs_host_p, hfir) == otg_fs_host_p::hfir_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hfnum) == otg_fs_host_p::fs_hfnum_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hptxsts) == otg_fs_host_p::fs_hptxsts_r::Offset);
static_assert(offsetof(otg_fs_host_p, haint) == otg_fs_host_p::haint_r::Offset);
static_assert(offsetof(otg_fs_host_p, haintmsk) == otg_fs_host_p::haintmsk_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hprt) == otg_fs_host_p::fs_hprt_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcchar0) == otg_fs_host_p::fs_hcchar0_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcchar1) == otg_fs_host_p::fs_hcchar1_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcchar2) == otg_fs_host_p::fs_hcchar2_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcchar3) == otg_fs_host_p::fs_hcchar3_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcchar4) == otg_fs_host_p::fs_hcchar4_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcchar5) == otg_fs_host_p::fs_hcchar5_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcchar6) == otg_fs_host_p::fs_hcchar6_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcchar7) == otg_fs_host_p::fs_hcchar7_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcint0) == otg_fs_host_p::fs_hcint0_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcint1) == otg_fs_host_p::fs_hcint1_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcint2) == otg_fs_host_p::fs_hcint2_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcint3) == otg_fs_host_p::fs_hcint3_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcint4) == otg_fs_host_p::fs_hcint4_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcint5) == otg_fs_host_p::fs_hcint5_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcint6) == otg_fs_host_p::fs_hcint6_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcint7) == otg_fs_host_p::fs_hcint7_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcintmsk0) == otg_fs_host_p::fs_hcintmsk0_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcintmsk1) == otg_fs_host_p::fs_hcintmsk1_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcintmsk2) == otg_fs_host_p::fs_hcintmsk2_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcintmsk3) == otg_fs_host_p::fs_hcintmsk3_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcintmsk4) == otg_fs_host_p::fs_hcintmsk4_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcintmsk5) == otg_fs_host_p::fs_hcintmsk5_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcintmsk6) == otg_fs_host_p::fs_hcintmsk6_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hcintmsk7) == otg_fs_host_p::fs_hcintmsk7_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hctsiz0) == otg_fs_host_p::fs_hctsiz0_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hctsiz1) == otg_fs_host_p::fs_hctsiz1_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hctsiz2) == otg_fs_host_p::fs_hctsiz2_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hctsiz3) == otg_fs_host_p::fs_hctsiz3_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hctsiz4) == otg_fs_host_p::fs_hctsiz4_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hctsiz5) == otg_fs_host_p::fs_hctsiz5_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hctsiz6) == otg_fs_host_p::fs_hctsiz6_r::Offset);
static_assert(offsetof(otg_fs_host_p, fs_hctsiz7) == otg_fs_host_p::fs_hctsiz7_r::Offset);

/**
 * USB on the go full speed
 */
class otg_fs_pwrclk_p {
public:
/**
 * OTG_FS power and clock gating control register
 */
class fs_pcgcctl_r {
public:

/**
 * Stop PHY clock
 */
class stppclk_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr stppclk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_pcgcctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_pcgcctl_r other) const -> fs_pcgcctl_r { return static_cast<fs_pcgcctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Gate HCLK
 */
class gatehclk_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gatehclk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_pcgcctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_pcgcctl_r other) const -> fs_pcgcctl_r { return static_cast<fs_pcgcctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * PHY Suspended
 */
class physusp_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr physusp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fs_pcgcctl_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(fs_pcgcctl_r other) const -> fs_pcgcctl_r { return static_cast<fs_pcgcctl_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto stppclk() const -> stppclk_f {return stppclk_f((m_value & stppclk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gatehclk() const -> gatehclk_f {return gatehclk_f((m_value & gatehclk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto physusp() const -> physusp_f {return physusp_f((m_value & physusp_f::Mask) != 0);}

	constexpr fs_pcgcctl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fs_pcgcctl_r other) const -> fs_pcgcctl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fs_pcgcctl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};

	Memory<uint32_t,fs_pcgcctl_r> fs_pcgcctl;
};

static_assert(std::is_standard_layout_v<otg_fs_pwrclk_p>);
static_assert(offsetof(otg_fs_pwrclk_p, fs_pcgcctl) == otg_fs_pwrclk_p::fs_pcgcctl_r::Offset);

otg_fs_device_p& otg_fs_device = *reinterpret_cast<otg_fs_device_p*>(0x50000800);
otg_fs_global_p& otg_fs_global = *reinterpret_cast<otg_fs_global_p*>(0x50000000);
otg_fs_host_p& otg_fs_host = *reinterpret_cast<otg_fs_host_p*>(0x50000400);
otg_fs_pwrclk_p& otg_fs_pwrclk = *reinterpret_cast<otg_fs_pwrclk_p*>(0x50000E00);

}; // STM32F401

