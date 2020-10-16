#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * System configuration controller
 */
class syscfg_p {
public:
/**
 * memory remap register
 */
class memrm_r {
public:

/**
 * MEM_MODE
 */
class mem_mode_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mem_mode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator memrm_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(memrm_r other) const -> memrm_r { return static_cast<memrm_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mem_mode() const -> mem_mode_f {return mem_mode_f(static_cast<uint8_t>(m_value >> mem_mode_f::Offset));}

	constexpr memrm_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(memrm_r other) const -> memrm_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> memrm_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * peripheral mode configuration register
 */
class pmc_r {
public:

/**
 * ADC1DC2
 */
class adc1dc2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr adc1dc2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pmc_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(pmc_r other) const -> pmc_r { return static_cast<pmc_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto adc1dc2() const -> adc1dc2_f {return adc1dc2_f((m_value & adc1dc2_f::Mask) != 0);}

	constexpr pmc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pmc_r other) const -> pmc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pmc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * external interrupt configuration register 1
 */
class exticr1_r {
public:

/**
 * EXTI x configuration (x = 0 to 3)
 */
class exti3_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr exti3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(exticr1_r other) const -> exticr1_r { return static_cast<exticr1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 0 to 3)
 */
class exti2_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr exti2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(exticr1_r other) const -> exticr1_r { return static_cast<exticr1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 0 to 3)
 */
class exti1_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr exti1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(exticr1_r other) const -> exticr1_r { return static_cast<exticr1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 0 to 3)
 */
class exti0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr exti0_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(exticr1_r other) const -> exticr1_r { return static_cast<exticr1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto exti3() const -> exti3_f {return exti3_f(static_cast<uint8_t>(m_value >> exti3_f::Offset));}
	[[nodiscard]] constexpr auto exti2() const -> exti2_f {return exti2_f(static_cast<uint8_t>(m_value >> exti2_f::Offset));}
	[[nodiscard]] constexpr auto exti1() const -> exti1_f {return exti1_f(static_cast<uint8_t>(m_value >> exti1_f::Offset));}
	[[nodiscard]] constexpr auto exti0() const -> exti0_f {return exti0_f(static_cast<uint8_t>(m_value >> exti0_f::Offset));}

	constexpr exticr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(exticr1_r other) const -> exticr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> exticr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * external interrupt configuration register 2
 */
class exticr2_r {
public:

/**
 * EXTI x configuration (x = 4 to 7)
 */
class exti7_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr exti7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(exticr2_r other) const -> exticr2_r { return static_cast<exticr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 4 to 7)
 */
class exti6_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr exti6_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(exticr2_r other) const -> exticr2_r { return static_cast<exticr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 4 to 7)
 */
class exti5_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr exti5_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(exticr2_r other) const -> exticr2_r { return static_cast<exticr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 4 to 7)
 */
class exti4_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr exti4_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(exticr2_r other) const -> exticr2_r { return static_cast<exticr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto exti7() const -> exti7_f {return exti7_f(static_cast<uint8_t>(m_value >> exti7_f::Offset));}
	[[nodiscard]] constexpr auto exti6() const -> exti6_f {return exti6_f(static_cast<uint8_t>(m_value >> exti6_f::Offset));}
	[[nodiscard]] constexpr auto exti5() const -> exti5_f {return exti5_f(static_cast<uint8_t>(m_value >> exti5_f::Offset));}
	[[nodiscard]] constexpr auto exti4() const -> exti4_f {return exti4_f(static_cast<uint8_t>(m_value >> exti4_f::Offset));}

