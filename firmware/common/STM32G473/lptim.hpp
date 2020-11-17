#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Low power timer
 */
class lptim_p {
public:
/**
 * Interrupt and Status Register
 */
class isr_r {
public:

/**
 * Counter direction change up to down
 */
class down_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr down_f(bool value = true) : m_value(value) {}
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
 * Counter direction change down to up
 */
class up_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr up_f(bool value = true) : m_value(value) {}
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
 * Autoreload register update OK
 */
class arrok_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arrok_f(bool value = true) : m_value(value) {}
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
 * Compare register update OK
 */
class cmpok_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmpok_f(bool value = true) : m_value(value) {}
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
 * External trigger edge event
 */
class exttrig_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr exttrig_f(bool value = true) : m_value(value) {}
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
 * Autoreload match
 */
class arrm_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arrm_f(bool value = true) : m_value(value) {}
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
 * Compare match
 */
class cmpm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmpm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto down() const -> down_f {return down_f((m_value & down_f::Mask) != 0);}
	[[nodiscard]] constexpr auto up() const -> up_f {return up_f((m_value & up_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arrok() const -> arrok_f {return arrok_f((m_value & arrok_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmpok() const -> cmpok_f {return cmpok_f((m_value & cmpok_f::Mask) != 0);}
	[[nodiscard]] constexpr auto exttrig() const -> exttrig_f {return exttrig_f((m_value & exttrig_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arrm() const -> arrm_f {return arrm_f((m_value & arrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmpm() const -> cmpm_f {return cmpm_f((m_value & cmpm_f::Mask) != 0);}

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
 * Interrupt Clear Register
 */
class icr_r {
public:

/**
 * Direction change to down Clear Flag
 */
class downcf_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr downcf_f(bool value = true) : m_value(value) {}
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
 * Direction change to UP Clear Flag
 */
class upcf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr upcf_f(bool value = true) : m_value(value) {}
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
 * Autoreload register update OK Clear Flag
 */
class arrokcf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arrokcf_f(bool value = true) : m_value(value) {}
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
 * Compare register update OK Clear Flag
 */
class cmpokcf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmpokcf_f(bool value = true) : m_value(value) {}
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
 * External trigger valid edge Clear Flag
 */
class exttrigcf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr exttrigcf_f(bool value = true) : m_value(value) {}
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
 * Autoreload match Clear Flag
 */
class arrmcf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arrmcf_f(bool value = true) : m_value(value) {}
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
 * compare match Clear Flag
 */
class cmpmcf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmpmcf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto downcf() const -> downcf_f {return downcf_f((m_value & downcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto upcf() const -> upcf_f {return upcf_f((m_value & upcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arrokcf() const -> arrokcf_f {return arrokcf_f((m_value & arrokcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmpokcf() const -> cmpokcf_f {return cmpokcf_f((m_value & cmpokcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto exttrigcf() const -> exttrigcf_f {return exttrigcf_f((m_value & exttrigcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arrmcf() const -> arrmcf_f {return arrmcf_f((m_value & arrmcf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmpmcf() const -> cmpmcf_f {return cmpmcf_f((m_value & cmpmcf_f::Mask) != 0);}

	constexpr icr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icr_r other) const -> icr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Interrupt Enable Register
 */
class ier_r {
public:

/**
 * Direction change to down Interrupt Enable
 */
class downie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr downie_f(bool value = true) : m_value(value) {}
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
 * Direction change to UP Interrupt Enable
 */
class upie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr upie_f(bool value = true) : m_value(value) {}
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
 * Autoreload register update OK Interrupt Enable
 */
class arrokie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arrokie_f(bool value = true) : m_value(value) {}
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
 * Compare register update OK Interrupt Enable
 */
class cmpokie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmpokie_f(bool value = true) : m_value(value) {}
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
 * External trigger valid edge Interrupt Enable
 */
class exttrigie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr exttrigie_f(bool value = true) : m_value(value) {}
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
 * Autoreload match Interrupt Enable
 */
class arrmie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arrmie_f(bool value = true) : m_value(value) {}
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
 * Compare match Interrupt Enable
 */
class cmpmie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cmpmie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ier_r>() const {return ClearSet<ier_r>(Mask, *this);}
	constexpr auto operator|(ier_r other) const -> ier_r { return static_cast<ier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ier_r> other) const -> ClearSet<ier_r> {return ClearSet<ier_r>(ier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto downie() const -> downie_f {return downie_f((m_value & downie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto upie() const -> upie_f {return upie_f((m_value & upie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arrokie() const -> arrokie_f {return arrokie_f((m_value & arrokie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmpokie() const -> cmpokie_f {return cmpokie_f((m_value & cmpokie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto exttrigie() const -> exttrigie_f {return exttrigie_f((m_value & exttrigie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arrmie() const -> arrmie_f {return arrmie_f((m_value & arrmie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cmpmie() const -> cmpmie_f {return cmpmie_f((m_value & cmpmie_f::Mask) != 0);}

	constexpr ier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ier_r other) const -> ier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Configuration Register
 */
class cfgr_r {
public:

/**
 * Encoder mode enable
 */
class enc_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr enc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * counter mode enabled
 */
class countmode_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr countmode_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Registers update mode
 */
class preload_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr preload_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Waveform shape polarity
 */
class wavpol_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wavpol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Waveform shape
 */
class wave_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wave_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Timeout enable
 */
class timout_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr timout_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger enable and polarity
 */
class trigen_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trigen_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Trigger selector
 */
class trigsel_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trigsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Clock prescaler
 */
class presc_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr presc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Configurable digital filter for trigger
 */
class trgflt_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr trgflt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Configurable digital filter for external clock
 */
class ckflt_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ckflt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Clock Polarity
 */
class ckpol_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ckpol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Clock selector
 */
class cksel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cksel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto enc() const -> enc_f {return enc_f((m_value & enc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto countmode() const -> countmode_f {return countmode_f((m_value & countmode_f::Mask) != 0);}
	[[nodiscard]] constexpr auto preload() const -> preload_f {return preload_f((m_value & preload_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wavpol() const -> wavpol_f {return wavpol_f((m_value & wavpol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wave() const -> wave_f {return wave_f((m_value & wave_f::Mask) != 0);}
	[[nodiscard]] constexpr auto timout() const -> timout_f {return timout_f((m_value & timout_f::Mask) != 0);}
	[[nodiscard]] constexpr auto trigen() const -> trigen_f {return trigen_f(static_cast<uint8_t>(m_value >> trigen_f::Offset));}
	[[nodiscard]] constexpr auto trigsel() const -> trigsel_f {return trigsel_f(static_cast<uint8_t>(m_value >> trigsel_f::Offset));}
	[[nodiscard]] constexpr auto presc() const -> presc_f {return presc_f(static_cast<uint8_t>(m_value >> presc_f::Offset));}
	[[nodiscard]] constexpr auto trgflt() const -> trgflt_f {return trgflt_f(static_cast<uint8_t>(m_value >> trgflt_f::Offset));}
	[[nodiscard]] constexpr auto ckflt() const -> ckflt_f {return ckflt_f(static_cast<uint8_t>(m_value >> ckflt_f::Offset));}
	[[nodiscard]] constexpr auto ckpol() const -> ckpol_f {return ckpol_f(static_cast<uint8_t>(m_value >> ckpol_f::Offset));}
	[[nodiscard]] constexpr auto cksel() const -> cksel_f {return cksel_f((m_value & cksel_f::Mask) != 0);}

	constexpr cfgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfgr_r other) const -> cfgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Control Register
 */
class cr_r {
public:

/**
 * RSTARE
 */
class rstare_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rstare_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COUNTRST
 */
class countrst_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr countrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Timer start in continuous mode
 */
class cntstrt_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cntstrt_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LPTIM start in single mode
 */
class sngstrt_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sngstrt_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LPTIM Enable
 */
class enable_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr enable_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rstare() const -> rstare_f {return rstare_f((m_value & rstare_f::Mask) != 0);}
	[[nodiscard]] constexpr auto countrst() const -> countrst_f {return countrst_f((m_value & countrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cntstrt() const -> cntstrt_f {return cntstrt_f((m_value & cntstrt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sngstrt() const -> sngstrt_f {return sngstrt_f((m_value & sngstrt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto enable() const -> enable_f {return enable_f((m_value & enable_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Compare Register
 */
class cmp_r {
public:

/**
 * Compare value
 */
class cmp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cmp_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cmp_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cmp_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cmp_r>() const {return ClearSet<cmp_r>(Mask, *this);}
	constexpr auto operator|(cmp_r other) const -> cmp_r { return static_cast<cmp_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cmp_r> other) const -> ClearSet<cmp_r> {return ClearSet<cmp_r>(cmp_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto cmp() const -> cmp_f {return cmp_f(static_cast<uint16_t>(m_value >> cmp_f::Offset));}

	constexpr cmp_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cmp_r other) const -> cmp_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cmp_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Autoreload Register
 */
class arr_r {
public:

/**
 * Auto reload value
 */
class arr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr arr_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator arr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(arr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<arr_r>() const {return ClearSet<arr_r>(Mask, *this);}
	constexpr auto operator|(arr_r other) const -> arr_r { return static_cast<arr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<arr_r> other) const -> ClearSet<arr_r> {return ClearSet<arr_r>(arr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto arr() const -> arr_f {return arr_f(static_cast<uint16_t>(m_value >> arr_f::Offset));}

	constexpr arr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(arr_r other) const -> arr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> arr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0b1; // 1 0x1

private:
	uint32_t m_value;
};
/**
 * Counter Register
 */
class cnt_r {
public:

/**
 * Counter value
 */
class cnt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cnt_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cnt_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cnt_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto cnt() const -> cnt_f {return cnt_f(static_cast<uint16_t>(m_value >> cnt_f::Offset));}

	constexpr cnt_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cnt_r other) const -> cnt_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cnt_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * option register
 */
class or_r {
public:

/**
 * IN1
 */
class in1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr in1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator or_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(or_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<or_r>() const {return ClearSet<or_r>(Mask, *this);}
	constexpr auto operator|(or_r other) const -> or_r { return static_cast<or_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<or_r> other) const -> ClearSet<or_r> {return ClearSet<or_r>(or_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IN2
 */
class in2_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr in2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator or_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(or_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<or_r>() const {return ClearSet<or_r>(Mask, *this);}
	constexpr auto operator|(or_r other) const -> or_r { return static_cast<or_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<or_r> other) const -> ClearSet<or_r> {return ClearSet<or_r>(or_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * IN1_2_1
 */
class in1_2_1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr in1_2_1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator or_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(or_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<or_r>() const {return ClearSet<or_r>(Mask, *this);}
	constexpr auto operator|(or_r other) const -> or_r { return static_cast<or_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<or_r> other) const -> ClearSet<or_r> {return ClearSet<or_r>(or_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * IN2_2_1
 */
class in2_2_1_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr in2_2_1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator or_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(or_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<or_r>() const {return ClearSet<or_r>(Mask, *this);}
	constexpr auto operator|(or_r other) const -> or_r { return static_cast<or_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<or_r> other) const -> ClearSet<or_r> {return ClearSet<or_r>(or_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto in1() const -> in1_f {return in1_f((m_value & in1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto in2() const -> in2_f {return in2_f((m_value & in2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto in1_2_1() const -> in1_2_1_f {return in1_2_1_f(static_cast<uint8_t>(m_value >> in1_2_1_f::Offset));}
	[[nodiscard]] constexpr auto in2_2_1() const -> in2_2_1_f {return in2_2_1_f(static_cast<uint8_t>(m_value >> in2_2_1_f::Offset));}

	template<std::size_t Index> struct in_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using in_v = typename in_f<Index>::type;
	template<std::size_t Index> constexpr auto in() const { return in_v<Index>::get(*this); }

	constexpr or_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(or_r other) const -> or_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> or_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,isr_r> isr;
	WriteOnlyMemory<uint32_t,icr_r> icr;
	Memory<uint32_t,ier_r> ier;
	Memory<uint32_t,cfgr_r> cfgr;
	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,cmp_r> cmp;
	Memory<uint32_t,arr_r> arr;
	ReadOnlyMemory<uint32_t,cnt_r> cnt;
	Memory<uint32_t,or_r> _or;
};

template<> struct lptim_p::or_r::in_f<1> { using type = lptim_p::or_r::in1_f; };
template<> struct lptim_p::or_r::in_f<2> { using type = lptim_p::or_r::in2_f; };

static_assert(std::is_standard_layout_v<lptim_p>);
static_assert(offsetof(lptim_p, isr) == lptim_p::isr_r::Offset);
static_assert(offsetof(lptim_p, icr) == lptim_p::icr_r::Offset);
static_assert(offsetof(lptim_p, ier) == lptim_p::ier_r::Offset);
static_assert(offsetof(lptim_p, cfgr) == lptim_p::cfgr_r::Offset);
static_assert(offsetof(lptim_p, cr) == lptim_p::cr_r::Offset);
static_assert(offsetof(lptim_p, cmp) == lptim_p::cmp_r::Offset);
static_assert(offsetof(lptim_p, arr) == lptim_p::arr_r::Offset);
static_assert(offsetof(lptim_p, cnt) == lptim_p::cnt_r::Offset);
static_assert(offsetof(lptim_p, _or) == lptim_p::or_r::Offset);

inline lptim_p& lptimer1 = *reinterpret_cast<lptim_p*>(0x40007C00);

} // STM32G473XX

