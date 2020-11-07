#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Flexible memory controller
 */
class fmc_p {
public:
/**
 * SRAM/NOR-Flash chip-select control register 1
 */
class bcr1_r {
public:

/**
 * MBKEN
 */
class mbken_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mbken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MUXEN
 */
class muxen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr muxen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MTYP
 */
class mtyp_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mtyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bcr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MWID
 */
class mwid_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mwid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bcr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * FACCEN
 */
class faccen_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr faccen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BURSTEN
 */
class bursten_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bursten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITPOL
 */
class waitpol_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waitpol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITCFG
 */
class waitcfg_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waitcfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WREN
 */
class wren_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITEN
 */
class waiten_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waiten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EXTMOD
 */
class extmod_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr extmod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ASYNCWAIT
 */
class asyncwait_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr asyncwait_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CPSIZE
 */
class cpsize_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cpsize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bcr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CBURSTRW
 */
class cburstrw_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cburstrw_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CCLKEN
 */
class cclken_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cclken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WFDIS
 */
class wfdis_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wfdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * NBLSET
 */
class nblset_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nblset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bcr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mbken() const -> mbken_f {return mbken_f((m_value & mbken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto muxen() const -> muxen_f {return muxen_f((m_value & muxen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mtyp() const -> mtyp_f {return mtyp_f(static_cast<uint8_t>(m_value >> mtyp_f::Offset));}
	[[nodiscard]] constexpr auto mwid() const -> mwid_f {return mwid_f(static_cast<uint8_t>(m_value >> mwid_f::Offset));}
	[[nodiscard]] constexpr auto faccen() const -> faccen_f {return faccen_f((m_value & faccen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bursten() const -> bursten_f {return bursten_f((m_value & bursten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitpol() const -> waitpol_f {return waitpol_f((m_value & waitpol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitcfg() const -> waitcfg_f {return waitcfg_f((m_value & waitcfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wren() const -> wren_f {return wren_f((m_value & wren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waiten() const -> waiten_f {return waiten_f((m_value & waiten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto extmod() const -> extmod_f {return extmod_f((m_value & extmod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto asyncwait() const -> asyncwait_f {return asyncwait_f((m_value & asyncwait_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpsize() const -> cpsize_f {return cpsize_f(static_cast<uint8_t>(m_value >> cpsize_f::Offset));}
	[[nodiscard]] constexpr auto cburstrw() const -> cburstrw_f {return cburstrw_f((m_value & cburstrw_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cclken() const -> cclken_f {return cclken_f((m_value & cclken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wfdis() const -> wfdis_f {return wfdis_f((m_value & wfdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nblset() const -> nblset_f {return nblset_f(static_cast<uint8_t>(m_value >> nblset_f::Offset));}

	constexpr bcr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bcr1_r other) const -> bcr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bcr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b11000011010000; // 12496 0x30D0

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash chip-select timing register 1
 */
class btr1_r {
public:

/**
 * DATAHLD
 */
class datahld_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datahld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr1_r>() const {return ClearSet<btr1_r>(Mask, *this);}
	constexpr auto operator|(btr1_r other) const -> btr1_r { return static_cast<btr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr1_r> other) const -> ClearSet<btr1_r> {return ClearSet<btr1_r>(btr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ACCMOD
 */
class accmod_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr accmod_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr1_r>() const {return ClearSet<btr1_r>(Mask, *this);}
	constexpr auto operator|(btr1_r other) const -> btr1_r { return static_cast<btr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr1_r> other) const -> ClearSet<btr1_r> {return ClearSet<btr1_r>(btr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATLAT
 */
class datlat_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datlat_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr1_r>() const {return ClearSet<btr1_r>(Mask, *this);}
	constexpr auto operator|(btr1_r other) const -> btr1_r { return static_cast<btr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr1_r> other) const -> ClearSet<btr1_r> {return ClearSet<btr1_r>(btr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CLKDIV
 */
class clkdiv_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clkdiv_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr1_r>() const {return ClearSet<btr1_r>(Mask, *this);}
	constexpr auto operator|(btr1_r other) const -> btr1_r { return static_cast<btr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr1_r> other) const -> ClearSet<btr1_r> {return ClearSet<btr1_r>(btr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BUSTURN
 */
class busturn_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr busturn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr1_r>() const {return ClearSet<btr1_r>(Mask, *this);}
	constexpr auto operator|(btr1_r other) const -> btr1_r { return static_cast<btr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr1_r> other) const -> ClearSet<btr1_r> {return ClearSet<btr1_r>(btr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATAST
 */
class datast_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr datast_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(btr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr1_r>() const {return ClearSet<btr1_r>(Mask, *this);}
	constexpr auto operator|(btr1_r other) const -> btr1_r { return static_cast<btr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr1_r> other) const -> ClearSet<btr1_r> {return ClearSet<btr1_r>(btr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDHLD
 */
class addhld_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addhld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(btr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr1_r>() const {return ClearSet<btr1_r>(Mask, *this);}
	constexpr auto operator|(btr1_r other) const -> btr1_r { return static_cast<btr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr1_r> other) const -> ClearSet<btr1_r> {return ClearSet<btr1_r>(btr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDSET
 */
class addset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(btr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr1_r>() const {return ClearSet<btr1_r>(Mask, *this);}
	constexpr auto operator|(btr1_r other) const -> btr1_r { return static_cast<btr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr1_r> other) const -> ClearSet<btr1_r> {return ClearSet<btr1_r>(btr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto datahld() const -> datahld_f {return datahld_f(static_cast<uint8_t>(m_value >> datahld_f::Offset));}
	[[nodiscard]] constexpr auto accmod() const -> accmod_f {return accmod_f(static_cast<uint8_t>(m_value >> accmod_f::Offset));}
	[[nodiscard]] constexpr auto datlat() const -> datlat_f {return datlat_f(static_cast<uint8_t>(m_value >> datlat_f::Offset));}
	[[nodiscard]] constexpr auto clkdiv() const -> clkdiv_f {return clkdiv_f(static_cast<uint8_t>(m_value >> clkdiv_f::Offset));}
	[[nodiscard]] constexpr auto busturn() const -> busturn_f {return busturn_f(static_cast<uint8_t>(m_value >> busturn_f::Offset));}
	[[nodiscard]] constexpr auto datast() const -> datast_f {return datast_f(static_cast<uint8_t>(m_value >> datast_f::Offset));}
	[[nodiscard]] constexpr auto addhld() const -> addhld_f {return addhld_f(static_cast<uint8_t>(m_value >> addhld_f::Offset));}
	[[nodiscard]] constexpr auto addset() const -> addset_f {return addset_f(static_cast<uint8_t>(m_value >> addset_f::Offset));}

	constexpr btr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(btr1_r other) const -> btr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> btr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0b11111111111111111111111111111111; // 4294967295 0xFFFFFFFF

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash chip-select control register 2
 */
class bcr2_r {
public:

/**
 * MBKEN
 */
class mbken_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mbken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MUXEN
 */
class muxen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr muxen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MTYP
 */
class mtyp_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mtyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bcr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MWID
 */
class mwid_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mwid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bcr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * FACCEN
 */
class faccen_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr faccen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BURSTEN
 */
class bursten_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bursten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITPOL
 */
class waitpol_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waitpol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITCFG
 */
class waitcfg_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waitcfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WREN
 */
class wren_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITEN
 */
class waiten_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waiten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EXTMOD
 */
class extmod_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr extmod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ASYNCWAIT
 */
class asyncwait_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr asyncwait_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CPSIZE
 */
class cpsize_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cpsize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bcr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CBURSTRW
 */
class cburstrw_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cburstrw_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CCLKEN
 */
class cclken_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cclken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WFDIS
 */
class wfdis_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wfdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * NBLSET
 */
class nblset_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nblset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bcr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mbken() const -> mbken_f {return mbken_f((m_value & mbken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto muxen() const -> muxen_f {return muxen_f((m_value & muxen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mtyp() const -> mtyp_f {return mtyp_f(static_cast<uint8_t>(m_value >> mtyp_f::Offset));}
	[[nodiscard]] constexpr auto mwid() const -> mwid_f {return mwid_f(static_cast<uint8_t>(m_value >> mwid_f::Offset));}
	[[nodiscard]] constexpr auto faccen() const -> faccen_f {return faccen_f((m_value & faccen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bursten() const -> bursten_f {return bursten_f((m_value & bursten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitpol() const -> waitpol_f {return waitpol_f((m_value & waitpol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitcfg() const -> waitcfg_f {return waitcfg_f((m_value & waitcfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wren() const -> wren_f {return wren_f((m_value & wren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waiten() const -> waiten_f {return waiten_f((m_value & waiten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto extmod() const -> extmod_f {return extmod_f((m_value & extmod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto asyncwait() const -> asyncwait_f {return asyncwait_f((m_value & asyncwait_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpsize() const -> cpsize_f {return cpsize_f(static_cast<uint8_t>(m_value >> cpsize_f::Offset));}
	[[nodiscard]] constexpr auto cburstrw() const -> cburstrw_f {return cburstrw_f((m_value & cburstrw_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cclken() const -> cclken_f {return cclken_f((m_value & cclken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wfdis() const -> wfdis_f {return wfdis_f((m_value & wfdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nblset() const -> nblset_f {return nblset_f(static_cast<uint8_t>(m_value >> nblset_f::Offset));}

	constexpr bcr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bcr2_r other) const -> bcr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bcr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0b11000011010000; // 12496 0x30D0

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash chip-select timing register 2
 */
class btr2_r {
public:

/**
 * DATAHLD
 */
class datahld_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datahld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr2_r>() const {return ClearSet<btr2_r>(Mask, *this);}
	constexpr auto operator|(btr2_r other) const -> btr2_r { return static_cast<btr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr2_r> other) const -> ClearSet<btr2_r> {return ClearSet<btr2_r>(btr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ACCMOD
 */
class accmod_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr accmod_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr2_r>() const {return ClearSet<btr2_r>(Mask, *this);}
	constexpr auto operator|(btr2_r other) const -> btr2_r { return static_cast<btr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr2_r> other) const -> ClearSet<btr2_r> {return ClearSet<btr2_r>(btr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATLAT
 */
class datlat_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datlat_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr2_r>() const {return ClearSet<btr2_r>(Mask, *this);}
	constexpr auto operator|(btr2_r other) const -> btr2_r { return static_cast<btr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr2_r> other) const -> ClearSet<btr2_r> {return ClearSet<btr2_r>(btr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CLKDIV
 */
class clkdiv_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clkdiv_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr2_r>() const {return ClearSet<btr2_r>(Mask, *this);}
	constexpr auto operator|(btr2_r other) const -> btr2_r { return static_cast<btr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr2_r> other) const -> ClearSet<btr2_r> {return ClearSet<btr2_r>(btr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BUSTURN
 */
class busturn_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr busturn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr2_r>() const {return ClearSet<btr2_r>(Mask, *this);}
	constexpr auto operator|(btr2_r other) const -> btr2_r { return static_cast<btr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr2_r> other) const -> ClearSet<btr2_r> {return ClearSet<btr2_r>(btr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATAST
 */
class datast_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr datast_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(btr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr2_r>() const {return ClearSet<btr2_r>(Mask, *this);}
	constexpr auto operator|(btr2_r other) const -> btr2_r { return static_cast<btr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr2_r> other) const -> ClearSet<btr2_r> {return ClearSet<btr2_r>(btr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDHLD
 */
class addhld_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addhld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(btr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr2_r>() const {return ClearSet<btr2_r>(Mask, *this);}
	constexpr auto operator|(btr2_r other) const -> btr2_r { return static_cast<btr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr2_r> other) const -> ClearSet<btr2_r> {return ClearSet<btr2_r>(btr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDSET
 */
class addset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(btr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr2_r>() const {return ClearSet<btr2_r>(Mask, *this);}
	constexpr auto operator|(btr2_r other) const -> btr2_r { return static_cast<btr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr2_r> other) const -> ClearSet<btr2_r> {return ClearSet<btr2_r>(btr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto datahld() const -> datahld_f {return datahld_f(static_cast<uint8_t>(m_value >> datahld_f::Offset));}
	[[nodiscard]] constexpr auto accmod() const -> accmod_f {return accmod_f(static_cast<uint8_t>(m_value >> accmod_f::Offset));}
	[[nodiscard]] constexpr auto datlat() const -> datlat_f {return datlat_f(static_cast<uint8_t>(m_value >> datlat_f::Offset));}
	[[nodiscard]] constexpr auto clkdiv() const -> clkdiv_f {return clkdiv_f(static_cast<uint8_t>(m_value >> clkdiv_f::Offset));}
	[[nodiscard]] constexpr auto busturn() const -> busturn_f {return busturn_f(static_cast<uint8_t>(m_value >> busturn_f::Offset));}
	[[nodiscard]] constexpr auto datast() const -> datast_f {return datast_f(static_cast<uint8_t>(m_value >> datast_f::Offset));}
	[[nodiscard]] constexpr auto addhld() const -> addhld_f {return addhld_f(static_cast<uint8_t>(m_value >> addhld_f::Offset));}
	[[nodiscard]] constexpr auto addset() const -> addset_f {return addset_f(static_cast<uint8_t>(m_value >> addset_f::Offset));}

	constexpr btr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(btr2_r other) const -> btr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> btr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0b11111111111111111111111111111111; // 4294967295 0xFFFFFFFF

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash chip-select control register 3
 */
class bcr3_r {
public:

/**
 * MBKEN
 */
class mbken_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mbken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MUXEN
 */
class muxen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr muxen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MTYP
 */
class mtyp_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mtyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bcr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MWID
 */
class mwid_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mwid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bcr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * FACCEN
 */
class faccen_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr faccen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BURSTEN
 */
class bursten_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bursten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITPOL
 */
class waitpol_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waitpol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITCFG
 */
class waitcfg_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waitcfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WREN
 */
class wren_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITEN
 */
class waiten_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waiten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EXTMOD
 */
class extmod_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr extmod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ASYNCWAIT
 */
class asyncwait_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr asyncwait_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CPSIZE
 */
class cpsize_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cpsize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bcr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CBURSTRW
 */
class cburstrw_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cburstrw_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CCLKEN
 */
class cclken_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cclken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WFDIS
 */
class wfdis_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wfdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * NBLSET
 */
class nblset_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nblset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bcr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr3_r>() const {return ClearSet<bcr3_r>(Mask, *this);}
	constexpr auto operator|(bcr3_r other) const -> bcr3_r { return static_cast<bcr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr3_r> other) const -> ClearSet<bcr3_r> {return ClearSet<bcr3_r>(bcr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mbken() const -> mbken_f {return mbken_f((m_value & mbken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto muxen() const -> muxen_f {return muxen_f((m_value & muxen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mtyp() const -> mtyp_f {return mtyp_f(static_cast<uint8_t>(m_value >> mtyp_f::Offset));}
	[[nodiscard]] constexpr auto mwid() const -> mwid_f {return mwid_f(static_cast<uint8_t>(m_value >> mwid_f::Offset));}
	[[nodiscard]] constexpr auto faccen() const -> faccen_f {return faccen_f((m_value & faccen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bursten() const -> bursten_f {return bursten_f((m_value & bursten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitpol() const -> waitpol_f {return waitpol_f((m_value & waitpol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitcfg() const -> waitcfg_f {return waitcfg_f((m_value & waitcfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wren() const -> wren_f {return wren_f((m_value & wren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waiten() const -> waiten_f {return waiten_f((m_value & waiten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto extmod() const -> extmod_f {return extmod_f((m_value & extmod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto asyncwait() const -> asyncwait_f {return asyncwait_f((m_value & asyncwait_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpsize() const -> cpsize_f {return cpsize_f(static_cast<uint8_t>(m_value >> cpsize_f::Offset));}
	[[nodiscard]] constexpr auto cburstrw() const -> cburstrw_f {return cburstrw_f((m_value & cburstrw_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cclken() const -> cclken_f {return cclken_f((m_value & cclken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wfdis() const -> wfdis_f {return wfdis_f((m_value & wfdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nblset() const -> nblset_f {return nblset_f(static_cast<uint8_t>(m_value >> nblset_f::Offset));}

	constexpr bcr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bcr3_r other) const -> bcr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bcr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0b11000011010000; // 12496 0x30D0

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash chip-select timing register 3
 */
class btr3_r {
public:

/**
 * DATAHLD
 */
class datahld_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datahld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr3_r>() const {return ClearSet<btr3_r>(Mask, *this);}
	constexpr auto operator|(btr3_r other) const -> btr3_r { return static_cast<btr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr3_r> other) const -> ClearSet<btr3_r> {return ClearSet<btr3_r>(btr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ACCMOD
 */
class accmod_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr accmod_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr3_r>() const {return ClearSet<btr3_r>(Mask, *this);}
	constexpr auto operator|(btr3_r other) const -> btr3_r { return static_cast<btr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr3_r> other) const -> ClearSet<btr3_r> {return ClearSet<btr3_r>(btr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATLAT
 */
class datlat_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datlat_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr3_r>() const {return ClearSet<btr3_r>(Mask, *this);}
	constexpr auto operator|(btr3_r other) const -> btr3_r { return static_cast<btr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr3_r> other) const -> ClearSet<btr3_r> {return ClearSet<btr3_r>(btr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CLKDIV
 */
class clkdiv_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clkdiv_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr3_r>() const {return ClearSet<btr3_r>(Mask, *this);}
	constexpr auto operator|(btr3_r other) const -> btr3_r { return static_cast<btr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr3_r> other) const -> ClearSet<btr3_r> {return ClearSet<btr3_r>(btr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BUSTURN
 */
class busturn_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr busturn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr3_r>() const {return ClearSet<btr3_r>(Mask, *this);}
	constexpr auto operator|(btr3_r other) const -> btr3_r { return static_cast<btr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr3_r> other) const -> ClearSet<btr3_r> {return ClearSet<btr3_r>(btr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATAST
 */
class datast_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr datast_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(btr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr3_r>() const {return ClearSet<btr3_r>(Mask, *this);}
	constexpr auto operator|(btr3_r other) const -> btr3_r { return static_cast<btr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr3_r> other) const -> ClearSet<btr3_r> {return ClearSet<btr3_r>(btr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDHLD
 */
class addhld_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addhld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(btr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr3_r>() const {return ClearSet<btr3_r>(Mask, *this);}
	constexpr auto operator|(btr3_r other) const -> btr3_r { return static_cast<btr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr3_r> other) const -> ClearSet<btr3_r> {return ClearSet<btr3_r>(btr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDSET
 */
class addset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(btr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr3_r>() const {return ClearSet<btr3_r>(Mask, *this);}
	constexpr auto operator|(btr3_r other) const -> btr3_r { return static_cast<btr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr3_r> other) const -> ClearSet<btr3_r> {return ClearSet<btr3_r>(btr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto datahld() const -> datahld_f {return datahld_f(static_cast<uint8_t>(m_value >> datahld_f::Offset));}
	[[nodiscard]] constexpr auto accmod() const -> accmod_f {return accmod_f(static_cast<uint8_t>(m_value >> accmod_f::Offset));}
	[[nodiscard]] constexpr auto datlat() const -> datlat_f {return datlat_f(static_cast<uint8_t>(m_value >> datlat_f::Offset));}
	[[nodiscard]] constexpr auto clkdiv() const -> clkdiv_f {return clkdiv_f(static_cast<uint8_t>(m_value >> clkdiv_f::Offset));}
	[[nodiscard]] constexpr auto busturn() const -> busturn_f {return busturn_f(static_cast<uint8_t>(m_value >> busturn_f::Offset));}
	[[nodiscard]] constexpr auto datast() const -> datast_f {return datast_f(static_cast<uint8_t>(m_value >> datast_f::Offset));}
	[[nodiscard]] constexpr auto addhld() const -> addhld_f {return addhld_f(static_cast<uint8_t>(m_value >> addhld_f::Offset));}
	[[nodiscard]] constexpr auto addset() const -> addset_f {return addset_f(static_cast<uint8_t>(m_value >> addset_f::Offset));}

	constexpr btr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(btr3_r other) const -> btr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> btr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0b11111111111111111111111111111111; // 4294967295 0xFFFFFFFF

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash chip-select control register 4
 */
class bcr4_r {
public:

/**
 * MBKEN
 */
class mbken_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mbken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MUXEN
 */
class muxen_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr muxen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MTYP
 */
class mtyp_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mtyp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bcr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MWID
 */
class mwid_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mwid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bcr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * FACCEN
 */
class faccen_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr faccen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BURSTEN
 */
class bursten_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bursten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITPOL
 */
class waitpol_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waitpol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITCFG
 */
class waitcfg_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waitcfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WREN
 */
class wren_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WAITEN
 */
class waiten_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr waiten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EXTMOD
 */
class extmod_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr extmod_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ASYNCWAIT
 */
class asyncwait_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr asyncwait_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CPSIZE
 */
class cpsize_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cpsize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bcr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CBURSTRW
 */
class cburstrw_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cburstrw_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CCLKEN
 */
class cclken_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cclken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WFDIS
 */
class wfdis_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wfdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bcr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bcr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * NBLSET
 */
class nblset_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nblset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bcr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr4_r>() const {return ClearSet<bcr4_r>(Mask, *this);}
	constexpr auto operator|(bcr4_r other) const -> bcr4_r { return static_cast<bcr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr4_r> other) const -> ClearSet<bcr4_r> {return ClearSet<bcr4_r>(bcr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mbken() const -> mbken_f {return mbken_f((m_value & mbken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto muxen() const -> muxen_f {return muxen_f((m_value & muxen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mtyp() const -> mtyp_f {return mtyp_f(static_cast<uint8_t>(m_value >> mtyp_f::Offset));}
	[[nodiscard]] constexpr auto mwid() const -> mwid_f {return mwid_f(static_cast<uint8_t>(m_value >> mwid_f::Offset));}
	[[nodiscard]] constexpr auto faccen() const -> faccen_f {return faccen_f((m_value & faccen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bursten() const -> bursten_f {return bursten_f((m_value & bursten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitpol() const -> waitpol_f {return waitpol_f((m_value & waitpol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waitcfg() const -> waitcfg_f {return waitcfg_f((m_value & waitcfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wren() const -> wren_f {return wren_f((m_value & wren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto waiten() const -> waiten_f {return waiten_f((m_value & waiten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto extmod() const -> extmod_f {return extmod_f((m_value & extmod_f::Mask) != 0);}
	[[nodiscard]] constexpr auto asyncwait() const -> asyncwait_f {return asyncwait_f((m_value & asyncwait_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpsize() const -> cpsize_f {return cpsize_f(static_cast<uint8_t>(m_value >> cpsize_f::Offset));}
	[[nodiscard]] constexpr auto cburstrw() const -> cburstrw_f {return cburstrw_f((m_value & cburstrw_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cclken() const -> cclken_f {return cclken_f((m_value & cclken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wfdis() const -> wfdis_f {return wfdis_f((m_value & wfdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nblset() const -> nblset_f {return nblset_f(static_cast<uint8_t>(m_value >> nblset_f::Offset));}

	constexpr bcr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bcr4_r other) const -> bcr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bcr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0b11000011010000; // 12496 0x30D0

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash chip-select timing register 4
 */
class btr4_r {
public:

/**
 * DATAHLD
 */
class datahld_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datahld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr4_r>() const {return ClearSet<btr4_r>(Mask, *this);}
	constexpr auto operator|(btr4_r other) const -> btr4_r { return static_cast<btr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr4_r> other) const -> ClearSet<btr4_r> {return ClearSet<btr4_r>(btr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ACCMOD
 */
class accmod_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr accmod_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr4_r>() const {return ClearSet<btr4_r>(Mask, *this);}
	constexpr auto operator|(btr4_r other) const -> btr4_r { return static_cast<btr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr4_r> other) const -> ClearSet<btr4_r> {return ClearSet<btr4_r>(btr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATLAT
 */
class datlat_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datlat_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr4_r>() const {return ClearSet<btr4_r>(Mask, *this);}
	constexpr auto operator|(btr4_r other) const -> btr4_r { return static_cast<btr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr4_r> other) const -> ClearSet<btr4_r> {return ClearSet<btr4_r>(btr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CLKDIV
 */
class clkdiv_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clkdiv_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr4_r>() const {return ClearSet<btr4_r>(Mask, *this);}
	constexpr auto operator|(btr4_r other) const -> btr4_r { return static_cast<btr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr4_r> other) const -> ClearSet<btr4_r> {return ClearSet<btr4_r>(btr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BUSTURN
 */
class busturn_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr busturn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(btr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr4_r>() const {return ClearSet<btr4_r>(Mask, *this);}
	constexpr auto operator|(btr4_r other) const -> btr4_r { return static_cast<btr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr4_r> other) const -> ClearSet<btr4_r> {return ClearSet<btr4_r>(btr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATAST
 */
class datast_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr datast_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(btr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr4_r>() const {return ClearSet<btr4_r>(Mask, *this);}
	constexpr auto operator|(btr4_r other) const -> btr4_r { return static_cast<btr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr4_r> other) const -> ClearSet<btr4_r> {return ClearSet<btr4_r>(btr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDHLD
 */
class addhld_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addhld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(btr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr4_r>() const {return ClearSet<btr4_r>(Mask, *this);}
	constexpr auto operator|(btr4_r other) const -> btr4_r { return static_cast<btr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr4_r> other) const -> ClearSet<btr4_r> {return ClearSet<btr4_r>(btr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDSET
 */
class addset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator btr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(btr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btr4_r>() const {return ClearSet<btr4_r>(Mask, *this);}
	constexpr auto operator|(btr4_r other) const -> btr4_r { return static_cast<btr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btr4_r> other) const -> ClearSet<btr4_r> {return ClearSet<btr4_r>(btr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto datahld() const -> datahld_f {return datahld_f(static_cast<uint8_t>(m_value >> datahld_f::Offset));}
	[[nodiscard]] constexpr auto accmod() const -> accmod_f {return accmod_f(static_cast<uint8_t>(m_value >> accmod_f::Offset));}
	[[nodiscard]] constexpr auto datlat() const -> datlat_f {return datlat_f(static_cast<uint8_t>(m_value >> datlat_f::Offset));}
	[[nodiscard]] constexpr auto clkdiv() const -> clkdiv_f {return clkdiv_f(static_cast<uint8_t>(m_value >> clkdiv_f::Offset));}
	[[nodiscard]] constexpr auto busturn() const -> busturn_f {return busturn_f(static_cast<uint8_t>(m_value >> busturn_f::Offset));}
	[[nodiscard]] constexpr auto datast() const -> datast_f {return datast_f(static_cast<uint8_t>(m_value >> datast_f::Offset));}
	[[nodiscard]] constexpr auto addhld() const -> addhld_f {return addhld_f(static_cast<uint8_t>(m_value >> addhld_f::Offset));}
	[[nodiscard]] constexpr auto addset() const -> addset_f {return addset_f(static_cast<uint8_t>(m_value >> addset_f::Offset));}

	constexpr btr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(btr4_r other) const -> btr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> btr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0b11111111111111111111111111111111; // 4294967295 0xFFFFFFFF

private:
	uint32_t m_value;
};
/**
 * PSRAM chip select counter register
 */
class pcscntr_r {
public:

/**
 * CSCOUNT
 */
class cscount_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cscount_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator pcscntr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pcscntr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcscntr_r>() const {return ClearSet<pcscntr_r>(Mask, *this);}
	constexpr auto operator|(pcscntr_r other) const -> pcscntr_r { return static_cast<pcscntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcscntr_r> other) const -> ClearSet<pcscntr_r> {return ClearSet<pcscntr_r>(pcscntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * CNTB1EN
 */
class cntb1en_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cntb1en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pcscntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pcscntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcscntr_r>() const {return ClearSet<pcscntr_r>(Mask, *this);}
	constexpr auto operator|(pcscntr_r other) const -> pcscntr_r { return static_cast<pcscntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcscntr_r> other) const -> ClearSet<pcscntr_r> {return ClearSet<pcscntr_r>(pcscntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CNTB2EN
 */
class cntb2en_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cntb2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pcscntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pcscntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcscntr_r>() const {return ClearSet<pcscntr_r>(Mask, *this);}
	constexpr auto operator|(pcscntr_r other) const -> pcscntr_r { return static_cast<pcscntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcscntr_r> other) const -> ClearSet<pcscntr_r> {return ClearSet<pcscntr_r>(pcscntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CNTB3EN
 */
class cntb3en_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cntb3en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pcscntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pcscntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcscntr_r>() const {return ClearSet<pcscntr_r>(Mask, *this);}
	constexpr auto operator|(pcscntr_r other) const -> pcscntr_r { return static_cast<pcscntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcscntr_r> other) const -> ClearSet<pcscntr_r> {return ClearSet<pcscntr_r>(pcscntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CNTB4EN
 */
class cntb4en_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cntb4en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pcscntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pcscntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcscntr_r>() const {return ClearSet<pcscntr_r>(Mask, *this);}
	constexpr auto operator|(pcscntr_r other) const -> pcscntr_r { return static_cast<pcscntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcscntr_r> other) const -> ClearSet<pcscntr_r> {return ClearSet<pcscntr_r>(pcscntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cscount() const -> cscount_f {return cscount_f(static_cast<uint16_t>(m_value >> cscount_f::Offset));}
	[[nodiscard]] constexpr auto cntb1en() const -> cntb1en_f {return cntb1en_f((m_value & cntb1en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cntb2en() const -> cntb2en_f {return cntb2en_f((m_value & cntb2en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cntb3en() const -> cntb3en_f {return cntb3en_f((m_value & cntb3en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cntb4en() const -> cntb4en_f {return cntb4en_f((m_value & cntb4en_f::Mask) != 0);}

	constexpr pcscntr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pcscntr_r other) const -> pcscntr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pcscntr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * PC Card/NAND Flash control register 3
 */
class pcr_r {
public:

/**
 * ECCPS
 */
class eccps_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eccps_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pcr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcr_r>() const {return ClearSet<pcr_r>(Mask, *this);}
	constexpr auto operator|(pcr_r other) const -> pcr_r { return static_cast<pcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcr_r> other) const -> ClearSet<pcr_r> {return ClearSet<pcr_r>(pcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TAR
 */
class tar_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr tar_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pcr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcr_r>() const {return ClearSet<pcr_r>(Mask, *this);}
	constexpr auto operator|(pcr_r other) const -> pcr_r { return static_cast<pcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcr_r> other) const -> ClearSet<pcr_r> {return ClearSet<pcr_r>(pcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TCLR
 */
class tclr_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tclr_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcr_r>() const {return ClearSet<pcr_r>(Mask, *this);}
	constexpr auto operator|(pcr_r other) const -> pcr_r { return static_cast<pcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcr_r> other) const -> ClearSet<pcr_r> {return ClearSet<pcr_r>(pcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ECCEN
 */
class eccen_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eccen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcr_r>() const {return ClearSet<pcr_r>(Mask, *this);}
	constexpr auto operator|(pcr_r other) const -> pcr_r { return static_cast<pcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcr_r> other) const -> ClearSet<pcr_r> {return ClearSet<pcr_r>(pcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PWID
 */
class pwid_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pwid_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcr_r>() const {return ClearSet<pcr_r>(Mask, *this);}
	constexpr auto operator|(pcr_r other) const -> pcr_r { return static_cast<pcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcr_r> other) const -> ClearSet<pcr_r> {return ClearSet<pcr_r>(pcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PTYP
 */
class ptyp_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ptyp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcr_r>() const {return ClearSet<pcr_r>(Mask, *this);}
	constexpr auto operator|(pcr_r other) const -> pcr_r { return static_cast<pcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcr_r> other) const -> ClearSet<pcr_r> {return ClearSet<pcr_r>(pcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PBKEN
 */
class pbken_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pbken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcr_r>() const {return ClearSet<pcr_r>(Mask, *this);}
	constexpr auto operator|(pcr_r other) const -> pcr_r { return static_cast<pcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcr_r> other) const -> ClearSet<pcr_r> {return ClearSet<pcr_r>(pcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PWAITEN
 */
class pwaiten_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pwaiten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcr_r>() const {return ClearSet<pcr_r>(Mask, *this);}
	constexpr auto operator|(pcr_r other) const -> pcr_r { return static_cast<pcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcr_r> other) const -> ClearSet<pcr_r> {return ClearSet<pcr_r>(pcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto eccps() const -> eccps_f {return eccps_f(static_cast<uint8_t>(m_value >> eccps_f::Offset));}
	[[nodiscard]] constexpr auto tar() const -> tar_f {return tar_f(static_cast<uint8_t>(m_value >> tar_f::Offset));}
	[[nodiscard]] constexpr auto tclr() const -> tclr_f {return tclr_f(static_cast<uint8_t>(m_value >> tclr_f::Offset));}
	[[nodiscard]] constexpr auto eccen() const -> eccen_f {return eccen_f((m_value & eccen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pwid() const -> pwid_f {return pwid_f(static_cast<uint8_t>(m_value >> pwid_f::Offset));}
	[[nodiscard]] constexpr auto ptyp() const -> ptyp_f {return ptyp_f((m_value & ptyp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pbken() const -> pbken_f {return pbken_f((m_value & pbken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pwaiten() const -> pwaiten_f {return pwaiten_f((m_value & pwaiten_f::Mask) != 0);}

	constexpr pcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pcr_r other) const -> pcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0b11000; // 24 0x18

private:
	uint32_t m_value;
};
/**
 * FIFO status and interrupt register 3
 */
class sr_r {
public:

/**
 * FEMPT
 */
class fempt_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fempt_f(bool value = true) : m_value(value) {}
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
 * IFEN
 */
class ifen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ifen_f(bool value = true) : m_value(value) {}
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
 * ILEN
 */
class ilen_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ilen_f(bool value = true) : m_value(value) {}
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
 * IREN
 */
class iren_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr iren_f(bool value = true) : m_value(value) {}
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
 * IFS
 */
class ifs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ifs_f(bool value = true) : m_value(value) {}
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
 * ILS
 */
class ils_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ils_f(bool value = true) : m_value(value) {}
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
 * IRS
 */
class irs_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr irs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto fempt() const -> fempt_f {return fempt_f((m_value & fempt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ifen() const -> ifen_f {return ifen_f((m_value & ifen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ilen() const -> ilen_f {return ilen_f((m_value & ilen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iren() const -> iren_f {return iren_f((m_value & iren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ifs() const -> ifs_f {return ifs_f((m_value & ifs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ils() const -> ils_f {return ils_f((m_value & ils_f::Mask) != 0);}
	[[nodiscard]] constexpr auto irs() const -> irs_f {return irs_f((m_value & irs_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 132;
	static constexpr uint32_t ResetValue = 0b1000000; // 64 0x40

private:
	uint32_t m_value;
};
/**
 * Common memory space timing register 3
 */
class pmem_r {
public:

/**
 * MEMHIZx
 */
class memhizx_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr memhizx_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pmem_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pmem_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pmem_r>() const {return ClearSet<pmem_r>(Mask, *this);}
	constexpr auto operator|(pmem_r other) const -> pmem_r { return static_cast<pmem_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pmem_r> other) const -> ClearSet<pmem_r> {return ClearSet<pmem_r>(pmem_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEMHOLDx
 */
class memholdx_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr memholdx_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pmem_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pmem_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pmem_r>() const {return ClearSet<pmem_r>(Mask, *this);}
	constexpr auto operator|(pmem_r other) const -> pmem_r { return static_cast<pmem_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pmem_r> other) const -> ClearSet<pmem_r> {return ClearSet<pmem_r>(pmem_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEMWAITx
 */
class memwaitx_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr memwaitx_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pmem_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pmem_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pmem_r>() const {return ClearSet<pmem_r>(Mask, *this);}
	constexpr auto operator|(pmem_r other) const -> pmem_r { return static_cast<pmem_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pmem_r> other) const -> ClearSet<pmem_r> {return ClearSet<pmem_r>(pmem_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEMSETx
 */
class memsetx_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr memsetx_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pmem_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pmem_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pmem_r>() const {return ClearSet<pmem_r>(Mask, *this);}
	constexpr auto operator|(pmem_r other) const -> pmem_r { return static_cast<pmem_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pmem_r> other) const -> ClearSet<pmem_r> {return ClearSet<pmem_r>(pmem_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto memhizx() const -> memhizx_f {return memhizx_f(static_cast<uint8_t>(m_value >> memhizx_f::Offset));}
	[[nodiscard]] constexpr auto memholdx() const -> memholdx_f {return memholdx_f(static_cast<uint8_t>(m_value >> memholdx_f::Offset));}
	[[nodiscard]] constexpr auto memwaitx() const -> memwaitx_f {return memwaitx_f(static_cast<uint8_t>(m_value >> memwaitx_f::Offset));}
	[[nodiscard]] constexpr auto memsetx() const -> memsetx_f {return memsetx_f(static_cast<uint8_t>(m_value >> memsetx_f::Offset));}

	constexpr pmem_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pmem_r other) const -> pmem_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pmem_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 136;
	static constexpr uint32_t ResetValue = 0b11111100111111001111110011111100; // 4244438268 0xFCFCFCFC

private:
	uint32_t m_value;
};
/**
 * Attribute memory space timing register 3
 */
class patt_r {
public:

/**
 * ATTHIZx
 */
class atthizx_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr atthizx_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator patt_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(patt_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<patt_r>() const {return ClearSet<patt_r>(Mask, *this);}
	constexpr auto operator|(patt_r other) const -> patt_r { return static_cast<patt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<patt_r> other) const -> ClearSet<patt_r> {return ClearSet<patt_r>(patt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ATTHOLDx
 */
class attholdx_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr attholdx_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator patt_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(patt_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<patt_r>() const {return ClearSet<patt_r>(Mask, *this);}
	constexpr auto operator|(patt_r other) const -> patt_r { return static_cast<patt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<patt_r> other) const -> ClearSet<patt_r> {return ClearSet<patt_r>(patt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ATTWAITx
 */
class attwaitx_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr attwaitx_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator patt_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(patt_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<patt_r>() const {return ClearSet<patt_r>(Mask, *this);}
	constexpr auto operator|(patt_r other) const -> patt_r { return static_cast<patt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<patt_r> other) const -> ClearSet<patt_r> {return ClearSet<patt_r>(patt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ATTSETx
 */
class attsetx_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr attsetx_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator patt_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(patt_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<patt_r>() const {return ClearSet<patt_r>(Mask, *this);}
	constexpr auto operator|(patt_r other) const -> patt_r { return static_cast<patt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<patt_r> other) const -> ClearSet<patt_r> {return ClearSet<patt_r>(patt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto atthizx() const -> atthizx_f {return atthizx_f(static_cast<uint8_t>(m_value >> atthizx_f::Offset));}
	[[nodiscard]] constexpr auto attholdx() const -> attholdx_f {return attholdx_f(static_cast<uint8_t>(m_value >> attholdx_f::Offset));}
	[[nodiscard]] constexpr auto attwaitx() const -> attwaitx_f {return attwaitx_f(static_cast<uint8_t>(m_value >> attwaitx_f::Offset));}
	[[nodiscard]] constexpr auto attsetx() const -> attsetx_f {return attsetx_f(static_cast<uint8_t>(m_value >> attsetx_f::Offset));}

	constexpr patt_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(patt_r other) const -> patt_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> patt_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 140;
	static constexpr uint32_t ResetValue = 0b11111100111111001111110011111100; // 4244438268 0xFCFCFCFC

private:
	uint32_t m_value;
};
/**
 * ECC result register 3
 */
class eccr_r {
public:

/**
 * ECCx
 */
class eccx_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr eccx_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator eccr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(eccr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<eccr_r>() const {return ClearSet<eccr_r>(Mask, *this);}
	constexpr auto operator|(eccr_r other) const -> eccr_r { return static_cast<eccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<eccr_r> other) const -> ClearSet<eccr_r> {return ClearSet<eccr_r>(eccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto eccx() const -> eccx_f {return eccx_f(static_cast<uint32_t>(m_value >> eccx_f::Offset));}

	constexpr eccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(eccr_r other) const -> eccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> eccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 148;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash write timing registers 1
 */
class bwtr1_r {
public:

/**
 * DATAHLD
 */
class datahld_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datahld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr1_r>() const {return ClearSet<bwtr1_r>(Mask, *this);}
	constexpr auto operator|(bwtr1_r other) const -> bwtr1_r { return static_cast<bwtr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr1_r> other) const -> ClearSet<bwtr1_r> {return ClearSet<bwtr1_r>(bwtr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ACCMOD
 */
class accmod_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr accmod_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr1_r>() const {return ClearSet<bwtr1_r>(Mask, *this);}
	constexpr auto operator|(bwtr1_r other) const -> bwtr1_r { return static_cast<bwtr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr1_r> other) const -> ClearSet<bwtr1_r> {return ClearSet<bwtr1_r>(bwtr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BUSTURN
 */
class busturn_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr busturn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr1_r>() const {return ClearSet<bwtr1_r>(Mask, *this);}
	constexpr auto operator|(bwtr1_r other) const -> bwtr1_r { return static_cast<bwtr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr1_r> other) const -> ClearSet<bwtr1_r> {return ClearSet<bwtr1_r>(bwtr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATAST
 */
class datast_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr datast_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bwtr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr1_r>() const {return ClearSet<bwtr1_r>(Mask, *this);}
	constexpr auto operator|(bwtr1_r other) const -> bwtr1_r { return static_cast<bwtr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr1_r> other) const -> ClearSet<bwtr1_r> {return ClearSet<bwtr1_r>(bwtr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDHLD
 */
class addhld_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addhld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bwtr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr1_r>() const {return ClearSet<bwtr1_r>(Mask, *this);}
	constexpr auto operator|(bwtr1_r other) const -> bwtr1_r { return static_cast<bwtr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr1_r> other) const -> ClearSet<bwtr1_r> {return ClearSet<bwtr1_r>(bwtr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDSET
 */
class addset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bwtr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr1_r>() const {return ClearSet<bwtr1_r>(Mask, *this);}
	constexpr auto operator|(bwtr1_r other) const -> bwtr1_r { return static_cast<bwtr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr1_r> other) const -> ClearSet<bwtr1_r> {return ClearSet<bwtr1_r>(bwtr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto datahld() const -> datahld_f {return datahld_f(static_cast<uint8_t>(m_value >> datahld_f::Offset));}
	[[nodiscard]] constexpr auto accmod() const -> accmod_f {return accmod_f(static_cast<uint8_t>(m_value >> accmod_f::Offset));}
	[[nodiscard]] constexpr auto busturn() const -> busturn_f {return busturn_f(static_cast<uint8_t>(m_value >> busturn_f::Offset));}
	[[nodiscard]] constexpr auto datast() const -> datast_f {return datast_f(static_cast<uint8_t>(m_value >> datast_f::Offset));}
	[[nodiscard]] constexpr auto addhld() const -> addhld_f {return addhld_f(static_cast<uint8_t>(m_value >> addhld_f::Offset));}
	[[nodiscard]] constexpr auto addset() const -> addset_f {return addset_f(static_cast<uint8_t>(m_value >> addset_f::Offset));}

	constexpr bwtr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bwtr1_r other) const -> bwtr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bwtr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 260;
	static constexpr uint32_t ResetValue = 0b1111111111111111111111111111; // 268435455 0xFFFFFFF

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash write timing registers 2
 */
class bwtr2_r {
public:

/**
 * DATAHLD
 */
class datahld_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datahld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr2_r>() const {return ClearSet<bwtr2_r>(Mask, *this);}
	constexpr auto operator|(bwtr2_r other) const -> bwtr2_r { return static_cast<bwtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr2_r> other) const -> ClearSet<bwtr2_r> {return ClearSet<bwtr2_r>(bwtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ACCMOD
 */
class accmod_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr accmod_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr2_r>() const {return ClearSet<bwtr2_r>(Mask, *this);}
	constexpr auto operator|(bwtr2_r other) const -> bwtr2_r { return static_cast<bwtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr2_r> other) const -> ClearSet<bwtr2_r> {return ClearSet<bwtr2_r>(bwtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BUSTURN
 */
class busturn_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr busturn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr2_r>() const {return ClearSet<bwtr2_r>(Mask, *this);}
	constexpr auto operator|(bwtr2_r other) const -> bwtr2_r { return static_cast<bwtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr2_r> other) const -> ClearSet<bwtr2_r> {return ClearSet<bwtr2_r>(bwtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATAST
 */
class datast_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr datast_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bwtr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr2_r>() const {return ClearSet<bwtr2_r>(Mask, *this);}
	constexpr auto operator|(bwtr2_r other) const -> bwtr2_r { return static_cast<bwtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr2_r> other) const -> ClearSet<bwtr2_r> {return ClearSet<bwtr2_r>(bwtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDHLD
 */
class addhld_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addhld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bwtr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr2_r>() const {return ClearSet<bwtr2_r>(Mask, *this);}
	constexpr auto operator|(bwtr2_r other) const -> bwtr2_r { return static_cast<bwtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr2_r> other) const -> ClearSet<bwtr2_r> {return ClearSet<bwtr2_r>(bwtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDSET
 */
class addset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bwtr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr2_r>() const {return ClearSet<bwtr2_r>(Mask, *this);}
	constexpr auto operator|(bwtr2_r other) const -> bwtr2_r { return static_cast<bwtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr2_r> other) const -> ClearSet<bwtr2_r> {return ClearSet<bwtr2_r>(bwtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto datahld() const -> datahld_f {return datahld_f(static_cast<uint8_t>(m_value >> datahld_f::Offset));}
	[[nodiscard]] constexpr auto accmod() const -> accmod_f {return accmod_f(static_cast<uint8_t>(m_value >> accmod_f::Offset));}
	[[nodiscard]] constexpr auto busturn() const -> busturn_f {return busturn_f(static_cast<uint8_t>(m_value >> busturn_f::Offset));}
	[[nodiscard]] constexpr auto datast() const -> datast_f {return datast_f(static_cast<uint8_t>(m_value >> datast_f::Offset));}
	[[nodiscard]] constexpr auto addhld() const -> addhld_f {return addhld_f(static_cast<uint8_t>(m_value >> addhld_f::Offset));}
	[[nodiscard]] constexpr auto addset() const -> addset_f {return addset_f(static_cast<uint8_t>(m_value >> addset_f::Offset));}

	constexpr bwtr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bwtr2_r other) const -> bwtr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bwtr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 268;
	static constexpr uint32_t ResetValue = 0b1111111111111111111111111111; // 268435455 0xFFFFFFF

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash write timing registers 3
 */
class bwtr3_r {
public:

/**
 * DATAHLD
 */
class datahld_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datahld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr3_r>() const {return ClearSet<bwtr3_r>(Mask, *this);}
	constexpr auto operator|(bwtr3_r other) const -> bwtr3_r { return static_cast<bwtr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr3_r> other) const -> ClearSet<bwtr3_r> {return ClearSet<bwtr3_r>(bwtr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ACCMOD
 */
class accmod_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr accmod_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr3_r>() const {return ClearSet<bwtr3_r>(Mask, *this);}
	constexpr auto operator|(bwtr3_r other) const -> bwtr3_r { return static_cast<bwtr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr3_r> other) const -> ClearSet<bwtr3_r> {return ClearSet<bwtr3_r>(bwtr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BUSTURN
 */
class busturn_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr busturn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr3_r>() const {return ClearSet<bwtr3_r>(Mask, *this);}
	constexpr auto operator|(bwtr3_r other) const -> bwtr3_r { return static_cast<bwtr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr3_r> other) const -> ClearSet<bwtr3_r> {return ClearSet<bwtr3_r>(bwtr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATAST
 */
class datast_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr datast_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bwtr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr3_r>() const {return ClearSet<bwtr3_r>(Mask, *this);}
	constexpr auto operator|(bwtr3_r other) const -> bwtr3_r { return static_cast<bwtr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr3_r> other) const -> ClearSet<bwtr3_r> {return ClearSet<bwtr3_r>(bwtr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDHLD
 */
class addhld_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addhld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bwtr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr3_r>() const {return ClearSet<bwtr3_r>(Mask, *this);}
	constexpr auto operator|(bwtr3_r other) const -> bwtr3_r { return static_cast<bwtr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr3_r> other) const -> ClearSet<bwtr3_r> {return ClearSet<bwtr3_r>(bwtr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDSET
 */
class addset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bwtr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr3_r>() const {return ClearSet<bwtr3_r>(Mask, *this);}
	constexpr auto operator|(bwtr3_r other) const -> bwtr3_r { return static_cast<bwtr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr3_r> other) const -> ClearSet<bwtr3_r> {return ClearSet<bwtr3_r>(bwtr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto datahld() const -> datahld_f {return datahld_f(static_cast<uint8_t>(m_value >> datahld_f::Offset));}
	[[nodiscard]] constexpr auto accmod() const -> accmod_f {return accmod_f(static_cast<uint8_t>(m_value >> accmod_f::Offset));}
	[[nodiscard]] constexpr auto busturn() const -> busturn_f {return busturn_f(static_cast<uint8_t>(m_value >> busturn_f::Offset));}
	[[nodiscard]] constexpr auto datast() const -> datast_f {return datast_f(static_cast<uint8_t>(m_value >> datast_f::Offset));}
	[[nodiscard]] constexpr auto addhld() const -> addhld_f {return addhld_f(static_cast<uint8_t>(m_value >> addhld_f::Offset));}
	[[nodiscard]] constexpr auto addset() const -> addset_f {return addset_f(static_cast<uint8_t>(m_value >> addset_f::Offset));}

	constexpr bwtr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bwtr3_r other) const -> bwtr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bwtr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 276;
	static constexpr uint32_t ResetValue = 0b1111111111111111111111111111; // 268435455 0xFFFFFFF

private:
	uint32_t m_value;
};
/**
 * SRAM/NOR-Flash write timing registers 4
 */
class bwtr4_r {
public:

/**
 * DATAHLD
 */
class datahld_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr datahld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr4_r>() const {return ClearSet<bwtr4_r>(Mask, *this);}
	constexpr auto operator|(bwtr4_r other) const -> bwtr4_r { return static_cast<bwtr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr4_r> other) const -> ClearSet<bwtr4_r> {return ClearSet<bwtr4_r>(bwtr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ACCMOD
 */
class accmod_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr accmod_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr4_r>() const {return ClearSet<bwtr4_r>(Mask, *this);}
	constexpr auto operator|(bwtr4_r other) const -> bwtr4_r { return static_cast<bwtr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr4_r> other) const -> ClearSet<bwtr4_r> {return ClearSet<bwtr4_r>(bwtr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BUSTURN
 */
class busturn_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr busturn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bwtr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr4_r>() const {return ClearSet<bwtr4_r>(Mask, *this);}
	constexpr auto operator|(bwtr4_r other) const -> bwtr4_r { return static_cast<bwtr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr4_r> other) const -> ClearSet<bwtr4_r> {return ClearSet<bwtr4_r>(bwtr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DATAST
 */
class datast_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr datast_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bwtr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr4_r>() const {return ClearSet<bwtr4_r>(Mask, *this);}
	constexpr auto operator|(bwtr4_r other) const -> bwtr4_r { return static_cast<bwtr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr4_r> other) const -> ClearSet<bwtr4_r> {return ClearSet<bwtr4_r>(bwtr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDHLD
 */
class addhld_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addhld_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bwtr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr4_r>() const {return ClearSet<bwtr4_r>(Mask, *this);}
	constexpr auto operator|(bwtr4_r other) const -> bwtr4_r { return static_cast<bwtr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr4_r> other) const -> ClearSet<bwtr4_r> {return ClearSet<bwtr4_r>(bwtr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ADDSET
 */
class addset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr addset_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bwtr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bwtr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bwtr4_r>() const {return ClearSet<bwtr4_r>(Mask, *this);}
	constexpr auto operator|(bwtr4_r other) const -> bwtr4_r { return static_cast<bwtr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bwtr4_r> other) const -> ClearSet<bwtr4_r> {return ClearSet<bwtr4_r>(bwtr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto datahld() const -> datahld_f {return datahld_f(static_cast<uint8_t>(m_value >> datahld_f::Offset));}
	[[nodiscard]] constexpr auto accmod() const -> accmod_f {return accmod_f(static_cast<uint8_t>(m_value >> accmod_f::Offset));}
	[[nodiscard]] constexpr auto busturn() const -> busturn_f {return busturn_f(static_cast<uint8_t>(m_value >> busturn_f::Offset));}
	[[nodiscard]] constexpr auto datast() const -> datast_f {return datast_f(static_cast<uint8_t>(m_value >> datast_f::Offset));}
	[[nodiscard]] constexpr auto addhld() const -> addhld_f {return addhld_f(static_cast<uint8_t>(m_value >> addhld_f::Offset));}
	[[nodiscard]] constexpr auto addset() const -> addset_f {return addset_f(static_cast<uint8_t>(m_value >> addset_f::Offset));}

	constexpr bwtr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bwtr4_r other) const -> bwtr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bwtr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 284;
	static constexpr uint32_t ResetValue = 0b1111111111111111111111111111; // 268435455 0xFFFFFFF

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct bcr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using bcr_v = typename bcr_r<Index>::type;
	template<std::size_t Index> constexpr auto& bcr() { }

	template<std::size_t Index> struct btr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using btr_v = typename btr_r<Index>::type;
	template<std::size_t Index> constexpr auto& btr() { }

	template<std::size_t Index> struct bwtr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using bwtr_v = typename bwtr_r<Index>::type;
	template<std::size_t Index> constexpr auto& bwtr() { }

	Memory<uint32_t,bcr1_r> bcr1;
	Memory<uint32_t,btr1_r> btr1;
	Memory<uint32_t,bcr2_r> bcr2;
	Memory<uint32_t,btr2_r> btr2;
	Memory<uint32_t,bcr3_r> bcr3;
	Memory<uint32_t,btr3_r> btr3;
	Memory<uint32_t,bcr4_r> bcr4;
	Memory<uint32_t,btr4_r> btr4;
	Memory<uint32_t,pcscntr_r> pcscntr;
	Padding<92> _p36;
	Memory<uint32_t,pcr_r> pcr;
	Memory<uint32_t,sr_r> sr;
	Memory<uint32_t,pmem_r> pmem;
	Memory<uint32_t,patt_r> patt;
	Padding<4> _p144;
	ReadOnlyMemory<uint32_t,eccr_r> eccr;
	Padding<108> _p152;
	Memory<uint32_t,bwtr1_r> bwtr1;
	Padding<4> _p264;
	Memory<uint32_t,bwtr2_r> bwtr2;
	Padding<4> _p272;
	Memory<uint32_t,bwtr3_r> bwtr3;
	Padding<4> _p280;
	Memory<uint32_t,bwtr4_r> bwtr4;
};

template<> constexpr auto& fmc_p::bcr<1>() { return bcr1; }
template<> constexpr auto& fmc_p::bcr<2>() { return bcr2; }
template<> constexpr auto& fmc_p::bcr<3>() { return bcr3; }
template<> constexpr auto& fmc_p::bcr<4>() { return bcr4; }

template<> struct fmc_p::bcr_r<1> { using type = fmc_p::bcr1_r; };
template<> struct fmc_p::bcr_r<2> { using type = fmc_p::bcr2_r; };
template<> struct fmc_p::bcr_r<3> { using type = fmc_p::bcr3_r; };
template<> struct fmc_p::bcr_r<4> { using type = fmc_p::bcr4_r; };

template<> constexpr auto& fmc_p::btr<1>() { return btr1; }
template<> constexpr auto& fmc_p::btr<2>() { return btr2; }
template<> constexpr auto& fmc_p::btr<3>() { return btr3; }
template<> constexpr auto& fmc_p::btr<4>() { return btr4; }

template<> struct fmc_p::btr_r<1> { using type = fmc_p::btr1_r; };
template<> struct fmc_p::btr_r<2> { using type = fmc_p::btr2_r; };
template<> struct fmc_p::btr_r<3> { using type = fmc_p::btr3_r; };
template<> struct fmc_p::btr_r<4> { using type = fmc_p::btr4_r; };

template<> constexpr auto& fmc_p::bwtr<1>() { return bwtr1; }
template<> constexpr auto& fmc_p::bwtr<2>() { return bwtr2; }
template<> constexpr auto& fmc_p::bwtr<3>() { return bwtr3; }
template<> constexpr auto& fmc_p::bwtr<4>() { return bwtr4; }

template<> struct fmc_p::bwtr_r<1> { using type = fmc_p::bwtr1_r; };
template<> struct fmc_p::bwtr_r<2> { using type = fmc_p::bwtr2_r; };
template<> struct fmc_p::bwtr_r<3> { using type = fmc_p::bwtr3_r; };
template<> struct fmc_p::bwtr_r<4> { using type = fmc_p::bwtr4_r; };

static_assert(std::is_standard_layout_v<fmc_p>);
static_assert(offsetof(fmc_p, bcr1) == fmc_p::bcr1_r::Offset);
static_assert(offsetof(fmc_p, btr1) == fmc_p::btr1_r::Offset);
static_assert(offsetof(fmc_p, bcr2) == fmc_p::bcr2_r::Offset);
static_assert(offsetof(fmc_p, btr2) == fmc_p::btr2_r::Offset);
static_assert(offsetof(fmc_p, bcr3) == fmc_p::bcr3_r::Offset);
static_assert(offsetof(fmc_p, btr3) == fmc_p::btr3_r::Offset);
static_assert(offsetof(fmc_p, bcr4) == fmc_p::bcr4_r::Offset);
static_assert(offsetof(fmc_p, btr4) == fmc_p::btr4_r::Offset);
static_assert(offsetof(fmc_p, pcscntr) == fmc_p::pcscntr_r::Offset);
static_assert(offsetof(fmc_p, pcr) == fmc_p::pcr_r::Offset);
static_assert(offsetof(fmc_p, sr) == fmc_p::sr_r::Offset);
static_assert(offsetof(fmc_p, pmem) == fmc_p::pmem_r::Offset);
static_assert(offsetof(fmc_p, patt) == fmc_p::patt_r::Offset);
static_assert(offsetof(fmc_p, eccr) == fmc_p::eccr_r::Offset);
static_assert(offsetof(fmc_p, bwtr1) == fmc_p::bwtr1_r::Offset);
static_assert(offsetof(fmc_p, bwtr2) == fmc_p::bwtr2_r::Offset);
static_assert(offsetof(fmc_p, bwtr3) == fmc_p::bwtr3_r::Offset);
static_assert(offsetof(fmc_p, bwtr4) == fmc_p::bwtr4_r::Offset);

inline fmc_p& fmc = *reinterpret_cast<fmc_p*>(0xA0000000);

} // STM32G473XX

