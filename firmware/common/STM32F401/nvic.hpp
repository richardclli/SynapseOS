#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * Nested Vectored Interrupt Controller
 */
class nvic_p {
public:
/**
 * Interrupt Set-Enable Register
 */
class iser0_r {
public:

/**
 * SETENA
 */
class setena_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr setena_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator iser0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(iser0_r other) const -> iser0_r { return static_cast<iser0_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto setena() const -> setena_f {return setena_f(static_cast<uint32_t>(m_value >> setena_f::Offset));}

	constexpr iser0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(iser0_r other) const -> iser0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> iser0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Set-Enable Register
 */
class iser1_r {
public:

/**
 * SETENA
 */
class setena_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr setena_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator iser1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(iser1_r other) const -> iser1_r { return static_cast<iser1_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto setena() const -> setena_f {return setena_f(static_cast<uint32_t>(m_value >> setena_f::Offset));}

	constexpr iser1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(iser1_r other) const -> iser1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> iser1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Set-Enable Register
 */
class iser2_r {
public:

/**
 * SETENA
 */
class setena_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr setena_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator iser2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(iser2_r other) const -> iser2_r { return static_cast<iser2_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto setena() const -> setena_f {return setena_f(static_cast<uint32_t>(m_value >> setena_f::Offset));}

	constexpr iser2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(iser2_r other) const -> iser2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> iser2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Clear-Enable Register
 */
class icer0_r {
public:

/**
 * CLRENA
 */
class clrena_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clrena_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator icer0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(icer0_r other) const -> icer0_r { return static_cast<icer0_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto clrena() const -> clrena_f {return clrena_f(static_cast<uint32_t>(m_value >> clrena_f::Offset));}

	constexpr icer0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icer0_r other) const -> icer0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icer0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Clear-Enable Register
 */
class icer1_r {
public:

/**
 * CLRENA
 */
class clrena_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clrena_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator icer1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(icer1_r other) const -> icer1_r { return static_cast<icer1_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto clrena() const -> clrena_f {return clrena_f(static_cast<uint32_t>(m_value >> clrena_f::Offset));}

	constexpr icer1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icer1_r other) const -> icer1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icer1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 132;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Clear-Enable Register
 */
class icer2_r {
public:

/**
 * CLRENA
 */
class clrena_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clrena_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator icer2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(icer2_r other) const -> icer2_r { return static_cast<icer2_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto clrena() const -> clrena_f {return clrena_f(static_cast<uint32_t>(m_value >> clrena_f::Offset));}

	constexpr icer2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icer2_r other) const -> icer2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icer2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 136;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Set-Pending Register
 */
class ispr0_r {
public:

/**
 * SETPEND
 */
class setpend_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr setpend_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator ispr0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ispr0_r other) const -> ispr0_r { return static_cast<ispr0_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto setpend() const -> setpend_f {return setpend_f(static_cast<uint32_t>(m_value >> setpend_f::Offset));}

	constexpr ispr0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ispr0_r other) const -> ispr0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ispr0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 256;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Set-Pending Register
 */
class ispr1_r {
public:

/**
 * SETPEND
 */
class setpend_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr setpend_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator ispr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ispr1_r other) const -> ispr1_r { return static_cast<ispr1_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto setpend() const -> setpend_f {return setpend_f(static_cast<uint32_t>(m_value >> setpend_f::Offset));}

	constexpr ispr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ispr1_r other) const -> ispr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ispr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 260;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Set-Pending Register
 */
class ispr2_r {
public:

/**
 * SETPEND
 */
class setpend_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr setpend_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator ispr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ispr2_r other) const -> ispr2_r { return static_cast<ispr2_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto setpend() const -> setpend_f {return setpend_f(static_cast<uint32_t>(m_value >> setpend_f::Offset));}

	constexpr ispr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ispr2_r other) const -> ispr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ispr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 264;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Clear-Pending Register
 */
class icpr0_r {
public:

/**
 * CLRPEND
 */
class clrpend_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clrpend_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator icpr0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(icpr0_r other) const -> icpr0_r { return static_cast<icpr0_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto clrpend() const -> clrpend_f {return clrpend_f(static_cast<uint32_t>(m_value >> clrpend_f::Offset));}

