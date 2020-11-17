#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Universal synchronous asynchronous receiver transmitter
 */
class usart1_p {
public:
/**
 * Control register 1
 */
class cr1_r {
public:

/**
 * RXFFIE
 */
class rxffie_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxffie_f(bool value = true) : m_value(value) {}
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
 * TXFEIE
 */
class txfeie_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txfeie_f(bool value = true) : m_value(value) {}
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
 * FIFOEN
 */
class fifoen_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fifoen_f(bool value = true) : m_value(value) {}
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
 * M1
 */
class m1_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr m1_f(bool value = true) : m_value(value) {}
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
 * End of Block interrupt enable
 */
class eobie_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eobie_f(bool value = true) : m_value(value) {}
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
 * Receiver timeout interrupt enable
 */
class rtoie_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rtoie_f(bool value = true) : m_value(value) {}
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
 * Driver Enable assertion time
 */
class deat4_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat4_f(bool value = true) : m_value(value) {}
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
 * DEAT3
 */
class deat3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat3_f(bool value = true) : m_value(value) {}
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
 * DEAT2
 */
class deat2_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat2_f(bool value = true) : m_value(value) {}
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
 * DEAT1
 */
class deat1_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat1_f(bool value = true) : m_value(value) {}
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
 * DEAT0
 */
class deat0_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat0_f(bool value = true) : m_value(value) {}
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
 * Driver Enable de-assertion time
 */
class dedt4_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt4_f(bool value = true) : m_value(value) {}
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
 * DEDT3
 */
class dedt3_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt3_f(bool value = true) : m_value(value) {}
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
 * DEDT2
 */
class dedt2_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt2_f(bool value = true) : m_value(value) {}
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
 * DEDT1
 */
class dedt1_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt1_f(bool value = true) : m_value(value) {}
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
 * DEDT0
 */
class dedt0_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt0_f(bool value = true) : m_value(value) {}
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
 * Oversampling mode
 */
class over8_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr over8_f(bool value = true) : m_value(value) {}
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
 * Character match interrupt enable
 */
class cmie_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cmie_f(bool value = true) : m_value(value) {}
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
 * Mute mode enable
 */
class mme_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mme_f(bool value = true) : m_value(value) {}
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
 * Word length
 */
class m0_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr m0_f(bool value = true) : m_value(value) {}
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
 * Receiver wakeup method
 */
class wake_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wake_f(bool value = true) : m_value(value) {}
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
 * Parity control enable
 */
class pce_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pce_f(bool value = true) : m_value(value) {}
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
 * Parity selection
 */
class ps_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ps_f(bool value = true) : m_value(value) {}
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
 * PE interrupt enable
 */
class peie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr peie_f(bool value = true) : m_value(value) {}
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
 * interrupt enable
 */
class txeie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txeie_f(bool value = true) : m_value(value) {}
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
 * Transmission complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
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
 * RXNE interrupt enable
 */
class rxneie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxneie_f(bool value = true) : m_value(value) {}
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
 * IDLE interrupt enable
 */
class idleie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idleie_f(bool value = true) : m_value(value) {}
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
 * Transmitter enable
 */
class te_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr te_f(bool value = true) : m_value(value) {}
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
 * Receiver enable
 */
class re_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr re_f(bool value = true) : m_value(value) {}
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
 * USART enable in Stop mode
 */
class uesm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uesm_f(bool value = true) : m_value(value) {}
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
 * USART enable
 */
class ue_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ue_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rxffie() const -> rxffie_f {return rxffie_f((m_value & rxffie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfeie() const -> txfeie_f {return txfeie_f((m_value & txfeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fifoen() const -> fifoen_f {return fifoen_f((m_value & fifoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto m1() const -> m1_f {return m1_f((m_value & m1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eobie() const -> eobie_f {return eobie_f((m_value & eobie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtoie() const -> rtoie_f {return rtoie_f((m_value & rtoie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat4() const -> deat4_f {return deat4_f((m_value & deat4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat3() const -> deat3_f {return deat3_f((m_value & deat3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat2() const -> deat2_f {return deat2_f((m_value & deat2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat1() const -> deat1_f {return deat1_f((m_value & deat1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat0() const -> deat0_f {return deat0_f((m_value & deat0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt4() const -> dedt4_f {return dedt4_f((m_value & dedt4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt3() const -> dedt3_f {return dedt3_f((m_value & dedt3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt2() const -> dedt2_f {return dedt2_f((m_value & dedt2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt1() const -> dedt1_f {return dedt1_f((m_value & dedt1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt0() const -> dedt0_f {return dedt0_f((m_value & dedt0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto over8() const -> over8_f {return over8_f((m_value & over8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmie() const -> cmie_f {return cmie_f((m_value & cmie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mme() const -> mme_f {return mme_f((m_value & mme_f::Mask) != 0);}
	[[nodiscard]] constexpr auto m0() const -> m0_f {return m0_f((m_value & m0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wake() const -> wake_f {return wake_f((m_value & wake_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pce() const -> pce_f {return pce_f((m_value & pce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ps() const -> ps_f {return ps_f((m_value & ps_f::Mask) != 0);}
	[[nodiscard]] constexpr auto peie() const -> peie_f {return peie_f((m_value & peie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txeie() const -> txeie_f {return txeie_f((m_value & txeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxneie() const -> rxneie_f {return rxneie_f((m_value & rxneie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idleie() const -> idleie_f {return idleie_f((m_value & idleie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto te() const -> te_f {return te_f((m_value & te_f::Mask) != 0);}
	[[nodiscard]] constexpr auto re() const -> re_f {return re_f((m_value & re_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uesm() const -> uesm_f {return uesm_f((m_value & uesm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ue() const -> ue_f {return ue_f((m_value & ue_f::Mask) != 0);}

	template<std::size_t Index> struct m_f { static_assert(Index == 1 || Index == 0); };
	template<std::size_t Index> using m_v = typename m_f<Index>::type;
	template<std::size_t Index> constexpr auto m() const { return m_v<Index>::get(*this); }

	template<std::size_t Index> struct deat_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using deat_v = typename deat_f<Index>::type;
	template<std::size_t Index> constexpr auto deat() const { return deat_v<Index>::get(*this); }

	template<std::size_t Index> struct dedt_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using dedt_v = typename dedt_f<Index>::type;
	template<std::size_t Index> constexpr auto dedt() const { return dedt_v<Index>::get(*this); }

	constexpr cr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr1_r other) const -> cr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Control register 2
 */
class cr2_r {
public:

/**
 * Address of the USART node
 */
class add4_7_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr add4_7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Address of the USART node
 */
class add0_3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr add0_3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Receiver timeout enable
 */
class rtoen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rtoen_f(bool value = true) : m_value(value) {}
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
 * Auto baud rate mode
 */
class abrmod1_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr abrmod1_f(bool value = true) : m_value(value) {}
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
 * ABRMOD0
 */
class abrmod0_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr abrmod0_f(bool value = true) : m_value(value) {}
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
 * Auto baud rate enable
 */
class abren_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr abren_f(bool value = true) : m_value(value) {}
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
 * Most significant bit first
 */
class msbfirst_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr msbfirst_f(bool value = true) : m_value(value) {}
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
 * Binary data inversion
 */
class tainv_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tainv_f(bool value = true) : m_value(value) {}
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
 * TX pin active level inversion
 */
class txinv_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txinv_f(bool value = true) : m_value(value) {}
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
 * RX pin active level inversion
 */
class rxinv_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxinv_f(bool value = true) : m_value(value) {}
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
 * Swap TX/RX pins
 */
class swap_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swap_f(bool value = true) : m_value(value) {}
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
 * LIN mode enable
 */
class linen_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr linen_f(bool value = true) : m_value(value) {}
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
 * STOP bits
 */
class stop_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stop_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Clock enable
 */
class clken_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr clken_f(bool value = true) : m_value(value) {}
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
 * Clock polarity
 */
class cpol_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cpol_f(bool value = true) : m_value(value) {}
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
 * Clock phase
 */
class cpha_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cpha_f(bool value = true) : m_value(value) {}
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
 * Last bit clock pulse
 */
class lbcl_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lbcl_f(bool value = true) : m_value(value) {}
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
 * LIN break detection interrupt enable
 */
class lbdie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lbdie_f(bool value = true) : m_value(value) {}
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
 * LIN break detection length
 */
class lbdl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lbdl_f(bool value = true) : m_value(value) {}
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
 * 7-bit Address Detection/4-bit Address Detection
 */
class addm7_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr addm7_f(bool value = true) : m_value(value) {}
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
 * DIS_NSS
 */
class dis_nss_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dis_nss_f(bool value = true) : m_value(value) {}
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
 * SLVEN
 */
class slven_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr slven_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto add4_7() const -> add4_7_f {return add4_7_f(static_cast<uint8_t>(m_value >> add4_7_f::Offset));}
	[[nodiscard]] constexpr auto add0_3() const -> add0_3_f {return add0_3_f(static_cast<uint8_t>(m_value >> add0_3_f::Offset));}
	[[nodiscard]] constexpr auto rtoen() const -> rtoen_f {return rtoen_f((m_value & rtoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abrmod1() const -> abrmod1_f {return abrmod1_f((m_value & abrmod1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abrmod0() const -> abrmod0_f {return abrmod0_f((m_value & abrmod0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abren() const -> abren_f {return abren_f((m_value & abren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msbfirst() const -> msbfirst_f {return msbfirst_f((m_value & msbfirst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tainv() const -> tainv_f {return tainv_f((m_value & tainv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txinv() const -> txinv_f {return txinv_f((m_value & txinv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxinv() const -> rxinv_f {return rxinv_f((m_value & rxinv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swap() const -> swap_f {return swap_f((m_value & swap_f::Mask) != 0);}
	[[nodiscard]] constexpr auto linen() const -> linen_f {return linen_f((m_value & linen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stop() const -> stop_f {return stop_f(static_cast<uint8_t>(m_value >> stop_f::Offset));}
	[[nodiscard]] constexpr auto clken() const -> clken_f {return clken_f((m_value & clken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpol() const -> cpol_f {return cpol_f((m_value & cpol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpha() const -> cpha_f {return cpha_f((m_value & cpha_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbcl() const -> lbcl_f {return lbcl_f((m_value & lbcl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbdie() const -> lbdie_f {return lbdie_f((m_value & lbdie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbdl() const -> lbdl_f {return lbdl_f((m_value & lbdl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto addm7() const -> addm7_f {return addm7_f((m_value & addm7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dis_nss() const -> dis_nss_f {return dis_nss_f((m_value & dis_nss_f::Mask) != 0);}
	[[nodiscard]] constexpr auto slven() const -> slven_f {return slven_f((m_value & slven_f::Mask) != 0);}

	template<std::size_t Index> struct abrmod_f { static_assert(Index == 1 || Index == 0); };
	template<std::size_t Index> using abrmod_v = typename abrmod_f<Index>::type;
	template<std::size_t Index> constexpr auto abrmod() const { return abrmod_v<Index>::get(*this); }

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
 * Control register 3
 */
class cr3_r {
public:

/**
 * TXFTCFG
 */
class txftcfg_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr txftcfg_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RXFTIE
 */
class rxftie_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxftie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXFTCFG
 */
class rxftcfg_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rxftcfg_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TCBGTIE
 */
class tcbgtie_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcbgtie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXFTIE
 */
class txftie_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txftie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup from Stop mode interrupt enable
 */
class wufie_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wufie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup from Stop mode interrupt flag selection
 */
class wus_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr wus_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Smartcard auto-retry count
 */
class scarcnt_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr scarcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Driver enable polarity selection
 */
class dep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Driver enable mode
 */
class dem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA Disable on Reception Error
 */
class ddre_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ddre_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Overrun Disable
 */
class ovrdis_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ovrdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * One sample bit method enable
 */
class onebit_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr onebit_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTS interrupt enable
 */
class ctsie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctsie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTS enable
 */
class ctse_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RTS enable
 */
class rtse_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA enable transmitter
 */
class dmat_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmat_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA enable receiver
 */
class dmar_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmar_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Smartcard mode enable
 */
class scen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr scen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Smartcard NACK enable
 */
class nack_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Half-duplex selection
 */
class hdsel_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hdsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Ir low-power
 */
class irlp_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr irlp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Ir mode enable
 */
class iren_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr iren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Error interrupt enable
 */
class eie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txftcfg() const -> txftcfg_f {return txftcfg_f(static_cast<uint8_t>(m_value >> txftcfg_f::Offset));}
	[[nodiscard]] constexpr auto rxftie() const -> rxftie_f {return rxftie_f((m_value & rxftie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxftcfg() const -> rxftcfg_f {return rxftcfg_f(static_cast<uint8_t>(m_value >> rxftcfg_f::Offset));}
	[[nodiscard]] constexpr auto tcbgtie() const -> tcbgtie_f {return tcbgtie_f((m_value & tcbgtie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txftie() const -> txftie_f {return txftie_f((m_value & txftie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wufie() const -> wufie_f {return wufie_f((m_value & wufie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wus() const -> wus_f {return wus_f(static_cast<uint8_t>(m_value >> wus_f::Offset));}
	[[nodiscard]] constexpr auto scarcnt() const -> scarcnt_f {return scarcnt_f(static_cast<uint8_t>(m_value >> scarcnt_f::Offset));}
	[[nodiscard]] constexpr auto dep() const -> dep_f {return dep_f((m_value & dep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dem() const -> dem_f {return dem_f((m_value & dem_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ddre() const -> ddre_f {return ddre_f((m_value & ddre_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrdis() const -> ovrdis_f {return ovrdis_f((m_value & ovrdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto onebit() const -> onebit_f {return onebit_f((m_value & onebit_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctsie() const -> ctsie_f {return ctsie_f((m_value & ctsie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctse() const -> ctse_f {return ctse_f((m_value & ctse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtse() const -> rtse_f {return rtse_f((m_value & rtse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmat() const -> dmat_f {return dmat_f((m_value & dmat_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmar() const -> dmar_f {return dmar_f((m_value & dmar_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scen() const -> scen_f {return scen_f((m_value & scen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nack() const -> nack_f {return nack_f((m_value & nack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hdsel() const -> hdsel_f {return hdsel_f((m_value & hdsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto irlp() const -> irlp_f {return irlp_f((m_value & irlp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iren() const -> iren_f {return iren_f((m_value & iren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eie() const -> eie_f {return eie_f((m_value & eie_f::Mask) != 0);}

	constexpr cr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr3_r other) const -> cr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Baud rate register
 */
class brr_r {
public:

/**
 * DIV_Mantissa
 */
class div_mantissa_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr div_mantissa_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator brr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(brr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DIV_Fraction
 */
class div_fraction_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr div_fraction_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator brr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(brr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto div_mantissa() const -> div_mantissa_f {return div_mantissa_f(static_cast<uint16_t>(m_value >> div_mantissa_f::Offset));}
	[[nodiscard]] constexpr auto div_fraction() const -> div_fraction_f {return div_fraction_f(static_cast<uint8_t>(m_value >> div_fraction_f::Offset));}

	constexpr brr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(brr_r other) const -> brr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> brr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Guard time and prescaler register
 */
class gtpr_r {
public:

/**
 * Guard time value
 */
class gt_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr gt_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator gtpr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(gtpr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<gtpr_r>() const {return ClearSet<gtpr_r>(Mask, *this);}
	constexpr auto operator|(gtpr_r other) const -> gtpr_r { return static_cast<gtpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<gtpr_r> other) const -> ClearSet<gtpr_r> {return ClearSet<gtpr_r>(gtpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Prescaler value
 */
class psc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr psc_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator gtpr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(gtpr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<gtpr_r>() const {return ClearSet<gtpr_r>(Mask, *this);}
	constexpr auto operator|(gtpr_r other) const -> gtpr_r { return static_cast<gtpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<gtpr_r> other) const -> ClearSet<gtpr_r> {return ClearSet<gtpr_r>(gtpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto gt() const -> gt_f {return gt_f(static_cast<uint8_t>(m_value >> gt_f::Offset));}
	[[nodiscard]] constexpr auto psc() const -> psc_f {return psc_f(static_cast<uint8_t>(m_value >> psc_f::Offset));}

	constexpr gtpr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(gtpr_r other) const -> gtpr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> gtpr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Receiver timeout register
 */
class rtor_r {
public:

/**
 * Block Length
 */
class blen_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr blen_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rtor_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rtor_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtor_r>() const {return ClearSet<rtor_r>(Mask, *this);}
	constexpr auto operator|(rtor_r other) const -> rtor_r { return static_cast<rtor_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtor_r> other) const -> ClearSet<rtor_r> {return ClearSet<rtor_r>(rtor_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Receiver timeout value
 */
class rto_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 24;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rto_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator rtor_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rtor_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtor_r>() const {return ClearSet<rtor_r>(Mask, *this);}
	constexpr auto operator|(rtor_r other) const -> rtor_r { return static_cast<rtor_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtor_r> other) const -> ClearSet<rtor_r> {return ClearSet<rtor_r>(rtor_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto blen() const -> blen_f {return blen_f(static_cast<uint8_t>(m_value >> blen_f::Offset));}
	[[nodiscard]] constexpr auto rto() const -> rto_f {return rto_f(static_cast<uint32_t>(m_value >> rto_f::Offset));}

	constexpr rtor_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rtor_r other) const -> rtor_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rtor_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Request register
 */
class rqr_r {
public:

/**
 * Transmit data flush request
 */
class txfrq_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Receive data flush request
 */
class rxfrq_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxfrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute mode request
 */
class mmrq_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mmrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Send break request
 */
class sbkrq_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sbkrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Auto baud rate request
 */
class abrrq_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr abrrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txfrq() const -> txfrq_f {return txfrq_f((m_value & txfrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfrq() const -> rxfrq_f {return rxfrq_f((m_value & rxfrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mmrq() const -> mmrq_f {return mmrq_f((m_value & mmrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbkrq() const -> sbkrq_f {return sbkrq_f((m_value & sbkrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abrrq() const -> abrrq_f {return abrrq_f((m_value & abrrq_f::Mask) != 0);}

	constexpr rqr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rqr_r other) const -> rqr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rqr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt & status register
 */
class isr_r {
public:

/**
 * TXFT
 */
class txft_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txft_f(bool value = true) : m_value(value) {}
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
 * RXFT
 */
class rxft_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxft_f(bool value = true) : m_value(value) {}
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
 * TCBGT
 */
class tcbgt_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcbgt_f(bool value = true) : m_value(value) {}
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
 * RXFF
 */
class rxff_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxff_f(bool value = true) : m_value(value) {}
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
 * TXFE
 */
class txfe_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txfe_f(bool value = true) : m_value(value) {}
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
 * REACK
 */
class reack_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr reack_f(bool value = true) : m_value(value) {}
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
 * TEACK
 */
class teack_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teack_f(bool value = true) : m_value(value) {}
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
 * WUF
 */
class wuf_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wuf_f(bool value = true) : m_value(value) {}
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
 * RWU
 */
class rwu_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rwu_f(bool value = true) : m_value(value) {}
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
 * SBKF
 */
class sbkf_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sbkf_f(bool value = true) : m_value(value) {}
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
 * CMF
 */
class cmf_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cmf_f(bool value = true) : m_value(value) {}
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
 * BUSY
 */
class busy_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr busy_f(bool value = true) : m_value(value) {}
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
 * ABRF
 */
class abrf_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr abrf_f(bool value = true) : m_value(value) {}
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
 * ABRE
 */
class abre_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr abre_f(bool value = true) : m_value(value) {}
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
 * UDR
 */
class udr_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr udr_f(bool value = true) : m_value(value) {}
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
 * EOBF
 */
class eobf_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr eobf_f(bool value = true) : m_value(value) {}
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
 * RTOF
 */
class rtof_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtof_f(bool value = true) : m_value(value) {}
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
 * CTS
 */
class cts_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cts_f(bool value = true) : m_value(value) {}
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
 * CTSIF
 */
class ctsif_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctsif_f(bool value = true) : m_value(value) {}
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
 * LBDF
 */
class lbdf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lbdf_f(bool value = true) : m_value(value) {}
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
 * TXE
 */
class txe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txe_f(bool value = true) : m_value(value) {}
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
 * TC
 */
class tc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tc_f(bool value = true) : m_value(value) {}
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
 * RXNE
 */
class rxne_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxne_f(bool value = true) : m_value(value) {}
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
 * IDLE
 */
class idle_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idle_f(bool value = true) : m_value(value) {}
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
 * ORE
 */
class ore_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ore_f(bool value = true) : m_value(value) {}
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
 * NF
 */
class nf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nf_f(bool value = true) : m_value(value) {}
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
 * FE
 */
class fe_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fe_f(bool value = true) : m_value(value) {}
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
 * PE
 */
class pe_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txft() const -> txft_f {return txft_f((m_value & txft_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxft() const -> rxft_f {return rxft_f((m_value & rxft_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcbgt() const -> tcbgt_f {return tcbgt_f((m_value & tcbgt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxff() const -> rxff_f {return rxff_f((m_value & rxff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfe() const -> txfe_f {return txfe_f((m_value & txfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto reack() const -> reack_f {return reack_f((m_value & reack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teack() const -> teack_f {return teack_f((m_value & teack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wuf() const -> wuf_f {return wuf_f((m_value & wuf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rwu() const -> rwu_f {return rwu_f((m_value & rwu_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbkf() const -> sbkf_f {return sbkf_f((m_value & sbkf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmf() const -> cmf_f {return cmf_f((m_value & cmf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto busy() const -> busy_f {return busy_f((m_value & busy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abrf() const -> abrf_f {return abrf_f((m_value & abrf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abre() const -> abre_f {return abre_f((m_value & abre_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udr() const -> udr_f {return udr_f((m_value & udr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eobf() const -> eobf_f {return eobf_f((m_value & eobf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtof() const -> rtof_f {return rtof_f((m_value & rtof_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cts() const -> cts_f {return cts_f((m_value & cts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctsif() const -> ctsif_f {return ctsif_f((m_value & ctsif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbdf() const -> lbdf_f {return lbdf_f((m_value & lbdf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txe() const -> txe_f {return txe_f((m_value & txe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tc() const -> tc_f {return tc_f((m_value & tc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxne() const -> rxne_f {return rxne_f((m_value & rxne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idle() const -> idle_f {return idle_f((m_value & idle_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ore() const -> ore_f {return ore_f((m_value & ore_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nf() const -> nf_f {return nf_f((m_value & nf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fe() const -> fe_f {return fe_f((m_value & fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pe() const -> pe_f {return pe_f((m_value & pe_f::Mask) != 0);}

	constexpr isr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(isr_r other) const -> isr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> isr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt flag clear register
 */
class icr_r {
public:

/**
 * Wakeup from Stop mode clear flag
 */
class wucf_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wucf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Character match clear flag
 */
class cmcf_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cmcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * UDRCF
 */
class udrcf_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr udrcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * End of block clear flag
 */
class eobcf_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr eobcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Receiver timeout clear flag
 */
class rtocf_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtocf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTS clear flag
 */
class ctscf_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctscf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LIN break detection clear flag
 */
class lbdcf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lbdcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCBGTCF
 */
class tcbgtcf_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcbgtcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Transmission complete clear flag
 */
class tccf_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tccf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXFECF
 */
class txfecf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Idle line detected clear flag
 */
class idlecf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idlecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Overrun error clear flag
 */
class orecf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr orecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Noise detected clear flag
 */
class ncf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ncf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Framing error clear flag
 */
class fecf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Parity error clear flag
 */
class pecf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto wucf() const -> wucf_f {return wucf_f((m_value & wucf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmcf() const -> cmcf_f {return cmcf_f((m_value & cmcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udrcf() const -> udrcf_f {return udrcf_f((m_value & udrcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eobcf() const -> eobcf_f {return eobcf_f((m_value & eobcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtocf() const -> rtocf_f {return rtocf_f((m_value & rtocf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctscf() const -> ctscf_f {return ctscf_f((m_value & ctscf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbdcf() const -> lbdcf_f {return lbdcf_f((m_value & lbdcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcbgtcf() const -> tcbgtcf_f {return tcbgtcf_f((m_value & tcbgtcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tccf() const -> tccf_f {return tccf_f((m_value & tccf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfecf() const -> txfecf_f {return txfecf_f((m_value & txfecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idlecf() const -> idlecf_f {return idlecf_f((m_value & idlecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto orecf() const -> orecf_f {return orecf_f((m_value & orecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ncf() const -> ncf_f {return ncf_f((m_value & ncf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fecf() const -> fecf_f {return fecf_f((m_value & fecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pecf() const -> pecf_f {return pecf_f((m_value & pecf_f::Mask) != 0);}

	constexpr icr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icr_r other) const -> icr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Receive data register
 */
class rdr_r {
public:

/**
 * Receive data value
 */
class rdr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rdr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator rdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rdr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rdr_r>() const {return ClearSet<rdr_r>(Mask, *this);}
	constexpr auto operator|(rdr_r other) const -> rdr_r { return static_cast<rdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rdr_r> other) const -> ClearSet<rdr_r> {return ClearSet<rdr_r>(rdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rdr() const -> rdr_f {return rdr_f(static_cast<uint16_t>(m_value >> rdr_f::Offset));}

	constexpr rdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rdr_r other) const -> rdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Transmit data register
 */
class tdr_r {
public:

/**
 * Transmit data value
 */
class tdr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tdr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tdr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tdr_r>() const {return ClearSet<tdr_r>(Mask, *this);}
	constexpr auto operator|(tdr_r other) const -> tdr_r { return static_cast<tdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tdr_r> other) const -> ClearSet<tdr_r> {return ClearSet<tdr_r>(tdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto tdr() const -> tdr_f {return tdr_f(static_cast<uint16_t>(m_value >> tdr_f::Offset));}

	constexpr tdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tdr_r other) const -> tdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USART prescaler register
 */
class presc_r {
public:

/**
 * PRESCALER
 */
class prescaler_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr prescaler_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator presc_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(presc_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<presc_r>() const {return ClearSet<presc_r>(Mask, *this);}
	constexpr auto operator|(presc_r other) const -> presc_r { return static_cast<presc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<presc_r> other) const -> ClearSet<presc_r> {return ClearSet<presc_r>(presc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto prescaler() const -> prescaler_f {return prescaler_f(static_cast<uint8_t>(m_value >> prescaler_f::Offset));}

	constexpr presc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(presc_r other) const -> presc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> presc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2 || Index == 3); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,cr3_r> cr3;
	Memory<uint32_t,brr_r> brr;
	Memory<uint32_t,gtpr_r> gtpr;
	Memory<uint32_t,rtor_r> rtor;
	WriteOnlyMemory<uint32_t,rqr_r> rqr;
	ReadOnlyMemory<uint32_t,isr_r> isr;
	WriteOnlyMemory<uint32_t,icr_r> icr;
	ReadOnlyMemory<uint32_t,rdr_r> rdr;
	Memory<uint32_t,tdr_r> tdr;
	Memory<uint32_t,presc_r> presc;
};

template<> struct usart1_p::cr1_r::m_f<1> { using type = usart1_p::cr1_r::m1_f; };
template<> struct usart1_p::cr1_r::m_f<0> { using type = usart1_p::cr1_r::m0_f; };
template<> struct usart1_p::cr1_r::deat_f<4> { using type = usart1_p::cr1_r::deat4_f; };
template<> struct usart1_p::cr1_r::deat_f<3> { using type = usart1_p::cr1_r::deat3_f; };
template<> struct usart1_p::cr1_r::deat_f<2> { using type = usart1_p::cr1_r::deat2_f; };
template<> struct usart1_p::cr1_r::deat_f<1> { using type = usart1_p::cr1_r::deat1_f; };
template<> struct usart1_p::cr1_r::deat_f<0> { using type = usart1_p::cr1_r::deat0_f; };
template<> struct usart1_p::cr1_r::dedt_f<4> { using type = usart1_p::cr1_r::dedt4_f; };
template<> struct usart1_p::cr1_r::dedt_f<3> { using type = usart1_p::cr1_r::dedt3_f; };
template<> struct usart1_p::cr1_r::dedt_f<2> { using type = usart1_p::cr1_r::dedt2_f; };
template<> struct usart1_p::cr1_r::dedt_f<1> { using type = usart1_p::cr1_r::dedt1_f; };
template<> struct usart1_p::cr1_r::dedt_f<0> { using type = usart1_p::cr1_r::dedt0_f; };

template<> struct usart1_p::cr2_r::abrmod_f<1> { using type = usart1_p::cr2_r::abrmod1_f; };
template<> struct usart1_p::cr2_r::abrmod_f<0> { using type = usart1_p::cr2_r::abrmod0_f; };

template<> constexpr auto& usart1_p::cr<1>() { return cr1; }
template<> constexpr auto& usart1_p::cr<2>() { return cr2; }
template<> constexpr auto& usart1_p::cr<3>() { return cr3; }

template<> struct usart1_p::cr_r<1> { using type = usart1_p::cr1_r; };
template<> struct usart1_p::cr_r<2> { using type = usart1_p::cr2_r; };
template<> struct usart1_p::cr_r<3> { using type = usart1_p::cr3_r; };

static_assert(std::is_standard_layout_v<usart1_p>);
static_assert(offsetof(usart1_p, cr1) == usart1_p::cr1_r::Offset);
static_assert(offsetof(usart1_p, cr2) == usart1_p::cr2_r::Offset);
static_assert(offsetof(usart1_p, cr3) == usart1_p::cr3_r::Offset);
static_assert(offsetof(usart1_p, brr) == usart1_p::brr_r::Offset);
static_assert(offsetof(usart1_p, gtpr) == usart1_p::gtpr_r::Offset);
static_assert(offsetof(usart1_p, rtor) == usart1_p::rtor_r::Offset);
static_assert(offsetof(usart1_p, rqr) == usart1_p::rqr_r::Offset);
static_assert(offsetof(usart1_p, isr) == usart1_p::isr_r::Offset);
static_assert(offsetof(usart1_p, icr) == usart1_p::icr_r::Offset);
static_assert(offsetof(usart1_p, rdr) == usart1_p::rdr_r::Offset);
static_assert(offsetof(usart1_p, tdr) == usart1_p::tdr_r::Offset);
static_assert(offsetof(usart1_p, presc) == usart1_p::presc_r::Offset);

/**
 * Universal synchronous asynchronous receiver transmitter
 */
class uart4_p {
public:
/**
 * Control register 1
 */
class cr1_r {
public:

/**
 * RXFFIE
 */
class rxffie_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxffie_f(bool value = true) : m_value(value) {}
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
 * TXFEIE
 */
class txfeie_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txfeie_f(bool value = true) : m_value(value) {}
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
 * FIFOEN
 */
class fifoen_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fifoen_f(bool value = true) : m_value(value) {}
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
 * M1
 */
class m1_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr m1_f(bool value = true) : m_value(value) {}
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
 * End of Block interrupt enable
 */
class eobie_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eobie_f(bool value = true) : m_value(value) {}
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
 * Receiver timeout interrupt enable
 */
class rtoie_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rtoie_f(bool value = true) : m_value(value) {}
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
 * Driver Enable assertion time
 */
class deat4_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat4_f(bool value = true) : m_value(value) {}
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
 * DEAT3
 */
class deat3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat3_f(bool value = true) : m_value(value) {}
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
 * DEAT2
 */
class deat2_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat2_f(bool value = true) : m_value(value) {}
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
 * DEAT1
 */
class deat1_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat1_f(bool value = true) : m_value(value) {}
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
 * DEAT0
 */
class deat0_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat0_f(bool value = true) : m_value(value) {}
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
 * Driver Enable de-assertion time
 */
class dedt4_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt4_f(bool value = true) : m_value(value) {}
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
 * DEDT3
 */
class dedt3_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt3_f(bool value = true) : m_value(value) {}
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
 * DEDT2
 */
class dedt2_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt2_f(bool value = true) : m_value(value) {}
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
 * DEDT1
 */
class dedt1_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt1_f(bool value = true) : m_value(value) {}
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
 * DEDT0
 */
class dedt0_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt0_f(bool value = true) : m_value(value) {}
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
 * Oversampling mode
 */
class over8_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr over8_f(bool value = true) : m_value(value) {}
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
 * Character match interrupt enable
 */
class cmie_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cmie_f(bool value = true) : m_value(value) {}
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
 * Mute mode enable
 */
class mme_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mme_f(bool value = true) : m_value(value) {}
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
 * Word length
 */
class m0_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr m0_f(bool value = true) : m_value(value) {}
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
 * Receiver wakeup method
 */
class wake_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wake_f(bool value = true) : m_value(value) {}
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
 * Parity control enable
 */
class pce_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pce_f(bool value = true) : m_value(value) {}
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
 * Parity selection
 */
class ps_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ps_f(bool value = true) : m_value(value) {}
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
 * PE interrupt enable
 */
class peie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr peie_f(bool value = true) : m_value(value) {}
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
 * interrupt enable
 */
class txeie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txeie_f(bool value = true) : m_value(value) {}
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
 * Transmission complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
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
 * RXNE interrupt enable
 */
class rxneie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxneie_f(bool value = true) : m_value(value) {}
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
 * IDLE interrupt enable
 */
class idleie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idleie_f(bool value = true) : m_value(value) {}
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
 * Transmitter enable
 */
class te_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr te_f(bool value = true) : m_value(value) {}
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
 * Receiver enable
 */
class re_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr re_f(bool value = true) : m_value(value) {}
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
 * USART enable in Stop mode
 */
class uesm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uesm_f(bool value = true) : m_value(value) {}
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
 * USART enable
 */
class ue_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ue_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rxffie() const -> rxffie_f {return rxffie_f((m_value & rxffie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfeie() const -> txfeie_f {return txfeie_f((m_value & txfeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fifoen() const -> fifoen_f {return fifoen_f((m_value & fifoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto m1() const -> m1_f {return m1_f((m_value & m1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eobie() const -> eobie_f {return eobie_f((m_value & eobie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtoie() const -> rtoie_f {return rtoie_f((m_value & rtoie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat4() const -> deat4_f {return deat4_f((m_value & deat4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat3() const -> deat3_f {return deat3_f((m_value & deat3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat2() const -> deat2_f {return deat2_f((m_value & deat2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat1() const -> deat1_f {return deat1_f((m_value & deat1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat0() const -> deat0_f {return deat0_f((m_value & deat0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt4() const -> dedt4_f {return dedt4_f((m_value & dedt4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt3() const -> dedt3_f {return dedt3_f((m_value & dedt3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt2() const -> dedt2_f {return dedt2_f((m_value & dedt2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt1() const -> dedt1_f {return dedt1_f((m_value & dedt1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt0() const -> dedt0_f {return dedt0_f((m_value & dedt0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto over8() const -> over8_f {return over8_f((m_value & over8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmie() const -> cmie_f {return cmie_f((m_value & cmie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mme() const -> mme_f {return mme_f((m_value & mme_f::Mask) != 0);}
	[[nodiscard]] constexpr auto m0() const -> m0_f {return m0_f((m_value & m0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wake() const -> wake_f {return wake_f((m_value & wake_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pce() const -> pce_f {return pce_f((m_value & pce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ps() const -> ps_f {return ps_f((m_value & ps_f::Mask) != 0);}
	[[nodiscard]] constexpr auto peie() const -> peie_f {return peie_f((m_value & peie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txeie() const -> txeie_f {return txeie_f((m_value & txeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxneie() const -> rxneie_f {return rxneie_f((m_value & rxneie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idleie() const -> idleie_f {return idleie_f((m_value & idleie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto te() const -> te_f {return te_f((m_value & te_f::Mask) != 0);}
	[[nodiscard]] constexpr auto re() const -> re_f {return re_f((m_value & re_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uesm() const -> uesm_f {return uesm_f((m_value & uesm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ue() const -> ue_f {return ue_f((m_value & ue_f::Mask) != 0);}

	template<std::size_t Index> struct m_f { static_assert(Index == 1 || Index == 0); };
	template<std::size_t Index> using m_v = typename m_f<Index>::type;
	template<std::size_t Index> constexpr auto m() const { return m_v<Index>::get(*this); }

	template<std::size_t Index> struct deat_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using deat_v = typename deat_f<Index>::type;
	template<std::size_t Index> constexpr auto deat() const { return deat_v<Index>::get(*this); }

	template<std::size_t Index> struct dedt_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using dedt_v = typename dedt_f<Index>::type;
	template<std::size_t Index> constexpr auto dedt() const { return dedt_v<Index>::get(*this); }

	constexpr cr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr1_r other) const -> cr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Control register 2
 */
class cr2_r {
public:

/**
 * Address of the USART node
 */
class add4_7_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr add4_7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Address of the USART node
 */
class add0_3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr add0_3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Receiver timeout enable
 */
class rtoen_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rtoen_f(bool value = true) : m_value(value) {}
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
 * Auto baud rate mode
 */
class abrmod1_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr abrmod1_f(bool value = true) : m_value(value) {}
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
 * ABRMOD0
 */
class abrmod0_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr abrmod0_f(bool value = true) : m_value(value) {}
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
 * Auto baud rate enable
 */
class abren_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr abren_f(bool value = true) : m_value(value) {}
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
 * Most significant bit first
 */
class msbfirst_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr msbfirst_f(bool value = true) : m_value(value) {}
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
 * Binary data inversion
 */
class tainv_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tainv_f(bool value = true) : m_value(value) {}
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
 * TX pin active level inversion
 */
class txinv_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txinv_f(bool value = true) : m_value(value) {}
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
 * RX pin active level inversion
 */
class rxinv_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxinv_f(bool value = true) : m_value(value) {}
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
 * Swap TX/RX pins
 */
class swap_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swap_f(bool value = true) : m_value(value) {}
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
 * LIN mode enable
 */
class linen_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr linen_f(bool value = true) : m_value(value) {}
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
 * STOP bits
 */
class stop_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stop_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Clock enable
 */
class clken_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr clken_f(bool value = true) : m_value(value) {}
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
 * Clock polarity
 */
class cpol_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cpol_f(bool value = true) : m_value(value) {}
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
 * Clock phase
 */
class cpha_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cpha_f(bool value = true) : m_value(value) {}
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
 * Last bit clock pulse
 */
class lbcl_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lbcl_f(bool value = true) : m_value(value) {}
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
 * LIN break detection interrupt enable
 */
class lbdie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lbdie_f(bool value = true) : m_value(value) {}
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
 * LIN break detection length
 */
class lbdl_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lbdl_f(bool value = true) : m_value(value) {}
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
 * 7-bit Address Detection/4-bit Address Detection
 */
class addm7_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr addm7_f(bool value = true) : m_value(value) {}
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
 * DIS_NSS
 */
class dis_nss_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dis_nss_f(bool value = true) : m_value(value) {}
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
 * SLVEN
 */
class slven_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr slven_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto add4_7() const -> add4_7_f {return add4_7_f(static_cast<uint8_t>(m_value >> add4_7_f::Offset));}
	[[nodiscard]] constexpr auto add0_3() const -> add0_3_f {return add0_3_f(static_cast<uint8_t>(m_value >> add0_3_f::Offset));}
	[[nodiscard]] constexpr auto rtoen() const -> rtoen_f {return rtoen_f((m_value & rtoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abrmod1() const -> abrmod1_f {return abrmod1_f((m_value & abrmod1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abrmod0() const -> abrmod0_f {return abrmod0_f((m_value & abrmod0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abren() const -> abren_f {return abren_f((m_value & abren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto msbfirst() const -> msbfirst_f {return msbfirst_f((m_value & msbfirst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tainv() const -> tainv_f {return tainv_f((m_value & tainv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txinv() const -> txinv_f {return txinv_f((m_value & txinv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxinv() const -> rxinv_f {return rxinv_f((m_value & rxinv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swap() const -> swap_f {return swap_f((m_value & swap_f::Mask) != 0);}
	[[nodiscard]] constexpr auto linen() const -> linen_f {return linen_f((m_value & linen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stop() const -> stop_f {return stop_f(static_cast<uint8_t>(m_value >> stop_f::Offset));}
	[[nodiscard]] constexpr auto clken() const -> clken_f {return clken_f((m_value & clken_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpol() const -> cpol_f {return cpol_f((m_value & cpol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cpha() const -> cpha_f {return cpha_f((m_value & cpha_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbcl() const -> lbcl_f {return lbcl_f((m_value & lbcl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbdie() const -> lbdie_f {return lbdie_f((m_value & lbdie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbdl() const -> lbdl_f {return lbdl_f((m_value & lbdl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto addm7() const -> addm7_f {return addm7_f((m_value & addm7_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dis_nss() const -> dis_nss_f {return dis_nss_f((m_value & dis_nss_f::Mask) != 0);}
	[[nodiscard]] constexpr auto slven() const -> slven_f {return slven_f((m_value & slven_f::Mask) != 0);}

	template<std::size_t Index> struct abrmod_f { static_assert(Index == 1 || Index == 0); };
	template<std::size_t Index> using abrmod_v = typename abrmod_f<Index>::type;
	template<std::size_t Index> constexpr auto abrmod() const { return abrmod_v<Index>::get(*this); }

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
 * Control register 3
 */
class cr3_r {
public:

/**
 * TXFTCFG
 */
class txftcfg_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr txftcfg_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RXFTIE
 */
class rxftie_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxftie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXFTCFG
 */
class rxftcfg_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rxftcfg_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TCBGTIE
 */
class tcbgtie_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcbgtie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXFTIE
 */
class txftie_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txftie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup from Stop mode interrupt enable
 */
class wufie_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wufie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup from Stop mode interrupt flag selection
 */
class wus_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr wus_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Smartcard auto-retry count
 */
class scarcnt_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr scarcnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Driver enable polarity selection
 */
class dep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Driver enable mode
 */
class dem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA Disable on Reception Error
 */
class ddre_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ddre_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Overrun Disable
 */
class ovrdis_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ovrdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * One sample bit method enable
 */
class onebit_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr onebit_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTS interrupt enable
 */
class ctsie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctsie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTS enable
 */
class ctse_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RTS enable
 */
class rtse_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA enable transmitter
 */
class dmat_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmat_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA enable receiver
 */
class dmar_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmar_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Smartcard mode enable
 */
class scen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr scen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Smartcard NACK enable
 */
class nack_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nack_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Half-duplex selection
 */
class hdsel_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hdsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Ir low-power
 */
class irlp_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr irlp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Ir mode enable
 */
class iren_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr iren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Error interrupt enable
 */
class eie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txftcfg() const -> txftcfg_f {return txftcfg_f(static_cast<uint8_t>(m_value >> txftcfg_f::Offset));}
	[[nodiscard]] constexpr auto rxftie() const -> rxftie_f {return rxftie_f((m_value & rxftie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxftcfg() const -> rxftcfg_f {return rxftcfg_f(static_cast<uint8_t>(m_value >> rxftcfg_f::Offset));}
	[[nodiscard]] constexpr auto tcbgtie() const -> tcbgtie_f {return tcbgtie_f((m_value & tcbgtie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txftie() const -> txftie_f {return txftie_f((m_value & txftie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wufie() const -> wufie_f {return wufie_f((m_value & wufie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wus() const -> wus_f {return wus_f(static_cast<uint8_t>(m_value >> wus_f::Offset));}
	[[nodiscard]] constexpr auto scarcnt() const -> scarcnt_f {return scarcnt_f(static_cast<uint8_t>(m_value >> scarcnt_f::Offset));}
	[[nodiscard]] constexpr auto dep() const -> dep_f {return dep_f((m_value & dep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dem() const -> dem_f {return dem_f((m_value & dem_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ddre() const -> ddre_f {return ddre_f((m_value & ddre_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrdis() const -> ovrdis_f {return ovrdis_f((m_value & ovrdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto onebit() const -> onebit_f {return onebit_f((m_value & onebit_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctsie() const -> ctsie_f {return ctsie_f((m_value & ctsie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctse() const -> ctse_f {return ctse_f((m_value & ctse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtse() const -> rtse_f {return rtse_f((m_value & rtse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmat() const -> dmat_f {return dmat_f((m_value & dmat_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmar() const -> dmar_f {return dmar_f((m_value & dmar_f::Mask) != 0);}
	[[nodiscard]] constexpr auto scen() const -> scen_f {return scen_f((m_value & scen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nack() const -> nack_f {return nack_f((m_value & nack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hdsel() const -> hdsel_f {return hdsel_f((m_value & hdsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto irlp() const -> irlp_f {return irlp_f((m_value & irlp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iren() const -> iren_f {return iren_f((m_value & iren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eie() const -> eie_f {return eie_f((m_value & eie_f::Mask) != 0);}

	constexpr cr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr3_r other) const -> cr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Baud rate register
 */
class brr_r {
public:

/**
 * DIV_Mantissa
 */
class div_mantissa_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr div_mantissa_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator brr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(brr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DIV_Fraction
 */
class div_fraction_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr div_fraction_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator brr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(brr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto div_mantissa() const -> div_mantissa_f {return div_mantissa_f(static_cast<uint16_t>(m_value >> div_mantissa_f::Offset));}
	[[nodiscard]] constexpr auto div_fraction() const -> div_fraction_f {return div_fraction_f(static_cast<uint8_t>(m_value >> div_fraction_f::Offset));}

	constexpr brr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(brr_r other) const -> brr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> brr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Guard time and prescaler register
 */
class gtpr_r {
public:

/**
 * Guard time value
 */
class gt_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr gt_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator gtpr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(gtpr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<gtpr_r>() const {return ClearSet<gtpr_r>(Mask, *this);}
	constexpr auto operator|(gtpr_r other) const -> gtpr_r { return static_cast<gtpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<gtpr_r> other) const -> ClearSet<gtpr_r> {return ClearSet<gtpr_r>(gtpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Prescaler value
 */
class psc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr psc_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator gtpr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(gtpr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<gtpr_r>() const {return ClearSet<gtpr_r>(Mask, *this);}
	constexpr auto operator|(gtpr_r other) const -> gtpr_r { return static_cast<gtpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<gtpr_r> other) const -> ClearSet<gtpr_r> {return ClearSet<gtpr_r>(gtpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto gt() const -> gt_f {return gt_f(static_cast<uint8_t>(m_value >> gt_f::Offset));}
	[[nodiscard]] constexpr auto psc() const -> psc_f {return psc_f(static_cast<uint8_t>(m_value >> psc_f::Offset));}

	constexpr gtpr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(gtpr_r other) const -> gtpr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> gtpr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Receiver timeout register
 */
class rtor_r {
public:

/**
 * Block Length
 */
class blen_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr blen_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rtor_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rtor_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtor_r>() const {return ClearSet<rtor_r>(Mask, *this);}
	constexpr auto operator|(rtor_r other) const -> rtor_r { return static_cast<rtor_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtor_r> other) const -> ClearSet<rtor_r> {return ClearSet<rtor_r>(rtor_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Receiver timeout value
 */
class rto_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 24;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rto_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator rtor_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rtor_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rtor_r>() const {return ClearSet<rtor_r>(Mask, *this);}
	constexpr auto operator|(rtor_r other) const -> rtor_r { return static_cast<rtor_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rtor_r> other) const -> ClearSet<rtor_r> {return ClearSet<rtor_r>(rtor_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto blen() const -> blen_f {return blen_f(static_cast<uint8_t>(m_value >> blen_f::Offset));}
	[[nodiscard]] constexpr auto rto() const -> rto_f {return rto_f(static_cast<uint32_t>(m_value >> rto_f::Offset));}

	constexpr rtor_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rtor_r other) const -> rtor_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rtor_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Request register
 */
class rqr_r {
public:

/**
 * Transmit data flush request
 */
class txfrq_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Receive data flush request
 */
class rxfrq_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxfrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute mode request
 */
class mmrq_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mmrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Send break request
 */
class sbkrq_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sbkrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Auto baud rate request
 */
class abrrq_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr abrrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txfrq() const -> txfrq_f {return txfrq_f((m_value & txfrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfrq() const -> rxfrq_f {return rxfrq_f((m_value & rxfrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mmrq() const -> mmrq_f {return mmrq_f((m_value & mmrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbkrq() const -> sbkrq_f {return sbkrq_f((m_value & sbkrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abrrq() const -> abrrq_f {return abrrq_f((m_value & abrrq_f::Mask) != 0);}

	constexpr rqr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rqr_r other) const -> rqr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rqr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt & status register
 */
class isr_r {
public:

/**
 * TXFT
 */
class txft_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txft_f(bool value = true) : m_value(value) {}
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
 * RXFT
 */
class rxft_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxft_f(bool value = true) : m_value(value) {}
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
 * TCBGT
 */
class tcbgt_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tcbgt_f(bool value = true) : m_value(value) {}
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
 * RXFF
 */
class rxff_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxff_f(bool value = true) : m_value(value) {}
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
 * TXFE
 */
class txfe_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txfe_f(bool value = true) : m_value(value) {}
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
 * REACK
 */
class reack_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr reack_f(bool value = true) : m_value(value) {}
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
 * TEACK
 */
class teack_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teack_f(bool value = true) : m_value(value) {}
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
 * WUF
 */
class wuf_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wuf_f(bool value = true) : m_value(value) {}
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
 * RWU
 */
class rwu_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rwu_f(bool value = true) : m_value(value) {}
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
 * SBKF
 */
class sbkf_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sbkf_f(bool value = true) : m_value(value) {}
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
 * CMF
 */
class cmf_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cmf_f(bool value = true) : m_value(value) {}
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
 * BUSY
 */
class busy_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr busy_f(bool value = true) : m_value(value) {}
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
 * ABRF
 */
class abrf_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr abrf_f(bool value = true) : m_value(value) {}
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
 * ABRE
 */
class abre_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr abre_f(bool value = true) : m_value(value) {}
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
 * UDR
 */
class udr_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr udr_f(bool value = true) : m_value(value) {}
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
 * EOBF
 */
class eobf_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr eobf_f(bool value = true) : m_value(value) {}
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
 * RTOF
 */
class rtof_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtof_f(bool value = true) : m_value(value) {}
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
 * CTS
 */
class cts_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cts_f(bool value = true) : m_value(value) {}
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
 * CTSIF
 */
class ctsif_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctsif_f(bool value = true) : m_value(value) {}
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
 * LBDF
 */
class lbdf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lbdf_f(bool value = true) : m_value(value) {}
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
 * TXE
 */
class txe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txe_f(bool value = true) : m_value(value) {}
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
 * TC
 */
class tc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tc_f(bool value = true) : m_value(value) {}
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
 * RXNE
 */
class rxne_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxne_f(bool value = true) : m_value(value) {}
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
 * IDLE
 */
class idle_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idle_f(bool value = true) : m_value(value) {}
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
 * ORE
 */
class ore_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ore_f(bool value = true) : m_value(value) {}
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
 * NF
 */
class nf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nf_f(bool value = true) : m_value(value) {}
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
 * FE
 */
class fe_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fe_f(bool value = true) : m_value(value) {}
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
 * PE
 */
class pe_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txft() const -> txft_f {return txft_f((m_value & txft_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxft() const -> rxft_f {return rxft_f((m_value & rxft_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcbgt() const -> tcbgt_f {return tcbgt_f((m_value & tcbgt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxff() const -> rxff_f {return rxff_f((m_value & rxff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfe() const -> txfe_f {return txfe_f((m_value & txfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto reack() const -> reack_f {return reack_f((m_value & reack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teack() const -> teack_f {return teack_f((m_value & teack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wuf() const -> wuf_f {return wuf_f((m_value & wuf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rwu() const -> rwu_f {return rwu_f((m_value & rwu_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbkf() const -> sbkf_f {return sbkf_f((m_value & sbkf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmf() const -> cmf_f {return cmf_f((m_value & cmf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto busy() const -> busy_f {return busy_f((m_value & busy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abrf() const -> abrf_f {return abrf_f((m_value & abrf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto abre() const -> abre_f {return abre_f((m_value & abre_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udr() const -> udr_f {return udr_f((m_value & udr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eobf() const -> eobf_f {return eobf_f((m_value & eobf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtof() const -> rtof_f {return rtof_f((m_value & rtof_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cts() const -> cts_f {return cts_f((m_value & cts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctsif() const -> ctsif_f {return ctsif_f((m_value & ctsif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbdf() const -> lbdf_f {return lbdf_f((m_value & lbdf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txe() const -> txe_f {return txe_f((m_value & txe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tc() const -> tc_f {return tc_f((m_value & tc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxne() const -> rxne_f {return rxne_f((m_value & rxne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idle() const -> idle_f {return idle_f((m_value & idle_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ore() const -> ore_f {return ore_f((m_value & ore_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nf() const -> nf_f {return nf_f((m_value & nf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fe() const -> fe_f {return fe_f((m_value & fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pe() const -> pe_f {return pe_f((m_value & pe_f::Mask) != 0);}

	constexpr isr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(isr_r other) const -> isr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> isr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0b11000000; // 192 0xC0

private:
	uint32_t m_value;
};
/**
 * Interrupt flag clear register
 */
class icr_r {
public:

/**
 * Wakeup from Stop mode clear flag
 */
class wucf_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wucf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Character match clear flag
 */
class cmcf_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cmcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * UDRCF
 */
class udrcf_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr udrcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * End of block clear flag
 */
class eobcf_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr eobcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Receiver timeout clear flag
 */
class rtocf_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtocf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTS clear flag
 */
class ctscf_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctscf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LIN break detection clear flag
 */
class lbdcf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lbdcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TCBGTCF
 */
class tcbgtcf_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcbgtcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Transmission complete clear flag
 */
class tccf_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tccf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TXFECF
 */
class txfecf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Idle line detected clear flag
 */
class idlecf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idlecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Overrun error clear flag
 */
class orecf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr orecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Noise detected clear flag
 */
class ncf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ncf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Framing error clear flag
 */
class fecf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Parity error clear flag
 */
class pecf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto wucf() const -> wucf_f {return wucf_f((m_value & wucf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmcf() const -> cmcf_f {return cmcf_f((m_value & cmcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udrcf() const -> udrcf_f {return udrcf_f((m_value & udrcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eobcf() const -> eobcf_f {return eobcf_f((m_value & eobcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtocf() const -> rtocf_f {return rtocf_f((m_value & rtocf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctscf() const -> ctscf_f {return ctscf_f((m_value & ctscf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lbdcf() const -> lbdcf_f {return lbdcf_f((m_value & lbdcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcbgtcf() const -> tcbgtcf_f {return tcbgtcf_f((m_value & tcbgtcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tccf() const -> tccf_f {return tccf_f((m_value & tccf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfecf() const -> txfecf_f {return txfecf_f((m_value & txfecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idlecf() const -> idlecf_f {return idlecf_f((m_value & idlecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto orecf() const -> orecf_f {return orecf_f((m_value & orecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ncf() const -> ncf_f {return ncf_f((m_value & ncf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fecf() const -> fecf_f {return fecf_f((m_value & fecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pecf() const -> pecf_f {return pecf_f((m_value & pecf_f::Mask) != 0);}

	constexpr icr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icr_r other) const -> icr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Receive data register
 */
class rdr_r {
public:

/**
 * Receive data value
 */
class rdr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rdr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator rdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rdr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rdr_r>() const {return ClearSet<rdr_r>(Mask, *this);}
	constexpr auto operator|(rdr_r other) const -> rdr_r { return static_cast<rdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rdr_r> other) const -> ClearSet<rdr_r> {return ClearSet<rdr_r>(rdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rdr() const -> rdr_f {return rdr_f(static_cast<uint16_t>(m_value >> rdr_f::Offset));}

	constexpr rdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rdr_r other) const -> rdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Transmit data register
 */
class tdr_r {
public:

/**
 * Transmit data value
 */
class tdr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tdr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tdr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tdr_r>() const {return ClearSet<tdr_r>(Mask, *this);}
	constexpr auto operator|(tdr_r other) const -> tdr_r { return static_cast<tdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tdr_r> other) const -> ClearSet<tdr_r> {return ClearSet<tdr_r>(tdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto tdr() const -> tdr_f {return tdr_f(static_cast<uint16_t>(m_value >> tdr_f::Offset));}

	constexpr tdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tdr_r other) const -> tdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USART prescaler register
 */
class presc_r {
public:

/**
 * PRESCALER
 */
class prescaler_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr prescaler_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator presc_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(presc_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<presc_r>() const {return ClearSet<presc_r>(Mask, *this);}
	constexpr auto operator|(presc_r other) const -> presc_r { return static_cast<presc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<presc_r> other) const -> ClearSet<presc_r> {return ClearSet<presc_r>(presc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto prescaler() const -> prescaler_f {return prescaler_f(static_cast<uint8_t>(m_value >> prescaler_f::Offset));}

	constexpr presc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(presc_r other) const -> presc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> presc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2 || Index == 3); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,cr3_r> cr3;
	Memory<uint32_t,brr_r> brr;
	Memory<uint32_t,gtpr_r> gtpr;
	Memory<uint32_t,rtor_r> rtor;
	WriteOnlyMemory<uint32_t,rqr_r> rqr;
	ReadOnlyMemory<uint32_t,isr_r> isr;
	WriteOnlyMemory<uint32_t,icr_r> icr;
	ReadOnlyMemory<uint32_t,rdr_r> rdr;
	Memory<uint32_t,tdr_r> tdr;
	Memory<uint32_t,presc_r> presc;
};

template<> struct uart4_p::cr1_r::m_f<1> { using type = uart4_p::cr1_r::m1_f; };
template<> struct uart4_p::cr1_r::m_f<0> { using type = uart4_p::cr1_r::m0_f; };
template<> struct uart4_p::cr1_r::deat_f<4> { using type = uart4_p::cr1_r::deat4_f; };
template<> struct uart4_p::cr1_r::deat_f<3> { using type = uart4_p::cr1_r::deat3_f; };
template<> struct uart4_p::cr1_r::deat_f<2> { using type = uart4_p::cr1_r::deat2_f; };
template<> struct uart4_p::cr1_r::deat_f<1> { using type = uart4_p::cr1_r::deat1_f; };
template<> struct uart4_p::cr1_r::deat_f<0> { using type = uart4_p::cr1_r::deat0_f; };
template<> struct uart4_p::cr1_r::dedt_f<4> { using type = uart4_p::cr1_r::dedt4_f; };
template<> struct uart4_p::cr1_r::dedt_f<3> { using type = uart4_p::cr1_r::dedt3_f; };
template<> struct uart4_p::cr1_r::dedt_f<2> { using type = uart4_p::cr1_r::dedt2_f; };
template<> struct uart4_p::cr1_r::dedt_f<1> { using type = uart4_p::cr1_r::dedt1_f; };
template<> struct uart4_p::cr1_r::dedt_f<0> { using type = uart4_p::cr1_r::dedt0_f; };

template<> struct uart4_p::cr2_r::abrmod_f<1> { using type = uart4_p::cr2_r::abrmod1_f; };
template<> struct uart4_p::cr2_r::abrmod_f<0> { using type = uart4_p::cr2_r::abrmod0_f; };

template<> constexpr auto& uart4_p::cr<1>() { return cr1; }
template<> constexpr auto& uart4_p::cr<2>() { return cr2; }
template<> constexpr auto& uart4_p::cr<3>() { return cr3; }

template<> struct uart4_p::cr_r<1> { using type = uart4_p::cr1_r; };
template<> struct uart4_p::cr_r<2> { using type = uart4_p::cr2_r; };
template<> struct uart4_p::cr_r<3> { using type = uart4_p::cr3_r; };

static_assert(std::is_standard_layout_v<uart4_p>);
static_assert(offsetof(uart4_p, cr1) == uart4_p::cr1_r::Offset);
static_assert(offsetof(uart4_p, cr2) == uart4_p::cr2_r::Offset);
static_assert(offsetof(uart4_p, cr3) == uart4_p::cr3_r::Offset);
static_assert(offsetof(uart4_p, brr) == uart4_p::brr_r::Offset);
static_assert(offsetof(uart4_p, gtpr) == uart4_p::gtpr_r::Offset);
static_assert(offsetof(uart4_p, rtor) == uart4_p::rtor_r::Offset);
static_assert(offsetof(uart4_p, rqr) == uart4_p::rqr_r::Offset);
static_assert(offsetof(uart4_p, isr) == uart4_p::isr_r::Offset);
static_assert(offsetof(uart4_p, icr) == uart4_p::icr_r::Offset);
static_assert(offsetof(uart4_p, rdr) == uart4_p::rdr_r::Offset);
static_assert(offsetof(uart4_p, tdr) == uart4_p::tdr_r::Offset);
static_assert(offsetof(uart4_p, presc) == uart4_p::presc_r::Offset);

/**
 * Universal synchronous asynchronous receiver transmitter
 */
class lpuart1_p {
public:
/**
 * Control register 1
 */
class cr1_r {
public:

/**
 * RXFFIE
 */
class rxffie_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxffie_f(bool value = true) : m_value(value) {}
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
 * TXFEIE
 */
class txfeie_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txfeie_f(bool value = true) : m_value(value) {}
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
 * FIFOEN
 */
class fifoen_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fifoen_f(bool value = true) : m_value(value) {}
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
 * Word length
 */
class m1_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr m1_f(bool value = true) : m_value(value) {}
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
 * Driver Enable assertion time
 */
class deat4_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat4_f(bool value = true) : m_value(value) {}
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
 * DEAT3
 */
class deat3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat3_f(bool value = true) : m_value(value) {}
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
 * DEAT2
 */
class deat2_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat2_f(bool value = true) : m_value(value) {}
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
 * DEAT1
 */
class deat1_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat1_f(bool value = true) : m_value(value) {}
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
 * DEAT0
 */
class deat0_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr deat0_f(bool value = true) : m_value(value) {}
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
 * Driver Enable de-assertion time
 */
class dedt4_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt4_f(bool value = true) : m_value(value) {}
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
 * DEDT3
 */
class dedt3_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt3_f(bool value = true) : m_value(value) {}
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
 * DEDT2
 */
class dedt2_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt2_f(bool value = true) : m_value(value) {}
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
 * DEDT1
 */
class dedt1_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt1_f(bool value = true) : m_value(value) {}
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
 * DEDT0
 */
class dedt0_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dedt0_f(bool value = true) : m_value(value) {}
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
 * Character match interrupt enable
 */
class cmie_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cmie_f(bool value = true) : m_value(value) {}
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
 * Mute mode enable
 */
class mme_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mme_f(bool value = true) : m_value(value) {}
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
 * Word length
 */
class m0_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr m0_f(bool value = true) : m_value(value) {}
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
 * Receiver wakeup method
 */
class wake_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wake_f(bool value = true) : m_value(value) {}
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
 * Parity control enable
 */
class pce_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pce_f(bool value = true) : m_value(value) {}
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
 * Parity selection
 */
class ps_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ps_f(bool value = true) : m_value(value) {}
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
 * PE interrupt enable
 */
class peie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr peie_f(bool value = true) : m_value(value) {}
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
 * interrupt enable
 */
class txeie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txeie_f(bool value = true) : m_value(value) {}
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
 * Transmission complete interrupt enable
 */
class tcie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tcie_f(bool value = true) : m_value(value) {}
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
 * RXNE interrupt enable
 */
class rxneie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxneie_f(bool value = true) : m_value(value) {}
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
 * IDLE interrupt enable
 */
class idleie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idleie_f(bool value = true) : m_value(value) {}
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
 * Transmitter enable
 */
class te_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr te_f(bool value = true) : m_value(value) {}
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
 * Receiver enable
 */
class re_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr re_f(bool value = true) : m_value(value) {}
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
 * USART enable in Stop mode
 */
class uesm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uesm_f(bool value = true) : m_value(value) {}
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
 * USART enable
 */
class ue_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ue_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rxffie() const -> rxffie_f {return rxffie_f((m_value & rxffie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfeie() const -> txfeie_f {return txfeie_f((m_value & txfeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fifoen() const -> fifoen_f {return fifoen_f((m_value & fifoen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto m1() const -> m1_f {return m1_f((m_value & m1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat4() const -> deat4_f {return deat4_f((m_value & deat4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat3() const -> deat3_f {return deat3_f((m_value & deat3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat2() const -> deat2_f {return deat2_f((m_value & deat2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat1() const -> deat1_f {return deat1_f((m_value & deat1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto deat0() const -> deat0_f {return deat0_f((m_value & deat0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt4() const -> dedt4_f {return dedt4_f((m_value & dedt4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt3() const -> dedt3_f {return dedt3_f((m_value & dedt3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt2() const -> dedt2_f {return dedt2_f((m_value & dedt2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt1() const -> dedt1_f {return dedt1_f((m_value & dedt1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dedt0() const -> dedt0_f {return dedt0_f((m_value & dedt0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmie() const -> cmie_f {return cmie_f((m_value & cmie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mme() const -> mme_f {return mme_f((m_value & mme_f::Mask) != 0);}
	[[nodiscard]] constexpr auto m0() const -> m0_f {return m0_f((m_value & m0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wake() const -> wake_f {return wake_f((m_value & wake_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pce() const -> pce_f {return pce_f((m_value & pce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ps() const -> ps_f {return ps_f((m_value & ps_f::Mask) != 0);}
	[[nodiscard]] constexpr auto peie() const -> peie_f {return peie_f((m_value & peie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txeie() const -> txeie_f {return txeie_f((m_value & txeie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tcie() const -> tcie_f {return tcie_f((m_value & tcie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxneie() const -> rxneie_f {return rxneie_f((m_value & rxneie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idleie() const -> idleie_f {return idleie_f((m_value & idleie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto te() const -> te_f {return te_f((m_value & te_f::Mask) != 0);}
	[[nodiscard]] constexpr auto re() const -> re_f {return re_f((m_value & re_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uesm() const -> uesm_f {return uesm_f((m_value & uesm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ue() const -> ue_f {return ue_f((m_value & ue_f::Mask) != 0);}

	template<std::size_t Index> struct m_f { static_assert(Index == 1 || Index == 0); };
	template<std::size_t Index> using m_v = typename m_f<Index>::type;
	template<std::size_t Index> constexpr auto m() const { return m_v<Index>::get(*this); }

	template<std::size_t Index> struct deat_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using deat_v = typename deat_f<Index>::type;
	template<std::size_t Index> constexpr auto deat() const { return deat_v<Index>::get(*this); }

	template<std::size_t Index> struct dedt_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1 || Index == 0); };
	template<std::size_t Index> using dedt_v = typename dedt_f<Index>::type;
	template<std::size_t Index> constexpr auto dedt() const { return dedt_v<Index>::get(*this); }

	constexpr cr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr1_r other) const -> cr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Control register 2
 */
class cr2_r {
public:

/**
 * Address of the USART node
 */
class add4_7_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr add4_7_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Address of the USART node
 */
class add0_3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr add0_3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Most significant bit first
 */
class msbfirst_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr msbfirst_f(bool value = true) : m_value(value) {}
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
 * Binary data inversion
 */
class tainv_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tainv_f(bool value = true) : m_value(value) {}
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
 * TX pin active level inversion
 */
class txinv_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txinv_f(bool value = true) : m_value(value) {}
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
 * RX pin active level inversion
 */
class rxinv_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxinv_f(bool value = true) : m_value(value) {}
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
 * Swap TX/RX pins
 */
class swap_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr swap_f(bool value = true) : m_value(value) {}
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
 * STOP bits
 */
class stop_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stop_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * 7-bit Address Detection/4-bit Address Detection
 */
class addm7_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr addm7_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto add4_7() const -> add4_7_f {return add4_7_f(static_cast<uint8_t>(m_value >> add4_7_f::Offset));}
	[[nodiscard]] constexpr auto add0_3() const -> add0_3_f {return add0_3_f(static_cast<uint8_t>(m_value >> add0_3_f::Offset));}
	[[nodiscard]] constexpr auto msbfirst() const -> msbfirst_f {return msbfirst_f((m_value & msbfirst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tainv() const -> tainv_f {return tainv_f((m_value & tainv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txinv() const -> txinv_f {return txinv_f((m_value & txinv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxinv() const -> rxinv_f {return rxinv_f((m_value & rxinv_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swap() const -> swap_f {return swap_f((m_value & swap_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stop() const -> stop_f {return stop_f(static_cast<uint8_t>(m_value >> stop_f::Offset));}
	[[nodiscard]] constexpr auto addm7() const -> addm7_f {return addm7_f((m_value & addm7_f::Mask) != 0);}

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
 * Control register 3
 */
class cr3_r {
public:

/**
 * TXFTCFG
 */
class txftcfg_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr txftcfg_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * RXFTIE
 */
class rxftie_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxftie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXFTCFG
 */
class rxftcfg_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr rxftcfg_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TXFTIE
 */
class txftie_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txftie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup from Stop mode interrupt enable
 */
class wufie_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wufie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup from Stop mode interrupt flag selection
 */
class wus_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr wus_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr3_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Driver enable polarity selection
 */
class dep_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dep_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Driver enable mode
 */
class dem_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dem_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA Disable on Reception Error
 */
class ddre_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ddre_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Overrun Disable
 */
class ovrdis_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ovrdis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTS interrupt enable
 */
class ctsie_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctsie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTS enable
 */
class ctse_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RTS enable
 */
class rtse_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rtse_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA enable transmitter
 */
class dmat_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmat_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA enable receiver
 */
class dmar_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dmar_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Half-duplex selection
 */
class hdsel_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hdsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Error interrupt enable
 */
class eie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr3_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr3_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr3_r>() const {return ClearSet<cr3_r>(Mask, *this);}
	constexpr auto operator|(cr3_r other) const -> cr3_r { return static_cast<cr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr3_r> other) const -> ClearSet<cr3_r> {return ClearSet<cr3_r>(cr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txftcfg() const -> txftcfg_f {return txftcfg_f(static_cast<uint8_t>(m_value >> txftcfg_f::Offset));}
	[[nodiscard]] constexpr auto rxftie() const -> rxftie_f {return rxftie_f((m_value & rxftie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxftcfg() const -> rxftcfg_f {return rxftcfg_f(static_cast<uint8_t>(m_value >> rxftcfg_f::Offset));}
	[[nodiscard]] constexpr auto txftie() const -> txftie_f {return txftie_f((m_value & txftie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wufie() const -> wufie_f {return wufie_f((m_value & wufie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wus() const -> wus_f {return wus_f(static_cast<uint8_t>(m_value >> wus_f::Offset));}
	[[nodiscard]] constexpr auto dep() const -> dep_f {return dep_f((m_value & dep_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dem() const -> dem_f {return dem_f((m_value & dem_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ddre() const -> ddre_f {return ddre_f((m_value & ddre_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovrdis() const -> ovrdis_f {return ovrdis_f((m_value & ovrdis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctsie() const -> ctsie_f {return ctsie_f((m_value & ctsie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctse() const -> ctse_f {return ctse_f((m_value & ctse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rtse() const -> rtse_f {return rtse_f((m_value & rtse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmat() const -> dmat_f {return dmat_f((m_value & dmat_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmar() const -> dmar_f {return dmar_f((m_value & dmar_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hdsel() const -> hdsel_f {return hdsel_f((m_value & hdsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eie() const -> eie_f {return eie_f((m_value & eie_f::Mask) != 0);}

	constexpr cr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr3_r other) const -> cr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Baud rate register
 */
class brr_r {
public:

/**
 * BRR
 */
class brr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 20;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr brr_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator brr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(brr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<brr_r>() const {return ClearSet<brr_r>(Mask, *this);}
	constexpr auto operator|(brr_r other) const -> brr_r { return static_cast<brr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<brr_r> other) const -> ClearSet<brr_r> {return ClearSet<brr_r>(brr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto brr() const -> brr_f {return brr_f(static_cast<uint32_t>(m_value >> brr_f::Offset));}

	constexpr brr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(brr_r other) const -> brr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> brr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Request register
 */
class rqr_r {
public:

/**
 * TXFRQ
 */
class txfrq_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txfrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Receive data flush request
 */
class rxfrq_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxfrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Mute mode request
 */
class mmrq_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mmrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Send break request
 */
class sbkrq_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sbkrq_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rqr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rqr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rqr_r>() const {return ClearSet<rqr_r>(Mask, *this);}
	constexpr auto operator|(rqr_r other) const -> rqr_r { return static_cast<rqr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rqr_r> other) const -> ClearSet<rqr_r> {return ClearSet<rqr_r>(rqr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txfrq() const -> txfrq_f {return txfrq_f((m_value & txfrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxfrq() const -> rxfrq_f {return rxfrq_f((m_value & rxfrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mmrq() const -> mmrq_f {return mmrq_f((m_value & mmrq_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbkrq() const -> sbkrq_f {return sbkrq_f((m_value & sbkrq_f::Mask) != 0);}

	constexpr rqr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rqr_r other) const -> rqr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rqr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt & status register
 */
class isr_r {
public:

/**
 * TXFT
 */
class txft_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txft_f(bool value = true) : m_value(value) {}
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
 * RXFT
 */
class rxft_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxft_f(bool value = true) : m_value(value) {}
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
 * RXFF
 */
class rxff_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rxff_f(bool value = true) : m_value(value) {}
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
 * TXFE
 */
class txfe_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr txfe_f(bool value = true) : m_value(value) {}
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
 * REACK
 */
class reack_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr reack_f(bool value = true) : m_value(value) {}
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
 * TEACK
 */
class teack_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr teack_f(bool value = true) : m_value(value) {}
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
 * WUF
 */
class wuf_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wuf_f(bool value = true) : m_value(value) {}
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
 * RWU
 */
class rwu_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rwu_f(bool value = true) : m_value(value) {}
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
 * SBKF
 */
class sbkf_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sbkf_f(bool value = true) : m_value(value) {}
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
 * CMF
 */
class cmf_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cmf_f(bool value = true) : m_value(value) {}
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
 * BUSY
 */
class busy_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr busy_f(bool value = true) : m_value(value) {}
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
 * CTS
 */
class cts_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cts_f(bool value = true) : m_value(value) {}
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
 * CTSIF
 */
class ctsif_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctsif_f(bool value = true) : m_value(value) {}
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
 * TXE
 */
class txe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr txe_f(bool value = true) : m_value(value) {}
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
 * TC
 */
class tc_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tc_f(bool value = true) : m_value(value) {}
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
 * RXNE
 */
class rxne_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rxne_f(bool value = true) : m_value(value) {}
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
 * IDLE
 */
class idle_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idle_f(bool value = true) : m_value(value) {}
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
 * ORE
 */
class ore_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ore_f(bool value = true) : m_value(value) {}
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
 * NF
 */
class nf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr nf_f(bool value = true) : m_value(value) {}
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
 * FE
 */
class fe_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fe_f(bool value = true) : m_value(value) {}
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
 * PE
 */
class pe_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto txft() const -> txft_f {return txft_f((m_value & txft_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxft() const -> rxft_f {return rxft_f((m_value & rxft_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxff() const -> rxff_f {return rxff_f((m_value & rxff_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txfe() const -> txfe_f {return txfe_f((m_value & txfe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto reack() const -> reack_f {return reack_f((m_value & reack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto teack() const -> teack_f {return teack_f((m_value & teack_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wuf() const -> wuf_f {return wuf_f((m_value & wuf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rwu() const -> rwu_f {return rwu_f((m_value & rwu_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbkf() const -> sbkf_f {return sbkf_f((m_value & sbkf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmf() const -> cmf_f {return cmf_f((m_value & cmf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto busy() const -> busy_f {return busy_f((m_value & busy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cts() const -> cts_f {return cts_f((m_value & cts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctsif() const -> ctsif_f {return ctsif_f((m_value & ctsif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto txe() const -> txe_f {return txe_f((m_value & txe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tc() const -> tc_f {return tc_f((m_value & tc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxne() const -> rxne_f {return rxne_f((m_value & rxne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idle() const -> idle_f {return idle_f((m_value & idle_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ore() const -> ore_f {return ore_f((m_value & ore_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nf() const -> nf_f {return nf_f((m_value & nf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fe() const -> fe_f {return fe_f((m_value & fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pe() const -> pe_f {return pe_f((m_value & pe_f::Mask) != 0);}

	constexpr isr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(isr_r other) const -> isr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> isr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0b11000000; // 192 0xC0

private:
	uint32_t m_value;
};
/**
 * Interrupt flag clear register
 */
class icr_r {
public:

/**
 * Wakeup from Stop mode clear flag
 */
class wucf_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wucf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Character match clear flag
 */
class cmcf_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cmcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTS clear flag
 */
class ctscf_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctscf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Transmission complete clear flag
 */
class tccf_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tccf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Idle line detected clear flag
 */
class idlecf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr idlecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Overrun error clear flag
 */
class orecf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr orecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Noise detected clear flag
 */
class ncf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ncf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Framing error clear flag
 */
class fecf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Parity error clear flag
 */
class pecf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pecf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto wucf() const -> wucf_f {return wucf_f((m_value & wucf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmcf() const -> cmcf_f {return cmcf_f((m_value & cmcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctscf() const -> ctscf_f {return ctscf_f((m_value & ctscf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tccf() const -> tccf_f {return tccf_f((m_value & tccf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idlecf() const -> idlecf_f {return idlecf_f((m_value & idlecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto orecf() const -> orecf_f {return orecf_f((m_value & orecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ncf() const -> ncf_f {return ncf_f((m_value & ncf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fecf() const -> fecf_f {return fecf_f((m_value & fecf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pecf() const -> pecf_f {return pecf_f((m_value & pecf_f::Mask) != 0);}

	constexpr icr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icr_r other) const -> icr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Receive data register
 */
class rdr_r {
public:

/**
 * Receive data value
 */
class rdr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rdr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator rdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rdr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rdr_r>() const {return ClearSet<rdr_r>(Mask, *this);}
	constexpr auto operator|(rdr_r other) const -> rdr_r { return static_cast<rdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rdr_r> other) const -> ClearSet<rdr_r> {return ClearSet<rdr_r>(rdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rdr() const -> rdr_f {return rdr_f(static_cast<uint16_t>(m_value >> rdr_f::Offset));}

	constexpr rdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rdr_r other) const -> rdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Transmit data register
 */
class tdr_r {
public:

/**
 * Transmit data value
 */
class tdr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tdr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tdr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tdr_r>() const {return ClearSet<tdr_r>(Mask, *this);}
	constexpr auto operator|(tdr_r other) const -> tdr_r { return static_cast<tdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tdr_r> other) const -> ClearSet<tdr_r> {return ClearSet<tdr_r>(tdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto tdr() const -> tdr_f {return tdr_f(static_cast<uint16_t>(m_value >> tdr_f::Offset));}

	constexpr tdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tdr_r other) const -> tdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Prescaler register
 */
class presc_r {
public:

/**
 * PRESCALER
 */
class prescaler_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr prescaler_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator presc_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(presc_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<presc_r>() const {return ClearSet<presc_r>(Mask, *this);}
	constexpr auto operator|(presc_r other) const -> presc_r { return static_cast<presc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<presc_r> other) const -> ClearSet<presc_r> {return ClearSet<presc_r>(presc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto prescaler() const -> prescaler_f {return prescaler_f(static_cast<uint8_t>(m_value >> prescaler_f::Offset));}

	constexpr presc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(presc_r other) const -> presc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> presc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2 || Index == 3); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,cr3_r> cr3;
	Memory<uint32_t,brr_r> brr;
	Padding<8> _p16;
	WriteOnlyMemory<uint32_t,rqr_r> rqr;
	ReadOnlyMemory<uint32_t,isr_r> isr;
	WriteOnlyMemory<uint32_t,icr_r> icr;
	ReadOnlyMemory<uint32_t,rdr_r> rdr;
	Memory<uint32_t,tdr_r> tdr;
	Memory<uint32_t,presc_r> presc;
};

template<> struct lpuart1_p::cr1_r::m_f<1> { using type = lpuart1_p::cr1_r::m1_f; };
template<> struct lpuart1_p::cr1_r::m_f<0> { using type = lpuart1_p::cr1_r::m0_f; };
template<> struct lpuart1_p::cr1_r::deat_f<4> { using type = lpuart1_p::cr1_r::deat4_f; };
template<> struct lpuart1_p::cr1_r::deat_f<3> { using type = lpuart1_p::cr1_r::deat3_f; };
template<> struct lpuart1_p::cr1_r::deat_f<2> { using type = lpuart1_p::cr1_r::deat2_f; };
template<> struct lpuart1_p::cr1_r::deat_f<1> { using type = lpuart1_p::cr1_r::deat1_f; };
template<> struct lpuart1_p::cr1_r::deat_f<0> { using type = lpuart1_p::cr1_r::deat0_f; };
template<> struct lpuart1_p::cr1_r::dedt_f<4> { using type = lpuart1_p::cr1_r::dedt4_f; };
template<> struct lpuart1_p::cr1_r::dedt_f<3> { using type = lpuart1_p::cr1_r::dedt3_f; };
template<> struct lpuart1_p::cr1_r::dedt_f<2> { using type = lpuart1_p::cr1_r::dedt2_f; };
template<> struct lpuart1_p::cr1_r::dedt_f<1> { using type = lpuart1_p::cr1_r::dedt1_f; };
template<> struct lpuart1_p::cr1_r::dedt_f<0> { using type = lpuart1_p::cr1_r::dedt0_f; };

template<> constexpr auto& lpuart1_p::cr<1>() { return cr1; }
template<> constexpr auto& lpuart1_p::cr<2>() { return cr2; }
template<> constexpr auto& lpuart1_p::cr<3>() { return cr3; }

template<> struct lpuart1_p::cr_r<1> { using type = lpuart1_p::cr1_r; };
template<> struct lpuart1_p::cr_r<2> { using type = lpuart1_p::cr2_r; };
template<> struct lpuart1_p::cr_r<3> { using type = lpuart1_p::cr3_r; };

static_assert(std::is_standard_layout_v<lpuart1_p>);
static_assert(offsetof(lpuart1_p, cr1) == lpuart1_p::cr1_r::Offset);
static_assert(offsetof(lpuart1_p, cr2) == lpuart1_p::cr2_r::Offset);
static_assert(offsetof(lpuart1_p, cr3) == lpuart1_p::cr3_r::Offset);
static_assert(offsetof(lpuart1_p, brr) == lpuart1_p::brr_r::Offset);
static_assert(offsetof(lpuart1_p, rqr) == lpuart1_p::rqr_r::Offset);
static_assert(offsetof(lpuart1_p, isr) == lpuart1_p::isr_r::Offset);
static_assert(offsetof(lpuart1_p, icr) == lpuart1_p::icr_r::Offset);
static_assert(offsetof(lpuart1_p, rdr) == lpuart1_p::rdr_r::Offset);
static_assert(offsetof(lpuart1_p, tdr) == lpuart1_p::tdr_r::Offset);
static_assert(offsetof(lpuart1_p, presc) == lpuart1_p::presc_r::Offset);

inline usart1_p& usart1 = *reinterpret_cast<usart1_p*>(0x40013800);
inline usart1_p& usart2 = *reinterpret_cast<usart1_p*>(0x40004400);
inline usart1_p& usart3 = *reinterpret_cast<usart1_p*>(0x40004800);
inline uart4_p& uart4 = *reinterpret_cast<uart4_p*>(0x40004C00);
inline uart4_p& uart5 = *reinterpret_cast<uart4_p*>(0x40005000);
inline lpuart1_p& lpuart1 = *reinterpret_cast<lpuart1_p*>(0x40008000);

} // STM32G473XX

