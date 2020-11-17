#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Advanced encryption standard hardware accelerator
 */
class aes_p {
public:
/**
 * control register
 */
class cr_r {
public:

/**
 * NPBLB
 */
class npblb_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr npblb_f(uint8_t value) : m_value(value & Range) {}
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
 * KEYSIZE
 */
class keysize_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr keysize_f(bool value = true) : m_value(value) {}
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
 * CHMOD_2
 */
class chmod_2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chmod_2_f(bool value = true) : m_value(value) {}
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
 * GCMPH
 */
class gcmph_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr gcmph_f(uint8_t value) : m_value(value & Range) {}
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
 * Enable DMA management of data output phase
 */
class dmaouten_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmaouten_f(bool value = true) : m_value(value) {}
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
 * Enable DMA management of data input phase
 */
class dmainen_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmainen_f(bool value = true) : m_value(value) {}
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
 * Error interrupt enable
 */
class errie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr errie_f(bool value = true) : m_value(value) {}
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
 * CCF flag interrupt enable
 */
class ccfie_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ccfie_f(bool value = true) : m_value(value) {}
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
 * Error clear
 */
class errc_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr errc_f(bool value = true) : m_value(value) {}
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
 * Computation Complete Flag Clear
 */
class ccfc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccfc_f(bool value = true) : m_value(value) {}
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
 * AES chaining mode
 */
class chmod_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr chmod_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * AES operating mode
 */
class mode_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Data type selection (for data in and data out to/from the cryptographic block)
 */
class datatype_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr datatype_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * AES enable
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