	constexpr icpr0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icpr0_r other) const -> icpr0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icpr0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 384;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Clear-Pending Register
 */
class icpr1_r {
public:

/**
 * CLRPEND
 */
class clrpend_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clrpend_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator icpr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(icpr1_r other) const -> icpr1_r { return static_cast<icpr1_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto clrpend() const -> clrpend_f {return clrpend_f(static_cast<uint32_t>(m_value >> clrpend_f::Offset));}

	constexpr icpr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icpr1_r other) const -> icpr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icpr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 388;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Clear-Pending Register
 */
class icpr2_r {
public:

/**
 * CLRPEND
 */
class clrpend_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr clrpend_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator icpr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(icpr2_r other) const -> icpr2_r { return static_cast<icpr2_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto clrpend() const -> clrpend_f {return clrpend_f(static_cast<uint32_t>(m_value >> clrpend_f::Offset));}

	constexpr icpr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icpr2_r other) const -> icpr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icpr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 392;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Active Bit Register
 */
class iabr0_r {
public:

/**
 * ACTIVE
 */
class active_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr active_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator iabr0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(iabr0_r other) const -> iabr0_r { return static_cast<iabr0_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto active() const -> active_f {return active_f(static_cast<uint32_t>(m_value >> active_f::Offset));}

	constexpr iabr0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(iabr0_r other) const -> iabr0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> iabr0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 512;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Active Bit Register
 */
class iabr1_r {
public:

/**
 * ACTIVE
 */
class active_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr active_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator iabr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(iabr1_r other) const -> iabr1_r { return static_cast<iabr1_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto active() const -> active_f {return active_f(static_cast<uint32_t>(m_value >> active_f::Offset));}

	constexpr iabr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(iabr1_r other) const -> iabr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> iabr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 516;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Active Bit Register
 */
class iabr2_r {
public:

/**
 * ACTIVE
 */
class active_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr active_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator iabr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(iabr2_r other) const -> iabr2_r { return static_cast<iabr2_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto active() const -> active_f {return active_f(static_cast<uint32_t>(m_value >> active_f::Offset));}

