#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * System configuration controller
 */
class syscfg_p {
public:
/**
 * Remap Memory register
 */
class memrmp_r {
public:

/**
 * Memory mapping selection
 */
class mem_mode_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mem_mode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator memrmp_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(memrmp_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<memrmp_r>() const {return ClearSet<memrmp_r>(Mask, *this);}
	constexpr auto operator|(memrmp_r other) const -> memrmp_r { return static_cast<memrmp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<memrmp_r> other) const -> ClearSet<memrmp_r> {return ClearSet<memrmp_r>(memrmp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * User Flash Bank mode
 */
class fb_mode_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr fb_mode_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator memrmp_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(memrmp_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<memrmp_r>() const {return ClearSet<memrmp_r>(Mask, *this);}
	constexpr auto operator|(memrmp_r other) const -> memrmp_r { return static_cast<memrmp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<memrmp_r> other) const -> ClearSet<memrmp_r> {return ClearSet<memrmp_r>(memrmp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mem_mode() const -> mem_mode_f {return mem_mode_f(static_cast<uint8_t>(m_value >> mem_mode_f::Offset));}
	[[nodiscard]] constexpr auto fb_mode() const -> fb_mode_f {return fb_mode_f((m_value & fb_mode_f::Mask) != 0);}

	constexpr memrmp_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(memrmp_r other) const -> memrmp_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> memrmp_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * peripheral mode configuration register
 */
class cfgr1_r {
public:

/**
 * BOOSTEN
 */
class boosten_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr boosten_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GPIO analog switch control voltage selection
 */
class anaswvdd_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr anaswvdd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FM+ drive capability on PB6
 */
class i2c_pb6_fmp_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c_pb6_fmp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FM+ drive capability on PB6
 */
class i2c_pb7_fmp_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c_pb7_fmp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FM+ drive capability on PB6
 */
class i2c_pb8_fmp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c_pb8_fmp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FM+ drive capability on PB6
 */
class i2c_pb9_fmp_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c_pb9_fmp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C1 FM+ drive capability enable
 */
class i2c1_fmp_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c1_fmp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C1 FM+ drive capability enable
 */
class i2c2_fmp_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c2_fmp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C1 FM+ drive capability enable
 */
class i2c3_fmp_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c3_fmp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * I2C1 FM+ drive capability enable
 */
class i2c4_fmp_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr i2c4_fmp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FPU Interrupts Enable
 */
class fpu_ie_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr fpu_ie_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cfgr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr1_r>() const {return ClearSet<cfgr1_r>(Mask, *this);}
	constexpr auto operator|(cfgr1_r other) const -> cfgr1_r { return static_cast<cfgr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr1_r> other) const -> ClearSet<cfgr1_r> {return ClearSet<cfgr1_r>(cfgr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto boosten() const -> boosten_f {return boosten_f((m_value & boosten_f::Mask) != 0);}
	[[nodiscard]] constexpr auto anaswvdd() const -> anaswvdd_f {return anaswvdd_f((m_value & anaswvdd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c_pb6_fmp() const -> i2c_pb6_fmp_f {return i2c_pb6_fmp_f((m_value & i2c_pb6_fmp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c_pb7_fmp() const -> i2c_pb7_fmp_f {return i2c_pb7_fmp_f((m_value & i2c_pb7_fmp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c_pb8_fmp() const -> i2c_pb8_fmp_f {return i2c_pb8_fmp_f((m_value & i2c_pb8_fmp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c_pb9_fmp() const -> i2c_pb9_fmp_f {return i2c_pb9_fmp_f((m_value & i2c_pb9_fmp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c1_fmp() const -> i2c1_fmp_f {return i2c1_fmp_f((m_value & i2c1_fmp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c2_fmp() const -> i2c2_fmp_f {return i2c2_fmp_f((m_value & i2c2_fmp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c3_fmp() const -> i2c3_fmp_f {return i2c3_fmp_f((m_value & i2c3_fmp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto i2c4_fmp() const -> i2c4_fmp_f {return i2c4_fmp_f((m_value & i2c4_fmp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fpu_ie() const -> fpu_ie_f {return fpu_ie_f(static_cast<uint8_t>(m_value >> fpu_ie_f::Offset));}

	constexpr cfgr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfgr1_r other) const -> cfgr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfgr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0b1111100000000000000000000000001; // 2080374785 0x7C000001

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
	static constexpr auto get(exticr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr1_r>() const {return ClearSet<exticr1_r>(Mask, *this);}
	constexpr auto operator|(exticr1_r other) const -> exticr1_r { return static_cast<exticr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr1_r> other) const -> ClearSet<exticr1_r> {return ClearSet<exticr1_r>(exticr1_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr1_r>() const {return ClearSet<exticr1_r>(Mask, *this);}
	constexpr auto operator|(exticr1_r other) const -> exticr1_r { return static_cast<exticr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr1_r> other) const -> ClearSet<exticr1_r> {return ClearSet<exticr1_r>(exticr1_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr1_r>() const {return ClearSet<exticr1_r>(Mask, *this);}
	constexpr auto operator|(exticr1_r other) const -> exticr1_r { return static_cast<exticr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr1_r> other) const -> ClearSet<exticr1_r> {return ClearSet<exticr1_r>(exticr1_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr1_r>() const {return ClearSet<exticr1_r>(Mask, *this);}
	constexpr auto operator|(exticr1_r other) const -> exticr1_r { return static_cast<exticr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr1_r> other) const -> ClearSet<exticr1_r> {return ClearSet<exticr1_r>(exticr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto exti3() const -> exti3_f {return exti3_f(static_cast<uint8_t>(m_value >> exti3_f::Offset));}
	[[nodiscard]] constexpr auto exti2() const -> exti2_f {return exti2_f(static_cast<uint8_t>(m_value >> exti2_f::Offset));}
	[[nodiscard]] constexpr auto exti1() const -> exti1_f {return exti1_f(static_cast<uint8_t>(m_value >> exti1_f::Offset));}
	[[nodiscard]] constexpr auto exti0() const -> exti0_f {return exti0_f(static_cast<uint8_t>(m_value >> exti0_f::Offset));}

	template<std::size_t Index> struct exti_f { static_assert(Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using exti_v = typename exti_f<Index>::type;
	template<std::size_t Index> constexpr auto exti() const { return exti_v<Index>::get(*this); }

	constexpr exticr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(exticr1_r other) const -> exticr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> exticr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

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
	static constexpr auto get(exticr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr2_r>() const {return ClearSet<exticr2_r>(Mask, *this);}
	constexpr auto operator|(exticr2_r other) const -> exticr2_r { return static_cast<exticr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr2_r> other) const -> ClearSet<exticr2_r> {return ClearSet<exticr2_r>(exticr2_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr2_r>() const {return ClearSet<exticr2_r>(Mask, *this);}
	constexpr auto operator|(exticr2_r other) const -> exticr2_r { return static_cast<exticr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr2_r> other) const -> ClearSet<exticr2_r> {return ClearSet<exticr2_r>(exticr2_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr2_r>() const {return ClearSet<exticr2_r>(Mask, *this);}
	constexpr auto operator|(exticr2_r other) const -> exticr2_r { return static_cast<exticr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr2_r> other) const -> ClearSet<exticr2_r> {return ClearSet<exticr2_r>(exticr2_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr2_r>() const {return ClearSet<exticr2_r>(Mask, *this);}
	constexpr auto operator|(exticr2_r other) const -> exticr2_r { return static_cast<exticr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr2_r> other) const -> ClearSet<exticr2_r> {return ClearSet<exticr2_r>(exticr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto exti7() const -> exti7_f {return exti7_f(static_cast<uint8_t>(m_value >> exti7_f::Offset));}
	[[nodiscard]] constexpr auto exti6() const -> exti6_f {return exti6_f(static_cast<uint8_t>(m_value >> exti6_f::Offset));}
	[[nodiscard]] constexpr auto exti5() const -> exti5_f {return exti5_f(static_cast<uint8_t>(m_value >> exti5_f::Offset));}
	[[nodiscard]] constexpr auto exti4() const -> exti4_f {return exti4_f(static_cast<uint8_t>(m_value >> exti4_f::Offset));}

	template<std::size_t Index> struct exti_f { static_assert(Index == 7 || Index == 6 || Index == 5 || Index == 4); };
	template<std::size_t Index> using exti_v = typename exti_f<Index>::type;
	template<std::size_t Index> constexpr auto exti() const { return exti_v<Index>::get(*this); }

	constexpr exticr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(exticr2_r other) const -> exticr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> exticr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

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
	static constexpr auto get(exticr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr3_r>() const {return ClearSet<exticr3_r>(Mask, *this);}
	constexpr auto operator|(exticr3_r other) const -> exticr3_r { return static_cast<exticr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr3_r> other) const -> ClearSet<exticr3_r> {return ClearSet<exticr3_r>(exticr3_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr3_r>() const {return ClearSet<exticr3_r>(Mask, *this);}
	constexpr auto operator|(exticr3_r other) const -> exticr3_r { return static_cast<exticr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr3_r> other) const -> ClearSet<exticr3_r> {return ClearSet<exticr3_r>(exticr3_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr3_r>() const {return ClearSet<exticr3_r>(Mask, *this);}
	constexpr auto operator|(exticr3_r other) const -> exticr3_r { return static_cast<exticr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr3_r> other) const -> ClearSet<exticr3_r> {return ClearSet<exticr3_r>(exticr3_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr3_r>() const {return ClearSet<exticr3_r>(Mask, *this);}
	constexpr auto operator|(exticr3_r other) const -> exticr3_r { return static_cast<exticr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr3_r> other) const -> ClearSet<exticr3_r> {return ClearSet<exticr3_r>(exticr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto exti11() const -> exti11_f {return exti11_f(static_cast<uint8_t>(m_value >> exti11_f::Offset));}
	[[nodiscard]] constexpr auto exti10() const -> exti10_f {return exti10_f(static_cast<uint8_t>(m_value >> exti10_f::Offset));}
	[[nodiscard]] constexpr auto exti9() const -> exti9_f {return exti9_f(static_cast<uint8_t>(m_value >> exti9_f::Offset));}
	[[nodiscard]] constexpr auto exti8() const -> exti8_f {return exti8_f(static_cast<uint8_t>(m_value >> exti8_f::Offset));}

	template<std::size_t Index> struct exti_f { static_assert(Index == 11 || Index == 10 || Index == 9 || Index == 8); };
	template<std::size_t Index> using exti_v = typename exti_f<Index>::type;
	template<std::size_t Index> constexpr auto exti() const { return exti_v<Index>::get(*this); }

	constexpr exticr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(exticr3_r other) const -> exticr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> exticr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

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
	static constexpr auto get(exticr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr4_r>() const {return ClearSet<exticr4_r>(Mask, *this);}
	constexpr auto operator|(exticr4_r other) const -> exticr4_r { return static_cast<exticr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr4_r> other) const -> ClearSet<exticr4_r> {return ClearSet<exticr4_r>(exticr4_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr4_r>() const {return ClearSet<exticr4_r>(Mask, *this);}
	constexpr auto operator|(exticr4_r other) const -> exticr4_r { return static_cast<exticr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr4_r> other) const -> ClearSet<exticr4_r> {return ClearSet<exticr4_r>(exticr4_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr4_r>() const {return ClearSet<exticr4_r>(Mask, *this);}
	constexpr auto operator|(exticr4_r other) const -> exticr4_r { return static_cast<exticr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr4_r> other) const -> ClearSet<exticr4_r> {return ClearSet<exticr4_r>(exticr4_r(Mask) | other.clear(), *this | other.set()); }

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
	static constexpr auto get(exticr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<exticr4_r>() const {return ClearSet<exticr4_r>(Mask, *this);}
	constexpr auto operator|(exticr4_r other) const -> exticr4_r { return static_cast<exticr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<exticr4_r> other) const -> ClearSet<exticr4_r> {return ClearSet<exticr4_r>(exticr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto exti15() const -> exti15_f {return exti15_f(static_cast<uint8_t>(m_value >> exti15_f::Offset));}
	[[nodiscard]] constexpr auto exti14() const -> exti14_f {return exti14_f(static_cast<uint8_t>(m_value >> exti14_f::Offset));}
	[[nodiscard]] constexpr auto exti13() const -> exti13_f {return exti13_f(static_cast<uint8_t>(m_value >> exti13_f::Offset));}
	[[nodiscard]] constexpr auto exti12() const -> exti12_f {return exti12_f(static_cast<uint8_t>(m_value >> exti12_f::Offset));}

	template<std::size_t Index> struct exti_f { static_assert(Index == 15 || Index == 14 || Index == 13 || Index == 12); };
	template<std::size_t Index> using exti_v = typename exti_f<Index>::type;
	template<std::size_t Index> constexpr auto exti() const { return exti_v<Index>::get(*this); }

	constexpr exticr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(exticr4_r other) const -> exticr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> exticr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * CCM SRAM control and status register
 */
class scsr_r {
public:

/**
 * CCM SRAM Erase
 */
class ccmer_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccmer_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scsr_r>() const {return ClearSet<scsr_r>(Mask, *this);}
	constexpr auto operator|(scsr_r other) const -> scsr_r { return static_cast<scsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scsr_r> other) const -> ClearSet<scsr_r> {return ClearSet<scsr_r>(scsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CCM SRAM busy by erase operation
 */
class ccmbsy_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccmbsy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scsr_r>() const {return ClearSet<scsr_r>(Mask, *this);}
	constexpr auto operator|(scsr_r other) const -> scsr_r { return static_cast<scsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scsr_r> other) const -> ClearSet<scsr_r> {return ClearSet<scsr_r>(scsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ccmer() const -> ccmer_f {return ccmer_f((m_value & ccmer_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccmbsy() const -> ccmbsy_f {return ccmbsy_f((m_value & ccmbsy_f::Mask) != 0);}

	constexpr scsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(scsr_r other) const -> scsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> scsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * configuration register 2
 */
class cfgr2_r {
public:

/**
 * Core Lockup Lock
 */
class cll_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cll_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SRAM Parity Lock
 */
class spl_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr spl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PVD Lock
 */
class pvdl_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pvdl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ECC Lock
 */
class eccl_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eccl_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SRAM Parity Flag
 */
class spf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr spf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr2_r>() const {return ClearSet<cfgr2_r>(Mask, *this);}
	constexpr auto operator|(cfgr2_r other) const -> cfgr2_r { return static_cast<cfgr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr2_r> other) const -> ClearSet<cfgr2_r> {return ClearSet<cfgr2_r>(cfgr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cll() const -> cll_f {return cll_f((m_value & cll_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spl() const -> spl_f {return spl_f((m_value & spl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pvdl() const -> pvdl_f {return pvdl_f((m_value & pvdl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eccl() const -> eccl_f {return eccl_f((m_value & eccl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spf() const -> spf_f {return spf_f((m_value & spf_f::Mask) != 0);}

	constexpr cfgr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfgr2_r other) const -> cfgr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfgr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * SRAM Write protection register 1
 */
class swpr_r {
public:

/**
 * Write protection
 */
class page0_wp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr page0_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page1_wp_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr page1_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page2_wp_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr page2_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page3_wp_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr page3_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page4_wp_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr page4_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page5_wp_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr page5_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page6_wp_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr page6_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page7_wp_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr page7_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page8_wp_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr page8_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page9_wp_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr page9_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page10_wp_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr page10_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page11_wp_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr page11_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page12_wp_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr page12_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page13_wp_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr page13_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page14_wp_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr page14_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page15_wp_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr page15_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page16_wp_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page16_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page17_wp_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page17_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page18_wp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page18_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page19_wp_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page19_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page20_wp_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page20_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page21_wp_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page21_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page22_wp_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page22_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page23_wp_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page23_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page24_wp_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page24_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page25_wp_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page25_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page26_wp_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page26_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page27_wp_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page27_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page28_wp_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page28_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page29_wp_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page29_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page30_wp_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page30_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Write protection
 */
class page31_wp_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr page31_wp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swpr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swpr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swpr_r>() const {return ClearSet<swpr_r>(Mask, *this);}
	constexpr auto operator|(swpr_r other) const -> swpr_r { return static_cast<swpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swpr_r> other) const -> ClearSet<swpr_r> {return ClearSet<swpr_r>(swpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto page0_wp() const -> page0_wp_f {return page0_wp_f((m_value & page0_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page1_wp() const -> page1_wp_f {return page1_wp_f((m_value & page1_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page2_wp() const -> page2_wp_f {return page2_wp_f((m_value & page2_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page3_wp() const -> page3_wp_f {return page3_wp_f((m_value & page3_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page4_wp() const -> page4_wp_f {return page4_wp_f((m_value & page4_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page5_wp() const -> page5_wp_f {return page5_wp_f((m_value & page5_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page6_wp() const -> page6_wp_f {return page6_wp_f((m_value & page6_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page7_wp() const -> page7_wp_f {return page7_wp_f((m_value & page7_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page8_wp() const -> page8_wp_f {return page8_wp_f((m_value & page8_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page9_wp() const -> page9_wp_f {return page9_wp_f((m_value & page9_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page10_wp() const -> page10_wp_f {return page10_wp_f((m_value & page10_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page11_wp() const -> page11_wp_f {return page11_wp_f((m_value & page11_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page12_wp() const -> page12_wp_f {return page12_wp_f((m_value & page12_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page13_wp() const -> page13_wp_f {return page13_wp_f((m_value & page13_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page14_wp() const -> page14_wp_f {return page14_wp_f((m_value & page14_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page15_wp() const -> page15_wp_f {return page15_wp_f((m_value & page15_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page16_wp() const -> page16_wp_f {return page16_wp_f((m_value & page16_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page17_wp() const -> page17_wp_f {return page17_wp_f((m_value & page17_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page18_wp() const -> page18_wp_f {return page18_wp_f((m_value & page18_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page19_wp() const -> page19_wp_f {return page19_wp_f((m_value & page19_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page20_wp() const -> page20_wp_f {return page20_wp_f((m_value & page20_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page21_wp() const -> page21_wp_f {return page21_wp_f((m_value & page21_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page22_wp() const -> page22_wp_f {return page22_wp_f((m_value & page22_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page23_wp() const -> page23_wp_f {return page23_wp_f((m_value & page23_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page24_wp() const -> page24_wp_f {return page24_wp_f((m_value & page24_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page25_wp() const -> page25_wp_f {return page25_wp_f((m_value & page25_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page26_wp() const -> page26_wp_f {return page26_wp_f((m_value & page26_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page27_wp() const -> page27_wp_f {return page27_wp_f((m_value & page27_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page28_wp() const -> page28_wp_f {return page28_wp_f((m_value & page28_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page29_wp() const -> page29_wp_f {return page29_wp_f((m_value & page29_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page30_wp() const -> page30_wp_f {return page30_wp_f((m_value & page30_wp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto page31_wp() const -> page31_wp_f {return page31_wp_f((m_value & page31_wp_f::Mask) != 0);}

	constexpr swpr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(swpr_r other) const -> swpr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> swpr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * SRAM2 Key Register
 */
class skr_r {
public:

/**
 * SRAM2 Key for software erase
 */
class key_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr key_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator skr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(skr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<skr_r>() const {return ClearSet<skr_r>(Mask, *this);}
	constexpr auto operator|(skr_r other) const -> skr_r { return static_cast<skr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<skr_r> other) const -> ClearSet<skr_r> {return ClearSet<skr_r>(skr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto key() const -> key_f {return key_f(static_cast<uint8_t>(m_value >> key_f::Offset));}

	constexpr skr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(skr_r other) const -> skr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> skr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cfgr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cfgr_v = typename cfgr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cfgr() { }

	template<std::size_t Index> struct exticr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using exticr_v = typename exticr_r<Index>::type;
	template<std::size_t Index> constexpr auto& exticr() { }

	Memory<uint32_t,memrmp_r> memrmp;
	Memory<uint32_t,cfgr1_r> cfgr1;
	Memory<uint32_t,exticr1_r> exticr1;
	Memory<uint32_t,exticr2_r> exticr2;
	Memory<uint32_t,exticr3_r> exticr3;
	Memory<uint32_t,exticr4_r> exticr4;
	Memory<uint32_t,scsr_r> scsr;
	Memory<uint32_t,cfgr2_r> cfgr2;
	Memory<uint32_t,swpr_r> swpr;
	WriteOnlyMemory<uint32_t,skr_r> skr;
};

template<> struct syscfg_p::exticr1_r::exti_f<3> { using type = syscfg_p::exticr1_r::exti3_f; };
template<> struct syscfg_p::exticr1_r::exti_f<2> { using type = syscfg_p::exticr1_r::exti2_f; };
template<> struct syscfg_p::exticr1_r::exti_f<1> { using type = syscfg_p::exticr1_r::exti1_f; };
template<> struct syscfg_p::exticr1_r::exti_f<0> { using type = syscfg_p::exticr1_r::exti0_f; };

template<> struct syscfg_p::exticr2_r::exti_f<7> { using type = syscfg_p::exticr2_r::exti7_f; };
template<> struct syscfg_p::exticr2_r::exti_f<6> { using type = syscfg_p::exticr2_r::exti6_f; };
template<> struct syscfg_p::exticr2_r::exti_f<5> { using type = syscfg_p::exticr2_r::exti5_f; };
template<> struct syscfg_p::exticr2_r::exti_f<4> { using type = syscfg_p::exticr2_r::exti4_f; };

template<> struct syscfg_p::exticr3_r::exti_f<11> { using type = syscfg_p::exticr3_r::exti11_f; };
template<> struct syscfg_p::exticr3_r::exti_f<10> { using type = syscfg_p::exticr3_r::exti10_f; };
template<> struct syscfg_p::exticr3_r::exti_f<9> { using type = syscfg_p::exticr3_r::exti9_f; };
template<> struct syscfg_p::exticr3_r::exti_f<8> { using type = syscfg_p::exticr3_r::exti8_f; };

template<> struct syscfg_p::exticr4_r::exti_f<15> { using type = syscfg_p::exticr4_r::exti15_f; };
template<> struct syscfg_p::exticr4_r::exti_f<14> { using type = syscfg_p::exticr4_r::exti14_f; };
template<> struct syscfg_p::exticr4_r::exti_f<13> { using type = syscfg_p::exticr4_r::exti13_f; };
template<> struct syscfg_p::exticr4_r::exti_f<12> { using type = syscfg_p::exticr4_r::exti12_f; };

template<> constexpr auto& syscfg_p::cfgr<1>() { return cfgr1; }
template<> constexpr auto& syscfg_p::cfgr<2>() { return cfgr2; }

template<> struct syscfg_p::cfgr_r<1> { using type = syscfg_p::cfgr1_r; };
template<> struct syscfg_p::cfgr_r<2> { using type = syscfg_p::cfgr2_r; };

template<> constexpr auto& syscfg_p::exticr<1>() { return exticr1; }
template<> constexpr auto& syscfg_p::exticr<2>() { return exticr2; }
template<> constexpr auto& syscfg_p::exticr<3>() { return exticr3; }
template<> constexpr auto& syscfg_p::exticr<4>() { return exticr4; }

template<> struct syscfg_p::exticr_r<1> { using type = syscfg_p::exticr1_r; };
template<> struct syscfg_p::exticr_r<2> { using type = syscfg_p::exticr2_r; };
template<> struct syscfg_p::exticr_r<3> { using type = syscfg_p::exticr3_r; };
template<> struct syscfg_p::exticr_r<4> { using type = syscfg_p::exticr4_r; };

static_assert(std::is_standard_layout_v<syscfg_p>);
static_assert(offsetof(syscfg_p, memrmp) == syscfg_p::memrmp_r::Offset);
static_assert(offsetof(syscfg_p, cfgr1) == syscfg_p::cfgr1_r::Offset);
static_assert(offsetof(syscfg_p, exticr1) == syscfg_p::exticr1_r::Offset);
static_assert(offsetof(syscfg_p, exticr2) == syscfg_p::exticr2_r::Offset);
static_assert(offsetof(syscfg_p, exticr3) == syscfg_p::exticr3_r::Offset);
static_assert(offsetof(syscfg_p, exticr4) == syscfg_p::exticr4_r::Offset);
static_assert(offsetof(syscfg_p, scsr) == syscfg_p::scsr_r::Offset);
static_assert(offsetof(syscfg_p, cfgr2) == syscfg_p::cfgr2_r::Offset);
static_assert(offsetof(syscfg_p, swpr) == syscfg_p::swpr_r::Offset);
static_assert(offsetof(syscfg_p, skr) == syscfg_p::skr_r::Offset);

inline syscfg_p& syscfg = *reinterpret_cast<syscfg_p*>(0x40010000);

} // STM32G473XX

