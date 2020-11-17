#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * QuadSPI interface
 */
class quadspi_p {
public:
/**
 * control register
 */
class cr_r {
public:

/**
 * Clock prescaler
 */
class prescaler_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr prescaler_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Polling match mode
 */
class pmm_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pmm_f(bool value = true) : m_value(value) {}
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
 * Automatic poll mode stop
 */
class apms_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr apms_f(bool value = true) : m_value(value) {}
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
 * TimeOut interrupt enable
 */
class toie_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr toie_f(bool value = true) : m_value(value) {}
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
 * Status match interrupt enable
 */
class smie_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smie_f(bool value = true) : m_value(value) {}
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
 * FIFO threshold interrupt enable
 */
class ftie_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ftie_f(bool value = true) : m_value(value) {}
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
 * Transfer complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
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
 * Transfer error interrupt enable
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
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
 * IFO threshold level
 */
class fthres_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr fthres_f(uint8_t value) : m_value(value & Range) {}
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
 * FSEL
 */
class fsel_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fsel_f(bool value = true) : m_value(value) {}
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
 * DFM
 */
class dfm_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dfm_f(bool value = true) : m_value(value) {}
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
 * Sample shift
 */
class sshift_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sshift_f(bool value = true) : m_value(value) {}
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
 * Timeout counter enable
 */
class tcen_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcen_f(bool value = true) : m_value(value) {}
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
 * DMA enable
 */
class dmaen_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmaen_f(bool value = true) : m_value(value) {}
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
 * Abort request
 */
class abort_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr abort_f(bool value = true) : m_value(value) {}
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
 * Enable
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto prescaler() const -> prescaler_f {return prescaler_f(static_cast<uint8_t>(m_value >> prescaler_f::Offset));}
	[[nodiscard]] constexpr auto pmm() const -> pmm_f {return pmm_f((m_value & pmm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto apms() const -> apms_f {return apms_f((m_value & apms_f::Mask) != 0);}
	[[nodiscard]] constexpr auto toie() const -> toie_f {return toie_f((m_value & toie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smie() const -> smie_f {return smie_f((m_value & smie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ftie() const -> ftie_f {return ftie_f((m_value & ftie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fthres() const -> fthres_f {return fthres_f(static_cast<uint8_t>(m_value >> fthres_f::Offset));}
	[[nodiscard]] constexpr auto fsel() const -> fsel_f {return fsel_f((m_value & fsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dfm() const -> dfm_f {return dfm_f((m_value & dfm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sshift() const -> sshift_f {return sshift_f((m_value & sshift_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcen() const -> tcen_f {return tcen_f((m_value & tcen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaen() const -> dmaen_f {return dmaen_f((m_value & dmaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abort() const -> abort_f {return abort_f((m_value & abort_f::Mask) != 0);}
	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * device configuration register
 */
class dcr_r {
public:

/**
 * FLASH memory size
 */
class fsize_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr fsize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dcr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Chip select high time
 */
class csht_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr csht_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Mode 0 / mode 3
 */
class ckmode_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ckmode_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto fsize() const -> fsize_f {return fsize_f(static_cast<uint8_t>(m_value >> fsize_f::Offset));}
	[[nodiscard]] constexpr auto csht() const -> csht_f {return csht_f(static_cast<uint8_t>(m_value >> csht_f::Offset));}
	[[nodiscard]] constexpr auto ckmode() const -> ckmode_f {return ckmode_f((m_value & ckmode_f::Mask) != 0);}

	constexpr dcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dcr_r other) const -> dcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class sr_r {
public:

/**
 * FIFO level
 */
class flevel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr flevel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(sr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Busy
 */
class busy_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr busy_f(bool value = true) : m_value(value) {}
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
 * Timeout flag
 */
class tof_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tof_f(bool value = true) : m_value(value) {}
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
 * Status match flag
 */
class smf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr smf_f(bool value = true) : m_value(value) {}
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
 * FIFO threshold flag
 */
class ftf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ftf_f(bool value = true) : m_value(value) {}
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
 * Transfer complete flag
 */
class tcf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcf_f(bool value = true) : m_value(value) {}
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
 * Transfer error flag
 */
class tef_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tef_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto flevel() const -> flevel_f {return flevel_f(static_cast<uint8_t>(m_value >> flevel_f::Offset));}
	[[nodiscard]] constexpr auto busy() const -> busy_f {return busy_f((m_value & busy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tof() const -> tof_f {return tof_f((m_value & tof_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smf() const -> smf_f {return smf_f((m_value & smf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ftf() const -> ftf_f {return ftf_f((m_value & ftf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcf() const -> tcf_f {return tcf_f((m_value & tcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tef() const -> tef_f {return tef_f((m_value & tef_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * flag clear register
 */
class fcr_r {
public:

/**
 * Clear timeout flag
 */
class ctof_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctof_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(fcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fcr_r>() const {return ClearSet<fcr_r>(Mask, *this);}
	constexpr auto operator|(fcr_r other) const -> fcr_r { return static_cast<fcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fcr_r> other) const -> ClearSet<fcr_r> {return ClearSet<fcr_r>(fcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear status match flag
 */
class csmf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr csmf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(fcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fcr_r>() const {return ClearSet<fcr_r>(Mask, *this);}
	constexpr auto operator|(fcr_r other) const -> fcr_r { return static_cast<fcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fcr_r> other) const -> ClearSet<fcr_r> {return ClearSet<fcr_r>(fcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear transfer complete flag
 */
class ctcf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(fcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fcr_r>() const {return ClearSet<fcr_r>(Mask, *this);}
	constexpr auto operator|(fcr_r other) const -> fcr_r { return static_cast<fcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fcr_r> other) const -> ClearSet<fcr_r> {return ClearSet<fcr_r>(fcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear transfer error flag
 */
class ctef_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctef_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(fcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fcr_r>() const {return ClearSet<fcr_r>(Mask, *this);}
	constexpr auto operator|(fcr_r other) const -> fcr_r { return static_cast<fcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fcr_r> other) const -> ClearSet<fcr_r> {return ClearSet<fcr_r>(fcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ctof() const -> ctof_f {return ctof_f((m_value & ctof_f::Mask) != 0);}
	[[nodiscard]] constexpr auto csmf() const -> csmf_f {return csmf_f((m_value & csmf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctcf() const -> ctcf_f {return ctcf_f((m_value & ctcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctef() const -> ctef_f {return ctef_f((m_value & ctef_f::Mask) != 0);}

	constexpr fcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fcr_r other) const -> fcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * data length register
 */
class dlr_r {
public:

/**
 * Data length
 */
class dl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dl_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dlr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dlr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dlr_r>() const {return ClearSet<dlr_r>(Mask, *this);}
	constexpr auto operator|(dlr_r other) const -> dlr_r { return static_cast<dlr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dlr_r> other) const -> ClearSet<dlr_r> {return ClearSet<dlr_r>(dlr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto dl() const -> dl_f {return dl_f(static_cast<uint32_t>(m_value >> dl_f::Offset));}

	constexpr dlr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dlr_r other) const -> dlr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dlr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * communication configuration register
 */
class ccr_r {
public:

/**
 * Double data rate mode
 */
class ddrm_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ddrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Send instruction only once mode
 */
class sioo_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sioo_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Functional mode
 */
class fmode_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr fmode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Data mode
 */
class dmode_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dmode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of dummy cycles
 */
class dcyc_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dcyc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate bytes size
 */
class absize_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr absize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alternate bytes mode
 */
class abmode_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr abmode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Address size
 */
class adsize_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr adsize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Address mode
 */
class admode_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr admode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Instruction mode
 */
class imode_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr imode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Instruction
 */
class instruction_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr instruction_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ddrm() const -> ddrm_f {return ddrm_f((m_value & ddrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sioo() const -> sioo_f {return sioo_f((m_value & sioo_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fmode() const -> fmode_f {return fmode_f(static_cast<uint8_t>(m_value >> fmode_f::Offset));}
	[[nodiscard]] constexpr auto dmode() const -> dmode_f {return dmode_f(static_cast<uint8_t>(m_value >> dmode_f::Offset));}
	[[nodiscard]] constexpr auto dcyc() const -> dcyc_f {return dcyc_f(static_cast<uint8_t>(m_value >> dcyc_f::Offset));}
	[[nodiscard]] constexpr auto absize() const -> absize_f {return absize_f(static_cast<uint8_t>(m_value >> absize_f::Offset));}
	[[nodiscard]] constexpr auto abmode() const -> abmode_f {return abmode_f(static_cast<uint8_t>(m_value >> abmode_f::Offset));}
	[[nodiscard]] constexpr auto adsize() const -> adsize_f {return adsize_f(static_cast<uint8_t>(m_value >> adsize_f::Offset));}
	[[nodiscard]] constexpr auto admode() const -> admode_f {return admode_f(static_cast<uint8_t>(m_value >> admode_f::Offset));}
	[[nodiscard]] constexpr auto imode() const -> imode_f {return imode_f(static_cast<uint8_t>(m_value >> imode_f::Offset));}
	[[nodiscard]] constexpr auto instruction() const -> instruction_f {return instruction_f(static_cast<uint8_t>(m_value >> instruction_f::Offset));}

	constexpr ccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr_r other) const -> ccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * address register
 */
class ar_r {
public:

/**
 * Address
 */
class address_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr address_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ar_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ar_r>() const {return ClearSet<ar_r>(Mask, *this);}
	constexpr auto operator|(ar_r other) const -> ar_r { return static_cast<ar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ar_r> other) const -> ClearSet<ar_r> {return ClearSet<ar_r>(ar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto address() const -> address_f {return address_f(static_cast<uint32_t>(m_value >> address_f::Offset));}

	constexpr ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ar_r other) const -> ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * ABR
 */
class abr_r {
public:

/**
 * ALTERNATE
 */
class alternate_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr alternate_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator abr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(abr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<abr_r>() const {return ClearSet<abr_r>(Mask, *this);}
	constexpr auto operator|(abr_r other) const -> abr_r { return static_cast<abr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<abr_r> other) const -> ClearSet<abr_r> {return ClearSet<abr_r>(abr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto alternate() const -> alternate_f {return alternate_f(static_cast<uint32_t>(m_value >> alternate_f::Offset));}

	constexpr abr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(abr_r other) const -> abr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> abr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * data register
 */
class dr_r {
public:

/**
 * Data
 */
class data_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr data_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto data() const -> data_f {return data_f(static_cast<uint32_t>(m_value >> data_f::Offset));}

	constexpr dr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dr_r other) const -> dr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * polling status mask register
 */
class psmkr_r {
public:

/**
 * Status mask
 */
class mask_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mask_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator psmkr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(psmkr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psmkr_r>() const {return ClearSet<psmkr_r>(Mask, *this);}
	constexpr auto operator|(psmkr_r other) const -> psmkr_r { return static_cast<psmkr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psmkr_r> other) const -> ClearSet<psmkr_r> {return ClearSet<psmkr_r>(psmkr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto mask() const -> mask_f {return mask_f(static_cast<uint32_t>(m_value >> mask_f::Offset));}

	constexpr psmkr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(psmkr_r other) const -> psmkr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> psmkr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * polling status match register
 */
class psmar_r {
public:

/**
 * Status match
 */
class match_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr match_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator psmar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(psmar_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psmar_r>() const {return ClearSet<psmar_r>(Mask, *this);}
	constexpr auto operator|(psmar_r other) const -> psmar_r { return static_cast<psmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psmar_r> other) const -> ClearSet<psmar_r> {return ClearSet<psmar_r>(psmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto match() const -> match_f {return match_f(static_cast<uint32_t>(m_value >> match_f::Offset));}

	constexpr psmar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(psmar_r other) const -> psmar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> psmar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * polling interval register
 */
class pir_r {
public:

/**
 * Polling interval
 */
class interval_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr interval_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator pir_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pir_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pir_r>() const {return ClearSet<pir_r>(Mask, *this);}
	constexpr auto operator|(pir_r other) const -> pir_r { return static_cast<pir_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pir_r> other) const -> ClearSet<pir_r> {return ClearSet<pir_r>(pir_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto interval() const -> interval_f {return interval_f(static_cast<uint16_t>(m_value >> interval_f::Offset));}

	constexpr pir_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pir_r other) const -> pir_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pir_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * low-power timeout register
 */
class lptr_r {
public:

/**
 * Timeout period
 */
class timeout_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr timeout_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator lptr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(lptr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<lptr_r>() const {return ClearSet<lptr_r>(Mask, *this);}
	constexpr auto operator|(lptr_r other) const -> lptr_r { return static_cast<lptr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<lptr_r> other) const -> ClearSet<lptr_r> {return ClearSet<lptr_r>(lptr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto timeout() const -> timeout_f {return timeout_f(static_cast<uint16_t>(m_value >> timeout_f::Offset));}

	constexpr lptr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(lptr_r other) const -> lptr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> lptr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,dcr_r> dcr;
	ReadOnlyMemory<uint32_t,sr_r> sr;
	Memory<uint32_t,fcr_r> fcr;
	Memory<uint32_t,dlr_r> dlr;
	Memory<uint32_t,ccr_r> ccr;
	Memory<uint32_t,ar_r> ar;
	Memory<uint32_t,abr_r> abr;
	Memory<uint32_t,dr_r> dr;
	Memory<uint32_t,psmkr_r> psmkr;
	Memory<uint32_t,psmar_r> psmar;
	Memory<uint32_t,pir_r> pir;
	Memory<uint32_t,lptr_r> lptr;
};

static_assert(std::is_standard_layout_v<quadspi_p>);
static_assert(offsetof(quadspi_p, cr) == quadspi_p::cr_r::Offset);
static_assert(offsetof(quadspi_p, dcr) == quadspi_p::dcr_r::Offset);
static_assert(offsetof(quadspi_p, sr) == quadspi_p::sr_r::Offset);
static_assert(offsetof(quadspi_p, fcr) == quadspi_p::fcr_r::Offset);
static_assert(offsetof(quadspi_p, dlr) == quadspi_p::dlr_r::Offset);
static_assert(offsetof(quadspi_p, ccr) == quadspi_p::ccr_r::Offset);
static_assert(offsetof(quadspi_p, ar) == quadspi_p::ar_r::Offset);
static_assert(offsetof(quadspi_p, abr) == quadspi_p::abr_r::Offset);
static_assert(offsetof(quadspi_p, dr) == quadspi_p::dr_r::Offset);
static_assert(offsetof(quadspi_p, psmkr) == quadspi_p::psmkr_r::Offset);
static_assert(offsetof(quadspi_p, psmar) == quadspi_p::psmar_r::Offset);
static_assert(offsetof(quadspi_p, pir) == quadspi_p::pir_r::Offset);
static_assert(offsetof(quadspi_p, lptr) == quadspi_p::lptr_r::Offset);

inline quadspi_p& quadspi = *reinterpret_cast<quadspi_p*>(0xA0001000);

} // STM32G473XX

