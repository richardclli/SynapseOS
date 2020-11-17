#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * DMA controller
 */
class dma_p {
public:
/**
 * interrupt status register
 */
class isr_r {
public:

/**
 * TEIF8
 */
class teif8_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF8
 */
class htif8_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF8
 */
class tcif8_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF8
 */
class gif8_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gif8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF7
 */
class teif7_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF7
 */
class htif7_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF7
 */
class tcif7_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF7
 */
class gif7_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF6
 */
class teif6_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF6
 */
class htif6_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF6
 */
class tcif6_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF6
 */
class gif6_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF5
 */
class teif5_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF5
 */
class htif5_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF5
 */
class tcif5_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF5
 */
class gif5_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF4
 */
class teif4_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr teif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF4
 */
class htif4_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr htif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF4
 */
class tcif4_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tcif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF4
 */
class gif4_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr gif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF3
 */
class teif3_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr teif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF3
 */
class htif3_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr htif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF3
 */
class tcif3_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tcif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF3
 */
class gif3_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr gif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF2
 */
class teif2_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF2
 */
class htif2_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF2
 */
class tcif2_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF2
 */
class gif2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF1
 */
class teif1_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF1
 */
class htif1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF1
 */
class tcif1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF1
 */
class gif1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto teif8() const -> teif8_f {return teif8_f((m_value & teif8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif8() const -> htif8_f {return htif8_f((m_value & htif8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif8() const -> tcif8_f {return tcif8_f((m_value & tcif8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif8() const -> gif8_f {return gif8_f((m_value & gif8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif7() const -> teif7_f {return teif7_f((m_value & teif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif7() const -> htif7_f {return htif7_f((m_value & htif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif7() const -> tcif7_f {return tcif7_f((m_value & tcif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif7() const -> gif7_f {return gif7_f((m_value & gif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif6() const -> teif6_f {return teif6_f((m_value & teif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif6() const -> htif6_f {return htif6_f((m_value & htif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif6() const -> tcif6_f {return tcif6_f((m_value & tcif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif6() const -> gif6_f {return gif6_f((m_value & gif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif5() const -> teif5_f {return teif5_f((m_value & teif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif5() const -> htif5_f {return htif5_f((m_value & htif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif5() const -> tcif5_f {return tcif5_f((m_value & tcif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif5() const -> gif5_f {return gif5_f((m_value & gif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif4() const -> teif4_f {return teif4_f((m_value & teif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif4() const -> htif4_f {return htif4_f((m_value & htif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif4() const -> tcif4_f {return tcif4_f((m_value & tcif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif4() const -> gif4_f {return gif4_f((m_value & gif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif3() const -> teif3_f {return teif3_f((m_value & teif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif3() const -> htif3_f {return htif3_f((m_value & htif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif3() const -> tcif3_f {return tcif3_f((m_value & tcif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif3() const -> gif3_f {return gif3_f((m_value & gif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif2() const -> teif2_f {return teif2_f((m_value & teif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif2() const -> htif2_f {return htif2_f((m_value & htif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif2() const -> tcif2_f {return tcif2_f((m_value & tcif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif2() const -> gif2_f {return gif2_f((m_value & gif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif1() const -> teif1_f {return teif1_f((m_value & teif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif1() const -> htif1_f {return htif1_f((m_value & htif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif1() const -> tcif1_f {return tcif1_f((m_value & tcif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif1() const -> gif1_f {return gif1_f((m_value & gif1_f::Mask) != 0);}

	template<std::size_t Index> struct teif_f { static_assert(Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using teif_v = typename teif_f<Index>::type;
	template<std::size_t Index> constexpr auto teif() const { return teif_v<Index>::get(*this); }

	template<std::size_t Index> struct htif_f { static_assert(Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using htif_v = typename htif_f<Index>::type;
	template<std::size_t Index> constexpr auto htif() const { return htif_v<Index>::get(*this); }

	template<std::size_t Index> struct tcif_f { static_assert(Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using tcif_v = typename tcif_f<Index>::type;
	template<std::size_t Index> constexpr auto tcif() const { return tcif_v<Index>::get(*this); }

	template<std::size_t Index> struct gif_f { static_assert(Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using gif_v = typename gif_f<Index>::type;
	template<std::size_t Index> constexpr auto gif() const { return gif_v<Index>::get(*this); }

	constexpr isr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(isr_r other) const -> isr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> isr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA interrupt flag clear register
 */
class ifcr_r {
public:

/**
 * TEIF8
 */
class teif8_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF8
 */
class htif8_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF8
 */
class tcif8_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF8
 */
class gif8_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gif8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF7
 */
class teif7_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF7
 */
class htif7_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF7
 */
class tcif7_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF7
 */
class gif7_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gif7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF6
 */
class teif6_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF6
 */
class htif6_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF6
 */
class tcif6_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF6
 */
class gif6_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gif6_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF5
 */
class teif5_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF5
 */
class htif5_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr htif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF5
 */
class tcif5_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF5
 */
class gif5_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gif5_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF4
 */
class teif4_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr teif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF4
 */
class htif4_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr htif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF4
 */
class tcif4_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tcif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF4
 */
class gif4_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr gif4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF3
 */
class teif3_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr teif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF3
 */
class htif3_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr htif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF3
 */
class tcif3_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tcif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF3
 */
class gif3_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr gif3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF2
 */
class teif2_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF2
 */
class htif2_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF2
 */
class tcif2_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF2
 */
class gif2_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gif2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIF1
 */
class teif1_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIF1
 */
class htif1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIF1
 */
class tcif1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * GIF1
 */
class gif1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr gif1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ifcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ifcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ifcr_r>() const {return ClearSet<ifcr_r>(Mask, *this);}
	constexpr auto operator|(ifcr_r other) const -> ifcr_r { return static_cast<ifcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ifcr_r> other) const -> ClearSet<ifcr_r> {return ClearSet<ifcr_r>(ifcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto teif8() const -> teif8_f {return teif8_f((m_value & teif8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif8() const -> htif8_f {return htif8_f((m_value & htif8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif8() const -> tcif8_f {return tcif8_f((m_value & tcif8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif8() const -> gif8_f {return gif8_f((m_value & gif8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif7() const -> teif7_f {return teif7_f((m_value & teif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif7() const -> htif7_f {return htif7_f((m_value & htif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif7() const -> tcif7_f {return tcif7_f((m_value & tcif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif7() const -> gif7_f {return gif7_f((m_value & gif7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif6() const -> teif6_f {return teif6_f((m_value & teif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif6() const -> htif6_f {return htif6_f((m_value & htif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif6() const -> tcif6_f {return tcif6_f((m_value & tcif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif6() const -> gif6_f {return gif6_f((m_value & gif6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif5() const -> teif5_f {return teif5_f((m_value & teif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif5() const -> htif5_f {return htif5_f((m_value & htif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif5() const -> tcif5_f {return tcif5_f((m_value & tcif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif5() const -> gif5_f {return gif5_f((m_value & gif5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif4() const -> teif4_f {return teif4_f((m_value & teif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif4() const -> htif4_f {return htif4_f((m_value & htif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif4() const -> tcif4_f {return tcif4_f((m_value & tcif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif4() const -> gif4_f {return gif4_f((m_value & gif4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif3() const -> teif3_f {return teif3_f((m_value & teif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif3() const -> htif3_f {return htif3_f((m_value & htif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif3() const -> tcif3_f {return tcif3_f((m_value & tcif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif3() const -> gif3_f {return gif3_f((m_value & gif3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif2() const -> teif2_f {return teif2_f((m_value & teif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif2() const -> htif2_f {return htif2_f((m_value & htif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif2() const -> tcif2_f {return tcif2_f((m_value & tcif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif2() const -> gif2_f {return gif2_f((m_value & gif2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teif1() const -> teif1_f {return teif1_f((m_value & teif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htif1() const -> htif1_f {return htif1_f((m_value & htif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcif1() const -> tcif1_f {return tcif1_f((m_value & tcif1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gif1() const -> gif1_f {return gif1_f((m_value & gif1_f::Mask) != 0);}

	template<std::size_t Index> struct teif_f { static_assert(Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using teif_v = typename teif_f<Index>::type;
	template<std::size_t Index> constexpr auto teif() const { return teif_v<Index>::get(*this); }

	template<std::size_t Index> struct htif_f { static_assert(Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using htif_v = typename htif_f<Index>::type;
	template<std::size_t Index> constexpr auto htif() const { return htif_v<Index>::get(*this); }

	template<std::size_t Index> struct tcif_f { static_assert(Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using tcif_v = typename tcif_f<Index>::type;
	template<std::size_t Index> constexpr auto tcif() const { return tcif_v<Index>::get(*this); }

	template<std::size_t Index> struct gif_f { static_assert(Index == 8 || Index == 7 || Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using gif_v = typename gif_f<Index>::type;
	template<std::size_t Index> constexpr auto gif() const { return gif_v<Index>::get(*this); }

	constexpr ifcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ifcr_r other) const -> ifcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ifcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel 1 configuration register
 */
class ccr1_r {
public:

/**
 * channel enable
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIE
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIE
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIE
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DIR
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CIRC
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PINC
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MINC
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PSIZE
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MSIZE
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PL
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEM2MEM
 */
class mem2mem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mem2mem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto mem2mem() const -> mem2mem_f {return mem2mem_f((m_value & mem2mem_f::Mask) != 0);}

	constexpr ccr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr1_r other) const -> ccr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel 2 configuration register
 */
class ccr2_r {
public:

/**
 * channel enable
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIE
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIE
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIE
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DIR
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CIRC
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PINC
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MINC
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PSIZE
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MSIZE
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PL
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEM2MEM
 */
class mem2mem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mem2mem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto mem2mem() const -> mem2mem_f {return mem2mem_f((m_value & mem2mem_f::Mask) != 0);}

	constexpr ccr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr2_r other) const -> ccr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel 3 configuration register
 */
class ccr3_r {
public:

/**
 * channel enable
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIE
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIE
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIE
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DIR
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CIRC
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PINC
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MINC
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PSIZE
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MSIZE
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PL
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEM2MEM
 */
class mem2mem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mem2mem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto mem2mem() const -> mem2mem_f {return mem2mem_f((m_value & mem2mem_f::Mask) != 0);}

	constexpr ccr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr3_r other) const -> ccr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel 3 configuration register
 */
class ccr4_r {
public:

/**
 * channel enable
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIE
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIE
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIE
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DIR
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CIRC
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PINC
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MINC
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PSIZE
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MSIZE
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PL
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr4_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEM2MEM
 */
class mem2mem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mem2mem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr4_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr4_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto mem2mem() const -> mem2mem_f {return mem2mem_f((m_value & mem2mem_f::Mask) != 0);}

	constexpr ccr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr4_r other) const -> ccr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel 4 configuration register
 */
class ccr5_r {
public:

/**
 * channel enable
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIE
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIE
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIE
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DIR
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CIRC
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PINC
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MINC
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PSIZE
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr5_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr5_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MSIZE
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr5_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr5_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PL
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr5_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr5_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEM2MEM
 */
class mem2mem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mem2mem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto mem2mem() const -> mem2mem_f {return mem2mem_f((m_value & mem2mem_f::Mask) != 0);}

	constexpr ccr5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr5_r other) const -> ccr5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 88;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel 5 configuration register
 */
class ccr6_r {
public:

/**
 * channel enable
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr6_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr6_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIE
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr6_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr6_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIE
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr6_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr6_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIE
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr6_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr6_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DIR
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr6_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr6_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CIRC
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr6_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr6_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PINC
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr6_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr6_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MINC
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr6_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr6_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PSIZE
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr6_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr6_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MSIZE
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr6_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr6_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PL
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr6_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr6_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEM2MEM
 */
class mem2mem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mem2mem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr6_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr6_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto mem2mem() const -> mem2mem_f {return mem2mem_f((m_value & mem2mem_f::Mask) != 0);}

	constexpr ccr6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr6_r other) const -> ccr6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 108;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel 6 configuration register
 */
class ccr7_r {
public:

/**
 * channel enable
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr7_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr7_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIE
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr7_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr7_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIE
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr7_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr7_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIE
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr7_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr7_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DIR
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr7_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr7_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CIRC
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr7_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr7_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PINC
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr7_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr7_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MINC
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr7_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr7_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PSIZE
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr7_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr7_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MSIZE
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr7_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr7_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PL
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr7_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr7_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEM2MEM
 */
class mem2mem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mem2mem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr7_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr7_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr7_r>() const {return ClearSet<ccr7_r>(Mask, *this);}
	constexpr auto operator|(ccr7_r other) const -> ccr7_r { return static_cast<ccr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr7_r> other) const -> ClearSet<ccr7_r> {return ClearSet<ccr7_r>(ccr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto mem2mem() const -> mem2mem_f {return mem2mem_f((m_value & mem2mem_f::Mask) != 0);}

	constexpr ccr7_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr7_r other) const -> ccr7_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr7_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel 7 configuration register
 */
class ccr8_r {
public:

/**
 * channel enable
 */
class en_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr8_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr8_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCIE
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr8_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr8_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * HTIE
 */
class htie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr htie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr8_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr8_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TEIE
 */
class teie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr teie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr8_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr8_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DIR
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr8_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr8_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CIRC
 */
class circ_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr circ_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr8_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr8_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PINC
 */
class pinc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pinc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr8_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr8_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * MINC
 */
class minc_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr minc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr8_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr8_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PSIZE
 */
class psize_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr8_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr8_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MSIZE
 */
class msize_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr msize_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr8_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr8_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PL
 */
class pl_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccr8_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr8_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MEM2MEM
 */
class mem2mem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mem2mem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr8_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr8_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr8_r>() const {return ClearSet<ccr8_r>(Mask, *this);}
	constexpr auto operator|(ccr8_r other) const -> ccr8_r { return static_cast<ccr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr8_r> other) const -> ClearSet<ccr8_r> {return ClearSet<ccr8_r>(ccr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en() const -> en_f {return en_f((m_value & en_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto htie() const -> htie_f {return htie_f((m_value & htie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teie() const -> teie_f {return teie_f((m_value & teie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto circ() const -> circ_f {return circ_f((m_value & circ_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pinc() const -> pinc_f {return pinc_f((m_value & pinc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto minc() const -> minc_f {return minc_f((m_value & minc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto psize() const -> psize_f {return psize_f(static_cast<uint8_t>(m_value >> psize_f::Offset));}
	[[nodiscard]] constexpr auto msize() const -> msize_f {return msize_f(static_cast<uint8_t>(m_value >> msize_f::Offset));}
	[[nodiscard]] constexpr auto pl() const -> pl_f {return pl_f(static_cast<uint8_t>(m_value >> pl_f::Offset));}
	[[nodiscard]] constexpr auto mem2mem() const -> mem2mem_f {return mem2mem_f((m_value & mem2mem_f::Mask) != 0);}

	constexpr ccr8_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr8_r other) const -> ccr8_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr8_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 148;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * channel x number of data to transfer register
 */
class cndtr1_r {
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
	constexpr operator cndtr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cndtr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cndtr1_r>() const {return ClearSet<cndtr1_r>(Mask, *this);}
	constexpr auto operator|(cndtr1_r other) const -> cndtr1_r { return static_cast<cndtr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cndtr1_r> other) const -> ClearSet<cndtr1_r> {return ClearSet<cndtr1_r>(cndtr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr cndtr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cndtr1_r other) const -> cndtr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cndtr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * channel x number of data to transfer register
 */
class cndtr2_r {
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
	constexpr operator cndtr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cndtr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cndtr2_r>() const {return ClearSet<cndtr2_r>(Mask, *this);}
	constexpr auto operator|(cndtr2_r other) const -> cndtr2_r { return static_cast<cndtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cndtr2_r> other) const -> ClearSet<cndtr2_r> {return ClearSet<cndtr2_r>(cndtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr cndtr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cndtr2_r other) const -> cndtr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cndtr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * channel x number of data to transfer register
 */
class cndtr3_r {
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
	constexpr operator cndtr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cndtr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cndtr3_r>() const {return ClearSet<cndtr3_r>(Mask, *this);}
	constexpr auto operator|(cndtr3_r other) const -> cndtr3_r { return static_cast<cndtr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cndtr3_r> other) const -> ClearSet<cndtr3_r> {return ClearSet<cndtr3_r>(cndtr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr cndtr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cndtr3_r other) const -> cndtr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cndtr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * channel x number of data to transfer register
 */
class cndtr4_r {
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
	constexpr operator cndtr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cndtr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cndtr4_r>() const {return ClearSet<cndtr4_r>(Mask, *this);}
	constexpr auto operator|(cndtr4_r other) const -> cndtr4_r { return static_cast<cndtr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cndtr4_r> other) const -> ClearSet<cndtr4_r> {return ClearSet<cndtr4_r>(cndtr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr cndtr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cndtr4_r other) const -> cndtr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cndtr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * channel x number of data to transfer register
 */
class cndtr5_r {
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
	constexpr operator cndtr5_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cndtr5_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cndtr5_r>() const {return ClearSet<cndtr5_r>(Mask, *this);}
	constexpr auto operator|(cndtr5_r other) const -> cndtr5_r { return static_cast<cndtr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cndtr5_r> other) const -> ClearSet<cndtr5_r> {return ClearSet<cndtr5_r>(cndtr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr cndtr5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cndtr5_r other) const -> cndtr5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cndtr5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * channel x number of data to transfer register
 */
class cndtr6_r {
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
	constexpr operator cndtr6_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cndtr6_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cndtr6_r>() const {return ClearSet<cndtr6_r>(Mask, *this);}
	constexpr auto operator|(cndtr6_r other) const -> cndtr6_r { return static_cast<cndtr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cndtr6_r> other) const -> ClearSet<cndtr6_r> {return ClearSet<cndtr6_r>(cndtr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr cndtr6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cndtr6_r other) const -> cndtr6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cndtr6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 112;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * channel x number of data to transfer register
 */
class cndtr7_r {
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
	constexpr operator cndtr7_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cndtr7_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cndtr7_r>() const {return ClearSet<cndtr7_r>(Mask, *this);}
	constexpr auto operator|(cndtr7_r other) const -> cndtr7_r { return static_cast<cndtr7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cndtr7_r> other) const -> ClearSet<cndtr7_r> {return ClearSet<cndtr7_r>(cndtr7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr cndtr7_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cndtr7_r other) const -> cndtr7_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cndtr7_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 132;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * channel x number of data to transfer register
 */
class cndtr8_r {
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
	constexpr operator cndtr8_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cndtr8_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cndtr8_r>() const {return ClearSet<cndtr8_r>(Mask, *this);}
	constexpr auto operator|(cndtr8_r other) const -> cndtr8_r { return static_cast<cndtr8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cndtr8_r> other) const -> ClearSet<cndtr8_r> {return ClearSet<cndtr8_r>(cndtr8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ndt() const -> ndt_f {return ndt_f(static_cast<uint16_t>(m_value >> ndt_f::Offset));}

	constexpr cndtr8_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cndtr8_r other) const -> cndtr8_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cndtr8_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 152;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x peripheral address register
 */
class cpar1_r {
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
	constexpr operator cpar1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cpar1_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cpar1_r>() const {return ClearSet<cpar1_r>(Mask, *this);}
	constexpr auto operator|(cpar1_r other) const -> cpar1_r { return static_cast<cpar1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpar1_r> other) const -> ClearSet<cpar1_r> {return ClearSet<cpar1_r>(cpar1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr cpar1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cpar1_r other) const -> cpar1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cpar1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x peripheral address register
 */
class cpar2_r {
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
	constexpr operator cpar2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cpar2_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cpar2_r>() const {return ClearSet<cpar2_r>(Mask, *this);}
	constexpr auto operator|(cpar2_r other) const -> cpar2_r { return static_cast<cpar2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpar2_r> other) const -> ClearSet<cpar2_r> {return ClearSet<cpar2_r>(cpar2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr cpar2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cpar2_r other) const -> cpar2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cpar2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x peripheral address register
 */
class cpar3_r {
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
	constexpr operator cpar3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cpar3_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cpar3_r>() const {return ClearSet<cpar3_r>(Mask, *this);}
	constexpr auto operator|(cpar3_r other) const -> cpar3_r { return static_cast<cpar3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpar3_r> other) const -> ClearSet<cpar3_r> {return ClearSet<cpar3_r>(cpar3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr cpar3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cpar3_r other) const -> cpar3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cpar3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x peripheral address register
 */
class cpar4_r {
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
	constexpr operator cpar4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cpar4_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cpar4_r>() const {return ClearSet<cpar4_r>(Mask, *this);}
	constexpr auto operator|(cpar4_r other) const -> cpar4_r { return static_cast<cpar4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpar4_r> other) const -> ClearSet<cpar4_r> {return ClearSet<cpar4_r>(cpar4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr cpar4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cpar4_r other) const -> cpar4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cpar4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x peripheral address register
 */
class cpar5_r {
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
	constexpr operator cpar5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cpar5_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cpar5_r>() const {return ClearSet<cpar5_r>(Mask, *this);}
	constexpr auto operator|(cpar5_r other) const -> cpar5_r { return static_cast<cpar5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpar5_r> other) const -> ClearSet<cpar5_r> {return ClearSet<cpar5_r>(cpar5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr cpar5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cpar5_r other) const -> cpar5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cpar5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x peripheral address register
 */
class cpar6_r {
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
	constexpr operator cpar6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cpar6_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cpar6_r>() const {return ClearSet<cpar6_r>(Mask, *this);}
	constexpr auto operator|(cpar6_r other) const -> cpar6_r { return static_cast<cpar6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpar6_r> other) const -> ClearSet<cpar6_r> {return ClearSet<cpar6_r>(cpar6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr cpar6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cpar6_r other) const -> cpar6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cpar6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 116;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x peripheral address register
 */
class cpar7_r {
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
	constexpr operator cpar7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cpar7_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cpar7_r>() const {return ClearSet<cpar7_r>(Mask, *this);}
	constexpr auto operator|(cpar7_r other) const -> cpar7_r { return static_cast<cpar7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpar7_r> other) const -> ClearSet<cpar7_r> {return ClearSet<cpar7_r>(cpar7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr cpar7_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cpar7_r other) const -> cpar7_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cpar7_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 136;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x peripheral address register
 */
class cpar8_r {
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
	constexpr operator cpar8_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cpar8_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cpar8_r>() const {return ClearSet<cpar8_r>(Mask, *this);}
	constexpr auto operator|(cpar8_r other) const -> cpar8_r { return static_cast<cpar8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cpar8_r> other) const -> ClearSet<cpar8_r> {return ClearSet<cpar8_r>(cpar8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pa() const -> pa_f {return pa_f(static_cast<uint32_t>(m_value >> pa_f::Offset));}

	constexpr cpar8_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cpar8_r other) const -> cpar8_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cpar8_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 156;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x memory address register
 */
class cmar1_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class ma_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ma_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator cmar1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cmar1_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cmar1_r>() const {return ClearSet<cmar1_r>(Mask, *this);}
	constexpr auto operator|(cmar1_r other) const -> cmar1_r { return static_cast<cmar1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cmar1_r> other) const -> ClearSet<cmar1_r> {return ClearSet<cmar1_r>(cmar1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto ma() const -> ma_f {return ma_f(static_cast<uint32_t>(m_value >> ma_f::Offset));}

	constexpr cmar1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmar1_r other) const -> cmar1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmar1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x memory address register
 */
class cmar2_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class ma_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ma_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator cmar2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cmar2_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cmar2_r>() const {return ClearSet<cmar2_r>(Mask, *this);}
	constexpr auto operator|(cmar2_r other) const -> cmar2_r { return static_cast<cmar2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cmar2_r> other) const -> ClearSet<cmar2_r> {return ClearSet<cmar2_r>(cmar2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto ma() const -> ma_f {return ma_f(static_cast<uint32_t>(m_value >> ma_f::Offset));}

	constexpr cmar2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmar2_r other) const -> cmar2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmar2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x memory address register
 */
class cmar3_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class ma_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ma_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator cmar3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cmar3_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cmar3_r>() const {return ClearSet<cmar3_r>(Mask, *this);}
	constexpr auto operator|(cmar3_r other) const -> cmar3_r { return static_cast<cmar3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cmar3_r> other) const -> ClearSet<cmar3_r> {return ClearSet<cmar3_r>(cmar3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto ma() const -> ma_f {return ma_f(static_cast<uint32_t>(m_value >> ma_f::Offset));}

	constexpr cmar3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmar3_r other) const -> cmar3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmar3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x memory address register
 */
class cmar4_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class ma_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ma_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator cmar4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cmar4_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cmar4_r>() const {return ClearSet<cmar4_r>(Mask, *this);}
	constexpr auto operator|(cmar4_r other) const -> cmar4_r { return static_cast<cmar4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cmar4_r> other) const -> ClearSet<cmar4_r> {return ClearSet<cmar4_r>(cmar4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto ma() const -> ma_f {return ma_f(static_cast<uint32_t>(m_value >> ma_f::Offset));}

	constexpr cmar4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmar4_r other) const -> cmar4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmar4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x memory address register
 */
class cmar5_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class ma_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ma_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator cmar5_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cmar5_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cmar5_r>() const {return ClearSet<cmar5_r>(Mask, *this);}
	constexpr auto operator|(cmar5_r other) const -> cmar5_r { return static_cast<cmar5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cmar5_r> other) const -> ClearSet<cmar5_r> {return ClearSet<cmar5_r>(cmar5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto ma() const -> ma_f {return ma_f(static_cast<uint32_t>(m_value >> ma_f::Offset));}

	constexpr cmar5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmar5_r other) const -> cmar5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmar5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 100;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x memory address register
 */
class cmar6_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class ma_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ma_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator cmar6_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cmar6_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cmar6_r>() const {return ClearSet<cmar6_r>(Mask, *this);}
	constexpr auto operator|(cmar6_r other) const -> cmar6_r { return static_cast<cmar6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cmar6_r> other) const -> ClearSet<cmar6_r> {return ClearSet<cmar6_r>(cmar6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto ma() const -> ma_f {return ma_f(static_cast<uint32_t>(m_value >> ma_f::Offset));}

	constexpr cmar6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmar6_r other) const -> cmar6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmar6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 120;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x memory address register
 */
class cmar7_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class ma_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ma_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator cmar7_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cmar7_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cmar7_r>() const {return ClearSet<cmar7_r>(Mask, *this);}
	constexpr auto operator|(cmar7_r other) const -> cmar7_r { return static_cast<cmar7_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cmar7_r> other) const -> ClearSet<cmar7_r> {return ClearSet<cmar7_r>(cmar7_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto ma() const -> ma_f {return ma_f(static_cast<uint32_t>(m_value >> ma_f::Offset));}

	constexpr cmar7_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmar7_r other) const -> cmar7_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmar7_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 140;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA channel x memory address register
 */
class cmar8_r {
public:

/**
 * Memory 1 address (used in case of Double buffer mode)
 */
class ma_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ma_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator cmar8_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cmar8_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cmar8_r>() const {return ClearSet<cmar8_r>(Mask, *this);}
	constexpr auto operator|(cmar8_r other) const -> cmar8_r { return static_cast<cmar8_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cmar8_r> other) const -> ClearSet<cmar8_r> {return ClearSet<cmar8_r>(cmar8_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto ma() const -> ma_f {return ma_f(static_cast<uint32_t>(m_value >> ma_f::Offset));}

	constexpr cmar8_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmar8_r other) const -> cmar8_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmar8_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 160;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct ccr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8); };
	template<std::size_t Index> using ccr_v = typename ccr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ccr() { }

	template<std::size_t Index> struct cndtr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8); };
	template<std::size_t Index> using cndtr_v = typename cndtr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cndtr() { }

	template<std::size_t Index> struct cpar_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8); };
	template<std::size_t Index> using cpar_v = typename cpar_r<Index>::type;
	template<std::size_t Index> constexpr auto& cpar() { }

	template<std::size_t Index> struct cmar_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6 || Index == 7 || Index == 8); };
	template<std::size_t Index> using cmar_v = typename cmar_r<Index>::type;
	template<std::size_t Index> constexpr auto& cmar() { }

	ReadOnlyMemory<uint32_t,isr_r> isr;
	WriteOnlyMemory<uint32_t,ifcr_r> ifcr;
	Memory<uint32_t,ccr1_r> ccr1;
	Memory<uint32_t,cndtr1_r> cndtr1;
	Memory<uint32_t,cpar1_r> cpar1;
	Memory<uint32_t,cmar1_r> cmar1;
	Padding<4> _p24;
	Memory<uint32_t,ccr2_r> ccr2;
	Memory<uint32_t,cndtr2_r> cndtr2;
	Memory<uint32_t,cpar2_r> cpar2;
	Memory<uint32_t,cmar2_r> cmar2;
	Padding<4> _p44;
	Memory<uint32_t,ccr3_r> ccr3;
	Memory<uint32_t,cndtr3_r> cndtr3;
	Memory<uint32_t,cpar3_r> cpar3;
	Memory<uint32_t,cmar3_r> cmar3;
	Padding<4> _p64;
	Memory<uint32_t,ccr4_r> ccr4;
	Memory<uint32_t,cndtr4_r> cndtr4;
	Memory<uint32_t,cpar4_r> cpar4;
	Memory<uint32_t,cmar4_r> cmar4;
	Padding<4> _p84;
	Memory<uint32_t,ccr5_r> ccr5;
	Memory<uint32_t,cndtr5_r> cndtr5;
	Memory<uint32_t,cpar5_r> cpar5;
	Memory<uint32_t,cmar5_r> cmar5;
	Padding<4> _p104;
	Memory<uint32_t,ccr6_r> ccr6;
	Memory<uint32_t,cndtr6_r> cndtr6;
	Memory<uint32_t,cpar6_r> cpar6;
	Memory<uint32_t,cmar6_r> cmar6;
	Padding<4> _p124;
	Memory<uint32_t,ccr7_r> ccr7;
	Memory<uint32_t,cndtr7_r> cndtr7;
	Memory<uint32_t,cpar7_r> cpar7;
	Memory<uint32_t,cmar7_r> cmar7;
	Padding<4> _p144;
	Memory<uint32_t,ccr8_r> ccr8;
	Memory<uint32_t,cndtr8_r> cndtr8;
	Memory<uint32_t,cpar8_r> cpar8;
	Memory<uint32_t,cmar8_r> cmar8;
};

template<> struct dma_p::isr_r::teif_f<8> { using type = dma_p::isr_r::teif8_f; };
template<> struct dma_p::isr_r::teif_f<7> { using type = dma_p::isr_r::teif7_f; };
template<> struct dma_p::isr_r::teif_f<6> { using type = dma_p::isr_r::teif6_f; };
template<> struct dma_p::isr_r::teif_f<5> { using type = dma_p::isr_r::teif5_f; };
template<> struct dma_p::isr_r::teif_f<4> { using type = dma_p::isr_r::teif4_f; };
template<> struct dma_p::isr_r::teif_f<3> { using type = dma_p::isr_r::teif3_f; };
template<> struct dma_p::isr_r::teif_f<2> { using type = dma_p::isr_r::teif2_f; };
template<> struct dma_p::isr_r::teif_f<1> { using type = dma_p::isr_r::teif1_f; };
template<> struct dma_p::isr_r::htif_f<8> { using type = dma_p::isr_r::htif8_f; };
template<> struct dma_p::isr_r::htif_f<7> { using type = dma_p::isr_r::htif7_f; };
template<> struct dma_p::isr_r::htif_f<6> { using type = dma_p::isr_r::htif6_f; };
template<> struct dma_p::isr_r::htif_f<5> { using type = dma_p::isr_r::htif5_f; };
template<> struct dma_p::isr_r::htif_f<4> { using type = dma_p::isr_r::htif4_f; };
template<> struct dma_p::isr_r::htif_f<3> { using type = dma_p::isr_r::htif3_f; };
template<> struct dma_p::isr_r::htif_f<2> { using type = dma_p::isr_r::htif2_f; };
template<> struct dma_p::isr_r::htif_f<1> { using type = dma_p::isr_r::htif1_f; };
template<> struct dma_p::isr_r::tcif_f<8> { using type = dma_p::isr_r::tcif8_f; };
template<> struct dma_p::isr_r::tcif_f<7> { using type = dma_p::isr_r::tcif7_f; };
template<> struct dma_p::isr_r::tcif_f<6> { using type = dma_p::isr_r::tcif6_f; };
template<> struct dma_p::isr_r::tcif_f<5> { using type = dma_p::isr_r::tcif5_f; };
template<> struct dma_p::isr_r::tcif_f<4> { using type = dma_p::isr_r::tcif4_f; };
template<> struct dma_p::isr_r::tcif_f<3> { using type = dma_p::isr_r::tcif3_f; };
template<> struct dma_p::isr_r::tcif_f<2> { using type = dma_p::isr_r::tcif2_f; };
template<> struct dma_p::isr_r::tcif_f<1> { using type = dma_p::isr_r::tcif1_f; };
template<> struct dma_p::isr_r::gif_f<8> { using type = dma_p::isr_r::gif8_f; };
template<> struct dma_p::isr_r::gif_f<7> { using type = dma_p::isr_r::gif7_f; };
template<> struct dma_p::isr_r::gif_f<6> { using type = dma_p::isr_r::gif6_f; };
template<> struct dma_p::isr_r::gif_f<5> { using type = dma_p::isr_r::gif5_f; };
template<> struct dma_p::isr_r::gif_f<4> { using type = dma_p::isr_r::gif4_f; };
template<> struct dma_p::isr_r::gif_f<3> { using type = dma_p::isr_r::gif3_f; };
template<> struct dma_p::isr_r::gif_f<2> { using type = dma_p::isr_r::gif2_f; };
template<> struct dma_p::isr_r::gif_f<1> { using type = dma_p::isr_r::gif1_f; };

template<> struct dma_p::ifcr_r::teif_f<8> { using type = dma_p::ifcr_r::teif8_f; };
template<> struct dma_p::ifcr_r::teif_f<7> { using type = dma_p::ifcr_r::teif7_f; };
template<> struct dma_p::ifcr_r::teif_f<6> { using type = dma_p::ifcr_r::teif6_f; };
template<> struct dma_p::ifcr_r::teif_f<5> { using type = dma_p::ifcr_r::teif5_f; };
template<> struct dma_p::ifcr_r::teif_f<4> { using type = dma_p::ifcr_r::teif4_f; };
template<> struct dma_p::ifcr_r::teif_f<3> { using type = dma_p::ifcr_r::teif3_f; };
template<> struct dma_p::ifcr_r::teif_f<2> { using type = dma_p::ifcr_r::teif2_f; };
template<> struct dma_p::ifcr_r::teif_f<1> { using type = dma_p::ifcr_r::teif1_f; };
template<> struct dma_p::ifcr_r::htif_f<8> { using type = dma_p::ifcr_r::htif8_f; };
template<> struct dma_p::ifcr_r::htif_f<7> { using type = dma_p::ifcr_r::htif7_f; };
template<> struct dma_p::ifcr_r::htif_f<6> { using type = dma_p::ifcr_r::htif6_f; };
template<> struct dma_p::ifcr_r::htif_f<5> { using type = dma_p::ifcr_r::htif5_f; };
template<> struct dma_p::ifcr_r::htif_f<4> { using type = dma_p::ifcr_r::htif4_f; };
template<> struct dma_p::ifcr_r::htif_f<3> { using type = dma_p::ifcr_r::htif3_f; };
template<> struct dma_p::ifcr_r::htif_f<2> { using type = dma_p::ifcr_r::htif2_f; };
template<> struct dma_p::ifcr_r::htif_f<1> { using type = dma_p::ifcr_r::htif1_f; };
template<> struct dma_p::ifcr_r::tcif_f<8> { using type = dma_p::ifcr_r::tcif8_f; };
template<> struct dma_p::ifcr_r::tcif_f<7> { using type = dma_p::ifcr_r::tcif7_f; };
template<> struct dma_p::ifcr_r::tcif_f<6> { using type = dma_p::ifcr_r::tcif6_f; };
template<> struct dma_p::ifcr_r::tcif_f<5> { using type = dma_p::ifcr_r::tcif5_f; };
template<> struct dma_p::ifcr_r::tcif_f<4> { using type = dma_p::ifcr_r::tcif4_f; };
template<> struct dma_p::ifcr_r::tcif_f<3> { using type = dma_p::ifcr_r::tcif3_f; };
template<> struct dma_p::ifcr_r::tcif_f<2> { using type = dma_p::ifcr_r::tcif2_f; };
template<> struct dma_p::ifcr_r::tcif_f<1> { using type = dma_p::ifcr_r::tcif1_f; };
template<> struct dma_p::ifcr_r::gif_f<8> { using type = dma_p::ifcr_r::gif8_f; };
template<> struct dma_p::ifcr_r::gif_f<7> { using type = dma_p::ifcr_r::gif7_f; };
template<> struct dma_p::ifcr_r::gif_f<6> { using type = dma_p::ifcr_r::gif6_f; };
template<> struct dma_p::ifcr_r::gif_f<5> { using type = dma_p::ifcr_r::gif5_f; };
template<> struct dma_p::ifcr_r::gif_f<4> { using type = dma_p::ifcr_r::gif4_f; };
template<> struct dma_p::ifcr_r::gif_f<3> { using type = dma_p::ifcr_r::gif3_f; };
template<> struct dma_p::ifcr_r::gif_f<2> { using type = dma_p::ifcr_r::gif2_f; };
template<> struct dma_p::ifcr_r::gif_f<1> { using type = dma_p::ifcr_r::gif1_f; };

template<> constexpr auto& dma_p::ccr<1>() { return ccr1; }
template<> constexpr auto& dma_p::ccr<2>() { return ccr2; }
template<> constexpr auto& dma_p::ccr<3>() { return ccr3; }
template<> constexpr auto& dma_p::ccr<4>() { return ccr4; }
template<> constexpr auto& dma_p::ccr<5>() { return ccr5; }
template<> constexpr auto& dma_p::ccr<6>() { return ccr6; }
template<> constexpr auto& dma_p::ccr<7>() { return ccr7; }
template<> constexpr auto& dma_p::ccr<8>() { return ccr8; }

template<> struct dma_p::ccr_r<1> { using type = dma_p::ccr1_r; };
template<> struct dma_p::ccr_r<2> { using type = dma_p::ccr2_r; };
template<> struct dma_p::ccr_r<3> { using type = dma_p::ccr3_r; };
template<> struct dma_p::ccr_r<4> { using type = dma_p::ccr4_r; };
template<> struct dma_p::ccr_r<5> { using type = dma_p::ccr5_r; };
template<> struct dma_p::ccr_r<6> { using type = dma_p::ccr6_r; };
template<> struct dma_p::ccr_r<7> { using type = dma_p::ccr7_r; };
template<> struct dma_p::ccr_r<8> { using type = dma_p::ccr8_r; };

template<> constexpr auto& dma_p::cndtr<1>() { return cndtr1; }
template<> constexpr auto& dma_p::cndtr<2>() { return cndtr2; }
template<> constexpr auto& dma_p::cndtr<3>() { return cndtr3; }
template<> constexpr auto& dma_p::cndtr<4>() { return cndtr4; }
template<> constexpr auto& dma_p::cndtr<5>() { return cndtr5; }
template<> constexpr auto& dma_p::cndtr<6>() { return cndtr6; }
template<> constexpr auto& dma_p::cndtr<7>() { return cndtr7; }
template<> constexpr auto& dma_p::cndtr<8>() { return cndtr8; }

template<> struct dma_p::cndtr_r<1> { using type = dma_p::cndtr1_r; };
template<> struct dma_p::cndtr_r<2> { using type = dma_p::cndtr2_r; };
template<> struct dma_p::cndtr_r<3> { using type = dma_p::cndtr3_r; };
template<> struct dma_p::cndtr_r<4> { using type = dma_p::cndtr4_r; };
template<> struct dma_p::cndtr_r<5> { using type = dma_p::cndtr5_r; };
template<> struct dma_p::cndtr_r<6> { using type = dma_p::cndtr6_r; };
template<> struct dma_p::cndtr_r<7> { using type = dma_p::cndtr7_r; };
template<> struct dma_p::cndtr_r<8> { using type = dma_p::cndtr8_r; };

template<> constexpr auto& dma_p::cpar<1>() { return cpar1; }
template<> constexpr auto& dma_p::cpar<2>() { return cpar2; }
template<> constexpr auto& dma_p::cpar<3>() { return cpar3; }
template<> constexpr auto& dma_p::cpar<4>() { return cpar4; }
template<> constexpr auto& dma_p::cpar<5>() { return cpar5; }
template<> constexpr auto& dma_p::cpar<6>() { return cpar6; }
template<> constexpr auto& dma_p::cpar<7>() { return cpar7; }
template<> constexpr auto& dma_p::cpar<8>() { return cpar8; }

template<> struct dma_p::cpar_r<1> { using type = dma_p::cpar1_r; };
template<> struct dma_p::cpar_r<2> { using type = dma_p::cpar2_r; };
template<> struct dma_p::cpar_r<3> { using type = dma_p::cpar3_r; };
template<> struct dma_p::cpar_r<4> { using type = dma_p::cpar4_r; };
template<> struct dma_p::cpar_r<5> { using type = dma_p::cpar5_r; };
template<> struct dma_p::cpar_r<6> { using type = dma_p::cpar6_r; };
template<> struct dma_p::cpar_r<7> { using type = dma_p::cpar7_r; };
template<> struct dma_p::cpar_r<8> { using type = dma_p::cpar8_r; };

template<> constexpr auto& dma_p::cmar<1>() { return cmar1; }
template<> constexpr auto& dma_p::cmar<2>() { return cmar2; }
template<> constexpr auto& dma_p::cmar<3>() { return cmar3; }
template<> constexpr auto& dma_p::cmar<4>() { return cmar4; }
template<> constexpr auto& dma_p::cmar<5>() { return cmar5; }
template<> constexpr auto& dma_p::cmar<6>() { return cmar6; }
template<> constexpr auto& dma_p::cmar<7>() { return cmar7; }
template<> constexpr auto& dma_p::cmar<8>() { return cmar8; }

template<> struct dma_p::cmar_r<1> { using type = dma_p::cmar1_r; };
template<> struct dma_p::cmar_r<2> { using type = dma_p::cmar2_r; };
template<> struct dma_p::cmar_r<3> { using type = dma_p::cmar3_r; };
template<> struct dma_p::cmar_r<4> { using type = dma_p::cmar4_r; };
template<> struct dma_p::cmar_r<5> { using type = dma_p::cmar5_r; };
template<> struct dma_p::cmar_r<6> { using type = dma_p::cmar6_r; };
template<> struct dma_p::cmar_r<7> { using type = dma_p::cmar7_r; };
template<> struct dma_p::cmar_r<8> { using type = dma_p::cmar8_r; };

static_assert(std::is_standard_layout_v<dma_p>);
static_assert(offsetof(dma_p, isr) == dma_p::isr_r::Offset);
static_assert(offsetof(dma_p, ifcr) == dma_p::ifcr_r::Offset);
static_assert(offsetof(dma_p, ccr1) == dma_p::ccr1_r::Offset);
static_assert(offsetof(dma_p, ccr2) == dma_p::ccr2_r::Offset);
static_assert(offsetof(dma_p, ccr3) == dma_p::ccr3_r::Offset);
static_assert(offsetof(dma_p, ccr4) == dma_p::ccr4_r::Offset);
static_assert(offsetof(dma_p, ccr5) == dma_p::ccr5_r::Offset);
static_assert(offsetof(dma_p, ccr6) == dma_p::ccr6_r::Offset);
static_assert(offsetof(dma_p, ccr7) == dma_p::ccr7_r::Offset);
static_assert(offsetof(dma_p, ccr8) == dma_p::ccr8_r::Offset);
static_assert(offsetof(dma_p, cndtr1) == dma_p::cndtr1_r::Offset);
static_assert(offsetof(dma_p, cndtr2) == dma_p::cndtr2_r::Offset);
static_assert(offsetof(dma_p, cndtr3) == dma_p::cndtr3_r::Offset);
static_assert(offsetof(dma_p, cndtr4) == dma_p::cndtr4_r::Offset);
static_assert(offsetof(dma_p, cndtr5) == dma_p::cndtr5_r::Offset);
static_assert(offsetof(dma_p, cndtr6) == dma_p::cndtr6_r::Offset);
static_assert(offsetof(dma_p, cndtr7) == dma_p::cndtr7_r::Offset);
static_assert(offsetof(dma_p, cndtr8) == dma_p::cndtr8_r::Offset);
static_assert(offsetof(dma_p, cpar1) == dma_p::cpar1_r::Offset);
static_assert(offsetof(dma_p, cpar2) == dma_p::cpar2_r::Offset);
static_assert(offsetof(dma_p, cpar3) == dma_p::cpar3_r::Offset);
static_assert(offsetof(dma_p, cpar4) == dma_p::cpar4_r::Offset);
static_assert(offsetof(dma_p, cpar5) == dma_p::cpar5_r::Offset);
static_assert(offsetof(dma_p, cpar6) == dma_p::cpar6_r::Offset);
static_assert(offsetof(dma_p, cpar7) == dma_p::cpar7_r::Offset);
static_assert(offsetof(dma_p, cpar8) == dma_p::cpar8_r::Offset);
static_assert(offsetof(dma_p, cmar1) == dma_p::cmar1_r::Offset);
static_assert(offsetof(dma_p, cmar2) == dma_p::cmar2_r::Offset);
static_assert(offsetof(dma_p, cmar3) == dma_p::cmar3_r::Offset);
static_assert(offsetof(dma_p, cmar4) == dma_p::cmar4_r::Offset);
static_assert(offsetof(dma_p, cmar5) == dma_p::cmar5_r::Offset);
static_assert(offsetof(dma_p, cmar6) == dma_p::cmar6_r::Offset);
static_assert(offsetof(dma_p, cmar7) == dma_p::cmar7_r::Offset);
static_assert(offsetof(dma_p, cmar8) == dma_p::cmar8_r::Offset);

inline dma_p& dma1 = *reinterpret_cast<dma_p*>(0x40020000);
inline dma_p& dma2 = *reinterpret_cast<dma_p*>(0x40020400);

} // STM32G473XX