	constexpr exticr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(exticr2_r other) const -> exticr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> exticr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * external interrupt configuration register 3
 */
class exticr3_r {
public:

/**
 * EXTI x configuration (x = 8 to 11)
 */
class exti11_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr exti11_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(exticr3_r other) const -> exticr3_r { return static_cast<exticr3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI10
 */
class exti10_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr exti10_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(exticr3_r other) const -> exticr3_r { return static_cast<exticr3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 8 to 11)
 */
class exti9_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr exti9_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(exticr3_r other) const -> exticr3_r { return static_cast<exticr3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 8 to 11)
 */
class exti8_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr exti8_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(exticr3_r other) const -> exticr3_r { return static_cast<exticr3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto exti11() const -> exti11_f {return exti11_f(static_cast<uint8_t>(m_value >> exti11_f::Offset));}
	[[nodiscard]] constexpr auto exti10() const -> exti10_f {return exti10_f(static_cast<uint8_t>(m_value >> exti10_f::Offset));}
	[[nodiscard]] constexpr auto exti9() const -> exti9_f {return exti9_f(static_cast<uint8_t>(m_value >> exti9_f::Offset));}
	[[nodiscard]] constexpr auto exti8() const -> exti8_f {return exti8_f(static_cast<uint8_t>(m_value >> exti8_f::Offset));}

	constexpr exticr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(exticr3_r other) const -> exticr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> exticr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * external interrupt configuration register 4
 */
class exticr4_r {
public:

/**
 * EXTI x configuration (x = 12 to 15)
 */
class exti15_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr exti15_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(exticr4_r other) const -> exticr4_r { return static_cast<exticr4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 12 to 15)
 */
class exti14_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr exti14_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(exticr4_r other) const -> exticr4_r { return static_cast<exticr4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 12 to 15)
 */
class exti13_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr exti13_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(exticr4_r other) const -> exticr4_r { return static_cast<exticr4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * EXTI x configuration (x = 12 to 15)
 */
class exti12_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr exti12_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator exticr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(exticr4_r other) const -> exticr4_r { return static_cast<exticr4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto exti15() const -> exti15_f {return exti15_f(static_cast<uint8_t>(m_value >> exti15_f::Offset));}
	[[nodiscard]] constexpr auto exti14() const -> exti14_f {return exti14_f(static_cast<uint8_t>(m_value >> exti14_f::Offset));}
	[[nodiscard]] constexpr auto exti13() const -> exti13_f {return exti13_f(static_cast<uint8_t>(m_value >> exti13_f::Offset));}
	[[nodiscard]] constexpr auto exti12() const -> exti12_f {return exti12_f(static_cast<uint8_t>(m_value >> exti12_f::Offset));}

	constexpr exticr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(exticr4_r other) const -> exticr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> exticr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Compensation cell control register
 */
class cmpcr_r {
public:

/**
 * READY
 */
class ready_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ready_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cmpcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cmpcr_r other) const -> cmpcr_r { return static_cast<cmpcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Compensation cell power-down
 */
class cmp_pd_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmp_pd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cmpcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(cmpcr_r other) const -> cmpcr_r { return static_cast<cmpcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ready() const -> ready_f {return ready_f((m_value & ready_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmp_pd() const -> cmp_pd_f {return cmp_pd_f((m_value & cmp_pd_f::Mask) != 0);}

	constexpr cmpcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmpcr_r other) const -> cmpcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmpcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,memrm_r> memrm;
	Memory<uint32_t,pmc_r> pmc;
	Memory<uint32_t,exticr1_r> exticr1;
	Memory<uint32_t,exticr2_r> exticr2;
	Memory<uint32_t,exticr3_r> exticr3;
	Memory<uint32_t,exticr4_r> exticr4;
	Padding<8> _p24;
	ReadOnlyMemory<uint32_t,cmpcr_r> cmpcr;
};

static_assert(std::is_standard_layout_v<syscfg_p>);
static_assert(offsetof(syscfg_p, memrm) == syscfg_p::memrm_r::Offset);
static_assert(offsetof(syscfg_p, pmc) == syscfg_p::pmc_r::Offset);
static_assert(offsetof(syscfg_p, exticr1) == syscfg_p::exticr1_r::Offset);
static_assert(offsetof(syscfg_p, exticr2) == syscfg_p::exticr2_r::Offset);
static_assert(offsetof(syscfg_p, exticr3) == syscfg_p::exticr3_r::Offset);
static_assert(offsetof(syscfg_p, exticr4) == syscfg_p::exticr4_r::Offset);
static_assert(offsetof(syscfg_p, cmpcr) == syscfg_p::cmpcr_r::Offset);

inline syscfg_p& syscfg = *reinterpret_cast<syscfg_p*>(0x40013800);

} // STM32F401

