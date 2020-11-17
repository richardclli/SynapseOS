#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Tamper and backup registers
 */
class tamp_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * TAMP1E
 */
class tamp1e_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP2E
 */
class tamp2e_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP2E
 */
class tamp3e_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP3E
 */
class itamp3e_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP4E
 */
class itamp4e_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP5E
 */
class itamp5e_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp5e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP6E
 */
class itamp6e_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp6e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tamp1e() const -> tamp1e_f {return tamp1e_f((m_value & tamp1e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp2e() const -> tamp2e_f {return tamp2e_f((m_value & tamp2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp3e() const -> tamp3e_f {return tamp3e_f((m_value & tamp3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp3e() const -> itamp3e_f {return itamp3e_f((m_value & itamp3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp4e() const -> itamp4e_f {return itamp4e_f((m_value & itamp4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp5e() const -> itamp5e_f {return itamp5e_f((m_value & itamp5e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp6e() const -> itamp6e_f {return itamp6e_f((m_value & itamp6e_f::Mask) != 0);}

	constexpr cr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr1_r other) const -> cr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b11111111111111110000000000000000; // 4294901760 0xFFFF0000

private:
	uint32_t m_value;
};
/**
 * control register 2
 */
class cr2_r {
public:

/**
 * TAMP1NOER
 */
class tamp1noer_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp1noer_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP2NOER
 */
class tamp2noer_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp2noer_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP3NOER
 */
class tamp3noer_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp3noer_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP1MSK
 */
class tamp1msk_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tamp1msk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP2MSK
 */
class tamp2msk_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tamp2msk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP3MSK
 */
class tamp3msk_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tamp3msk_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP1TRG
 */
class tamp1trg_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tamp1trg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP2TRG
 */
class tamp2trg_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tamp2trg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP3TRG
 */
class tamp3trg_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tamp3trg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tamp1noer() const -> tamp1noer_f {return tamp1noer_f((m_value & tamp1noer_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp2noer() const -> tamp2noer_f {return tamp2noer_f((m_value & tamp2noer_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp3noer() const -> tamp3noer_f {return tamp3noer_f((m_value & tamp3noer_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp1msk() const -> tamp1msk_f {return tamp1msk_f((m_value & tamp1msk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp2msk() const -> tamp2msk_f {return tamp2msk_f((m_value & tamp2msk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp3msk() const -> tamp3msk_f {return tamp3msk_f((m_value & tamp3msk_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp1trg() const -> tamp1trg_f {return tamp1trg_f((m_value & tamp1trg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp2trg() const -> tamp2trg_f {return tamp2trg_f((m_value & tamp2trg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp3trg() const -> tamp3trg_f {return tamp3trg_f((m_value & tamp3trg_f::Mask) != 0);}

	constexpr cr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr2_r other) const -> cr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP filter control register
 */
class fltcr_r {
public:

/**
 * TAMPFREQ
 */
class tampfreq_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tampfreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fltcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(fltcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fltcr_r>() const {return ClearSet<fltcr_r>(Mask, *this);}
	constexpr auto operator|(fltcr_r other) const -> fltcr_r { return static_cast<fltcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fltcr_r> other) const -> ClearSet<fltcr_r> {return ClearSet<fltcr_r>(fltcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TAMPFLT
 */
class tampflt_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tampflt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fltcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(fltcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fltcr_r>() const {return ClearSet<fltcr_r>(Mask, *this);}
	constexpr auto operator|(fltcr_r other) const -> fltcr_r { return static_cast<fltcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fltcr_r> other) const -> ClearSet<fltcr_r> {return ClearSet<fltcr_r>(fltcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TAMPPRCH
 */
class tampprch_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tampprch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fltcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(fltcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fltcr_r>() const {return ClearSet<fltcr_r>(Mask, *this);}
	constexpr auto operator|(fltcr_r other) const -> fltcr_r { return static_cast<fltcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fltcr_r> other) const -> ClearSet<fltcr_r> {return ClearSet<fltcr_r>(fltcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TAMPPUDIS
 */
class tamppudis_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamppudis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fltcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(fltcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fltcr_r>() const {return ClearSet<fltcr_r>(Mask, *this);}
	constexpr auto operator|(fltcr_r other) const -> fltcr_r { return static_cast<fltcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fltcr_r> other) const -> ClearSet<fltcr_r> {return ClearSet<fltcr_r>(fltcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tampfreq() const -> tampfreq_f {return tampfreq_f(static_cast<uint8_t>(m_value >> tampfreq_f::Offset));}
	[[nodiscard]] constexpr auto tampflt() const -> tampflt_f {return tampflt_f(static_cast<uint8_t>(m_value >> tampflt_f::Offset));}
	[[nodiscard]] constexpr auto tampprch() const -> tampprch_f {return tampprch_f(static_cast<uint8_t>(m_value >> tampprch_f::Offset));}
	[[nodiscard]] constexpr auto tamppudis() const -> tamppudis_f {return tamppudis_f((m_value & tamppudis_f::Mask) != 0);}

	constexpr fltcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fltcr_r other) const -> fltcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fltcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP interrupt enable register
 */
class ier_r {
public:

/**
 * TAMP1IE
 */
class tamp1ie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP2IE
 */
class tamp2ie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp2ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP3IE
 */
class tamp3ie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp3ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP3IE
 */
class itamp3ie_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp3ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP4IE
 */
class itamp4ie_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp4ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP5IE
 */
class itamp5ie_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp5ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP6IE
 */
class itamp6ie_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp6ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tamp1ie() const -> tamp1ie_f {return tamp1ie_f((m_value & tamp1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp2ie() const -> tamp2ie_f {return tamp2ie_f((m_value & tamp2ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp3ie() const -> tamp3ie_f {return tamp3ie_f((m_value & tamp3ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp3ie() const -> itamp3ie_f {return itamp3ie_f((m_value & itamp3ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp4ie() const -> itamp4ie_f {return itamp4ie_f((m_value & itamp4ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp5ie() const -> itamp5ie_f {return itamp5ie_f((m_value & itamp5ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp6ie() const -> itamp6ie_f {return itamp6ie_f((m_value & itamp6ie_f::Mask) != 0);}

	constexpr ier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ier_r other) const -> ier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP status register
 */
class sr_r {
public:

/**
 * TAMP1F
 */
class tamp1f_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp1f_f(bool value = true) : m_value(value) {}
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
 * TAMP2F
 */
class tamp2f_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp2f_f(bool value = true) : m_value(value) {}
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
 * TAMP3F
 */
class tamp3f_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp3f_f(bool value = true) : m_value(value) {}
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
 * ITAMP3F
 */
class itamp3f_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp3f_f(bool value = true) : m_value(value) {}
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
 * ITAMP4F
 */
class itamp4f_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp4f_f(bool value = true) : m_value(value) {}
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
 * ITAMP5F
 */
class itamp5f_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp5f_f(bool value = true) : m_value(value) {}
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
 * ITAMP6F
 */
class itamp6f_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp6f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tamp1f() const -> tamp1f_f {return tamp1f_f((m_value & tamp1f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp2f() const -> tamp2f_f {return tamp2f_f((m_value & tamp2f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp3f() const -> tamp3f_f {return tamp3f_f((m_value & tamp3f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp3f() const -> itamp3f_f {return itamp3f_f((m_value & itamp3f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp4f() const -> itamp4f_f {return itamp4f_f((m_value & itamp4f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp5f() const -> itamp5f_f {return itamp5f_f((m_value & itamp5f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp6f() const -> itamp6f_f {return itamp6f_f((m_value & itamp6f_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP masked interrupt status register
 */
class misr_r {
public:

/**
 * TAMP1MF:
 */
class tamp1mf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp1mf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP2MF
 */
class tamp2mf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp2mf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMP3MF
 */
class tamp3mf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp3mf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP3MF
 */
class itamp3mf_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp3mf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP4MF
 */
class itamp4mf_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp4mf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP5MF
 */
class itamp5mf_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp5mf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITAMP6MF
 */
class itamp6mf_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itamp6mf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tamp1mf() const -> tamp1mf_f {return tamp1mf_f((m_value & tamp1mf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp2mf() const -> tamp2mf_f {return tamp2mf_f((m_value & tamp2mf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp3mf() const -> tamp3mf_f {return tamp3mf_f((m_value & tamp3mf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp3mf() const -> itamp3mf_f {return itamp3mf_f((m_value & itamp3mf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp4mf() const -> itamp4mf_f {return itamp4mf_f((m_value & itamp4mf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp5mf() const -> itamp5mf_f {return itamp5mf_f((m_value & itamp5mf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itamp6mf() const -> itamp6mf_f {return itamp6mf_f((m_value & itamp6mf_f::Mask) != 0);}

	constexpr misr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(misr_r other) const -> misr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> misr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP status clear register
 */
class scr_r {
public:

/**
 * CTAMP1F
 */
class ctamp1f_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctamp1f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTAMP2F
 */
class ctamp2f_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctamp2f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTAMP3F
 */
class ctamp3f_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctamp3f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CITAMP3F
 */
class citamp3f_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr citamp3f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CITAMP4F
 */
class citamp4f_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr citamp4f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CITAMP5F
 */
class citamp5f_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr citamp5f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CITAMP6F
 */
class citamp6f_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr citamp6f_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ctamp1f() const -> ctamp1f_f {return ctamp1f_f((m_value & ctamp1f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctamp2f() const -> ctamp2f_f {return ctamp2f_f((m_value & ctamp2f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctamp3f() const -> ctamp3f_f {return ctamp3f_f((m_value & ctamp3f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto citamp3f() const -> citamp3f_f {return citamp3f_f((m_value & citamp3f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto citamp4f() const -> citamp4f_f {return citamp4f_f((m_value & citamp4f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto citamp5f() const -> citamp5f_f {return citamp5f_f((m_value & citamp5f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto citamp6f() const -> citamp6f_f {return citamp6f_f((m_value & citamp6f_f::Mask) != 0);}

	constexpr scr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(scr_r other) const -> scr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> scr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp0r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp0r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp0r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp0r_r>() const {return ClearSet<bkp0r_r>(Mask, *this);}
	constexpr auto operator|(bkp0r_r other) const -> bkp0r_r { return static_cast<bkp0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp0r_r> other) const -> ClearSet<bkp0r_r> {return ClearSet<bkp0r_r>(bkp0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp0r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp0r_r other) const -> bkp0r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp0r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 256;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp1r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp1r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp1r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp1r_r>() const {return ClearSet<bkp1r_r>(Mask, *this);}
	constexpr auto operator|(bkp1r_r other) const -> bkp1r_r { return static_cast<bkp1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp1r_r> other) const -> ClearSet<bkp1r_r> {return ClearSet<bkp1r_r>(bkp1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp1r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp1r_r other) const -> bkp1r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp1r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 260;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp2r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp2r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp2r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp2r_r>() const {return ClearSet<bkp2r_r>(Mask, *this);}
	constexpr auto operator|(bkp2r_r other) const -> bkp2r_r { return static_cast<bkp2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp2r_r> other) const -> ClearSet<bkp2r_r> {return ClearSet<bkp2r_r>(bkp2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp2r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp2r_r other) const -> bkp2r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp2r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 264;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp3r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp3r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp3r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp3r_r>() const {return ClearSet<bkp3r_r>(Mask, *this);}
	constexpr auto operator|(bkp3r_r other) const -> bkp3r_r { return static_cast<bkp3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp3r_r> other) const -> ClearSet<bkp3r_r> {return ClearSet<bkp3r_r>(bkp3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp3r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp3r_r other) const -> bkp3r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp3r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 268;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp4r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp4r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp4r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp4r_r>() const {return ClearSet<bkp4r_r>(Mask, *this);}
	constexpr auto operator|(bkp4r_r other) const -> bkp4r_r { return static_cast<bkp4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp4r_r> other) const -> ClearSet<bkp4r_r> {return ClearSet<bkp4r_r>(bkp4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp4r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp4r_r other) const -> bkp4r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp4r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 272;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp5r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp5r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp5r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp5r_r>() const {return ClearSet<bkp5r_r>(Mask, *this);}
	constexpr auto operator|(bkp5r_r other) const -> bkp5r_r { return static_cast<bkp5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp5r_r> other) const -> ClearSet<bkp5r_r> {return ClearSet<bkp5r_r>(bkp5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp5r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp5r_r other) const -> bkp5r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp5r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 276;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp6r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp6r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp6r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp6r_r>() const {return ClearSet<bkp6r_r>(Mask, *this);}
	constexpr auto operator|(bkp6r_r other) const -> bkp6r_r { return static_cast<bkp6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp6r_r> other) const -> ClearSet<bkp6r_r> {return ClearSet<bkp6r_r>(bkp6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp6r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp6r_r other) const -> bkp6r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp6r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 280;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp7r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp7r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp7r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp7r_r>() const {return ClearSet<bkp7r_r>(Mask, *this);}
	constexpr auto operator|(bkp7r_r other) const -> bkp7r_r { return static_cast<bkp7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp7r_r> other) const -> ClearSet<bkp7r_r> {return ClearSet<bkp7r_r>(bkp7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp7r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp7r_r other) const -> bkp7r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp7r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 284;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp8r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp8r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp8r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp8r_r>() const {return ClearSet<bkp8r_r>(Mask, *this);}
	constexpr auto operator|(bkp8r_r other) const -> bkp8r_r { return static_cast<bkp8r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp8r_r> other) const -> ClearSet<bkp8r_r> {return ClearSet<bkp8r_r>(bkp8r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp8r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp8r_r other) const -> bkp8r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp8r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 288;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp9r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp9r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp9r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp9r_r>() const {return ClearSet<bkp9r_r>(Mask, *this);}
	constexpr auto operator|(bkp9r_r other) const -> bkp9r_r { return static_cast<bkp9r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp9r_r> other) const -> ClearSet<bkp9r_r> {return ClearSet<bkp9r_r>(bkp9r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp9r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp9r_r other) const -> bkp9r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp9r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 292;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp10r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp10r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp10r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp10r_r>() const {return ClearSet<bkp10r_r>(Mask, *this);}
	constexpr auto operator|(bkp10r_r other) const -> bkp10r_r { return static_cast<bkp10r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp10r_r> other) const -> ClearSet<bkp10r_r> {return ClearSet<bkp10r_r>(bkp10r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp10r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp10r_r other) const -> bkp10r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp10r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 296;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp11r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp11r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp11r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp11r_r>() const {return ClearSet<bkp11r_r>(Mask, *this);}
	constexpr auto operator|(bkp11r_r other) const -> bkp11r_r { return static_cast<bkp11r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp11r_r> other) const -> ClearSet<bkp11r_r> {return ClearSet<bkp11r_r>(bkp11r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp11r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp11r_r other) const -> bkp11r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp11r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 300;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp12r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp12r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp12r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp12r_r>() const {return ClearSet<bkp12r_r>(Mask, *this);}
	constexpr auto operator|(bkp12r_r other) const -> bkp12r_r { return static_cast<bkp12r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp12r_r> other) const -> ClearSet<bkp12r_r> {return ClearSet<bkp12r_r>(bkp12r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp12r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp12r_r other) const -> bkp12r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp12r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 304;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp13r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp13r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp13r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp13r_r>() const {return ClearSet<bkp13r_r>(Mask, *this);}
	constexpr auto operator|(bkp13r_r other) const -> bkp13r_r { return static_cast<bkp13r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp13r_r> other) const -> ClearSet<bkp13r_r> {return ClearSet<bkp13r_r>(bkp13r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp13r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp13r_r other) const -> bkp13r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp13r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 308;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp14r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp14r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp14r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp14r_r>() const {return ClearSet<bkp14r_r>(Mask, *this);}
	constexpr auto operator|(bkp14r_r other) const -> bkp14r_r { return static_cast<bkp14r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp14r_r> other) const -> ClearSet<bkp14r_r> {return ClearSet<bkp14r_r>(bkp14r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp14r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp14r_r other) const -> bkp14r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp14r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 312;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp15r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp15r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp15r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp15r_r>() const {return ClearSet<bkp15r_r>(Mask, *this);}
	constexpr auto operator|(bkp15r_r other) const -> bkp15r_r { return static_cast<bkp15r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp15r_r> other) const -> ClearSet<bkp15r_r> {return ClearSet<bkp15r_r>(bkp15r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp15r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp15r_r other) const -> bkp15r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp15r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 316;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp16r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp16r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp16r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp16r_r>() const {return ClearSet<bkp16r_r>(Mask, *this);}
	constexpr auto operator|(bkp16r_r other) const -> bkp16r_r { return static_cast<bkp16r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp16r_r> other) const -> ClearSet<bkp16r_r> {return ClearSet<bkp16r_r>(bkp16r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp16r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp16r_r other) const -> bkp16r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp16r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 320;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp17r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp17r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp17r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp17r_r>() const {return ClearSet<bkp17r_r>(Mask, *this);}
	constexpr auto operator|(bkp17r_r other) const -> bkp17r_r { return static_cast<bkp17r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp17r_r> other) const -> ClearSet<bkp17r_r> {return ClearSet<bkp17r_r>(bkp17r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp17r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp17r_r other) const -> bkp17r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp17r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 324;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp18r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp18r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp18r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp18r_r>() const {return ClearSet<bkp18r_r>(Mask, *this);}
	constexpr auto operator|(bkp18r_r other) const -> bkp18r_r { return static_cast<bkp18r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp18r_r> other) const -> ClearSet<bkp18r_r> {return ClearSet<bkp18r_r>(bkp18r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp18r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp18r_r other) const -> bkp18r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp18r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 328;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp19r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp19r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp19r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp19r_r>() const {return ClearSet<bkp19r_r>(Mask, *this);}
	constexpr auto operator|(bkp19r_r other) const -> bkp19r_r { return static_cast<bkp19r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp19r_r> other) const -> ClearSet<bkp19r_r> {return ClearSet<bkp19r_r>(bkp19r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp19r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp19r_r other) const -> bkp19r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp19r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 332;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp20r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp20r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp20r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp20r_r>() const {return ClearSet<bkp20r_r>(Mask, *this);}
	constexpr auto operator|(bkp20r_r other) const -> bkp20r_r { return static_cast<bkp20r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp20r_r> other) const -> ClearSet<bkp20r_r> {return ClearSet<bkp20r_r>(bkp20r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp20r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp20r_r other) const -> bkp20r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp20r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 336;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp21r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp21r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp21r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp21r_r>() const {return ClearSet<bkp21r_r>(Mask, *this);}
	constexpr auto operator|(bkp21r_r other) const -> bkp21r_r { return static_cast<bkp21r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp21r_r> other) const -> ClearSet<bkp21r_r> {return ClearSet<bkp21r_r>(bkp21r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp21r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp21r_r other) const -> bkp21r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp21r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 340;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp22r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp22r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp22r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp22r_r>() const {return ClearSet<bkp22r_r>(Mask, *this);}
	constexpr auto operator|(bkp22r_r other) const -> bkp22r_r { return static_cast<bkp22r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp22r_r> other) const -> ClearSet<bkp22r_r> {return ClearSet<bkp22r_r>(bkp22r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp22r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp22r_r other) const -> bkp22r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp22r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 344;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp23r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp23r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp23r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp23r_r>() const {return ClearSet<bkp23r_r>(Mask, *this);}
	constexpr auto operator|(bkp23r_r other) const -> bkp23r_r { return static_cast<bkp23r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp23r_r> other) const -> ClearSet<bkp23r_r> {return ClearSet<bkp23r_r>(bkp23r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp23r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp23r_r other) const -> bkp23r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp23r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 348;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp24r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp24r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp24r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp24r_r>() const {return ClearSet<bkp24r_r>(Mask, *this);}
	constexpr auto operator|(bkp24r_r other) const -> bkp24r_r { return static_cast<bkp24r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp24r_r> other) const -> ClearSet<bkp24r_r> {return ClearSet<bkp24r_r>(bkp24r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp24r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp24r_r other) const -> bkp24r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp24r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 352;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp25r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp25r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp25r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp25r_r>() const {return ClearSet<bkp25r_r>(Mask, *this);}
	constexpr auto operator|(bkp25r_r other) const -> bkp25r_r { return static_cast<bkp25r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp25r_r> other) const -> ClearSet<bkp25r_r> {return ClearSet<bkp25r_r>(bkp25r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp25r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp25r_r other) const -> bkp25r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp25r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 356;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp26r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp26r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp26r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp26r_r>() const {return ClearSet<bkp26r_r>(Mask, *this);}
	constexpr auto operator|(bkp26r_r other) const -> bkp26r_r { return static_cast<bkp26r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp26r_r> other) const -> ClearSet<bkp26r_r> {return ClearSet<bkp26r_r>(bkp26r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp26r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp26r_r other) const -> bkp26r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp26r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 360;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp27r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp27r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp27r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp27r_r>() const {return ClearSet<bkp27r_r>(Mask, *this);}
	constexpr auto operator|(bkp27r_r other) const -> bkp27r_r { return static_cast<bkp27r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp27r_r> other) const -> ClearSet<bkp27r_r> {return ClearSet<bkp27r_r>(bkp27r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp27r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp27r_r other) const -> bkp27r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp27r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 364;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp28r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp28r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp28r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp28r_r>() const {return ClearSet<bkp28r_r>(Mask, *this);}
	constexpr auto operator|(bkp28r_r other) const -> bkp28r_r { return static_cast<bkp28r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp28r_r> other) const -> ClearSet<bkp28r_r> {return ClearSet<bkp28r_r>(bkp28r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp28r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp28r_r other) const -> bkp28r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp28r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 368;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp29r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp29r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp29r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp29r_r>() const {return ClearSet<bkp29r_r>(Mask, *this);}
	constexpr auto operator|(bkp29r_r other) const -> bkp29r_r { return static_cast<bkp29r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp29r_r> other) const -> ClearSet<bkp29r_r> {return ClearSet<bkp29r_r>(bkp29r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp29r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp29r_r other) const -> bkp29r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp29r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 372;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp30r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp30r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp30r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp30r_r>() const {return ClearSet<bkp30r_r>(Mask, *this);}
	constexpr auto operator|(bkp30r_r other) const -> bkp30r_r { return static_cast<bkp30r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp30r_r> other) const -> ClearSet<bkp30r_r> {return ClearSet<bkp30r_r>(bkp30r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp30r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp30r_r other) const -> bkp30r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp30r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 376;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TAMP backup register
 */
class bkp31r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp31r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp31r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp31r_r>() const {return ClearSet<bkp31r_r>(Mask, *this);}
	constexpr auto operator|(bkp31r_r other) const -> bkp31r_r { return static_cast<bkp31r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp31r_r> other) const -> ClearSet<bkp31r_r> {return ClearSet<bkp31r_r>(bkp31r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp31r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp31r_r other) const -> bkp31r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp31r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 380;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Padding<4> _p8;
	Memory<uint32_t,fltcr_r> fltcr;
	Padding<28> _p16;
	Memory<uint32_t,ier_r> ier;
	ReadOnlyMemory<uint32_t,sr_r> sr;
	ReadOnlyMemory<uint32_t,misr_r> misr;
	Padding<4> _p56;
	Memory<uint32_t,scr_r> scr;
	Padding<192> _p64;
	Memory<uint32_t,bkp0r_r> bkp0r;
	Memory<uint32_t,bkp1r_r> bkp1r;
	Memory<uint32_t,bkp2r_r> bkp2r;
	Memory<uint32_t,bkp3r_r> bkp3r;
	Memory<uint32_t,bkp4r_r> bkp4r;
	Memory<uint32_t,bkp5r_r> bkp5r;
	Memory<uint32_t,bkp6r_r> bkp6r;
	Memory<uint32_t,bkp7r_r> bkp7r;
	Memory<uint32_t,bkp8r_r> bkp8r;
	Memory<uint32_t,bkp9r_r> bkp9r;
	Memory<uint32_t,bkp10r_r> bkp10r;
	Memory<uint32_t,bkp11r_r> bkp11r;
	Memory<uint32_t,bkp12r_r> bkp12r;
	Memory<uint32_t,bkp13r_r> bkp13r;
	Memory<uint32_t,bkp14r_r> bkp14r;
	Memory<uint32_t,bkp15r_r> bkp15r;
	Memory<uint32_t,bkp16r_r> bkp16r;
	Memory<uint32_t,bkp17r_r> bkp17r;
	Memory<uint32_t,bkp18r_r> bkp18r;
	Memory<uint32_t,bkp19r_r> bkp19r;
	Memory<uint32_t,bkp20r_r> bkp20r;
	Memory<uint32_t,bkp21r_r> bkp21r;
	Memory<uint32_t,bkp22r_r> bkp22r;
	Memory<uint32_t,bkp23r_r> bkp23r;
	Memory<uint32_t,bkp24r_r> bkp24r;
	Memory<uint32_t,bkp25r_r> bkp25r;
	Memory<uint32_t,bkp26r_r> bkp26r;
	Memory<uint32_t,bkp27r_r> bkp27r;
	Memory<uint32_t,bkp28r_r> bkp28r;
	Memory<uint32_t,bkp29r_r> bkp29r;
	Memory<uint32_t,bkp30r_r> bkp30r;
	Memory<uint32_t,bkp31r_r> bkp31r;
};

template<> constexpr auto& tamp_p::cr<1>() { return cr1; }
template<> constexpr auto& tamp_p::cr<2>() { return cr2; }

template<> struct tamp_p::cr_r<1> { using type = tamp_p::cr1_r; };
template<> struct tamp_p::cr_r<2> { using type = tamp_p::cr2_r; };

static_assert(std::is_standard_layout_v<tamp_p>);
static_assert(offsetof(tamp_p, cr1) == tamp_p::cr1_r::Offset);
static_assert(offsetof(tamp_p, cr2) == tamp_p::cr2_r::Offset);
static_assert(offsetof(tamp_p, fltcr) == tamp_p::fltcr_r::Offset);
static_assert(offsetof(tamp_p, ier) == tamp_p::ier_r::Offset);
static_assert(offsetof(tamp_p, sr) == tamp_p::sr_r::Offset);
static_assert(offsetof(tamp_p, misr) == tamp_p::misr_r::Offset);
static_assert(offsetof(tamp_p, scr) == tamp_p::scr_r::Offset);
static_assert(offsetof(tamp_p, bkp0r) == tamp_p::bkp0r_r::Offset);
static_assert(offsetof(tamp_p, bkp1r) == tamp_p::bkp1r_r::Offset);
static_assert(offsetof(tamp_p, bkp2r) == tamp_p::bkp2r_r::Offset);
static_assert(offsetof(tamp_p, bkp3r) == tamp_p::bkp3r_r::Offset);
static_assert(offsetof(tamp_p, bkp4r) == tamp_p::bkp4r_r::Offset);
static_assert(offsetof(tamp_p, bkp5r) == tamp_p::bkp5r_r::Offset);
static_assert(offsetof(tamp_p, bkp6r) == tamp_p::bkp6r_r::Offset);
static_assert(offsetof(tamp_p, bkp7r) == tamp_p::bkp7r_r::Offset);
static_assert(offsetof(tamp_p, bkp8r) == tamp_p::bkp8r_r::Offset);
static_assert(offsetof(tamp_p, bkp9r) == tamp_p::bkp9r_r::Offset);
static_assert(offsetof(tamp_p, bkp10r) == tamp_p::bkp10r_r::Offset);
static_assert(offsetof(tamp_p, bkp11r) == tamp_p::bkp11r_r::Offset);
static_assert(offsetof(tamp_p, bkp12r) == tamp_p::bkp12r_r::Offset);
static_assert(offsetof(tamp_p, bkp13r) == tamp_p::bkp13r_r::Offset);
static_assert(offsetof(tamp_p, bkp14r) == tamp_p::bkp14r_r::Offset);
static_assert(offsetof(tamp_p, bkp15r) == tamp_p::bkp15r_r::Offset);
static_assert(offsetof(tamp_p, bkp16r) == tamp_p::bkp16r_r::Offset);
static_assert(offsetof(tamp_p, bkp17r) == tamp_p::bkp17r_r::Offset);
static_assert(offsetof(tamp_p, bkp18r) == tamp_p::bkp18r_r::Offset);
static_assert(offsetof(tamp_p, bkp19r) == tamp_p::bkp19r_r::Offset);
static_assert(offsetof(tamp_p, bkp20r) == tamp_p::bkp20r_r::Offset);
static_assert(offsetof(tamp_p, bkp21r) == tamp_p::bkp21r_r::Offset);
static_assert(offsetof(tamp_p, bkp22r) == tamp_p::bkp22r_r::Offset);
static_assert(offsetof(tamp_p, bkp23r) == tamp_p::bkp23r_r::Offset);
static_assert(offsetof(tamp_p, bkp24r) == tamp_p::bkp24r_r::Offset);
static_assert(offsetof(tamp_p, bkp25r) == tamp_p::bkp25r_r::Offset);
static_assert(offsetof(tamp_p, bkp26r) == tamp_p::bkp26r_r::Offset);
static_assert(offsetof(tamp_p, bkp27r) == tamp_p::bkp27r_r::Offset);
static_assert(offsetof(tamp_p, bkp28r) == tamp_p::bkp28r_r::Offset);
static_assert(offsetof(tamp_p, bkp29r) == tamp_p::bkp29r_r::Offset);
static_assert(offsetof(tamp_p, bkp30r) == tamp_p::bkp30r_r::Offset);
static_assert(offsetof(tamp_p, bkp31r) == tamp_p::bkp31r_r::Offset);

inline tamp_p& tamp = *reinterpret_cast<tamp_p*>(0x40002400);

} // STM32G473XX

