#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Comparator control and status register
 */
class comp_p {
public:
/**
 * Comparator control/status register
 */
class comp_c1csr_r {
public:

/**
 * EN
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c1csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COMP_DEGLITCH_EN
 */
class comp_deglitch_en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr comp_deglitch_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c1csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * INMSEL
 */
class inmsel_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr inmsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(comp_c1csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * INPSEL
 */
class inpsel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr inpsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c1csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * POL
 */
class pol_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c1csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HYST
 */
class hyst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hyst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c1csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BLANKSEL
 */
class blanksel_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr blanksel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c1csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRGEN
 */
class brgen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr brgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c1csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SCALEN
 */
class scalen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr scalen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c1csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VALUE
 */
class value_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr value_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c1csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c1csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c1csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c1csr_r>() const {return ClearSet<comp_c1csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c1csr_r other) const -> comp_c1csr_r { return static_cast<comp_c1csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c1csr_r> other) const -> ClearSet<comp_c1csr_r> {return ClearSet<comp_c1csr_r>(comp_c1csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comp_deglitch_en() const -> comp_deglitch_en_f {return comp_deglitch_en_f((m_value & comp_deglitch_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inmsel() const -> inmsel_f {return inmsel_f(static_cast<uint8_t>(m_value >> inmsel_f::Offset));}
	[[nodiscard]] constexpr auto inpsel() const -> inpsel_f {return inpsel_f((m_value & inpsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pol() const -> pol_f {return pol_f((m_value & pol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hyst() const -> hyst_f {return hyst_f(static_cast<uint8_t>(m_value >> hyst_f::Offset));}
	[[nodiscard]] constexpr auto blanksel() const -> blanksel_f {return blanksel_f(static_cast<uint8_t>(m_value >> blanksel_f::Offset));}
	[[nodiscard]] constexpr auto brgen() const -> brgen_f {return brgen_f((m_value & brgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scalen() const -> scalen_f {return scalen_f((m_value & scalen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto value() const -> value_f {return value_f((m_value & value_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr comp_c1csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(comp_c1csr_r other) const -> comp_c1csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> comp_c1csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Comparator control/status register
 */
class comp_c2csr_r {
public:

/**
 * EN
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c2csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COMP_DEGLITCH_EN
 */
class comp_deglitch_en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr comp_deglitch_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c2csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * INMSEL
 */
class inmsel_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr inmsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(comp_c2csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * INPSEL
 */
class inpsel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr inpsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c2csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * POL
 */
class pol_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c2csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HYST
 */
class hyst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hyst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c2csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BLANKSEL
 */
class blanksel_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr blanksel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c2csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRGEN
 */
class brgen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr brgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c2csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SCALEN
 */
class scalen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr scalen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c2csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VALUE
 */
class value_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr value_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c2csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c2csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c2csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c2csr_r>() const {return ClearSet<comp_c2csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c2csr_r other) const -> comp_c2csr_r { return static_cast<comp_c2csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c2csr_r> other) const -> ClearSet<comp_c2csr_r> {return ClearSet<comp_c2csr_r>(comp_c2csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comp_deglitch_en() const -> comp_deglitch_en_f {return comp_deglitch_en_f((m_value & comp_deglitch_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inmsel() const -> inmsel_f {return inmsel_f(static_cast<uint8_t>(m_value >> inmsel_f::Offset));}
	[[nodiscard]] constexpr auto inpsel() const -> inpsel_f {return inpsel_f((m_value & inpsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pol() const -> pol_f {return pol_f((m_value & pol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hyst() const -> hyst_f {return hyst_f(static_cast<uint8_t>(m_value >> hyst_f::Offset));}
	[[nodiscard]] constexpr auto blanksel() const -> blanksel_f {return blanksel_f(static_cast<uint8_t>(m_value >> blanksel_f::Offset));}
	[[nodiscard]] constexpr auto brgen() const -> brgen_f {return brgen_f((m_value & brgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scalen() const -> scalen_f {return scalen_f((m_value & scalen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto value() const -> value_f {return value_f((m_value & value_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr comp_c2csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(comp_c2csr_r other) const -> comp_c2csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> comp_c2csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Comparator control/status register
 */
class comp_c3csr_r {
public:

/**
 * EN
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c3csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COMP_DEGLITCH_EN
 */
class comp_deglitch_en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr comp_deglitch_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c3csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * INMSEL
 */
class inmsel_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr inmsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(comp_c3csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * INPSEL
 */
class inpsel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr inpsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c3csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * POL
 */
class pol_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c3csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HYST
 */
class hyst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hyst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c3csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BLANKSEL
 */
class blanksel_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr blanksel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c3csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRGEN
 */
class brgen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr brgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c3csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SCALEN
 */
class scalen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr scalen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c3csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VALUE
 */
class value_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr value_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c3csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c3csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c3csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c3csr_r>() const {return ClearSet<comp_c3csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c3csr_r other) const -> comp_c3csr_r { return static_cast<comp_c3csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c3csr_r> other) const -> ClearSet<comp_c3csr_r> {return ClearSet<comp_c3csr_r>(comp_c3csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comp_deglitch_en() const -> comp_deglitch_en_f {return comp_deglitch_en_f((m_value & comp_deglitch_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inmsel() const -> inmsel_f {return inmsel_f(static_cast<uint8_t>(m_value >> inmsel_f::Offset));}
	[[nodiscard]] constexpr auto inpsel() const -> inpsel_f {return inpsel_f((m_value & inpsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pol() const -> pol_f {return pol_f((m_value & pol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hyst() const -> hyst_f {return hyst_f(static_cast<uint8_t>(m_value >> hyst_f::Offset));}
	[[nodiscard]] constexpr auto blanksel() const -> blanksel_f {return blanksel_f(static_cast<uint8_t>(m_value >> blanksel_f::Offset));}
	[[nodiscard]] constexpr auto brgen() const -> brgen_f {return brgen_f((m_value & brgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scalen() const -> scalen_f {return scalen_f((m_value & scalen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto value() const -> value_f {return value_f((m_value & value_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr comp_c3csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(comp_c3csr_r other) const -> comp_c3csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> comp_c3csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Comparator control/status register
 */
class comp_c4csr_r {
public:

/**
 * EN
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c4csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COMP_DEGLITCH_EN
 */
class comp_deglitch_en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr comp_deglitch_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c4csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * INMSEL
 */
class inmsel_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr inmsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(comp_c4csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * INPSEL
 */
class inpsel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr inpsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c4csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * POL
 */
class pol_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c4csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HYST
 */
class hyst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hyst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c4csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BLANKSEL
 */
class blanksel_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr blanksel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c4csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRGEN
 */
class brgen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr brgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c4csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SCALEN
 */
class scalen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr scalen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c4csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VALUE
 */
class value_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr value_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c4csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c4csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c4csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c4csr_r>() const {return ClearSet<comp_c4csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c4csr_r other) const -> comp_c4csr_r { return static_cast<comp_c4csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c4csr_r> other) const -> ClearSet<comp_c4csr_r> {return ClearSet<comp_c4csr_r>(comp_c4csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comp_deglitch_en() const -> comp_deglitch_en_f {return comp_deglitch_en_f((m_value & comp_deglitch_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inmsel() const -> inmsel_f {return inmsel_f(static_cast<uint8_t>(m_value >> inmsel_f::Offset));}
	[[nodiscard]] constexpr auto inpsel() const -> inpsel_f {return inpsel_f((m_value & inpsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pol() const -> pol_f {return pol_f((m_value & pol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hyst() const -> hyst_f {return hyst_f(static_cast<uint8_t>(m_value >> hyst_f::Offset));}
	[[nodiscard]] constexpr auto blanksel() const -> blanksel_f {return blanksel_f(static_cast<uint8_t>(m_value >> blanksel_f::Offset));}
	[[nodiscard]] constexpr auto brgen() const -> brgen_f {return brgen_f((m_value & brgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scalen() const -> scalen_f {return scalen_f((m_value & scalen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto value() const -> value_f {return value_f((m_value & value_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr comp_c4csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(comp_c4csr_r other) const -> comp_c4csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> comp_c4csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Comparator control/status register
 */
class comp_c5csr_r {
public:

/**
 * EN
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c5csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COMP_DEGLITCH_EN
 */
class comp_deglitch_en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr comp_deglitch_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c5csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * INMSEL
 */
class inmsel_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr inmsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(comp_c5csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * INPSEL
 */
class inpsel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr inpsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c5csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * POL
 */
class pol_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c5csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HYST
 */
class hyst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hyst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c5csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BLANKSEL
 */
class blanksel_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr blanksel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c5csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRGEN
 */
class brgen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr brgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c5csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SCALEN
 */
class scalen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr scalen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c5csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VALUE
 */
class value_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr value_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c5csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c5csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c5csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c5csr_r>() const {return ClearSet<comp_c5csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c5csr_r other) const -> comp_c5csr_r { return static_cast<comp_c5csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c5csr_r> other) const -> ClearSet<comp_c5csr_r> {return ClearSet<comp_c5csr_r>(comp_c5csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comp_deglitch_en() const -> comp_deglitch_en_f {return comp_deglitch_en_f((m_value & comp_deglitch_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inmsel() const -> inmsel_f {return inmsel_f(static_cast<uint8_t>(m_value >> inmsel_f::Offset));}
	[[nodiscard]] constexpr auto inpsel() const -> inpsel_f {return inpsel_f((m_value & inpsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pol() const -> pol_f {return pol_f((m_value & pol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hyst() const -> hyst_f {return hyst_f(static_cast<uint8_t>(m_value >> hyst_f::Offset));}
	[[nodiscard]] constexpr auto blanksel() const -> blanksel_f {return blanksel_f(static_cast<uint8_t>(m_value >> blanksel_f::Offset));}
	[[nodiscard]] constexpr auto brgen() const -> brgen_f {return brgen_f((m_value & brgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scalen() const -> scalen_f {return scalen_f((m_value & scalen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto value() const -> value_f {return value_f((m_value & value_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr comp_c5csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(comp_c5csr_r other) const -> comp_c5csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> comp_c5csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Comparator control/status register
 */
class comp_c6csr_r {
public:

/**
 * EN
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c6csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COMP_DEGLITCH_EN
 */
class comp_deglitch_en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr comp_deglitch_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c6csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * INMSEL
 */
class inmsel_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr inmsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(comp_c6csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * INPSEL
 */
class inpsel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr inpsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c6csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * POL
 */
class pol_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c6csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HYST
 */
class hyst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hyst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c6csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BLANKSEL
 */
class blanksel_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr blanksel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c6csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRGEN
 */
class brgen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr brgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c6csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SCALEN
 */
class scalen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr scalen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c6csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VALUE
 */
class value_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr value_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c6csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c6csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c6csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c6csr_r>() const {return ClearSet<comp_c6csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c6csr_r other) const -> comp_c6csr_r { return static_cast<comp_c6csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c6csr_r> other) const -> ClearSet<comp_c6csr_r> {return ClearSet<comp_c6csr_r>(comp_c6csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comp_deglitch_en() const -> comp_deglitch_en_f {return comp_deglitch_en_f((m_value & comp_deglitch_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inmsel() const -> inmsel_f {return inmsel_f(static_cast<uint8_t>(m_value >> inmsel_f::Offset));}
	[[nodiscard]] constexpr auto inpsel() const -> inpsel_f {return inpsel_f((m_value & inpsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pol() const -> pol_f {return pol_f((m_value & pol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hyst() const -> hyst_f {return hyst_f(static_cast<uint8_t>(m_value >> hyst_f::Offset));}
	[[nodiscard]] constexpr auto blanksel() const -> blanksel_f {return blanksel_f(static_cast<uint8_t>(m_value >> blanksel_f::Offset));}
	[[nodiscard]] constexpr auto brgen() const -> brgen_f {return brgen_f((m_value & brgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scalen() const -> scalen_f {return scalen_f((m_value & scalen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto value() const -> value_f {return value_f((m_value & value_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr comp_c6csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(comp_c6csr_r other) const -> comp_c6csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> comp_c6csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Comparator control/status register
 */
class comp_c7csr_r {
public:

/**
 * EN
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c7csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COMP_DEGLITCH_EN
 */
class comp_deglitch_en_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr comp_deglitch_en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c7csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * INMSEL
 */
class inmsel_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr inmsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(comp_c7csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * INPSEL
 */
class inpsel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr inpsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c7csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * POL
 */
class pol_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c7csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HYST
 */
class hyst_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hyst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c7csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BLANKSEL
 */
class blanksel_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr blanksel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(comp_c7csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRGEN
 */
class brgen_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr brgen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c7csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SCALEN
 */
class scalen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr scalen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c7csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VALUE
 */
class value_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr value_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c7csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LOCK
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator comp_c7csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(comp_c7csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<comp_c7csr_r>() const {return ClearSet<comp_c7csr_r>(Mask, *this);}
	constexpr auto operator|(comp_c7csr_r other) const -> comp_c7csr_r { return static_cast<comp_c7csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<comp_c7csr_r> other) const -> ClearSet<comp_c7csr_r> {return ClearSet<comp_c7csr_r>(comp_c7csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comp_deglitch_en() const -> comp_deglitch_en_f {return comp_deglitch_en_f((m_value & comp_deglitch_en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inmsel() const -> inmsel_f {return inmsel_f(static_cast<uint8_t>(m_value >> inmsel_f::Offset));}
	[[nodiscard]] constexpr auto inpsel() const -> inpsel_f {return inpsel_f((m_value & inpsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pol() const -> pol_f {return pol_f((m_value & pol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hyst() const -> hyst_f {return hyst_f(static_cast<uint8_t>(m_value >> hyst_f::Offset));}
	[[nodiscard]] constexpr auto blanksel() const -> blanksel_f {return blanksel_f(static_cast<uint8_t>(m_value >> blanksel_f::Offset));}
	[[nodiscard]] constexpr auto brgen() const -> brgen_f {return brgen_f((m_value & brgen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scalen() const -> scalen_f {return scalen_f((m_value & scalen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto value() const -> value_f {return value_f((m_value & value_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr comp_c7csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(comp_c7csr_r other) const -> comp_c7csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> comp_c7csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,comp_c1csr_r> comp_c1csr;
	Memory<uint32_t,comp_c2csr_r> comp_c2csr;
	Memory<uint32_t,comp_c3csr_r> comp_c3csr;
	Memory<uint32_t,comp_c4csr_r> comp_c4csr;
	Memory<uint32_t,comp_c5csr_r> comp_c5csr;
	Memory<uint32_t,comp_c6csr_r> comp_c6csr;
	Memory<uint32_t,comp_c7csr_r> comp_c7csr;
};

static_assert(std::is_standard_layout_v<comp_p>);
static_assert(offsetof(comp_p, comp_c1csr) == comp_p::comp_c1csr_r::Offset);
static_assert(offsetof(comp_p, comp_c2csr) == comp_p::comp_c2csr_r::Offset);
static_assert(offsetof(comp_p, comp_c3csr) == comp_p::comp_c3csr_r::Offset);
static_assert(offsetof(comp_p, comp_c4csr) == comp_p::comp_c4csr_r::Offset);
static_assert(offsetof(comp_p, comp_c5csr) == comp_p::comp_c5csr_r::Offset);
static_assert(offsetof(comp_p, comp_c6csr) == comp_p::comp_c6csr_r::Offset);
static_assert(offsetof(comp_p, comp_c7csr) == comp_p::comp_c7csr_r::Offset);

inline comp_p& comp = *reinterpret_cast<comp_p*>(0x40010200);

} // STM32G473XX

