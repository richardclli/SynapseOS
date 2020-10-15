#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * DMA controller
 */
class dma_p {
public:
/**
 * low interrupt status register
 */
class lisr_r {
public:

/**
 * Stream x transfer complete interrupt flag (x = 3..0)
 */
class tcif3_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x half transfer interrupt flag (x=3..0)
 */
class htif3_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer error interrupt flag (x=3..0)
 */
class teif3_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x direct mode error interrupt flag (x=3..0)
 */
class dmeif3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmeif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x FIFO error interrupt flag (x=3..0)
 */
class feif3_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr feif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer complete interrupt flag (x = 3..0)
 */
class tcif2_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x half transfer interrupt flag (x=3..0)
 */
class htif2_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer error interrupt flag (x=3..0)
 */
class teif2_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x direct mode error interrupt flag (x=3..0)
 */
class dmeif2_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmeif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x FIFO error interrupt flag (x=3..0)
 */
class feif2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr feif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer complete interrupt flag (x = 3..0)
 */
class tcif1_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tcif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x half transfer interrupt flag (x=3..0)
 */
class htif1_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr htif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer error interrupt flag (x=3..0)
 */
class teif1_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr teif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x direct mode error interrupt flag (x=3..0)
 */
class dmeif1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmeif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x FIFO error interrupt flag (x=3..0)
 */
class feif1_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer complete interrupt flag (x = 3..0)
 */
class tcif0_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x half transfer interrupt flag (x=3..0)
 */
class htif0_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer error interrupt flag (x=3..0)
 */
class teif0_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x direct mode error interrupt flag (x=3..0)
 */
class dmeif0_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmeif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x FIFO error interrupt flag (x=3..0)
 */
class feif0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lisr_r other) const -> lisr_r { return static_cast<lisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tcif3() const -> tcif3_f {return tcif3_f((m_value & tcif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif3() const -> htif3_f {return htif3_f((m_value & htif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif3() const -> teif3_f {return teif3_f((m_value & teif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeif3() const -> dmeif3_f {return dmeif3_f((m_value & dmeif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto feif3() const -> feif3_f {return feif3_f((m_value & feif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif2() const -> tcif2_f {return tcif2_f((m_value & tcif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif2() const -> htif2_f {return htif2_f((m_value & htif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif2() const -> teif2_f {return teif2_f((m_value & teif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeif2() const -> dmeif2_f {return dmeif2_f((m_value & dmeif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto feif2() const -> feif2_f {return feif2_f((m_value & feif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif1() const -> tcif1_f {return tcif1_f((m_value & tcif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif1() const -> htif1_f {return htif1_f((m_value & htif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif1() const -> teif1_f {return teif1_f((m_value & teif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeif1() const -> dmeif1_f {return dmeif1_f((m_value & dmeif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto feif1() const -> feif1_f {return feif1_f((m_value & feif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif0() const -> tcif0_f {return tcif0_f((m_value & tcif0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif0() const -> htif0_f {return htif0_f((m_value & htif0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif0() const -> teif0_f {return teif0_f((m_value & teif0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeif0() const -> dmeif0_f {return dmeif0_f((m_value & dmeif0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto feif0() const -> feif0_f {return feif0_f((m_value & feif0_f::Mask) != 0);}

	constexpr lisr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(lisr_r other) const -> lisr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> lisr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * high interrupt status register
 */
class hisr_r {
public:

/**
 * Stream x transfer complete interrupt flag (x=7..4)
 */
class tcif7_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x half transfer interrupt flag (x=7..4)
 */
class htif7_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer error interrupt flag (x=7..4)
 */
class teif7_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x direct mode error interrupt flag (x=7..4)
 */
class dmeif7_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmeif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x FIFO error interrupt flag (x=7..4)
 */
class feif7_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr feif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer complete interrupt flag (x=7..4)
 */
class tcif6_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x half transfer interrupt flag (x=7..4)
 */
class htif6_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer error interrupt flag (x=7..4)
 */
class teif6_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x direct mode error interrupt flag (x=7..4)
 */
class dmeif6_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmeif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x FIFO error interrupt flag (x=7..4)
 */
class feif6_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr feif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer complete interrupt flag (x=7..4)
 */
class tcif5_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tcif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x half transfer interrupt flag (x=7..4)
 */
class htif5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr htif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer error interrupt flag (x=7..4)
 */
class teif5_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr teif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x direct mode error interrupt flag (x=7..4)
 */
class dmeif5_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmeif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x FIFO error interrupt flag (x=7..4)
 */
class feif5_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer complete interrupt flag (x=7..4)
 */
class tcif4_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x half transfer interrupt flag (x=7..4)
 */
class htif4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x transfer error interrupt flag (x=7..4)
 */
class teif4_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x direct mode error interrupt flag (x=7..4)
 */
class dmeif4_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmeif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x FIFO error interrupt flag (x=7..4)
 */
class feif4_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hisr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hisr_r other) const -> hisr_r { return static_cast<hisr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tcif7() const -> tcif7_f {return tcif7_f((m_value & tcif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif7() const -> htif7_f {return htif7_f((m_value & htif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif7() const -> teif7_f {return teif7_f((m_value & teif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeif7() const -> dmeif7_f {return dmeif7_f((m_value & dmeif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto feif7() const -> feif7_f {return feif7_f((m_value & feif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif6() const -> tcif6_f {return tcif6_f((m_value & tcif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif6() const -> htif6_f {return htif6_f((m_value & htif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif6() const -> teif6_f {return teif6_f((m_value & teif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeif6() const -> dmeif6_f {return dmeif6_f((m_value & dmeif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto feif6() const -> feif6_f {return feif6_f((m_value & feif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif5() const -> tcif5_f {return tcif5_f((m_value & tcif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif5() const -> htif5_f {return htif5_f((m_value & htif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif5() const -> teif5_f {return teif5_f((m_value & teif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeif5() const -> dmeif5_f {return dmeif5_f((m_value & dmeif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto feif5() const -> feif5_f {return feif5_f((m_value & feif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif4() const -> tcif4_f {return tcif4_f((m_value & tcif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif4() const -> htif4_f {return htif4_f((m_value & htif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif4() const -> teif4_f {return teif4_f((m_value & teif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeif4() const -> dmeif4_f {return dmeif4_f((m_value & dmeif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto feif4() const -> feif4_f {return feif4_f((m_value & feif4_f::Mask) != 0);}

	constexpr hisr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(hisr_r other) const -> hisr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> hisr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * low interrupt flag clear register
 */
class lifcr_r {
public:

/**
 * Stream x clear transfer complete interrupt flag (x = 3..0)
 */
class ctcif3_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ctcif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear half transfer interrupt flag (x = 3..0)
 */
class chtif3_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chtif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer error interrupt flag (x = 3..0)
 */
class cteif3_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cteif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear direct mode error interrupt flag (x = 3..0)
 */
class cdmeif3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cdmeif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear FIFO error interrupt flag (x = 3..0)
 */
class cfeif3_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cfeif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer complete interrupt flag (x = 3..0)
 */
class ctcif2_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ctcif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear half transfer interrupt flag (x = 3..0)
 */
class chtif2_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chtif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer error interrupt flag (x = 3..0)
 */
class cteif2_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cteif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear direct mode error interrupt flag (x = 3..0)
 */
class cdmeif2_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cdmeif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear FIFO error interrupt flag (x = 3..0)
 */
class cfeif2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cfeif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer complete interrupt flag (x = 3..0)
 */
class ctcif1_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctcif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear half transfer interrupt flag (x = 3..0)
 */
class chtif1_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr chtif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer error interrupt flag (x = 3..0)
 */
class cteif1_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cteif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear direct mode error interrupt flag (x = 3..0)
 */
class cdmeif1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cdmeif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear FIFO error interrupt flag (x = 3..0)
 */
class cfeif1_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cfeif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer complete interrupt flag (x = 3..0)
 */
class ctcif0_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctcif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear half transfer interrupt flag (x = 3..0)
 */
class chtif0_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chtif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer error interrupt flag (x = 3..0)
 */
class cteif0_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cteif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear direct mode error interrupt flag (x = 3..0)
 */
class cdmeif0_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cdmeif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear FIFO error interrupt flag (x = 3..0)
 */
class cfeif0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cfeif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator lifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(lifcr_r other) const -> lifcr_r { return static_cast<lifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ctcif3() const -> ctcif3_f {return ctcif3_f((m_value & ctcif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chtif3() const -> chtif3_f {return chtif3_f((m_value & chtif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cteif3() const -> cteif3_f {return cteif3_f((m_value & cteif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cdmeif3() const -> cdmeif3_f {return cdmeif3_f((m_value & cdmeif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cfeif3() const -> cfeif3_f {return cfeif3_f((m_value & cfeif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctcif2() const -> ctcif2_f {return ctcif2_f((m_value & ctcif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chtif2() const -> chtif2_f {return chtif2_f((m_value & chtif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cteif2() const -> cteif2_f {return cteif2_f((m_value & cteif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cdmeif2() const -> cdmeif2_f {return cdmeif2_f((m_value & cdmeif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cfeif2() const -> cfeif2_f {return cfeif2_f((m_value & cfeif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctcif1() const -> ctcif1_f {return ctcif1_f((m_value & ctcif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chtif1() const -> chtif1_f {return chtif1_f((m_value & chtif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cteif1() const -> cteif1_f {return cteif1_f((m_value & cteif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cdmeif1() const -> cdmeif1_f {return cdmeif1_f((m_value & cdmeif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cfeif1() const -> cfeif1_f {return cfeif1_f((m_value & cfeif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctcif0() const -> ctcif0_f {return ctcif0_f((m_value & ctcif0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chtif0() const -> chtif0_f {return chtif0_f((m_value & chtif0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cteif0() const -> cteif0_f {return cteif0_f((m_value & cteif0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cdmeif0() const -> cdmeif0_f {return cdmeif0_f((m_value & cdmeif0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cfeif0() const -> cfeif0_f {return cfeif0_f((m_value & cfeif0_f::Mask) != 0);}

	constexpr lifcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(lifcr_r other) const -> lifcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> lifcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * high interrupt flag clear register
 */
class hifcr_r {
public:

/**
 * Stream x clear transfer complete interrupt flag (x = 7..4)
 */
class ctcif7_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ctcif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear half transfer interrupt flag (x = 7..4)
 */
class chtif7_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chtif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer error interrupt flag (x = 7..4)
 */
class cteif7_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cteif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear direct mode error interrupt flag (x = 7..4)
 */
class cdmeif7_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cdmeif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear FIFO error interrupt flag (x = 7..4)
 */
class cfeif7_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cfeif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer complete interrupt flag (x = 7..4)
 */
class ctcif6_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ctcif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear half transfer interrupt flag (x = 7..4)
 */
class chtif6_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr chtif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer error interrupt flag (x = 7..4)
 */
class cteif6_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cteif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear direct mode error interrupt flag (x = 7..4)
 */
class cdmeif6_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cdmeif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear FIFO error interrupt flag (x = 7..4)
 */
class cfeif6_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cfeif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer complete interrupt flag (x = 7..4)
 */
class ctcif5_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctcif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear half transfer interrupt flag (x = 7..4)
 */
class chtif5_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr chtif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer error interrupt flag (x = 7..4)
 */
class cteif5_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cteif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear direct mode error interrupt flag (x = 7..4)
 */
class cdmeif5_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cdmeif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear FIFO error interrupt flag (x = 7..4)
 */
class cfeif5_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cfeif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer complete interrupt flag (x = 7..4)
 */
class ctcif4_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctcif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear half transfer interrupt flag (x = 7..4)
 */
class chtif4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr chtif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear transfer error interrupt flag (x = 7..4)
 */
class cteif4_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cteif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear direct mode error interrupt flag (x = 7..4)
 */
class cdmeif4_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cdmeif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream x clear FIFO error interrupt flag (x = 7..4)
 */
class cfeif4_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cfeif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator hifcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(hifcr_r other) const -> hifcr_r { return static_cast<hifcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ctcif7() const -> ctcif7_f {return ctcif7_f((m_value & ctcif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chtif7() const -> chtif7_f {return chtif7_f((m_value & chtif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cteif7() const -> cteif7_f {return cteif7_f((m_value & cteif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cdmeif7() const -> cdmeif7_f {return cdmeif7_f((m_value & cdmeif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cfeif7() const -> cfeif7_f {return cfeif7_f((m_value & cfeif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctcif6() const -> ctcif6_f {return ctcif6_f((m_value & ctcif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chtif6() const -> chtif6_f {return chtif6_f((m_value & chtif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cteif6() const -> cteif6_f {return cteif6_f((m_value & cteif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cdmeif6() const -> cdmeif6_f {return cdmeif6_f((m_value & cdmeif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cfeif6() const -> cfeif6_f {return cfeif6_f((m_value & cfeif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctcif5() const -> ctcif5_f {return ctcif5_f((m_value & ctcif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chtif5() const -> chtif5_f {return chtif5_f((m_value & chtif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cteif5() const -> cteif5_f {return cteif5_f((m_value & cteif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cdmeif5() const -> cdmeif5_f {return cdmeif5_f((m_value & cdmeif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cfeif5() const -> cfeif5_f {return cfeif5_f((m_value & cfeif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctcif4() const -> ctcif4_f {return ctcif4_f((m_value & ctcif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto chtif4() const -> chtif4_f {return chtif4_f((m_value & chtif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cteif4() const -> cteif4_f {return cteif4_f((m_value & cteif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cdmeif4() const -> cdmeif4_f {return cdmeif4_f((m_value & cdmeif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cfeif4() const -> cfeif4_f {return cfeif4_f((m_value & cfeif4_f::Mask) != 0);}

	constexpr hifcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(hifcr_r other) const -> hifcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> hifcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x configuration register
 */
class s0cr_r {
public:

/**
 * Channel selection
 */
class chsel_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr chsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s0cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory burst transfer configuration
 */
class mburst_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s0cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral burst transfer configuration
 */
class pburst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s0cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Current target (only in double buffer mode)
 */
class ct_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ct_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Double buffer mode
 */
class dbm_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Priority level
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s0cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral increment offset size
 */
class pincos_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pincos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Memory data size
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s0cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral data size
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s0cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory increment mode
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Peripheral increment mode
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Circular mode
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transfer direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dir_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s0cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral flow controller
 */
class pfctrl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pfctrl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Half transfer interrupt enable
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer error interrupt enable
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Direct mode error interrupt enable
 */
class dmeie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream enable / flag stream ready when read low
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0cr_r other) const -> s0cr_r { return static_cast<s0cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto chsel() const -> chsel_f {return chsel_f(static_cast<uint8_t>(m_value >> chsel_f::Offset));}
	[[nodiscard]] constexpr auto mburst() const -> mburst_f {return mburst_f(static_cast<uint8_t>(m_value >> mburst_f::Offset));}
	[[nodiscard]] constexpr auto pburst() const -> pburst_f {return pburst_f(static_cast<uint8_t>(m_value >> pburst_f::Offset));}
	[[nodiscard]] constexpr auto ct() const -> ct_f {return ct_f((m_value & ct_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbm() const -> dbm_f {return dbm_f((m_value & dbm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto pincos() const -> pincos_f {return pincos_f((m_value & pincos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f(static_cast<uint8_t>(m_value >> dir_f::Offset));}
	[[nodiscard]] constexpr auto pfctrl() const -> pfctrl_f {return pfctrl_f((m_value & pfctrl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeie() const -> dmeie_f {return dmeie_f((m_value & dmeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}

	constexpr s0cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s0cr_r other) const -> s0cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s0cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x number of data register
 */
class s0ndtr_r {
public:

/**
 * Number of data items to transfer
 */
class ndt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ndt_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator s0ndtr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s0ndtr_r other) const -> s0ndtr_r { return static_cast<s0ndtr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr s0ndtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s0ndtr_r other) const -> s0ndtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s0ndtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x peripheral address register
 */
class s0par_r {
public:

/**
 * Peripheral address
 */
class pa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pa_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s0par_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s0par_r other) const -> s0par_r { return static_cast<s0par_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr s0par_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s0par_r other) const -> s0par_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s0par_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 0 address register
 */
class s0m0ar_r {
public:

/**
 * Memory 0 address
 */
class m0a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m0a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s0m0ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s0m0ar_r other) const -> s0m0ar_r { return static_cast<s0m0ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m0a() const -> m0a_f {return m0a_f(static_cast<uint32_t>(m_value >> m0a_f::Offset));}

	constexpr s0m0ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s0m0ar_r other) const -> s0m0ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s0m0ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 1 address register
 */
class s0m1ar_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class m1a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m1a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s0m1ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s0m1ar_r other) const -> s0m1ar_r { return static_cast<s0m1ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m1a() const -> m1a_f {return m1a_f(static_cast<uint32_t>(m_value >> m1a_f::Offset));}

	constexpr s0m1ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s0m1ar_r other) const -> s0m1ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s0m1ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x FIFO control register
 */
class s0fcr_r {
public:

/**
 * FIFO error interrupt enable
 */
class feie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0fcr_r other) const -> s0fcr_r { return static_cast<s0fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO status
 */
class fs_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s0fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s0fcr_r other) const -> s0fcr_r { return static_cast<s0fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Direct mode disable
 */
class dmdis_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s0fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s0fcr_r other) const -> s0fcr_r { return static_cast<s0fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO threshold selection
 */
class fth_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fth_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s0fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s0fcr_r other) const -> s0fcr_r { return static_cast<s0fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto feie() const -> feie_f {return feie_f((m_value & feie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fs() const -> fs_f {return fs_f(static_cast<uint8_t>(m_value >> fs_f::Offset));}
	[[nodiscard]] constexpr auto dmdis() const -> dmdis_f {return dmdis_f((m_value & dmdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fth() const -> fth_f {return fth_f(static_cast<uint8_t>(m_value >> fth_f::Offset));}

	constexpr s0fcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s0fcr_r other) const -> s0fcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s0fcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0b100001;

private:
	uint32_t m_value;
};
/**
 * stream x configuration register
 */
class s1cr_r {
public:

/**
 * Channel selection
 */
class chsel_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr chsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s1cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory burst transfer configuration
 */
class mburst_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s1cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral burst transfer configuration
 */
class pburst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s1cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * ACK
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Current target (only in double buffer mode)
 */
class ct_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ct_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Double buffer mode
 */
class dbm_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Priority level
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s1cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral increment offset size
 */
class pincos_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pincos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Memory data size
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s1cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral data size
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s1cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory increment mode
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Peripheral increment mode
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Circular mode
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transfer direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dir_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s1cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral flow controller
 */
class pfctrl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pfctrl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Half transfer interrupt enable
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer error interrupt enable
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Direct mode error interrupt enable
 */
class dmeie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream enable / flag stream ready when read low
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1cr_r other) const -> s1cr_r { return static_cast<s1cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto chsel() const -> chsel_f {return chsel_f(static_cast<uint8_t>(m_value >> chsel_f::Offset));}
	[[nodiscard]] constexpr auto mburst() const -> mburst_f {return mburst_f(static_cast<uint8_t>(m_value >> mburst_f::Offset));}
	[[nodiscard]] constexpr auto pburst() const -> pburst_f {return pburst_f(static_cast<uint8_t>(m_value >> pburst_f::Offset));}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ct() const -> ct_f {return ct_f((m_value & ct_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbm() const -> dbm_f {return dbm_f((m_value & dbm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto pincos() const -> pincos_f {return pincos_f((m_value & pincos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f(static_cast<uint8_t>(m_value >> dir_f::Offset));}
	[[nodiscard]] constexpr auto pfctrl() const -> pfctrl_f {return pfctrl_f((m_value & pfctrl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeie() const -> dmeie_f {return dmeie_f((m_value & dmeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}

	constexpr s1cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s1cr_r other) const -> s1cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s1cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x number of data register
 */
class s1ndtr_r {
public:

/**
 * Number of data items to transfer
 */
class ndt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ndt_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator s1ndtr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s1ndtr_r other) const -> s1ndtr_r { return static_cast<s1ndtr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr s1ndtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s1ndtr_r other) const -> s1ndtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s1ndtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x peripheral address register
 */
class s1par_r {
public:

/**
 * Peripheral address
 */
class pa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pa_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s1par_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s1par_r other) const -> s1par_r { return static_cast<s1par_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr s1par_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s1par_r other) const -> s1par_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s1par_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 0 address register
 */
class s1m0ar_r {
public:

/**
 * Memory 0 address
 */
class m0a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m0a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s1m0ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s1m0ar_r other) const -> s1m0ar_r { return static_cast<s1m0ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m0a() const -> m0a_f {return m0a_f(static_cast<uint32_t>(m_value >> m0a_f::Offset));}

	constexpr s1m0ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s1m0ar_r other) const -> s1m0ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s1m0ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 1 address register
 */
class s1m1ar_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class m1a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m1a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s1m1ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s1m1ar_r other) const -> s1m1ar_r { return static_cast<s1m1ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m1a() const -> m1a_f {return m1a_f(static_cast<uint32_t>(m_value >> m1a_f::Offset));}

	constexpr s1m1ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s1m1ar_r other) const -> s1m1ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s1m1ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x FIFO control register
 */
class s1fcr_r {
public:

/**
 * FIFO error interrupt enable
 */
class feie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1fcr_r other) const -> s1fcr_r { return static_cast<s1fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO status
 */
class fs_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s1fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s1fcr_r other) const -> s1fcr_r { return static_cast<s1fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Direct mode disable
 */
class dmdis_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s1fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s1fcr_r other) const -> s1fcr_r { return static_cast<s1fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO threshold selection
 */
class fth_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fth_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s1fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s1fcr_r other) const -> s1fcr_r { return static_cast<s1fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto feie() const -> feie_f {return feie_f((m_value & feie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fs() const -> fs_f {return fs_f(static_cast<uint8_t>(m_value >> fs_f::Offset));}
	[[nodiscard]] constexpr auto dmdis() const -> dmdis_f {return dmdis_f((m_value & dmdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fth() const -> fth_f {return fth_f(static_cast<uint8_t>(m_value >> fth_f::Offset));}

	constexpr s1fcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s1fcr_r other) const -> s1fcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s1fcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0b100001;

private:
	uint32_t m_value;
};
/**
 * stream x configuration register
 */
class s2cr_r {
public:

/**
 * Channel selection
 */
class chsel_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr chsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory burst transfer configuration
 */
class mburst_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral burst transfer configuration
 */
class pburst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * ACK
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Current target (only in double buffer mode)
 */
class ct_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ct_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Double buffer mode
 */
class dbm_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Priority level
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral increment offset size
 */
class pincos_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pincos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Memory data size
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s2cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral data size
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s2cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory increment mode
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Peripheral increment mode
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Circular mode
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transfer direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dir_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s2cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral flow controller
 */
class pfctrl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pfctrl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Half transfer interrupt enable
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer error interrupt enable
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Direct mode error interrupt enable
 */
class dmeie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream enable / flag stream ready when read low
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2cr_r other) const -> s2cr_r { return static_cast<s2cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto chsel() const -> chsel_f {return chsel_f(static_cast<uint8_t>(m_value >> chsel_f::Offset));}
	[[nodiscard]] constexpr auto mburst() const -> mburst_f {return mburst_f(static_cast<uint8_t>(m_value >> mburst_f::Offset));}
	[[nodiscard]] constexpr auto pburst() const -> pburst_f {return pburst_f(static_cast<uint8_t>(m_value >> pburst_f::Offset));}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ct() const -> ct_f {return ct_f((m_value & ct_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbm() const -> dbm_f {return dbm_f((m_value & dbm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto pincos() const -> pincos_f {return pincos_f((m_value & pincos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f(static_cast<uint8_t>(m_value >> dir_f::Offset));}
	[[nodiscard]] constexpr auto pfctrl() const -> pfctrl_f {return pfctrl_f((m_value & pfctrl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeie() const -> dmeie_f {return dmeie_f((m_value & dmeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}

	constexpr s2cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s2cr_r other) const -> s2cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s2cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x number of data register
 */
class s2ndtr_r {
public:

/**
 * Number of data items to transfer
 */
class ndt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ndt_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator s2ndtr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s2ndtr_r other) const -> s2ndtr_r { return static_cast<s2ndtr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr s2ndtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s2ndtr_r other) const -> s2ndtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s2ndtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x peripheral address register
 */
class s2par_r {
public:

/**
 * Peripheral address
 */
class pa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pa_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s2par_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s2par_r other) const -> s2par_r { return static_cast<s2par_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr s2par_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s2par_r other) const -> s2par_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s2par_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 0 address register
 */
class s2m0ar_r {
public:

/**
 * Memory 0 address
 */
class m0a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m0a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s2m0ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s2m0ar_r other) const -> s2m0ar_r { return static_cast<s2m0ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m0a() const -> m0a_f {return m0a_f(static_cast<uint32_t>(m_value >> m0a_f::Offset));}

	constexpr s2m0ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s2m0ar_r other) const -> s2m0ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s2m0ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 1 address register
 */
class s2m1ar_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class m1a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m1a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s2m1ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s2m1ar_r other) const -> s2m1ar_r { return static_cast<s2m1ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m1a() const -> m1a_f {return m1a_f(static_cast<uint32_t>(m_value >> m1a_f::Offset));}

	constexpr s2m1ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s2m1ar_r other) const -> s2m1ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s2m1ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x FIFO control register
 */
class s2fcr_r {
public:

/**
 * FIFO error interrupt enable
 */
class feie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2fcr_r other) const -> s2fcr_r { return static_cast<s2fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO status
 */
class fs_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s2fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s2fcr_r other) const -> s2fcr_r { return static_cast<s2fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Direct mode disable
 */
class dmdis_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s2fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s2fcr_r other) const -> s2fcr_r { return static_cast<s2fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO threshold selection
 */
class fth_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fth_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s2fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s2fcr_r other) const -> s2fcr_r { return static_cast<s2fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto feie() const -> feie_f {return feie_f((m_value & feie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fs() const -> fs_f {return fs_f(static_cast<uint8_t>(m_value >> fs_f::Offset));}
	[[nodiscard]] constexpr auto dmdis() const -> dmdis_f {return dmdis_f((m_value & dmdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fth() const -> fth_f {return fth_f(static_cast<uint8_t>(m_value >> fth_f::Offset));}

	constexpr s2fcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s2fcr_r other) const -> s2fcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s2fcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0b100001;

private:
	uint32_t m_value;
};
/**
 * stream x configuration register
 */
class s3cr_r {
public:

/**
 * Channel selection
 */
class chsel_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr chsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory burst transfer configuration
 */
class mburst_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral burst transfer configuration
 */
class pburst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * ACK
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Current target (only in double buffer mode)
 */
class ct_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ct_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Double buffer mode
 */
class dbm_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Priority level
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral increment offset size
 */
class pincos_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pincos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Memory data size
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s3cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral data size
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s3cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory increment mode
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Peripheral increment mode
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Circular mode
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transfer direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dir_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s3cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral flow controller
 */
class pfctrl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pfctrl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Half transfer interrupt enable
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer error interrupt enable
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Direct mode error interrupt enable
 */
class dmeie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream enable / flag stream ready when read low
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3cr_r other) const -> s3cr_r { return static_cast<s3cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto chsel() const -> chsel_f {return chsel_f(static_cast<uint8_t>(m_value >> chsel_f::Offset));}
	[[nodiscard]] constexpr auto mburst() const -> mburst_f {return mburst_f(static_cast<uint8_t>(m_value >> mburst_f::Offset));}
	[[nodiscard]] constexpr auto pburst() const -> pburst_f {return pburst_f(static_cast<uint8_t>(m_value >> pburst_f::Offset));}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ct() const -> ct_f {return ct_f((m_value & ct_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbm() const -> dbm_f {return dbm_f((m_value & dbm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto pincos() const -> pincos_f {return pincos_f((m_value & pincos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f(static_cast<uint8_t>(m_value >> dir_f::Offset));}
	[[nodiscard]] constexpr auto pfctrl() const -> pfctrl_f {return pfctrl_f((m_value & pfctrl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeie() const -> dmeie_f {return dmeie_f((m_value & dmeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}

	constexpr s3cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s3cr_r other) const -> s3cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s3cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 88;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x number of data register
 */
class s3ndtr_r {
public:

/**
 * Number of data items to transfer
 */
class ndt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ndt_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator s3ndtr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s3ndtr_r other) const -> s3ndtr_r { return static_cast<s3ndtr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr s3ndtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s3ndtr_r other) const -> s3ndtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s3ndtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x peripheral address register
 */
class s3par_r {
public:

/**
 * Peripheral address
 */
class pa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pa_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s3par_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s3par_r other) const -> s3par_r { return static_cast<s3par_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr s3par_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s3par_r other) const -> s3par_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s3par_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 0 address register
 */
class s3m0ar_r {
public:

/**
 * Memory 0 address
 */
class m0a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m0a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s3m0ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s3m0ar_r other) const -> s3m0ar_r { return static_cast<s3m0ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m0a() const -> m0a_f {return m0a_f(static_cast<uint32_t>(m_value >> m0a_f::Offset));}

	constexpr s3m0ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s3m0ar_r other) const -> s3m0ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s3m0ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 100;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 1 address register
 */
class s3m1ar_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class m1a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m1a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s3m1ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s3m1ar_r other) const -> s3m1ar_r { return static_cast<s3m1ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m1a() const -> m1a_f {return m1a_f(static_cast<uint32_t>(m_value >> m1a_f::Offset));}

	constexpr s3m1ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s3m1ar_r other) const -> s3m1ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s3m1ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 104;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x FIFO control register
 */
class s3fcr_r {
public:

/**
 * FIFO error interrupt enable
 */
class feie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3fcr_r other) const -> s3fcr_r { return static_cast<s3fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO status
 */
class fs_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s3fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s3fcr_r other) const -> s3fcr_r { return static_cast<s3fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Direct mode disable
 */
class dmdis_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s3fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s3fcr_r other) const -> s3fcr_r { return static_cast<s3fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO threshold selection
 */
class fth_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fth_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s3fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s3fcr_r other) const -> s3fcr_r { return static_cast<s3fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto feie() const -> feie_f {return feie_f((m_value & feie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fs() const -> fs_f {return fs_f(static_cast<uint8_t>(m_value >> fs_f::Offset));}
	[[nodiscard]] constexpr auto dmdis() const -> dmdis_f {return dmdis_f((m_value & dmdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fth() const -> fth_f {return fth_f(static_cast<uint8_t>(m_value >> fth_f::Offset));}

	constexpr s3fcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s3fcr_r other) const -> s3fcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s3fcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 108;
	static constexpr uint32_t ResetValue = 0b100001;

private:
	uint32_t m_value;
};
/**
 * stream x configuration register
 */
class s4cr_r {
public:

/**
 * Channel selection
 */
class chsel_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr chsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s4cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory burst transfer configuration
 */
class mburst_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s4cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral burst transfer configuration
 */
class pburst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s4cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * ACK
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Current target (only in double buffer mode)
 */
class ct_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ct_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Double buffer mode
 */
class dbm_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Priority level
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s4cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral increment offset size
 */
class pincos_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pincos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Memory data size
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s4cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral data size
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s4cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory increment mode
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Peripheral increment mode
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Circular mode
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transfer direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dir_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s4cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral flow controller
 */
class pfctrl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pfctrl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Half transfer interrupt enable
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer error interrupt enable
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Direct mode error interrupt enable
 */
class dmeie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream enable / flag stream ready when read low
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4cr_r other) const -> s4cr_r { return static_cast<s4cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto chsel() const -> chsel_f {return chsel_f(static_cast<uint8_t>(m_value >> chsel_f::Offset));}
	[[nodiscard]] constexpr auto mburst() const -> mburst_f {return mburst_f(static_cast<uint8_t>(m_value >> mburst_f::Offset));}
	[[nodiscard]] constexpr auto pburst() const -> pburst_f {return pburst_f(static_cast<uint8_t>(m_value >> pburst_f::Offset));}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ct() const -> ct_f {return ct_f((m_value & ct_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbm() const -> dbm_f {return dbm_f((m_value & dbm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto pincos() const -> pincos_f {return pincos_f((m_value & pincos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f(static_cast<uint8_t>(m_value >> dir_f::Offset));}
	[[nodiscard]] constexpr auto pfctrl() const -> pfctrl_f {return pfctrl_f((m_value & pfctrl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeie() const -> dmeie_f {return dmeie_f((m_value & dmeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}

	constexpr s4cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s4cr_r other) const -> s4cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s4cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 112;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x number of data register
 */
class s4ndtr_r {
public:

/**
 * Number of data items to transfer
 */
class ndt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ndt_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator s4ndtr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s4ndtr_r other) const -> s4ndtr_r { return static_cast<s4ndtr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr s4ndtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s4ndtr_r other) const -> s4ndtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s4ndtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 116;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x peripheral address register
 */
class s4par_r {
public:

/**
 * Peripheral address
 */
class pa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pa_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s4par_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s4par_r other) const -> s4par_r { return static_cast<s4par_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr s4par_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s4par_r other) const -> s4par_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s4par_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 120;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 0 address register
 */
class s4m0ar_r {
public:

/**
 * Memory 0 address
 */
class m0a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m0a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s4m0ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s4m0ar_r other) const -> s4m0ar_r { return static_cast<s4m0ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m0a() const -> m0a_f {return m0a_f(static_cast<uint32_t>(m_value >> m0a_f::Offset));}

	constexpr s4m0ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s4m0ar_r other) const -> s4m0ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s4m0ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 124;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 1 address register
 */
class s4m1ar_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class m1a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m1a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s4m1ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s4m1ar_r other) const -> s4m1ar_r { return static_cast<s4m1ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m1a() const -> m1a_f {return m1a_f(static_cast<uint32_t>(m_value >> m1a_f::Offset));}

	constexpr s4m1ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s4m1ar_r other) const -> s4m1ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s4m1ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x FIFO control register
 */
class s4fcr_r {
public:

/**
 * FIFO error interrupt enable
 */
class feie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4fcr_r other) const -> s4fcr_r { return static_cast<s4fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO status
 */
class fs_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s4fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s4fcr_r other) const -> s4fcr_r { return static_cast<s4fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Direct mode disable
 */
class dmdis_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s4fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s4fcr_r other) const -> s4fcr_r { return static_cast<s4fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO threshold selection
 */
class fth_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fth_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s4fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s4fcr_r other) const -> s4fcr_r { return static_cast<s4fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto feie() const -> feie_f {return feie_f((m_value & feie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fs() const -> fs_f {return fs_f(static_cast<uint8_t>(m_value >> fs_f::Offset));}
	[[nodiscard]] constexpr auto dmdis() const -> dmdis_f {return dmdis_f((m_value & dmdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fth() const -> fth_f {return fth_f(static_cast<uint8_t>(m_value >> fth_f::Offset));}

	constexpr s4fcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s4fcr_r other) const -> s4fcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s4fcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 132;
	static constexpr uint32_t ResetValue = 0b100001;

private:
	uint32_t m_value;
};
/**
 * stream x configuration register
 */
class s5cr_r {
public:

/**
 * Channel selection
 */
class chsel_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr chsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s5cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory burst transfer configuration
 */
class mburst_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s5cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral burst transfer configuration
 */
class pburst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s5cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * ACK
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Current target (only in double buffer mode)
 */
class ct_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ct_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Double buffer mode
 */
class dbm_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Priority level
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s5cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral increment offset size
 */
class pincos_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pincos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Memory data size
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s5cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral data size
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s5cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory increment mode
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Peripheral increment mode
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Circular mode
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transfer direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dir_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s5cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral flow controller
 */
class pfctrl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pfctrl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Half transfer interrupt enable
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer error interrupt enable
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Direct mode error interrupt enable
 */
class dmeie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream enable / flag stream ready when read low
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5cr_r other) const -> s5cr_r { return static_cast<s5cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto chsel() const -> chsel_f {return chsel_f(static_cast<uint8_t>(m_value >> chsel_f::Offset));}
	[[nodiscard]] constexpr auto mburst() const -> mburst_f {return mburst_f(static_cast<uint8_t>(m_value >> mburst_f::Offset));}
	[[nodiscard]] constexpr auto pburst() const -> pburst_f {return pburst_f(static_cast<uint8_t>(m_value >> pburst_f::Offset));}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ct() const -> ct_f {return ct_f((m_value & ct_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbm() const -> dbm_f {return dbm_f((m_value & dbm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto pincos() const -> pincos_f {return pincos_f((m_value & pincos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f(static_cast<uint8_t>(m_value >> dir_f::Offset));}
	[[nodiscard]] constexpr auto pfctrl() const -> pfctrl_f {return pfctrl_f((m_value & pfctrl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeie() const -> dmeie_f {return dmeie_f((m_value & dmeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}

	constexpr s5cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s5cr_r other) const -> s5cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s5cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 136;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x number of data register
 */
class s5ndtr_r {
public:

/**
 * Number of data items to transfer
 */
class ndt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ndt_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator s5ndtr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s5ndtr_r other) const -> s5ndtr_r { return static_cast<s5ndtr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr s5ndtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s5ndtr_r other) const -> s5ndtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s5ndtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 140;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x peripheral address register
 */
class s5par_r {
public:

/**
 * Peripheral address
 */
class pa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pa_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s5par_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s5par_r other) const -> s5par_r { return static_cast<s5par_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr s5par_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s5par_r other) const -> s5par_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s5par_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 144;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 0 address register
 */
class s5m0ar_r {
public:

/**
 * Memory 0 address
 */
class m0a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m0a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s5m0ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s5m0ar_r other) const -> s5m0ar_r { return static_cast<s5m0ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m0a() const -> m0a_f {return m0a_f(static_cast<uint32_t>(m_value >> m0a_f::Offset));}

	constexpr s5m0ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s5m0ar_r other) const -> s5m0ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s5m0ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 148;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 1 address register
 */
class s5m1ar_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class m1a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m1a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s5m1ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s5m1ar_r other) const -> s5m1ar_r { return static_cast<s5m1ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m1a() const -> m1a_f {return m1a_f(static_cast<uint32_t>(m_value >> m1a_f::Offset));}

	constexpr s5m1ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s5m1ar_r other) const -> s5m1ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s5m1ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 152;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x FIFO control register
 */
class s5fcr_r {
public:

/**
 * FIFO error interrupt enable
 */
class feie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5fcr_r other) const -> s5fcr_r { return static_cast<s5fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO status
 */
class fs_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s5fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s5fcr_r other) const -> s5fcr_r { return static_cast<s5fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Direct mode disable
 */
class dmdis_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s5fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s5fcr_r other) const -> s5fcr_r { return static_cast<s5fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO threshold selection
 */
class fth_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fth_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s5fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s5fcr_r other) const -> s5fcr_r { return static_cast<s5fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto feie() const -> feie_f {return feie_f((m_value & feie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fs() const -> fs_f {return fs_f(static_cast<uint8_t>(m_value >> fs_f::Offset));}
	[[nodiscard]] constexpr auto dmdis() const -> dmdis_f {return dmdis_f((m_value & dmdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fth() const -> fth_f {return fth_f(static_cast<uint8_t>(m_value >> fth_f::Offset));}

	constexpr s5fcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s5fcr_r other) const -> s5fcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s5fcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 156;
	static constexpr uint32_t ResetValue = 0b100001;

private:
	uint32_t m_value;
};
/**
 * stream x configuration register
 */
class s6cr_r {
public:

/**
 * Channel selection
 */
class chsel_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr chsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s6cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory burst transfer configuration
 */
class mburst_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s6cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral burst transfer configuration
 */
class pburst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s6cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * ACK
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Current target (only in double buffer mode)
 */
class ct_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ct_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Double buffer mode
 */
class dbm_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Priority level
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s6cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral increment offset size
 */
class pincos_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pincos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Memory data size
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s6cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral data size
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s6cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory increment mode
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Peripheral increment mode
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Circular mode
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transfer direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dir_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s6cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral flow controller
 */
class pfctrl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pfctrl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Half transfer interrupt enable
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer error interrupt enable
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Direct mode error interrupt enable
 */
class dmeie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream enable / flag stream ready when read low
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6cr_r other) const -> s6cr_r { return static_cast<s6cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto chsel() const -> chsel_f {return chsel_f(static_cast<uint8_t>(m_value >> chsel_f::Offset));}
	[[nodiscard]] constexpr auto mburst() const -> mburst_f {return mburst_f(static_cast<uint8_t>(m_value >> mburst_f::Offset));}
	[[nodiscard]] constexpr auto pburst() const -> pburst_f {return pburst_f(static_cast<uint8_t>(m_value >> pburst_f::Offset));}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ct() const -> ct_f {return ct_f((m_value & ct_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbm() const -> dbm_f {return dbm_f((m_value & dbm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto pincos() const -> pincos_f {return pincos_f((m_value & pincos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f(static_cast<uint8_t>(m_value >> dir_f::Offset));}
	[[nodiscard]] constexpr auto pfctrl() const -> pfctrl_f {return pfctrl_f((m_value & pfctrl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeie() const -> dmeie_f {return dmeie_f((m_value & dmeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}

	constexpr s6cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s6cr_r other) const -> s6cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s6cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 160;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x number of data register
 */
class s6ndtr_r {
public:

/**
 * Number of data items to transfer
 */
class ndt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ndt_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator s6ndtr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s6ndtr_r other) const -> s6ndtr_r { return static_cast<s6ndtr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr s6ndtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s6ndtr_r other) const -> s6ndtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s6ndtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 164;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x peripheral address register
 */
class s6par_r {
public:

/**
 * Peripheral address
 */
class pa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pa_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s6par_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s6par_r other) const -> s6par_r { return static_cast<s6par_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr s6par_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s6par_r other) const -> s6par_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s6par_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 168;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 0 address register
 */
class s6m0ar_r {
public:

/**
 * Memory 0 address
 */
class m0a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m0a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s6m0ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s6m0ar_r other) const -> s6m0ar_r { return static_cast<s6m0ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m0a() const -> m0a_f {return m0a_f(static_cast<uint32_t>(m_value >> m0a_f::Offset));}

	constexpr s6m0ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s6m0ar_r other) const -> s6m0ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s6m0ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 172;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 1 address register
 */
class s6m1ar_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class m1a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m1a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s6m1ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s6m1ar_r other) const -> s6m1ar_r { return static_cast<s6m1ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m1a() const -> m1a_f {return m1a_f(static_cast<uint32_t>(m_value >> m1a_f::Offset));}

	constexpr s6m1ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s6m1ar_r other) const -> s6m1ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s6m1ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 176;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x FIFO control register
 */
class s6fcr_r {
public:

/**
 * FIFO error interrupt enable
 */
class feie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6fcr_r other) const -> s6fcr_r { return static_cast<s6fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO status
 */
class fs_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s6fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s6fcr_r other) const -> s6fcr_r { return static_cast<s6fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Direct mode disable
 */
class dmdis_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s6fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s6fcr_r other) const -> s6fcr_r { return static_cast<s6fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO threshold selection
 */
class fth_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fth_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s6fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s6fcr_r other) const -> s6fcr_r { return static_cast<s6fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto feie() const -> feie_f {return feie_f((m_value & feie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fs() const -> fs_f {return fs_f(static_cast<uint8_t>(m_value >> fs_f::Offset));}
	[[nodiscard]] constexpr auto dmdis() const -> dmdis_f {return dmdis_f((m_value & dmdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fth() const -> fth_f {return fth_f(static_cast<uint8_t>(m_value >> fth_f::Offset));}

	constexpr s6fcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s6fcr_r other) const -> s6fcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s6fcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 180;
	static constexpr uint32_t ResetValue = 0b100001;

private:
	uint32_t m_value;
};
/**
 * stream x configuration register
 */
class s7cr_r {
public:

/**
 * Channel selection
 */
class chsel_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr chsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s7cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory burst transfer configuration
 */
class mburst_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s7cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral burst transfer configuration
 */
class pburst_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pburst_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s7cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * ACK
 */
class ack_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Current target (only in double buffer mode)
 */
class ct_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ct_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Double buffer mode
 */
class dbm_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Priority level
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s7cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral increment offset size
 */
class pincos_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pincos_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Memory data size
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s7cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral data size
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s7cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Memory increment mode
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Peripheral increment mode
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Circular mode
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Data transfer direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dir_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s7cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Peripheral flow controller
 */
class pfctrl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pfctrl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Half transfer interrupt enable
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Transfer error interrupt enable
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Direct mode error interrupt enable
 */
class dmeie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmeie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * Stream enable / flag stream ready when read low
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7cr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7cr_r other) const -> s7cr_r { return static_cast<s7cr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto chsel() const -> chsel_f {return chsel_f(static_cast<uint8_t>(m_value >> chsel_f::Offset));}
	[[nodiscard]] constexpr auto mburst() const -> mburst_f {return mburst_f(static_cast<uint8_t>(m_value >> mburst_f::Offset));}
	[[nodiscard]] constexpr auto pburst() const -> pburst_f {return pburst_f(static_cast<uint8_t>(m_value >> pburst_f::Offset));}
	[[nodiscard]] constexpr auto ack() const -> ack_f {return ack_f((m_value & ack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ct() const -> ct_f {return ct_f((m_value & ct_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbm() const -> dbm_f {return dbm_f((m_value & dbm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto pincos() const -> pincos_f {return pincos_f((m_value & pincos_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f(static_cast<uint8_t>(m_value >> dir_f::Offset));}
	[[nodiscard]] constexpr auto pfctrl() const -> pfctrl_f {return pfctrl_f((m_value & pfctrl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmeie() const -> dmeie_f {return dmeie_f((m_value & dmeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}

	constexpr s7cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s7cr_r other) const -> s7cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s7cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 184;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x number of data register
 */
class s7ndtr_r {
public:

/**
 * Number of data items to transfer
 */
class ndt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ndt_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator s7ndtr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	constexpr auto operator|(s7ndtr_r other) const -> s7ndtr_r { return static_cast<s7ndtr_r>(*this) | other.m_value;}

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr s7ndtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s7ndtr_r other) const -> s7ndtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s7ndtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 188;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x peripheral address register
 */
class s7par_r {
public:

/**
 * Peripheral address
 */
class pa_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pa_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s7par_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s7par_r other) const -> s7par_r { return static_cast<s7par_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr s7par_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s7par_r other) const -> s7par_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s7par_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 192;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 0 address register
 */
class s7m0ar_r {
public:

/**
 * Memory 0 address
 */
class m0a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m0a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s7m0ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s7m0ar_r other) const -> s7m0ar_r { return static_cast<s7m0ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m0a() const -> m0a_f {return m0a_f(static_cast<uint32_t>(m_value >> m0a_f::Offset));}

	constexpr s7m0ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s7m0ar_r other) const -> s7m0ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s7m0ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 196;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x memory 1 address register
 */
class s7m1ar_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class m1a_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr m1a_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator s7m1ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	constexpr auto operator|(s7m1ar_r other) const -> s7m1ar_r { return static_cast<s7m1ar_r>(*this) | other.m_value;}

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto m1a() const -> m1a_f {return m1a_f(static_cast<uint32_t>(m_value >> m1a_f::Offset));}

	constexpr s7m1ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s7m1ar_r other) const -> s7m1ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s7m1ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 200;
	static constexpr uint32_t ResetValue = 0;

private:
	uint32_t m_value;
};
/**
 * stream x FIFO control register
 */
class s7fcr_r {
public:

/**
 * FIFO error interrupt enable
 */
class feie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr feie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7fcr_r other) const -> s7fcr_r { return static_cast<s7fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO status
 */
class fs_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s7fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s7fcr_r other) const -> s7fcr_r { return static_cast<s7fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

/**
 * Direct mode disable
 */
class dmdis_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator s7fcr_r() const {return m_value ? Mask : 0;}
	constexpr auto operator|(s7fcr_r other) const -> s7fcr_r { return static_cast<s7fcr_r>(*this) | other.m_value;}

private:
	 bool m_value;
};

/**
 * FIFO threshold selection
 */
class fth_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr fth_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator s7fcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	constexpr auto operator|(s7fcr_r other) const -> s7fcr_r { return static_cast<s7fcr_r>(*this) | other.m_value;}

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto feie() const -> feie_f {return feie_f((m_value & feie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fs() const -> fs_f {return fs_f(static_cast<uint8_t>(m_value >> fs_f::Offset));}
	[[nodiscard]] constexpr auto dmdis() const -> dmdis_f {return dmdis_f((m_value & dmdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fth() const -> fth_f {return fth_f(static_cast<uint8_t>(m_value >> fth_f::Offset));}

	constexpr s7fcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(s7fcr_r other) const -> s7fcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> s7fcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 204;
	static constexpr uint32_t ResetValue = 0b100001;

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,lisr_r> lisr;
	ReadOnlyMemory<uint32_t,hisr_r> hisr;
	WriteOnlyMemory<uint32_t,lifcr_r> lifcr;
	WriteOnlyMemory<uint32_t,hifcr_r> hifcr;
	Memory<uint32_t,s0cr_r> s0cr;
	Memory<uint32_t,s0ndtr_r> s0ndtr;
	Memory<uint32_t,s0par_r> s0par;
	Memory<uint32_t,s0m0ar_r> s0m0ar;
	Memory<uint32_t,s0m1ar_r> s0m1ar;
	ReadOnlyMemory<uint32_t,s0fcr_r> s0fcr;
	Memory<uint32_t,s1cr_r> s1cr;
	Memory<uint32_t,s1ndtr_r> s1ndtr;
	Memory<uint32_t,s1par_r> s1par;
	Memory<uint32_t,s1m0ar_r> s1m0ar;
	Memory<uint32_t,s1m1ar_r> s1m1ar;
	ReadOnlyMemory<uint32_t,s1fcr_r> s1fcr;
	Memory<uint32_t,s2cr_r> s2cr;
	Memory<uint32_t,s2ndtr_r> s2ndtr;
	Memory<uint32_t,s2par_r> s2par;
	Memory<uint32_t,s2m0ar_r> s2m0ar;
	Memory<uint32_t,s2m1ar_r> s2m1ar;
	ReadOnlyMemory<uint32_t,s2fcr_r> s2fcr;
	Memory<uint32_t,s3cr_r> s3cr;
	Memory<uint32_t,s3ndtr_r> s3ndtr;
	Memory<uint32_t,s3par_r> s3par;
	Memory<uint32_t,s3m0ar_r> s3m0ar;
	Memory<uint32_t,s3m1ar_r> s3m1ar;
	ReadOnlyMemory<uint32_t,s3fcr_r> s3fcr;
	Memory<uint32_t,s4cr_r> s4cr;
	Memory<uint32_t,s4ndtr_r> s4ndtr;
	Memory<uint32_t,s4par_r> s4par;
	Memory<uint32_t,s4m0ar_r> s4m0ar;
	Memory<uint32_t,s4m1ar_r> s4m1ar;
	ReadOnlyMemory<uint32_t,s4fcr_r> s4fcr;
	Memory<uint32_t,s5cr_r> s5cr;
	Memory<uint32_t,s5ndtr_r> s5ndtr;
	Memory<uint32_t,s5par_r> s5par;
	Memory<uint32_t,s5m0ar_r> s5m0ar;
	Memory<uint32_t,s5m1ar_r> s5m1ar;
	ReadOnlyMemory<uint32_t,s5fcr_r> s5fcr;
	Memory<uint32_t,s6cr_r> s6cr;
	Memory<uint32_t,s6ndtr_r> s6ndtr;
	Memory<uint32_t,s6par_r> s6par;
	Memory<uint32_t,s6m0ar_r> s6m0ar;
	Memory<uint32_t,s6m1ar_r> s6m1ar;
	ReadOnlyMemory<uint32_t,s6fcr_r> s6fcr;
	Memory<uint32_t,s7cr_r> s7cr;
	Memory<uint32_t,s7ndtr_r> s7ndtr;
	Memory<uint32_t,s7par_r> s7par;
	Memory<uint32_t,s7m0ar_r> s7m0ar;
	Memory<uint32_t,s7m1ar_r> s7m1ar;
	ReadOnlyMemory<uint32_t,s7fcr_r> s7fcr;
};

static_assert(std::is_standard_layout_v<dma_p>);
static_assert(offsetof(dma_p, lisr) == dma_p::lisr_r::Offset);
static_assert(offsetof(dma_p, hisr) == dma_p::hisr_r::Offset);
static_assert(offsetof(dma_p, lifcr) == dma_p::lifcr_r::Offset);
static_assert(offsetof(dma_p, hifcr) == dma_p::hifcr_r::Offset);
static_assert(offsetof(dma_p, s0cr) == dma_p::s0cr_r::Offset);
static_assert(offsetof(dma_p, s0ndtr) == dma_p::s0ndtr_r::Offset);
static_assert(offsetof(dma_p, s0par) == dma_p::s0par_r::Offset);
static_assert(offsetof(dma_p, s0m0ar) == dma_p::s0m0ar_r::Offset);
static_assert(offsetof(dma_p, s0m1ar) == dma_p::s0m1ar_r::Offset);
static_assert(offsetof(dma_p, s0fcr) == dma_p::s0fcr_r::Offset);
static_assert(offsetof(dma_p, s1cr) == dma_p::s1cr_r::Offset);
static_assert(offsetof(dma_p, s1ndtr) == dma_p::s1ndtr_r::Offset);
static_assert(offsetof(dma_p, s1par) == dma_p::s1par_r::Offset);
static_assert(offsetof(dma_p, s1m0ar) == dma_p::s1m0ar_r::Offset);
static_assert(offsetof(dma_p, s1m1ar) == dma_p::s1m1ar_r::Offset);
static_assert(offsetof(dma_p, s1fcr) == dma_p::s1fcr_r::Offset);
static_assert(offsetof(dma_p, s2cr) == dma_p::s2cr_r::Offset);
static_assert(offsetof(dma_p, s2ndtr) == dma_p::s2ndtr_r::Offset);
static_assert(offsetof(dma_p, s2par) == dma_p::s2par_r::Offset);
static_assert(offsetof(dma_p, s2m0ar) == dma_p::s2m0ar_r::Offset);
static_assert(offsetof(dma_p, s2m1ar) == dma_p::s2m1ar_r::Offset);
static_assert(offsetof(dma_p, s2fcr) == dma_p::s2fcr_r::Offset);
static_assert(offsetof(dma_p, s3cr) == dma_p::s3cr_r::Offset);
static_assert(offsetof(dma_p, s3ndtr) == dma_p::s3ndtr_r::Offset);
static_assert(offsetof(dma_p, s3par) == dma_p::s3par_r::Offset);
static_assert(offsetof(dma_p, s3m0ar) == dma_p::s3m0ar_r::Offset);
static_assert(offsetof(dma_p, s3m1ar) == dma_p::s3m1ar_r::Offset);
static_assert(offsetof(dma_p, s3fcr) == dma_p::s3fcr_r::Offset);
static_assert(offsetof(dma_p, s4cr) == dma_p::s4cr_r::Offset);
static_assert(offsetof(dma_p, s4ndtr) == dma_p::s4ndtr_r::Offset);
static_assert(offsetof(dma_p, s4par) == dma_p::s4par_r::Offset);
static_assert(offsetof(dma_p, s4m0ar) == dma_p::s4m0ar_r::Offset);
static_assert(offsetof(dma_p, s4m1ar) == dma_p::s4m1ar_r::Offset);
static_assert(offsetof(dma_p, s4fcr) == dma_p::s4fcr_r::Offset);
static_assert(offsetof(dma_p, s5cr) == dma_p::s5cr_r::Offset);
static_assert(offsetof(dma_p, s5ndtr) == dma_p::s5ndtr_r::Offset);
static_assert(offsetof(dma_p, s5par) == dma_p::s5par_r::Offset);
static_assert(offsetof(dma_p, s5m0ar) == dma_p::s5m0ar_r::Offset);
static_assert(offsetof(dma_p, s5m1ar) == dma_p::s5m1ar_r::Offset);
static_assert(offsetof(dma_p, s5fcr) == dma_p::s5fcr_r::Offset);
static_assert(offsetof(dma_p, s6cr) == dma_p::s6cr_r::Offset);
static_assert(offsetof(dma_p, s6ndtr) == dma_p::s6ndtr_r::Offset);
static_assert(offsetof(dma_p, s6par) == dma_p::s6par_r::Offset);
static_assert(offsetof(dma_p, s6m0ar) == dma_p::s6m0ar_r::Offset);
static_assert(offsetof(dma_p, s6m1ar) == dma_p::s6m1ar_r::Offset);
static_assert(offsetof(dma_p, s6fcr) == dma_p::s6fcr_r::Offset);
static_assert(offsetof(dma_p, s7cr) == dma_p::s7cr_r::Offset);
static_assert(offsetof(dma_p, s7ndtr) == dma_p::s7ndtr_r::Offset);
static_assert(offsetof(dma_p, s7par) == dma_p::s7par_r::Offset);
static_assert(offsetof(dma_p, s7m0ar) == dma_p::s7m0ar_r::Offset);
static_assert(offsetof(dma_p, s7m1ar) == dma_p::s7m1ar_r::Offset);
static_assert(offsetof(dma_p, s7fcr) == dma_p::s7fcr_r::Offset);


}; // STM32F401

dma_p& dma1 = *reinterpret_cast<dma_p*>(0x40026000);
dma_p& dma2 = *reinterpret_cast<dma_p*>(0x40026400);