	[[nodiscard]] constexpr auto npblb() const -> npblb_f {return npblb_f(static_cast<uint8_t>(m_value >> npblb_f::Offset));}
	[[nodiscard]] constexpr auto keysize() const -> keysize_f {return keysize_f((m_value & keysize_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chmod_2() const -> chmod_2_f {return chmod_2_f((m_value & chmod_2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gcmph() const -> gcmph_f {return gcmph_f(static_cast<uint8_t>(m_value >> gcmph_f::Offset));}
	[[nodiscard]] constexpr auto dmaouten() const -> dmaouten_f {return dmaouten_f((m_value & dmaouten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmainen() const -> dmainen_f {return dmainen_f((m_value & dmainen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto errie() const -> errie_f {return errie_f((m_value & errie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccfie() const -> ccfie_f {return ccfie_f((m_value & ccfie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto errc() const -> errc_f {return errc_f((m_value & errc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccfc() const -> ccfc_f {return ccfc_f((m_value & ccfc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chmod() const -> chmod_f {return chmod_f(static_cast<uint8_t>(m_value >> chmod_f::Offset));}
	[[nodiscard]] constexpr auto mode() const -> mode_f {return mode_f(static_cast<uint8_t>(m_value >> mode_f::Offset));}
	[[nodiscard]] constexpr auto datatype() const -> datatype_f {return datatype_f(static_cast<uint8_t>(m_value >> datatype_f::Offset));}
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
 * status register
 */
class sr_r {
public:

/**
 * BUSY
 */
class busy_f {
public:
	static constexpr std::size_t Offset = 3;
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
 * Write error flag
 */
class wrerr_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wrerr_f(bool value = true) : m_value(value) {}
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
 * Read error flag
 */
class rderr_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rderr_f(bool value = true) : m_value(value) {}
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
 * Computation complete flag
 */
class ccf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto busy() const -> busy_f {return busy_f((m_value & busy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wrerr() const -> wrerr_f {return wrerr_f((m_value & wrerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rderr() const -> rderr_f {return rderr_f((m_value & rderr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccf() const -> ccf_f {return ccf_f((m_value & ccf_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * data input register
 */
class dinr_r {
public:

/**
 * Data Input Register
 */
class aes_dinr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr aes_dinr_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dinr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dinr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dinr_r>() const {return ClearSet<dinr_r>(Mask, *this);}
	constexpr auto operator|(dinr_r other) const -> dinr_r { return static_cast<dinr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dinr_r> other) const -> ClearSet<dinr_r> {return ClearSet<dinr_r>(dinr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto aes_dinr() const -> aes_dinr_f {return aes_dinr_f(static_cast<uint32_t>(m_value >> aes_dinr_f::Offset));}

	constexpr dinr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dinr_r other) const -> dinr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dinr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * data output register
 */
class doutr_r {
public:

/**
 * Data output register
 */
class aes_doutr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr aes_doutr_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator doutr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(doutr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<doutr_r>() const {return ClearSet<doutr_r>(Mask, *this);}
	constexpr auto operator|(doutr_r other) const -> doutr_r { return static_cast<doutr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<doutr_r> other) const -> ClearSet<doutr_r> {return ClearSet<doutr_r>(doutr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto aes_doutr() const -> aes_doutr_f {return aes_doutr_f(static_cast<uint32_t>(m_value >> aes_doutr_f::Offset));}

	constexpr doutr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(doutr_r other) const -> doutr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> doutr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * key register 0
 */
class keyr0_r {
public:

/**
 * Data Output Register (LSB key [31:0])
 */
class aes_keyr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr aes_keyr0_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator keyr0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(keyr0_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<keyr0_r>() const {return ClearSet<keyr0_r>(Mask, *this);}
	constexpr auto operator|(keyr0_r other) const -> keyr0_r { return static_cast<keyr0_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<keyr0_r> other) const -> ClearSet<keyr0_r> {return ClearSet<keyr0_r>(keyr0_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto aes_keyr0() const -> aes_keyr0_f {return aes_keyr0_f(static_cast<uint32_t>(m_value >> aes_keyr0_f::Offset));}

	constexpr keyr0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(keyr0_r other) const -> keyr0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> keyr0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * key register 1
 */
class keyr1_r {
public:

/**
 * AES key register (key [63:32])
 */
class aes_keyr1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr aes_keyr1_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator keyr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(keyr1_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<keyr1_r>() const {return ClearSet<keyr1_r>(Mask, *this);}
	constexpr auto operator|(keyr1_r other) const -> keyr1_r { return static_cast<keyr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<keyr1_r> other) const -> ClearSet<keyr1_r> {return ClearSet<keyr1_r>(keyr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto aes_keyr1() const -> aes_keyr1_f {return aes_keyr1_f(static_cast<uint32_t>(m_value >> aes_keyr1_f::Offset));}

	constexpr keyr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(keyr1_r other) const -> keyr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> keyr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * key register 2
 */
class keyr2_r {
public:

/**
 * AES key register (key [95:64])
 */
class aes_keyr2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr aes_keyr2_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator keyr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(keyr2_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<keyr2_r>() const {return ClearSet<keyr2_r>(Mask, *this);}
	constexpr auto operator|(keyr2_r other) const -> keyr2_r { return static_cast<keyr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<keyr2_r> other) const -> ClearSet<keyr2_r> {return ClearSet<keyr2_r>(keyr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto aes_keyr2() const -> aes_keyr2_f {return aes_keyr2_f(static_cast<uint32_t>(m_value >> aes_keyr2_f::Offset));}

	constexpr keyr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(keyr2_r other) const -> keyr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> keyr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * key register 3
 */
class keyr3_r {
public:

/**
 * AES key register (MSB key [127:96])
 */
class aes_keyr3_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr aes_keyr3_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator keyr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(keyr3_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<keyr3_r>() const {return ClearSet<keyr3_r>(Mask, *this);}
	constexpr auto operator|(keyr3_r other) const -> keyr3_r { return static_cast<keyr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<keyr3_r> other) const -> ClearSet<keyr3_r> {return ClearSet<keyr3_r>(keyr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto aes_keyr3() const -> aes_keyr3_f {return aes_keyr3_f(static_cast<uint32_t>(m_value >> aes_keyr3_f::Offset));}

	constexpr keyr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(keyr3_r other) const -> keyr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> keyr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * initialization vector register 0
 */
class ivr0_r {
public:

/**
 * initialization vector register (LSB IVR [31:0])
 */
class aes_ivr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr aes_ivr0_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator ivr0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ivr0_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ivr0_r>() const {return ClearSet<ivr0_r>(Mask, *this);}
	constexpr auto operator|(ivr0_r other) const -> ivr0_r { return static_cast<ivr0_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ivr0_r> other) const -> ClearSet<ivr0_r> {return ClearSet<ivr0_r>(ivr0_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto aes_ivr0() const -> aes_ivr0_f {return aes_ivr0_f(static_cast<uint32_t>(m_value >> aes_ivr0_f::Offset));}

	constexpr ivr0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ivr0_r other) const -> ivr0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ivr0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * initialization vector register 1
 */
class ivr1_r {
public:

/**
 * Initialization Vector Register (IVR [63:32])
 */
class aes_ivr1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr aes_ivr1_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator ivr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ivr1_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ivr1_r>() const {return ClearSet<ivr1_r>(Mask, *this);}
	constexpr auto operator|(ivr1_r other) const -> ivr1_r { return static_cast<ivr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ivr1_r> other) const -> ClearSet<ivr1_r> {return ClearSet<ivr1_r>(ivr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto aes_ivr1() const -> aes_ivr1_f {return aes_ivr1_f(static_cast<uint32_t>(m_value >> aes_ivr1_f::Offset));}

	constexpr ivr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ivr1_r other) const -> ivr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ivr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * initialization vector register 2
 */
class ivr2_r {
public:

/**
 * Initialization Vector Register (IVR [95:64])
 */
class aes_ivr2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr aes_ivr2_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator ivr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ivr2_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ivr2_r>() const {return ClearSet<ivr2_r>(Mask, *this);}
	constexpr auto operator|(ivr2_r other) const -> ivr2_r { return static_cast<ivr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ivr2_r> other) const -> ClearSet<ivr2_r> {return ClearSet<ivr2_r>(ivr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto aes_ivr2() const -> aes_ivr2_f {return aes_ivr2_f(static_cast<uint32_t>(m_value >> aes_ivr2_f::Offset));}

	constexpr ivr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ivr2_r other) const -> ivr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ivr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * initialization vector register 3
 */
class ivr3_r {
public:

/**
 * Initialization Vector Register (MSB IVR [127:96])
 */
class aes_ivr3_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr aes_ivr3_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator ivr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ivr3_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ivr3_r>() const {return ClearSet<ivr3_r>(Mask, *this);}
	constexpr auto operator|(ivr3_r other) const -> ivr3_r { return static_cast<ivr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ivr3_r> other) const -> ClearSet<ivr3_r> {return ClearSet<ivr3_r>(ivr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto aes_ivr3() const -> aes_ivr3_f {return aes_ivr3_f(static_cast<uint32_t>(m_value >> aes_ivr3_f::Offset));}

	constexpr ivr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ivr3_r other) const -> ivr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ivr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * key register 4
 */
class keyr4_r {
public:

/**
 * AES key
 */
class key_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr key_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator keyr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(keyr4_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<keyr4_r>() const {return ClearSet<keyr4_r>(Mask, *this);}
	constexpr auto operator|(keyr4_r other) const -> keyr4_r { return static_cast<keyr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<keyr4_r> other) const -> ClearSet<keyr4_r> {return ClearSet<keyr4_r>(keyr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto key() const -> key_f {return key_f(static_cast<uint32_t>(m_value >> key_f::Offset));}

	constexpr keyr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(keyr4_r other) const -> keyr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> keyr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * key register 5
 */
class keyr5_r {
public:

/**
 * AES key
 */
class key_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr key_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator keyr5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(keyr5_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<keyr5_r>() const {return ClearSet<keyr5_r>(Mask, *this);}
	constexpr auto operator|(keyr5_r other) const -> keyr5_r { return static_cast<keyr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<keyr5_r> other) const -> ClearSet<keyr5_r> {return ClearSet<keyr5_r>(keyr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto key() const -> key_f {return key_f(static_cast<uint32_t>(m_value >> key_f::Offset));}

	constexpr keyr5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(keyr5_r other) const -> keyr5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> keyr5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * key register 6
 */
class keyr6_r {
public:

/**
 * AES key
 */
class key_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr key_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator keyr6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(keyr6_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<keyr6_r>() const {return ClearSet<keyr6_r>(Mask, *this);}
	constexpr auto operator|(keyr6_r other) const -> keyr6_r { return static_cast<keyr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<keyr6_r> other) const -> ClearSet<keyr6_r> {return ClearSet<keyr6_r>(keyr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto key() const -> key_f {return key_f(static_cast<uint32_t>(m_value >> key_f::Offset));}

	constexpr keyr6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(keyr6_r other) const -> keyr6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> keyr6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * key register 7
 */
class keyr7_r {
public:

/**
 * AES key
 */
class key_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr key_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator keyr7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(keyr7_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<keyr7_r>() const {return ClearSet<keyr7_r>(Mask, *this);}
	constexpr auto operator|(keyr7_r other) const -> keyr7_r { return static_cast<keyr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<keyr7_r> other) const -> ClearSet<keyr7_r> {return ClearSet<keyr7_r>(keyr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto key() const -> key_f {return key_f(static_cast<uint32_t>(m_value >> key_f::Offset));}

	constexpr keyr7_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(keyr7_r other) const -> keyr7_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> keyr7_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * suspend registers
 */
class susp0r_r {
public:

/**
 * AES suspend
 */
class susp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr susp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator susp0r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(susp0r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<susp0r_r>() const {return ClearSet<susp0r_r>(Mask, *this);}
	constexpr auto operator|(susp0r_r other) const -> susp0r_r { return static_cast<susp0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<susp0r_r> other) const -> ClearSet<susp0r_r> {return ClearSet<susp0r_r>(susp0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto susp() const -> susp_f {return susp_f(static_cast<uint32_t>(m_value >> susp_f::Offset));}

	constexpr susp0r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(susp0r_r other) const -> susp0r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> susp0r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * suspend registers
 */
class susp1r_r {
public:

/**
 * AES suspend
 */
class susp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr susp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator susp1r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(susp1r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<susp1r_r>() const {return ClearSet<susp1r_r>(Mask, *this);}
	constexpr auto operator|(susp1r_r other) const -> susp1r_r { return static_cast<susp1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<susp1r_r> other) const -> ClearSet<susp1r_r> {return ClearSet<susp1r_r>(susp1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto susp() const -> susp_f {return susp_f(static_cast<uint32_t>(m_value >> susp_f::Offset));}

	constexpr susp1r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(susp1r_r other) const -> susp1r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> susp1r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * suspend registers
 */
class susp2r_r {
public:

/**
 * AES suspend
 */
class susp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr susp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator susp2r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(susp2r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<susp2r_r>() const {return ClearSet<susp2r_r>(Mask, *this);}
	constexpr auto operator|(susp2r_r other) const -> susp2r_r { return static_cast<susp2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<susp2r_r> other) const -> ClearSet<susp2r_r> {return ClearSet<susp2r_r>(susp2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto susp() const -> susp_f {return susp_f(static_cast<uint32_t>(m_value >> susp_f::Offset));}

	constexpr susp2r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(susp2r_r other) const -> susp2r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> susp2r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * suspend registers
 */
class susp3r_r {
public:

/**
 * AES suspend
 */
class susp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr susp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator susp3r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(susp3r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<susp3r_r>() const {return ClearSet<susp3r_r>(Mask, *this);}
	constexpr auto operator|(susp3r_r other) const -> susp3r_r { return static_cast<susp3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<susp3r_r> other) const -> ClearSet<susp3r_r> {return ClearSet<susp3r_r>(susp3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto susp() const -> susp_f {return susp_f(static_cast<uint32_t>(m_value >> susp_f::Offset));}

	constexpr susp3r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(susp3r_r other) const -> susp3r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> susp3r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * suspend registers
 */
class susp4r_r {
public:

/**
 * AES suspend
 */
class susp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr susp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator susp4r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(susp4r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<susp4r_r>() const {return ClearSet<susp4r_r>(Mask, *this);}
	constexpr auto operator|(susp4r_r other) const -> susp4r_r { return static_cast<susp4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<susp4r_r> other) const -> ClearSet<susp4r_r> {return ClearSet<susp4r_r>(susp4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto susp() const -> susp_f {return susp_f(static_cast<uint32_t>(m_value >> susp_f::Offset));}

	constexpr susp4r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(susp4r_r other) const -> susp4r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> susp4r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * suspend registers
 */
class susp5r_r {
public:

/**
 * AES suspend
 */
class susp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr susp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator susp5r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(susp5r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<susp5r_r>() const {return ClearSet<susp5r_r>(Mask, *this);}
	constexpr auto operator|(susp5r_r other) const -> susp5r_r { return static_cast<susp5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<susp5r_r> other) const -> ClearSet<susp5r_r> {return ClearSet<susp5r_r>(susp5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto susp() const -> susp_f {return susp_f(static_cast<uint32_t>(m_value >> susp_f::Offset));}

	constexpr susp5r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(susp5r_r other) const -> susp5r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> susp5r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * suspend registers
 */
class susp6r_r {
public:

/**
 * AES suspend
 */
class susp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr susp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator susp6r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(susp6r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<susp6r_r>() const {return ClearSet<susp6r_r>(Mask, *this);}
	constexpr auto operator|(susp6r_r other) const -> susp6r_r { return static_cast<susp6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<susp6r_r> other) const -> ClearSet<susp6r_r> {return ClearSet<susp6r_r>(susp6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto susp() const -> susp_f {return susp_f(static_cast<uint32_t>(m_value >> susp_f::Offset));}

	constexpr susp6r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(susp6r_r other) const -> susp6r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> susp6r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 88;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * suspend registers
 */
class susp7r_r {
public:

/**
 * AES suspend
 */
class susp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr susp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator susp7r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(susp7r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<susp7r_r>() const {return ClearSet<susp7r_r>(Mask, *this);}
	constexpr auto operator|(susp7r_r other) const -> susp7r_r { return static_cast<susp7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<susp7r_r> other) const -> ClearSet<susp7r_r> {return ClearSet<susp7r_r>(susp7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto susp() const -> susp_f {return susp_f(static_cast<uint32_t>(m_value >> susp_f::Offset));}

	constexpr susp7r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(susp7r_r other) const -> susp7r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> susp7r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct keyr_r { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7); };
	template<std::size_t Index> using keyr_v = typename keyr_r<Index>::type;
	template<std::size_t Index> constexpr auto& keyr() { }

	template<std::size_t Index> struct ivr_r { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3); };
	template<std::size_t Index> using ivr_v = typename ivr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ivr() { }

	Memory<uint32_t,cr_r> cr;
	ReadOnlyMemory<uint32_t,sr_r> sr;
	Memory<uint32_t,dinr_r> dinr;
	ReadOnlyMemory<uint32_t,doutr_r> doutr;
	Memory<uint32_t,keyr0_r> keyr0;
	Memory<uint32_t,keyr1_r> keyr1;
	Memory<uint32_t,keyr2_r> keyr2;
	Memory<uint32_t,keyr3_r> keyr3;
	Memory<uint32_t,ivr0_r> ivr0;
	Memory<uint32_t,ivr1_r> ivr1;
	Memory<uint32_t,ivr2_r> ivr2;
	Memory<uint32_t,ivr3_r> ivr3;
	Memory<uint32_t,keyr4_r> keyr4;
	Memory<uint32_t,keyr5_r> keyr5;
	Memory<uint32_t,keyr6_r> keyr6;
	Memory<uint32_t,keyr7_r> keyr7;
	Memory<uint32_t,susp0r_r> susp0r;
	Memory<uint32_t,susp1r_r> susp1r;
	Memory<uint32_t,susp2r_r> susp2r;
	Memory<uint32_t,susp3r_r> susp3r;
	Memory<uint32_t,susp4r_r> susp4r;
	Memory<uint32_t,susp5r_r> susp5r;
	Memory<uint32_t,susp6r_r> susp6r;
	Memory<uint32_t,susp7r_r> susp7r;
};

template<> constexpr auto& aes_p::keyr<0>() { return keyr0; }
template<> constexpr auto& aes_p::keyr<1>() { return keyr1; }
template<> constexpr auto& aes_p::keyr<2>() { return keyr2; }
template<> constexpr auto& aes_p::keyr<3>() { return keyr3; }
template<> constexpr auto& aes_p::keyr<4>() { return keyr4; }
template<> constexpr auto& aes_p::keyr<5>() { return keyr5; }
template<> constexpr auto& aes_p::keyr<6>() { return keyr6; }
template<> constexpr auto& aes_p::keyr<7>() { return keyr7; }

template<> struct aes_p::keyr_r<0> { using type = aes_p::keyr0_r; };
template<> struct aes_p::keyr_r<1> { using type = aes_p::keyr1_r; };
template<> struct aes_p::keyr_r<2> { using type = aes_p::keyr2_r; };
template<> struct aes_p::keyr_r<3> { using type = aes_p::keyr3_r; };
template<> struct aes_p::keyr_r<4> { using type = aes_p::keyr4_r; };
template<> struct aes_p::keyr_r<5> { using type = aes_p::keyr5_r; };
template<> struct aes_p::keyr_r<6> { using type = aes_p::keyr6_r; };
template<> struct aes_p::keyr_r<7> { using type = aes_p::keyr7_r; };

template<> constexpr auto& aes_p::ivr<0>() { return ivr0; }
template<> constexpr auto& aes_p::ivr<1>() { return ivr1; }
template<> constexpr auto& aes_p::ivr<2>() { return ivr2; }
template<> constexpr auto& aes_p::ivr<3>() { return ivr3; }

template<> struct aes_p::ivr_r<0> { using type = aes_p::ivr0_r; };
template<> struct aes_p::ivr_r<1> { using type = aes_p::ivr1_r; };
template<> struct aes_p::ivr_r<2> { using type = aes_p::ivr2_r; };
template<> struct aes_p::ivr_r<3> { using type = aes_p::ivr3_r; };

static_assert(std::is_standard_layout_v<aes_p>);
static_assert(offsetof(aes_p, cr) == aes_p::cr_r::Offset);
static_assert(offsetof(aes_p, sr) == aes_p::sr_r::Offset);
static_assert(offsetof(aes_p, dinr) == aes_p::dinr_r::Offset);
static_assert(offsetof(aes_p, doutr) == aes_p::doutr_r::Offset);
static_assert(offsetof(aes_p, keyr0) == aes_p::keyr0_r::Offset);
static_assert(offsetof(aes_p, keyr1) == aes_p::keyr1_r::Offset);
static_assert(offsetof(aes_p, keyr2) == aes_p::keyr2_r::Offset);
static_assert(offsetof(aes_p, keyr3) == aes_p::keyr3_r::Offset);
static_assert(offsetof(aes_p, ivr0) == aes_p::ivr0_r::Offset);
static_assert(offsetof(aes_p, ivr1) == aes_p::ivr1_r::Offset);
static_assert(offsetof(aes_p, ivr2) == aes_p::ivr2_r::Offset);
static_assert(offsetof(aes_p, ivr3) == aes_p::ivr3_r::Offset);
static_assert(offsetof(aes_p, keyr4) == aes_p::keyr4_r::Offset);
static_assert(offsetof(aes_p, keyr5) == aes_p::keyr5_r::Offset);
static_assert(offsetof(aes_p, keyr6) == aes_p::keyr6_r::Offset);
static_assert(offsetof(aes_p, keyr7) == aes_p::keyr7_r::Offset);
static_assert(offsetof(aes_p, susp0r) == aes_p::susp0r_r::Offset);
static_assert(offsetof(aes_p, susp1r) == aes_p::susp1r_r::Offset);
static_assert(offsetof(aes_p, susp2r) == aes_p::susp2r_r::Offset);
static_assert(offsetof(aes_p, susp3r) == aes_p::susp3r_r::Offset);
static_assert(offsetof(aes_p, susp4r) == aes_p::susp4r_r::Offset);
static_assert(offsetof(aes_p, susp5r) == aes_p::susp5r_r::Offset);
static_assert(offsetof(aes_p, susp6r) == aes_p::susp6r_r::Offset);
static_assert(offsetof(aes_p, susp7r) == aes_p::susp7r_r::Offset);

inline aes_p& aes = *reinterpret_cast<aes_p*>(0x50060000);

} // STM32G473XX

