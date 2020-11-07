#pragma once

#include "Memory.hpp"

namespace STM32F401
{

/**
 * Advanced-timers
 */
class tim1_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Clock division
 */
class ckd_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ckd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Auto-reload preload enable
 */
class arpe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arpe_f(bool value = true) : m_value(value) {}
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
 * Center-aligned mode selection
 */
class cms_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
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
 * One-pulse mode
 */
class opm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opm_f(bool value = true) : m_value(value) {}
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
 * Update request source
 */
class urs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr urs_f(bool value = true) : m_value(value) {}
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
 * Update disable
 */
class udis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr udis_f(bool value = true) : m_value(value) {}
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
 * Counter enable
 */
class cen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ckd() const -> ckd_f {return ckd_f(static_cast<uint8_t>(m_value >> ckd_f::Offset));}
	[[nodiscard]] constexpr auto arpe() const -> arpe_f {return arpe_f((m_value & arpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cms() const -> cms_f {return cms_f(static_cast<uint8_t>(m_value >> cms_f::Offset));}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opm() const -> opm_f {return opm_f((m_value & opm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto urs() const -> urs_f {return urs_f((m_value & urs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udis() const -> udis_f {return udis_f((m_value & udis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cen() const -> cen_f {return cen_f((m_value & cen_f::Mask) != 0);}

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
 * control register 2
 */
class cr2_r {
public:

/**
 * Output Idle state 4
 */
class ois4_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ois4_f(bool value = true) : m_value(value) {}
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
 * Output Idle state 3
 */
class ois3n_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ois3n_f(bool value = true) : m_value(value) {}
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
 * Output Idle state 3
 */
class ois3_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ois3_f(bool value = true) : m_value(value) {}
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
 * Output Idle state 2
 */
class ois2n_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ois2n_f(bool value = true) : m_value(value) {}
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
 * Output Idle state 2
 */
class ois2_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ois2_f(bool value = true) : m_value(value) {}
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
 * Output Idle state 1
 */
class ois1n_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ois1n_f(bool value = true) : m_value(value) {}
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
 * Output Idle state 1
 */
class ois1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ois1_f(bool value = true) : m_value(value) {}
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
 * TI1 selection
 */
class ti1s_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ti1s_f(bool value = true) : m_value(value) {}
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
 * Master mode selection
 */
class mms_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/compare DMA selection
 */
class ccds_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccds_f(bool value = true) : m_value(value) {}
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
 * Capture/compare control update selection
 */
class ccus_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccus_f(bool value = true) : m_value(value) {}
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
 * Capture/compare preloaded control
 */
class ccpc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccpc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ois4() const -> ois4_f {return ois4_f((m_value & ois4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois3n() const -> ois3n_f {return ois3n_f((m_value & ois3n_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois3() const -> ois3_f {return ois3_f((m_value & ois3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois2n() const -> ois2n_f {return ois2n_f((m_value & ois2n_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois2() const -> ois2_f {return ois2_f((m_value & ois2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois1n() const -> ois1n_f {return ois1n_f((m_value & ois1n_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois1() const -> ois1_f {return ois1_f((m_value & ois1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ti1s() const -> ti1s_f {return ti1s_f((m_value & ti1s_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mms() const -> mms_f {return mms_f(static_cast<uint8_t>(m_value >> mms_f::Offset));}
	[[nodiscard]] constexpr auto ccds() const -> ccds_f {return ccds_f((m_value & ccds_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccus() const -> ccus_f {return ccus_f((m_value & ccus_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccpc() const -> ccpc_f {return ccpc_f((m_value & ccpc_f::Mask) != 0);}

	template<std::size_t Index> struct ois_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using ois_v = typename ois_f<Index>::type;
	template<std::size_t Index> constexpr auto ois() const { return ois_v<Index>::get(*this); }

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
 * slave mode control register
 */
class smcr_r {
public:

/**
 * External trigger polarity
 */
class etp_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr etp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External clock enable
 */
class ece_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ece_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External trigger prescaler
 */
class etps_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr etps_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * External trigger filter
 */
class etf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr etf_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Master/Slave mode
 */
class msm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr msm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger selection
 */
class ts_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ts_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Slave mode selection
 */
class sms_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto etp() const -> etp_f {return etp_f((m_value & etp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ece() const -> ece_f {return ece_f((m_value & ece_f::Mask) != 0);}
	[[nodiscard]] constexpr auto etps() const -> etps_f {return etps_f(static_cast<uint8_t>(m_value >> etps_f::Offset));}
	[[nodiscard]] constexpr auto etf() const -> etf_f {return etf_f(static_cast<uint8_t>(m_value >> etf_f::Offset));}
	[[nodiscard]] constexpr auto msm() const -> msm_f {return msm_f((m_value & msm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ts() const -> ts_f {return ts_f(static_cast<uint8_t>(m_value >> ts_f::Offset));}
	[[nodiscard]] constexpr auto sms() const -> sms_f {return sms_f(static_cast<uint8_t>(m_value >> sms_f::Offset));}

	constexpr smcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smcr_r other) const -> smcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA/Interrupt enable register
 */
class dier_r {
public:

/**
 * Trigger DMA request enable
 */
class tde_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tde_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COM DMA request enable
 */
class comde_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr comde_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 DMA request enable
 */
class cc4de_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 DMA request enable
 */
class cc3de_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 DMA request enable
 */
class cc2de_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc2de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 DMA request enable
 */
class cc1de_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update DMA request enable
 */
class ude_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ude_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Break interrupt enable
 */
class bie_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger interrupt enable
 */
class tie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COM interrupt enable
 */
class comie_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr comie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 interrupt enable
 */
class cc4ie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 interrupt enable
 */
class cc3ie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 interrupt enable
 */
class cc2ie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 interrupt enable
 */
class cc1ie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt enable
 */
class uie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tde() const -> tde_f {return tde_f((m_value & tde_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comde() const -> comde_f {return comde_f((m_value & comde_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4de() const -> cc4de_f {return cc4de_f((m_value & cc4de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3de() const -> cc3de_f {return cc3de_f((m_value & cc3de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2de() const -> cc2de_f {return cc2de_f((m_value & cc2de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1de() const -> cc1de_f {return cc1de_f((m_value & cc1de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ude() const -> ude_f {return ude_f((m_value & ude_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bie() const -> bie_f {return bie_f((m_value & bie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tie() const -> tie_f {return tie_f((m_value & tie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comie() const -> comie_f {return comie_f((m_value & comie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4ie() const -> cc4ie_f {return cc4ie_f((m_value & cc4ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3ie() const -> cc3ie_f {return cc3ie_f((m_value & cc3ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2ie() const -> cc2ie_f {return cc2ie_f((m_value & cc2ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1ie() const -> cc1ie_f {return cc1ie_f((m_value & cc1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uie() const -> uie_f {return uie_f((m_value & uie_f::Mask) != 0);}

	constexpr dier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dier_r other) const -> dier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class sr_r {
public:

/**
 * Capture/Compare 4 overcapture flag
 */
class cc4of_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 overcapture flag
 */
class cc3of_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 2 overcapture flag
 */
class cc2of_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc2of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 overcapture flag
 */
class cc1of_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Break interrupt flag
 */
class bif_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger interrupt flag
 */
class tif_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * COM interrupt flag
 */
class comif_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr comif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 interrupt flag
 */
class cc4if_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 interrupt flag
 */
class cc3if_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 interrupt flag
 */
class cc2if_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 interrupt flag
 */
class cc1if_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt flag
 */
class uif_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc4of() const -> cc4of_f {return cc4of_f((m_value & cc4of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3of() const -> cc3of_f {return cc3of_f((m_value & cc3of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2of() const -> cc2of_f {return cc2of_f((m_value & cc2of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1of() const -> cc1of_f {return cc1of_f((m_value & cc1of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bif() const -> bif_f {return bif_f((m_value & bif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tif() const -> tif_f {return tif_f((m_value & tif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comif() const -> comif_f {return comif_f((m_value & comif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4if() const -> cc4if_f {return cc4if_f((m_value & cc4if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3if() const -> cc3if_f {return cc3if_f((m_value & cc3if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2if() const -> cc2if_f {return cc2if_f((m_value & cc2if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1if() const -> cc1if_f {return cc1if_f((m_value & cc1if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uif() const -> uif_f {return uif_f((m_value & uif_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * event generation register
 */
class egr_r {
public:

/**
 * Break generation
 */
class bg_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger generation
 */
class tg_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare control update generation
 */
class comg_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr comg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 4 generation
 */
class cc4g_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 3 generation
 */
class cc3g_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 2 generation
 */
class cc2g_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 generation
 */
class cc1g_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update generation
 */
class ug_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ug_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto bg() const -> bg_f {return bg_f((m_value & bg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tg() const -> tg_f {return tg_f((m_value & tg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comg() const -> comg_f {return comg_f((m_value & comg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4g() const -> cc4g_f {return cc4g_f((m_value & cc4g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3g() const -> cc3g_f {return cc3g_f((m_value & cc3g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2g() const -> cc2g_f {return cc2g_f((m_value & cc2g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1g() const -> cc1g_f {return cc1g_f((m_value & cc1g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ug() const -> ug_f {return ug_f((m_value & ug_f::Mask) != 0);}

	constexpr egr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(egr_r other) const -> egr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> egr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (output mode)
 */
class ccmr1_output_r {
public:

/**
 * Output Compare 2 clear enable
 */
class oc2ce_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output Compare 2 mode
 */
class oc2m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc2m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output Compare 2 preload enable
 */
class oc2pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output Compare 2 fast enable
 */
class oc2fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 selection
 */
class cc2s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc2s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output Compare 1 clear enable
 */
class oc1ce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output Compare 1 mode
 */
class oc1m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc1m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output Compare 1 preload enable
 */
class oc1pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output Compare 1 fast enable
 */
class oc1fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc2ce() const -> oc2ce_f {return oc2ce_f((m_value & oc2ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc2m() const -> oc2m_f {return oc2m_f(static_cast<uint8_t>(m_value >> oc2m_f::Offset));}
	[[nodiscard]] constexpr auto oc2pe() const -> oc2pe_f {return oc2pe_f((m_value & oc2pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc2fe() const -> oc2fe_f {return oc2fe_f((m_value & oc2fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto oc1ce() const -> oc1ce_f {return oc1ce_f((m_value & oc1ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1m() const -> oc1m_f {return oc1m_f(static_cast<uint8_t>(m_value >> oc1m_f::Offset));}
	[[nodiscard]] constexpr auto oc1pe() const -> oc1pe_f {return oc1pe_f((m_value & oc1pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1fe() const -> oc1fe_f {return oc1fe_f((m_value & oc1fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_output_r other) const -> ccmr1_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (input mode)
 */
class ccmr1_input_r {
public:

/**
 * Input capture 2 filter
 */
class ic2f_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 2 prescaler
 */
class ic2pcs_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2pcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 2 selection
 */
class cc2s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc2s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 filter
 */
class ic1f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic1f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 prescaler
 */
class icpcs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr icpcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic2f() const -> ic2f_f {return ic2f_f(static_cast<uint8_t>(m_value >> ic2f_f::Offset));}
	[[nodiscard]] constexpr auto ic2pcs() const -> ic2pcs_f {return ic2pcs_f(static_cast<uint8_t>(m_value >> ic2pcs_f::Offset));}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto ic1f() const -> ic1f_f {return ic1f_f(static_cast<uint8_t>(m_value >> ic1f_f::Offset));}
	[[nodiscard]] constexpr auto icpcs() const -> icpcs_f {return icpcs_f(static_cast<uint8_t>(m_value >> icpcs_f::Offset));}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_input_r other) const -> ccmr1_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 2 (output mode)
 */
class ccmr2_output_r {
public:

/**
 * Output compare 4 clear enable
 */
class oc4ce_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 4 mode
 */
class oc4m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc4m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output compare 4 preload enable
 */
class oc4pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 4 fast enable
 */
class oc4fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 selection
 */
class cc4s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc4s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output compare 3 clear enable
 */
class oc3ce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 3 mode
 */
class oc3m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc3m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output compare 3 preload enable
 */
class oc3pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 3 fast enable
 */
class oc3fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 selection
 */
class cc3s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc3s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc4ce() const -> oc4ce_f {return oc4ce_f((m_value & oc4ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc4m() const -> oc4m_f {return oc4m_f(static_cast<uint8_t>(m_value >> oc4m_f::Offset));}
	[[nodiscard]] constexpr auto oc4pe() const -> oc4pe_f {return oc4pe_f((m_value & oc4pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc4fe() const -> oc4fe_f {return oc4fe_f((m_value & oc4fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4s() const -> cc4s_f {return cc4s_f(static_cast<uint8_t>(m_value >> cc4s_f::Offset));}
	[[nodiscard]] constexpr auto oc3ce() const -> oc3ce_f {return oc3ce_f((m_value & oc3ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc3m() const -> oc3m_f {return oc3m_f(static_cast<uint8_t>(m_value >> oc3m_f::Offset));}
	[[nodiscard]] constexpr auto oc3pe() const -> oc3pe_f {return oc3pe_f((m_value & oc3pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc3fe() const -> oc3fe_f {return oc3fe_f((m_value & oc3fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3s() const -> cc3s_f {return cc3s_f(static_cast<uint8_t>(m_value >> cc3s_f::Offset));}

	constexpr ccmr2_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr2_output_r other) const -> ccmr2_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr2_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 2 (input mode)
 */
class ccmr2_input_r {
public:

/**
 * Input capture 4 filter
 */
class ic4f_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic4f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 4 prescaler
 */
class ic4psc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic4psc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 4 selection
 */
class cc4s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc4s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 3 filter
 */
class ic3f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic3f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 3 prescaler
 */
class ic3psc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic3psc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/compare 3 selection
 */
class cc3s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc3s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic4f() const -> ic4f_f {return ic4f_f(static_cast<uint8_t>(m_value >> ic4f_f::Offset));}
	[[nodiscard]] constexpr auto ic4psc() const -> ic4psc_f {return ic4psc_f(static_cast<uint8_t>(m_value >> ic4psc_f::Offset));}
	[[nodiscard]] constexpr auto cc4s() const -> cc4s_f {return cc4s_f(static_cast<uint8_t>(m_value >> cc4s_f::Offset));}
	[[nodiscard]] constexpr auto ic3f() const -> ic3f_f {return ic3f_f(static_cast<uint8_t>(m_value >> ic3f_f::Offset));}
	[[nodiscard]] constexpr auto ic3psc() const -> ic3psc_f {return ic3psc_f(static_cast<uint8_t>(m_value >> ic3psc_f::Offset));}
	[[nodiscard]] constexpr auto cc3s() const -> cc3s_f {return cc3s_f(static_cast<uint8_t>(m_value >> cc3s_f::Offset));}

	constexpr ccmr2_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr2_input_r other) const -> ccmr2_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr2_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare enable register
 */
class ccer_r {
public:

/**
 * Capture/Compare 3 output Polarity
 */
class cc4p_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 output enable
 */
class cc4e_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc3np_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 complementary output enable
 */
class cc3ne_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3ne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc3p_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output enable
 */
class cc3e_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output Polarity
 */
class cc2np_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 complementary output enable
 */
class cc2ne_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2ne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output Polarity
 */
class cc2p_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output enable
 */
class cc2e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1np_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 complementary output enable
 */
class cc1ne_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1ne_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1p_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output enable
 */
class cc1e_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc4p() const -> cc4p_f {return cc4p_f((m_value & cc4p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4e() const -> cc4e_f {return cc4e_f((m_value & cc4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3np() const -> cc3np_f {return cc3np_f((m_value & cc3np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3ne() const -> cc3ne_f {return cc3ne_f((m_value & cc3ne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3p() const -> cc3p_f {return cc3p_f((m_value & cc3p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3e() const -> cc3e_f {return cc3e_f((m_value & cc3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2np() const -> cc2np_f {return cc2np_f((m_value & cc2np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2ne() const -> cc2ne_f {return cc2ne_f((m_value & cc2ne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2p() const -> cc2p_f {return cc2p_f((m_value & cc2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2e() const -> cc2e_f {return cc2e_f((m_value & cc2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1np() const -> cc1np_f {return cc1np_f((m_value & cc1np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1ne() const -> cc1ne_f {return cc1ne_f((m_value & cc1ne_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1p() const -> cc1p_f {return cc1p_f((m_value & cc1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1e() const -> cc1e_f {return cc1e_f((m_value & cc1e_f::Mask) != 0);}

	constexpr ccer_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccer_r other) const -> ccer_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccer_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * counter
 */
class cnt_r {
public:

/**
 * counter value
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

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * prescaler
 */
class psc_r {
public:

/**
 * Prescaler value
 */
class psc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator psc_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(psc_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psc_r>() const {return ClearSet<psc_r>(Mask, *this);}
	constexpr auto operator|(psc_r other) const -> psc_r { return static_cast<psc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psc_r> other) const -> ClearSet<psc_r> {return ClearSet<psc_r>(psc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto psc() const -> psc_f {return psc_f(static_cast<uint16_t>(m_value >> psc_f::Offset));}

	constexpr psc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(psc_r other) const -> psc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> psc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * auto-reload register
 */
class arr_r {
public:

/**
 * Auto-reload value
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

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 1
 */
class ccr1_r {
public:

/**
 * Capture/Compare 1 value
 */
class ccr1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr1_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr1() const -> ccr1_f {return ccr1_f(static_cast<uint16_t>(m_value >> ccr1_f::Offset));}

	constexpr ccr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr1_r other) const -> ccr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 2
 */
class ccr2_r {
public:

/**
 * Capture/Compare 2 value
 */
class ccr2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr2_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr2() const -> ccr2_f {return ccr2_f(static_cast<uint16_t>(m_value >> ccr2_f::Offset));}

	constexpr ccr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr2_r other) const -> ccr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 3
 */
class ccr3_r {
public:

/**
 * Capture/Compare value
 */
class ccr3_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr3_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr3() const -> ccr3_f {return ccr3_f(static_cast<uint16_t>(m_value >> ccr3_f::Offset));}

	constexpr ccr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr3_r other) const -> ccr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 4
 */
class ccr4_r {
public:

/**
 * Capture/Compare value
 */
class ccr4_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr4_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr4() const -> ccr4_f {return ccr4_f(static_cast<uint16_t>(m_value >> ccr4_f::Offset));}

	constexpr ccr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr4_r other) const -> ccr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA control register
 */
class dcr_r {
public:

/**
 * DMA burst length
 */
class dbl_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dbl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DMA base address
 */
class dba_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dba_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dbl() const -> dbl_f {return dbl_f(static_cast<uint8_t>(m_value >> dbl_f::Offset));}
	[[nodiscard]] constexpr auto dba() const -> dba_f {return dba_f(static_cast<uint8_t>(m_value >> dba_f::Offset));}

	constexpr dcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dcr_r other) const -> dcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA address for full transfer
 */
class dmar_r {
public:

/**
 * DMA register for burst accesses
 */
class dmab_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dmab_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dmar_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dmar_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dmar_r>() const {return ClearSet<dmar_r>(Mask, *this);}
	constexpr auto operator|(dmar_r other) const -> dmar_r { return static_cast<dmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dmar_r> other) const -> ClearSet<dmar_r> {return ClearSet<dmar_r>(dmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dmab() const -> dmab_f {return dmab_f(static_cast<uint16_t>(m_value >> dmab_f::Offset));}

	constexpr dmar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dmar_r other) const -> dmar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dmar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * repetition counter register
 */
class rcr_r {
public:

/**
 * Repetition counter value
 */
class rep_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr rep_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rcr_r>() const {return ClearSet<rcr_r>(Mask, *this);}
	constexpr auto operator|(rcr_r other) const -> rcr_r { return static_cast<rcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rcr_r> other) const -> ClearSet<rcr_r> {return ClearSet<rcr_r>(rcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto rep() const -> rep_f {return rep_f(static_cast<uint8_t>(m_value >> rep_f::Offset));}

	constexpr rcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rcr_r other) const -> rcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * break and dead-time register
 */
class bdtr_r {
public:

/**
 * Main output enable
 */
class moe_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr moe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdtr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdtr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Automatic output enable
 */
class aoe_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr aoe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdtr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdtr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Break polarity
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdtr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdtr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Break enable
 */
class bke_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bke_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdtr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdtr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Off-state selection for Run mode
 */
class ossr_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ossr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdtr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdtr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Off-state selection for Idle mode
 */
class ossi_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ossi_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdtr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdtr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Lock configuration
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr lock_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bdtr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(bdtr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Dead-time generator setup
 */
class dtg_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dtg_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bdtr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(bdtr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto moe() const -> moe_f {return moe_f((m_value & moe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto aoe() const -> aoe_f {return aoe_f((m_value & aoe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f((m_value & bkp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bke() const -> bke_f {return bke_f((m_value & bke_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ossr() const -> ossr_f {return ossr_f((m_value & ossr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ossi() const -> ossi_f {return ossi_f((m_value & ossi_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f(static_cast<uint8_t>(m_value >> lock_f::Offset));}
	[[nodiscard]] constexpr auto dtg() const -> dtg_f {return dtg_f(static_cast<uint8_t>(m_value >> dtg_f::Offset));}

	constexpr bdtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bdtr_r other) const -> bdtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bdtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct ccr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using ccr_v = typename ccr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ccr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,smcr_r> smcr;
	Memory<uint32_t,dier_r> dier;
	Memory<uint32_t,sr_r> sr;
	WriteOnlyMemory<uint32_t,egr_r> egr;
	union {
	Memory<uint32_t,ccmr1_output_r> ccmr1_output;
	Memory<uint32_t,ccmr1_input_r> ccmr1_input;
	};
	union {
	Memory<uint32_t,ccmr2_output_r> ccmr2_output;
	Memory<uint32_t,ccmr2_input_r> ccmr2_input;
	};
	Memory<uint32_t,ccer_r> ccer;
	Memory<uint32_t,cnt_r> cnt;
	Memory<uint32_t,psc_r> psc;
	Memory<uint32_t,arr_r> arr;
	Memory<uint32_t,rcr_r> rcr;
	Memory<uint32_t,ccr1_r> ccr1;
	Memory<uint32_t,ccr2_r> ccr2;
	Memory<uint32_t,ccr3_r> ccr3;
	Memory<uint32_t,ccr4_r> ccr4;
	Memory<uint32_t,bdtr_r> bdtr;
	Memory<uint32_t,dcr_r> dcr;
	Memory<uint32_t,dmar_r> dmar;
};

template<> struct tim1_p::cr2_r::ois_f<4> { using type = tim1_p::cr2_r::ois4_f; };
template<> struct tim1_p::cr2_r::ois_f<3> { using type = tim1_p::cr2_r::ois3_f; };
template<> struct tim1_p::cr2_r::ois_f<2> { using type = tim1_p::cr2_r::ois2_f; };
template<> struct tim1_p::cr2_r::ois_f<1> { using type = tim1_p::cr2_r::ois1_f; };

template<> constexpr auto& tim1_p::cr<1>() { return cr1; }
template<> constexpr auto& tim1_p::cr<2>() { return cr2; }

template<> struct tim1_p::cr_r<1> { using type = tim1_p::cr1_r; };
template<> struct tim1_p::cr_r<2> { using type = tim1_p::cr2_r; };

template<> constexpr auto& tim1_p::ccr<1>() { return ccr1; }
template<> constexpr auto& tim1_p::ccr<2>() { return ccr2; }
template<> constexpr auto& tim1_p::ccr<3>() { return ccr3; }
template<> constexpr auto& tim1_p::ccr<4>() { return ccr4; }

template<> struct tim1_p::ccr_r<1> { using type = tim1_p::ccr1_r; };
template<> struct tim1_p::ccr_r<2> { using type = tim1_p::ccr2_r; };
template<> struct tim1_p::ccr_r<3> { using type = tim1_p::ccr3_r; };
template<> struct tim1_p::ccr_r<4> { using type = tim1_p::ccr4_r; };

static_assert(std::is_standard_layout_v<tim1_p>);
static_assert(offsetof(tim1_p, cr1) == tim1_p::cr1_r::Offset);
static_assert(offsetof(tim1_p, cr2) == tim1_p::cr2_r::Offset);
static_assert(offsetof(tim1_p, smcr) == tim1_p::smcr_r::Offset);
static_assert(offsetof(tim1_p, dier) == tim1_p::dier_r::Offset);
static_assert(offsetof(tim1_p, sr) == tim1_p::sr_r::Offset);
static_assert(offsetof(tim1_p, egr) == tim1_p::egr_r::Offset);
static_assert(offsetof(tim1_p, ccmr1_output) == tim1_p::ccmr1_output_r::Offset);
static_assert(offsetof(tim1_p, ccmr1_input) == tim1_p::ccmr1_input_r::Offset);
static_assert(offsetof(tim1_p, ccmr2_output) == tim1_p::ccmr2_output_r::Offset);
static_assert(offsetof(tim1_p, ccmr2_input) == tim1_p::ccmr2_input_r::Offset);
static_assert(offsetof(tim1_p, ccer) == tim1_p::ccer_r::Offset);
static_assert(offsetof(tim1_p, cnt) == tim1_p::cnt_r::Offset);
static_assert(offsetof(tim1_p, psc) == tim1_p::psc_r::Offset);
static_assert(offsetof(tim1_p, arr) == tim1_p::arr_r::Offset);
static_assert(offsetof(tim1_p, ccr1) == tim1_p::ccr1_r::Offset);
static_assert(offsetof(tim1_p, ccr2) == tim1_p::ccr2_r::Offset);
static_assert(offsetof(tim1_p, ccr3) == tim1_p::ccr3_r::Offset);
static_assert(offsetof(tim1_p, ccr4) == tim1_p::ccr4_r::Offset);
static_assert(offsetof(tim1_p, dcr) == tim1_p::dcr_r::Offset);
static_assert(offsetof(tim1_p, dmar) == tim1_p::dmar_r::Offset);
static_assert(offsetof(tim1_p, rcr) == tim1_p::rcr_r::Offset);
static_assert(offsetof(tim1_p, bdtr) == tim1_p::bdtr_r::Offset);

/**
 * General-purpose-timers
 */
class tim10_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Clock division
 */
class ckd_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ckd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Auto-reload preload enable
 */
class arpe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arpe_f(bool value = true) : m_value(value) {}
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
 * Update request source
 */
class urs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr urs_f(bool value = true) : m_value(value) {}
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
 * Update disable
 */
class udis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr udis_f(bool value = true) : m_value(value) {}
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
 * Counter enable
 */
class cen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ckd() const -> ckd_f {return ckd_f(static_cast<uint8_t>(m_value >> ckd_f::Offset));}
	[[nodiscard]] constexpr auto arpe() const -> arpe_f {return arpe_f((m_value & arpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto urs() const -> urs_f {return urs_f((m_value & urs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udis() const -> udis_f {return udis_f((m_value & udis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cen() const -> cen_f {return cen_f((m_value & cen_f::Mask) != 0);}

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
 * DMA/Interrupt enable register
 */
class dier_r {
public:

/**
 * Capture/Compare 1 interrupt enable
 */
class cc1ie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt enable
 */
class uie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc1ie() const -> cc1ie_f {return cc1ie_f((m_value & cc1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uie() const -> uie_f {return uie_f((m_value & uie_f::Mask) != 0);}

	constexpr dier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dier_r other) const -> dier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class sr_r {
public:

/**
 * Capture/Compare 1 overcapture flag
 */
class cc1of_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 interrupt flag
 */
class cc1if_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt flag
 */
class uif_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc1of() const -> cc1of_f {return cc1of_f((m_value & cc1of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1if() const -> cc1if_f {return cc1if_f((m_value & cc1if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uif() const -> uif_f {return uif_f((m_value & uif_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * event generation register
 */
class egr_r {
public:

/**
 * Capture/compare 1 generation
 */
class cc1g_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update generation
 */
class ug_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ug_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc1g() const -> cc1g_f {return cc1g_f((m_value & cc1g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ug() const -> ug_f {return ug_f((m_value & ug_f::Mask) != 0);}

	constexpr egr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(egr_r other) const -> egr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> egr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (output mode)
 */
class ccmr1_output_r {
public:

/**
 * Output Compare 1 mode
 */
class oc1m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc1m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output Compare 1 preload enable
 */
class oc1pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output Compare 1 fast enable
 */
class oc1fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc1m() const -> oc1m_f {return oc1m_f(static_cast<uint8_t>(m_value >> oc1m_f::Offset));}
	[[nodiscard]] constexpr auto oc1pe() const -> oc1pe_f {return oc1pe_f((m_value & oc1pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1fe() const -> oc1fe_f {return oc1fe_f((m_value & oc1fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_output_r other) const -> ccmr1_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (input mode)
 */
class ccmr1_input_r {
public:

/**
 * Input capture 1 filter
 */
class ic1f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic1f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 prescaler
 */
class icpcs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr icpcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic1f() const -> ic1f_f {return ic1f_f(static_cast<uint8_t>(m_value >> ic1f_f::Offset));}
	[[nodiscard]] constexpr auto icpcs() const -> icpcs_f {return icpcs_f(static_cast<uint8_t>(m_value >> icpcs_f::Offset));}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_input_r other) const -> ccmr1_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare enable register
 */
class ccer_r {
public:

/**
 * Capture/Compare 1 output Polarity
 */
class cc1np_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1p_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output enable
 */
class cc1e_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc1np() const -> cc1np_f {return cc1np_f((m_value & cc1np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1p() const -> cc1p_f {return cc1p_f((m_value & cc1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1e() const -> cc1e_f {return cc1e_f((m_value & cc1e_f::Mask) != 0);}

	constexpr ccer_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccer_r other) const -> ccer_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccer_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * counter
 */
class cnt_r {
public:

/**
 * counter value
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

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * prescaler
 */
class psc_r {
public:

/**
 * Prescaler value
 */
class psc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator psc_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(psc_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psc_r>() const {return ClearSet<psc_r>(Mask, *this);}
	constexpr auto operator|(psc_r other) const -> psc_r { return static_cast<psc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psc_r> other) const -> ClearSet<psc_r> {return ClearSet<psc_r>(psc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto psc() const -> psc_f {return psc_f(static_cast<uint16_t>(m_value >> psc_f::Offset));}

	constexpr psc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(psc_r other) const -> psc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> psc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * auto-reload register
 */
class arr_r {
public:

/**
 * Auto-reload value
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

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 1
 */
class ccr1_r {
public:

/**
 * Capture/Compare 1 value
 */
class ccr1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr1_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr1() const -> ccr1_f {return ccr1_f(static_cast<uint16_t>(m_value >> ccr1_f::Offset));}

	constexpr ccr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr1_r other) const -> ccr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,cr1_r> cr1;
	Padding<8> _p4;
	Memory<uint32_t,dier_r> dier;
	Memory<uint32_t,sr_r> sr;
	WriteOnlyMemory<uint32_t,egr_r> egr;
	union {
	Memory<uint32_t,ccmr1_output_r> ccmr1_output;
	Memory<uint32_t,ccmr1_input_r> ccmr1_input;
	};
	Padding<4> _p28;
	Memory<uint32_t,ccer_r> ccer;
	Memory<uint32_t,cnt_r> cnt;
	Memory<uint32_t,psc_r> psc;
	Memory<uint32_t,arr_r> arr;
	Padding<4> _p48;
	Memory<uint32_t,ccr1_r> ccr1;
};

static_assert(std::is_standard_layout_v<tim10_p>);
static_assert(offsetof(tim10_p, cr1) == tim10_p::cr1_r::Offset);
static_assert(offsetof(tim10_p, dier) == tim10_p::dier_r::Offset);
static_assert(offsetof(tim10_p, sr) == tim10_p::sr_r::Offset);
static_assert(offsetof(tim10_p, egr) == tim10_p::egr_r::Offset);
static_assert(offsetof(tim10_p, ccmr1_output) == tim10_p::ccmr1_output_r::Offset);
static_assert(offsetof(tim10_p, ccmr1_input) == tim10_p::ccmr1_input_r::Offset);
static_assert(offsetof(tim10_p, ccer) == tim10_p::ccer_r::Offset);
static_assert(offsetof(tim10_p, cnt) == tim10_p::cnt_r::Offset);
static_assert(offsetof(tim10_p, psc) == tim10_p::psc_r::Offset);
static_assert(offsetof(tim10_p, arr) == tim10_p::arr_r::Offset);
static_assert(offsetof(tim10_p, ccr1) == tim10_p::ccr1_r::Offset);

/**
 * General-purpose-timers
 */
class tim11_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Clock division
 */
class ckd_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ckd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Auto-reload preload enable
 */
class arpe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arpe_f(bool value = true) : m_value(value) {}
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
 * Update request source
 */
class urs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr urs_f(bool value = true) : m_value(value) {}
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
 * Update disable
 */
class udis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr udis_f(bool value = true) : m_value(value) {}
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
 * Counter enable
 */
class cen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ckd() const -> ckd_f {return ckd_f(static_cast<uint8_t>(m_value >> ckd_f::Offset));}
	[[nodiscard]] constexpr auto arpe() const -> arpe_f {return arpe_f((m_value & arpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto urs() const -> urs_f {return urs_f((m_value & urs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udis() const -> udis_f {return udis_f((m_value & udis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cen() const -> cen_f {return cen_f((m_value & cen_f::Mask) != 0);}

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
 * DMA/Interrupt enable register
 */
class dier_r {
public:

/**
 * Capture/Compare 1 interrupt enable
 */
class cc1ie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt enable
 */
class uie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc1ie() const -> cc1ie_f {return cc1ie_f((m_value & cc1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uie() const -> uie_f {return uie_f((m_value & uie_f::Mask) != 0);}

	constexpr dier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dier_r other) const -> dier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class sr_r {
public:

/**
 * Capture/Compare 1 overcapture flag
 */
class cc1of_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 interrupt flag
 */
class cc1if_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt flag
 */
class uif_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc1of() const -> cc1of_f {return cc1of_f((m_value & cc1of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1if() const -> cc1if_f {return cc1if_f((m_value & cc1if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uif() const -> uif_f {return uif_f((m_value & uif_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * event generation register
 */
class egr_r {
public:

/**
 * Capture/compare 1 generation
 */
class cc1g_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update generation
 */
class ug_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ug_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc1g() const -> cc1g_f {return cc1g_f((m_value & cc1g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ug() const -> ug_f {return ug_f((m_value & ug_f::Mask) != 0);}

	constexpr egr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(egr_r other) const -> egr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> egr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (output mode)
 */
class ccmr1_output_r {
public:

/**
 * Output Compare 1 mode
 */
class oc1m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc1m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output Compare 1 preload enable
 */
class oc1pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output Compare 1 fast enable
 */
class oc1fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc1m() const -> oc1m_f {return oc1m_f(static_cast<uint8_t>(m_value >> oc1m_f::Offset));}
	[[nodiscard]] constexpr auto oc1pe() const -> oc1pe_f {return oc1pe_f((m_value & oc1pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1fe() const -> oc1fe_f {return oc1fe_f((m_value & oc1fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_output_r other) const -> ccmr1_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (input mode)
 */
class ccmr1_input_r {
public:

/**
 * Input capture 1 filter
 */
class ic1f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic1f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 prescaler
 */
class icpcs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr icpcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic1f() const -> ic1f_f {return ic1f_f(static_cast<uint8_t>(m_value >> ic1f_f::Offset));}
	[[nodiscard]] constexpr auto icpcs() const -> icpcs_f {return icpcs_f(static_cast<uint8_t>(m_value >> icpcs_f::Offset));}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_input_r other) const -> ccmr1_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare enable register
 */
class ccer_r {
public:

/**
 * Capture/Compare 1 output Polarity
 */
class cc1np_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1p_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output enable
 */
class cc1e_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc1np() const -> cc1np_f {return cc1np_f((m_value & cc1np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1p() const -> cc1p_f {return cc1p_f((m_value & cc1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1e() const -> cc1e_f {return cc1e_f((m_value & cc1e_f::Mask) != 0);}

	constexpr ccer_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccer_r other) const -> ccer_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccer_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * counter
 */
class cnt_r {
public:

/**
 * counter value
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

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * prescaler
 */
class psc_r {
public:

/**
 * Prescaler value
 */
class psc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator psc_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(psc_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psc_r>() const {return ClearSet<psc_r>(Mask, *this);}
	constexpr auto operator|(psc_r other) const -> psc_r { return static_cast<psc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psc_r> other) const -> ClearSet<psc_r> {return ClearSet<psc_r>(psc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto psc() const -> psc_f {return psc_f(static_cast<uint16_t>(m_value >> psc_f::Offset));}

	constexpr psc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(psc_r other) const -> psc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> psc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * auto-reload register
 */
class arr_r {
public:

/**
 * Auto-reload value
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

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 1
 */
class ccr1_r {
public:

/**
 * Capture/Compare 1 value
 */
class ccr1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr1_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr1() const -> ccr1_f {return ccr1_f(static_cast<uint16_t>(m_value >> ccr1_f::Offset));}

	constexpr ccr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr1_r other) const -> ccr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
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
 * Input 1 remapping capability
 */
class rmp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr rmp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator or_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(or_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<or_r>() const {return ClearSet<or_r>(Mask, *this);}
	constexpr auto operator|(or_r other) const -> or_r { return static_cast<or_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<or_r> other) const -> ClearSet<or_r> {return ClearSet<or_r>(or_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto rmp() const -> rmp_f {return rmp_f(static_cast<uint8_t>(m_value >> rmp_f::Offset));}

	constexpr or_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(or_r other) const -> or_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> or_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,cr1_r> cr1;
	Padding<8> _p4;
	Memory<uint32_t,dier_r> dier;
	Memory<uint32_t,sr_r> sr;
	WriteOnlyMemory<uint32_t,egr_r> egr;
	union {
	Memory<uint32_t,ccmr1_output_r> ccmr1_output;
	Memory<uint32_t,ccmr1_input_r> ccmr1_input;
	};
	Padding<4> _p28;
	Memory<uint32_t,ccer_r> ccer;
	Memory<uint32_t,cnt_r> cnt;
	Memory<uint32_t,psc_r> psc;
	Memory<uint32_t,arr_r> arr;
	Padding<4> _p48;
	Memory<uint32_t,ccr1_r> ccr1;
	Padding<24> _p56;
	Memory<uint32_t,or_r> _or;
};

static_assert(std::is_standard_layout_v<tim11_p>);
static_assert(offsetof(tim11_p, cr1) == tim11_p::cr1_r::Offset);
static_assert(offsetof(tim11_p, dier) == tim11_p::dier_r::Offset);
static_assert(offsetof(tim11_p, sr) == tim11_p::sr_r::Offset);
static_assert(offsetof(tim11_p, egr) == tim11_p::egr_r::Offset);
static_assert(offsetof(tim11_p, ccmr1_output) == tim11_p::ccmr1_output_r::Offset);
static_assert(offsetof(tim11_p, ccmr1_input) == tim11_p::ccmr1_input_r::Offset);
static_assert(offsetof(tim11_p, ccer) == tim11_p::ccer_r::Offset);
static_assert(offsetof(tim11_p, cnt) == tim11_p::cnt_r::Offset);
static_assert(offsetof(tim11_p, psc) == tim11_p::psc_r::Offset);
static_assert(offsetof(tim11_p, arr) == tim11_p::arr_r::Offset);
static_assert(offsetof(tim11_p, ccr1) == tim11_p::ccr1_r::Offset);
static_assert(offsetof(tim11_p, _or) == tim11_p::or_r::Offset);

/**
 * General purpose timers
 */
class tim2_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Clock division
 */
class ckd_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ckd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Auto-reload preload enable
 */
class arpe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arpe_f(bool value = true) : m_value(value) {}
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
 * Center-aligned mode selection
 */
class cms_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
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
 * One-pulse mode
 */
class opm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opm_f(bool value = true) : m_value(value) {}
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
 * Update request source
 */
class urs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr urs_f(bool value = true) : m_value(value) {}
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
 * Update disable
 */
class udis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr udis_f(bool value = true) : m_value(value) {}
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
 * Counter enable
 */
class cen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ckd() const -> ckd_f {return ckd_f(static_cast<uint8_t>(m_value >> ckd_f::Offset));}
	[[nodiscard]] constexpr auto arpe() const -> arpe_f {return arpe_f((m_value & arpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cms() const -> cms_f {return cms_f(static_cast<uint8_t>(m_value >> cms_f::Offset));}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opm() const -> opm_f {return opm_f((m_value & opm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto urs() const -> urs_f {return urs_f((m_value & urs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udis() const -> udis_f {return udis_f((m_value & udis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cen() const -> cen_f {return cen_f((m_value & cen_f::Mask) != 0);}

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
 * control register 2
 */
class cr2_r {
public:

/**
 * TI1 selection
 */
class ti1s_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ti1s_f(bool value = true) : m_value(value) {}
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
 * Master mode selection
 */
class mms_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/compare DMA selection
 */
class ccds_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccds_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ti1s() const -> ti1s_f {return ti1s_f((m_value & ti1s_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mms() const -> mms_f {return mms_f(static_cast<uint8_t>(m_value >> mms_f::Offset));}
	[[nodiscard]] constexpr auto ccds() const -> ccds_f {return ccds_f((m_value & ccds_f::Mask) != 0);}

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
 * slave mode control register
 */
class smcr_r {
public:

/**
 * External trigger polarity
 */
class etp_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr etp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External clock enable
 */
class ece_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ece_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External trigger prescaler
 */
class etps_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr etps_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * External trigger filter
 */
class etf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr etf_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Master/Slave mode
 */
class msm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr msm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger selection
 */
class ts_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ts_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Slave mode selection
 */
class sms_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto etp() const -> etp_f {return etp_f((m_value & etp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ece() const -> ece_f {return ece_f((m_value & ece_f::Mask) != 0);}
	[[nodiscard]] constexpr auto etps() const -> etps_f {return etps_f(static_cast<uint8_t>(m_value >> etps_f::Offset));}
	[[nodiscard]] constexpr auto etf() const -> etf_f {return etf_f(static_cast<uint8_t>(m_value >> etf_f::Offset));}
	[[nodiscard]] constexpr auto msm() const -> msm_f {return msm_f((m_value & msm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ts() const -> ts_f {return ts_f(static_cast<uint8_t>(m_value >> ts_f::Offset));}
	[[nodiscard]] constexpr auto sms() const -> sms_f {return sms_f(static_cast<uint8_t>(m_value >> sms_f::Offset));}

	constexpr smcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smcr_r other) const -> smcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA/Interrupt enable register
 */
class dier_r {
public:

/**
 * Trigger DMA request enable
 */
class tde_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tde_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 DMA request enable
 */
class cc4de_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 DMA request enable
 */
class cc3de_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 DMA request enable
 */
class cc2de_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc2de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 DMA request enable
 */
class cc1de_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update DMA request enable
 */
class ude_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ude_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger interrupt enable
 */
class tie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 interrupt enable
 */
class cc4ie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 interrupt enable
 */
class cc3ie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 interrupt enable
 */
class cc2ie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 interrupt enable
 */
class cc1ie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt enable
 */
class uie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tde() const -> tde_f {return tde_f((m_value & tde_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4de() const -> cc4de_f {return cc4de_f((m_value & cc4de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3de() const -> cc3de_f {return cc3de_f((m_value & cc3de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2de() const -> cc2de_f {return cc2de_f((m_value & cc2de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1de() const -> cc1de_f {return cc1de_f((m_value & cc1de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ude() const -> ude_f {return ude_f((m_value & ude_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tie() const -> tie_f {return tie_f((m_value & tie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4ie() const -> cc4ie_f {return cc4ie_f((m_value & cc4ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3ie() const -> cc3ie_f {return cc3ie_f((m_value & cc3ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2ie() const -> cc2ie_f {return cc2ie_f((m_value & cc2ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1ie() const -> cc1ie_f {return cc1ie_f((m_value & cc1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uie() const -> uie_f {return uie_f((m_value & uie_f::Mask) != 0);}

	constexpr dier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dier_r other) const -> dier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class sr_r {
public:

/**
 * Capture/Compare 4 overcapture flag
 */
class cc4of_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 overcapture flag
 */
class cc3of_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 2 overcapture flag
 */
class cc2of_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc2of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 overcapture flag
 */
class cc1of_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger interrupt flag
 */
class tif_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 interrupt flag
 */
class cc4if_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 interrupt flag
 */
class cc3if_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 interrupt flag
 */
class cc2if_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 interrupt flag
 */
class cc1if_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt flag
 */
class uif_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc4of() const -> cc4of_f {return cc4of_f((m_value & cc4of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3of() const -> cc3of_f {return cc3of_f((m_value & cc3of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2of() const -> cc2of_f {return cc2of_f((m_value & cc2of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1of() const -> cc1of_f {return cc1of_f((m_value & cc1of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tif() const -> tif_f {return tif_f((m_value & tif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4if() const -> cc4if_f {return cc4if_f((m_value & cc4if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3if() const -> cc3if_f {return cc3if_f((m_value & cc3if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2if() const -> cc2if_f {return cc2if_f((m_value & cc2if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1if() const -> cc1if_f {return cc1if_f((m_value & cc1if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uif() const -> uif_f {return uif_f((m_value & uif_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * event generation register
 */
class egr_r {
public:

/**
 * Trigger generation
 */
class tg_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 4 generation
 */
class cc4g_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 3 generation
 */
class cc3g_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 2 generation
 */
class cc2g_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 generation
 */
class cc1g_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update generation
 */
class ug_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ug_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tg() const -> tg_f {return tg_f((m_value & tg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4g() const -> cc4g_f {return cc4g_f((m_value & cc4g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3g() const -> cc3g_f {return cc3g_f((m_value & cc3g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2g() const -> cc2g_f {return cc2g_f((m_value & cc2g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1g() const -> cc1g_f {return cc1g_f((m_value & cc1g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ug() const -> ug_f {return ug_f((m_value & ug_f::Mask) != 0);}

	constexpr egr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(egr_r other) const -> egr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> egr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (output mode)
 */
class ccmr1_output_r {
public:

/**
 * OC2CE
 */
class oc2ce_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC2M
 */
class oc2m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc2m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC2PE
 */
class oc2pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC2FE
 */
class oc2fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC2S
 */
class cc2s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc2s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC1CE
 */
class oc1ce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC1M
 */
class oc1m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc1m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC1PE
 */
class oc1pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC1FE
 */
class oc1fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC1S
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc2ce() const -> oc2ce_f {return oc2ce_f((m_value & oc2ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc2m() const -> oc2m_f {return oc2m_f(static_cast<uint8_t>(m_value >> oc2m_f::Offset));}
	[[nodiscard]] constexpr auto oc2pe() const -> oc2pe_f {return oc2pe_f((m_value & oc2pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc2fe() const -> oc2fe_f {return oc2fe_f((m_value & oc2fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto oc1ce() const -> oc1ce_f {return oc1ce_f((m_value & oc1ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1m() const -> oc1m_f {return oc1m_f(static_cast<uint8_t>(m_value >> oc1m_f::Offset));}
	[[nodiscard]] constexpr auto oc1pe() const -> oc1pe_f {return oc1pe_f((m_value & oc1pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1fe() const -> oc1fe_f {return oc1fe_f((m_value & oc1fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_output_r other) const -> ccmr1_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (input mode)
 */
class ccmr1_input_r {
public:

/**
 * Input capture 2 filter
 */
class ic2f_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 2 prescaler
 */
class ic2pcs_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2pcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 2 selection
 */
class cc2s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc2s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 filter
 */
class ic1f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic1f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 prescaler
 */
class icpcs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr icpcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic2f() const -> ic2f_f {return ic2f_f(static_cast<uint8_t>(m_value >> ic2f_f::Offset));}
	[[nodiscard]] constexpr auto ic2pcs() const -> ic2pcs_f {return ic2pcs_f(static_cast<uint8_t>(m_value >> ic2pcs_f::Offset));}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto ic1f() const -> ic1f_f {return ic1f_f(static_cast<uint8_t>(m_value >> ic1f_f::Offset));}
	[[nodiscard]] constexpr auto icpcs() const -> icpcs_f {return icpcs_f(static_cast<uint8_t>(m_value >> icpcs_f::Offset));}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_input_r other) const -> ccmr1_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 2 (output mode)
 */
class ccmr2_output_r {
public:

/**
 * OC4CE
 */
class oc4ce_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC4M
 */
class oc4m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc4m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC4PE
 */
class oc4pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC4FE
 */
class oc4fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC4S
 */
class cc4s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc4s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC3CE
 */
class oc3ce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC3M
 */
class oc3m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc3m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC3PE
 */
class oc3pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC3FE
 */
class oc3fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC3S
 */
class cc3s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc3s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc4ce() const -> oc4ce_f {return oc4ce_f((m_value & oc4ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc4m() const -> oc4m_f {return oc4m_f(static_cast<uint8_t>(m_value >> oc4m_f::Offset));}
	[[nodiscard]] constexpr auto oc4pe() const -> oc4pe_f {return oc4pe_f((m_value & oc4pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc4fe() const -> oc4fe_f {return oc4fe_f((m_value & oc4fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4s() const -> cc4s_f {return cc4s_f(static_cast<uint8_t>(m_value >> cc4s_f::Offset));}
	[[nodiscard]] constexpr auto oc3ce() const -> oc3ce_f {return oc3ce_f((m_value & oc3ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc3m() const -> oc3m_f {return oc3m_f(static_cast<uint8_t>(m_value >> oc3m_f::Offset));}
	[[nodiscard]] constexpr auto oc3pe() const -> oc3pe_f {return oc3pe_f((m_value & oc3pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc3fe() const -> oc3fe_f {return oc3fe_f((m_value & oc3fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3s() const -> cc3s_f {return cc3s_f(static_cast<uint8_t>(m_value >> cc3s_f::Offset));}

	constexpr ccmr2_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr2_output_r other) const -> ccmr2_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr2_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 2 (input mode)
 */
class ccmr2_input_r {
public:

/**
 * Input capture 4 filter
 */
class ic4f_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic4f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 4 prescaler
 */
class ic4psc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic4psc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 4 selection
 */
class cc4s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc4s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 3 filter
 */
class ic3f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic3f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 3 prescaler
 */
class ic3psc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic3psc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/compare 3 selection
 */
class cc3s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc3s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic4f() const -> ic4f_f {return ic4f_f(static_cast<uint8_t>(m_value >> ic4f_f::Offset));}
	[[nodiscard]] constexpr auto ic4psc() const -> ic4psc_f {return ic4psc_f(static_cast<uint8_t>(m_value >> ic4psc_f::Offset));}
	[[nodiscard]] constexpr auto cc4s() const -> cc4s_f {return cc4s_f(static_cast<uint8_t>(m_value >> cc4s_f::Offset));}
	[[nodiscard]] constexpr auto ic3f() const -> ic3f_f {return ic3f_f(static_cast<uint8_t>(m_value >> ic3f_f::Offset));}
	[[nodiscard]] constexpr auto ic3psc() const -> ic3psc_f {return ic3psc_f(static_cast<uint8_t>(m_value >> ic3psc_f::Offset));}
	[[nodiscard]] constexpr auto cc3s() const -> cc3s_f {return cc3s_f(static_cast<uint8_t>(m_value >> cc3s_f::Offset));}

	constexpr ccmr2_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr2_input_r other) const -> ccmr2_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr2_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare enable register
 */
class ccer_r {
public:

/**
 * Capture/Compare 4 output Polarity
 */
class cc4np_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc4p_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 output enable
 */
class cc4e_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc3np_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc3p_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output enable
 */
class cc3e_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output Polarity
 */
class cc2np_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output Polarity
 */
class cc2p_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output enable
 */
class cc2e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1np_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1p_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output enable
 */
class cc1e_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc4np() const -> cc4np_f {return cc4np_f((m_value & cc4np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4p() const -> cc4p_f {return cc4p_f((m_value & cc4p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4e() const -> cc4e_f {return cc4e_f((m_value & cc4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3np() const -> cc3np_f {return cc3np_f((m_value & cc3np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3p() const -> cc3p_f {return cc3p_f((m_value & cc3p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3e() const -> cc3e_f {return cc3e_f((m_value & cc3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2np() const -> cc2np_f {return cc2np_f((m_value & cc2np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2p() const -> cc2p_f {return cc2p_f((m_value & cc2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2e() const -> cc2e_f {return cc2e_f((m_value & cc2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1np() const -> cc1np_f {return cc1np_f((m_value & cc1np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1p() const -> cc1p_f {return cc1p_f((m_value & cc1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1e() const -> cc1e_f {return cc1e_f((m_value & cc1e_f::Mask) != 0);}

	constexpr ccer_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccer_r other) const -> ccer_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccer_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * counter
 */
class cnt_r {
public:

/**
 * High counter value
 */
class cnt_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cnt_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cnt_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cnt_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low counter value
 */
class cnt_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cnt_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cnt_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cnt_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto cnt_h() const -> cnt_h_f {return cnt_h_f(static_cast<uint16_t>(m_value >> cnt_h_f::Offset));}
	[[nodiscard]] constexpr auto cnt_l() const -> cnt_l_f {return cnt_l_f(static_cast<uint16_t>(m_value >> cnt_l_f::Offset));}

	constexpr cnt_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cnt_r other) const -> cnt_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cnt_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * prescaler
 */
class psc_r {
public:

/**
 * Prescaler value
 */
class psc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator psc_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(psc_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psc_r>() const {return ClearSet<psc_r>(Mask, *this);}
	constexpr auto operator|(psc_r other) const -> psc_r { return static_cast<psc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psc_r> other) const -> ClearSet<psc_r> {return ClearSet<psc_r>(psc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto psc() const -> psc_f {return psc_f(static_cast<uint16_t>(m_value >> psc_f::Offset));}

	constexpr psc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(psc_r other) const -> psc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> psc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * auto-reload register
 */
class arr_r {
public:

/**
 * High Auto-reload value
 */
class arr_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr arr_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator arr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(arr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<arr_r>() const {return ClearSet<arr_r>(Mask, *this);}
	constexpr auto operator|(arr_r other) const -> arr_r { return static_cast<arr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<arr_r> other) const -> ClearSet<arr_r> {return ClearSet<arr_r>(arr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Auto-reload value
 */
class arr_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr arr_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator arr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(arr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<arr_r>() const {return ClearSet<arr_r>(Mask, *this);}
	constexpr auto operator|(arr_r other) const -> arr_r { return static_cast<arr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<arr_r> other) const -> ClearSet<arr_r> {return ClearSet<arr_r>(arr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto arr_h() const -> arr_h_f {return arr_h_f(static_cast<uint16_t>(m_value >> arr_h_f::Offset));}
	[[nodiscard]] constexpr auto arr_l() const -> arr_l_f {return arr_l_f(static_cast<uint16_t>(m_value >> arr_l_f::Offset));}

	constexpr arr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(arr_r other) const -> arr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> arr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 1
 */
class ccr1_r {
public:

/**
 * High Capture/Compare 1 value
 */
class ccr1_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr1_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare 1 value
 */
class ccr1_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr1_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr1_h() const -> ccr1_h_f {return ccr1_h_f(static_cast<uint16_t>(m_value >> ccr1_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr1_l() const -> ccr1_l_f {return ccr1_l_f(static_cast<uint16_t>(m_value >> ccr1_l_f::Offset));}

	constexpr ccr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr1_r other) const -> ccr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 2
 */
class ccr2_r {
public:

/**
 * High Capture/Compare 2 value
 */
class ccr2_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr2_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare 2 value
 */
class ccr2_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr2_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr2_h() const -> ccr2_h_f {return ccr2_h_f(static_cast<uint16_t>(m_value >> ccr2_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr2_l() const -> ccr2_l_f {return ccr2_l_f(static_cast<uint16_t>(m_value >> ccr2_l_f::Offset));}

	constexpr ccr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr2_r other) const -> ccr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 3
 */
class ccr3_r {
public:

/**
 * High Capture/Compare value
 */
class ccr3_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr3_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare value
 */
class ccr3_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr3_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr3_h() const -> ccr3_h_f {return ccr3_h_f(static_cast<uint16_t>(m_value >> ccr3_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr3_l() const -> ccr3_l_f {return ccr3_l_f(static_cast<uint16_t>(m_value >> ccr3_l_f::Offset));}

	constexpr ccr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr3_r other) const -> ccr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 4
 */
class ccr4_r {
public:

/**
 * High Capture/Compare value
 */
class ccr4_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr4_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare value
 */
class ccr4_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr4_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr4_h() const -> ccr4_h_f {return ccr4_h_f(static_cast<uint16_t>(m_value >> ccr4_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr4_l() const -> ccr4_l_f {return ccr4_l_f(static_cast<uint16_t>(m_value >> ccr4_l_f::Offset));}

	constexpr ccr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr4_r other) const -> ccr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA control register
 */
class dcr_r {
public:

/**
 * DMA burst length
 */
class dbl_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dbl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DMA base address
 */
class dba_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dba_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dbl() const -> dbl_f {return dbl_f(static_cast<uint8_t>(m_value >> dbl_f::Offset));}
	[[nodiscard]] constexpr auto dba() const -> dba_f {return dba_f(static_cast<uint8_t>(m_value >> dba_f::Offset));}

	constexpr dcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dcr_r other) const -> dcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA address for full transfer
 */
class dmar_r {
public:

/**
 * DMA register for burst accesses
 */
class dmab_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dmab_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dmar_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dmar_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dmar_r>() const {return ClearSet<dmar_r>(Mask, *this);}
	constexpr auto operator|(dmar_r other) const -> dmar_r { return static_cast<dmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dmar_r> other) const -> ClearSet<dmar_r> {return ClearSet<dmar_r>(dmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dmab() const -> dmab_f {return dmab_f(static_cast<uint16_t>(m_value >> dmab_f::Offset));}

	constexpr dmar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dmar_r other) const -> dmar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dmar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM5 option register
 */
class or_r {
public:

/**
 * Timer Input 4 remap
 */
class itr1_rmp_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr itr1_rmp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator or_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(or_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<or_r>() const {return ClearSet<or_r>(Mask, *this);}
	constexpr auto operator|(or_r other) const -> or_r { return static_cast<or_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<or_r> other) const -> ClearSet<or_r> {return ClearSet<or_r>(or_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto itr1_rmp() const -> itr1_rmp_f {return itr1_rmp_f(static_cast<uint8_t>(m_value >> itr1_rmp_f::Offset));}

	constexpr or_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(or_r other) const -> or_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> or_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct ccr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using ccr_v = typename ccr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ccr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,smcr_r> smcr;
	Memory<uint32_t,dier_r> dier;
	Memory<uint32_t,sr_r> sr;
	WriteOnlyMemory<uint32_t,egr_r> egr;
	union {
	Memory<uint32_t,ccmr1_output_r> ccmr1_output;
	Memory<uint32_t,ccmr1_input_r> ccmr1_input;
	};
	union {
	Memory<uint32_t,ccmr2_output_r> ccmr2_output;
	Memory<uint32_t,ccmr2_input_r> ccmr2_input;
	};
	Memory<uint32_t,ccer_r> ccer;
	Memory<uint32_t,cnt_r> cnt;
	Memory<uint32_t,psc_r> psc;
	Memory<uint32_t,arr_r> arr;
	Padding<4> _p48;
	Memory<uint32_t,ccr1_r> ccr1;
	Memory<uint32_t,ccr2_r> ccr2;
	Memory<uint32_t,ccr3_r> ccr3;
	Memory<uint32_t,ccr4_r> ccr4;
	Padding<4> _p68;
	Memory<uint32_t,dcr_r> dcr;
	Memory<uint32_t,dmar_r> dmar;
	Memory<uint32_t,or_r> _or;
};

template<> constexpr auto& tim2_p::cr<1>() { return cr1; }
template<> constexpr auto& tim2_p::cr<2>() { return cr2; }

template<> struct tim2_p::cr_r<1> { using type = tim2_p::cr1_r; };
template<> struct tim2_p::cr_r<2> { using type = tim2_p::cr2_r; };

template<> constexpr auto& tim2_p::ccr<1>() { return ccr1; }
template<> constexpr auto& tim2_p::ccr<2>() { return ccr2; }
template<> constexpr auto& tim2_p::ccr<3>() { return ccr3; }
template<> constexpr auto& tim2_p::ccr<4>() { return ccr4; }

template<> struct tim2_p::ccr_r<1> { using type = tim2_p::ccr1_r; };
template<> struct tim2_p::ccr_r<2> { using type = tim2_p::ccr2_r; };
template<> struct tim2_p::ccr_r<3> { using type = tim2_p::ccr3_r; };
template<> struct tim2_p::ccr_r<4> { using type = tim2_p::ccr4_r; };

static_assert(std::is_standard_layout_v<tim2_p>);
static_assert(offsetof(tim2_p, cr1) == tim2_p::cr1_r::Offset);
static_assert(offsetof(tim2_p, cr2) == tim2_p::cr2_r::Offset);
static_assert(offsetof(tim2_p, smcr) == tim2_p::smcr_r::Offset);
static_assert(offsetof(tim2_p, dier) == tim2_p::dier_r::Offset);
static_assert(offsetof(tim2_p, sr) == tim2_p::sr_r::Offset);
static_assert(offsetof(tim2_p, egr) == tim2_p::egr_r::Offset);
static_assert(offsetof(tim2_p, ccmr1_output) == tim2_p::ccmr1_output_r::Offset);
static_assert(offsetof(tim2_p, ccmr1_input) == tim2_p::ccmr1_input_r::Offset);
static_assert(offsetof(tim2_p, ccmr2_output) == tim2_p::ccmr2_output_r::Offset);
static_assert(offsetof(tim2_p, ccmr2_input) == tim2_p::ccmr2_input_r::Offset);
static_assert(offsetof(tim2_p, ccer) == tim2_p::ccer_r::Offset);
static_assert(offsetof(tim2_p, cnt) == tim2_p::cnt_r::Offset);
static_assert(offsetof(tim2_p, psc) == tim2_p::psc_r::Offset);
static_assert(offsetof(tim2_p, arr) == tim2_p::arr_r::Offset);
static_assert(offsetof(tim2_p, ccr1) == tim2_p::ccr1_r::Offset);
static_assert(offsetof(tim2_p, ccr2) == tim2_p::ccr2_r::Offset);
static_assert(offsetof(tim2_p, ccr3) == tim2_p::ccr3_r::Offset);
static_assert(offsetof(tim2_p, ccr4) == tim2_p::ccr4_r::Offset);
static_assert(offsetof(tim2_p, dcr) == tim2_p::dcr_r::Offset);
static_assert(offsetof(tim2_p, dmar) == tim2_p::dmar_r::Offset);
static_assert(offsetof(tim2_p, _or) == tim2_p::or_r::Offset);

/**
 * General purpose timers
 */
class tim3_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Clock division
 */
class ckd_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ckd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Auto-reload preload enable
 */
class arpe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arpe_f(bool value = true) : m_value(value) {}
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
 * Center-aligned mode selection
 */
class cms_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
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
 * One-pulse mode
 */
class opm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opm_f(bool value = true) : m_value(value) {}
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
 * Update request source
 */
class urs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr urs_f(bool value = true) : m_value(value) {}
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
 * Update disable
 */
class udis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr udis_f(bool value = true) : m_value(value) {}
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
 * Counter enable
 */
class cen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ckd() const -> ckd_f {return ckd_f(static_cast<uint8_t>(m_value >> ckd_f::Offset));}
	[[nodiscard]] constexpr auto arpe() const -> arpe_f {return arpe_f((m_value & arpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cms() const -> cms_f {return cms_f(static_cast<uint8_t>(m_value >> cms_f::Offset));}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opm() const -> opm_f {return opm_f((m_value & opm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto urs() const -> urs_f {return urs_f((m_value & urs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udis() const -> udis_f {return udis_f((m_value & udis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cen() const -> cen_f {return cen_f((m_value & cen_f::Mask) != 0);}

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
 * control register 2
 */
class cr2_r {
public:

/**
 * TI1 selection
 */
class ti1s_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ti1s_f(bool value = true) : m_value(value) {}
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
 * Master mode selection
 */
class mms_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/compare DMA selection
 */
class ccds_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccds_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ti1s() const -> ti1s_f {return ti1s_f((m_value & ti1s_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mms() const -> mms_f {return mms_f(static_cast<uint8_t>(m_value >> mms_f::Offset));}
	[[nodiscard]] constexpr auto ccds() const -> ccds_f {return ccds_f((m_value & ccds_f::Mask) != 0);}

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
 * slave mode control register
 */
class smcr_r {
public:

/**
 * External trigger polarity
 */
class etp_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr etp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External clock enable
 */
class ece_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ece_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External trigger prescaler
 */
class etps_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr etps_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * External trigger filter
 */
class etf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr etf_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Master/Slave mode
 */
class msm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr msm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger selection
 */
class ts_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ts_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Slave mode selection
 */
class sms_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto etp() const -> etp_f {return etp_f((m_value & etp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ece() const -> ece_f {return ece_f((m_value & ece_f::Mask) != 0);}
	[[nodiscard]] constexpr auto etps() const -> etps_f {return etps_f(static_cast<uint8_t>(m_value >> etps_f::Offset));}
	[[nodiscard]] constexpr auto etf() const -> etf_f {return etf_f(static_cast<uint8_t>(m_value >> etf_f::Offset));}
	[[nodiscard]] constexpr auto msm() const -> msm_f {return msm_f((m_value & msm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ts() const -> ts_f {return ts_f(static_cast<uint8_t>(m_value >> ts_f::Offset));}
	[[nodiscard]] constexpr auto sms() const -> sms_f {return sms_f(static_cast<uint8_t>(m_value >> sms_f::Offset));}

	constexpr smcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smcr_r other) const -> smcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA/Interrupt enable register
 */
class dier_r {
public:

/**
 * Trigger DMA request enable
 */
class tde_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tde_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 DMA request enable
 */
class cc4de_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 DMA request enable
 */
class cc3de_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 DMA request enable
 */
class cc2de_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc2de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 DMA request enable
 */
class cc1de_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update DMA request enable
 */
class ude_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ude_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger interrupt enable
 */
class tie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 interrupt enable
 */
class cc4ie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 interrupt enable
 */
class cc3ie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 interrupt enable
 */
class cc2ie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 interrupt enable
 */
class cc1ie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt enable
 */
class uie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tde() const -> tde_f {return tde_f((m_value & tde_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4de() const -> cc4de_f {return cc4de_f((m_value & cc4de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3de() const -> cc3de_f {return cc3de_f((m_value & cc3de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2de() const -> cc2de_f {return cc2de_f((m_value & cc2de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1de() const -> cc1de_f {return cc1de_f((m_value & cc1de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ude() const -> ude_f {return ude_f((m_value & ude_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tie() const -> tie_f {return tie_f((m_value & tie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4ie() const -> cc4ie_f {return cc4ie_f((m_value & cc4ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3ie() const -> cc3ie_f {return cc3ie_f((m_value & cc3ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2ie() const -> cc2ie_f {return cc2ie_f((m_value & cc2ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1ie() const -> cc1ie_f {return cc1ie_f((m_value & cc1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uie() const -> uie_f {return uie_f((m_value & uie_f::Mask) != 0);}

	constexpr dier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dier_r other) const -> dier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class sr_r {
public:

/**
 * Capture/Compare 4 overcapture flag
 */
class cc4of_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 overcapture flag
 */
class cc3of_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 2 overcapture flag
 */
class cc2of_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc2of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 overcapture flag
 */
class cc1of_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger interrupt flag
 */
class tif_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 interrupt flag
 */
class cc4if_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 interrupt flag
 */
class cc3if_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 interrupt flag
 */
class cc2if_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 interrupt flag
 */
class cc1if_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt flag
 */
class uif_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc4of() const -> cc4of_f {return cc4of_f((m_value & cc4of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3of() const -> cc3of_f {return cc3of_f((m_value & cc3of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2of() const -> cc2of_f {return cc2of_f((m_value & cc2of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1of() const -> cc1of_f {return cc1of_f((m_value & cc1of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tif() const -> tif_f {return tif_f((m_value & tif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4if() const -> cc4if_f {return cc4if_f((m_value & cc4if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3if() const -> cc3if_f {return cc3if_f((m_value & cc3if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2if() const -> cc2if_f {return cc2if_f((m_value & cc2if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1if() const -> cc1if_f {return cc1if_f((m_value & cc1if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uif() const -> uif_f {return uif_f((m_value & uif_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * event generation register
 */
class egr_r {
public:

/**
 * Trigger generation
 */
class tg_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 4 generation
 */
class cc4g_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 3 generation
 */
class cc3g_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 2 generation
 */
class cc2g_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 generation
 */
class cc1g_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update generation
 */
class ug_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ug_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tg() const -> tg_f {return tg_f((m_value & tg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4g() const -> cc4g_f {return cc4g_f((m_value & cc4g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3g() const -> cc3g_f {return cc3g_f((m_value & cc3g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2g() const -> cc2g_f {return cc2g_f((m_value & cc2g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1g() const -> cc1g_f {return cc1g_f((m_value & cc1g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ug() const -> ug_f {return ug_f((m_value & ug_f::Mask) != 0);}

	constexpr egr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(egr_r other) const -> egr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> egr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (output mode)
 */
class ccmr1_output_r {
public:

/**
 * OC2CE
 */
class oc2ce_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC2M
 */
class oc2m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc2m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC2PE
 */
class oc2pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC2FE
 */
class oc2fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC2S
 */
class cc2s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc2s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC1CE
 */
class oc1ce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC1M
 */
class oc1m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc1m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC1PE
 */
class oc1pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC1FE
 */
class oc1fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC1S
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc2ce() const -> oc2ce_f {return oc2ce_f((m_value & oc2ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc2m() const -> oc2m_f {return oc2m_f(static_cast<uint8_t>(m_value >> oc2m_f::Offset));}
	[[nodiscard]] constexpr auto oc2pe() const -> oc2pe_f {return oc2pe_f((m_value & oc2pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc2fe() const -> oc2fe_f {return oc2fe_f((m_value & oc2fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto oc1ce() const -> oc1ce_f {return oc1ce_f((m_value & oc1ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1m() const -> oc1m_f {return oc1m_f(static_cast<uint8_t>(m_value >> oc1m_f::Offset));}
	[[nodiscard]] constexpr auto oc1pe() const -> oc1pe_f {return oc1pe_f((m_value & oc1pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1fe() const -> oc1fe_f {return oc1fe_f((m_value & oc1fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_output_r other) const -> ccmr1_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (input mode)
 */
class ccmr1_input_r {
public:

/**
 * Input capture 2 filter
 */
class ic2f_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 2 prescaler
 */
class ic2pcs_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2pcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 2 selection
 */
class cc2s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc2s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 filter
 */
class ic1f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic1f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 prescaler
 */
class icpcs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr icpcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic2f() const -> ic2f_f {return ic2f_f(static_cast<uint8_t>(m_value >> ic2f_f::Offset));}
	[[nodiscard]] constexpr auto ic2pcs() const -> ic2pcs_f {return ic2pcs_f(static_cast<uint8_t>(m_value >> ic2pcs_f::Offset));}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto ic1f() const -> ic1f_f {return ic1f_f(static_cast<uint8_t>(m_value >> ic1f_f::Offset));}
	[[nodiscard]] constexpr auto icpcs() const -> icpcs_f {return icpcs_f(static_cast<uint8_t>(m_value >> icpcs_f::Offset));}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_input_r other) const -> ccmr1_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 2 (output mode)
 */
class ccmr2_output_r {
public:

/**
 * OC4CE
 */
class oc4ce_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC4M
 */
class oc4m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc4m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC4PE
 */
class oc4pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC4FE
 */
class oc4fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC4S
 */
class cc4s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc4s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC3CE
 */
class oc3ce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC3M
 */
class oc3m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc3m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC3PE
 */
class oc3pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC3FE
 */
class oc3fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC3S
 */
class cc3s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc3s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc4ce() const -> oc4ce_f {return oc4ce_f((m_value & oc4ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc4m() const -> oc4m_f {return oc4m_f(static_cast<uint8_t>(m_value >> oc4m_f::Offset));}
	[[nodiscard]] constexpr auto oc4pe() const -> oc4pe_f {return oc4pe_f((m_value & oc4pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc4fe() const -> oc4fe_f {return oc4fe_f((m_value & oc4fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4s() const -> cc4s_f {return cc4s_f(static_cast<uint8_t>(m_value >> cc4s_f::Offset));}
	[[nodiscard]] constexpr auto oc3ce() const -> oc3ce_f {return oc3ce_f((m_value & oc3ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc3m() const -> oc3m_f {return oc3m_f(static_cast<uint8_t>(m_value >> oc3m_f::Offset));}
	[[nodiscard]] constexpr auto oc3pe() const -> oc3pe_f {return oc3pe_f((m_value & oc3pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc3fe() const -> oc3fe_f {return oc3fe_f((m_value & oc3fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3s() const -> cc3s_f {return cc3s_f(static_cast<uint8_t>(m_value >> cc3s_f::Offset));}

	constexpr ccmr2_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr2_output_r other) const -> ccmr2_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr2_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 2 (input mode)
 */
class ccmr2_input_r {
public:

/**
 * Input capture 4 filter
 */
class ic4f_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic4f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 4 prescaler
 */
class ic4psc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic4psc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 4 selection
 */
class cc4s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc4s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 3 filter
 */
class ic3f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic3f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 3 prescaler
 */
class ic3psc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic3psc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/compare 3 selection
 */
class cc3s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc3s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic4f() const -> ic4f_f {return ic4f_f(static_cast<uint8_t>(m_value >> ic4f_f::Offset));}
	[[nodiscard]] constexpr auto ic4psc() const -> ic4psc_f {return ic4psc_f(static_cast<uint8_t>(m_value >> ic4psc_f::Offset));}
	[[nodiscard]] constexpr auto cc4s() const -> cc4s_f {return cc4s_f(static_cast<uint8_t>(m_value >> cc4s_f::Offset));}
	[[nodiscard]] constexpr auto ic3f() const -> ic3f_f {return ic3f_f(static_cast<uint8_t>(m_value >> ic3f_f::Offset));}
	[[nodiscard]] constexpr auto ic3psc() const -> ic3psc_f {return ic3psc_f(static_cast<uint8_t>(m_value >> ic3psc_f::Offset));}
	[[nodiscard]] constexpr auto cc3s() const -> cc3s_f {return cc3s_f(static_cast<uint8_t>(m_value >> cc3s_f::Offset));}

	constexpr ccmr2_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr2_input_r other) const -> ccmr2_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr2_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare enable register
 */
class ccer_r {
public:

/**
 * Capture/Compare 4 output Polarity
 */
class cc4np_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc4p_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 output enable
 */
class cc4e_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc3np_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc3p_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output enable
 */
class cc3e_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output Polarity
 */
class cc2np_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output Polarity
 */
class cc2p_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output enable
 */
class cc2e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1np_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1p_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output enable
 */
class cc1e_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc4np() const -> cc4np_f {return cc4np_f((m_value & cc4np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4p() const -> cc4p_f {return cc4p_f((m_value & cc4p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4e() const -> cc4e_f {return cc4e_f((m_value & cc4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3np() const -> cc3np_f {return cc3np_f((m_value & cc3np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3p() const -> cc3p_f {return cc3p_f((m_value & cc3p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3e() const -> cc3e_f {return cc3e_f((m_value & cc3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2np() const -> cc2np_f {return cc2np_f((m_value & cc2np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2p() const -> cc2p_f {return cc2p_f((m_value & cc2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2e() const -> cc2e_f {return cc2e_f((m_value & cc2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1np() const -> cc1np_f {return cc1np_f((m_value & cc1np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1p() const -> cc1p_f {return cc1p_f((m_value & cc1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1e() const -> cc1e_f {return cc1e_f((m_value & cc1e_f::Mask) != 0);}

	constexpr ccer_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccer_r other) const -> ccer_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccer_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * counter
 */
class cnt_r {
public:

/**
 * High counter value
 */
class cnt_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cnt_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cnt_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cnt_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low counter value
 */
class cnt_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cnt_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cnt_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cnt_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto cnt_h() const -> cnt_h_f {return cnt_h_f(static_cast<uint16_t>(m_value >> cnt_h_f::Offset));}
	[[nodiscard]] constexpr auto cnt_l() const -> cnt_l_f {return cnt_l_f(static_cast<uint16_t>(m_value >> cnt_l_f::Offset));}

	constexpr cnt_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cnt_r other) const -> cnt_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cnt_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * prescaler
 */
class psc_r {
public:

/**
 * Prescaler value
 */
class psc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator psc_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(psc_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psc_r>() const {return ClearSet<psc_r>(Mask, *this);}
	constexpr auto operator|(psc_r other) const -> psc_r { return static_cast<psc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psc_r> other) const -> ClearSet<psc_r> {return ClearSet<psc_r>(psc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto psc() const -> psc_f {return psc_f(static_cast<uint16_t>(m_value >> psc_f::Offset));}

	constexpr psc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(psc_r other) const -> psc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> psc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * auto-reload register
 */
class arr_r {
public:

/**
 * High Auto-reload value
 */
class arr_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr arr_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator arr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(arr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<arr_r>() const {return ClearSet<arr_r>(Mask, *this);}
	constexpr auto operator|(arr_r other) const -> arr_r { return static_cast<arr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<arr_r> other) const -> ClearSet<arr_r> {return ClearSet<arr_r>(arr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Auto-reload value
 */
class arr_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr arr_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator arr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(arr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<arr_r>() const {return ClearSet<arr_r>(Mask, *this);}
	constexpr auto operator|(arr_r other) const -> arr_r { return static_cast<arr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<arr_r> other) const -> ClearSet<arr_r> {return ClearSet<arr_r>(arr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto arr_h() const -> arr_h_f {return arr_h_f(static_cast<uint16_t>(m_value >> arr_h_f::Offset));}
	[[nodiscard]] constexpr auto arr_l() const -> arr_l_f {return arr_l_f(static_cast<uint16_t>(m_value >> arr_l_f::Offset));}

	constexpr arr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(arr_r other) const -> arr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> arr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 1
 */
class ccr1_r {
public:

/**
 * High Capture/Compare 1 value
 */
class ccr1_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr1_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare 1 value
 */
class ccr1_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr1_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr1_h() const -> ccr1_h_f {return ccr1_h_f(static_cast<uint16_t>(m_value >> ccr1_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr1_l() const -> ccr1_l_f {return ccr1_l_f(static_cast<uint16_t>(m_value >> ccr1_l_f::Offset));}

	constexpr ccr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr1_r other) const -> ccr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 2
 */
class ccr2_r {
public:

/**
 * High Capture/Compare 2 value
 */
class ccr2_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr2_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare 2 value
 */
class ccr2_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr2_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr2_h() const -> ccr2_h_f {return ccr2_h_f(static_cast<uint16_t>(m_value >> ccr2_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr2_l() const -> ccr2_l_f {return ccr2_l_f(static_cast<uint16_t>(m_value >> ccr2_l_f::Offset));}

	constexpr ccr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr2_r other) const -> ccr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 3
 */
class ccr3_r {
public:

/**
 * High Capture/Compare value
 */
class ccr3_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr3_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare value
 */
class ccr3_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr3_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr3_h() const -> ccr3_h_f {return ccr3_h_f(static_cast<uint16_t>(m_value >> ccr3_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr3_l() const -> ccr3_l_f {return ccr3_l_f(static_cast<uint16_t>(m_value >> ccr3_l_f::Offset));}

	constexpr ccr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr3_r other) const -> ccr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 4
 */
class ccr4_r {
public:

/**
 * High Capture/Compare value
 */
class ccr4_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr4_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare value
 */
class ccr4_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr4_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr4_h() const -> ccr4_h_f {return ccr4_h_f(static_cast<uint16_t>(m_value >> ccr4_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr4_l() const -> ccr4_l_f {return ccr4_l_f(static_cast<uint16_t>(m_value >> ccr4_l_f::Offset));}

	constexpr ccr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr4_r other) const -> ccr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA control register
 */
class dcr_r {
public:

/**
 * DMA burst length
 */
class dbl_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dbl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DMA base address
 */
class dba_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dba_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dbl() const -> dbl_f {return dbl_f(static_cast<uint8_t>(m_value >> dbl_f::Offset));}
	[[nodiscard]] constexpr auto dba() const -> dba_f {return dba_f(static_cast<uint8_t>(m_value >> dba_f::Offset));}

	constexpr dcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dcr_r other) const -> dcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA address for full transfer
 */
class dmar_r {
public:

/**
 * DMA register for burst accesses
 */
class dmab_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dmab_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dmar_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dmar_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dmar_r>() const {return ClearSet<dmar_r>(Mask, *this);}
	constexpr auto operator|(dmar_r other) const -> dmar_r { return static_cast<dmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dmar_r> other) const -> ClearSet<dmar_r> {return ClearSet<dmar_r>(dmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dmab() const -> dmab_f {return dmab_f(static_cast<uint16_t>(m_value >> dmab_f::Offset));}

	constexpr dmar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dmar_r other) const -> dmar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dmar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct ccr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using ccr_v = typename ccr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ccr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,smcr_r> smcr;
	Memory<uint32_t,dier_r> dier;
	Memory<uint32_t,sr_r> sr;
	WriteOnlyMemory<uint32_t,egr_r> egr;
	union {
	Memory<uint32_t,ccmr1_output_r> ccmr1_output;
	Memory<uint32_t,ccmr1_input_r> ccmr1_input;
	};
	union {
	Memory<uint32_t,ccmr2_output_r> ccmr2_output;
	Memory<uint32_t,ccmr2_input_r> ccmr2_input;
	};
	Memory<uint32_t,ccer_r> ccer;
	Memory<uint32_t,cnt_r> cnt;
	Memory<uint32_t,psc_r> psc;
	Memory<uint32_t,arr_r> arr;
	Padding<4> _p48;
	Memory<uint32_t,ccr1_r> ccr1;
	Memory<uint32_t,ccr2_r> ccr2;
	Memory<uint32_t,ccr3_r> ccr3;
	Memory<uint32_t,ccr4_r> ccr4;
	Padding<4> _p68;
	Memory<uint32_t,dcr_r> dcr;
	Memory<uint32_t,dmar_r> dmar;
};

template<> constexpr auto& tim3_p::cr<1>() { return cr1; }
template<> constexpr auto& tim3_p::cr<2>() { return cr2; }

template<> struct tim3_p::cr_r<1> { using type = tim3_p::cr1_r; };
template<> struct tim3_p::cr_r<2> { using type = tim3_p::cr2_r; };

template<> constexpr auto& tim3_p::ccr<1>() { return ccr1; }
template<> constexpr auto& tim3_p::ccr<2>() { return ccr2; }
template<> constexpr auto& tim3_p::ccr<3>() { return ccr3; }
template<> constexpr auto& tim3_p::ccr<4>() { return ccr4; }

template<> struct tim3_p::ccr_r<1> { using type = tim3_p::ccr1_r; };
template<> struct tim3_p::ccr_r<2> { using type = tim3_p::ccr2_r; };
template<> struct tim3_p::ccr_r<3> { using type = tim3_p::ccr3_r; };
template<> struct tim3_p::ccr_r<4> { using type = tim3_p::ccr4_r; };

static_assert(std::is_standard_layout_v<tim3_p>);
static_assert(offsetof(tim3_p, cr1) == tim3_p::cr1_r::Offset);
static_assert(offsetof(tim3_p, cr2) == tim3_p::cr2_r::Offset);
static_assert(offsetof(tim3_p, smcr) == tim3_p::smcr_r::Offset);
static_assert(offsetof(tim3_p, dier) == tim3_p::dier_r::Offset);
static_assert(offsetof(tim3_p, sr) == tim3_p::sr_r::Offset);
static_assert(offsetof(tim3_p, egr) == tim3_p::egr_r::Offset);
static_assert(offsetof(tim3_p, ccmr1_output) == tim3_p::ccmr1_output_r::Offset);
static_assert(offsetof(tim3_p, ccmr1_input) == tim3_p::ccmr1_input_r::Offset);
static_assert(offsetof(tim3_p, ccmr2_output) == tim3_p::ccmr2_output_r::Offset);
static_assert(offsetof(tim3_p, ccmr2_input) == tim3_p::ccmr2_input_r::Offset);
static_assert(offsetof(tim3_p, ccer) == tim3_p::ccer_r::Offset);
static_assert(offsetof(tim3_p, cnt) == tim3_p::cnt_r::Offset);
static_assert(offsetof(tim3_p, psc) == tim3_p::psc_r::Offset);
static_assert(offsetof(tim3_p, arr) == tim3_p::arr_r::Offset);
static_assert(offsetof(tim3_p, ccr1) == tim3_p::ccr1_r::Offset);
static_assert(offsetof(tim3_p, ccr2) == tim3_p::ccr2_r::Offset);
static_assert(offsetof(tim3_p, ccr3) == tim3_p::ccr3_r::Offset);
static_assert(offsetof(tim3_p, ccr4) == tim3_p::ccr4_r::Offset);
static_assert(offsetof(tim3_p, dcr) == tim3_p::dcr_r::Offset);
static_assert(offsetof(tim3_p, dmar) == tim3_p::dmar_r::Offset);

/**
 * General-purpose-timers
 */
class tim5_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Clock division
 */
class ckd_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ckd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Auto-reload preload enable
 */
class arpe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arpe_f(bool value = true) : m_value(value) {}
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
 * Center-aligned mode selection
 */
class cms_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Direction
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
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
 * One-pulse mode
 */
class opm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opm_f(bool value = true) : m_value(value) {}
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
 * Update request source
 */
class urs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr urs_f(bool value = true) : m_value(value) {}
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
 * Update disable
 */
class udis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr udis_f(bool value = true) : m_value(value) {}
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
 * Counter enable
 */
class cen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ckd() const -> ckd_f {return ckd_f(static_cast<uint8_t>(m_value >> ckd_f::Offset));}
	[[nodiscard]] constexpr auto arpe() const -> arpe_f {return arpe_f((m_value & arpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cms() const -> cms_f {return cms_f(static_cast<uint8_t>(m_value >> cms_f::Offset));}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opm() const -> opm_f {return opm_f((m_value & opm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto urs() const -> urs_f {return urs_f((m_value & urs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udis() const -> udis_f {return udis_f((m_value & udis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cen() const -> cen_f {return cen_f((m_value & cen_f::Mask) != 0);}

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
 * control register 2
 */
class cr2_r {
public:

/**
 * TI1 selection
 */
class ti1s_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ti1s_f(bool value = true) : m_value(value) {}
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
 * Master mode selection
 */
class mms_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/compare DMA selection
 */
class ccds_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ccds_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ti1s() const -> ti1s_f {return ti1s_f((m_value & ti1s_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mms() const -> mms_f {return mms_f(static_cast<uint8_t>(m_value >> mms_f::Offset));}
	[[nodiscard]] constexpr auto ccds() const -> ccds_f {return ccds_f((m_value & ccds_f::Mask) != 0);}

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
 * slave mode control register
 */
class smcr_r {
public:

/**
 * External trigger polarity
 */
class etp_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr etp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External clock enable
 */
class ece_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ece_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * External trigger prescaler
 */
class etps_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr etps_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * External trigger filter
 */
class etf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr etf_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Master/Slave mode
 */
class msm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr msm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger selection
 */
class ts_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ts_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Slave mode selection
 */
class sms_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto etp() const -> etp_f {return etp_f((m_value & etp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ece() const -> ece_f {return ece_f((m_value & ece_f::Mask) != 0);}
	[[nodiscard]] constexpr auto etps() const -> etps_f {return etps_f(static_cast<uint8_t>(m_value >> etps_f::Offset));}
	[[nodiscard]] constexpr auto etf() const -> etf_f {return etf_f(static_cast<uint8_t>(m_value >> etf_f::Offset));}
	[[nodiscard]] constexpr auto msm() const -> msm_f {return msm_f((m_value & msm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ts() const -> ts_f {return ts_f(static_cast<uint8_t>(m_value >> ts_f::Offset));}
	[[nodiscard]] constexpr auto sms() const -> sms_f {return sms_f(static_cast<uint8_t>(m_value >> sms_f::Offset));}

	constexpr smcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smcr_r other) const -> smcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA/Interrupt enable register
 */
class dier_r {
public:

/**
 * Trigger DMA request enable
 */
class tde_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tde_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 DMA request enable
 */
class cc4de_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 DMA request enable
 */
class cc3de_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 DMA request enable
 */
class cc2de_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc2de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 DMA request enable
 */
class cc1de_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1de_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update DMA request enable
 */
class ude_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ude_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger interrupt enable
 */
class tie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 interrupt enable
 */
class cc4ie_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 interrupt enable
 */
class cc3ie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 interrupt enable
 */
class cc2ie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 interrupt enable
 */
class cc1ie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt enable
 */
class uie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tde() const -> tde_f {return tde_f((m_value & tde_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4de() const -> cc4de_f {return cc4de_f((m_value & cc4de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3de() const -> cc3de_f {return cc3de_f((m_value & cc3de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2de() const -> cc2de_f {return cc2de_f((m_value & cc2de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1de() const -> cc1de_f {return cc1de_f((m_value & cc1de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ude() const -> ude_f {return ude_f((m_value & ude_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tie() const -> tie_f {return tie_f((m_value & tie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4ie() const -> cc4ie_f {return cc4ie_f((m_value & cc4ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3ie() const -> cc3ie_f {return cc3ie_f((m_value & cc3ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2ie() const -> cc2ie_f {return cc2ie_f((m_value & cc2ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1ie() const -> cc1ie_f {return cc1ie_f((m_value & cc1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uie() const -> uie_f {return uie_f((m_value & uie_f::Mask) != 0);}

	constexpr dier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dier_r other) const -> dier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class sr_r {
public:

/**
 * Capture/Compare 4 overcapture flag
 */
class cc4of_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 overcapture flag
 */
class cc3of_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 2 overcapture flag
 */
class cc2of_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc2of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 overcapture flag
 */
class cc1of_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger interrupt flag
 */
class tif_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 interrupt flag
 */
class cc4if_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 interrupt flag
 */
class cc3if_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 interrupt flag
 */
class cc2if_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 interrupt flag
 */
class cc1if_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt flag
 */
class uif_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc4of() const -> cc4of_f {return cc4of_f((m_value & cc4of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3of() const -> cc3of_f {return cc3of_f((m_value & cc3of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2of() const -> cc2of_f {return cc2of_f((m_value & cc2of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1of() const -> cc1of_f {return cc1of_f((m_value & cc1of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tif() const -> tif_f {return tif_f((m_value & tif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4if() const -> cc4if_f {return cc4if_f((m_value & cc4if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3if() const -> cc3if_f {return cc3if_f((m_value & cc3if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2if() const -> cc2if_f {return cc2if_f((m_value & cc2if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1if() const -> cc1if_f {return cc1if_f((m_value & cc1if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uif() const -> uif_f {return uif_f((m_value & uif_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * event generation register
 */
class egr_r {
public:

/**
 * Trigger generation
 */
class tg_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 4 generation
 */
class cc4g_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc4g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 3 generation
 */
class cc3g_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc3g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 2 generation
 */
class cc2g_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 generation
 */
class cc1g_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update generation
 */
class ug_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ug_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tg() const -> tg_f {return tg_f((m_value & tg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4g() const -> cc4g_f {return cc4g_f((m_value & cc4g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3g() const -> cc3g_f {return cc3g_f((m_value & cc3g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2g() const -> cc2g_f {return cc2g_f((m_value & cc2g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1g() const -> cc1g_f {return cc1g_f((m_value & cc1g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ug() const -> ug_f {return ug_f((m_value & ug_f::Mask) != 0);}

	constexpr egr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(egr_r other) const -> egr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> egr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (output mode)
 */
class ccmr1_output_r {
public:

/**
 * OC2CE
 */
class oc2ce_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC2M
 */
class oc2m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc2m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC2PE
 */
class oc2pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC2FE
 */
class oc2fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC2S
 */
class cc2s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc2s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC1CE
 */
class oc1ce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC1M
 */
class oc1m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc1m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC1PE
 */
class oc1pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC1FE
 */
class oc1fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC1S
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc2ce() const -> oc2ce_f {return oc2ce_f((m_value & oc2ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc2m() const -> oc2m_f {return oc2m_f(static_cast<uint8_t>(m_value >> oc2m_f::Offset));}
	[[nodiscard]] constexpr auto oc2pe() const -> oc2pe_f {return oc2pe_f((m_value & oc2pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc2fe() const -> oc2fe_f {return oc2fe_f((m_value & oc2fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto oc1ce() const -> oc1ce_f {return oc1ce_f((m_value & oc1ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1m() const -> oc1m_f {return oc1m_f(static_cast<uint8_t>(m_value >> oc1m_f::Offset));}
	[[nodiscard]] constexpr auto oc1pe() const -> oc1pe_f {return oc1pe_f((m_value & oc1pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1fe() const -> oc1fe_f {return oc1fe_f((m_value & oc1fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_output_r other) const -> ccmr1_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (input mode)
 */
class ccmr1_input_r {
public:

/**
 * Input capture 2 filter
 */
class ic2f_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 2 prescaler
 */
class ic2pcs_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2pcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 2 selection
 */
class cc2s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc2s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 filter
 */
class ic1f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic1f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 prescaler
 */
class icpcs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr icpcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic2f() const -> ic2f_f {return ic2f_f(static_cast<uint8_t>(m_value >> ic2f_f::Offset));}
	[[nodiscard]] constexpr auto ic2pcs() const -> ic2pcs_f {return ic2pcs_f(static_cast<uint8_t>(m_value >> ic2pcs_f::Offset));}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto ic1f() const -> ic1f_f {return ic1f_f(static_cast<uint8_t>(m_value >> ic1f_f::Offset));}
	[[nodiscard]] constexpr auto icpcs() const -> icpcs_f {return icpcs_f(static_cast<uint8_t>(m_value >> icpcs_f::Offset));}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_input_r other) const -> ccmr1_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 2 (output mode)
 */
class ccmr2_output_r {
public:

/**
 * OC4CE
 */
class oc4ce_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC4M
 */
class oc4m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc4m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC4PE
 */
class oc4pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC4FE
 */
class oc4fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc4fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC4S
 */
class cc4s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc4s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC3CE
 */
class oc3ce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC3M
 */
class oc3m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc3m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * OC3PE
 */
class oc3pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * OC3FE
 */
class oc3fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc3fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr2_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CC3S
 */
class cc3s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc3s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_output_r>() const {return ClearSet<ccmr2_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_output_r other) const -> ccmr2_output_r { return static_cast<ccmr2_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_output_r> other) const -> ClearSet<ccmr2_output_r> {return ClearSet<ccmr2_output_r>(ccmr2_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc4ce() const -> oc4ce_f {return oc4ce_f((m_value & oc4ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc4m() const -> oc4m_f {return oc4m_f(static_cast<uint8_t>(m_value >> oc4m_f::Offset));}
	[[nodiscard]] constexpr auto oc4pe() const -> oc4pe_f {return oc4pe_f((m_value & oc4pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc4fe() const -> oc4fe_f {return oc4fe_f((m_value & oc4fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4s() const -> cc4s_f {return cc4s_f(static_cast<uint8_t>(m_value >> cc4s_f::Offset));}
	[[nodiscard]] constexpr auto oc3ce() const -> oc3ce_f {return oc3ce_f((m_value & oc3ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc3m() const -> oc3m_f {return oc3m_f(static_cast<uint8_t>(m_value >> oc3m_f::Offset));}
	[[nodiscard]] constexpr auto oc3pe() const -> oc3pe_f {return oc3pe_f((m_value & oc3pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc3fe() const -> oc3fe_f {return oc3fe_f((m_value & oc3fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3s() const -> cc3s_f {return cc3s_f(static_cast<uint8_t>(m_value >> cc3s_f::Offset));}

	constexpr ccmr2_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr2_output_r other) const -> ccmr2_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr2_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 2 (input mode)
 */
class ccmr2_input_r {
public:

/**
 * Input capture 4 filter
 */
class ic4f_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic4f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 4 prescaler
 */
class ic4psc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic4psc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 4 selection
 */
class cc4s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc4s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 3 filter
 */
class ic3f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic3f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 3 prescaler
 */
class ic3psc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic3psc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/compare 3 selection
 */
class cc3s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc3s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr2_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr2_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr2_input_r>() const {return ClearSet<ccmr2_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr2_input_r other) const -> ccmr2_input_r { return static_cast<ccmr2_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr2_input_r> other) const -> ClearSet<ccmr2_input_r> {return ClearSet<ccmr2_input_r>(ccmr2_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic4f() const -> ic4f_f {return ic4f_f(static_cast<uint8_t>(m_value >> ic4f_f::Offset));}
	[[nodiscard]] constexpr auto ic4psc() const -> ic4psc_f {return ic4psc_f(static_cast<uint8_t>(m_value >> ic4psc_f::Offset));}
	[[nodiscard]] constexpr auto cc4s() const -> cc4s_f {return cc4s_f(static_cast<uint8_t>(m_value >> cc4s_f::Offset));}
	[[nodiscard]] constexpr auto ic3f() const -> ic3f_f {return ic3f_f(static_cast<uint8_t>(m_value >> ic3f_f::Offset));}
	[[nodiscard]] constexpr auto ic3psc() const -> ic3psc_f {return ic3psc_f(static_cast<uint8_t>(m_value >> ic3psc_f::Offset));}
	[[nodiscard]] constexpr auto cc3s() const -> cc3s_f {return cc3s_f(static_cast<uint8_t>(m_value >> cc3s_f::Offset));}

	constexpr ccmr2_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr2_input_r other) const -> ccmr2_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr2_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare enable register
 */
class ccer_r {
public:

/**
 * Capture/Compare 4 output Polarity
 */
class cc4np_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc4p_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 4 output enable
 */
class cc4e_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc3np_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output Polarity
 */
class cc3p_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 3 output enable
 */
class cc3e_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output Polarity
 */
class cc2np_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output Polarity
 */
class cc2p_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output enable
 */
class cc2e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1np_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1p_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output enable
 */
class cc1e_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc4np() const -> cc4np_f {return cc4np_f((m_value & cc4np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4p() const -> cc4p_f {return cc4p_f((m_value & cc4p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4e() const -> cc4e_f {return cc4e_f((m_value & cc4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3np() const -> cc3np_f {return cc3np_f((m_value & cc3np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3p() const -> cc3p_f {return cc3p_f((m_value & cc3p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3e() const -> cc3e_f {return cc3e_f((m_value & cc3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2np() const -> cc2np_f {return cc2np_f((m_value & cc2np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2p() const -> cc2p_f {return cc2p_f((m_value & cc2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2e() const -> cc2e_f {return cc2e_f((m_value & cc2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1np() const -> cc1np_f {return cc1np_f((m_value & cc1np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1p() const -> cc1p_f {return cc1p_f((m_value & cc1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1e() const -> cc1e_f {return cc1e_f((m_value & cc1e_f::Mask) != 0);}

	constexpr ccer_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccer_r other) const -> ccer_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccer_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * counter
 */
class cnt_r {
public:

/**
 * High counter value
 */
class cnt_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr cnt_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cnt_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cnt_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low counter value
 */
class cnt_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cnt_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cnt_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cnt_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto cnt_h() const -> cnt_h_f {return cnt_h_f(static_cast<uint16_t>(m_value >> cnt_h_f::Offset));}
	[[nodiscard]] constexpr auto cnt_l() const -> cnt_l_f {return cnt_l_f(static_cast<uint16_t>(m_value >> cnt_l_f::Offset));}

	constexpr cnt_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cnt_r other) const -> cnt_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cnt_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * prescaler
 */
class psc_r {
public:

/**
 * Prescaler value
 */
class psc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator psc_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(psc_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psc_r>() const {return ClearSet<psc_r>(Mask, *this);}
	constexpr auto operator|(psc_r other) const -> psc_r { return static_cast<psc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psc_r> other) const -> ClearSet<psc_r> {return ClearSet<psc_r>(psc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto psc() const -> psc_f {return psc_f(static_cast<uint16_t>(m_value >> psc_f::Offset));}

	constexpr psc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(psc_r other) const -> psc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> psc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * auto-reload register
 */
class arr_r {
public:

/**
 * High Auto-reload value
 */
class arr_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr arr_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator arr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(arr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<arr_r>() const {return ClearSet<arr_r>(Mask, *this);}
	constexpr auto operator|(arr_r other) const -> arr_r { return static_cast<arr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<arr_r> other) const -> ClearSet<arr_r> {return ClearSet<arr_r>(arr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Auto-reload value
 */
class arr_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr arr_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator arr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(arr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<arr_r>() const {return ClearSet<arr_r>(Mask, *this);}
	constexpr auto operator|(arr_r other) const -> arr_r { return static_cast<arr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<arr_r> other) const -> ClearSet<arr_r> {return ClearSet<arr_r>(arr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto arr_h() const -> arr_h_f {return arr_h_f(static_cast<uint16_t>(m_value >> arr_h_f::Offset));}
	[[nodiscard]] constexpr auto arr_l() const -> arr_l_f {return arr_l_f(static_cast<uint16_t>(m_value >> arr_l_f::Offset));}

	constexpr arr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(arr_r other) const -> arr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> arr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 1
 */
class ccr1_r {
public:

/**
 * High Capture/Compare 1 value
 */
class ccr1_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr1_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare 1 value
 */
class ccr1_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr1_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr1_h() const -> ccr1_h_f {return ccr1_h_f(static_cast<uint16_t>(m_value >> ccr1_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr1_l() const -> ccr1_l_f {return ccr1_l_f(static_cast<uint16_t>(m_value >> ccr1_l_f::Offset));}

	constexpr ccr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr1_r other) const -> ccr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 2
 */
class ccr2_r {
public:

/**
 * High Capture/Compare 2 value
 */
class ccr2_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr2_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare 2 value
 */
class ccr2_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr2_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr2_h() const -> ccr2_h_f {return ccr2_h_f(static_cast<uint16_t>(m_value >> ccr2_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr2_l() const -> ccr2_l_f {return ccr2_l_f(static_cast<uint16_t>(m_value >> ccr2_l_f::Offset));}

	constexpr ccr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr2_r other) const -> ccr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 3
 */
class ccr3_r {
public:

/**
 * High Capture/Compare value
 */
class ccr3_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr3_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr3_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare value
 */
class ccr3_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr3_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr3_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr3_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr3_r>() const {return ClearSet<ccr3_r>(Mask, *this);}
	constexpr auto operator|(ccr3_r other) const -> ccr3_r { return static_cast<ccr3_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr3_r> other) const -> ClearSet<ccr3_r> {return ClearSet<ccr3_r>(ccr3_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr3_h() const -> ccr3_h_f {return ccr3_h_f(static_cast<uint16_t>(m_value >> ccr3_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr3_l() const -> ccr3_l_f {return ccr3_l_f(static_cast<uint16_t>(m_value >> ccr3_l_f::Offset));}

	constexpr ccr3_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr3_r other) const -> ccr3_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr3_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 4
 */
class ccr4_r {
public:

/**
 * High Capture/Compare value
 */
class ccr4_h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ccr4_h_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr4_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Low Capture/Compare value
 */
class ccr4_l_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr4_l_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr4_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr4_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr4_r>() const {return ClearSet<ccr4_r>(Mask, *this);}
	constexpr auto operator|(ccr4_r other) const -> ccr4_r { return static_cast<ccr4_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr4_r> other) const -> ClearSet<ccr4_r> {return ClearSet<ccr4_r>(ccr4_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr4_h() const -> ccr4_h_f {return ccr4_h_f(static_cast<uint16_t>(m_value >> ccr4_h_f::Offset));}
	[[nodiscard]] constexpr auto ccr4_l() const -> ccr4_l_f {return ccr4_l_f(static_cast<uint16_t>(m_value >> ccr4_l_f::Offset));}

	constexpr ccr4_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr4_r other) const -> ccr4_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr4_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA control register
 */
class dcr_r {
public:

/**
 * DMA burst length
 */
class dbl_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dbl_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DMA base address
 */
class dba_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dba_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dcr_r>() const {return ClearSet<dcr_r>(Mask, *this);}
	constexpr auto operator|(dcr_r other) const -> dcr_r { return static_cast<dcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dcr_r> other) const -> ClearSet<dcr_r> {return ClearSet<dcr_r>(dcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dbl() const -> dbl_f {return dbl_f(static_cast<uint8_t>(m_value >> dbl_f::Offset));}
	[[nodiscard]] constexpr auto dba() const -> dba_f {return dba_f(static_cast<uint8_t>(m_value >> dba_f::Offset));}

	constexpr dcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dcr_r other) const -> dcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA address for full transfer
 */
class dmar_r {
public:

/**
 * DMA register for burst accesses
 */
class dmab_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dmab_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dmar_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dmar_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dmar_r>() const {return ClearSet<dmar_r>(Mask, *this);}
	constexpr auto operator|(dmar_r other) const -> dmar_r { return static_cast<dmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dmar_r> other) const -> ClearSet<dmar_r> {return ClearSet<dmar_r>(dmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dmab() const -> dmab_f {return dmab_f(static_cast<uint16_t>(m_value >> dmab_f::Offset));}

	constexpr dmar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dmar_r other) const -> dmar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dmar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM5 option register
 */
class or_r {
public:

/**
 * Timer Input 4 remap
 */
class it4_rmp_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr it4_rmp_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator or_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(or_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<or_r>() const {return ClearSet<or_r>(Mask, *this);}
	constexpr auto operator|(or_r other) const -> or_r { return static_cast<or_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<or_r> other) const -> ClearSet<or_r> {return ClearSet<or_r>(or_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto it4_rmp() const -> it4_rmp_f {return it4_rmp_f(static_cast<uint8_t>(m_value >> it4_rmp_f::Offset));}

	constexpr or_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(or_r other) const -> or_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> or_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct ccr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4); };
	template<std::size_t Index> using ccr_v = typename ccr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ccr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,smcr_r> smcr;
	Memory<uint32_t,dier_r> dier;
	Memory<uint32_t,sr_r> sr;
	WriteOnlyMemory<uint32_t,egr_r> egr;
	union {
	Memory<uint32_t,ccmr1_output_r> ccmr1_output;
	Memory<uint32_t,ccmr1_input_r> ccmr1_input;
	};
	union {
	Memory<uint32_t,ccmr2_output_r> ccmr2_output;
	Memory<uint32_t,ccmr2_input_r> ccmr2_input;
	};
	Memory<uint32_t,ccer_r> ccer;
	Memory<uint32_t,cnt_r> cnt;
	Memory<uint32_t,psc_r> psc;
	Memory<uint32_t,arr_r> arr;
	Padding<4> _p48;
	Memory<uint32_t,ccr1_r> ccr1;
	Memory<uint32_t,ccr2_r> ccr2;
	Memory<uint32_t,ccr3_r> ccr3;
	Memory<uint32_t,ccr4_r> ccr4;
	Padding<4> _p68;
	Memory<uint32_t,dcr_r> dcr;
	Memory<uint32_t,dmar_r> dmar;
	Memory<uint32_t,or_r> _or;
};

template<> constexpr auto& tim5_p::cr<1>() { return cr1; }
template<> constexpr auto& tim5_p::cr<2>() { return cr2; }

template<> struct tim5_p::cr_r<1> { using type = tim5_p::cr1_r; };
template<> struct tim5_p::cr_r<2> { using type = tim5_p::cr2_r; };

template<> constexpr auto& tim5_p::ccr<1>() { return ccr1; }
template<> constexpr auto& tim5_p::ccr<2>() { return ccr2; }
template<> constexpr auto& tim5_p::ccr<3>() { return ccr3; }
template<> constexpr auto& tim5_p::ccr<4>() { return ccr4; }

template<> struct tim5_p::ccr_r<1> { using type = tim5_p::ccr1_r; };
template<> struct tim5_p::ccr_r<2> { using type = tim5_p::ccr2_r; };
template<> struct tim5_p::ccr_r<3> { using type = tim5_p::ccr3_r; };
template<> struct tim5_p::ccr_r<4> { using type = tim5_p::ccr4_r; };

static_assert(std::is_standard_layout_v<tim5_p>);
static_assert(offsetof(tim5_p, cr1) == tim5_p::cr1_r::Offset);
static_assert(offsetof(tim5_p, cr2) == tim5_p::cr2_r::Offset);
static_assert(offsetof(tim5_p, smcr) == tim5_p::smcr_r::Offset);
static_assert(offsetof(tim5_p, dier) == tim5_p::dier_r::Offset);
static_assert(offsetof(tim5_p, sr) == tim5_p::sr_r::Offset);
static_assert(offsetof(tim5_p, egr) == tim5_p::egr_r::Offset);
static_assert(offsetof(tim5_p, ccmr1_output) == tim5_p::ccmr1_output_r::Offset);
static_assert(offsetof(tim5_p, ccmr1_input) == tim5_p::ccmr1_input_r::Offset);
static_assert(offsetof(tim5_p, ccmr2_output) == tim5_p::ccmr2_output_r::Offset);
static_assert(offsetof(tim5_p, ccmr2_input) == tim5_p::ccmr2_input_r::Offset);
static_assert(offsetof(tim5_p, ccer) == tim5_p::ccer_r::Offset);
static_assert(offsetof(tim5_p, cnt) == tim5_p::cnt_r::Offset);
static_assert(offsetof(tim5_p, psc) == tim5_p::psc_r::Offset);
static_assert(offsetof(tim5_p, arr) == tim5_p::arr_r::Offset);
static_assert(offsetof(tim5_p, ccr1) == tim5_p::ccr1_r::Offset);
static_assert(offsetof(tim5_p, ccr2) == tim5_p::ccr2_r::Offset);
static_assert(offsetof(tim5_p, ccr3) == tim5_p::ccr3_r::Offset);
static_assert(offsetof(tim5_p, ccr4) == tim5_p::ccr4_r::Offset);
static_assert(offsetof(tim5_p, dcr) == tim5_p::dcr_r::Offset);
static_assert(offsetof(tim5_p, dmar) == tim5_p::dmar_r::Offset);
static_assert(offsetof(tim5_p, _or) == tim5_p::or_r::Offset);

/**
 * General purpose timers
 */
class tim9_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Clock division
 */
class ckd_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ckd_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Auto-reload preload enable
 */
class arpe_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr arpe_f(bool value = true) : m_value(value) {}
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
 * One-pulse mode
 */
class opm_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr opm_f(bool value = true) : m_value(value) {}
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
 * Update request source
 */
class urs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr urs_f(bool value = true) : m_value(value) {}
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
 * Update disable
 */
class udis_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr udis_f(bool value = true) : m_value(value) {}
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
 * Counter enable
 */
class cen_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ckd() const -> ckd_f {return ckd_f(static_cast<uint8_t>(m_value >> ckd_f::Offset));}
	[[nodiscard]] constexpr auto arpe() const -> arpe_f {return arpe_f((m_value & arpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opm() const -> opm_f {return opm_f((m_value & opm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto urs() const -> urs_f {return urs_f((m_value & urs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udis() const -> udis_f {return udis_f((m_value & udis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cen() const -> cen_f {return cen_f((m_value & cen_f::Mask) != 0);}

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
 * control register 2
 */
class cr2_r {
public:

/**
 * Master mode selection
 */
class mms_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr2_r>() const {return ClearSet<cr2_r>(Mask, *this);}
	constexpr auto operator|(cr2_r other) const -> cr2_r { return static_cast<cr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr2_r> other) const -> ClearSet<cr2_r> {return ClearSet<cr2_r>(cr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto mms() const -> mms_f {return mms_f(static_cast<uint8_t>(m_value >> mms_f::Offset));}

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
 * slave mode control register
 */
class smcr_r {
public:

/**
 * Master/Slave mode
 */
class msm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr msm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator smcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(smcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger selection
 */
class ts_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ts_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Slave mode selection
 */
class sms_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sms_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto msm() const -> msm_f {return msm_f((m_value & msm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ts() const -> ts_f {return ts_f(static_cast<uint8_t>(m_value >> ts_f::Offset));}
	[[nodiscard]] constexpr auto sms() const -> sms_f {return sms_f(static_cast<uint8_t>(m_value >> sms_f::Offset));}

	constexpr smcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(smcr_r other) const -> smcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> smcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA/Interrupt enable register
 */
class dier_r {
public:

/**
 * Trigger interrupt enable
 */
class tie_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 interrupt enable
 */
class cc2ie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 interrupt enable
 */
class cc1ie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt enable
 */
class uie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dier_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dier_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dier_r>() const {return ClearSet<dier_r>(Mask, *this);}
	constexpr auto operator|(dier_r other) const -> dier_r { return static_cast<dier_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dier_r> other) const -> ClearSet<dier_r> {return ClearSet<dier_r>(dier_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tie() const -> tie_f {return tie_f((m_value & tie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2ie() const -> cc2ie_f {return cc2ie_f((m_value & cc2ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1ie() const -> cc1ie_f {return cc1ie_f((m_value & cc1ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uie() const -> uie_f {return uie_f((m_value & uie_f::Mask) != 0);}

	constexpr dier_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dier_r other) const -> dier_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dier_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class sr_r {
public:

/**
 * Capture/compare 2 overcapture flag
 */
class cc2of_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc2of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 overcapture flag
 */
class cc1of_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc1of_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Trigger interrupt flag
 */
class tif_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 interrupt flag
 */
class cc2if_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 interrupt flag
 */
class cc1if_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1if_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update interrupt flag
 */
class uif_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr uif_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc2of() const -> cc2of_f {return cc2of_f((m_value & cc2of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1of() const -> cc1of_f {return cc1of_f((m_value & cc1of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tif() const -> tif_f {return tif_f((m_value & tif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2if() const -> cc2if_f {return cc2if_f((m_value & cc2if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1if() const -> cc1if_f {return cc1if_f((m_value & cc1if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uif() const -> uif_f {return uif_f((m_value & uif_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * event generation register
 */
class egr_r {
public:

/**
 * Trigger generation
 */
class tg_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 2 generation
 */
class cc2g_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/compare 1 generation
 */
class cc1g_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1g_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Update generation
 */
class ug_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ug_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator egr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(egr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<egr_r>() const {return ClearSet<egr_r>(Mask, *this);}
	constexpr auto operator|(egr_r other) const -> egr_r { return static_cast<egr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<egr_r> other) const -> ClearSet<egr_r> {return ClearSet<egr_r>(egr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto tg() const -> tg_f {return tg_f((m_value & tg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2g() const -> cc2g_f {return cc2g_f((m_value & cc2g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1g() const -> cc1g_f {return cc1g_f((m_value & cc1g_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ug() const -> ug_f {return ug_f((m_value & ug_f::Mask) != 0);}

	constexpr egr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(egr_r other) const -> egr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> egr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (output mode)
 */
class ccmr1_output_r {
public:

/**
 * Output Compare 2 mode
 */
class oc2m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc2m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output Compare 2 preload enable
 */
class oc2pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output Compare 2 fast enable
 */
class oc2fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc2fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 selection
 */
class cc2s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc2s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output Compare 1 mode
 */
class oc1m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc1m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output Compare 1 preload enable
 */
class oc1pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output Compare 1 fast enable
 */
class oc1fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc1fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr1_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_output_r>() const {return ClearSet<ccmr1_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_output_r other) const -> ccmr1_output_r { return static_cast<ccmr1_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_output_r> other) const -> ClearSet<ccmr1_output_r> {return ClearSet<ccmr1_output_r>(ccmr1_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto oc2m() const -> oc2m_f {return oc2m_f(static_cast<uint8_t>(m_value >> oc2m_f::Offset));}
	[[nodiscard]] constexpr auto oc2pe() const -> oc2pe_f {return oc2pe_f((m_value & oc2pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc2fe() const -> oc2fe_f {return oc2fe_f((m_value & oc2fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto oc1m() const -> oc1m_f {return oc1m_f(static_cast<uint8_t>(m_value >> oc1m_f::Offset));}
	[[nodiscard]] constexpr auto oc1pe() const -> oc1pe_f {return oc1pe_f((m_value & oc1pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1fe() const -> oc1fe_f {return oc1fe_f((m_value & oc1fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_output_r other) const -> ccmr1_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 1 (input mode)
 */
class ccmr1_input_r {
public:

/**
 * Input capture 2 filter
 */
class ic2f_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 2 prescaler
 */
class ic2pcs_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2pcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 2 selection
 */
class cc2s_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr cc2s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 filter
 */
class ic1f_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic1f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Input capture 1 prescaler
 */
class icpcs_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr icpcs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Capture/Compare 1 selection
 */
class cc1s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cc1s_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr1_input_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr1_input_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr1_input_r>() const {return ClearSet<ccmr1_input_r>(Mask, *this);}
	constexpr auto operator|(ccmr1_input_r other) const -> ccmr1_input_r { return static_cast<ccmr1_input_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr1_input_r> other) const -> ClearSet<ccmr1_input_r> {return ClearSet<ccmr1_input_r>(ccmr1_input_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ic2f() const -> ic2f_f {return ic2f_f(static_cast<uint8_t>(m_value >> ic2f_f::Offset));}
	[[nodiscard]] constexpr auto ic2pcs() const -> ic2pcs_f {return ic2pcs_f(static_cast<uint8_t>(m_value >> ic2pcs_f::Offset));}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto ic1f() const -> ic1f_f {return ic1f_f(static_cast<uint8_t>(m_value >> ic1f_f::Offset));}
	[[nodiscard]] constexpr auto icpcs() const -> icpcs_f {return icpcs_f(static_cast<uint8_t>(m_value >> icpcs_f::Offset));}
	[[nodiscard]] constexpr auto cc1s() const -> cc1s_f {return cc1s_f(static_cast<uint8_t>(m_value >> cc1s_f::Offset));}

	constexpr ccmr1_input_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr1_input_r other) const -> ccmr1_input_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr1_input_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare enable register
 */
class ccer_r {
public:

/**
 * Capture/Compare 2 output Polarity
 */
class cc2np_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output Polarity
 */
class cc2p_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 2 output enable
 */
class cc2e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1np_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1np_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output Polarity
 */
class cc1p_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Capture/Compare 1 output enable
 */
class cc1e_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cc1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccer_r>() const {return ClearSet<ccer_r>(Mask, *this);}
	constexpr auto operator|(ccer_r other) const -> ccer_r { return static_cast<ccer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccer_r> other) const -> ClearSet<ccer_r> {return ClearSet<ccer_r>(ccer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cc2np() const -> cc2np_f {return cc2np_f((m_value & cc2np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2p() const -> cc2p_f {return cc2p_f((m_value & cc2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2e() const -> cc2e_f {return cc2e_f((m_value & cc2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1np() const -> cc1np_f {return cc1np_f((m_value & cc1np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1p() const -> cc1p_f {return cc1p_f((m_value & cc1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1e() const -> cc1e_f {return cc1e_f((m_value & cc1e_f::Mask) != 0);}

	constexpr ccer_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccer_r other) const -> ccer_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccer_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * counter
 */
class cnt_r {
public:

/**
 * counter value
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

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * prescaler
 */
class psc_r {
public:

/**
 * Prescaler value
 */
class psc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr psc_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator psc_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(psc_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<psc_r>() const {return ClearSet<psc_r>(Mask, *this);}
	constexpr auto operator|(psc_r other) const -> psc_r { return static_cast<psc_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<psc_r> other) const -> ClearSet<psc_r> {return ClearSet<psc_r>(psc_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto psc() const -> psc_f {return psc_f(static_cast<uint16_t>(m_value >> psc_f::Offset));}

	constexpr psc_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(psc_r other) const -> psc_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> psc_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * auto-reload register
 */
class arr_r {
public:

/**
 * Auto-reload value
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

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 1
 */
class ccr1_r {
public:

/**
 * Capture/Compare 1 value
 */
class ccr1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr1_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr1_r>() const {return ClearSet<ccr1_r>(Mask, *this);}
	constexpr auto operator|(ccr1_r other) const -> ccr1_r { return static_cast<ccr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr1_r> other) const -> ClearSet<ccr1_r> {return ClearSet<ccr1_r>(ccr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr1() const -> ccr1_f {return ccr1_f(static_cast<uint16_t>(m_value >> ccr1_f::Offset));}

	constexpr ccr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr1_r other) const -> ccr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 2
 */
class ccr2_r {
public:

/**
 * Capture/Compare 2 value
 */
class ccr2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr2_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr2_r>() const {return ClearSet<ccr2_r>(Mask, *this);}
	constexpr auto operator|(ccr2_r other) const -> ccr2_r { return static_cast<ccr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr2_r> other) const -> ClearSet<ccr2_r> {return ClearSet<ccr2_r>(ccr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr2() const -> ccr2_f {return ccr2_f(static_cast<uint16_t>(m_value >> ccr2_f::Offset));}

	constexpr ccr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr2_r other) const -> ccr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct ccr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using ccr_v = typename ccr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ccr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Memory<uint32_t,smcr_r> smcr;
	Memory<uint32_t,dier_r> dier;
	Memory<uint32_t,sr_r> sr;
	WriteOnlyMemory<uint32_t,egr_r> egr;
	union {
	Memory<uint32_t,ccmr1_output_r> ccmr1_output;
	Memory<uint32_t,ccmr1_input_r> ccmr1_input;
	};
	Padding<4> _p28;
	Memory<uint32_t,ccer_r> ccer;
	Memory<uint32_t,cnt_r> cnt;
	Memory<uint32_t,psc_r> psc;
	Memory<uint32_t,arr_r> arr;
	Padding<4> _p48;
	Memory<uint32_t,ccr1_r> ccr1;
	Memory<uint32_t,ccr2_r> ccr2;
};

template<> constexpr auto& tim9_p::cr<1>() { return cr1; }
template<> constexpr auto& tim9_p::cr<2>() { return cr2; }

template<> struct tim9_p::cr_r<1> { using type = tim9_p::cr1_r; };
template<> struct tim9_p::cr_r<2> { using type = tim9_p::cr2_r; };

template<> constexpr auto& tim9_p::ccr<1>() { return ccr1; }
template<> constexpr auto& tim9_p::ccr<2>() { return ccr2; }

template<> struct tim9_p::ccr_r<1> { using type = tim9_p::ccr1_r; };
template<> struct tim9_p::ccr_r<2> { using type = tim9_p::ccr2_r; };

static_assert(std::is_standard_layout_v<tim9_p>);
static_assert(offsetof(tim9_p, cr1) == tim9_p::cr1_r::Offset);
static_assert(offsetof(tim9_p, cr2) == tim9_p::cr2_r::Offset);
static_assert(offsetof(tim9_p, smcr) == tim9_p::smcr_r::Offset);
static_assert(offsetof(tim9_p, dier) == tim9_p::dier_r::Offset);
static_assert(offsetof(tim9_p, sr) == tim9_p::sr_r::Offset);
static_assert(offsetof(tim9_p, egr) == tim9_p::egr_r::Offset);
static_assert(offsetof(tim9_p, ccmr1_output) == tim9_p::ccmr1_output_r::Offset);
static_assert(offsetof(tim9_p, ccmr1_input) == tim9_p::ccmr1_input_r::Offset);
static_assert(offsetof(tim9_p, ccer) == tim9_p::ccer_r::Offset);
static_assert(offsetof(tim9_p, cnt) == tim9_p::cnt_r::Offset);
static_assert(offsetof(tim9_p, psc) == tim9_p::psc_r::Offset);
static_assert(offsetof(tim9_p, arr) == tim9_p::arr_r::Offset);
static_assert(offsetof(tim9_p, ccr1) == tim9_p::ccr1_r::Offset);
static_assert(offsetof(tim9_p, ccr2) == tim9_p::ccr2_r::Offset);

inline tim1_p& tim1 = *reinterpret_cast<tim1_p*>(0x40010000);
inline tim1_p& tim8 = *reinterpret_cast<tim1_p*>(0x40010400);
inline tim10_p& tim10 = *reinterpret_cast<tim10_p*>(0x40014400);
inline tim11_p& tim11 = *reinterpret_cast<tim11_p*>(0x40014800);
inline tim2_p& tim2 = *reinterpret_cast<tim2_p*>(0x40000000);
inline tim3_p& tim3 = *reinterpret_cast<tim3_p*>(0x40000400);
inline tim3_p& tim4 = *reinterpret_cast<tim3_p*>(0x40000800);
inline tim5_p& tim5 = *reinterpret_cast<tim5_p*>(0x40000C00);
inline tim9_p& tim9 = *reinterpret_cast<tim9_p*>(0x40014000);

} // STM32F401