	constexpr iabr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(iabr2_r other) const -> iabr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> iabr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 520;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr0_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr0_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr0_r other) const -> ipr0_r { return static_cast<ipr0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr0_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr0_r other) const -> ipr0_r { return static_cast<ipr0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr0_r other) const -> ipr0_r { return static_cast<ipr0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr0_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr0_r other) const -> ipr0_r { return static_cast<ipr0_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr0_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr0_r other) const -> ipr0_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr0_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 768;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr1_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr1_r other) const -> ipr1_r { return static_cast<ipr1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr1_r other) const -> ipr1_r { return static_cast<ipr1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr1_r other) const -> ipr1_r { return static_cast<ipr1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr1_r other) const -> ipr1_r { return static_cast<ipr1_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr1_r other) const -> ipr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 772;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr2_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr2_r other) const -> ipr2_r { return static_cast<ipr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr2_r other) const -> ipr2_r { return static_cast<ipr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr2_r other) const -> ipr2_r { return static_cast<ipr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr2_r other) const -> ipr2_r { return static_cast<ipr2_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr2_r other) const -> ipr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 776;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr3_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr3_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr3_r other) const -> ipr3_r { return static_cast<ipr3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr3_r other) const -> ipr3_r { return static_cast<ipr3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr3_r other) const -> ipr3_r { return static_cast<ipr3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr3_r other) const -> ipr3_r { return static_cast<ipr3_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr3_r other) const -> ipr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 780;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr4_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr4_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr4_r other) const -> ipr4_r { return static_cast<ipr4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr4_r other) const -> ipr4_r { return static_cast<ipr4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr4_r other) const -> ipr4_r { return static_cast<ipr4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr4_r other) const -> ipr4_r { return static_cast<ipr4_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr4_r other) const -> ipr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 784;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr5_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr5_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr5_r other) const -> ipr5_r { return static_cast<ipr5_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr5_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr5_r other) const -> ipr5_r { return static_cast<ipr5_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr5_r other) const -> ipr5_r { return static_cast<ipr5_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr5_r other) const -> ipr5_r { return static_cast<ipr5_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr5_r other) const -> ipr5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 788;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr6_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr6_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr6_r other) const -> ipr6_r { return static_cast<ipr6_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr6_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr6_r other) const -> ipr6_r { return static_cast<ipr6_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr6_r other) const -> ipr6_r { return static_cast<ipr6_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr6_r other) const -> ipr6_r { return static_cast<ipr6_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr6_r other) const -> ipr6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 792;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr7_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr7_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr7_r other) const -> ipr7_r { return static_cast<ipr7_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr7_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr7_r other) const -> ipr7_r { return static_cast<ipr7_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr7_r other) const -> ipr7_r { return static_cast<ipr7_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr7_r other) const -> ipr7_r { return static_cast<ipr7_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr7_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr7_r other) const -> ipr7_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr7_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 796;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr8_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr8_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr8_r other) const -> ipr8_r { return static_cast<ipr8_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr8_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr8_r other) const -> ipr8_r { return static_cast<ipr8_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr8_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr8_r other) const -> ipr8_r { return static_cast<ipr8_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr8_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr8_r other) const -> ipr8_r { return static_cast<ipr8_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr8_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr8_r other) const -> ipr8_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr8_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 800;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr9_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr9_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr9_r other) const -> ipr9_r { return static_cast<ipr9_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr9_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr9_r other) const -> ipr9_r { return static_cast<ipr9_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr9_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr9_r other) const -> ipr9_r { return static_cast<ipr9_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr9_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr9_r other) const -> ipr9_r { return static_cast<ipr9_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr9_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr9_r other) const -> ipr9_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr9_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 804;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr10_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr10_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr10_r other) const -> ipr10_r { return static_cast<ipr10_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr10_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr10_r other) const -> ipr10_r { return static_cast<ipr10_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr10_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr10_r other) const -> ipr10_r { return static_cast<ipr10_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr10_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr10_r other) const -> ipr10_r { return static_cast<ipr10_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr10_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr10_r other) const -> ipr10_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr10_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 808;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr11_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr11_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr11_r other) const -> ipr11_r { return static_cast<ipr11_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr11_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr11_r other) const -> ipr11_r { return static_cast<ipr11_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr11_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr11_r other) const -> ipr11_r { return static_cast<ipr11_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr11_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr11_r other) const -> ipr11_r { return static_cast<ipr11_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr11_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr11_r other) const -> ipr11_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr11_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 812;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr12_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr12_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr12_r other) const -> ipr12_r { return static_cast<ipr12_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr12_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr12_r other) const -> ipr12_r { return static_cast<ipr12_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr12_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr12_r other) const -> ipr12_r { return static_cast<ipr12_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr12_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr12_r other) const -> ipr12_r { return static_cast<ipr12_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr12_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr12_r other) const -> ipr12_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr12_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 816;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr13_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr13_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr13_r other) const -> ipr13_r { return static_cast<ipr13_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr13_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr13_r other) const -> ipr13_r { return static_cast<ipr13_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr13_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr13_r other) const -> ipr13_r { return static_cast<ipr13_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr13_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr13_r other) const -> ipr13_r { return static_cast<ipr13_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr13_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr13_r other) const -> ipr13_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr13_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 820;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr14_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr14_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr14_r other) const -> ipr14_r { return static_cast<ipr14_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr14_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr14_r other) const -> ipr14_r { return static_cast<ipr14_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr14_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr14_r other) const -> ipr14_r { return static_cast<ipr14_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr14_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr14_r other) const -> ipr14_r { return static_cast<ipr14_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr14_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr14_r other) const -> ipr14_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr14_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 824;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr15_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr15_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr15_r other) const -> ipr15_r { return static_cast<ipr15_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr15_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr15_r other) const -> ipr15_r { return static_cast<ipr15_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr15_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr15_r other) const -> ipr15_r { return static_cast<ipr15_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr15_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr15_r other) const -> ipr15_r { return static_cast<ipr15_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr15_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr15_r other) const -> ipr15_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr15_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 828;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr16_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr16_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr16_r other) const -> ipr16_r { return static_cast<ipr16_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr16_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr16_r other) const -> ipr16_r { return static_cast<ipr16_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr16_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr16_r other) const -> ipr16_r { return static_cast<ipr16_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr16_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr16_r other) const -> ipr16_r { return static_cast<ipr16_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr16_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr16_r other) const -> ipr16_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr16_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 832;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr17_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr17_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr17_r other) const -> ipr17_r { return static_cast<ipr17_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr17_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr17_r other) const -> ipr17_r { return static_cast<ipr17_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr17_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr17_r other) const -> ipr17_r { return static_cast<ipr17_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr17_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr17_r other) const -> ipr17_r { return static_cast<ipr17_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr17_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr17_r other) const -> ipr17_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr17_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 836;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr18_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr18_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr18_r other) const -> ipr18_r { return static_cast<ipr18_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr18_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr18_r other) const -> ipr18_r { return static_cast<ipr18_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr18_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr18_r other) const -> ipr18_r { return static_cast<ipr18_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr18_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr18_r other) const -> ipr18_r { return static_cast<ipr18_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr18_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr18_r other) const -> ipr18_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr18_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 840;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Priority Register
 */
