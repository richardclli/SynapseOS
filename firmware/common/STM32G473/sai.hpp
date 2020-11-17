#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Serial audio interface
 */
class sai_p {
public:
/**
 * BConfiguration register 1
 */
class bcr1_r {
public:

/**
 * MCKEN
 */
class mcken_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mcken_f(bool value = true) : m_value(value) {}
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
 * OSR
 */
class osr_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr osr_f(bool value = true) : m_value(value) {}
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
 * Master clock divider
 */
class mcjdiv_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcjdiv_f(uint8_t value) : m_value(value & Range) {}
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
 * No divider
 */
class nodiv_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr nodiv_f(bool value = true) : m_value(value) {}
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
 * DMA enable
 */
class dmaen_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmaen_f(bool value = true) : m_value(value) {}
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
 * Audio block B enable
 */
class saiben_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr saiben_f(bool value = true) : m_value(value) {}
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
 * Output drive
 */
class outdri_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr outdri_f(bool value = true) : m_value(value) {}
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
 * Mono mode
 */
class mono_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mono_f(bool value = true) : m_value(value) {}
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
 * Synchronization enable
 */
class syncen_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr syncen_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bcr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Clock strobing edge
 */
class ckstr_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ckstr_f(bool value = true) : m_value(value) {}
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
 * Least significant bit first
 */
class lsbfirst_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lsbfirst_f(bool value = true) : m_value(value) {}
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
 * Data size
 */
class ds_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ds_f(uint8_t value) : m_value(value & Range) {}
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
 * Protocol configuration
 */
class prtcfg_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr prtcfg_f(uint8_t value) : m_value(value & Range) {}
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
 * Audio block mode
 */
class mode_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bcr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr1_r>() const {return ClearSet<bcr1_r>(Mask, *this);}
	constexpr auto operator|(bcr1_r other) const -> bcr1_r { return static_cast<bcr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr1_r> other) const -> ClearSet<bcr1_r> {return ClearSet<bcr1_r>(bcr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mcken() const -> mcken_f {return mcken_f((m_value & mcken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto osr() const -> osr_f {return osr_f((m_value & osr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mcjdiv() const -> mcjdiv_f {return mcjdiv_f(static_cast<uint8_t>(m_value >> mcjdiv_f::Offset));}
	[[nodiscard]] constexpr auto nodiv() const -> nodiv_f {return nodiv_f((m_value & nodiv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaen() const -> dmaen_f {return dmaen_f((m_value & dmaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto saiben() const -> saiben_f {return saiben_f((m_value & saiben_f::Mask) != 0);}
	[[nodiscard]] constexpr auto outdri() const -> outdri_f {return outdri_f((m_value & outdri_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mono() const -> mono_f {return mono_f((m_value & mono_f::Mask) != 0);}
	[[nodiscard]] constexpr auto syncen() const -> syncen_f {return syncen_f(static_cast<uint8_t>(m_value >> syncen_f::Offset));}
	[[nodiscard]] constexpr auto ckstr() const -> ckstr_f {return ckstr_f((m_value & ckstr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsbfirst() const -> lsbfirst_f {return lsbfirst_f((m_value & lsbfirst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ds() const -> ds_f {return ds_f(static_cast<uint8_t>(m_value >> ds_f::Offset));}
	[[nodiscard]] constexpr auto prtcfg() const -> prtcfg_f {return prtcfg_f(static_cast<uint8_t>(m_value >> prtcfg_f::Offset));}
	[[nodiscard]] constexpr auto mode() const -> mode_f {return mode_f(static_cast<uint8_t>(m_value >> mode_f::Offset));}

	constexpr bcr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bcr1_r other) const -> bcr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bcr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0b1000000; // 64 0x40

private:
	uint32_t m_value;
};
/**
 * BConfiguration register 2
 */
class bcr2_r {
public:

/**
 * Companding mode
 */
class comp_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr comp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bcr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Complement bit
 */
class cpl_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cpl_f(bool value = true) : m_value(value) {}
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
 * Mute counter
 */
class mutecn_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mutecn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bcr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Mute value
 */
class muteval_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr muteval_f(bool value = true) : m_value(value) {}
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
 * Mute
 */
class mute_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mute_f(bool value = true) : m_value(value) {}
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
 * Tristate management on data line
 */
class tris_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tris_f(bool value = true) : m_value(value) {}
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
 * FIFO flush
 */
class fflus_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fflus_f(bool value = true) : m_value(value) {}
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
 * FIFO threshold
 */
class fth_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fth_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bcr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bcr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bcr2_r>() const {return ClearSet<bcr2_r>(Mask, *this);}
	constexpr auto operator|(bcr2_r other) const -> bcr2_r { return static_cast<bcr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bcr2_r> other) const -> ClearSet<bcr2_r> {return ClearSet<bcr2_r>(bcr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto comp() const -> comp_f {return comp_f(static_cast<uint8_t>(m_value >> comp_f::Offset));}
	[[nodiscard]] constexpr auto cpl() const -> cpl_f {return cpl_f((m_value & cpl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mutecn() const -> mutecn_f {return mutecn_f(static_cast<uint8_t>(m_value >> mutecn_f::Offset));}
	[[nodiscard]] constexpr auto muteval() const -> muteval_f {return muteval_f((m_value & muteval_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mute() const -> mute_f {return mute_f((m_value & mute_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tris() const -> tris_f {return tris_f((m_value & tris_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fflus() const -> fflus_f {return fflus_f((m_value & fflus_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fth() const -> fth_f {return fth_f(static_cast<uint8_t>(m_value >> fth_f::Offset));}

	constexpr bcr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bcr2_r other) const -> bcr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bcr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * BFRCR
 */
class bfrcr_r {
public:

/**
 * Frame synchronization offset
 */
class fsoff_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fsoff_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bfrcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bfrcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bfrcr_r>() const {return ClearSet<bfrcr_r>(Mask, *this);}
	constexpr auto operator|(bfrcr_r other) const -> bfrcr_r { return static_cast<bfrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bfrcr_r> other) const -> ClearSet<bfrcr_r> {return ClearSet<bfrcr_r>(bfrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Frame synchronization polarity
 */
class fspol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fspol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bfrcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bfrcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bfrcr_r>() const {return ClearSet<bfrcr_r>(Mask, *this);}
	constexpr auto operator|(bfrcr_r other) const -> bfrcr_r { return static_cast<bfrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bfrcr_r> other) const -> ClearSet<bfrcr_r> {return ClearSet<bfrcr_r>(bfrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Frame synchronization definition
 */
class fsdef_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fsdef_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bfrcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bfrcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bfrcr_r>() const {return ClearSet<bfrcr_r>(Mask, *this);}
	constexpr auto operator|(bfrcr_r other) const -> bfrcr_r { return static_cast<bfrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bfrcr_r> other) const -> ClearSet<bfrcr_r> {return ClearSet<bfrcr_r>(bfrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Frame synchronization active level length
 */
class fsall_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr fsall_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bfrcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bfrcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bfrcr_r>() const {return ClearSet<bfrcr_r>(Mask, *this);}
	constexpr auto operator|(bfrcr_r other) const -> bfrcr_r { return static_cast<bfrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bfrcr_r> other) const -> ClearSet<bfrcr_r> {return ClearSet<bfrcr_r>(bfrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Frame length
 */
class frl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr frl_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bfrcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bfrcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bfrcr_r>() const {return ClearSet<bfrcr_r>(Mask, *this);}
	constexpr auto operator|(bfrcr_r other) const -> bfrcr_r { return static_cast<bfrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bfrcr_r> other) const -> ClearSet<bfrcr_r> {return ClearSet<bfrcr_r>(bfrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto fsoff() const -> fsoff_f {return fsoff_f((m_value & fsoff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fspol() const -> fspol_f {return fspol_f((m_value & fspol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fsdef() const -> fsdef_f {return fsdef_f((m_value & fsdef_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fsall() const -> fsall_f {return fsall_f(static_cast<uint8_t>(m_value >> fsall_f::Offset));}
	[[nodiscard]] constexpr auto frl() const -> frl_f {return frl_f(static_cast<uint8_t>(m_value >> frl_f::Offset));}

	constexpr bfrcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bfrcr_r other) const -> bfrcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bfrcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0b111; // 7 0x7

private:
	uint32_t m_value;
};
/**
 * BSlot register
 */
class bslotr_r {
public:

/**
 * Slot enable
 */
class sloten_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sloten_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator bslotr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bslotr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bslotr_r>() const {return ClearSet<bslotr_r>(Mask, *this);}
	constexpr auto operator|(bslotr_r other) const -> bslotr_r { return static_cast<bslotr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bslotr_r> other) const -> ClearSet<bslotr_r> {return ClearSet<bslotr_r>(bslotr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Number of slots in an audio frame
 */
class nbslot_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr nbslot_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bslotr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bslotr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bslotr_r>() const {return ClearSet<bslotr_r>(Mask, *this);}
	constexpr auto operator|(bslotr_r other) const -> bslotr_r { return static_cast<bslotr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bslotr_r> other) const -> ClearSet<bslotr_r> {return ClearSet<bslotr_r>(bslotr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Slot size
 */
class slotsz_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr slotsz_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bslotr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bslotr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bslotr_r>() const {return ClearSet<bslotr_r>(Mask, *this);}
	constexpr auto operator|(bslotr_r other) const -> bslotr_r { return static_cast<bslotr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bslotr_r> other) const -> ClearSet<bslotr_r> {return ClearSet<bslotr_r>(bslotr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * First bit offset
 */
class fboff_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fboff_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bslotr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bslotr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bslotr_r>() const {return ClearSet<bslotr_r>(Mask, *this);}
	constexpr auto operator|(bslotr_r other) const -> bslotr_r { return static_cast<bslotr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bslotr_r> other) const -> ClearSet<bslotr_r> {return ClearSet<bslotr_r>(bslotr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sloten() const -> sloten_f {return sloten_f(static_cast<uint16_t>(m_value >> sloten_f::Offset));}
	[[nodiscard]] constexpr auto nbslot() const -> nbslot_f {return nbslot_f(static_cast<uint8_t>(m_value >> nbslot_f::Offset));}
	[[nodiscard]] constexpr auto slotsz() const -> slotsz_f {return slotsz_f(static_cast<uint8_t>(m_value >> slotsz_f::Offset));}
	[[nodiscard]] constexpr auto fboff() const -> fboff_f {return fboff_f(static_cast<uint8_t>(m_value >> fboff_f::Offset));}

	constexpr bslotr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bslotr_r other) const -> bslotr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bslotr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * BInterrupt mask register2
 */
class bim_r {
public:

/**
 * Late frame synchronization detection interrupt enable
 */
class lfsdetie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lfsdetie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bim_r>() const {return ClearSet<bim_r>(Mask, *this);}
	constexpr auto operator|(bim_r other) const -> bim_r { return static_cast<bim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bim_r> other) const -> ClearSet<bim_r> {return ClearSet<bim_r>(bim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Anticipated frame synchronization detection interrupt enable
 */
class afsdetie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr afsdetie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bim_r>() const {return ClearSet<bim_r>(Mask, *this);}
	constexpr auto operator|(bim_r other) const -> bim_r { return static_cast<bim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bim_r> other) const -> ClearSet<bim_r> {return ClearSet<bim_r>(bim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Codec not ready interrupt enable
 */
class cnrdyie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cnrdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bim_r>() const {return ClearSet<bim_r>(Mask, *this);}
	constexpr auto operator|(bim_r other) const -> bim_r { return static_cast<bim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bim_r> other) const -> ClearSet<bim_r> {return ClearSet<bim_r>(bim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FIFO request interrupt enable
 */
class freqie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr freqie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bim_r>() const {return ClearSet<bim_r>(Mask, *this);}
	constexpr auto operator|(bim_r other) const -> bim_r { return static_cast<bim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bim_r> other) const -> ClearSet<bim_r> {return ClearSet<bim_r>(bim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wrong clock configuration interrupt enable
 */
class wckcfg_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wckcfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bim_r>() const {return ClearSet<bim_r>(Mask, *this);}
	constexpr auto operator|(bim_r other) const -> bim_r { return static_cast<bim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bim_r> other) const -> ClearSet<bim_r> {return ClearSet<bim_r>(bim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute detection interrupt enable
 */
class mutedet_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mutedet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bim_r>() const {return ClearSet<bim_r>(Mask, *this);}
	constexpr auto operator|(bim_r other) const -> bim_r { return static_cast<bim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bim_r> other) const -> ClearSet<bim_r> {return ClearSet<bim_r>(bim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Overrun/underrun interrupt enable
 */
class ovrudrie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovrudrie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bim_r>() const {return ClearSet<bim_r>(Mask, *this);}
	constexpr auto operator|(bim_r other) const -> bim_r { return static_cast<bim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bim_r> other) const -> ClearSet<bim_r> {return ClearSet<bim_r>(bim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lfsdetie() const -> lfsdetie_f {return lfsdetie_f((m_value & lfsdetie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto afsdetie() const -> afsdetie_f {return afsdetie_f((m_value & afsdetie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnrdyie() const -> cnrdyie_f {return cnrdyie_f((m_value & cnrdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto freqie() const -> freqie_f {return freqie_f((m_value & freqie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wckcfg() const -> wckcfg_f {return wckcfg_f((m_value & wckcfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mutedet() const -> mutedet_f {return mutedet_f((m_value & mutedet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrudrie() const -> ovrudrie_f {return ovrudrie_f((m_value & ovrudrie_f::Mask) != 0);}

	constexpr bim_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bim_r other) const -> bim_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bim_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * BStatus register
 */
class bsr_r {
public:

/**
 * FIFO level threshold
 */
class flvl_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr flvl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bsr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bsr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsr_r>() const {return ClearSet<bsr_r>(Mask, *this);}
	constexpr auto operator|(bsr_r other) const -> bsr_r { return static_cast<bsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsr_r> other) const -> ClearSet<bsr_r> {return ClearSet<bsr_r>(bsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Late frame synchronization detection
 */
class lfsdet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lfsdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsr_r>() const {return ClearSet<bsr_r>(Mask, *this);}
	constexpr auto operator|(bsr_r other) const -> bsr_r { return static_cast<bsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsr_r> other) const -> ClearSet<bsr_r> {return ClearSet<bsr_r>(bsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Anticipated frame synchronization detection
 */
class afsdet_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr afsdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsr_r>() const {return ClearSet<bsr_r>(Mask, *this);}
	constexpr auto operator|(bsr_r other) const -> bsr_r { return static_cast<bsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsr_r> other) const -> ClearSet<bsr_r> {return ClearSet<bsr_r>(bsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Codec not ready
 */
class cnrdy_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cnrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsr_r>() const {return ClearSet<bsr_r>(Mask, *this);}
	constexpr auto operator|(bsr_r other) const -> bsr_r { return static_cast<bsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsr_r> other) const -> ClearSet<bsr_r> {return ClearSet<bsr_r>(bsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FIFO request
 */
class freq_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr freq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsr_r>() const {return ClearSet<bsr_r>(Mask, *this);}
	constexpr auto operator|(bsr_r other) const -> bsr_r { return static_cast<bsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsr_r> other) const -> ClearSet<bsr_r> {return ClearSet<bsr_r>(bsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wrong clock configuration flag
 */
class wckcfg_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wckcfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsr_r>() const {return ClearSet<bsr_r>(Mask, *this);}
	constexpr auto operator|(bsr_r other) const -> bsr_r { return static_cast<bsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsr_r> other) const -> ClearSet<bsr_r> {return ClearSet<bsr_r>(bsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute detection
 */
class mutedet_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mutedet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsr_r>() const {return ClearSet<bsr_r>(Mask, *this);}
	constexpr auto operator|(bsr_r other) const -> bsr_r { return static_cast<bsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsr_r> other) const -> ClearSet<bsr_r> {return ClearSet<bsr_r>(bsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Overrun / underrun
 */
class ovrudr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovrudr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bsr_r>() const {return ClearSet<bsr_r>(Mask, *this);}
	constexpr auto operator|(bsr_r other) const -> bsr_r { return static_cast<bsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bsr_r> other) const -> ClearSet<bsr_r> {return ClearSet<bsr_r>(bsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto flvl() const -> flvl_f {return flvl_f(static_cast<uint8_t>(m_value >> flvl_f::Offset));}
	[[nodiscard]] constexpr auto lfsdet() const -> lfsdet_f {return lfsdet_f((m_value & lfsdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto afsdet() const -> afsdet_f {return afsdet_f((m_value & afsdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnrdy() const -> cnrdy_f {return cnrdy_f((m_value & cnrdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto freq() const -> freq_f {return freq_f((m_value & freq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wckcfg() const -> wckcfg_f {return wckcfg_f((m_value & wckcfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mutedet() const -> mutedet_f {return mutedet_f((m_value & mutedet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrudr() const -> ovrudr_f {return ovrudr_f((m_value & ovrudr_f::Mask) != 0);}

	constexpr bsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bsr_r other) const -> bsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * BClear flag register
 */
class bclrfr_r {
public:

/**
 * Clear late frame synchronization detection flag
 */
class lfsdet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lfsdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bclrfr_r>() const {return ClearSet<bclrfr_r>(Mask, *this);}
	constexpr auto operator|(bclrfr_r other) const -> bclrfr_r { return static_cast<bclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bclrfr_r> other) const -> ClearSet<bclrfr_r> {return ClearSet<bclrfr_r>(bclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear anticipated frame synchronization detection flag
 */
class cafsdet_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cafsdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bclrfr_r>() const {return ClearSet<bclrfr_r>(Mask, *this);}
	constexpr auto operator|(bclrfr_r other) const -> bclrfr_r { return static_cast<bclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bclrfr_r> other) const -> ClearSet<bclrfr_r> {return ClearSet<bclrfr_r>(bclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear codec not ready flag
 */
class cnrdy_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cnrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bclrfr_r>() const {return ClearSet<bclrfr_r>(Mask, *this);}
	constexpr auto operator|(bclrfr_r other) const -> bclrfr_r { return static_cast<bclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bclrfr_r> other) const -> ClearSet<bclrfr_r> {return ClearSet<bclrfr_r>(bclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear wrong clock configuration flag
 */
class wckcfg_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wckcfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bclrfr_r>() const {return ClearSet<bclrfr_r>(Mask, *this);}
	constexpr auto operator|(bclrfr_r other) const -> bclrfr_r { return static_cast<bclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bclrfr_r> other) const -> ClearSet<bclrfr_r> {return ClearSet<bclrfr_r>(bclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute detection flag
 */
class mutedet_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mutedet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bclrfr_r>() const {return ClearSet<bclrfr_r>(Mask, *this);}
	constexpr auto operator|(bclrfr_r other) const -> bclrfr_r { return static_cast<bclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bclrfr_r> other) const -> ClearSet<bclrfr_r> {return ClearSet<bclrfr_r>(bclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear overrun / underrun
 */
class ovrudr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovrudr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bclrfr_r>() const {return ClearSet<bclrfr_r>(Mask, *this);}
	constexpr auto operator|(bclrfr_r other) const -> bclrfr_r { return static_cast<bclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bclrfr_r> other) const -> ClearSet<bclrfr_r> {return ClearSet<bclrfr_r>(bclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lfsdet() const -> lfsdet_f {return lfsdet_f((m_value & lfsdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cafsdet() const -> cafsdet_f {return cafsdet_f((m_value & cafsdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnrdy() const -> cnrdy_f {return cnrdy_f((m_value & cnrdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wckcfg() const -> wckcfg_f {return wckcfg_f((m_value & wckcfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mutedet() const -> mutedet_f {return mutedet_f((m_value & mutedet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrudr() const -> ovrudr_f {return ovrudr_f((m_value & ovrudr_f::Mask) != 0);}

	constexpr bclrfr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bclrfr_r other) const -> bclrfr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bclrfr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * BData register
 */
class bdr_r {
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
	constexpr operator bdr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bdr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdr_r>() const {return ClearSet<bdr_r>(Mask, *this);}
	constexpr auto operator|(bdr_r other) const -> bdr_r { return static_cast<bdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdr_r> other) const -> ClearSet<bdr_r> {return ClearSet<bdr_r>(bdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto data() const -> data_f {return data_f(static_cast<uint32_t>(m_value >> data_f::Offset));}

	constexpr bdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bdr_r other) const -> bdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AConfiguration register 1
 */
class acr1_r {
public:

/**
 * MCKEN
 */
class mcken_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mcken_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OSR
 */
class osr_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr osr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Master clock divider
 */
class mcjdiv_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mcjdiv_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator acr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(acr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * No divider
 */
class nodiv_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr nodiv_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA enable
 */
class dmaen_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Audio block A enable
 */
class saiaen_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr saiaen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output drive
 */
class outdri_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr outdri_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mono mode
 */
class mono_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mono_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization enable
 */
class syncen_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr syncen_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator acr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(acr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Clock strobing edge
 */
class ckstr_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ckstr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Least significant bit first
 */
class lsbfirst_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lsbfirst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Data size
 */
class ds_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ds_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator acr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(acr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Protocol configuration
 */
class prtcfg_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr prtcfg_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator acr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(acr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Audio block mode
 */
class mode_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator acr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(acr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr1_r>() const {return ClearSet<acr1_r>(Mask, *this);}
	constexpr auto operator|(acr1_r other) const -> acr1_r { return static_cast<acr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr1_r> other) const -> ClearSet<acr1_r> {return ClearSet<acr1_r>(acr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mcken() const -> mcken_f {return mcken_f((m_value & mcken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto osr() const -> osr_f {return osr_f((m_value & osr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mcjdiv() const -> mcjdiv_f {return mcjdiv_f(static_cast<uint8_t>(m_value >> mcjdiv_f::Offset));}
	[[nodiscard]] constexpr auto nodiv() const -> nodiv_f {return nodiv_f((m_value & nodiv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaen() const -> dmaen_f {return dmaen_f((m_value & dmaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto saiaen() const -> saiaen_f {return saiaen_f((m_value & saiaen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto outdri() const -> outdri_f {return outdri_f((m_value & outdri_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mono() const -> mono_f {return mono_f((m_value & mono_f::Mask) != 0);}
	[[nodiscard]] constexpr auto syncen() const -> syncen_f {return syncen_f(static_cast<uint8_t>(m_value >> syncen_f::Offset));}
	[[nodiscard]] constexpr auto ckstr() const -> ckstr_f {return ckstr_f((m_value & ckstr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsbfirst() const -> lsbfirst_f {return lsbfirst_f((m_value & lsbfirst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ds() const -> ds_f {return ds_f(static_cast<uint8_t>(m_value >> ds_f::Offset));}
	[[nodiscard]] constexpr auto prtcfg() const -> prtcfg_f {return prtcfg_f(static_cast<uint8_t>(m_value >> prtcfg_f::Offset));}
	[[nodiscard]] constexpr auto mode() const -> mode_f {return mode_f(static_cast<uint8_t>(m_value >> mode_f::Offset));}

	constexpr acr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(acr1_r other) const -> acr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> acr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0b1000000; // 64 0x40

private:
	uint32_t m_value;
};
/**
 * AConfiguration register 2
 */
class acr2_r {
public:

/**
 * Companding mode
 */
class comp_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr comp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator acr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(acr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr2_r>() const {return ClearSet<acr2_r>(Mask, *this);}
	constexpr auto operator|(acr2_r other) const -> acr2_r { return static_cast<acr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr2_r> other) const -> ClearSet<acr2_r> {return ClearSet<acr2_r>(acr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Complement bit
 */
class cpl_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cpl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr2_r>() const {return ClearSet<acr2_r>(Mask, *this);}
	constexpr auto operator|(acr2_r other) const -> acr2_r { return static_cast<acr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr2_r> other) const -> ClearSet<acr2_r> {return ClearSet<acr2_r>(acr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute counter
 */
class mutecn_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mutecn_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator acr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(acr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr2_r>() const {return ClearSet<acr2_r>(Mask, *this);}
	constexpr auto operator|(acr2_r other) const -> acr2_r { return static_cast<acr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr2_r> other) const -> ClearSet<acr2_r> {return ClearSet<acr2_r>(acr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Mute value
 */
class muteval_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr muteval_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr2_r>() const {return ClearSet<acr2_r>(Mask, *this);}
	constexpr auto operator|(acr2_r other) const -> acr2_r { return static_cast<acr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr2_r> other) const -> ClearSet<acr2_r> {return ClearSet<acr2_r>(acr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute
 */
class mute_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mute_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr2_r>() const {return ClearSet<acr2_r>(Mask, *this);}
	constexpr auto operator|(acr2_r other) const -> acr2_r { return static_cast<acr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr2_r> other) const -> ClearSet<acr2_r> {return ClearSet<acr2_r>(acr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Tristate management on data line
 */
class tris_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tris_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr2_r>() const {return ClearSet<acr2_r>(Mask, *this);}
	constexpr auto operator|(acr2_r other) const -> acr2_r { return static_cast<acr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr2_r> other) const -> ClearSet<acr2_r> {return ClearSet<acr2_r>(acr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FIFO flush
 */
class fflus_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fflus_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr2_r>() const {return ClearSet<acr2_r>(Mask, *this);}
	constexpr auto operator|(acr2_r other) const -> acr2_r { return static_cast<acr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr2_r> other) const -> ClearSet<acr2_r> {return ClearSet<acr2_r>(acr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FIFO threshold
 */
class fth_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fth_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator acr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(acr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr2_r>() const {return ClearSet<acr2_r>(Mask, *this);}
	constexpr auto operator|(acr2_r other) const -> acr2_r { return static_cast<acr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr2_r> other) const -> ClearSet<acr2_r> {return ClearSet<acr2_r>(acr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto comp() const -> comp_f {return comp_f(static_cast<uint8_t>(m_value >> comp_f::Offset));}
	[[nodiscard]] constexpr auto cpl() const -> cpl_f {return cpl_f((m_value & cpl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mutecn() const -> mutecn_f {return mutecn_f(static_cast<uint8_t>(m_value >> mutecn_f::Offset));}
	[[nodiscard]] constexpr auto muteval() const -> muteval_f {return muteval_f((m_value & muteval_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mute() const -> mute_f {return mute_f((m_value & mute_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tris() const -> tris_f {return tris_f((m_value & tris_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fflus() const -> fflus_f {return fflus_f((m_value & fflus_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fth() const -> fth_f {return fth_f(static_cast<uint8_t>(m_value >> fth_f::Offset));}

	constexpr acr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(acr2_r other) const -> acr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> acr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AFRCR
 */
class afrcr_r {
public:

/**
 * Frame synchronization offset
 */
class fsoff_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fsoff_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator afrcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(afrcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrcr_r>() const {return ClearSet<afrcr_r>(Mask, *this);}
	constexpr auto operator|(afrcr_r other) const -> afrcr_r { return static_cast<afrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrcr_r> other) const -> ClearSet<afrcr_r> {return ClearSet<afrcr_r>(afrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Frame synchronization polarity
 */
class fspol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fspol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator afrcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(afrcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrcr_r>() const {return ClearSet<afrcr_r>(Mask, *this);}
	constexpr auto operator|(afrcr_r other) const -> afrcr_r { return static_cast<afrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrcr_r> other) const -> ClearSet<afrcr_r> {return ClearSet<afrcr_r>(afrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Frame synchronization definition
 */
class fsdef_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fsdef_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator afrcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(afrcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrcr_r>() const {return ClearSet<afrcr_r>(Mask, *this);}
	constexpr auto operator|(afrcr_r other) const -> afrcr_r { return static_cast<afrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrcr_r> other) const -> ClearSet<afrcr_r> {return ClearSet<afrcr_r>(afrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Frame synchronization active level length
 */
class fsall_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr fsall_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(afrcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrcr_r>() const {return ClearSet<afrcr_r>(Mask, *this);}
	constexpr auto operator|(afrcr_r other) const -> afrcr_r { return static_cast<afrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrcr_r> other) const -> ClearSet<afrcr_r> {return ClearSet<afrcr_r>(afrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Frame length
 */
class frl_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr frl_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator afrcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(afrcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<afrcr_r>() const {return ClearSet<afrcr_r>(Mask, *this);}
	constexpr auto operator|(afrcr_r other) const -> afrcr_r { return static_cast<afrcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afrcr_r> other) const -> ClearSet<afrcr_r> {return ClearSet<afrcr_r>(afrcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto fsoff() const -> fsoff_f {return fsoff_f((m_value & fsoff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fspol() const -> fspol_f {return fspol_f((m_value & fspol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fsdef() const -> fsdef_f {return fsdef_f((m_value & fsdef_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fsall() const -> fsall_f {return fsall_f(static_cast<uint8_t>(m_value >> fsall_f::Offset));}
	[[nodiscard]] constexpr auto frl() const -> frl_f {return frl_f(static_cast<uint8_t>(m_value >> frl_f::Offset));}

	constexpr afrcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(afrcr_r other) const -> afrcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> afrcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0b111; // 7 0x7

private:
	uint32_t m_value;
};
/**
 * ASlot register
 */
class aslotr_r {
public:

/**
 * Slot enable
 */
class sloten_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sloten_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator aslotr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(aslotr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aslotr_r>() const {return ClearSet<aslotr_r>(Mask, *this);}
	constexpr auto operator|(aslotr_r other) const -> aslotr_r { return static_cast<aslotr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aslotr_r> other) const -> ClearSet<aslotr_r> {return ClearSet<aslotr_r>(aslotr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Number of slots in an audio frame
 */
class nbslot_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr nbslot_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator aslotr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(aslotr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aslotr_r>() const {return ClearSet<aslotr_r>(Mask, *this);}
	constexpr auto operator|(aslotr_r other) const -> aslotr_r { return static_cast<aslotr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aslotr_r> other) const -> ClearSet<aslotr_r> {return ClearSet<aslotr_r>(aslotr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Slot size
 */
class slotsz_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr slotsz_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator aslotr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(aslotr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aslotr_r>() const {return ClearSet<aslotr_r>(Mask, *this);}
	constexpr auto operator|(aslotr_r other) const -> aslotr_r { return static_cast<aslotr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aslotr_r> other) const -> ClearSet<aslotr_r> {return ClearSet<aslotr_r>(aslotr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * First bit offset
 */
class fboff_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fboff_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator aslotr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(aslotr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aslotr_r>() const {return ClearSet<aslotr_r>(Mask, *this);}
	constexpr auto operator|(aslotr_r other) const -> aslotr_r { return static_cast<aslotr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aslotr_r> other) const -> ClearSet<aslotr_r> {return ClearSet<aslotr_r>(aslotr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sloten() const -> sloten_f {return sloten_f(static_cast<uint16_t>(m_value >> sloten_f::Offset));}
	[[nodiscard]] constexpr auto nbslot() const -> nbslot_f {return nbslot_f(static_cast<uint8_t>(m_value >> nbslot_f::Offset));}
	[[nodiscard]] constexpr auto slotsz() const -> slotsz_f {return slotsz_f(static_cast<uint8_t>(m_value >> slotsz_f::Offset));}
	[[nodiscard]] constexpr auto fboff() const -> fboff_f {return fboff_f(static_cast<uint8_t>(m_value >> fboff_f::Offset));}

	constexpr aslotr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(aslotr_r other) const -> aslotr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> aslotr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AInterrupt mask register2
 */
class aim_r {
public:

/**
 * Late frame synchronization detection interrupt enable
 */
class lfsdet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lfsdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aim_r>() const {return ClearSet<aim_r>(Mask, *this);}
	constexpr auto operator|(aim_r other) const -> aim_r { return static_cast<aim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aim_r> other) const -> ClearSet<aim_r> {return ClearSet<aim_r>(aim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Anticipated frame synchronization detection interrupt enable
 */
class afsdetie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr afsdetie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aim_r>() const {return ClearSet<aim_r>(Mask, *this);}
	constexpr auto operator|(aim_r other) const -> aim_r { return static_cast<aim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aim_r> other) const -> ClearSet<aim_r> {return ClearSet<aim_r>(aim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Codec not ready interrupt enable
 */
class cnrdyie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cnrdyie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aim_r>() const {return ClearSet<aim_r>(Mask, *this);}
	constexpr auto operator|(aim_r other) const -> aim_r { return static_cast<aim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aim_r> other) const -> ClearSet<aim_r> {return ClearSet<aim_r>(aim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FIFO request interrupt enable
 */
class freqie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr freqie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aim_r>() const {return ClearSet<aim_r>(Mask, *this);}
	constexpr auto operator|(aim_r other) const -> aim_r { return static_cast<aim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aim_r> other) const -> ClearSet<aim_r> {return ClearSet<aim_r>(aim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wrong clock configuration interrupt enable
 */
class wckcfg_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wckcfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aim_r>() const {return ClearSet<aim_r>(Mask, *this);}
	constexpr auto operator|(aim_r other) const -> aim_r { return static_cast<aim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aim_r> other) const -> ClearSet<aim_r> {return ClearSet<aim_r>(aim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute detection interrupt enable
 */
class mutedet_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mutedet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aim_r>() const {return ClearSet<aim_r>(Mask, *this);}
	constexpr auto operator|(aim_r other) const -> aim_r { return static_cast<aim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aim_r> other) const -> ClearSet<aim_r> {return ClearSet<aim_r>(aim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Overrun/underrun interrupt enable
 */
class ovrudrie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovrudrie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aim_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aim_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aim_r>() const {return ClearSet<aim_r>(Mask, *this);}
	constexpr auto operator|(aim_r other) const -> aim_r { return static_cast<aim_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aim_r> other) const -> ClearSet<aim_r> {return ClearSet<aim_r>(aim_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lfsdet() const -> lfsdet_f {return lfsdet_f((m_value & lfsdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto afsdetie() const -> afsdetie_f {return afsdetie_f((m_value & afsdetie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnrdyie() const -> cnrdyie_f {return cnrdyie_f((m_value & cnrdyie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto freqie() const -> freqie_f {return freqie_f((m_value & freqie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wckcfg() const -> wckcfg_f {return wckcfg_f((m_value & wckcfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mutedet() const -> mutedet_f {return mutedet_f((m_value & mutedet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrudrie() const -> ovrudrie_f {return ovrudrie_f((m_value & ovrudrie_f::Mask) != 0);}

	constexpr aim_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(aim_r other) const -> aim_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> aim_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AStatus register
 */
class asr_r {
public:

/**
 * FIFO level threshold
 */
class flvl_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr flvl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator asr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(asr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<asr_r>() const {return ClearSet<asr_r>(Mask, *this);}
	constexpr auto operator|(asr_r other) const -> asr_r { return static_cast<asr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<asr_r> other) const -> ClearSet<asr_r> {return ClearSet<asr_r>(asr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Late frame synchronization detection
 */
class lfsdet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lfsdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator asr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(asr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<asr_r>() const {return ClearSet<asr_r>(Mask, *this);}
	constexpr auto operator|(asr_r other) const -> asr_r { return static_cast<asr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<asr_r> other) const -> ClearSet<asr_r> {return ClearSet<asr_r>(asr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Anticipated frame synchronization detection
 */
class afsdet_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr afsdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator asr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(asr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<asr_r>() const {return ClearSet<asr_r>(Mask, *this);}
	constexpr auto operator|(asr_r other) const -> asr_r { return static_cast<asr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<asr_r> other) const -> ClearSet<asr_r> {return ClearSet<asr_r>(asr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Codec not ready
 */
class cnrdy_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cnrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator asr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(asr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<asr_r>() const {return ClearSet<asr_r>(Mask, *this);}
	constexpr auto operator|(asr_r other) const -> asr_r { return static_cast<asr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<asr_r> other) const -> ClearSet<asr_r> {return ClearSet<asr_r>(asr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FIFO request
 */
class freq_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr freq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator asr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(asr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<asr_r>() const {return ClearSet<asr_r>(Mask, *this);}
	constexpr auto operator|(asr_r other) const -> asr_r { return static_cast<asr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<asr_r> other) const -> ClearSet<asr_r> {return ClearSet<asr_r>(asr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wrong clock configuration flag. This bit is read only
 */
class wckcfg_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wckcfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator asr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(asr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<asr_r>() const {return ClearSet<asr_r>(Mask, *this);}
	constexpr auto operator|(asr_r other) const -> asr_r { return static_cast<asr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<asr_r> other) const -> ClearSet<asr_r> {return ClearSet<asr_r>(asr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute detection
 */
class mutedet_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mutedet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator asr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(asr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<asr_r>() const {return ClearSet<asr_r>(Mask, *this);}
	constexpr auto operator|(asr_r other) const -> asr_r { return static_cast<asr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<asr_r> other) const -> ClearSet<asr_r> {return ClearSet<asr_r>(asr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Overrun / underrun
 */
class ovrudr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovrudr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator asr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(asr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<asr_r>() const {return ClearSet<asr_r>(Mask, *this);}
	constexpr auto operator|(asr_r other) const -> asr_r { return static_cast<asr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<asr_r> other) const -> ClearSet<asr_r> {return ClearSet<asr_r>(asr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto flvl() const -> flvl_f {return flvl_f(static_cast<uint8_t>(m_value >> flvl_f::Offset));}
	[[nodiscard]] constexpr auto lfsdet() const -> lfsdet_f {return lfsdet_f((m_value & lfsdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto afsdet() const -> afsdet_f {return afsdet_f((m_value & afsdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnrdy() const -> cnrdy_f {return cnrdy_f((m_value & cnrdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto freq() const -> freq_f {return freq_f((m_value & freq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wckcfg() const -> wckcfg_f {return wckcfg_f((m_value & wckcfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mutedet() const -> mutedet_f {return mutedet_f((m_value & mutedet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrudr() const -> ovrudr_f {return ovrudr_f((m_value & ovrudr_f::Mask) != 0);}

	constexpr asr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(asr_r other) const -> asr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> asr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AClear flag register
 */
class aclrfr_r {
public:

/**
 * Clear late frame synchronization detection flag
 */
class lfsdet_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lfsdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aclrfr_r>() const {return ClearSet<aclrfr_r>(Mask, *this);}
	constexpr auto operator|(aclrfr_r other) const -> aclrfr_r { return static_cast<aclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aclrfr_r> other) const -> ClearSet<aclrfr_r> {return ClearSet<aclrfr_r>(aclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear anticipated frame synchronization detection flag
 */
class cafsdet_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cafsdet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aclrfr_r>() const {return ClearSet<aclrfr_r>(Mask, *this);}
	constexpr auto operator|(aclrfr_r other) const -> aclrfr_r { return static_cast<aclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aclrfr_r> other) const -> ClearSet<aclrfr_r> {return ClearSet<aclrfr_r>(aclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear codec not ready flag
 */
class cnrdy_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cnrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aclrfr_r>() const {return ClearSet<aclrfr_r>(Mask, *this);}
	constexpr auto operator|(aclrfr_r other) const -> aclrfr_r { return static_cast<aclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aclrfr_r> other) const -> ClearSet<aclrfr_r> {return ClearSet<aclrfr_r>(aclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear wrong clock configuration flag
 */
class wckcfg_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wckcfg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aclrfr_r>() const {return ClearSet<aclrfr_r>(Mask, *this);}
	constexpr auto operator|(aclrfr_r other) const -> aclrfr_r { return static_cast<aclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aclrfr_r> other) const -> ClearSet<aclrfr_r> {return ClearSet<aclrfr_r>(aclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute detection flag
 */
class mutedet_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mutedet_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aclrfr_r>() const {return ClearSet<aclrfr_r>(Mask, *this);}
	constexpr auto operator|(aclrfr_r other) const -> aclrfr_r { return static_cast<aclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aclrfr_r> other) const -> ClearSet<aclrfr_r> {return ClearSet<aclrfr_r>(aclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Clear overrun / underrun
 */
class ovrudr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovrudr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aclrfr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(aclrfr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<aclrfr_r>() const {return ClearSet<aclrfr_r>(Mask, *this);}
	constexpr auto operator|(aclrfr_r other) const -> aclrfr_r { return static_cast<aclrfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aclrfr_r> other) const -> ClearSet<aclrfr_r> {return ClearSet<aclrfr_r>(aclrfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto lfsdet() const -> lfsdet_f {return lfsdet_f((m_value & lfsdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cafsdet() const -> cafsdet_f {return cafsdet_f((m_value & cafsdet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cnrdy() const -> cnrdy_f {return cnrdy_f((m_value & cnrdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wckcfg() const -> wckcfg_f {return wckcfg_f((m_value & wckcfg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mutedet() const -> mutedet_f {return mutedet_f((m_value & mutedet_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrudr() const -> ovrudr_f {return ovrudr_f((m_value & ovrudr_f::Mask) != 0);}

	constexpr aclrfr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(aclrfr_r other) const -> aclrfr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> aclrfr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * AData register
 */
class adr_r {
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
	constexpr operator adr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(adr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<adr_r>() const {return ClearSet<adr_r>(Mask, *this);}
	constexpr auto operator|(adr_r other) const -> adr_r { return static_cast<adr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<adr_r> other) const -> ClearSet<adr_r> {return ClearSet<adr_r>(adr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto data() const -> data_f {return data_f(static_cast<uint32_t>(m_value >> data_f::Offset));}

	constexpr adr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(adr_r other) const -> adr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> adr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * PDM control register
 */
class pdmcr_r {
public:

/**
 * PDMEN
 */
class pdmen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pdmen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdmcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdmcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmcr_r>() const {return ClearSet<pdmcr_r>(Mask, *this);}
	constexpr auto operator|(pdmcr_r other) const -> pdmcr_r { return static_cast<pdmcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmcr_r> other) const -> ClearSet<pdmcr_r> {return ClearSet<pdmcr_r>(pdmcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MICNBR
 */
class micnbr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr micnbr_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pdmcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pdmcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmcr_r>() const {return ClearSet<pdmcr_r>(Mask, *this);}
	constexpr auto operator|(pdmcr_r other) const -> pdmcr_r { return static_cast<pdmcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmcr_r> other) const -> ClearSet<pdmcr_r> {return ClearSet<pdmcr_r>(pdmcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * CKEN1
 */
class cken1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cken1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdmcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdmcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmcr_r>() const {return ClearSet<pdmcr_r>(Mask, *this);}
	constexpr auto operator|(pdmcr_r other) const -> pdmcr_r { return static_cast<pdmcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmcr_r> other) const -> ClearSet<pdmcr_r> {return ClearSet<pdmcr_r>(pdmcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CKEN2
 */
class cken2_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cken2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdmcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdmcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmcr_r>() const {return ClearSet<pdmcr_r>(Mask, *this);}
	constexpr auto operator|(pdmcr_r other) const -> pdmcr_r { return static_cast<pdmcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmcr_r> other) const -> ClearSet<pdmcr_r> {return ClearSet<pdmcr_r>(pdmcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CKEN3
 */
class cken3_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cken3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdmcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdmcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmcr_r>() const {return ClearSet<pdmcr_r>(Mask, *this);}
	constexpr auto operator|(pdmcr_r other) const -> pdmcr_r { return static_cast<pdmcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmcr_r> other) const -> ClearSet<pdmcr_r> {return ClearSet<pdmcr_r>(pdmcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CKEN4
 */
class cken4_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cken4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pdmcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pdmcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmcr_r>() const {return ClearSet<pdmcr_r>(Mask, *this);}
	constexpr auto operator|(pdmcr_r other) const -> pdmcr_r { return static_cast<pdmcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmcr_r> other) const -> ClearSet<pdmcr_r> {return ClearSet<pdmcr_r>(pdmcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pdmen() const -> pdmen_f {return pdmen_f((m_value & pdmen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto micnbr() const -> micnbr_f {return micnbr_f(static_cast<uint8_t>(m_value >> micnbr_f::Offset));}
	[[nodiscard]] constexpr auto cken1() const -> cken1_f {return cken1_f((m_value & cken1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cken2() const -> cken2_f {return cken2_f((m_value & cken2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cken3() const -> cken3_f {return cken3_f((m_value & cken3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cken4() const -> cken4_f {return cken4_f((m_value & cken4_f::Mask) != 0);}

	template<std::size_t Index> struct cken_f { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using cken_v = typename cken_f<Index>::type;
	template<std::size_t Index> constexpr auto cken() const { return cken_v<Index>::get(*this); }

	constexpr pdmcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pdmcr_r other) const -> pdmcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pdmcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * PDM delay register
 */
class pdmdly_r {
public:

/**
 * DLYM1L
 */
class dlym1l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dlym1l_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pdmdly_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pdmdly_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmdly_r>() const {return ClearSet<pdmdly_r>(Mask, *this);}
	constexpr auto operator|(pdmdly_r other) const -> pdmdly_r { return static_cast<pdmdly_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmdly_r> other) const -> ClearSet<pdmdly_r> {return ClearSet<pdmdly_r>(pdmdly_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DLYM1R
 */
class dlym1r_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dlym1r_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pdmdly_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(pdmdly_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmdly_r>() const {return ClearSet<pdmdly_r>(Mask, *this);}
	constexpr auto operator|(pdmdly_r other) const -> pdmdly_r { return static_cast<pdmdly_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmdly_r> other) const -> ClearSet<pdmdly_r> {return ClearSet<pdmdly_r>(pdmdly_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DLYM2L
 */
class dlym2l_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dlym2l_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pdmdly_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pdmdly_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmdly_r>() const {return ClearSet<pdmdly_r>(Mask, *this);}
	constexpr auto operator|(pdmdly_r other) const -> pdmdly_r { return static_cast<pdmdly_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmdly_r> other) const -> ClearSet<pdmdly_r> {return ClearSet<pdmdly_r>(pdmdly_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DLYM2R
 */
class dlym2r_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dlym2r_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pdmdly_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pdmdly_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmdly_r>() const {return ClearSet<pdmdly_r>(Mask, *this);}
	constexpr auto operator|(pdmdly_r other) const -> pdmdly_r { return static_cast<pdmdly_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmdly_r> other) const -> ClearSet<pdmdly_r> {return ClearSet<pdmdly_r>(pdmdly_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DLYM3L
 */
class dlym3l_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dlym3l_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pdmdly_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pdmdly_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmdly_r>() const {return ClearSet<pdmdly_r>(Mask, *this);}
	constexpr auto operator|(pdmdly_r other) const -> pdmdly_r { return static_cast<pdmdly_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmdly_r> other) const -> ClearSet<pdmdly_r> {return ClearSet<pdmdly_r>(pdmdly_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DLYM3R
 */
class dlym3r_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dlym3r_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pdmdly_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pdmdly_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmdly_r>() const {return ClearSet<pdmdly_r>(Mask, *this);}
	constexpr auto operator|(pdmdly_r other) const -> pdmdly_r { return static_cast<pdmdly_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmdly_r> other) const -> ClearSet<pdmdly_r> {return ClearSet<pdmdly_r>(pdmdly_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DLYM4L
 */
class dlym4l_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dlym4l_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pdmdly_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pdmdly_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmdly_r>() const {return ClearSet<pdmdly_r>(Mask, *this);}
	constexpr auto operator|(pdmdly_r other) const -> pdmdly_r { return static_cast<pdmdly_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmdly_r> other) const -> ClearSet<pdmdly_r> {return ClearSet<pdmdly_r>(pdmdly_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DLYM4R
 */
class dlym4r_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dlym4r_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator pdmdly_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pdmdly_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdmdly_r>() const {return ClearSet<pdmdly_r>(Mask, *this);}
	constexpr auto operator|(pdmdly_r other) const -> pdmdly_r { return static_cast<pdmdly_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdmdly_r> other) const -> ClearSet<pdmdly_r> {return ClearSet<pdmdly_r>(pdmdly_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dlym1l() const -> dlym1l_f {return dlym1l_f(static_cast<uint8_t>(m_value >> dlym1l_f::Offset));}
	[[nodiscard]] constexpr auto dlym1r() const -> dlym1r_f {return dlym1r_f(static_cast<uint8_t>(m_value >> dlym1r_f::Offset));}
	[[nodiscard]] constexpr auto dlym2l() const -> dlym2l_f {return dlym2l_f(static_cast<uint8_t>(m_value >> dlym2l_f::Offset));}
	[[nodiscard]] constexpr auto dlym2r() const -> dlym2r_f {return dlym2r_f(static_cast<uint8_t>(m_value >> dlym2r_f::Offset));}
	[[nodiscard]] constexpr auto dlym3l() const -> dlym3l_f {return dlym3l_f(static_cast<uint8_t>(m_value >> dlym3l_f::Offset));}
	[[nodiscard]] constexpr auto dlym3r() const -> dlym3r_f {return dlym3r_f(static_cast<uint8_t>(m_value >> dlym3r_f::Offset));}
	[[nodiscard]] constexpr auto dlym4l() const -> dlym4l_f {return dlym4l_f(static_cast<uint8_t>(m_value >> dlym4l_f::Offset));}
	[[nodiscard]] constexpr auto dlym4r() const -> dlym4r_f {return dlym4r_f(static_cast<uint8_t>(m_value >> dlym4r_f::Offset));}

	constexpr pdmdly_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pdmdly_r other) const -> pdmdly_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pdmdly_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct bcr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using bcr_v = typename bcr_r<Index>::type;
	template<std::size_t Index> constexpr auto& bcr() { }

	template<std::size_t Index> struct acr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using acr_v = typename acr_r<Index>::type;
	template<std::size_t Index> constexpr auto& acr() { }

	Padding<4> _p0;
	Memory<uint32_t,acr1_r> acr1;
	Memory<uint32_t,acr2_r> acr2;
	Memory<uint32_t,afrcr_r> afrcr;
	Memory<uint32_t,aslotr_r> aslotr;
	Memory<uint32_t,aim_r> aim;
	Memory<uint32_t,asr_r> asr;
	Memory<uint32_t,aclrfr_r> aclrfr;
	Memory<uint32_t,adr_r> adr;
	Memory<uint32_t,bcr1_r> bcr1;
	Memory<uint32_t,bcr2_r> bcr2;
	Memory<uint32_t,bfrcr_r> bfrcr;
	Memory<uint32_t,bslotr_r> bslotr;
	Memory<uint32_t,bim_r> bim;
	ReadOnlyMemory<uint32_t,bsr_r> bsr;
	WriteOnlyMemory<uint32_t,bclrfr_r> bclrfr;
	Memory<uint32_t,bdr_r> bdr;
	Memory<uint32_t,pdmcr_r> pdmcr;
	Memory<uint32_t,pdmdly_r> pdmdly;
};

template<> struct sai_p::pdmcr_r::cken_f<1> { using type = sai_p::pdmcr_r::cken1_f; };
template<> struct sai_p::pdmcr_r::cken_f<2> { using type = sai_p::pdmcr_r::cken2_f; };
template<> struct sai_p::pdmcr_r::cken_f<3> { using type = sai_p::pdmcr_r::cken3_f; };
template<> struct sai_p::pdmcr_r::cken_f<4> { using type = sai_p::pdmcr_r::cken4_f; };

template<> constexpr auto& sai_p::bcr<1>() { return bcr1; }
template<> constexpr auto& sai_p::bcr<2>() { return bcr2; }

template<> struct sai_p::bcr_r<1> { using type = sai_p::bcr1_r; };
template<> struct sai_p::bcr_r<2> { using type = sai_p::bcr2_r; };

template<> constexpr auto& sai_p::acr<1>() { return acr1; }
template<> constexpr auto& sai_p::acr<2>() { return acr2; }

template<> struct sai_p::acr_r<1> { using type = sai_p::acr1_r; };
template<> struct sai_p::acr_r<2> { using type = sai_p::acr2_r; };

static_assert(std::is_standard_layout_v<sai_p>);
static_assert(offsetof(sai_p, bcr1) == sai_p::bcr1_r::Offset);
static_assert(offsetof(sai_p, bcr2) == sai_p::bcr2_r::Offset);
static_assert(offsetof(sai_p, bfrcr) == sai_p::bfrcr_r::Offset);
static_assert(offsetof(sai_p, bslotr) == sai_p::bslotr_r::Offset);
static_assert(offsetof(sai_p, bim) == sai_p::bim_r::Offset);
static_assert(offsetof(sai_p, bsr) == sai_p::bsr_r::Offset);
static_assert(offsetof(sai_p, bclrfr) == sai_p::bclrfr_r::Offset);
static_assert(offsetof(sai_p, bdr) == sai_p::bdr_r::Offset);
static_assert(offsetof(sai_p, acr1) == sai_p::acr1_r::Offset);
static_assert(offsetof(sai_p, acr2) == sai_p::acr2_r::Offset);
static_assert(offsetof(sai_p, afrcr) == sai_p::afrcr_r::Offset);
static_assert(offsetof(sai_p, aslotr) == sai_p::aslotr_r::Offset);
static_assert(offsetof(sai_p, aim) == sai_p::aim_r::Offset);
static_assert(offsetof(sai_p, asr) == sai_p::asr_r::Offset);
static_assert(offsetof(sai_p, aclrfr) == sai_p::aclrfr_r::Offset);
static_assert(offsetof(sai_p, adr) == sai_p::adr_r::Offset);
static_assert(offsetof(sai_p, pdmcr) == sai_p::pdmcr_r::Offset);
static_assert(offsetof(sai_p, pdmdly) == sai_p::pdmdly_r::Offset);

inline sai_p& sai = *reinterpret_cast<sai_p*>(0x40015400);

} // STM32G473XX

