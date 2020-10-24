#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * External interrupt/event controller
 */
class exti_p {
public:
/**
 * Interrupt mask register (EXTI_IMR)
 */
class imr_r {
public:

/**
 * Interrupt Mask on line 0
 */
class mr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 1
 */
class mr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 2
 */
class mr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 3
 */
class mr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 4
 */
class mr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 5
 */
class mr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 6
 */
class mr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 7
 */
class mr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 8
 */
class mr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 9
 */
class mr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 10
 */
class mr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 11
 */
class mr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 12
 */
class mr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 13
 */
class mr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 14
 */
class mr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 15
 */
class mr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 16
 */
class mr16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 17
 */
class mr17_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr17_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 18
 */
class mr18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 19
 */
class mr19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 20
 */
class mr20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 21
 */
class mr21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 22
 */
class mr22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<imr_r>() const {return ClearSet<imr_r>(Mask, *this);}
	constexpr auto operator|(imr_r other) const -> imr_r { return static_cast<imr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr_r> other) const -> ClearSet<imr_r> {return ClearSet<imr_r>(imr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mr0() const -> mr0_f {return mr0_f((m_value & mr0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr1() const -> mr1_f {return mr1_f((m_value & mr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr2() const -> mr2_f {return mr2_f((m_value & mr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr3() const -> mr3_f {return mr3_f((m_value & mr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr4() const -> mr4_f {return mr4_f((m_value & mr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr5() const -> mr5_f {return mr5_f((m_value & mr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr6() const -> mr6_f {return mr6_f((m_value & mr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr7() const -> mr7_f {return mr7_f((m_value & mr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr8() const -> mr8_f {return mr8_f((m_value & mr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr9() const -> mr9_f {return mr9_f((m_value & mr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr10() const -> mr10_f {return mr10_f((m_value & mr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr11() const -> mr11_f {return mr11_f((m_value & mr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr12() const -> mr12_f {return mr12_f((m_value & mr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr13() const -> mr13_f {return mr13_f((m_value & mr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr14() const -> mr14_f {return mr14_f((m_value & mr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr15() const -> mr15_f {return mr15_f((m_value & mr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr16() const -> mr16_f {return mr16_f((m_value & mr16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr17() const -> mr17_f {return mr17_f((m_value & mr17_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr18() const -> mr18_f {return mr18_f((m_value & mr18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr19() const -> mr19_f {return mr19_f((m_value & mr19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr20() const -> mr20_f {return mr20_f((m_value & mr20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr21() const -> mr21_f {return mr21_f((m_value & mr21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr22() const -> mr22_f {return mr22_f((m_value & mr22_f::Mask) != 0);}

	constexpr imr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(imr_r other) const -> imr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> imr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Event mask register (EXTI_EMR)
 */
class emr_r {
public:

/**
 * Event Mask on line 0
 */
class mr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 1
 */
class mr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 2
 */
class mr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 3
 */
class mr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 4
 */
class mr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 5
 */
class mr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 6
 */
class mr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 7
 */
class mr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 8
 */
class mr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 9
 */
class mr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 10
 */
class mr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 11
 */
class mr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 12
 */
class mr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 13
 */
class mr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 14
 */
class mr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 15
 */
class mr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 16
 */
class mr16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 17
 */
class mr17_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr17_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 18
 */
class mr18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 19
 */
class mr19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 20
 */
class mr20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 21
 */
class mr21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 22
 */
class mr22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mr22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<emr_r>() const {return ClearSet<emr_r>(Mask, *this);}
	constexpr auto operator|(emr_r other) const -> emr_r { return static_cast<emr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr_r> other) const -> ClearSet<emr_r> {return ClearSet<emr_r>(emr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mr0() const -> mr0_f {return mr0_f((m_value & mr0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr1() const -> mr1_f {return mr1_f((m_value & mr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr2() const -> mr2_f {return mr2_f((m_value & mr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr3() const -> mr3_f {return mr3_f((m_value & mr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr4() const -> mr4_f {return mr4_f((m_value & mr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr5() const -> mr5_f {return mr5_f((m_value & mr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr6() const -> mr6_f {return mr6_f((m_value & mr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr7() const -> mr7_f {return mr7_f((m_value & mr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr8() const -> mr8_f {return mr8_f((m_value & mr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr9() const -> mr9_f {return mr9_f((m_value & mr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr10() const -> mr10_f {return mr10_f((m_value & mr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr11() const -> mr11_f {return mr11_f((m_value & mr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr12() const -> mr12_f {return mr12_f((m_value & mr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr13() const -> mr13_f {return mr13_f((m_value & mr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr14() const -> mr14_f {return mr14_f((m_value & mr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr15() const -> mr15_f {return mr15_f((m_value & mr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr16() const -> mr16_f {return mr16_f((m_value & mr16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr17() const -> mr17_f {return mr17_f((m_value & mr17_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr18() const -> mr18_f {return mr18_f((m_value & mr18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr19() const -> mr19_f {return mr19_f((m_value & mr19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr20() const -> mr20_f {return mr20_f((m_value & mr20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr21() const -> mr21_f {return mr21_f((m_value & mr21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mr22() const -> mr22_f {return mr22_f((m_value & mr22_f::Mask) != 0);}

	constexpr emr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(emr_r other) const -> emr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> emr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Rising Trigger selection register (EXTI_RTSR)
 */
class rtsr_r {
public:

/**
 * Rising trigger event configuration of line 0
 */
class tr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 1
 */
class tr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 2
 */
class tr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 3
 */
class tr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 4
 */
class tr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 5
 */
class tr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 6
 */
class tr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 7
 */
class tr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 8
 */
class tr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 9
 */
class tr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 10
 */
class tr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 11
 */
class tr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 12
 */
class tr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 13
 */
class tr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 14
 */
class tr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 15
 */
class tr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 16
 */
class tr16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 17
 */
class tr17_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr17_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 18
 */
class tr18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 19
 */
class tr19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 20
 */
class tr20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 21
 */
class tr21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 22
 */
class tr22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<rtsr_r>() const {return ClearSet<rtsr_r>(Mask, *this);}
	constexpr auto operator|(rtsr_r other) const -> rtsr_r { return static_cast<rtsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr_r> other) const -> ClearSet<rtsr_r> {return ClearSet<rtsr_r>(rtsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tr0() const -> tr0_f {return tr0_f((m_value & tr0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr1() const -> tr1_f {return tr1_f((m_value & tr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr2() const -> tr2_f {return tr2_f((m_value & tr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr3() const -> tr3_f {return tr3_f((m_value & tr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr4() const -> tr4_f {return tr4_f((m_value & tr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr5() const -> tr5_f {return tr5_f((m_value & tr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr6() const -> tr6_f {return tr6_f((m_value & tr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr7() const -> tr7_f {return tr7_f((m_value & tr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr8() const -> tr8_f {return tr8_f((m_value & tr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr9() const -> tr9_f {return tr9_f((m_value & tr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr10() const -> tr10_f {return tr10_f((m_value & tr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr11() const -> tr11_f {return tr11_f((m_value & tr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr12() const -> tr12_f {return tr12_f((m_value & tr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr13() const -> tr13_f {return tr13_f((m_value & tr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr14() const -> tr14_f {return tr14_f((m_value & tr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr15() const -> tr15_f {return tr15_f((m_value & tr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr16() const -> tr16_f {return tr16_f((m_value & tr16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr17() const -> tr17_f {return tr17_f((m_value & tr17_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr18() const -> tr18_f {return tr18_f((m_value & tr18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr19() const -> tr19_f {return tr19_f((m_value & tr19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr20() const -> tr20_f {return tr20_f((m_value & tr20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr21() const -> tr21_f {return tr21_f((m_value & tr21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr22() const -> tr22_f {return tr22_f((m_value & tr22_f::Mask) != 0);}

	constexpr rtsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rtsr_r other) const -> rtsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rtsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Falling Trigger selection register (EXTI_FTSR)
 */
class ftsr_r {
public:

/**
 * Falling trigger event configuration of line 0
 */
class tr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 1
 */
class tr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 2
 */
class tr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 3
 */
class tr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 4
 */
class tr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 5
 */
class tr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 6
 */
class tr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 7
 */
class tr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 8
 */
class tr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 9
 */
class tr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 10
 */
class tr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 11
 */
class tr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 12
 */
class tr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 13
 */
class tr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 14
 */
class tr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 15
 */
class tr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 16
 */
class tr16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 17
 */
class tr17_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr17_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 18
 */
class tr18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 19
 */
class tr19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 20
 */
class tr20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 21
 */
class tr21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 22
 */
class tr22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tr22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<ftsr_r>() const {return ClearSet<ftsr_r>(Mask, *this);}
	constexpr auto operator|(ftsr_r other) const -> ftsr_r { return static_cast<ftsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr_r> other) const -> ClearSet<ftsr_r> {return ClearSet<ftsr_r>(ftsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tr0() const -> tr0_f {return tr0_f((m_value & tr0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr1() const -> tr1_f {return tr1_f((m_value & tr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr2() const -> tr2_f {return tr2_f((m_value & tr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr3() const -> tr3_f {return tr3_f((m_value & tr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr4() const -> tr4_f {return tr4_f((m_value & tr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr5() const -> tr5_f {return tr5_f((m_value & tr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr6() const -> tr6_f {return tr6_f((m_value & tr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr7() const -> tr7_f {return tr7_f((m_value & tr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr8() const -> tr8_f {return tr8_f((m_value & tr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr9() const -> tr9_f {return tr9_f((m_value & tr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr10() const -> tr10_f {return tr10_f((m_value & tr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr11() const -> tr11_f {return tr11_f((m_value & tr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr12() const -> tr12_f {return tr12_f((m_value & tr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr13() const -> tr13_f {return tr13_f((m_value & tr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr14() const -> tr14_f {return tr14_f((m_value & tr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr15() const -> tr15_f {return tr15_f((m_value & tr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr16() const -> tr16_f {return tr16_f((m_value & tr16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr17() const -> tr17_f {return tr17_f((m_value & tr17_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr18() const -> tr18_f {return tr18_f((m_value & tr18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr19() const -> tr19_f {return tr19_f((m_value & tr19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr20() const -> tr20_f {return tr20_f((m_value & tr20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr21() const -> tr21_f {return tr21_f((m_value & tr21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tr22() const -> tr22_f {return tr22_f((m_value & tr22_f::Mask) != 0);}

	constexpr ftsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ftsr_r other) const -> ftsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ftsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Software interrupt event register (EXTI_SWIER)
 */
class swier_r {
public:

/**
 * Software Interrupt on line 0
 */
class swier0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swier0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 1
 */
class swier1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swier1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 2
 */
class swier2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swier2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 3
 */
class swier3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swier3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 4
 */
class swier4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swier4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 5
 */
class swier5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swier5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 6
 */
class swier6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swier6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 7
 */
class swier7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swier7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 8
 */
class swier8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swier8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 9
 */
class swier9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swier9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 10
 */
class swier10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swier10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 11
 */
class swier11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swier11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 12
 */
class swier12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swier12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 13
 */
class swier13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swier13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 14
 */
class swier14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swier14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 15
 */
class swier15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swier15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 16
 */
class swier16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swier16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 17
 */
class swier17_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swier17_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 18
 */
class swier18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swier18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 19
 */
class swier19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swier19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 20
 */
class swier20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swier20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 21
 */
class swier21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swier21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 22
 */
class swier22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swier22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<swier_r>() const {return ClearSet<swier_r>(Mask, *this);}
	constexpr auto operator|(swier_r other) const -> swier_r { return static_cast<swier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier_r> other) const -> ClearSet<swier_r> {return ClearSet<swier_r>(swier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto swier0() const -> swier0_f {return swier0_f((m_value & swier0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier1() const -> swier1_f {return swier1_f((m_value & swier1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier2() const -> swier2_f {return swier2_f((m_value & swier2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier3() const -> swier3_f {return swier3_f((m_value & swier3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier4() const -> swier4_f {return swier4_f((m_value & swier4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier5() const -> swier5_f {return swier5_f((m_value & swier5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier6() const -> swier6_f {return swier6_f((m_value & swier6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier7() const -> swier7_f {return swier7_f((m_value & swier7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier8() const -> swier8_f {return swier8_f((m_value & swier8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier9() const -> swier9_f {return swier9_f((m_value & swier9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier10() const -> swier10_f {return swier10_f((m_value & swier10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier11() const -> swier11_f {return swier11_f((m_value & swier11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier12() const -> swier12_f {return swier12_f((m_value & swier12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier13() const -> swier13_f {return swier13_f((m_value & swier13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier14() const -> swier14_f {return swier14_f((m_value & swier14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier15() const -> swier15_f {return swier15_f((m_value & swier15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier16() const -> swier16_f {return swier16_f((m_value & swier16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier17() const -> swier17_f {return swier17_f((m_value & swier17_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier18() const -> swier18_f {return swier18_f((m_value & swier18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier19() const -> swier19_f {return swier19_f((m_value & swier19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier20() const -> swier20_f {return swier20_f((m_value & swier20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier21() const -> swier21_f {return swier21_f((m_value & swier21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swier22() const -> swier22_f {return swier22_f((m_value & swier22_f::Mask) != 0);}

	constexpr swier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(swier_r other) const -> swier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> swier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Pending register (EXTI_PR)
 */
class pr_r {
public:

/**
 * Pending bit 0
 */
class pr0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pr0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 1
 */
class pr1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 2
 */
class pr2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 3
 */
class pr3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pr3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 4
 */
class pr4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pr4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 5
 */
class pr5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pr5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 6
 */
class pr6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pr6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 7
 */
class pr7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pr7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 8
 */
class pr8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pr8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 9
 */
class pr9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pr9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 10
 */
class pr10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pr10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 11
 */
class pr11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pr11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 12
 */
class pr12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pr12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 13
 */
class pr13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pr13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 14
 */
class pr14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pr14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 15
 */
class pr15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pr15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 16
 */
class pr16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pr16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 17
 */
class pr17_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pr17_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 18
 */
class pr18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pr18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 19
 */
class pr19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pr19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 20
 */
class pr20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pr20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 21
 */
class pr21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pr21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 22
 */
class pr22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pr22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr_r() const {return m_value ? Mask : 0;}
	constexpr operator ClearSet<pr_r>() const {return ClearSet<pr_r>(Mask, *this);}
	constexpr auto operator|(pr_r other) const -> pr_r { return static_cast<pr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr_r> other) const -> ClearSet<pr_r> {return ClearSet<pr_r>(pr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pr0() const -> pr0_f {return pr0_f((m_value & pr0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr1() const -> pr1_f {return pr1_f((m_value & pr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr2() const -> pr2_f {return pr2_f((m_value & pr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr3() const -> pr3_f {return pr3_f((m_value & pr3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr4() const -> pr4_f {return pr4_f((m_value & pr4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr5() const -> pr5_f {return pr5_f((m_value & pr5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr6() const -> pr6_f {return pr6_f((m_value & pr6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr7() const -> pr7_f {return pr7_f((m_value & pr7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr8() const -> pr8_f {return pr8_f((m_value & pr8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr9() const -> pr9_f {return pr9_f((m_value & pr9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr10() const -> pr10_f {return pr10_f((m_value & pr10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr11() const -> pr11_f {return pr11_f((m_value & pr11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr12() const -> pr12_f {return pr12_f((m_value & pr12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr13() const -> pr13_f {return pr13_f((m_value & pr13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr14() const -> pr14_f {return pr14_f((m_value & pr14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr15() const -> pr15_f {return pr15_f((m_value & pr15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr16() const -> pr16_f {return pr16_f((m_value & pr16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr17() const -> pr17_f {return pr17_f((m_value & pr17_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr18() const -> pr18_f {return pr18_f((m_value & pr18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr19() const -> pr19_f {return pr19_f((m_value & pr19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr20() const -> pr20_f {return pr20_f((m_value & pr20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr21() const -> pr21_f {return pr21_f((m_value & pr21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pr22() const -> pr22_f {return pr22_f((m_value & pr22_f::Mask) != 0);}

	constexpr pr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pr_r other) const -> pr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,imr_r> imr;
	Memory<uint32_t,emr_r> emr;
	Memory<uint32_t,rtsr_r> rtsr;
	Memory<uint32_t,ftsr_r> ftsr;
	Memory<uint32_t,swier_r> swier;
	Memory<uint32_t,pr_r> pr;
};

static_assert(std::is_standard_layout_v<exti_p>);
static_assert(offsetof(exti_p, imr) == exti_p::imr_r::Offset);
static_assert(offsetof(exti_p, emr) == exti_p::emr_r::Offset);
static_assert(offsetof(exti_p, rtsr) == exti_p::rtsr_r::Offset);
static_assert(offsetof(exti_p, ftsr) == exti_p::ftsr_r::Offset);
static_assert(offsetof(exti_p, swier) == exti_p::swier_r::Offset);
static_assert(offsetof(exti_p, pr) == exti_p::pr_r::Offset);

inline exti_p& exti = *reinterpret_cast<exti_p*>(0x40013C00);

} // STM32F401