class ipr19_r {
public:

/**
 * IPR_N0
 */
class ipr_n0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipr_n0_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr19_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(ipr19_r other) const -> ipr19_r { return static_cast<ipr19_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N1
 */
class ipr_n1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ipr_n1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr19_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(ipr19_r other) const -> ipr19_r { return static_cast<ipr19_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N2
 */
class ipr_n2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr19_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr19_r other) const -> ipr19_r { return static_cast<ipr19_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * IPR_N3
 */
class ipr_n3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ipr_n3_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ipr19_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(ipr19_r other) const -> ipr19_r { return static_cast<ipr19_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ipr_n0() const -> ipr_n0_f {return ipr_n0_f(static_cast<uint8_t>(m_value >> ipr_n0_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n1() const -> ipr_n1_f {return ipr_n1_f(static_cast<uint8_t>(m_value >> ipr_n1_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n2() const -> ipr_n2_f {return ipr_n2_f(static_cast<uint8_t>(m_value >> ipr_n2_f::Offset));}
	[[nodiscard]] constexpr auto ipr_n3() const -> ipr_n3_f {return ipr_n3_f(static_cast<uint8_t>(m_value >> ipr_n3_f::Offset));}

	constexpr ipr19_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ipr19_r other) const -> ipr19_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ipr19_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 844;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,iser0_r> iser0;
	Memory<uint32_t,iser1_r> iser1;
	Memory<uint32_t,iser2_r> iser2;
	Padding<116> _p12;
	Memory<uint32_t,icer0_r> icer0;
	Memory<uint32_t,icer1_r> icer1;
	Memory<uint32_t,icer2_r> icer2;
	Padding<116> _p140;
	Memory<uint32_t,ispr0_r> ispr0;
	Memory<uint32_t,ispr1_r> ispr1;
	Memory<uint32_t,ispr2_r> ispr2;
	Padding<116> _p268;
	Memory<uint32_t,icpr0_r> icpr0;
	Memory<uint32_t,icpr1_r> icpr1;
	Memory<uint32_t,icpr2_r> icpr2;
	Padding<116> _p396;
	ReadOnlyMemory<uint32_t,iabr0_r> iabr0;
	ReadOnlyMemory<uint32_t,iabr1_r> iabr1;
	ReadOnlyMemory<uint32_t,iabr2_r> iabr2;
	Padding<244> _p524;
	Memory<uint32_t,ipr0_r> ipr0;
	Memory<uint32_t,ipr1_r> ipr1;
	Memory<uint32_t,ipr2_r> ipr2;
	Memory<uint32_t,ipr3_r> ipr3;
	Memory<uint32_t,ipr4_r> ipr4;
	Memory<uint32_t,ipr5_r> ipr5;
	Memory<uint32_t,ipr6_r> ipr6;
	Memory<uint32_t,ipr7_r> ipr7;
	Memory<uint32_t,ipr8_r> ipr8;
	Memory<uint32_t,ipr9_r> ipr9;
	Memory<uint32_t,ipr10_r> ipr10;
	Memory<uint32_t,ipr11_r> ipr11;
	Memory<uint32_t,ipr12_r> ipr12;
	Memory<uint32_t,ipr13_r> ipr13;
	Memory<uint32_t,ipr14_r> ipr14;
	Memory<uint32_t,ipr15_r> ipr15;
	Memory<uint32_t,ipr16_r> ipr16;
	Memory<uint32_t,ipr17_r> ipr17;
	Memory<uint32_t,ipr18_r> ipr18;
	Memory<uint32_t,ipr19_r> ipr19;
};

static_assert(std::is_standard_layout_v<nvic_p>);
static_assert(offsetof(nvic_p, iser0) == nvic_p::iser0_r::Offset);
static_assert(offsetof(nvic_p, iser1) == nvic_p::iser1_r::Offset);
static_assert(offsetof(nvic_p, iser2) == nvic_p::iser2_r::Offset);
static_assert(offsetof(nvic_p, icer0) == nvic_p::icer0_r::Offset);
static_assert(offsetof(nvic_p, icer1) == nvic_p::icer1_r::Offset);
static_assert(offsetof(nvic_p, icer2) == nvic_p::icer2_r::Offset);
static_assert(offsetof(nvic_p, ispr0) == nvic_p::ispr0_r::Offset);
static_assert(offsetof(nvic_p, ispr1) == nvic_p::ispr1_r::Offset);
static_assert(offsetof(nvic_p, ispr2) == nvic_p::ispr2_r::Offset);
static_assert(offsetof(nvic_p, icpr0) == nvic_p::icpr0_r::Offset);
static_assert(offsetof(nvic_p, icpr1) == nvic_p::icpr1_r::Offset);
static_assert(offsetof(nvic_p, icpr2) == nvic_p::icpr2_r::Offset);
static_assert(offsetof(nvic_p, iabr0) == nvic_p::iabr0_r::Offset);
static_assert(offsetof(nvic_p, iabr1) == nvic_p::iabr1_r::Offset);
static_assert(offsetof(nvic_p, iabr2) == nvic_p::iabr2_r::Offset);
static_assert(offsetof(nvic_p, ipr0) == nvic_p::ipr0_r::Offset);
static_assert(offsetof(nvic_p, ipr1) == nvic_p::ipr1_r::Offset);
static_assert(offsetof(nvic_p, ipr2) == nvic_p::ipr2_r::Offset);
static_assert(offsetof(nvic_p, ipr3) == nvic_p::ipr3_r::Offset);
static_assert(offsetof(nvic_p, ipr4) == nvic_p::ipr4_r::Offset);
static_assert(offsetof(nvic_p, ipr5) == nvic_p::ipr5_r::Offset);
static_assert(offsetof(nvic_p, ipr6) == nvic_p::ipr6_r::Offset);
static_assert(offsetof(nvic_p, ipr7) == nvic_p::ipr7_r::Offset);
static_assert(offsetof(nvic_p, ipr8) == nvic_p::ipr8_r::Offset);
static_assert(offsetof(nvic_p, ipr9) == nvic_p::ipr9_r::Offset);
static_assert(offsetof(nvic_p, ipr10) == nvic_p::ipr10_r::Offset);
static_assert(offsetof(nvic_p, ipr11) == nvic_p::ipr11_r::Offset);
static_assert(offsetof(nvic_p, ipr12) == nvic_p::ipr12_r::Offset);
static_assert(offsetof(nvic_p, ipr13) == nvic_p::ipr13_r::Offset);
static_assert(offsetof(nvic_p, ipr14) == nvic_p::ipr14_r::Offset);
static_assert(offsetof(nvic_p, ipr15) == nvic_p::ipr15_r::Offset);
static_assert(offsetof(nvic_p, ipr16) == nvic_p::ipr16_r::Offset);
static_assert(offsetof(nvic_p, ipr17) == nvic_p::ipr17_r::Offset);
static_assert(offsetof(nvic_p, ipr18) == nvic_p::ipr18_r::Offset);
static_assert(offsetof(nvic_p, ipr19) == nvic_p::ipr19_r::Offset);

/**
 * Nested vectored interrupt controller
 */
class nvic_stir_p {
public:
/**
 * Software trigger interrupt register
 */
class stir_r {
public:

/**
 * Software generated interrupt ID
 */
class intid_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr intid_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator stir_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(stir_r other) const -> stir_r { return static_cast<stir_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto intid() const -> intid_f {return intid_f(static_cast<uint16_t>(m_value >> intid_f::Offset));}

	constexpr stir_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(stir_r other) const -> stir_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> stir_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,stir_r> stir;
};

static_assert(std::is_standard_layout_v<nvic_stir_p>);
static_assert(offsetof(nvic_stir_p, stir) == nvic_stir_p::stir_r::Offset);

inline nvic_p& nvic = *reinterpret_cast<nvic_p*>(0xE000E100);
inline nvic_stir_p& nvic_stir = *reinterpret_cast<nvic_stir_p*>(0xE000EF00);

} // STM32F401

