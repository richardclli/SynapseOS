#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * System control block
 */
class scb_p {
public:
/**
 * CPUID base register
 */
class cpuid_r {
public:

/**
 * Revision number
 */
class revision_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr revision_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cpuid_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr operator ClearSet<cpuid_r>() const {return ClearSet<cpuid_r>(Mask, *this);}
	constexpr auto operator|(cpuid_r other) const -> cpuid_r { return static_cast<cpuid_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpuid_r> other) const -> ClearSet<cpuid_r> {return ClearSet<cpuid_r>(cpuid_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Part number of the processor
 */
class partno_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr partno_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cpuid_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr operator ClearSet<cpuid_r>() const {return ClearSet<cpuid_r>(Mask, *this);}
	constexpr auto operator|(cpuid_r other) const -> cpuid_r { return static_cast<cpuid_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpuid_r> other) const -> ClearSet<cpuid_r> {return ClearSet<cpuid_r>(cpuid_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Reads as 0xF
 */
class constant_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr constant_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cpuid_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<cpuid_r>() const {return ClearSet<cpuid_r>(Mask, *this);}
	constexpr auto operator|(cpuid_r other) const -> cpuid_r { return static_cast<cpuid_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpuid_r> other) const -> ClearSet<cpuid_r> {return ClearSet<cpuid_r>(cpuid_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Variant number
 */
class variant_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr variant_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cpuid_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<cpuid_r>() const {return ClearSet<cpuid_r>(Mask, *this);}
	constexpr auto operator|(cpuid_r other) const -> cpuid_r { return static_cast<cpuid_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpuid_r> other) const -> ClearSet<cpuid_r> {return ClearSet<cpuid_r>(cpuid_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Implementer code
 */
class implementer_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr implementer_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cpuid_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<cpuid_r>() const {return ClearSet<cpuid_r>(Mask, *this);}
	constexpr auto operator|(cpuid_r other) const -> cpuid_r { return static_cast<cpuid_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpuid_r> other) const -> ClearSet<cpuid_r> {return ClearSet<cpuid_r>(cpuid_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto revision() const -> revision_f {return revision_f(static_cast<uint8_t>(m_value >> revision_f::Offset));}
	[[nodiscard]] constexpr auto partno() const -> partno_f {return partno_f(static_cast<uint16_t>(m_value >> partno_f::Offset));}
	[[nodiscard]] constexpr auto constant() const -> constant_f {return constant_f(static_cast<uint8_t>(m_value >> constant_f::Offset));}
	[[nodiscard]] constexpr auto variant() const -> variant_f {return variant_f(static_cast<uint8_t>(m_value >> variant_f::Offset));}
	[[nodiscard]] constexpr auto implementer() const -> implementer_f {return implementer_f(static_cast<uint8_t>(m_value >> implementer_f::Offset));}

	constexpr cpuid_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cpuid_r other) const -> cpuid_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cpuid_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b1000001000011111100001001000001; // 1091551809 0x410FC241

private:
	uint32_t m_value;
};
/**
 * Interrupt control and state register
 */
class icsr_r {
public:

/**
 * Active vector
 */
class vectactive_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr vectactive_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator icsr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Return to base level
 */
class rettobase_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rettobase_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending vector
 */
class vectpending_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr vectpending_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator icsr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt pending flag
 */
class isrpending_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr isrpending_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SysTick exception clear-pending bit
 */
class pendstclr_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pendstclr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SysTick exception set-pending bit
 */
class pendstset_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pendstset_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PendSV clear-pending bit
 */
class pendsvclr_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pendsvclr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PendSV set-pending bit
 */
class pendsvset_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pendsvset_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * NMI set-pending bit.
 */
class nmipendset_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr nmipendset_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto vectactive() const -> vectactive_f {return vectactive_f(static_cast<uint16_t>(m_value >> vectactive_f::Offset));}
	[[nodiscard]] constexpr auto rettobase() const -> rettobase_f {return rettobase_f((m_value & rettobase_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vectpending() const -> vectpending_f {return vectpending_f(static_cast<uint8_t>(m_value >> vectpending_f::Offset));}
	[[nodiscard]] constexpr auto isrpending() const -> isrpending_f {return isrpending_f((m_value & isrpending_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pendstclr() const -> pendstclr_f {return pendstclr_f((m_value & pendstclr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pendstset() const -> pendstset_f {return pendstset_f((m_value & pendstset_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pendsvclr() const -> pendsvclr_f {return pendsvclr_f((m_value & pendsvclr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pendsvset() const -> pendsvset_f {return pendsvset_f((m_value & pendsvset_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nmipendset() const -> nmipendset_f {return nmipendset_f((m_value & nmipendset_f::Mask) != 0);}

	constexpr icsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icsr_r other) const -> icsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Vector table offset register
 */
class vtor_r {
public:

/**
 * Vector table base offset field
 */
class tbloff_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 21;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr tbloff_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator vtor_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<vtor_r>() const {return ClearSet<vtor_r>(Mask, *this);}
	constexpr auto operator|(vtor_r other) const -> vtor_r { return static_cast<vtor_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<vtor_r> other) const -> ClearSet<vtor_r> {return ClearSet<vtor_r>(vtor_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto tbloff() const -> tbloff_f {return tbloff_f(static_cast<uint32_t>(m_value >> tbloff_f::Offset));}

	constexpr vtor_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(vtor_r other) const -> vtor_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> vtor_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Application interrupt and reset control register
 */
class aircr_r {
public:

/**
 * VECTRESET
 */
class vectreset_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr vectreset_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aircr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<aircr_r>() const {return ClearSet<aircr_r>(Mask, *this);}
	constexpr auto operator|(aircr_r other) const -> aircr_r { return static_cast<aircr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aircr_r> other) const -> ClearSet<aircr_r> {return ClearSet<aircr_r>(aircr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * VECTCLRACTIVE
 */
class vectclractive_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr vectclractive_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aircr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<aircr_r>() const {return ClearSet<aircr_r>(Mask, *this);}
	constexpr auto operator|(aircr_r other) const -> aircr_r { return static_cast<aircr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aircr_r> other) const -> ClearSet<aircr_r> {return ClearSet<aircr_r>(aircr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SYSRESETREQ
 */
class sysresetreq_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sysresetreq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aircr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<aircr_r>() const {return ClearSet<aircr_r>(Mask, *this);}
	constexpr auto operator|(aircr_r other) const -> aircr_r { return static_cast<aircr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aircr_r> other) const -> ClearSet<aircr_r> {return ClearSet<aircr_r>(aircr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PRIGROUP
 */
class prigroup_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr prigroup_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator aircr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr operator ClearSet<aircr_r>() const {return ClearSet<aircr_r>(Mask, *this);}
	constexpr auto operator|(aircr_r other) const -> aircr_r { return static_cast<aircr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aircr_r> other) const -> ClearSet<aircr_r> {return ClearSet<aircr_r>(aircr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * ENDIANESS
 */
class endianess_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr endianess_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator aircr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<aircr_r>() const {return ClearSet<aircr_r>(Mask, *this);}
	constexpr auto operator|(aircr_r other) const -> aircr_r { return static_cast<aircr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aircr_r> other) const -> ClearSet<aircr_r> {return ClearSet<aircr_r>(aircr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Register key
 */
class vectkeystat_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr vectkeystat_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator aircr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<aircr_r>() const {return ClearSet<aircr_r>(Mask, *this);}
	constexpr auto operator|(aircr_r other) const -> aircr_r { return static_cast<aircr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<aircr_r> other) const -> ClearSet<aircr_r> {return ClearSet<aircr_r>(aircr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto vectreset() const -> vectreset_f {return vectreset_f((m_value & vectreset_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vectclractive() const -> vectclractive_f {return vectclractive_f((m_value & vectclractive_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sysresetreq() const -> sysresetreq_f {return sysresetreq_f((m_value & sysresetreq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto prigroup() const -> prigroup_f {return prigroup_f(static_cast<uint8_t>(m_value >> prigroup_f::Offset));}
	[[nodiscard]] constexpr auto endianess() const -> endianess_f {return endianess_f((m_value & endianess_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vectkeystat() const -> vectkeystat_f {return vectkeystat_f(static_cast<uint16_t>(m_value >> vectkeystat_f::Offset));}

	constexpr aircr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(aircr_r other) const -> aircr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> aircr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * System control register
 */
class scr_r {
public:

/**
 * SLEEPONEXIT
 */
class sleeponexit_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sleeponexit_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SLEEPDEEP
 */
class sleepdeep_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sleepdeep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Send Event on Pending bit
 */
class seveonpend_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr seveonpend_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto sleeponexit() const -> sleeponexit_f {return sleeponexit_f((m_value & sleeponexit_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sleepdeep() const -> sleepdeep_f {return sleepdeep_f((m_value & sleepdeep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto seveonpend() const -> seveonpend_f {return seveonpend_f((m_value & seveonpend_f::Mask) != 0);}

	constexpr scr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(scr_r other) const -> scr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> scr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Configuration and control register
 */
class ccr_r {
public:

/**
 * Configures how the processor enters Thread mode
 */
class nonbasethrdena_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nonbasethrdena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * USERSETMPEND
 */
class usersetmpend_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usersetmpend_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * UNALIGN_ TRP
 */
class unalign_trp_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr unalign_trp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DIV_0_TRP
 */
class div_0_trp_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr div_0_trp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BFHFNMIGN
 */
class bfhfnmign_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bfhfnmign_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * STKALIGN
 */
class stkalign_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr stkalign_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ccr_r>() const {return ClearSet<ccr_r>(Mask, *this);}
	constexpr auto operator|(ccr_r other) const -> ccr_r { return static_cast<ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr_r> other) const -> ClearSet<ccr_r> {return ClearSet<ccr_r>(ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto nonbasethrdena() const -> nonbasethrdena_f {return nonbasethrdena_f((m_value & nonbasethrdena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usersetmpend() const -> usersetmpend_f {return usersetmpend_f((m_value & usersetmpend_f::Mask) != 0);}
	[[nodiscard]] constexpr auto unalign_trp() const -> unalign_trp_f {return unalign_trp_f((m_value & unalign_trp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto div_0_trp() const -> div_0_trp_f {return div_0_trp_f((m_value & div_0_trp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bfhfnmign() const -> bfhfnmign_f {return bfhfnmign_f((m_value & bfhfnmign_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stkalign() const -> stkalign_f {return stkalign_f((m_value & stkalign_f::Mask) != 0);}

	constexpr ccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr_r other) const -> ccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * System handler priority registers
 */
class shpr1_r {
public:

/**
 * Priority of system handler 4
 */
class pri_4_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr pri_4_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator shpr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr operator ClearSet<shpr1_r>() const {return ClearSet<shpr1_r>(Mask, *this);}
	constexpr auto operator|(shpr1_r other) const -> shpr1_r { return static_cast<shpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shpr1_r> other) const -> ClearSet<shpr1_r> {return ClearSet<shpr1_r>(shpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Priority of system handler 5
 */
class pri_5_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pri_5_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator shpr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr operator ClearSet<shpr1_r>() const {return ClearSet<shpr1_r>(Mask, *this);}
	constexpr auto operator|(shpr1_r other) const -> shpr1_r { return static_cast<shpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shpr1_r> other) const -> ClearSet<shpr1_r> {return ClearSet<shpr1_r>(shpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Priority of system handler 6
 */
class pri_6_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pri_6_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator shpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<shpr1_r>() const {return ClearSet<shpr1_r>(Mask, *this);}
	constexpr auto operator|(shpr1_r other) const -> shpr1_r { return static_cast<shpr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shpr1_r> other) const -> ClearSet<shpr1_r> {return ClearSet<shpr1_r>(shpr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pri_4() const -> pri_4_f {return pri_4_f(static_cast<uint8_t>(m_value >> pri_4_f::Offset));}
	[[nodiscard]] constexpr auto pri_5() const -> pri_5_f {return pri_5_f(static_cast<uint8_t>(m_value >> pri_5_f::Offset));}
	[[nodiscard]] constexpr auto pri_6() const -> pri_6_f {return pri_6_f(static_cast<uint8_t>(m_value >> pri_6_f::Offset));}

	constexpr shpr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(shpr1_r other) const -> shpr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> shpr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * System handler priority registers
 */
class shpr2_r {
public:

/**
 * Priority of system handler 11
 */
class pri_11_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pri_11_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator shpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<shpr2_r>() const {return ClearSet<shpr2_r>(Mask, *this);}
	constexpr auto operator|(shpr2_r other) const -> shpr2_r { return static_cast<shpr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shpr2_r> other) const -> ClearSet<shpr2_r> {return ClearSet<shpr2_r>(shpr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pri_11() const -> pri_11_f {return pri_11_f(static_cast<uint8_t>(m_value >> pri_11_f::Offset));}

	constexpr shpr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(shpr2_r other) const -> shpr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> shpr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * System handler priority registers
 */
class shpr3_r {
public:

/**
 * Priority of system handler 14
 */
class pri_14_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pri_14_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator shpr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<shpr3_r>() const {return ClearSet<shpr3_r>(Mask, *this);}
	constexpr auto operator|(shpr3_r other) const -> shpr3_r { return static_cast<shpr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shpr3_r> other) const -> ClearSet<shpr3_r> {return ClearSet<shpr3_r>(shpr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Priority of system handler 15
 */
class pri_15_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pri_15_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator shpr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<shpr3_r>() const {return ClearSet<shpr3_r>(Mask, *this);}
	constexpr auto operator|(shpr3_r other) const -> shpr3_r { return static_cast<shpr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shpr3_r> other) const -> ClearSet<shpr3_r> {return ClearSet<shpr3_r>(shpr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pri_14() const -> pri_14_f {return pri_14_f(static_cast<uint8_t>(m_value >> pri_14_f::Offset));}
	[[nodiscard]] constexpr auto pri_15() const -> pri_15_f {return pri_15_f(static_cast<uint8_t>(m_value >> pri_15_f::Offset));}

	constexpr shpr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(shpr3_r other) const -> shpr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> shpr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * System handler control and state register
 */
class shcsr_r {
public:

/**
 * Memory management fault exception active bit
 */
class memfaultact_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr memfaultact_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Bus fault exception active bit
 */
class busfaultact_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr busfaultact_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Usage fault exception active bit
 */
class usgfaultact_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr usgfaultact_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SVC call active bit
 */
class svcallact_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr svcallact_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Debug monitor active bit
 */
class monitoract_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr monitoract_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PendSV exception active bit
 */
class pendsvact_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pendsvact_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SysTick exception active bit
 */
class systickact_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr systickact_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Usage fault exception pending bit
 */
class usgfaultpended_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr usgfaultpended_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Memory management fault exception pending bit
 */
class memfaultpended_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr memfaultpended_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Bus fault exception pending bit
 */
class busfaultpended_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr busfaultpended_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SVC call pending bit
 */
class svcallpended_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr svcallpended_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Memory management fault enable bit
 */
class memfaultena_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr memfaultena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Bus fault enable bit
 */
class busfaultena_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr busfaultena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Usage fault enable bit
 */
class usgfaultena_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr usgfaultena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shcsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<shcsr_r>() const {return ClearSet<shcsr_r>(Mask, *this);}
	constexpr auto operator|(shcsr_r other) const -> shcsr_r { return static_cast<shcsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shcsr_r> other) const -> ClearSet<shcsr_r> {return ClearSet<shcsr_r>(shcsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto memfaultact() const -> memfaultact_f {return memfaultact_f((m_value & memfaultact_f::Mask) != 0);}
	[[nodiscard]] constexpr auto busfaultact() const -> busfaultact_f {return busfaultact_f((m_value & busfaultact_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usgfaultact() const -> usgfaultact_f {return usgfaultact_f((m_value & usgfaultact_f::Mask) != 0);}
	[[nodiscard]] constexpr auto svcallact() const -> svcallact_f {return svcallact_f((m_value & svcallact_f::Mask) != 0);}
	[[nodiscard]] constexpr auto monitoract() const -> monitoract_f {return monitoract_f((m_value & monitoract_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pendsvact() const -> pendsvact_f {return pendsvact_f((m_value & pendsvact_f::Mask) != 0);}
	[[nodiscard]] constexpr auto systickact() const -> systickact_f {return systickact_f((m_value & systickact_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usgfaultpended() const -> usgfaultpended_f {return usgfaultpended_f((m_value & usgfaultpended_f::Mask) != 0);}
	[[nodiscard]] constexpr auto memfaultpended() const -> memfaultpended_f {return memfaultpended_f((m_value & memfaultpended_f::Mask) != 0);}
	[[nodiscard]] constexpr auto busfaultpended() const -> busfaultpended_f {return busfaultpended_f((m_value & busfaultpended_f::Mask) != 0);}
	[[nodiscard]] constexpr auto svcallpended() const -> svcallpended_f {return svcallpended_f((m_value & svcallpended_f::Mask) != 0);}
	[[nodiscard]] constexpr auto memfaultena() const -> memfaultena_f {return memfaultena_f((m_value & memfaultena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto busfaultena() const -> busfaultena_f {return busfaultena_f((m_value & busfaultena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto usgfaultena() const -> usgfaultena_f {return usgfaultena_f((m_value & usgfaultena_f::Mask) != 0);}

	constexpr shcsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(shcsr_r other) const -> shcsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> shcsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Configurable fault status register
 */
class cfsr_ufsr_bfsr_mmfsr_r {
public:

/**
 * Instruction access violation flag
 */
class iaccviol_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr iaccviol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Memory manager fault on unstacking for a return from exception
 */
class munstkerr_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr munstkerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Memory manager fault on stacking for exception entry.
 */
class mstkerr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mstkerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MLSPERR
 */
class mlsperr_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mlsperr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Memory Management Fault Address Register (MMAR) valid flag
 */
class mmarvalid_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mmarvalid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Instruction bus error
 */
class ibuserr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ibuserr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Precise data bus error
 */
class preciserr_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr preciserr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Imprecise data bus error
 */
class impreciserr_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr impreciserr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Bus fault on unstacking for a return from exception
 */
class unstkerr_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr unstkerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Bus fault on stacking for exception entry
 */
class stkerr_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr stkerr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Bus fault on floating-point lazy state preservation
 */
class lsperr_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lsperr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Bus Fault Address Register (BFAR) valid flag
 */
class bfarvalid_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bfarvalid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Undefined instruction usage fault
 */
class undefinstr_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr undefinstr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Invalid state usage fault
 */
class invstate_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr invstate_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Invalid PC load usage fault
 */
class invpc_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr invpc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * No coprocessor usage fault.
 */
class nocp_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr nocp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Unaligned access usage fault
 */
class unaligned_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr unaligned_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Divide by zero usage fault
 */
class divbyzero_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr divbyzero_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfsr_ufsr_bfsr_mmfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<cfsr_ufsr_bfsr_mmfsr_r>() const {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(Mask, *this);}
	constexpr auto operator|(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return static_cast<cfsr_ufsr_bfsr_mmfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfsr_ufsr_bfsr_mmfsr_r> other) const -> ClearSet<cfsr_ufsr_bfsr_mmfsr_r> {return ClearSet<cfsr_ufsr_bfsr_mmfsr_r>(cfsr_ufsr_bfsr_mmfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto iaccviol() const -> iaccviol_f {return iaccviol_f((m_value & iaccviol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto munstkerr() const -> munstkerr_f {return munstkerr_f((m_value & munstkerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mstkerr() const -> mstkerr_f {return mstkerr_f((m_value & mstkerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mlsperr() const -> mlsperr_f {return mlsperr_f((m_value & mlsperr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mmarvalid() const -> mmarvalid_f {return mmarvalid_f((m_value & mmarvalid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ibuserr() const -> ibuserr_f {return ibuserr_f((m_value & ibuserr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto preciserr() const -> preciserr_f {return preciserr_f((m_value & preciserr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto impreciserr() const -> impreciserr_f {return impreciserr_f((m_value & impreciserr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto unstkerr() const -> unstkerr_f {return unstkerr_f((m_value & unstkerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stkerr() const -> stkerr_f {return stkerr_f((m_value & stkerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lsperr() const -> lsperr_f {return lsperr_f((m_value & lsperr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bfarvalid() const -> bfarvalid_f {return bfarvalid_f((m_value & bfarvalid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto undefinstr() const -> undefinstr_f {return undefinstr_f((m_value & undefinstr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto invstate() const -> invstate_f {return invstate_f((m_value & invstate_f::Mask) != 0);}
	[[nodiscard]] constexpr auto invpc() const -> invpc_f {return invpc_f((m_value & invpc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nocp() const -> nocp_f {return nocp_f((m_value & nocp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto unaligned() const -> unaligned_f {return unaligned_f((m_value & unaligned_f::Mask) != 0);}
	[[nodiscard]] constexpr auto divbyzero() const -> divbyzero_f {return divbyzero_f((m_value & divbyzero_f::Mask) != 0);}

	constexpr cfsr_ufsr_bfsr_mmfsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfsr_ufsr_bfsr_mmfsr_r other) const -> cfsr_ufsr_bfsr_mmfsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfsr_ufsr_bfsr_mmfsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Hard fault status register
 */
class hfsr_r {
public:

/**
 * Vector table hard fault
 */
class vecttbl_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr vecttbl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<hfsr_r>() const {return ClearSet<hfsr_r>(Mask, *this);}
	constexpr auto operator|(hfsr_r other) const -> hfsr_r { return static_cast<hfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<hfsr_r> other) const -> ClearSet<hfsr_r> {return ClearSet<hfsr_r>(hfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Forced hard fault
 */
class forced_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr forced_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<hfsr_r>() const {return ClearSet<hfsr_r>(Mask, *this);}
	constexpr auto operator|(hfsr_r other) const -> hfsr_r { return static_cast<hfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<hfsr_r> other) const -> ClearSet<hfsr_r> {return ClearSet<hfsr_r>(hfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Reserved for Debug use
 */
class debug_vt_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr debug_vt_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hfsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<hfsr_r>() const {return ClearSet<hfsr_r>(Mask, *this);}
	constexpr auto operator|(hfsr_r other) const -> hfsr_r { return static_cast<hfsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<hfsr_r> other) const -> ClearSet<hfsr_r> {return ClearSet<hfsr_r>(hfsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto vecttbl() const -> vecttbl_f {return vecttbl_f((m_value & vecttbl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto forced() const -> forced_f {return forced_f((m_value & forced_f::Mask) != 0);}
	[[nodiscard]] constexpr auto debug_vt() const -> debug_vt_f {return debug_vt_f((m_value & debug_vt_f::Mask) != 0);}

	constexpr hfsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(hfsr_r other) const -> hfsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> hfsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Memory management fault address register
 */
class mmfar_r {
public:

/**
 * Memory management fault address
 */
class mmfar_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mmfar_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator mmfar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<mmfar_r>() const {return ClearSet<mmfar_r>(Mask, *this);}
	constexpr auto operator|(mmfar_r other) const -> mmfar_r { return static_cast<mmfar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<mmfar_r> other) const -> ClearSet<mmfar_r> {return ClearSet<mmfar_r>(mmfar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto mmfar() const -> mmfar_f {return mmfar_f(static_cast<uint32_t>(m_value >> mmfar_f::Offset));}

	constexpr mmfar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(mmfar_r other) const -> mmfar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> mmfar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Bus fault address register
 */
class bfar_r {
public:

/**
 * Bus fault address
 */
class bfar_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bfar_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bfar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<bfar_r>() const {return ClearSet<bfar_r>(Mask, *this);}
	constexpr auto operator|(bfar_r other) const -> bfar_r { return static_cast<bfar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bfar_r> other) const -> ClearSet<bfar_r> {return ClearSet<bfar_r>(bfar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bfar() const -> bfar_f {return bfar_f(static_cast<uint32_t>(m_value >> bfar_f::Offset));}

	constexpr bfar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bfar_r other) const -> bfar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bfar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Auxiliary fault status register
 */
class afsr_r {
public:

/**
 * Implementation defined
 */
class impdef_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr impdef_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator afsr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr operator ClearSet<afsr_r>() const {return ClearSet<afsr_r>(Mask, *this);}
	constexpr auto operator|(afsr_r other) const -> afsr_r { return static_cast<afsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<afsr_r> other) const -> ClearSet<afsr_r> {return ClearSet<afsr_r>(afsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto impdef() const -> impdef_f {return impdef_f(static_cast<uint32_t>(m_value >> impdef_f::Offset));}

	constexpr afsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(afsr_r other) const -> afsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> afsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,cpuid_r> cpuid;
	Memory<uint32_t,icsr_r> icsr;
	Memory<uint32_t,vtor_r> vtor;
	Memory<uint32_t,aircr_r> aircr;
	Memory<uint32_t,scr_r> scr;
	Memory<uint32_t,ccr_r> ccr;
	Memory<uint32_t,shpr1_r> shpr1;
	Memory<uint32_t,shpr2_r> shpr2;
	Memory<uint32_t,shpr3_r> shpr3;
	Memory<uint32_t,shcsr_r> shcsr;
	Memory<uint32_t,cfsr_ufsr_bfsr_mmfsr_r> cfsr_ufsr_bfsr_mmfsr;
	Memory<uint32_t,hfsr_r> hfsr;
	Padding<4> _p48;
	Memory<uint32_t,mmfar_r> mmfar;
	Memory<uint32_t,bfar_r> bfar;
	Memory<uint32_t,afsr_r> afsr;
};

static_assert(std::is_standard_layout_v<scb_p>);
static_assert(offsetof(scb_p, cpuid) == scb_p::cpuid_r::Offset);
static_assert(offsetof(scb_p, icsr) == scb_p::icsr_r::Offset);
static_assert(offsetof(scb_p, vtor) == scb_p::vtor_r::Offset);
static_assert(offsetof(scb_p, aircr) == scb_p::aircr_r::Offset);
static_assert(offsetof(scb_p, scr) == scb_p::scr_r::Offset);
static_assert(offsetof(scb_p, ccr) == scb_p::ccr_r::Offset);
static_assert(offsetof(scb_p, shpr1) == scb_p::shpr1_r::Offset);
static_assert(offsetof(scb_p, shpr2) == scb_p::shpr2_r::Offset);
static_assert(offsetof(scb_p, shpr3) == scb_p::shpr3_r::Offset);
static_assert(offsetof(scb_p, shcsr) == scb_p::shcsr_r::Offset);
static_assert(offsetof(scb_p, cfsr_ufsr_bfsr_mmfsr) == scb_p::cfsr_ufsr_bfsr_mmfsr_r::Offset);
static_assert(offsetof(scb_p, hfsr) == scb_p::hfsr_r::Offset);
static_assert(offsetof(scb_p, mmfar) == scb_p::mmfar_r::Offset);
static_assert(offsetof(scb_p, bfar) == scb_p::bfar_r::Offset);
static_assert(offsetof(scb_p, afsr) == scb_p::afsr_r::Offset);

/**
 * System control block ACTLR
 */
class scb_actrl_p {
public:
/**
 * Auxiliary control register
 */
class actrl_r {
public:

/**
 * DISMCYCINT
 */
class dismcycint_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dismcycint_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator actrl_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<actrl_r>() const {return ClearSet<actrl_r>(Mask, *this);}
	constexpr auto operator|(actrl_r other) const -> actrl_r { return static_cast<actrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<actrl_r> other) const -> ClearSet<actrl_r> {return ClearSet<actrl_r>(actrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DISDEFWBUF
 */
class disdefwbuf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr disdefwbuf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator actrl_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<actrl_r>() const {return ClearSet<actrl_r>(Mask, *this);}
	constexpr auto operator|(actrl_r other) const -> actrl_r { return static_cast<actrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<actrl_r> other) const -> ClearSet<actrl_r> {return ClearSet<actrl_r>(actrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DISFOLD
 */
class disfold_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr disfold_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator actrl_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<actrl_r>() const {return ClearSet<actrl_r>(Mask, *this);}
	constexpr auto operator|(actrl_r other) const -> actrl_r { return static_cast<actrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<actrl_r> other) const -> ClearSet<actrl_r> {return ClearSet<actrl_r>(actrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DISFPCA
 */
class disfpca_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr disfpca_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator actrl_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<actrl_r>() const {return ClearSet<actrl_r>(Mask, *this);}
	constexpr auto operator|(actrl_r other) const -> actrl_r { return static_cast<actrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<actrl_r> other) const -> ClearSet<actrl_r> {return ClearSet<actrl_r>(actrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DISOOFP
 */
class disoofp_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr disoofp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator actrl_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<actrl_r>() const {return ClearSet<actrl_r>(Mask, *this);}
	constexpr auto operator|(actrl_r other) const -> actrl_r { return static_cast<actrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<actrl_r> other) const -> ClearSet<actrl_r> {return ClearSet<actrl_r>(actrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dismcycint() const -> dismcycint_f {return dismcycint_f((m_value & dismcycint_f::Mask) != 0);}
	[[nodiscard]] constexpr auto disdefwbuf() const -> disdefwbuf_f {return disdefwbuf_f((m_value & disdefwbuf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto disfold() const -> disfold_f {return disfold_f((m_value & disfold_f::Mask) != 0);}
	[[nodiscard]] constexpr auto disfpca() const -> disfpca_f {return disfpca_f((m_value & disfpca_f::Mask) != 0);}
	[[nodiscard]] constexpr auto disoofp() const -> disoofp_f {return disoofp_f((m_value & disoofp_f::Mask) != 0);}

	constexpr actrl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(actrl_r other) const -> actrl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> actrl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,actrl_r> actrl;
};

static_assert(std::is_standard_layout_v<scb_actrl_p>);
static_assert(offsetof(scb_actrl_p, actrl) == scb_actrl_p::actrl_r::Offset);

inline scb_p& scb = *reinterpret_cast<scb_p*>(0xE000ED00);
inline scb_actrl_p& scb_actrl = *reinterpret_cast<scb_actrl_p*>(0xE000E008);

} // STM32F401

