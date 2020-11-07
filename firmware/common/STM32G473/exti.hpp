#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * External interrupt/event controller
 */
class exti_p {
public:
/**
 * Interrupt mask register
 */
class imr1_r {
public:

/**
 * Interrupt Mask on line 0
 */
class im0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 1
 */
class im1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 2
 */
class im2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 3
 */
class im3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 4
 */
class im4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 5
 */
class im5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 6
 */
class im6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 7
 */
class im7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 8
 */
class im8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 9
 */
class im9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 10
 */
class im10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 11
 */
class im11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 12
 */
class im12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 13
 */
class im13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 14
 */
class im14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 15
 */
class im15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 16
 */
class im16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 17
 */
class im17_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im17_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 18
 */
class im18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 19
 */
class im19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 20
 */
class im20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 21
 */
class im21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 22
 */
class im22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 23
 */
class im23_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im23_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 24
 */
class im24_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im24_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 25
 */
class im25_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im25_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 26
 */
class im26_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im26_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 27
 */
class im27_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im27_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 28
 */
class im28_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im28_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 29
 */
class im29_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im29_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 30
 */
class im30_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im30_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on line 31
 */
class im31_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr im31_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr1_r>() const {return ClearSet<imr1_r>(Mask, *this);}
	constexpr auto operator|(imr1_r other) const -> imr1_r { return static_cast<imr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr1_r> other) const -> ClearSet<imr1_r> {return ClearSet<imr1_r>(imr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto im0() const -> im0_f {return im0_f((m_value & im0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im1() const -> im1_f {return im1_f((m_value & im1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im2() const -> im2_f {return im2_f((m_value & im2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im3() const -> im3_f {return im3_f((m_value & im3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im4() const -> im4_f {return im4_f((m_value & im4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im5() const -> im5_f {return im5_f((m_value & im5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im6() const -> im6_f {return im6_f((m_value & im6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im7() const -> im7_f {return im7_f((m_value & im7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im8() const -> im8_f {return im8_f((m_value & im8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im9() const -> im9_f {return im9_f((m_value & im9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im10() const -> im10_f {return im10_f((m_value & im10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im11() const -> im11_f {return im11_f((m_value & im11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im12() const -> im12_f {return im12_f((m_value & im12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im13() const -> im13_f {return im13_f((m_value & im13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im14() const -> im14_f {return im14_f((m_value & im14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im15() const -> im15_f {return im15_f((m_value & im15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im16() const -> im16_f {return im16_f((m_value & im16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im17() const -> im17_f {return im17_f((m_value & im17_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im18() const -> im18_f {return im18_f((m_value & im18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im19() const -> im19_f {return im19_f((m_value & im19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im20() const -> im20_f {return im20_f((m_value & im20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im21() const -> im21_f {return im21_f((m_value & im21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im22() const -> im22_f {return im22_f((m_value & im22_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im23() const -> im23_f {return im23_f((m_value & im23_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im24() const -> im24_f {return im24_f((m_value & im24_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im25() const -> im25_f {return im25_f((m_value & im25_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im26() const -> im26_f {return im26_f((m_value & im26_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im27() const -> im27_f {return im27_f((m_value & im27_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im28() const -> im28_f {return im28_f((m_value & im28_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im29() const -> im29_f {return im29_f((m_value & im29_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im30() const -> im30_f {return im30_f((m_value & im30_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im31() const -> im31_f {return im31_f((m_value & im31_f::Mask) != 0);}

	template<std::size_t Index> struct im_f { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8 || Index == 9 || Index == 10 || Index == 11 || Index == 12 || Index == 13 || Index == 14 || Index == 15 || Index == 16 || Index == 17 || Index == 18 || Index == 19 || Index == 20 || Index == 21 || Index == 22 || Index == 23 || Index == 24 || Index == 25 || Index == 26 || Index == 27 || Index == 28 || Index == 29 || Index == 30 || Index == 31); };
	template<std::size_t Index> using im_v = typename im_f<Index>::type;
	template<std::size_t Index> constexpr auto im() const { return im_v<Index>::get(*this); }

	constexpr imr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(imr1_r other) const -> imr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> imr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b11111111100000100000000000000000; // 4286709760 0xFF820000

private:
	uint32_t m_value;
};
/**
 * Event mask register
 */
class emr1_r {
public:

/**
 * Event Mask on line 0
 */
class em0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 1
 */
class em1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 2
 */
class em2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 3
 */
class em3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 4
 */
class em4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 5
 */
class em5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 6
 */
class em6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 7
 */
class em7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 8
 */
class em8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr em8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 9
 */
class em9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr em9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 10
 */
class em10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr em10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 11
 */
class em11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr em11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 12
 */
class em12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr em12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 13
 */
class em13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr em13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 14
 */
class em14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr em14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 15
 */
class em15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr em15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 16
 */
class em16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 17
 */
class em17_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em17_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 18
 */
class em18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 19
 */
class em19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 20
 */
class em20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 21
 */
class em21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 22
 */
class em22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 23
 */
class em23_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em23_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 24
 */
class em24_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em24_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 25
 */
class em25_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em25_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 26
 */
class em26_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em26_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 27
 */
class em27_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em27_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 28
 */
class em28_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em28_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 29
 */
class em29_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em29_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 30
 */
class em30_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em30_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event Mask on line 31
 */
class em31_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr em31_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr1_r>() const {return ClearSet<emr1_r>(Mask, *this);}
	constexpr auto operator|(emr1_r other) const -> emr1_r { return static_cast<emr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr1_r> other) const -> ClearSet<emr1_r> {return ClearSet<emr1_r>(emr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto em0() const -> em0_f {return em0_f((m_value & em0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em1() const -> em1_f {return em1_f((m_value & em1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em2() const -> em2_f {return em2_f((m_value & em2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em3() const -> em3_f {return em3_f((m_value & em3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em4() const -> em4_f {return em4_f((m_value & em4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em5() const -> em5_f {return em5_f((m_value & em5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em6() const -> em6_f {return em6_f((m_value & em6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em7() const -> em7_f {return em7_f((m_value & em7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em8() const -> em8_f {return em8_f((m_value & em8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em9() const -> em9_f {return em9_f((m_value & em9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em10() const -> em10_f {return em10_f((m_value & em10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em11() const -> em11_f {return em11_f((m_value & em11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em12() const -> em12_f {return em12_f((m_value & em12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em13() const -> em13_f {return em13_f((m_value & em13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em14() const -> em14_f {return em14_f((m_value & em14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em15() const -> em15_f {return em15_f((m_value & em15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em16() const -> em16_f {return em16_f((m_value & em16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em17() const -> em17_f {return em17_f((m_value & em17_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em18() const -> em18_f {return em18_f((m_value & em18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em19() const -> em19_f {return em19_f((m_value & em19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em20() const -> em20_f {return em20_f((m_value & em20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em21() const -> em21_f {return em21_f((m_value & em21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em22() const -> em22_f {return em22_f((m_value & em22_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em23() const -> em23_f {return em23_f((m_value & em23_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em24() const -> em24_f {return em24_f((m_value & em24_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em25() const -> em25_f {return em25_f((m_value & em25_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em26() const -> em26_f {return em26_f((m_value & em26_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em27() const -> em27_f {return em27_f((m_value & em27_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em28() const -> em28_f {return em28_f((m_value & em28_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em29() const -> em29_f {return em29_f((m_value & em29_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em30() const -> em30_f {return em30_f((m_value & em30_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em31() const -> em31_f {return em31_f((m_value & em31_f::Mask) != 0);}

	template<std::size_t Index> struct em_f { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8 || Index == 9 || Index == 10 || Index == 11 || Index == 12 || Index == 13 || Index == 14 || Index == 15 || Index == 16 || Index == 17 || Index == 18 || Index == 19 || Index == 20 || Index == 21 || Index == 22 || Index == 23 || Index == 24 || Index == 25 || Index == 26 || Index == 27 || Index == 28 || Index == 29 || Index == 30 || Index == 31); };
	template<std::size_t Index> using em_v = typename em_f<Index>::type;
	template<std::size_t Index> constexpr auto em() const { return em_v<Index>::get(*this); }

	constexpr emr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(emr1_r other) const -> emr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> emr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Rising Trigger selection register
 */
class rtsr1_r {
public:

/**
 * Rising trigger event configuration of line 0
 */
class rt0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 1
 */
class rt1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 2
 */
class rt2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 3
 */
class rt3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 4
 */
class rt4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 5
 */
class rt5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 6
 */
class rt6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 7
 */
class rt7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 8
 */
class rt8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rt8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 9
 */
class rt9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rt9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 10
 */
class rt10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rt10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 11
 */
class rt11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rt11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 12
 */
class rt12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rt12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 13
 */
class rt13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rt13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 14
 */
class rt14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rt14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 15
 */
class rt15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rt15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 16
 */
class rt16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rt16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 18
 */
class rt18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rt18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 19
 */
class rt19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rt19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 20
 */
class rt20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rt20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 21
 */
class rt21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rt21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration of line 22
 */
class rt22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rt22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RT
 */
class rt_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rtsr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rtsr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr1_r>() const {return ClearSet<rtsr1_r>(Mask, *this);}
	constexpr auto operator|(rtsr1_r other) const -> rtsr1_r { return static_cast<rtsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr1_r> other) const -> ClearSet<rtsr1_r> {return ClearSet<rtsr1_r>(rtsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto rt0() const -> rt0_f {return rt0_f((m_value & rt0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt1() const -> rt1_f {return rt1_f((m_value & rt1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt2() const -> rt2_f {return rt2_f((m_value & rt2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt3() const -> rt3_f {return rt3_f((m_value & rt3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt4() const -> rt4_f {return rt4_f((m_value & rt4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt5() const -> rt5_f {return rt5_f((m_value & rt5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt6() const -> rt6_f {return rt6_f((m_value & rt6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt7() const -> rt7_f {return rt7_f((m_value & rt7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt8() const -> rt8_f {return rt8_f((m_value & rt8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt9() const -> rt9_f {return rt9_f((m_value & rt9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt10() const -> rt10_f {return rt10_f((m_value & rt10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt11() const -> rt11_f {return rt11_f((m_value & rt11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt12() const -> rt12_f {return rt12_f((m_value & rt12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt13() const -> rt13_f {return rt13_f((m_value & rt13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt14() const -> rt14_f {return rt14_f((m_value & rt14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt15() const -> rt15_f {return rt15_f((m_value & rt15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt16() const -> rt16_f {return rt16_f((m_value & rt16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt18() const -> rt18_f {return rt18_f((m_value & rt18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt19() const -> rt19_f {return rt19_f((m_value & rt19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt20() const -> rt20_f {return rt20_f((m_value & rt20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt21() const -> rt21_f {return rt21_f((m_value & rt21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt22() const -> rt22_f {return rt22_f((m_value & rt22_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt() const -> rt_f {return rt_f(static_cast<uint8_t>(m_value >> rt_f::Offset));}

	template<std::size_t Index> struct rt_f { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8 || Index == 9 || Index == 10 || Index == 11 || Index == 12 || Index == 13 || Index == 14 || Index == 15 || Index == 16 || Index == 18 || Index == 19 || Index == 20 || Index == 21 || Index == 22); };
	template<std::size_t Index> using rt_v = typename rt_f<Index>::type;
	template<std::size_t Index> constexpr auto rt() const { return rt_v<Index>::get(*this); }

	constexpr rtsr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rtsr1_r other) const -> rtsr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rtsr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Falling Trigger selection register
 */
class ftsr1_r {
public:

/**
 * Falling trigger event configuration of line 0
 */
class ft0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 1
 */
class ft1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 2
 */
class ft2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 3
 */
class ft3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 4
 */
class ft4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 5
 */
class ft5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 6
 */
class ft6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 7
 */
class ft7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 8
 */
class ft8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ft8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 9
 */
class ft9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ft9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 10
 */
class ft10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ft10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 11
 */
class ft11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ft11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 12
 */
class ft12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ft12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 13
 */
class ft13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ft13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 14
 */
class ft14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ft14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 15
 */
class ft15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ft15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 16
 */
class ft16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ft16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 18
 */
class ft18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ft18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 19
 */
class ft19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ft19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 20
 */
class ft20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ft20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 21
 */
class ft21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ft21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration of line 22
 */
class ft22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ft22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr1_r>() const {return ClearSet<ftsr1_r>(Mask, *this);}
	constexpr auto operator|(ftsr1_r other) const -> ftsr1_r { return static_cast<ftsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr1_r> other) const -> ClearSet<ftsr1_r> {return ClearSet<ftsr1_r>(ftsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ft0() const -> ft0_f {return ft0_f((m_value & ft0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft1() const -> ft1_f {return ft1_f((m_value & ft1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft2() const -> ft2_f {return ft2_f((m_value & ft2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft3() const -> ft3_f {return ft3_f((m_value & ft3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft4() const -> ft4_f {return ft4_f((m_value & ft4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft5() const -> ft5_f {return ft5_f((m_value & ft5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft6() const -> ft6_f {return ft6_f((m_value & ft6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft7() const -> ft7_f {return ft7_f((m_value & ft7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft8() const -> ft8_f {return ft8_f((m_value & ft8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft9() const -> ft9_f {return ft9_f((m_value & ft9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft10() const -> ft10_f {return ft10_f((m_value & ft10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft11() const -> ft11_f {return ft11_f((m_value & ft11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft12() const -> ft12_f {return ft12_f((m_value & ft12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft13() const -> ft13_f {return ft13_f((m_value & ft13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft14() const -> ft14_f {return ft14_f((m_value & ft14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft15() const -> ft15_f {return ft15_f((m_value & ft15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft16() const -> ft16_f {return ft16_f((m_value & ft16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft18() const -> ft18_f {return ft18_f((m_value & ft18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft19() const -> ft19_f {return ft19_f((m_value & ft19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft20() const -> ft20_f {return ft20_f((m_value & ft20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft21() const -> ft21_f {return ft21_f((m_value & ft21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft22() const -> ft22_f {return ft22_f((m_value & ft22_f::Mask) != 0);}

	template<std::size_t Index> struct ft_f { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8 || Index == 9 || Index == 10 || Index == 11 || Index == 12 || Index == 13 || Index == 14 || Index == 15 || Index == 16 || Index == 18 || Index == 19 || Index == 20 || Index == 21 || Index == 22); };
	template<std::size_t Index> using ft_v = typename ft_f<Index>::type;
	template<std::size_t Index> constexpr auto ft() const { return ft_v<Index>::get(*this); }

	constexpr ftsr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ftsr1_r other) const -> ftsr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ftsr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Software interrupt event register
 */
class swier1_r {
public:

/**
 * Software Interrupt on line 0
 */
class swi0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 1
 */
class swi1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 2
 */
class swi2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 3
 */
class swi3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 4
 */
class swi4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 5
 */
class swi5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 6
 */
class swi6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 7
 */
class swi7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 8
 */
class swi8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swi8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 9
 */
class swi9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swi9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 10
 */
class swi10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swi10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 11
 */
class swi11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swi11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 12
 */
class swi12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swi12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 13
 */
class swi13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swi13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 14
 */
class swi14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swi14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 15
 */
class swi15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swi15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 16
 */
class swi16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swi16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 18
 */
class swi18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swi18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 19
 */
class swi19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swi19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 20
 */
class swi20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swi20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 21
 */
class swi21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swi21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software Interrupt on line 22
 */
class swi22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swi22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier1_r>() const {return ClearSet<swier1_r>(Mask, *this);}
	constexpr auto operator|(swier1_r other) const -> swier1_r { return static_cast<swier1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier1_r> other) const -> ClearSet<swier1_r> {return ClearSet<swier1_r>(swier1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto swi0() const -> swi0_f {return swi0_f((m_value & swi0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi1() const -> swi1_f {return swi1_f((m_value & swi1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi2() const -> swi2_f {return swi2_f((m_value & swi2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi3() const -> swi3_f {return swi3_f((m_value & swi3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi4() const -> swi4_f {return swi4_f((m_value & swi4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi5() const -> swi5_f {return swi5_f((m_value & swi5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi6() const -> swi6_f {return swi6_f((m_value & swi6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi7() const -> swi7_f {return swi7_f((m_value & swi7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi8() const -> swi8_f {return swi8_f((m_value & swi8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi9() const -> swi9_f {return swi9_f((m_value & swi9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi10() const -> swi10_f {return swi10_f((m_value & swi10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi11() const -> swi11_f {return swi11_f((m_value & swi11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi12() const -> swi12_f {return swi12_f((m_value & swi12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi13() const -> swi13_f {return swi13_f((m_value & swi13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi14() const -> swi14_f {return swi14_f((m_value & swi14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi15() const -> swi15_f {return swi15_f((m_value & swi15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi16() const -> swi16_f {return swi16_f((m_value & swi16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi18() const -> swi18_f {return swi18_f((m_value & swi18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi19() const -> swi19_f {return swi19_f((m_value & swi19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi20() const -> swi20_f {return swi20_f((m_value & swi20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi21() const -> swi21_f {return swi21_f((m_value & swi21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi22() const -> swi22_f {return swi22_f((m_value & swi22_f::Mask) != 0);}

	template<std::size_t Index> struct swi_f { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8 || Index == 9 || Index == 10 || Index == 11 || Index == 12 || Index == 13 || Index == 14 || Index == 15 || Index == 16 || Index == 18 || Index == 19 || Index == 20 || Index == 21 || Index == 22); };
	template<std::size_t Index> using swi_v = typename swi_f<Index>::type;
	template<std::size_t Index> constexpr auto swi() const { return swi_v<Index>::get(*this); }

	constexpr swier1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(swier1_r other) const -> swier1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> swier1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Pending register
 */
class pr1_r {
public:

/**
 * Pending bit 0
 */
class pif0_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 1
 */
class pif1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 2
 */
class pif2_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 3
 */
class pif3_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 4
 */
class pif4_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 5
 */
class pif5_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 6
 */
class pif6_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 7
 */
class pif7_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 8
 */
class pif8_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pif8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 9
 */
class pif9_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pif9_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 10
 */
class pif10_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pif10_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 11
 */
class pif11_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pif11_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 12
 */
class pif12_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pif12_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 13
 */
class pif13_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pif13_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 14
 */
class pif14_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pif14_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 15
 */
class pif15_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pif15_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 16
 */
class pif16_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pif16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 18
 */
class pif18_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pif18_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 19
 */
class pif19_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pif19_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 20
 */
class pif20_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pif20_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 21
 */
class pif21_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pif21_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending bit 22
 */
class pif22_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pif22_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr1_r>() const {return ClearSet<pr1_r>(Mask, *this);}
	constexpr auto operator|(pr1_r other) const -> pr1_r { return static_cast<pr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr1_r> other) const -> ClearSet<pr1_r> {return ClearSet<pr1_r>(pr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pif0() const -> pif0_f {return pif0_f((m_value & pif0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif1() const -> pif1_f {return pif1_f((m_value & pif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif2() const -> pif2_f {return pif2_f((m_value & pif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif3() const -> pif3_f {return pif3_f((m_value & pif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif4() const -> pif4_f {return pif4_f((m_value & pif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif5() const -> pif5_f {return pif5_f((m_value & pif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif6() const -> pif6_f {return pif6_f((m_value & pif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif7() const -> pif7_f {return pif7_f((m_value & pif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif8() const -> pif8_f {return pif8_f((m_value & pif8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif9() const -> pif9_f {return pif9_f((m_value & pif9_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif10() const -> pif10_f {return pif10_f((m_value & pif10_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif11() const -> pif11_f {return pif11_f((m_value & pif11_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif12() const -> pif12_f {return pif12_f((m_value & pif12_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif13() const -> pif13_f {return pif13_f((m_value & pif13_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif14() const -> pif14_f {return pif14_f((m_value & pif14_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif15() const -> pif15_f {return pif15_f((m_value & pif15_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif16() const -> pif16_f {return pif16_f((m_value & pif16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif18() const -> pif18_f {return pif18_f((m_value & pif18_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif19() const -> pif19_f {return pif19_f((m_value & pif19_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif20() const -> pif20_f {return pif20_f((m_value & pif20_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif21() const -> pif21_f {return pif21_f((m_value & pif21_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif22() const -> pif22_f {return pif22_f((m_value & pif22_f::Mask) != 0);}

	template<std::size_t Index> struct pif_f { static_assert(Index == 0 || Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8 || Index == 9 || Index == 10 || Index == 11 || Index == 12 || Index == 13 || Index == 14 || Index == 15 || Index == 16 || Index == 18 || Index == 19 || Index == 20 || Index == 21 || Index == 22); };
	template<std::size_t Index> using pif_v = typename pif_f<Index>::type;
	template<std::size_t Index> constexpr auto pif() const { return pif_v<Index>::get(*this); }

	constexpr pr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pr1_r other) const -> pr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt mask register
 */
class imr2_r {
public:

/**
 * Interrupt Mask on external/internal line 32
 */
class im32_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im32_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 33
 */
class im33_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im33_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 34
 */
class im34_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im34_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 35
 */
class im35_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im35_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 36
 */
class im36_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im36_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 37
 */
class im37_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im37_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 38
 */
class im38_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im38_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 39
 */
class im39_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr im39_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 40
 */
class im40_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im40_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 41
 */
class im41_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im41_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 42
 */
class im42_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im42_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Interrupt Mask on external/internal line 43
 */
class im43_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr im43_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator imr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(imr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<imr2_r>() const {return ClearSet<imr2_r>(Mask, *this);}
	constexpr auto operator|(imr2_r other) const -> imr2_r { return static_cast<imr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<imr2_r> other) const -> ClearSet<imr2_r> {return ClearSet<imr2_r>(imr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto im32() const -> im32_f {return im32_f((m_value & im32_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im33() const -> im33_f {return im33_f((m_value & im33_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im34() const -> im34_f {return im34_f((m_value & im34_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im35() const -> im35_f {return im35_f((m_value & im35_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im36() const -> im36_f {return im36_f((m_value & im36_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im37() const -> im37_f {return im37_f((m_value & im37_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im38() const -> im38_f {return im38_f((m_value & im38_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im39() const -> im39_f {return im39_f((m_value & im39_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im40() const -> im40_f {return im40_f((m_value & im40_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im41() const -> im41_f {return im41_f((m_value & im41_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im42() const -> im42_f {return im42_f((m_value & im42_f::Mask) != 0);}
	[[nodiscard]] constexpr auto im43() const -> im43_f {return im43_f((m_value & im43_f::Mask) != 0);}

	template<std::size_t Index> struct im_f { static_assert(Index == 32 || Index == 33 || Index == 34 || Index == 35 || Index == 36 || Index == 37 || Index == 38 || Index == 39 || Index == 40 || Index == 41 || Index == 42 || Index == 43); };
	template<std::size_t Index> using im_v = typename im_f<Index>::type;
	template<std::size_t Index> constexpr auto im() const { return im_v<Index>::get(*this); }

	constexpr imr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(imr2_r other) const -> imr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> imr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0b11111111111111111111111110000111; // 4294967175 0xFFFFFF87

private:
	uint32_t m_value;
};
/**
 * Event mask register
 */
class emr2_r {
public:

/**
 * Event mask on external/internal line 32
 */
class em32_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em32_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr2_r>() const {return ClearSet<emr2_r>(Mask, *this);}
	constexpr auto operator|(emr2_r other) const -> emr2_r { return static_cast<emr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr2_r> other) const -> ClearSet<emr2_r> {return ClearSet<emr2_r>(emr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event mask on external/internal line 33
 */
class em33_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em33_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr2_r>() const {return ClearSet<emr2_r>(Mask, *this);}
	constexpr auto operator|(emr2_r other) const -> emr2_r { return static_cast<emr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr2_r> other) const -> ClearSet<emr2_r> {return ClearSet<emr2_r>(emr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event mask on external/internal line 34
 */
class em34_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em34_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr2_r>() const {return ClearSet<emr2_r>(Mask, *this);}
	constexpr auto operator|(emr2_r other) const -> emr2_r { return static_cast<emr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr2_r> other) const -> ClearSet<emr2_r> {return ClearSet<emr2_r>(emr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event mask on external/internal line 35
 */
class em35_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em35_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr2_r>() const {return ClearSet<emr2_r>(Mask, *this);}
	constexpr auto operator|(emr2_r other) const -> emr2_r { return static_cast<emr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr2_r> other) const -> ClearSet<emr2_r> {return ClearSet<emr2_r>(emr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event mask on external/internal line 36
 */
class em36_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em36_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr2_r>() const {return ClearSet<emr2_r>(Mask, *this);}
	constexpr auto operator|(emr2_r other) const -> emr2_r { return static_cast<emr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr2_r> other) const -> ClearSet<emr2_r> {return ClearSet<emr2_r>(emr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event mask on external/internal line 37
 */
class em37_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em37_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr2_r>() const {return ClearSet<emr2_r>(Mask, *this);}
	constexpr auto operator|(emr2_r other) const -> emr2_r { return static_cast<emr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr2_r> other) const -> ClearSet<emr2_r> {return ClearSet<emr2_r>(emr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event mask on external/internal line 38
 */
class em38_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em38_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr2_r>() const {return ClearSet<emr2_r>(Mask, *this);}
	constexpr auto operator|(emr2_r other) const -> emr2_r { return static_cast<emr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr2_r> other) const -> ClearSet<emr2_r> {return ClearSet<emr2_r>(emr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event mask on external/internal line 39
 */
class em39_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr em39_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr2_r>() const {return ClearSet<emr2_r>(Mask, *this);}
	constexpr auto operator|(emr2_r other) const -> emr2_r { return static_cast<emr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr2_r> other) const -> ClearSet<emr2_r> {return ClearSet<emr2_r>(emr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event mask on external/internal line 40
 */
class em40_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr em40_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator emr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(emr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<emr2_r>() const {return ClearSet<emr2_r>(Mask, *this);}
	constexpr auto operator|(emr2_r other) const -> emr2_r { return static_cast<emr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<emr2_r> other) const -> ClearSet<emr2_r> {return ClearSet<emr2_r>(emr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto em32() const -> em32_f {return em32_f((m_value & em32_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em33() const -> em33_f {return em33_f((m_value & em33_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em34() const -> em34_f {return em34_f((m_value & em34_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em35() const -> em35_f {return em35_f((m_value & em35_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em36() const -> em36_f {return em36_f((m_value & em36_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em37() const -> em37_f {return em37_f((m_value & em37_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em38() const -> em38_f {return em38_f((m_value & em38_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em39() const -> em39_f {return em39_f((m_value & em39_f::Mask) != 0);}
	[[nodiscard]] constexpr auto em40() const -> em40_f {return em40_f((m_value & em40_f::Mask) != 0);}

	template<std::size_t Index> struct em_f { static_assert(Index == 32 || Index == 33 || Index == 34 || Index == 35 || Index == 36 || Index == 37 || Index == 38 || Index == 39 || Index == 40); };
	template<std::size_t Index> using em_v = typename em_f<Index>::type;
	template<std::size_t Index> constexpr auto em() const { return em_v<Index>::get(*this); }

	constexpr emr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(emr2_r other) const -> emr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> emr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Rising Trigger selection register
 */
class rtsr2_r {
public:

/**
 * Rising trigger event configuration bit of line 32
 */
class rt32_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt32_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr2_r>() const {return ClearSet<rtsr2_r>(Mask, *this);}
	constexpr auto operator|(rtsr2_r other) const -> rtsr2_r { return static_cast<rtsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr2_r> other) const -> ClearSet<rtsr2_r> {return ClearSet<rtsr2_r>(rtsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration bit of line 32
 */
class rt33_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt33_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr2_r>() const {return ClearSet<rtsr2_r>(Mask, *this);}
	constexpr auto operator|(rtsr2_r other) const -> rtsr2_r { return static_cast<rtsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr2_r> other) const -> ClearSet<rtsr2_r> {return ClearSet<rtsr2_r>(rtsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration bit of line 38
 */
class rt38_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt38_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr2_r>() const {return ClearSet<rtsr2_r>(Mask, *this);}
	constexpr auto operator|(rtsr2_r other) const -> rtsr2_r { return static_cast<rtsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr2_r> other) const -> ClearSet<rtsr2_r> {return ClearSet<rtsr2_r>(rtsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration bit of line 39
 */
class rt39_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rt39_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr2_r>() const {return ClearSet<rtsr2_r>(Mask, *this);}
	constexpr auto operator|(rtsr2_r other) const -> rtsr2_r { return static_cast<rtsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr2_r> other) const -> ClearSet<rtsr2_r> {return ClearSet<rtsr2_r>(rtsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration bit of line 40
 */
class rt40_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rt40_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr2_r>() const {return ClearSet<rtsr2_r>(Mask, *this);}
	constexpr auto operator|(rtsr2_r other) const -> rtsr2_r { return static_cast<rtsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr2_r> other) const -> ClearSet<rtsr2_r> {return ClearSet<rtsr2_r>(rtsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Rising trigger event configuration bit of line 41
 */
class rt41_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rt41_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rtsr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rtsr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtsr2_r>() const {return ClearSet<rtsr2_r>(Mask, *this);}
	constexpr auto operator|(rtsr2_r other) const -> rtsr2_r { return static_cast<rtsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtsr2_r> other) const -> ClearSet<rtsr2_r> {return ClearSet<rtsr2_r>(rtsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rt32() const -> rt32_f {return rt32_f((m_value & rt32_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt33() const -> rt33_f {return rt33_f((m_value & rt33_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt38() const -> rt38_f {return rt38_f((m_value & rt38_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt39() const -> rt39_f {return rt39_f((m_value & rt39_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt40() const -> rt40_f {return rt40_f((m_value & rt40_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rt41() const -> rt41_f {return rt41_f((m_value & rt41_f::Mask) != 0);}

	template<std::size_t Index> struct rt_f { static_assert(Index == 32 || Index == 33 || Index == 38 || Index == 39 || Index == 40 || Index == 41); };
	template<std::size_t Index> using rt_v = typename rt_f<Index>::type;
	template<std::size_t Index> constexpr auto rt() const { return rt_v<Index>::get(*this); }

	constexpr rtsr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rtsr2_r other) const -> rtsr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rtsr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Falling Trigger selection register
 */
class ftsr2_r {
public:

/**
 * Falling trigger event configuration bit of line 35
 */
class ft35_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft35_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr2_r>() const {return ClearSet<ftsr2_r>(Mask, *this);}
	constexpr auto operator|(ftsr2_r other) const -> ftsr2_r { return static_cast<ftsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr2_r> other) const -> ClearSet<ftsr2_r> {return ClearSet<ftsr2_r>(ftsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration bit of line 36
 */
class ft36_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft36_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr2_r>() const {return ClearSet<ftsr2_r>(Mask, *this);}
	constexpr auto operator|(ftsr2_r other) const -> ftsr2_r { return static_cast<ftsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr2_r> other) const -> ClearSet<ftsr2_r> {return ClearSet<ftsr2_r>(ftsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration bit of line 37
 */
class ft37_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft37_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr2_r>() const {return ClearSet<ftsr2_r>(Mask, *this);}
	constexpr auto operator|(ftsr2_r other) const -> ftsr2_r { return static_cast<ftsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr2_r> other) const -> ClearSet<ftsr2_r> {return ClearSet<ftsr2_r>(ftsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Falling trigger event configuration bit of line 38
 */
class ft38_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ft38_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ftsr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ftsr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ftsr2_r>() const {return ClearSet<ftsr2_r>(Mask, *this);}
	constexpr auto operator|(ftsr2_r other) const -> ftsr2_r { return static_cast<ftsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ftsr2_r> other) const -> ClearSet<ftsr2_r> {return ClearSet<ftsr2_r>(ftsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ft35() const -> ft35_f {return ft35_f((m_value & ft35_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft36() const -> ft36_f {return ft36_f((m_value & ft36_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft37() const -> ft37_f {return ft37_f((m_value & ft37_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ft38() const -> ft38_f {return ft38_f((m_value & ft38_f::Mask) != 0);}

	template<std::size_t Index> struct ft_f { static_assert(Index == 35 || Index == 36 || Index == 37 || Index == 38); };
	template<std::size_t Index> using ft_v = typename ft_f<Index>::type;
	template<std::size_t Index> constexpr auto ft() const { return ft_v<Index>::get(*this); }

	constexpr ftsr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ftsr2_r other) const -> ftsr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ftsr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Software interrupt event register
 */
class swier2_r {
public:

/**
 * Software interrupt on line 35
 */
class swi35_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi35_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier2_r>() const {return ClearSet<swier2_r>(Mask, *this);}
	constexpr auto operator|(swier2_r other) const -> swier2_r { return static_cast<swier2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier2_r> other) const -> ClearSet<swier2_r> {return ClearSet<swier2_r>(swier2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software interrupt on line 36
 */
class swi36_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi36_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier2_r>() const {return ClearSet<swier2_r>(Mask, *this);}
	constexpr auto operator|(swier2_r other) const -> swier2_r { return static_cast<swier2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier2_r> other) const -> ClearSet<swier2_r> {return ClearSet<swier2_r>(swier2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software interrupt on line 37
 */
class swi37_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi37_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier2_r>() const {return ClearSet<swier2_r>(Mask, *this);}
	constexpr auto operator|(swier2_r other) const -> swier2_r { return static_cast<swier2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier2_r> other) const -> ClearSet<swier2_r> {return ClearSet<swier2_r>(swier2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Software interrupt on line 38
 */
class swi38_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swi38_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator swier2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(swier2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<swier2_r>() const {return ClearSet<swier2_r>(Mask, *this);}
	constexpr auto operator|(swier2_r other) const -> swier2_r { return static_cast<swier2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<swier2_r> other) const -> ClearSet<swier2_r> {return ClearSet<swier2_r>(swier2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto swi35() const -> swi35_f {return swi35_f((m_value & swi35_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi36() const -> swi36_f {return swi36_f((m_value & swi36_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi37() const -> swi37_f {return swi37_f((m_value & swi37_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swi38() const -> swi38_f {return swi38_f((m_value & swi38_f::Mask) != 0);}

	template<std::size_t Index> struct swi_f { static_assert(Index == 35 || Index == 36 || Index == 37 || Index == 38); };
	template<std::size_t Index> using swi_v = typename swi_f<Index>::type;
	template<std::size_t Index> constexpr auto swi() const { return swi_v<Index>::get(*this); }

	constexpr swier2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(swier2_r other) const -> swier2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> swier2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Pending register
 */
class pr2_r {
public:

/**
 * Pending interrupt flag on line 35
 */
class pif35_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif35_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr2_r>() const {return ClearSet<pr2_r>(Mask, *this);}
	constexpr auto operator|(pr2_r other) const -> pr2_r { return static_cast<pr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr2_r> other) const -> ClearSet<pr2_r> {return ClearSet<pr2_r>(pr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending interrupt flag on line 36
 */
class pif36_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif36_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr2_r>() const {return ClearSet<pr2_r>(Mask, *this);}
	constexpr auto operator|(pr2_r other) const -> pr2_r { return static_cast<pr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr2_r> other) const -> ClearSet<pr2_r> {return ClearSet<pr2_r>(pr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending interrupt flag on line 37
 */
class pif37_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif37_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr2_r>() const {return ClearSet<pr2_r>(Mask, *this);}
	constexpr auto operator|(pr2_r other) const -> pr2_r { return static_cast<pr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr2_r> other) const -> ClearSet<pr2_r> {return ClearSet<pr2_r>(pr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Pending interrupt flag on line 38
 */
class pif38_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pif38_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pr2_r>() const {return ClearSet<pr2_r>(Mask, *this);}
	constexpr auto operator|(pr2_r other) const -> pr2_r { return static_cast<pr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pr2_r> other) const -> ClearSet<pr2_r> {return ClearSet<pr2_r>(pr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pif35() const -> pif35_f {return pif35_f((m_value & pif35_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif36() const -> pif36_f {return pif36_f((m_value & pif36_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif37() const -> pif37_f {return pif37_f((m_value & pif37_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pif38() const -> pif38_f {return pif38_f((m_value & pif38_f::Mask) != 0);}

	template<std::size_t Index> struct pif_f { static_assert(Index == 35 || Index == 36 || Index == 37 || Index == 38); };
	template<std::size_t Index> using pif_v = typename pif_f<Index>::type;
	template<std::size_t Index> constexpr auto pif() const { return pif_v<Index>::get(*this); }

	constexpr pr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pr2_r other) const -> pr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct imr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using imr_v = typename imr_r<Index>::type;
	template<std::size_t Index> constexpr auto& imr() { }

	template<std::size_t Index> struct emr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using emr_v = typename emr_r<Index>::type;
	template<std::size_t Index> constexpr auto& emr() { }

	template<std::size_t Index> struct rtsr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using rtsr_v = typename rtsr_r<Index>::type;
	template<std::size_t Index> constexpr auto& rtsr() { }

	template<std::size_t Index> struct ftsr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using ftsr_v = typename ftsr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ftsr() { }

	template<std::size_t Index> struct swier_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using swier_v = typename swier_r<Index>::type;
	template<std::size_t Index> constexpr auto& swier() { }

	template<std::size_t Index> struct pr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using pr_v = typename pr_r<Index>::type;
	template<std::size_t Index> constexpr auto& pr() { }

	Memory<uint32_t,imr1_r> imr1;
	Memory<uint32_t,emr1_r> emr1;
	Memory<uint32_t,rtsr1_r> rtsr1;
	Memory<uint32_t,ftsr1_r> ftsr1;
	Memory<uint32_t,swier1_r> swier1;
	Memory<uint32_t,pr1_r> pr1;
	Padding<8> _p24;
	Memory<uint32_t,imr2_r> imr2;
	Memory<uint32_t,emr2_r> emr2;
	Memory<uint32_t,rtsr2_r> rtsr2;
	Memory<uint32_t,ftsr2_r> ftsr2;
	Memory<uint32_t,swier2_r> swier2;
	Memory<uint32_t,pr2_r> pr2;
};

template<> struct exti_p::imr1_r::im_f<0> { using type = exti_p::imr1_r::im0_f; };
template<> struct exti_p::imr1_r::im_f<1> { using type = exti_p::imr1_r::im1_f; };
template<> struct exti_p::imr1_r::im_f<2> { using type = exti_p::imr1_r::im2_f; };
template<> struct exti_p::imr1_r::im_f<3> { using type = exti_p::imr1_r::im3_f; };
template<> struct exti_p::imr1_r::im_f<4> { using type = exti_p::imr1_r::im4_f; };
template<> struct exti_p::imr1_r::im_f<5> { using type = exti_p::imr1_r::im5_f; };
template<> struct exti_p::imr1_r::im_f<6> { using type = exti_p::imr1_r::im6_f; };
template<> struct exti_p::imr1_r::im_f<7> { using type = exti_p::imr1_r::im7_f; };
template<> struct exti_p::imr1_r::im_f<8> { using type = exti_p::imr1_r::im8_f; };
template<> struct exti_p::imr1_r::im_f<9> { using type = exti_p::imr1_r::im9_f; };
template<> struct exti_p::imr1_r::im_f<10> { using type = exti_p::imr1_r::im10_f; };
template<> struct exti_p::imr1_r::im_f<11> { using type = exti_p::imr1_r::im11_f; };
template<> struct exti_p::imr1_r::im_f<12> { using type = exti_p::imr1_r::im12_f; };
template<> struct exti_p::imr1_r::im_f<13> { using type = exti_p::imr1_r::im13_f; };
template<> struct exti_p::imr1_r::im_f<14> { using type = exti_p::imr1_r::im14_f; };
template<> struct exti_p::imr1_r::im_f<15> { using type = exti_p::imr1_r::im15_f; };
template<> struct exti_p::imr1_r::im_f<16> { using type = exti_p::imr1_r::im16_f; };
template<> struct exti_p::imr1_r::im_f<17> { using type = exti_p::imr1_r::im17_f; };
template<> struct exti_p::imr1_r::im_f<18> { using type = exti_p::imr1_r::im18_f; };
template<> struct exti_p::imr1_r::im_f<19> { using type = exti_p::imr1_r::im19_f; };
template<> struct exti_p::imr1_r::im_f<20> { using type = exti_p::imr1_r::im20_f; };
template<> struct exti_p::imr1_r::im_f<21> { using type = exti_p::imr1_r::im21_f; };
template<> struct exti_p::imr1_r::im_f<22> { using type = exti_p::imr1_r::im22_f; };
template<> struct exti_p::imr1_r::im_f<23> { using type = exti_p::imr1_r::im23_f; };
template<> struct exti_p::imr1_r::im_f<24> { using type = exti_p::imr1_r::im24_f; };
template<> struct exti_p::imr1_r::im_f<25> { using type = exti_p::imr1_r::im25_f; };
template<> struct exti_p::imr1_r::im_f<26> { using type = exti_p::imr1_r::im26_f; };
template<> struct exti_p::imr1_r::im_f<27> { using type = exti_p::imr1_r::im27_f; };
template<> struct exti_p::imr1_r::im_f<28> { using type = exti_p::imr1_r::im28_f; };
template<> struct exti_p::imr1_r::im_f<29> { using type = exti_p::imr1_r::im29_f; };
template<> struct exti_p::imr1_r::im_f<30> { using type = exti_p::imr1_r::im30_f; };
template<> struct exti_p::imr1_r::im_f<31> { using type = exti_p::imr1_r::im31_f; };

template<> struct exti_p::emr1_r::em_f<0> { using type = exti_p::emr1_r::em0_f; };
template<> struct exti_p::emr1_r::em_f<1> { using type = exti_p::emr1_r::em1_f; };
template<> struct exti_p::emr1_r::em_f<2> { using type = exti_p::emr1_r::em2_f; };
template<> struct exti_p::emr1_r::em_f<3> { using type = exti_p::emr1_r::em3_f; };
template<> struct exti_p::emr1_r::em_f<4> { using type = exti_p::emr1_r::em4_f; };
template<> struct exti_p::emr1_r::em_f<5> { using type = exti_p::emr1_r::em5_f; };
template<> struct exti_p::emr1_r::em_f<6> { using type = exti_p::emr1_r::em6_f; };
template<> struct exti_p::emr1_r::em_f<7> { using type = exti_p::emr1_r::em7_f; };
template<> struct exti_p::emr1_r::em_f<8> { using type = exti_p::emr1_r::em8_f; };
template<> struct exti_p::emr1_r::em_f<9> { using type = exti_p::emr1_r::em9_f; };
template<> struct exti_p::emr1_r::em_f<10> { using type = exti_p::emr1_r::em10_f; };
template<> struct exti_p::emr1_r::em_f<11> { using type = exti_p::emr1_r::em11_f; };
template<> struct exti_p::emr1_r::em_f<12> { using type = exti_p::emr1_r::em12_f; };
template<> struct exti_p::emr1_r::em_f<13> { using type = exti_p::emr1_r::em13_f; };
template<> struct exti_p::emr1_r::em_f<14> { using type = exti_p::emr1_r::em14_f; };
template<> struct exti_p::emr1_r::em_f<15> { using type = exti_p::emr1_r::em15_f; };
template<> struct exti_p::emr1_r::em_f<16> { using type = exti_p::emr1_r::em16_f; };
template<> struct exti_p::emr1_r::em_f<17> { using type = exti_p::emr1_r::em17_f; };
template<> struct exti_p::emr1_r::em_f<18> { using type = exti_p::emr1_r::em18_f; };
template<> struct exti_p::emr1_r::em_f<19> { using type = exti_p::emr1_r::em19_f; };
template<> struct exti_p::emr1_r::em_f<20> { using type = exti_p::emr1_r::em20_f; };
template<> struct exti_p::emr1_r::em_f<21> { using type = exti_p::emr1_r::em21_f; };
template<> struct exti_p::emr1_r::em_f<22> { using type = exti_p::emr1_r::em22_f; };
template<> struct exti_p::emr1_r::em_f<23> { using type = exti_p::emr1_r::em23_f; };
template<> struct exti_p::emr1_r::em_f<24> { using type = exti_p::emr1_r::em24_f; };
template<> struct exti_p::emr1_r::em_f<25> { using type = exti_p::emr1_r::em25_f; };
template<> struct exti_p::emr1_r::em_f<26> { using type = exti_p::emr1_r::em26_f; };
template<> struct exti_p::emr1_r::em_f<27> { using type = exti_p::emr1_r::em27_f; };
template<> struct exti_p::emr1_r::em_f<28> { using type = exti_p::emr1_r::em28_f; };
template<> struct exti_p::emr1_r::em_f<29> { using type = exti_p::emr1_r::em29_f; };
template<> struct exti_p::emr1_r::em_f<30> { using type = exti_p::emr1_r::em30_f; };
template<> struct exti_p::emr1_r::em_f<31> { using type = exti_p::emr1_r::em31_f; };

template<> struct exti_p::rtsr1_r::rt_f<0> { using type = exti_p::rtsr1_r::rt0_f; };
template<> struct exti_p::rtsr1_r::rt_f<1> { using type = exti_p::rtsr1_r::rt1_f; };
template<> struct exti_p::rtsr1_r::rt_f<2> { using type = exti_p::rtsr1_r::rt2_f; };
template<> struct exti_p::rtsr1_r::rt_f<3> { using type = exti_p::rtsr1_r::rt3_f; };
template<> struct exti_p::rtsr1_r::rt_f<4> { using type = exti_p::rtsr1_r::rt4_f; };
template<> struct exti_p::rtsr1_r::rt_f<5> { using type = exti_p::rtsr1_r::rt5_f; };
template<> struct exti_p::rtsr1_r::rt_f<6> { using type = exti_p::rtsr1_r::rt6_f; };
template<> struct exti_p::rtsr1_r::rt_f<7> { using type = exti_p::rtsr1_r::rt7_f; };
template<> struct exti_p::rtsr1_r::rt_f<8> { using type = exti_p::rtsr1_r::rt8_f; };
template<> struct exti_p::rtsr1_r::rt_f<9> { using type = exti_p::rtsr1_r::rt9_f; };
template<> struct exti_p::rtsr1_r::rt_f<10> { using type = exti_p::rtsr1_r::rt10_f; };
template<> struct exti_p::rtsr1_r::rt_f<11> { using type = exti_p::rtsr1_r::rt11_f; };
template<> struct exti_p::rtsr1_r::rt_f<12> { using type = exti_p::rtsr1_r::rt12_f; };
template<> struct exti_p::rtsr1_r::rt_f<13> { using type = exti_p::rtsr1_r::rt13_f; };
template<> struct exti_p::rtsr1_r::rt_f<14> { using type = exti_p::rtsr1_r::rt14_f; };
template<> struct exti_p::rtsr1_r::rt_f<15> { using type = exti_p::rtsr1_r::rt15_f; };
template<> struct exti_p::rtsr1_r::rt_f<16> { using type = exti_p::rtsr1_r::rt16_f; };
template<> struct exti_p::rtsr1_r::rt_f<18> { using type = exti_p::rtsr1_r::rt18_f; };
template<> struct exti_p::rtsr1_r::rt_f<19> { using type = exti_p::rtsr1_r::rt19_f; };
template<> struct exti_p::rtsr1_r::rt_f<20> { using type = exti_p::rtsr1_r::rt20_f; };
template<> struct exti_p::rtsr1_r::rt_f<21> { using type = exti_p::rtsr1_r::rt21_f; };
template<> struct exti_p::rtsr1_r::rt_f<22> { using type = exti_p::rtsr1_r::rt22_f; };

template<> struct exti_p::ftsr1_r::ft_f<0> { using type = exti_p::ftsr1_r::ft0_f; };
template<> struct exti_p::ftsr1_r::ft_f<1> { using type = exti_p::ftsr1_r::ft1_f; };
template<> struct exti_p::ftsr1_r::ft_f<2> { using type = exti_p::ftsr1_r::ft2_f; };
template<> struct exti_p::ftsr1_r::ft_f<3> { using type = exti_p::ftsr1_r::ft3_f; };
template<> struct exti_p::ftsr1_r::ft_f<4> { using type = exti_p::ftsr1_r::ft4_f; };
template<> struct exti_p::ftsr1_r::ft_f<5> { using type = exti_p::ftsr1_r::ft5_f; };
template<> struct exti_p::ftsr1_r::ft_f<6> { using type = exti_p::ftsr1_r::ft6_f; };
template<> struct exti_p::ftsr1_r::ft_f<7> { using type = exti_p::ftsr1_r::ft7_f; };
template<> struct exti_p::ftsr1_r::ft_f<8> { using type = exti_p::ftsr1_r::ft8_f; };
template<> struct exti_p::ftsr1_r::ft_f<9> { using type = exti_p::ftsr1_r::ft9_f; };
template<> struct exti_p::ftsr1_r::ft_f<10> { using type = exti_p::ftsr1_r::ft10_f; };
template<> struct exti_p::ftsr1_r::ft_f<11> { using type = exti_p::ftsr1_r::ft11_f; };
template<> struct exti_p::ftsr1_r::ft_f<12> { using type = exti_p::ftsr1_r::ft12_f; };
template<> struct exti_p::ftsr1_r::ft_f<13> { using type = exti_p::ftsr1_r::ft13_f; };
template<> struct exti_p::ftsr1_r::ft_f<14> { using type = exti_p::ftsr1_r::ft14_f; };
template<> struct exti_p::ftsr1_r::ft_f<15> { using type = exti_p::ftsr1_r::ft15_f; };
template<> struct exti_p::ftsr1_r::ft_f<16> { using type = exti_p::ftsr1_r::ft16_f; };
template<> struct exti_p::ftsr1_r::ft_f<18> { using type = exti_p::ftsr1_r::ft18_f; };
template<> struct exti_p::ftsr1_r::ft_f<19> { using type = exti_p::ftsr1_r::ft19_f; };
template<> struct exti_p::ftsr1_r::ft_f<20> { using type = exti_p::ftsr1_r::ft20_f; };
template<> struct exti_p::ftsr1_r::ft_f<21> { using type = exti_p::ftsr1_r::ft21_f; };
template<> struct exti_p::ftsr1_r::ft_f<22> { using type = exti_p::ftsr1_r::ft22_f; };

template<> struct exti_p::swier1_r::swi_f<0> { using type = exti_p::swier1_r::swi0_f; };
template<> struct exti_p::swier1_r::swi_f<1> { using type = exti_p::swier1_r::swi1_f; };
template<> struct exti_p::swier1_r::swi_f<2> { using type = exti_p::swier1_r::swi2_f; };
template<> struct exti_p::swier1_r::swi_f<3> { using type = exti_p::swier1_r::swi3_f; };
template<> struct exti_p::swier1_r::swi_f<4> { using type = exti_p::swier1_r::swi4_f; };
template<> struct exti_p::swier1_r::swi_f<5> { using type = exti_p::swier1_r::swi5_f; };
template<> struct exti_p::swier1_r::swi_f<6> { using type = exti_p::swier1_r::swi6_f; };
template<> struct exti_p::swier1_r::swi_f<7> { using type = exti_p::swier1_r::swi7_f; };
template<> struct exti_p::swier1_r::swi_f<8> { using type = exti_p::swier1_r::swi8_f; };
template<> struct exti_p::swier1_r::swi_f<9> { using type = exti_p::swier1_r::swi9_f; };
template<> struct exti_p::swier1_r::swi_f<10> { using type = exti_p::swier1_r::swi10_f; };
template<> struct exti_p::swier1_r::swi_f<11> { using type = exti_p::swier1_r::swi11_f; };
template<> struct exti_p::swier1_r::swi_f<12> { using type = exti_p::swier1_r::swi12_f; };
template<> struct exti_p::swier1_r::swi_f<13> { using type = exti_p::swier1_r::swi13_f; };
template<> struct exti_p::swier1_r::swi_f<14> { using type = exti_p::swier1_r::swi14_f; };
template<> struct exti_p::swier1_r::swi_f<15> { using type = exti_p::swier1_r::swi15_f; };
template<> struct exti_p::swier1_r::swi_f<16> { using type = exti_p::swier1_r::swi16_f; };
template<> struct exti_p::swier1_r::swi_f<18> { using type = exti_p::swier1_r::swi18_f; };
template<> struct exti_p::swier1_r::swi_f<19> { using type = exti_p::swier1_r::swi19_f; };
template<> struct exti_p::swier1_r::swi_f<20> { using type = exti_p::swier1_r::swi20_f; };
template<> struct exti_p::swier1_r::swi_f<21> { using type = exti_p::swier1_r::swi21_f; };
template<> struct exti_p::swier1_r::swi_f<22> { using type = exti_p::swier1_r::swi22_f; };

template<> struct exti_p::pr1_r::pif_f<0> { using type = exti_p::pr1_r::pif0_f; };
template<> struct exti_p::pr1_r::pif_f<1> { using type = exti_p::pr1_r::pif1_f; };
template<> struct exti_p::pr1_r::pif_f<2> { using type = exti_p::pr1_r::pif2_f; };
template<> struct exti_p::pr1_r::pif_f<3> { using type = exti_p::pr1_r::pif3_f; };
template<> struct exti_p::pr1_r::pif_f<4> { using type = exti_p::pr1_r::pif4_f; };
template<> struct exti_p::pr1_r::pif_f<5> { using type = exti_p::pr1_r::pif5_f; };
template<> struct exti_p::pr1_r::pif_f<6> { using type = exti_p::pr1_r::pif6_f; };
template<> struct exti_p::pr1_r::pif_f<7> { using type = exti_p::pr1_r::pif7_f; };
template<> struct exti_p::pr1_r::pif_f<8> { using type = exti_p::pr1_r::pif8_f; };
template<> struct exti_p::pr1_r::pif_f<9> { using type = exti_p::pr1_r::pif9_f; };
template<> struct exti_p::pr1_r::pif_f<10> { using type = exti_p::pr1_r::pif10_f; };
template<> struct exti_p::pr1_r::pif_f<11> { using type = exti_p::pr1_r::pif11_f; };
template<> struct exti_p::pr1_r::pif_f<12> { using type = exti_p::pr1_r::pif12_f; };
template<> struct exti_p::pr1_r::pif_f<13> { using type = exti_p::pr1_r::pif13_f; };
template<> struct exti_p::pr1_r::pif_f<14> { using type = exti_p::pr1_r::pif14_f; };
template<> struct exti_p::pr1_r::pif_f<15> { using type = exti_p::pr1_r::pif15_f; };
template<> struct exti_p::pr1_r::pif_f<16> { using type = exti_p::pr1_r::pif16_f; };
template<> struct exti_p::pr1_r::pif_f<18> { using type = exti_p::pr1_r::pif18_f; };
template<> struct exti_p::pr1_r::pif_f<19> { using type = exti_p::pr1_r::pif19_f; };
template<> struct exti_p::pr1_r::pif_f<20> { using type = exti_p::pr1_r::pif20_f; };
template<> struct exti_p::pr1_r::pif_f<21> { using type = exti_p::pr1_r::pif21_f; };
template<> struct exti_p::pr1_r::pif_f<22> { using type = exti_p::pr1_r::pif22_f; };

template<> struct exti_p::imr2_r::im_f<32> { using type = exti_p::imr2_r::im32_f; };
template<> struct exti_p::imr2_r::im_f<33> { using type = exti_p::imr2_r::im33_f; };
template<> struct exti_p::imr2_r::im_f<34> { using type = exti_p::imr2_r::im34_f; };
template<> struct exti_p::imr2_r::im_f<35> { using type = exti_p::imr2_r::im35_f; };
template<> struct exti_p::imr2_r::im_f<36> { using type = exti_p::imr2_r::im36_f; };
template<> struct exti_p::imr2_r::im_f<37> { using type = exti_p::imr2_r::im37_f; };
template<> struct exti_p::imr2_r::im_f<38> { using type = exti_p::imr2_r::im38_f; };
template<> struct exti_p::imr2_r::im_f<39> { using type = exti_p::imr2_r::im39_f; };
template<> struct exti_p::imr2_r::im_f<40> { using type = exti_p::imr2_r::im40_f; };
template<> struct exti_p::imr2_r::im_f<41> { using type = exti_p::imr2_r::im41_f; };
template<> struct exti_p::imr2_r::im_f<42> { using type = exti_p::imr2_r::im42_f; };
template<> struct exti_p::imr2_r::im_f<43> { using type = exti_p::imr2_r::im43_f; };

template<> struct exti_p::emr2_r::em_f<32> { using type = exti_p::emr2_r::em32_f; };
template<> struct exti_p::emr2_r::em_f<33> { using type = exti_p::emr2_r::em33_f; };
template<> struct exti_p::emr2_r::em_f<34> { using type = exti_p::emr2_r::em34_f; };
template<> struct exti_p::emr2_r::em_f<35> { using type = exti_p::emr2_r::em35_f; };
template<> struct exti_p::emr2_r::em_f<36> { using type = exti_p::emr2_r::em36_f; };
template<> struct exti_p::emr2_r::em_f<37> { using type = exti_p::emr2_r::em37_f; };
template<> struct exti_p::emr2_r::em_f<38> { using type = exti_p::emr2_r::em38_f; };
template<> struct exti_p::emr2_r::em_f<39> { using type = exti_p::emr2_r::em39_f; };
template<> struct exti_p::emr2_r::em_f<40> { using type = exti_p::emr2_r::em40_f; };

template<> struct exti_p::rtsr2_r::rt_f<32> { using type = exti_p::rtsr2_r::rt32_f; };
template<> struct exti_p::rtsr2_r::rt_f<33> { using type = exti_p::rtsr2_r::rt33_f; };
template<> struct exti_p::rtsr2_r::rt_f<38> { using type = exti_p::rtsr2_r::rt38_f; };
template<> struct exti_p::rtsr2_r::rt_f<39> { using type = exti_p::rtsr2_r::rt39_f; };
template<> struct exti_p::rtsr2_r::rt_f<40> { using type = exti_p::rtsr2_r::rt40_f; };
template<> struct exti_p::rtsr2_r::rt_f<41> { using type = exti_p::rtsr2_r::rt41_f; };

template<> struct exti_p::ftsr2_r::ft_f<35> { using type = exti_p::ftsr2_r::ft35_f; };
template<> struct exti_p::ftsr2_r::ft_f<36> { using type = exti_p::ftsr2_r::ft36_f; };
template<> struct exti_p::ftsr2_r::ft_f<37> { using type = exti_p::ftsr2_r::ft37_f; };
template<> struct exti_p::ftsr2_r::ft_f<38> { using type = exti_p::ftsr2_r::ft38_f; };

template<> struct exti_p::swier2_r::swi_f<35> { using type = exti_p::swier2_r::swi35_f; };
template<> struct exti_p::swier2_r::swi_f<36> { using type = exti_p::swier2_r::swi36_f; };
template<> struct exti_p::swier2_r::swi_f<37> { using type = exti_p::swier2_r::swi37_f; };
template<> struct exti_p::swier2_r::swi_f<38> { using type = exti_p::swier2_r::swi38_f; };

template<> struct exti_p::pr2_r::pif_f<35> { using type = exti_p::pr2_r::pif35_f; };
template<> struct exti_p::pr2_r::pif_f<36> { using type = exti_p::pr2_r::pif36_f; };
template<> struct exti_p::pr2_r::pif_f<37> { using type = exti_p::pr2_r::pif37_f; };
template<> struct exti_p::pr2_r::pif_f<38> { using type = exti_p::pr2_r::pif38_f; };

template<> constexpr auto& exti_p::imr<1>() { return imr1; }
template<> constexpr auto& exti_p::imr<2>() { return imr2; }

template<> struct exti_p::imr_r<1> { using type = exti_p::imr1_r; };
template<> struct exti_p::imr_r<2> { using type = exti_p::imr2_r; };

template<> constexpr auto& exti_p::emr<1>() { return emr1; }
template<> constexpr auto& exti_p::emr<2>() { return emr2; }

template<> struct exti_p::emr_r<1> { using type = exti_p::emr1_r; };
template<> struct exti_p::emr_r<2> { using type = exti_p::emr2_r; };

template<> constexpr auto& exti_p::rtsr<1>() { return rtsr1; }
template<> constexpr auto& exti_p::rtsr<2>() { return rtsr2; }

template<> struct exti_p::rtsr_r<1> { using type = exti_p::rtsr1_r; };
template<> struct exti_p::rtsr_r<2> { using type = exti_p::rtsr2_r; };

template<> constexpr auto& exti_p::ftsr<1>() { return ftsr1; }
template<> constexpr auto& exti_p::ftsr<2>() { return ftsr2; }

template<> struct exti_p::ftsr_r<1> { using type = exti_p::ftsr1_r; };
template<> struct exti_p::ftsr_r<2> { using type = exti_p::ftsr2_r; };

template<> constexpr auto& exti_p::swier<1>() { return swier1; }
template<> constexpr auto& exti_p::swier<2>() { return swier2; }

template<> struct exti_p::swier_r<1> { using type = exti_p::swier1_r; };
template<> struct exti_p::swier_r<2> { using type = exti_p::swier2_r; };

template<> constexpr auto& exti_p::pr<1>() { return pr1; }
template<> constexpr auto& exti_p::pr<2>() { return pr2; }

template<> struct exti_p::pr_r<1> { using type = exti_p::pr1_r; };
template<> struct exti_p::pr_r<2> { using type = exti_p::pr2_r; };

static_assert(std::is_standard_layout_v<exti_p>);
static_assert(offsetof(exti_p, imr1) == exti_p::imr1_r::Offset);
static_assert(offsetof(exti_p, emr1) == exti_p::emr1_r::Offset);
static_assert(offsetof(exti_p, rtsr1) == exti_p::rtsr1_r::Offset);
static_assert(offsetof(exti_p, ftsr1) == exti_p::ftsr1_r::Offset);
static_assert(offsetof(exti_p, swier1) == exti_p::swier1_r::Offset);
static_assert(offsetof(exti_p, pr1) == exti_p::pr1_r::Offset);
static_assert(offsetof(exti_p, imr2) == exti_p::imr2_r::Offset);
static_assert(offsetof(exti_p, emr2) == exti_p::emr2_r::Offset);
static_assert(offsetof(exti_p, rtsr2) == exti_p::rtsr2_r::Offset);
static_assert(offsetof(exti_p, ftsr2) == exti_p::ftsr2_r::Offset);
static_assert(offsetof(exti_p, swier2) == exti_p::swier2_r::Offset);
static_assert(offsetof(exti_p, pr2) == exti_p::pr2_r::Offset);

inline exti_p& exti = *reinterpret_cast<exti_p*>(0x40010400);

} // STM32G473XX

