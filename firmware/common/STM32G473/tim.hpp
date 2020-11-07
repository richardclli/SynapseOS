#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * General purpose timers
 */
class tim15_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

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
 * UIF status bit remapping
 */
class uifremap_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr uifremap_f(bool value = true) : m_value(value) {}
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
 * Dithering Enable
 */
class dithen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dithen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cen() const -> cen_f {return cen_f((m_value & cen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udis() const -> udis_f {return udis_f((m_value & udis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto urs() const -> urs_f {return urs_f((m_value & urs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opm() const -> opm_f {return opm_f((m_value & opm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arpe() const -> arpe_f {return arpe_f((m_value & arpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ckd() const -> ckd_f {return ckd_f(static_cast<uint8_t>(m_value >> ckd_f::Offset));}
	[[nodiscard]] constexpr auto uifremap() const -> uifremap_f {return uifremap_f((m_value & uifremap_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dithen() const -> dithen_f {return dithen_f((m_value & dithen_f::Mask) != 0);}

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
 * Output idle state 2 (OC2 output)
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

	[[nodiscard]] constexpr auto ois2() const -> ois2_f {return ois2_f((m_value & ois2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois1n() const -> ois1n_f {return ois1n_f((m_value & ois1n_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois1() const -> ois1_f {return ois1_f((m_value & ois1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ti1s() const -> ti1s_f {return ti1s_f((m_value & ti1s_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mms() const -> mms_f {return mms_f(static_cast<uint8_t>(m_value >> mms_f::Offset));}
	[[nodiscard]] constexpr auto ccds() const -> ccds_f {return ccds_f((m_value & ccds_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccus() const -> ccus_f {return ccus_f((m_value & ccus_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccpc() const -> ccpc_f {return ccpc_f((m_value & ccpc_f::Mask) != 0);}

	template<std::size_t Index> struct ois_f { static_assert(Index == 2 || Index == 1); };
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
 * Trigger selection - bit 4:3
 */
class ts_4_3_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ts_4_3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Slave mode selection - bit 3
 */
class sms_3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sms_3_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto ts_4_3() const -> ts_4_3_f {return ts_4_3_f(static_cast<uint8_t>(m_value >> ts_4_3_f::Offset));}
	[[nodiscard]] constexpr auto sms_3() const -> sms_3_f {return sms_3_f((m_value & sms_3_f::Mask) != 0);}
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
	[[nodiscard]] constexpr auto cc2de() const -> cc2de_f {return cc2de_f((m_value & cc2de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1de() const -> cc1de_f {return cc1de_f((m_value & cc1de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ude() const -> ude_f {return ude_f((m_value & ude_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bie() const -> bie_f {return bie_f((m_value & bie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tie() const -> tie_f {return tie_f((m_value & tie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comie() const -> comie_f {return comie_f((m_value & comie_f::Mask) != 0);}
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
 * Capture/Compare 2 overcapture flag
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
 * Capture/compare 2 interrupt flag
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
	[[nodiscard]] constexpr auto bif() const -> bif_f {return bif_f((m_value & bif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tif() const -> tif_f {return tif_f((m_value & tif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comif() const -> comif_f {return comif_f((m_value & comif_f::Mask) != 0);}
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
 * capture/compare mode register (output mode)
 */
class ccmr1_output_r {
public:

/**
 * Output Compare 2 mode - bit 3
 */
class oc2m_3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc2m_3_f(bool value = true) : m_value(value) {}
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
class oc1m_3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc1m_3_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto oc2m_3() const -> oc2m_3_f {return oc2m_3_f((m_value & oc2m_3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1m_3() const -> oc1m_3_f {return oc1m_3_f((m_value & oc1m_3_f::Mask) != 0);}
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
 * IC2F
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
 * IC2PSC
 */
class ic2psc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2psc_f(uint8_t value) : m_value(value & Range) {}
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
class ic1psc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic1psc_f(uint8_t value) : m_value(value & Range) {}
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
	[[nodiscard]] constexpr auto ic2psc() const -> ic2psc_f {return ic2psc_f(static_cast<uint8_t>(m_value >> ic2psc_f::Offset));}
	[[nodiscard]] constexpr auto cc2s() const -> cc2s_f {return cc2s_f(static_cast<uint8_t>(m_value >> cc2s_f::Offset));}
	[[nodiscard]] constexpr auto ic1f() const -> ic1f_f {return ic1f_f(static_cast<uint8_t>(m_value >> ic1f_f::Offset));}
	[[nodiscard]] constexpr auto ic1psc() const -> ic1psc_f {return ic1psc_f(static_cast<uint8_t>(m_value >> ic1psc_f::Offset));}
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
 * Capture/Compare 2 complementary output polarity
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
 * Capture/Compare 2 output polarity
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

	[[nodiscard]] constexpr auto cc2np() const -> cc2np_f {return cc2np_f((m_value & cc2np_f::Mask) != 0);}
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

/**
 * UIF Copy
 */
class uifcpy_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uifcpy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cnt_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cnt_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cnt() const -> cnt_f {return cnt_f(static_cast<uint16_t>(m_value >> cnt_f::Offset));}
	[[nodiscard]] constexpr auto uifcpy() const -> uifcpy_f {return uifcpy_f((m_value & uifcpy_f::Mask) != 0);}

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
	static constexpr uint32_t ResetValue = 0b1111111111111111; // 65535 0xFFFF

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
 * Capture/Compare 1 value
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
 * break and dead-time register
 */
class bdtr_r {
public:

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
 * Break filter
 */
class bkf_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkf_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bdtr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bdtr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BKDSRM
 */
class bkdsrm_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bkdsrm_f(bool value = true) : m_value(value) {}
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
 * BKBID
 */
class bkbid_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bkbid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdtr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdtr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dtg() const -> dtg_f {return dtg_f(static_cast<uint8_t>(m_value >> dtg_f::Offset));}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f(static_cast<uint8_t>(m_value >> lock_f::Offset));}
	[[nodiscard]] constexpr auto ossi() const -> ossi_f {return ossi_f((m_value & ossi_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ossr() const -> ossr_f {return ossr_f((m_value & ossr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bke() const -> bke_f {return bke_f((m_value & bke_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f((m_value & bkp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto aoe() const -> aoe_f {return aoe_f((m_value & aoe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto moe() const -> moe_f {return moe_f((m_value & moe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkf() const -> bkf_f {return bkf_f(static_cast<uint8_t>(m_value >> bkf_f::Offset));}
	[[nodiscard]] constexpr auto bkdsrm() const -> bkdsrm_f {return bkdsrm_f((m_value & bkdsrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkbid() const -> bkbid_f {return bkbid_f((m_value & bkbid_f::Mask) != 0);}

	constexpr bdtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bdtr_r other) const -> bdtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bdtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * timer Deadtime Register 2
 */
class dtr2_r {
public:

/**
 * Dead-time generator setup
 */
class dtgf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dtgf_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dtr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dtr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Deadtime Asymmetric Enable
 */
class dtae_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dtae_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dtr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dtr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Deadtime Preload Enable
 */
class dtpe_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dtpe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dtr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dtr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dtgf() const -> dtgf_f {return dtgf_f(static_cast<uint8_t>(m_value >> dtgf_f::Offset));}
	[[nodiscard]] constexpr auto dtae() const -> dtae_f {return dtae_f((m_value & dtae_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtpe() const -> dtpe_f {return dtpe_f((m_value & dtpe_f::Mask) != 0);}

	constexpr dtr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dtr2_r other) const -> dtr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dtr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM timer input selection register
 */
class tisel_r {
public:

/**
 * TI1[0] to TI1[15] input selection
 */
class ti1sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ti1sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TI2[0] to TI2[15] input selection
 */
class ti2sel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ti2sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ti1sel() const -> ti1sel_f {return ti1sel_f(static_cast<uint8_t>(m_value >> ti1sel_f::Offset));}
	[[nodiscard]] constexpr auto ti2sel() const -> ti2sel_f {return ti2sel_f(static_cast<uint8_t>(m_value >> ti2sel_f::Offset));}

	constexpr tisel_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tisel_r other) const -> tisel_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tisel_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM alternate function option register 1
 */
class af1_r {
public:

/**
 * BRK COMP4 input polarity
 */
class bkcmp4p_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp4p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP3 input polarity
 */
class bkcmp3p_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp3p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP2 input polarity
 */
class bkcmp2p_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP1 input polarity
 */
class bkcmp1p_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK BKIN input polarity
 */
class bkinp_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkinp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP7 enable
 */
class bkcmp7e_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp7e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP6 enable
 */
class bkcmp6e_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp6e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP5 enable
 */
class bkcmp5e_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp5e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP4 enable
 */
class bkcmp4e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP3 enable
 */
class bkcmp3e_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP2 enable
 */
class bkcmp2e_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP1 enable
 */
class bkcmp1e_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK BKIN input enable
 */
class bkine_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkine_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto bkcmp4p() const -> bkcmp4p_f {return bkcmp4p_f((m_value & bkcmp4p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp3p() const -> bkcmp3p_f {return bkcmp3p_f((m_value & bkcmp3p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp2p() const -> bkcmp2p_f {return bkcmp2p_f((m_value & bkcmp2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp1p() const -> bkcmp1p_f {return bkcmp1p_f((m_value & bkcmp1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkinp() const -> bkinp_f {return bkinp_f((m_value & bkinp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp7e() const -> bkcmp7e_f {return bkcmp7e_f((m_value & bkcmp7e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp6e() const -> bkcmp6e_f {return bkcmp6e_f((m_value & bkcmp6e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp5e() const -> bkcmp5e_f {return bkcmp5e_f((m_value & bkcmp5e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp4e() const -> bkcmp4e_f {return bkcmp4e_f((m_value & bkcmp4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp3e() const -> bkcmp3e_f {return bkcmp3e_f((m_value & bkcmp3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp2e() const -> bkcmp2e_f {return bkcmp2e_f((m_value & bkcmp2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp1e() const -> bkcmp1e_f {return bkcmp1e_f((m_value & bkcmp1e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkine() const -> bkine_f {return bkine_f((m_value & bkine_f::Mask) != 0);}

	constexpr af1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(af1_r other) const -> af1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> af1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM alternate function option register 2
 */
class af2_r {
public:

/**
 * OCREF_CLR source selection
 */
class ocrsel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ocrsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator af2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(af2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ocrsel() const -> ocrsel_f {return ocrsel_f(static_cast<uint8_t>(m_value >> ocrsel_f::Offset));}

	constexpr af2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(af2_r other) const -> af2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> af2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 100;
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

	static constexpr std::size_t Offset = 988;
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
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dmab_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dmar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dmar_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dmar_r>() const {return ClearSet<dmar_r>(Mask, *this);}
	constexpr auto operator|(dmar_r other) const -> dmar_r { return static_cast<dmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dmar_r> other) const -> ClearSet<dmar_r> {return ClearSet<dmar_r>(dmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto dmab() const -> dmab_f {return dmab_f(static_cast<uint32_t>(m_value >> dmab_f::Offset));}

	constexpr dmar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dmar_r other) const -> dmar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dmar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 992;
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

	template<std::size_t Index> struct af_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using af_v = typename af_r<Index>::type;
	template<std::size_t Index> constexpr auto& af() { }

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
	Memory<uint32_t,rcr_r> rcr;
	Memory<uint32_t,ccr1_r> ccr1;
	Memory<uint32_t,ccr2_r> ccr2;
	Padding<8> _p60;
	Memory<uint32_t,bdtr_r> bdtr;
	Padding<12> _p72;
	Memory<uint32_t,dtr2_r> dtr2;
	Padding<4> _p88;
	Memory<uint32_t,tisel_r> tisel;
	Memory<uint32_t,af1_r> af1;
	Memory<uint32_t,af2_r> af2;
	Padding<884> _p104;
	Memory<uint32_t,dcr_r> dcr;
	Memory<uint32_t,dmar_r> dmar;
};

template<> struct tim15_p::cr2_r::ois_f<2> { using type = tim15_p::cr2_r::ois2_f; };
template<> struct tim15_p::cr2_r::ois_f<1> { using type = tim15_p::cr2_r::ois1_f; };

template<> constexpr auto& tim15_p::cr<1>() { return cr1; }
template<> constexpr auto& tim15_p::cr<2>() { return cr2; }

template<> struct tim15_p::cr_r<1> { using type = tim15_p::cr1_r; };
template<> struct tim15_p::cr_r<2> { using type = tim15_p::cr2_r; };

template<> constexpr auto& tim15_p::ccr<1>() { return ccr1; }
template<> constexpr auto& tim15_p::ccr<2>() { return ccr2; }

template<> struct tim15_p::ccr_r<1> { using type = tim15_p::ccr1_r; };
template<> struct tim15_p::ccr_r<2> { using type = tim15_p::ccr2_r; };

template<> constexpr auto& tim15_p::af<1>() { return af1; }
template<> constexpr auto& tim15_p::af<2>() { return af2; }

template<> struct tim15_p::af_r<1> { using type = tim15_p::af1_r; };
template<> struct tim15_p::af_r<2> { using type = tim15_p::af2_r; };

static_assert(std::is_standard_layout_v<tim15_p>);
static_assert(offsetof(tim15_p, cr1) == tim15_p::cr1_r::Offset);
static_assert(offsetof(tim15_p, cr2) == tim15_p::cr2_r::Offset);
static_assert(offsetof(tim15_p, smcr) == tim15_p::smcr_r::Offset);
static_assert(offsetof(tim15_p, dier) == tim15_p::dier_r::Offset);
static_assert(offsetof(tim15_p, sr) == tim15_p::sr_r::Offset);
static_assert(offsetof(tim15_p, egr) == tim15_p::egr_r::Offset);
static_assert(offsetof(tim15_p, ccmr1_output) == tim15_p::ccmr1_output_r::Offset);
static_assert(offsetof(tim15_p, ccmr1_input) == tim15_p::ccmr1_input_r::Offset);
static_assert(offsetof(tim15_p, ccer) == tim15_p::ccer_r::Offset);
static_assert(offsetof(tim15_p, cnt) == tim15_p::cnt_r::Offset);
static_assert(offsetof(tim15_p, psc) == tim15_p::psc_r::Offset);
static_assert(offsetof(tim15_p, arr) == tim15_p::arr_r::Offset);
static_assert(offsetof(tim15_p, rcr) == tim15_p::rcr_r::Offset);
static_assert(offsetof(tim15_p, ccr1) == tim15_p::ccr1_r::Offset);
static_assert(offsetof(tim15_p, ccr2) == tim15_p::ccr2_r::Offset);
static_assert(offsetof(tim15_p, bdtr) == tim15_p::bdtr_r::Offset);
static_assert(offsetof(tim15_p, dtr2) == tim15_p::dtr2_r::Offset);
static_assert(offsetof(tim15_p, tisel) == tim15_p::tisel_r::Offset);
static_assert(offsetof(tim15_p, af1) == tim15_p::af1_r::Offset);
static_assert(offsetof(tim15_p, af2) == tim15_p::af2_r::Offset);
static_assert(offsetof(tim15_p, dcr) == tim15_p::dcr_r::Offset);
static_assert(offsetof(tim15_p, dmar) == tim15_p::dmar_r::Offset);

/**
 * General purpose timers
 */
class tim16_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

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
 * UIF status bit remapping
 */
class uifremap_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr uifremap_f(bool value = true) : m_value(value) {}
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
 * Dithering Enable
 */
class dithen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dithen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr1_r>() const {return ClearSet<cr1_r>(Mask, *this);}
	constexpr auto operator|(cr1_r other) const -> cr1_r { return static_cast<cr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr1_r> other) const -> ClearSet<cr1_r> {return ClearSet<cr1_r>(cr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cen() const -> cen_f {return cen_f((m_value & cen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto udis() const -> udis_f {return udis_f((m_value & udis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto urs() const -> urs_f {return urs_f((m_value & urs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto opm() const -> opm_f {return opm_f((m_value & opm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto arpe() const -> arpe_f {return arpe_f((m_value & arpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ckd() const -> ckd_f {return ckd_f(static_cast<uint8_t>(m_value >> ckd_f::Offset));}
	[[nodiscard]] constexpr auto uifremap() const -> uifremap_f {return uifremap_f((m_value & uifremap_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dithen() const -> dithen_f {return dithen_f((m_value & dithen_f::Mask) != 0);}

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

	[[nodiscard]] constexpr auto ois1n() const -> ois1n_f {return ois1n_f((m_value & ois1n_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois1() const -> ois1_f {return ois1_f((m_value & ois1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccds() const -> ccds_f {return ccds_f((m_value & ccds_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccus() const -> ccus_f {return ccus_f((m_value & ccus_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ccpc() const -> ccpc_f {return ccpc_f((m_value & ccpc_f::Mask) != 0);}

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
 * DMA/Interrupt enable register
 */
class dier_r {
public:

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

	[[nodiscard]] constexpr auto comde() const -> comde_f {return comde_f((m_value & comde_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1de() const -> cc1de_f {return cc1de_f((m_value & cc1de_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ude() const -> ude_f {return ude_f((m_value & ude_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bie() const -> bie_f {return bie_f((m_value & bie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comie() const -> comie_f {return comie_f((m_value & comie_f::Mask) != 0);}
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
	[[nodiscard]] constexpr auto bif() const -> bif_f {return bif_f((m_value & bif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comif() const -> comif_f {return comif_f((m_value & comif_f::Mask) != 0);}
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
	[[nodiscard]] constexpr auto comg() const -> comg_f {return comg_f((m_value & comg_f::Mask) != 0);}
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
 * capture/compare mode register (output mode)
 */
class ccmr1_output_r {
public:

/**
 * Output Compare 1 mode
 */
class oc1m_3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc1m_3_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto oc1m_3() const -> oc1m_3_f {return oc1m_3_f((m_value & oc1m_3_f::Mask) != 0);}
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
class ic1psc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ic1psc_f(uint8_t value) : m_value(value & Range) {}
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
	[[nodiscard]] constexpr auto ic1psc() const -> ic1psc_f {return ic1psc_f(static_cast<uint8_t>(m_value >> ic1psc_f::Offset));}
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

/**
 * UIF Copy
 */
class uifcpy_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uifcpy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cnt_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cnt_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto cnt() const -> cnt_f {return cnt_f(static_cast<uint16_t>(m_value >> cnt_f::Offset));}
	[[nodiscard]] constexpr auto uifcpy() const -> uifcpy_f {return uifcpy_f((m_value & uifcpy_f::Mask) != 0);}

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
	static constexpr uint32_t ResetValue = 0b1111111111111111; // 65535 0xFFFF

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
 * break and dead-time register
 */
class bdtr_r {
public:

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
 * Break filter
 */
class bkf_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkf_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bdtr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bdtr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BKDSRM
 */
class bkdsrm_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bkdsrm_f(bool value = true) : m_value(value) {}
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
 * BKBID
 */
class bkbid_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bkbid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator bdtr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(bdtr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dtg() const -> dtg_f {return dtg_f(static_cast<uint8_t>(m_value >> dtg_f::Offset));}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f(static_cast<uint8_t>(m_value >> lock_f::Offset));}
	[[nodiscard]] constexpr auto ossi() const -> ossi_f {return ossi_f((m_value & ossi_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ossr() const -> ossr_f {return ossr_f((m_value & ossr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bke() const -> bke_f {return bke_f((m_value & bke_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f((m_value & bkp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto aoe() const -> aoe_f {return aoe_f((m_value & aoe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto moe() const -> moe_f {return moe_f((m_value & moe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkf() const -> bkf_f {return bkf_f(static_cast<uint8_t>(m_value >> bkf_f::Offset));}
	[[nodiscard]] constexpr auto bkdsrm() const -> bkdsrm_f {return bkdsrm_f((m_value & bkdsrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkbid() const -> bkbid_f {return bkbid_f((m_value & bkbid_f::Mask) != 0);}

	constexpr bdtr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bdtr_r other) const -> bdtr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bdtr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * timer Deadtime Register 2
 */
class dtr2_r {
public:

/**
 * Dead-time generator setup
 */
class dtgf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dtgf_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dtr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dtr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Deadtime Asymmetric Enable
 */
class dtae_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dtae_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dtr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dtr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Deadtime Preload Enable
 */
class dtpe_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dtpe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dtr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dtr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dtgf() const -> dtgf_f {return dtgf_f(static_cast<uint8_t>(m_value >> dtgf_f::Offset));}
	[[nodiscard]] constexpr auto dtae() const -> dtae_f {return dtae_f((m_value & dtae_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtpe() const -> dtpe_f {return dtpe_f((m_value & dtpe_f::Mask) != 0);}

	constexpr dtr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dtr2_r other) const -> dtr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dtr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM timer input selection register
 */
class tisel_r {
public:

/**
 * TI1[0] to TI1[15] input selection
 */
class ti1sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ti1sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ti1sel() const -> ti1sel_f {return ti1sel_f(static_cast<uint8_t>(m_value >> ti1sel_f::Offset));}

	constexpr tisel_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tisel_r other) const -> tisel_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tisel_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM alternate function option register 1
 */
class af1_r {
public:

/**
 * BRK COMP4 input polarity
 */
class bkcmp4p_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp4p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP3 input polarity
 */
class bkcmp3p_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp3p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP2 input polarity
 */
class bkcmp2p_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP1 input polarity
 */
class bkcmp1p_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK BKIN input polarity
 */
class bkinp_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkinp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP7 enable
 */
class bkcmp7e_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp7e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP6 enable
 */
class bkcmp6e_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp6e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP5 enable
 */
class bkcmp5e_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp5e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP4 enable
 */
class bkcmp4e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP3 enable
 */
class bkcmp3e_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP2 enable
 */
class bkcmp2e_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP1 enable
 */
class bkcmp1e_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK BKIN input enable
 */
class bkine_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkine_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto bkcmp4p() const -> bkcmp4p_f {return bkcmp4p_f((m_value & bkcmp4p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp3p() const -> bkcmp3p_f {return bkcmp3p_f((m_value & bkcmp3p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp2p() const -> bkcmp2p_f {return bkcmp2p_f((m_value & bkcmp2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp1p() const -> bkcmp1p_f {return bkcmp1p_f((m_value & bkcmp1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkinp() const -> bkinp_f {return bkinp_f((m_value & bkinp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp7e() const -> bkcmp7e_f {return bkcmp7e_f((m_value & bkcmp7e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp6e() const -> bkcmp6e_f {return bkcmp6e_f((m_value & bkcmp6e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp5e() const -> bkcmp5e_f {return bkcmp5e_f((m_value & bkcmp5e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp4e() const -> bkcmp4e_f {return bkcmp4e_f((m_value & bkcmp4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp3e() const -> bkcmp3e_f {return bkcmp3e_f((m_value & bkcmp3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp2e() const -> bkcmp2e_f {return bkcmp2e_f((m_value & bkcmp2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp1e() const -> bkcmp1e_f {return bkcmp1e_f((m_value & bkcmp1e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkine() const -> bkine_f {return bkine_f((m_value & bkine_f::Mask) != 0);}

	constexpr af1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(af1_r other) const -> af1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> af1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM alternate function option register 2
 */
class af2_r {
public:

/**
 * OCREF_CLR source selection
 */
class ocrsel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ocrsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator af2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(af2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ocrsel() const -> ocrsel_f {return ocrsel_f(static_cast<uint8_t>(m_value >> ocrsel_f::Offset));}

	constexpr af2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(af2_r other) const -> af2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> af2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 100;
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

	static constexpr std::size_t Offset = 988;
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
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dmab_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dmar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dmar_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dmar_r>() const {return ClearSet<dmar_r>(Mask, *this);}
	constexpr auto operator|(dmar_r other) const -> dmar_r { return static_cast<dmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dmar_r> other) const -> ClearSet<dmar_r> {return ClearSet<dmar_r>(dmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto dmab() const -> dmab_f {return dmab_f(static_cast<uint32_t>(m_value >> dmab_f::Offset));}

	constexpr dmar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dmar_r other) const -> dmar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dmar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 992;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct af_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using af_v = typename af_r<Index>::type;
	template<std::size_t Index> constexpr auto& af() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Padding<4> _p8;
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
	Memory<uint32_t,rcr_r> rcr;
	Memory<uint32_t,ccr1_r> ccr1;
	Padding<12> _p56;
	Memory<uint32_t,bdtr_r> bdtr;
	Padding<12> _p72;
	Memory<uint32_t,dtr2_r> dtr2;
	Padding<4> _p88;
	Memory<uint32_t,tisel_r> tisel;
	Memory<uint32_t,af1_r> af1;
	Memory<uint32_t,af2_r> af2;
	Padding<884> _p104;
	Memory<uint32_t,dcr_r> dcr;
	Memory<uint32_t,dmar_r> dmar;
};

template<> constexpr auto& tim16_p::cr<1>() { return cr1; }
template<> constexpr auto& tim16_p::cr<2>() { return cr2; }

template<> struct tim16_p::cr_r<1> { using type = tim16_p::cr1_r; };
template<> struct tim16_p::cr_r<2> { using type = tim16_p::cr2_r; };

template<> constexpr auto& tim16_p::af<1>() { return af1; }
template<> constexpr auto& tim16_p::af<2>() { return af2; }

template<> struct tim16_p::af_r<1> { using type = tim16_p::af1_r; };
template<> struct tim16_p::af_r<2> { using type = tim16_p::af2_r; };

static_assert(std::is_standard_layout_v<tim16_p>);
static_assert(offsetof(tim16_p, cr1) == tim16_p::cr1_r::Offset);
static_assert(offsetof(tim16_p, cr2) == tim16_p::cr2_r::Offset);
static_assert(offsetof(tim16_p, dier) == tim16_p::dier_r::Offset);
static_assert(offsetof(tim16_p, sr) == tim16_p::sr_r::Offset);
static_assert(offsetof(tim16_p, egr) == tim16_p::egr_r::Offset);
static_assert(offsetof(tim16_p, ccmr1_output) == tim16_p::ccmr1_output_r::Offset);
static_assert(offsetof(tim16_p, ccmr1_input) == tim16_p::ccmr1_input_r::Offset);
static_assert(offsetof(tim16_p, ccer) == tim16_p::ccer_r::Offset);
static_assert(offsetof(tim16_p, cnt) == tim16_p::cnt_r::Offset);
static_assert(offsetof(tim16_p, psc) == tim16_p::psc_r::Offset);
static_assert(offsetof(tim16_p, arr) == tim16_p::arr_r::Offset);
static_assert(offsetof(tim16_p, rcr) == tim16_p::rcr_r::Offset);
static_assert(offsetof(tim16_p, ccr1) == tim16_p::ccr1_r::Offset);
static_assert(offsetof(tim16_p, bdtr) == tim16_p::bdtr_r::Offset);
static_assert(offsetof(tim16_p, dtr2) == tim16_p::dtr2_r::Offset);
static_assert(offsetof(tim16_p, tisel) == tim16_p::tisel_r::Offset);
static_assert(offsetof(tim16_p, af1) == tim16_p::af1_r::Offset);
static_assert(offsetof(tim16_p, af2) == tim16_p::af2_r::Offset);
static_assert(offsetof(tim16_p, dcr) == tim16_p::dcr_r::Offset);
static_assert(offsetof(tim16_p, dmar) == tim16_p::dmar_r::Offset);

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
 * Dithering Enable
 */
class dithen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dithen_f(bool value = true) : m_value(value) {}
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
 * UIF status bit remapping
 */
class uifremap_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr uifremap_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto dithen() const -> dithen_f {return dithen_f((m_value & dithen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uifremap() const -> uifremap_f {return uifremap_f((m_value & uifremap_f::Mask) != 0);}
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
 * Master mode selection - bit 3
 */
class mms_3_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mms_3_f(bool value = true) : m_value(value) {}
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
 * Master mode selection 2
 */
class mms2_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mms2_f(uint8_t value) : m_value(value & Range) {}
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
 * Output Idle state 6 (OC6 output)
 */
class ois6_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ois6_f(bool value = true) : m_value(value) {}
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
 * Output Idle state 5 (OC5 output)
 */
class ois5_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ois5_f(bool value = true) : m_value(value) {}
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
 * Output Idle state 4 (OC4N output)
 */
class ois4n_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ois4n_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto mms_3() const -> mms_3_f {return mms_3_f((m_value & mms_3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mms2() const -> mms2_f {return mms2_f(static_cast<uint8_t>(m_value >> mms2_f::Offset));}
	[[nodiscard]] constexpr auto ois6() const -> ois6_f {return ois6_f((m_value & ois6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois5() const -> ois5_f {return ois5_f((m_value & ois5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois4n() const -> ois4n_f {return ois4n_f((m_value & ois4n_f::Mask) != 0);}
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

	template<std::size_t Index> struct ois_f { static_assert(Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
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
 * SMS Preload Source
 */
class smsps_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smsps_f(bool value = true) : m_value(value) {}
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
 * SMS Preload Enable
 */
class smspe_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smspe_f(bool value = true) : m_value(value) {}
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
 * Trigger selection - bit 4:3
 */
class ts_4_3_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ts_4_3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Slave mode selection - bit 3
 */
class sms_3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sms_3_f(bool value = true) : m_value(value) {}
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
 * OCREF clear selection
 */
class occs_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr occs_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto smsps() const -> smsps_f {return smsps_f((m_value & smsps_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smspe() const -> smspe_f {return smspe_f((m_value & smspe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ts_4_3() const -> ts_4_3_f {return ts_4_3_f(static_cast<uint8_t>(m_value >> ts_4_3_f::Offset));}
	[[nodiscard]] constexpr auto sms_3() const -> sms_3_f {return sms_3_f((m_value & sms_3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto etp() const -> etp_f {return etp_f((m_value & etp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ece() const -> ece_f {return ece_f((m_value & ece_f::Mask) != 0);}
	[[nodiscard]] constexpr auto etps() const -> etps_f {return etps_f(static_cast<uint8_t>(m_value >> etps_f::Offset));}
	[[nodiscard]] constexpr auto etf() const -> etf_f {return etf_f(static_cast<uint8_t>(m_value >> etf_f::Offset));}
	[[nodiscard]] constexpr auto msm() const -> msm_f {return msm_f((m_value & msm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ts() const -> ts_f {return ts_f(static_cast<uint8_t>(m_value >> ts_f::Offset));}
	[[nodiscard]] constexpr auto occs() const -> occs_f {return occs_f((m_value & occs_f::Mask) != 0);}
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
 * Transition Error interrupt enable
 */
class terrie_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr terrie_f(bool value = true) : m_value(value) {}
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
 * Index Error interrupt enable
 */
class ierrie_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ierrie_f(bool value = true) : m_value(value) {}
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
 * Direction Change interrupt enable
 */
class dirie_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dirie_f(bool value = true) : m_value(value) {}
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
 * Index interrupt enable
 */
class idxie_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr idxie_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto terrie() const -> terrie_f {return terrie_f((m_value & terrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ierrie() const -> ierrie_f {return ierrie_f((m_value & ierrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dirie() const -> dirie_f {return dirie_f((m_value & dirie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idxie() const -> idxie_f {return idxie_f((m_value & idxie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tde() const -> tde_f {return tde_f((m_value & tde_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comde() const -> comde_f {return comde_f((m_value & comde_f::Mask) != 0);}
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
	[[nodiscard]] constexpr auto bie() const -> bie_f {return bie_f((m_value & bie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comie() const -> comie_f {return comie_f((m_value & comie_f::Mask) != 0);}

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
 * Transition Error interrupt flag
 */
class terrf_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr terrf_f(bool value = true) : m_value(value) {}
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
 * Index Error interrupt flag
 */
class ierrf_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ierrf_f(bool value = true) : m_value(value) {}
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
 * Direction Change interrupt flag
 */
class dirf_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dirf_f(bool value = true) : m_value(value) {}
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
 * Index interrupt flag
 */
class idxf_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr idxf_f(bool value = true) : m_value(value) {}
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
 * Compare 6 interrupt flag
 */
class cc6if_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc6if_f(bool value = true) : m_value(value) {}
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
 * Compare 5 interrupt flag
 */
class cc5if_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc5if_f(bool value = true) : m_value(value) {}
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
 * System Break interrupt flag
 */
class sbif_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sbif_f(bool value = true) : m_value(value) {}
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
 * Break 2 interrupt flag
 */
class b2if_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr b2if_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto terrf() const -> terrf_f {return terrf_f((m_value & terrf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ierrf() const -> ierrf_f {return ierrf_f((m_value & ierrf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dirf() const -> dirf_f {return dirf_f((m_value & dirf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idxf() const -> idxf_f {return idxf_f((m_value & idxf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc6if() const -> cc6if_f {return cc6if_f((m_value & cc6if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc5if() const -> cc5if_f {return cc5if_f((m_value & cc5if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbif() const -> sbif_f {return sbif_f((m_value & sbif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4of() const -> cc4of_f {return cc4of_f((m_value & cc4of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3of() const -> cc3of_f {return cc3of_f((m_value & cc3of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2of() const -> cc2of_f {return cc2of_f((m_value & cc2of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1of() const -> cc1of_f {return cc1of_f((m_value & cc1of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto b2if() const -> b2if_f {return b2if_f((m_value & b2if_f::Mask) != 0);}
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
 * Break 2 generation
 */
class b2g_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr b2g_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto b2g() const -> b2g_f {return b2g_f((m_value & b2g_f::Mask) != 0);}
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
 * Output Compare 2 mode - bit 3
 */
class oc2m_3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc2m_3_f(bool value = true) : m_value(value) {}
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
 * Output Compare 1 mode - bit 3
 */
class oc1m_3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc1m_3_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto oc2m_3() const -> oc2m_3_f {return oc2m_3_f((m_value & oc2m_3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1m_3() const -> oc1m_3_f {return oc1m_3_f((m_value & oc1m_3_f::Mask) != 0);}
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
class ic2psc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2psc_f(uint8_t value) : m_value(value & Range) {}
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
	[[nodiscard]] constexpr auto ic2psc() const -> ic2psc_f {return ic2psc_f(static_cast<uint8_t>(m_value >> ic2psc_f::Offset));}
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
 * Output Compare 4 mode - bit 3
 */
class oc4m_3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc4m_3_f(bool value = true) : m_value(value) {}
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
 * Output Compare 3 mode - bit 3
 */
class oc3m_3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc3m_3_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto oc4m_3() const -> oc4m_3_f {return oc4m_3_f((m_value & oc4m_3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc3m_3() const -> oc3m_3_f {return oc3m_3_f((m_value & oc3m_3_f::Mask) != 0);}
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
 * Capture/Compare 6 output polarity
 */
class cc6p_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc6p_f(bool value = true) : m_value(value) {}
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
 * Capture/Compare 6 output enable
 */
class cc6e_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc6e_f(bool value = true) : m_value(value) {}
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
 * Capture/Compare 5 output polarity
 */
class cc5p_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc5p_f(bool value = true) : m_value(value) {}
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
 * Capture/Compare 5 output enable
 */
class cc5e_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc5e_f(bool value = true) : m_value(value) {}
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
 * Capture/Compare 4 complementary output polarity
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
 * Capture/Compare 4 complementary output enable
 */
class cc4ne_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4ne_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto cc6p() const -> cc6p_f {return cc6p_f((m_value & cc6p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc6e() const -> cc6e_f {return cc6e_f((m_value & cc6e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc5p() const -> cc5p_f {return cc5p_f((m_value & cc5p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc5e() const -> cc5e_f {return cc5e_f((m_value & cc5e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4np() const -> cc4np_f {return cc4np_f((m_value & cc4np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4ne() const -> cc4ne_f {return cc4ne_f((m_value & cc4ne_f::Mask) != 0);}
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
 * UIFCPY
 */
class uifcpy_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uifcpy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cnt_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cnt_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

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

	[[nodiscard]] constexpr auto uifcpy() const -> uifcpy_f {return uifcpy_f((m_value & uifcpy_f::Mask) != 0);}
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
	static constexpr uint32_t ResetValue = 0b1111111111111111; // 65535 0xFFFF

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
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rep_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator rcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rcr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rcr_r>() const {return ClearSet<rcr_r>(Mask, *this);}
	constexpr auto operator|(rcr_r other) const -> rcr_r { return static_cast<rcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rcr_r> other) const -> ClearSet<rcr_r> {return ClearSet<rcr_r>(rcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rep() const -> rep_f {return rep_f(static_cast<uint16_t>(m_value >> rep_f::Offset));}

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
 * break and dead-time register
 */
class bdtr_r {
public:

/**
 * BK2ID
 */
class bk2id_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bk2id_f(bool value = true) : m_value(value) {}
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
 * BKBID
 */
class bkbid_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bkbid_f(bool value = true) : m_value(value) {}
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
 * BK2DSRM
 */
class bk2dsrm_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bk2dsrm_f(bool value = true) : m_value(value) {}
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
 * BKDSRM
 */
class bkdsrm_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bkdsrm_f(bool value = true) : m_value(value) {}
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
 * Break 2 polarity
 */
class bk2p_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bk2p_f(bool value = true) : m_value(value) {}
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
 * Break 2 Enable
 */
class bk2e_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bk2e_f(bool value = true) : m_value(value) {}
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
 * Break 2 filter
 */
class bk2f_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bk2f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bdtr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bdtr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Break filter
 */
class bkf_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkf_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bdtr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bdtr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

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

	[[nodiscard]] constexpr auto bk2id() const -> bk2id_f {return bk2id_f((m_value & bk2id_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkbid() const -> bkbid_f {return bkbid_f((m_value & bkbid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2dsrm() const -> bk2dsrm_f {return bk2dsrm_f((m_value & bk2dsrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkdsrm() const -> bkdsrm_f {return bkdsrm_f((m_value & bkdsrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2p() const -> bk2p_f {return bk2p_f((m_value & bk2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2e() const -> bk2e_f {return bk2e_f((m_value & bk2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2f() const -> bk2f_f {return bk2f_f(static_cast<uint8_t>(m_value >> bk2f_f::Offset));}
	[[nodiscard]] constexpr auto bkf() const -> bkf_f {return bkf_f(static_cast<uint8_t>(m_value >> bkf_f::Offset));}
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
/**
 * capture/compare register 4
 */
class ccr5_r {
public:

/**
 * Capture/Compare value
 */
class ccr5_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr5_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr5_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr5_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Group Channel 5 and Channel 1
 */
class gc5c1_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gc5c1_f(bool value = true) : m_value(value) {}
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
 * Group Channel 5 and Channel 2
 */
class gc5c2_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gc5c2_f(bool value = true) : m_value(value) {}
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
 * Group Channel 5 and Channel 3
 */
class gc5c3_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gc5c3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ccr5() const -> ccr5_f {return ccr5_f(static_cast<uint16_t>(m_value >> ccr5_f::Offset));}
	[[nodiscard]] constexpr auto gc5c1() const -> gc5c1_f {return gc5c1_f((m_value & gc5c1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gc5c2() const -> gc5c2_f {return gc5c2_f((m_value & gc5c2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gc5c3() const -> gc5c3_f {return gc5c3_f((m_value & gc5c3_f::Mask) != 0);}

	template<std::size_t Index> struct gc5c_f { static_assert(Index == 1 || Index == 2 || Index == 3); };
	template<std::size_t Index> using gc5c_v = typename gc5c_f<Index>::type;
	template<std::size_t Index> constexpr auto gc5c() const { return gc5c_v<Index>::get(*this); }

	constexpr ccr5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr5_r other) const -> ccr5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 4
 */
class ccr6_r {
public:

/**
 * Capture/Compare value
 */
class ccr6_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr6_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr6_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr6_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr6() const -> ccr6_f {return ccr6_f(static_cast<uint16_t>(m_value >> ccr6_f::Offset));}

	constexpr ccr6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr6_r other) const -> ccr6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 2 (output mode)
 */
class ccmr3_output_r {
public:

/**
 * Output Compare 6 mode bit 3
 */
class oc6m_bit3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc6m_bit3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output Compare 5 mode bit 3
 */
class oc5m_bit3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr oc5m_bit3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccmr3_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output compare 6 clear enable
 */
class oc6ce_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc6ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 6 mode
 */
class oc6m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc6m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr3_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output compare 6 preload enable
 */
class oc6pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc6pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 6 fast enable
 */
class oc6fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc6fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 5 clear enable
 */
class oc5ce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc5ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 5 mode
 */
class oc5m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc5m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr3_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output compare 5 preload enable
 */
class oc5pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc5pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 5 fast enable
 */
class oc5fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc5fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto oc6m_bit3() const -> oc6m_bit3_f {return oc6m_bit3_f((m_value & oc6m_bit3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc5m_bit3() const -> oc5m_bit3_f {return oc5m_bit3_f(static_cast<uint8_t>(m_value >> oc5m_bit3_f::Offset));}
	[[nodiscard]] constexpr auto oc6ce() const -> oc6ce_f {return oc6ce_f((m_value & oc6ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc6m() const -> oc6m_f {return oc6m_f(static_cast<uint8_t>(m_value >> oc6m_f::Offset));}
	[[nodiscard]] constexpr auto oc6pe() const -> oc6pe_f {return oc6pe_f((m_value & oc6pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc6fe() const -> oc6fe_f {return oc6fe_f((m_value & oc6fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc5ce() const -> oc5ce_f {return oc5ce_f((m_value & oc5ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc5m() const -> oc5m_f {return oc5m_f(static_cast<uint8_t>(m_value >> oc5m_f::Offset));}
	[[nodiscard]] constexpr auto oc5pe() const -> oc5pe_f {return oc5pe_f((m_value & oc5pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc5fe() const -> oc5fe_f {return oc5fe_f((m_value & oc5fe_f::Mask) != 0);}

	constexpr ccmr3_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr3_output_r other) const -> ccmr3_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr3_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * timer Deadtime Register 2
 */
class dtr2_r {
public:

/**
 * Deadtime Preload Enable
 */
class dtpe_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dtpe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dtr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dtr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Deadtime Asymmetric Enable
 */
class dtae_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dtae_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dtr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dtr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Dead-time falling edge generator setup
 */
class dtgf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dtgf_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dtr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dtr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dtpe() const -> dtpe_f {return dtpe_f((m_value & dtpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtae() const -> dtae_f {return dtae_f((m_value & dtae_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtgf() const -> dtgf_f {return dtgf_f(static_cast<uint8_t>(m_value >> dtgf_f::Offset));}

	constexpr dtr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dtr2_r other) const -> dtr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dtr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA control register
 */
class ecr_r {
public:

/**
 * Index Enable
 */
class ie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ecr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ecr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Index Direction
 */
class idir_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr idir_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Index Blanking
 */
class iblk_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr iblk_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * First Index
 */
class fidx_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fidx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ecr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ecr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Index Positioning
 */
class ipos_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipos_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Pulse width
 */
class pw_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pw_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Pulse Width prescaler
 */
class pwprsc_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pwprsc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ie() const -> ie_f {return ie_f((m_value & ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idir() const -> idir_f {return idir_f(static_cast<uint8_t>(m_value >> idir_f::Offset));}
	[[nodiscard]] constexpr auto iblk() const -> iblk_f {return iblk_f(static_cast<uint8_t>(m_value >> iblk_f::Offset));}
	[[nodiscard]] constexpr auto fidx() const -> fidx_f {return fidx_f((m_value & fidx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ipos() const -> ipos_f {return ipos_f(static_cast<uint8_t>(m_value >> ipos_f::Offset));}
	[[nodiscard]] constexpr auto pw() const -> pw_f {return pw_f(static_cast<uint8_t>(m_value >> pw_f::Offset));}
	[[nodiscard]] constexpr auto pwprsc() const -> pwprsc_f {return pwprsc_f(static_cast<uint8_t>(m_value >> pwprsc_f::Offset));}

	constexpr ecr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ecr_r other) const -> ecr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ecr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 88;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM timer input selection register
 */
class tisel_r {
public:

/**
 * TI1[0] to TI1[15] input selection
 */
class ti1sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ti1sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TI2[0] to TI2[15] input selection
 */
class ti2sel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ti2sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TI3[0] to TI3[15] input selection
 */
class ti3sel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ti3sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TI4[0] to TI4[15] input selection
 */
class ti4sel_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ti4sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ti1sel() const -> ti1sel_f {return ti1sel_f(static_cast<uint8_t>(m_value >> ti1sel_f::Offset));}
	[[nodiscard]] constexpr auto ti2sel() const -> ti2sel_f {return ti2sel_f(static_cast<uint8_t>(m_value >> ti2sel_f::Offset));}
	[[nodiscard]] constexpr auto ti3sel() const -> ti3sel_f {return ti3sel_f(static_cast<uint8_t>(m_value >> ti3sel_f::Offset));}
	[[nodiscard]] constexpr auto ti4sel() const -> ti4sel_f {return ti4sel_f(static_cast<uint8_t>(m_value >> ti4sel_f::Offset));}

	constexpr tisel_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tisel_r other) const -> tisel_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tisel_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM alternate function option register 1
 */
class af1_r {
public:

/**
 * ETR source selection
 */
class etrsel_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr etrsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator af1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(af1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRK COMP4 input polarity
 */
class bkcmp4p_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp4p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP3 input polarity
 */
class bkcmp3p_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp3p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP2 input polarity
 */
class bkcmp2p_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP1 input polarity
 */
class bkcmp1p_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK BKIN input polarity
 */
class bkinp_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkinp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP7 enable
 */
class bkcmp7e_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp7e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP6 enable
 */
class bkcmp6e_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp6e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP5 enable
 */
class bkcmp5e_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp5e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP4 enable
 */
class bkcmp4e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP3 enable
 */
class bkcmp3e_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP2 enable
 */
class bkcmp2e_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP1 enable
 */
class bkcmp1e_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK BKIN input enable
 */
class bkine_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkine_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto etrsel() const -> etrsel_f {return etrsel_f(static_cast<uint8_t>(m_value >> etrsel_f::Offset));}
	[[nodiscard]] constexpr auto bkcmp4p() const -> bkcmp4p_f {return bkcmp4p_f((m_value & bkcmp4p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp3p() const -> bkcmp3p_f {return bkcmp3p_f((m_value & bkcmp3p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp2p() const -> bkcmp2p_f {return bkcmp2p_f((m_value & bkcmp2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp1p() const -> bkcmp1p_f {return bkcmp1p_f((m_value & bkcmp1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkinp() const -> bkinp_f {return bkinp_f((m_value & bkinp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp7e() const -> bkcmp7e_f {return bkcmp7e_f((m_value & bkcmp7e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp6e() const -> bkcmp6e_f {return bkcmp6e_f((m_value & bkcmp6e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp5e() const -> bkcmp5e_f {return bkcmp5e_f((m_value & bkcmp5e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp4e() const -> bkcmp4e_f {return bkcmp4e_f((m_value & bkcmp4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp3e() const -> bkcmp3e_f {return bkcmp3e_f((m_value & bkcmp3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp2e() const -> bkcmp2e_f {return bkcmp2e_f((m_value & bkcmp2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp1e() const -> bkcmp1e_f {return bkcmp1e_f((m_value & bkcmp1e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkine() const -> bkine_f {return bkine_f((m_value & bkine_f::Mask) != 0);}

	constexpr af1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(af1_r other) const -> af1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> af1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM alternate function option register 2
 */
class af2_r {
public:

/**
 * OCREF_CLR source selection
 */
class ocrsel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ocrsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator af2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(af2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRK2 COMP4 input polarity
 */
class bk2cmp4p_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bk2cmp4p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP3 input polarity
 */
class bk2cmp3p_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bk2cmp3p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP2 input polarity
 */
class bk2cmp2p_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bk2cmp2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP1 input polarity
 */
class bk2cmp1p_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bk2cmp1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 BKIN input polarity
 */
class bk2inp_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bk2inp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP7 enable
 */
class bk2cmp7e_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp7e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP6 enable
 */
class bk2cmp6e_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp6e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP5 enable
 */
class bk2cmp5e_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp5e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP4 enable
 */
class bk2cmp4e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP3 enable
 */
class bk2cmp3e_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP2 enable
 */
class bk2cmp2e_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP1 enable
 */
class bk2cmp1e_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK BKIN input enable
 */
class bkine_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkine_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ocrsel() const -> ocrsel_f {return ocrsel_f(static_cast<uint8_t>(m_value >> ocrsel_f::Offset));}
	[[nodiscard]] constexpr auto bk2cmp4p() const -> bk2cmp4p_f {return bk2cmp4p_f((m_value & bk2cmp4p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp3p() const -> bk2cmp3p_f {return bk2cmp3p_f((m_value & bk2cmp3p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp2p() const -> bk2cmp2p_f {return bk2cmp2p_f((m_value & bk2cmp2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp1p() const -> bk2cmp1p_f {return bk2cmp1p_f((m_value & bk2cmp1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2inp() const -> bk2inp_f {return bk2inp_f((m_value & bk2inp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp7e() const -> bk2cmp7e_f {return bk2cmp7e_f((m_value & bk2cmp7e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp6e() const -> bk2cmp6e_f {return bk2cmp6e_f((m_value & bk2cmp6e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp5e() const -> bk2cmp5e_f {return bk2cmp5e_f((m_value & bk2cmp5e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp4e() const -> bk2cmp4e_f {return bk2cmp4e_f((m_value & bk2cmp4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp3e() const -> bk2cmp3e_f {return bk2cmp3e_f((m_value & bk2cmp3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp2e() const -> bk2cmp2e_f {return bk2cmp2e_f((m_value & bk2cmp2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp1e() const -> bk2cmp1e_f {return bk2cmp1e_f((m_value & bk2cmp1e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkine() const -> bkine_f {return bkine_f((m_value & bkine_f::Mask) != 0);}

	constexpr af2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(af2_r other) const -> af2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> af2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 100;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * control register
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

	static constexpr std::size_t Offset = 988;
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
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dmab_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dmar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dmar_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dmar_r>() const {return ClearSet<dmar_r>(Mask, *this);}
	constexpr auto operator|(dmar_r other) const -> dmar_r { return static_cast<dmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dmar_r> other) const -> ClearSet<dmar_r> {return ClearSet<dmar_r>(dmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto dmab() const -> dmab_f {return dmab_f(static_cast<uint32_t>(m_value >> dmab_f::Offset));}

	constexpr dmar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dmar_r other) const -> dmar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dmar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 992;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct ccr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6); };
	template<std::size_t Index> using ccr_v = typename ccr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ccr() { }

	template<std::size_t Index> struct af_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using af_v = typename af_r<Index>::type;
	template<std::size_t Index> constexpr auto& af() { }

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
	Memory<uint32_t,ccr5_r> ccr5;
	Memory<uint32_t,ccr6_r> ccr6;
	Memory<uint32_t,ccmr3_output_r> ccmr3_output;
	Memory<uint32_t,dtr2_r> dtr2;
	Memory<uint32_t,ecr_r> ecr;
	Memory<uint32_t,tisel_r> tisel;
	Memory<uint32_t,af1_r> af1;
	Memory<uint32_t,af2_r> af2;
	Padding<884> _p104;
	Memory<uint32_t,dcr_r> dcr;
	Memory<uint32_t,dmar_r> dmar;
};

template<> struct tim1_p::cr2_r::ois_f<6> { using type = tim1_p::cr2_r::ois6_f; };
template<> struct tim1_p::cr2_r::ois_f<5> { using type = tim1_p::cr2_r::ois5_f; };
template<> struct tim1_p::cr2_r::ois_f<4> { using type = tim1_p::cr2_r::ois4_f; };
template<> struct tim1_p::cr2_r::ois_f<3> { using type = tim1_p::cr2_r::ois3_f; };
template<> struct tim1_p::cr2_r::ois_f<2> { using type = tim1_p::cr2_r::ois2_f; };
template<> struct tim1_p::cr2_r::ois_f<1> { using type = tim1_p::cr2_r::ois1_f; };

template<> struct tim1_p::ccr5_r::gc5c_f<1> { using type = tim1_p::ccr5_r::gc5c1_f; };
template<> struct tim1_p::ccr5_r::gc5c_f<2> { using type = tim1_p::ccr5_r::gc5c2_f; };
template<> struct tim1_p::ccr5_r::gc5c_f<3> { using type = tim1_p::ccr5_r::gc5c3_f; };

template<> constexpr auto& tim1_p::cr<1>() { return cr1; }
template<> constexpr auto& tim1_p::cr<2>() { return cr2; }

template<> struct tim1_p::cr_r<1> { using type = tim1_p::cr1_r; };
template<> struct tim1_p::cr_r<2> { using type = tim1_p::cr2_r; };

template<> constexpr auto& tim1_p::ccr<1>() { return ccr1; }
template<> constexpr auto& tim1_p::ccr<2>() { return ccr2; }
template<> constexpr auto& tim1_p::ccr<3>() { return ccr3; }
template<> constexpr auto& tim1_p::ccr<4>() { return ccr4; }
template<> constexpr auto& tim1_p::ccr<5>() { return ccr5; }
template<> constexpr auto& tim1_p::ccr<6>() { return ccr6; }

template<> struct tim1_p::ccr_r<1> { using type = tim1_p::ccr1_r; };
template<> struct tim1_p::ccr_r<2> { using type = tim1_p::ccr2_r; };
template<> struct tim1_p::ccr_r<3> { using type = tim1_p::ccr3_r; };
template<> struct tim1_p::ccr_r<4> { using type = tim1_p::ccr4_r; };
template<> struct tim1_p::ccr_r<5> { using type = tim1_p::ccr5_r; };
template<> struct tim1_p::ccr_r<6> { using type = tim1_p::ccr6_r; };

template<> constexpr auto& tim1_p::af<1>() { return af1; }
template<> constexpr auto& tim1_p::af<2>() { return af2; }

template<> struct tim1_p::af_r<1> { using type = tim1_p::af1_r; };
template<> struct tim1_p::af_r<2> { using type = tim1_p::af2_r; };

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
static_assert(offsetof(tim1_p, rcr) == tim1_p::rcr_r::Offset);
static_assert(offsetof(tim1_p, ccr1) == tim1_p::ccr1_r::Offset);
static_assert(offsetof(tim1_p, ccr2) == tim1_p::ccr2_r::Offset);
static_assert(offsetof(tim1_p, ccr3) == tim1_p::ccr3_r::Offset);
static_assert(offsetof(tim1_p, ccr4) == tim1_p::ccr4_r::Offset);
static_assert(offsetof(tim1_p, bdtr) == tim1_p::bdtr_r::Offset);
static_assert(offsetof(tim1_p, ccr5) == tim1_p::ccr5_r::Offset);
static_assert(offsetof(tim1_p, ccr6) == tim1_p::ccr6_r::Offset);
static_assert(offsetof(tim1_p, ccmr3_output) == tim1_p::ccmr3_output_r::Offset);
static_assert(offsetof(tim1_p, dtr2) == tim1_p::dtr2_r::Offset);
static_assert(offsetof(tim1_p, ecr) == tim1_p::ecr_r::Offset);
static_assert(offsetof(tim1_p, tisel) == tim1_p::tisel_r::Offset);
static_assert(offsetof(tim1_p, af1) == tim1_p::af1_r::Offset);
static_assert(offsetof(tim1_p, af2) == tim1_p::af2_r::Offset);
static_assert(offsetof(tim1_p, dcr) == tim1_p::dcr_r::Offset);
static_assert(offsetof(tim1_p, dmar) == tim1_p::dmar_r::Offset);

/**
 * Advanced-timers
 */
class tim2_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Dithering Enable
 */
class dithen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dithen_f(bool value = true) : m_value(value) {}
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
 * UIF status bit remapping
 */
class uifremap_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr uifremap_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto dithen() const -> dithen_f {return dithen_f((m_value & dithen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uifremap() const -> uifremap_f {return uifremap_f((m_value & uifremap_f::Mask) != 0);}
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
 * Master mode selection - bit 3
 */
class mms_3_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr mms_3_f(bool value = true) : m_value(value) {}
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
 * Master mode selection 2
 */
class mms2_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mms2_f(uint8_t value) : m_value(value & Range) {}
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
 * Output Idle state 6 (OC6 output)
 */
class ois6_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ois6_f(bool value = true) : m_value(value) {}
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
 * Output Idle state 5 (OC5 output)
 */
class ois5_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ois5_f(bool value = true) : m_value(value) {}
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
 * Output Idle state 4 (OC4N output)
 */
class ois4n_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ois4n_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto mms_3() const -> mms_3_f {return mms_3_f((m_value & mms_3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mms2() const -> mms2_f {return mms2_f(static_cast<uint8_t>(m_value >> mms2_f::Offset));}
	[[nodiscard]] constexpr auto ois6() const -> ois6_f {return ois6_f((m_value & ois6_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois5() const -> ois5_f {return ois5_f((m_value & ois5_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ois4n() const -> ois4n_f {return ois4n_f((m_value & ois4n_f::Mask) != 0);}
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

	template<std::size_t Index> struct ois_f { static_assert(Index == 6 || Index == 5 || Index == 4 || Index == 3 || Index == 2 || Index == 1); };
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
 * SMS Preload Source
 */
class smsps_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smsps_f(bool value = true) : m_value(value) {}
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
 * SMS Preload Enable
 */
class smspe_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr smspe_f(bool value = true) : m_value(value) {}
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
 * Trigger selection - bit 4:3
 */
class ts_4_3_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ts_4_3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator smcr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(smcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<smcr_r>() const {return ClearSet<smcr_r>(Mask, *this);}
	constexpr auto operator|(smcr_r other) const -> smcr_r { return static_cast<smcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<smcr_r> other) const -> ClearSet<smcr_r> {return ClearSet<smcr_r>(smcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Slave mode selection - bit 3
 */
class sms_3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sms_3_f(bool value = true) : m_value(value) {}
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
 * OCREF clear selection
 */
class occs_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr occs_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto smsps() const -> smsps_f {return smsps_f((m_value & smsps_f::Mask) != 0);}
	[[nodiscard]] constexpr auto smspe() const -> smspe_f {return smspe_f((m_value & smspe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ts_4_3() const -> ts_4_3_f {return ts_4_3_f(static_cast<uint8_t>(m_value >> ts_4_3_f::Offset));}
	[[nodiscard]] constexpr auto sms_3() const -> sms_3_f {return sms_3_f((m_value & sms_3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto etp() const -> etp_f {return etp_f((m_value & etp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ece() const -> ece_f {return ece_f((m_value & ece_f::Mask) != 0);}
	[[nodiscard]] constexpr auto etps() const -> etps_f {return etps_f(static_cast<uint8_t>(m_value >> etps_f::Offset));}
	[[nodiscard]] constexpr auto etf() const -> etf_f {return etf_f(static_cast<uint8_t>(m_value >> etf_f::Offset));}
	[[nodiscard]] constexpr auto msm() const -> msm_f {return msm_f((m_value & msm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ts() const -> ts_f {return ts_f(static_cast<uint8_t>(m_value >> ts_f::Offset));}
	[[nodiscard]] constexpr auto occs() const -> occs_f {return occs_f((m_value & occs_f::Mask) != 0);}
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
 * Transition Error interrupt enable
 */
class terrie_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr terrie_f(bool value = true) : m_value(value) {}
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
 * Index Error interrupt enable
 */
class ierrie_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ierrie_f(bool value = true) : m_value(value) {}
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
 * Direction Change interrupt enable
 */
class dirie_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dirie_f(bool value = true) : m_value(value) {}
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
 * Index interrupt enable
 */
class idxie_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr idxie_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto terrie() const -> terrie_f {return terrie_f((m_value & terrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ierrie() const -> ierrie_f {return ierrie_f((m_value & ierrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dirie() const -> dirie_f {return dirie_f((m_value & dirie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idxie() const -> idxie_f {return idxie_f((m_value & idxie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tde() const -> tde_f {return tde_f((m_value & tde_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comde() const -> comde_f {return comde_f((m_value & comde_f::Mask) != 0);}
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
	[[nodiscard]] constexpr auto bie() const -> bie_f {return bie_f((m_value & bie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto comie() const -> comie_f {return comie_f((m_value & comie_f::Mask) != 0);}

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
 * Transition Error interrupt flag
 */
class terrf_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr terrf_f(bool value = true) : m_value(value) {}
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
 * Index Error interrupt flag
 */
class ierrf_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ierrf_f(bool value = true) : m_value(value) {}
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
 * Direction Change interrupt flag
 */
class dirf_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dirf_f(bool value = true) : m_value(value) {}
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
 * Index interrupt flag
 */
class idxf_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr idxf_f(bool value = true) : m_value(value) {}
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
 * Compare 6 interrupt flag
 */
class cc6if_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc6if_f(bool value = true) : m_value(value) {}
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
 * Compare 5 interrupt flag
 */
class cc5if_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc5if_f(bool value = true) : m_value(value) {}
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
 * System Break interrupt flag
 */
class sbif_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sbif_f(bool value = true) : m_value(value) {}
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
 * Break 2 interrupt flag
 */
class b2if_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr b2if_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto terrf() const -> terrf_f {return terrf_f((m_value & terrf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ierrf() const -> ierrf_f {return ierrf_f((m_value & ierrf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dirf() const -> dirf_f {return dirf_f((m_value & dirf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idxf() const -> idxf_f {return idxf_f((m_value & idxf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc6if() const -> cc6if_f {return cc6if_f((m_value & cc6if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc5if() const -> cc5if_f {return cc5if_f((m_value & cc5if_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sbif() const -> sbif_f {return sbif_f((m_value & sbif_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4of() const -> cc4of_f {return cc4of_f((m_value & cc4of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc3of() const -> cc3of_f {return cc3of_f((m_value & cc3of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc2of() const -> cc2of_f {return cc2of_f((m_value & cc2of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc1of() const -> cc1of_f {return cc1of_f((m_value & cc1of_f::Mask) != 0);}
	[[nodiscard]] constexpr auto b2if() const -> b2if_f {return b2if_f((m_value & b2if_f::Mask) != 0);}
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
 * Break 2 generation
 */
class b2g_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr b2g_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto b2g() const -> b2g_f {return b2g_f((m_value & b2g_f::Mask) != 0);}
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
 * Output Compare 2 mode - bit 3
 */
class oc2m_3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc2m_3_f(bool value = true) : m_value(value) {}
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
 * Output Compare 1 mode - bit 3
 */
class oc1m_3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc1m_3_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto oc2m_3() const -> oc2m_3_f {return oc2m_3_f((m_value & oc2m_3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc1m_3() const -> oc1m_3_f {return oc1m_3_f((m_value & oc1m_3_f::Mask) != 0);}
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
class ic2psc_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ic2psc_f(uint8_t value) : m_value(value & Range) {}
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
	[[nodiscard]] constexpr auto ic2psc() const -> ic2psc_f {return ic2psc_f(static_cast<uint8_t>(m_value >> ic2psc_f::Offset));}
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
 * Output Compare 4 mode - bit 3
 */
class oc4m_3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc4m_3_f(bool value = true) : m_value(value) {}
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
 * Output Compare 3 mode - bit 3
 */
class oc3m_3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc3m_3_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto oc4m_3() const -> oc4m_3_f {return oc4m_3_f((m_value & oc4m_3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc3m_3() const -> oc3m_3_f {return oc3m_3_f((m_value & oc3m_3_f::Mask) != 0);}
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
 * Capture/Compare 6 output polarity
 */
class cc6p_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc6p_f(bool value = true) : m_value(value) {}
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
 * Capture/Compare 6 output enable
 */
class cc6e_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc6e_f(bool value = true) : m_value(value) {}
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
 * Capture/Compare 5 output polarity
 */
class cc5p_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc5p_f(bool value = true) : m_value(value) {}
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
 * Capture/Compare 5 output enable
 */
class cc5e_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cc5e_f(bool value = true) : m_value(value) {}
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
 * Capture/Compare 4 complementary output polarity
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
 * Capture/Compare 4 complementary output enable
 */
class cc4ne_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cc4ne_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto cc6p() const -> cc6p_f {return cc6p_f((m_value & cc6p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc6e() const -> cc6e_f {return cc6e_f((m_value & cc6e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc5p() const -> cc5p_f {return cc5p_f((m_value & cc5p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc5e() const -> cc5e_f {return cc5e_f((m_value & cc5e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4np() const -> cc4np_f {return cc4np_f((m_value & cc4np_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cc4ne() const -> cc4ne_f {return cc4ne_f((m_value & cc4ne_f::Mask) != 0);}
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
 * UIFCPY
 */
class uifcpy_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uifcpy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cnt_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cnt_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

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

	[[nodiscard]] constexpr auto uifcpy() const -> uifcpy_f {return uifcpy_f((m_value & uifcpy_f::Mask) != 0);}
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
	static constexpr uint32_t ResetValue = 0b11111111111111111111111111111111; // 4294967295 0xFFFFFFFF

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
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rep_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator rcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rcr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rcr_r>() const {return ClearSet<rcr_r>(Mask, *this);}
	constexpr auto operator|(rcr_r other) const -> rcr_r { return static_cast<rcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rcr_r> other) const -> ClearSet<rcr_r> {return ClearSet<rcr_r>(rcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rep() const -> rep_f {return rep_f(static_cast<uint16_t>(m_value >> rep_f::Offset));}

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
 * break and dead-time register
 */
class bdtr_r {
public:

/**
 * BK2ID
 */
class bk2id_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bk2id_f(bool value = true) : m_value(value) {}
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
 * BKBID
 */
class bkbid_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bkbid_f(bool value = true) : m_value(value) {}
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
 * BK2DSRM
 */
class bk2dsrm_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bk2dsrm_f(bool value = true) : m_value(value) {}
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
 * BKDSRM
 */
class bkdsrm_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bkdsrm_f(bool value = true) : m_value(value) {}
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
 * Break 2 polarity
 */
class bk2p_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bk2p_f(bool value = true) : m_value(value) {}
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
 * Break 2 Enable
 */
class bk2e_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bk2e_f(bool value = true) : m_value(value) {}
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
 * Break 2 filter
 */
class bk2f_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bk2f_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bdtr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bdtr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Break filter
 */
class bkf_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkf_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator bdtr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bdtr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bdtr_r>() const {return ClearSet<bdtr_r>(Mask, *this);}
	constexpr auto operator|(bdtr_r other) const -> bdtr_r { return static_cast<bdtr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bdtr_r> other) const -> ClearSet<bdtr_r> {return ClearSet<bdtr_r>(bdtr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

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

	[[nodiscard]] constexpr auto bk2id() const -> bk2id_f {return bk2id_f((m_value & bk2id_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkbid() const -> bkbid_f {return bkbid_f((m_value & bkbid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2dsrm() const -> bk2dsrm_f {return bk2dsrm_f((m_value & bk2dsrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkdsrm() const -> bkdsrm_f {return bkdsrm_f((m_value & bkdsrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2p() const -> bk2p_f {return bk2p_f((m_value & bk2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2e() const -> bk2e_f {return bk2e_f((m_value & bk2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2f() const -> bk2f_f {return bk2f_f(static_cast<uint8_t>(m_value >> bk2f_f::Offset));}
	[[nodiscard]] constexpr auto bkf() const -> bkf_f {return bkf_f(static_cast<uint8_t>(m_value >> bkf_f::Offset));}
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
/**
 * capture/compare register 4
 */
class ccr5_r {
public:

/**
 * Capture/Compare value
 */
class ccr5_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr5_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr5_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr5_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Group Channel 5 and Channel 1
 */
class gc5c1_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gc5c1_f(bool value = true) : m_value(value) {}
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
 * Group Channel 5 and Channel 2
 */
class gc5c2_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gc5c2_f(bool value = true) : m_value(value) {}
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
 * Group Channel 5 and Channel 3
 */
class gc5c3_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr gc5c3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccr5_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccr5_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr5_r>() const {return ClearSet<ccr5_r>(Mask, *this);}
	constexpr auto operator|(ccr5_r other) const -> ccr5_r { return static_cast<ccr5_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr5_r> other) const -> ClearSet<ccr5_r> {return ClearSet<ccr5_r>(ccr5_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ccr5() const -> ccr5_f {return ccr5_f(static_cast<uint16_t>(m_value >> ccr5_f::Offset));}
	[[nodiscard]] constexpr auto gc5c1() const -> gc5c1_f {return gc5c1_f((m_value & gc5c1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gc5c2() const -> gc5c2_f {return gc5c2_f((m_value & gc5c2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gc5c3() const -> gc5c3_f {return gc5c3_f((m_value & gc5c3_f::Mask) != 0);}

	template<std::size_t Index> struct gc5c_f { static_assert(Index == 1 || Index == 2 || Index == 3); };
	template<std::size_t Index> using gc5c_v = typename gc5c_f<Index>::type;
	template<std::size_t Index> constexpr auto gc5c() const { return gc5c_v<Index>::get(*this); }

	constexpr ccr5_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr5_r other) const -> ccr5_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr5_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare register 4
 */
class ccr6_r {
public:

/**
 * Capture/Compare value
 */
class ccr6_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ccr6_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ccr6_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccr6_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccr6_r>() const {return ClearSet<ccr6_r>(Mask, *this);}
	constexpr auto operator|(ccr6_r other) const -> ccr6_r { return static_cast<ccr6_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccr6_r> other) const -> ClearSet<ccr6_r> {return ClearSet<ccr6_r>(ccr6_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ccr6() const -> ccr6_f {return ccr6_f(static_cast<uint16_t>(m_value >> ccr6_f::Offset));}

	constexpr ccr6_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccr6_r other) const -> ccr6_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccr6_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * capture/compare mode register 2 (output mode)
 */
class ccmr3_output_r {
public:

/**
 * Output Compare 6 mode bit 3
 */
class oc6m_bit3_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr oc6m_bit3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output Compare 5 mode bit 3
 */
class oc5m_bit3_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr oc5m_bit3_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ccmr3_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output compare 6 clear enable
 */
class oc6ce_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc6ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 6 mode
 */
class oc6m_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr oc6m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ccmr3_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output compare 6 preload enable
 */
class oc6pe_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc6pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 6 fast enable
 */
class oc6fe_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oc6fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 5 clear enable
 */
class oc5ce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc5ce_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 5 mode
 */
class oc5m_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr oc5m_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ccmr3_output_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Output compare 5 preload enable
 */
class oc5pe_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc5pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Output compare 5 fast enable
 */
class oc5fe_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr oc5fe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ccmr3_output_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ccmr3_output_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ccmr3_output_r>() const {return ClearSet<ccmr3_output_r>(Mask, *this);}
	constexpr auto operator|(ccmr3_output_r other) const -> ccmr3_output_r { return static_cast<ccmr3_output_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ccmr3_output_r> other) const -> ClearSet<ccmr3_output_r> {return ClearSet<ccmr3_output_r>(ccmr3_output_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto oc6m_bit3() const -> oc6m_bit3_f {return oc6m_bit3_f((m_value & oc6m_bit3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc5m_bit3() const -> oc5m_bit3_f {return oc5m_bit3_f(static_cast<uint8_t>(m_value >> oc5m_bit3_f::Offset));}
	[[nodiscard]] constexpr auto oc6ce() const -> oc6ce_f {return oc6ce_f((m_value & oc6ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc6m() const -> oc6m_f {return oc6m_f(static_cast<uint8_t>(m_value >> oc6m_f::Offset));}
	[[nodiscard]] constexpr auto oc6pe() const -> oc6pe_f {return oc6pe_f((m_value & oc6pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc6fe() const -> oc6fe_f {return oc6fe_f((m_value & oc6fe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc5ce() const -> oc5ce_f {return oc5ce_f((m_value & oc5ce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc5m() const -> oc5m_f {return oc5m_f(static_cast<uint8_t>(m_value >> oc5m_f::Offset));}
	[[nodiscard]] constexpr auto oc5pe() const -> oc5pe_f {return oc5pe_f((m_value & oc5pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto oc5fe() const -> oc5fe_f {return oc5fe_f((m_value & oc5fe_f::Mask) != 0);}

	constexpr ccmr3_output_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ccmr3_output_r other) const -> ccmr3_output_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ccmr3_output_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * timer Deadtime Register 2
 */
class dtr2_r {
public:

/**
 * Deadtime Preload Enable
 */
class dtpe_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dtpe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dtr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dtr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Deadtime Asymmetric Enable
 */
class dtae_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dtae_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dtr2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dtr2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Dead-time falling edge generator setup
 */
class dtgf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dtgf_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dtr2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dtr2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dtr2_r>() const {return ClearSet<dtr2_r>(Mask, *this);}
	constexpr auto operator|(dtr2_r other) const -> dtr2_r { return static_cast<dtr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dtr2_r> other) const -> ClearSet<dtr2_r> {return ClearSet<dtr2_r>(dtr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dtpe() const -> dtpe_f {return dtpe_f((m_value & dtpe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtae() const -> dtae_f {return dtae_f((m_value & dtae_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dtgf() const -> dtgf_f {return dtgf_f(static_cast<uint8_t>(m_value >> dtgf_f::Offset));}

	constexpr dtr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dtr2_r other) const -> dtr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dtr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMA control register
 */
class ecr_r {
public:

/**
 * Index Enable
 */
class ie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ecr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ecr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Index Direction
 */
class idir_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr idir_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Index Blanking
 */
class iblk_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr iblk_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * First Index
 */
class fidx_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fidx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ecr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ecr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Index Positioning
 */
class ipos_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ipos_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Pulse width
 */
class pw_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pw_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Pulse Width prescaler
 */
class pwprsc_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pwprsc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ecr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ecr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ecr_r>() const {return ClearSet<ecr_r>(Mask, *this);}
	constexpr auto operator|(ecr_r other) const -> ecr_r { return static_cast<ecr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ecr_r> other) const -> ClearSet<ecr_r> {return ClearSet<ecr_r>(ecr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ie() const -> ie_f {return ie_f((m_value & ie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idir() const -> idir_f {return idir_f(static_cast<uint8_t>(m_value >> idir_f::Offset));}
	[[nodiscard]] constexpr auto iblk() const -> iblk_f {return iblk_f(static_cast<uint8_t>(m_value >> iblk_f::Offset));}
	[[nodiscard]] constexpr auto fidx() const -> fidx_f {return fidx_f((m_value & fidx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ipos() const -> ipos_f {return ipos_f(static_cast<uint8_t>(m_value >> ipos_f::Offset));}
	[[nodiscard]] constexpr auto pw() const -> pw_f {return pw_f(static_cast<uint8_t>(m_value >> pw_f::Offset));}
	[[nodiscard]] constexpr auto pwprsc() const -> pwprsc_f {return pwprsc_f(static_cast<uint8_t>(m_value >> pwprsc_f::Offset));}

	constexpr ecr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ecr_r other) const -> ecr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ecr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 88;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM timer input selection register
 */
class tisel_r {
public:

/**
 * TI1[0] to TI1[15] input selection
 */
class ti1sel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ti1sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TI2[0] to TI2[15] input selection
 */
class ti2sel_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ti2sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TI3[0] to TI3[15] input selection
 */
class ti3sel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ti3sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * TI4[0] to TI4[15] input selection
 */
class ti4sel_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ti4sel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tisel_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tisel_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tisel_r>() const {return ClearSet<tisel_r>(Mask, *this);}
	constexpr auto operator|(tisel_r other) const -> tisel_r { return static_cast<tisel_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tisel_r> other) const -> ClearSet<tisel_r> {return ClearSet<tisel_r>(tisel_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto ti1sel() const -> ti1sel_f {return ti1sel_f(static_cast<uint8_t>(m_value >> ti1sel_f::Offset));}
	[[nodiscard]] constexpr auto ti2sel() const -> ti2sel_f {return ti2sel_f(static_cast<uint8_t>(m_value >> ti2sel_f::Offset));}
	[[nodiscard]] constexpr auto ti3sel() const -> ti3sel_f {return ti3sel_f(static_cast<uint8_t>(m_value >> ti3sel_f::Offset));}
	[[nodiscard]] constexpr auto ti4sel() const -> ti4sel_f {return ti4sel_f(static_cast<uint8_t>(m_value >> ti4sel_f::Offset));}

	constexpr tisel_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tisel_r other) const -> tisel_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tisel_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM alternate function option register 1
 */
class af1_r {
public:

/**
 * ETR source selection
 */
class etrsel_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr etrsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator af1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(af1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRK COMP4 input polarity
 */
class bkcmp4p_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp4p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP3 input polarity
 */
class bkcmp3p_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp3p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP2 input polarity
 */
class bkcmp2p_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP1 input polarity
 */
class bkcmp1p_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkcmp1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK BKIN input polarity
 */
class bkinp_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bkinp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP7 enable
 */
class bkcmp7e_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp7e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP6 enable
 */
class bkcmp6e_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp6e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP5 enable
 */
class bkcmp5e_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp5e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP4 enable
 */
class bkcmp4e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP3 enable
 */
class bkcmp3e_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP2 enable
 */
class bkcmp2e_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK COMP1 enable
 */
class bkcmp1e_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkcmp1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK BKIN input enable
 */
class bkine_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkine_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af1_r>() const {return ClearSet<af1_r>(Mask, *this);}
	constexpr auto operator|(af1_r other) const -> af1_r { return static_cast<af1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af1_r> other) const -> ClearSet<af1_r> {return ClearSet<af1_r>(af1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto etrsel() const -> etrsel_f {return etrsel_f(static_cast<uint8_t>(m_value >> etrsel_f::Offset));}
	[[nodiscard]] constexpr auto bkcmp4p() const -> bkcmp4p_f {return bkcmp4p_f((m_value & bkcmp4p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp3p() const -> bkcmp3p_f {return bkcmp3p_f((m_value & bkcmp3p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp2p() const -> bkcmp2p_f {return bkcmp2p_f((m_value & bkcmp2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp1p() const -> bkcmp1p_f {return bkcmp1p_f((m_value & bkcmp1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkinp() const -> bkinp_f {return bkinp_f((m_value & bkinp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp7e() const -> bkcmp7e_f {return bkcmp7e_f((m_value & bkcmp7e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp6e() const -> bkcmp6e_f {return bkcmp6e_f((m_value & bkcmp6e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp5e() const -> bkcmp5e_f {return bkcmp5e_f((m_value & bkcmp5e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp4e() const -> bkcmp4e_f {return bkcmp4e_f((m_value & bkcmp4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp3e() const -> bkcmp3e_f {return bkcmp3e_f((m_value & bkcmp3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp2e() const -> bkcmp2e_f {return bkcmp2e_f((m_value & bkcmp2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkcmp1e() const -> bkcmp1e_f {return bkcmp1e_f((m_value & bkcmp1e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkine() const -> bkine_f {return bkine_f((m_value & bkine_f::Mask) != 0);}

	constexpr af1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(af1_r other) const -> af1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> af1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * TIM alternate function option register 2
 */
class af2_r {
public:

/**
 * OCREF_CLR source selection
 */
class ocrsel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ocrsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator af2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(af2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BRK2 COMP4 input polarity
 */
class bk2cmp4p_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bk2cmp4p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP3 input polarity
 */
class bk2cmp3p_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bk2cmp3p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP2 input polarity
 */
class bk2cmp2p_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bk2cmp2p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP1 input polarity
 */
class bk2cmp1p_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bk2cmp1p_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 BKIN input polarity
 */
class bk2inp_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bk2inp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP7 enable
 */
class bk2cmp7e_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp7e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP6 enable
 */
class bk2cmp6e_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp6e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP5 enable
 */
class bk2cmp5e_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp5e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP4 enable
 */
class bk2cmp4e_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp4e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP3 enable
 */
class bk2cmp3e_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp3e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP2 enable
 */
class bk2cmp2e_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK2 COMP1 enable
 */
class bk2cmp1e_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bk2cmp1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * BRK BKIN input enable
 */
class bkine_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bkine_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator af2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(af2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<af2_r>() const {return ClearSet<af2_r>(Mask, *this);}
	constexpr auto operator|(af2_r other) const -> af2_r { return static_cast<af2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<af2_r> other) const -> ClearSet<af2_r> {return ClearSet<af2_r>(af2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ocrsel() const -> ocrsel_f {return ocrsel_f(static_cast<uint8_t>(m_value >> ocrsel_f::Offset));}
	[[nodiscard]] constexpr auto bk2cmp4p() const -> bk2cmp4p_f {return bk2cmp4p_f((m_value & bk2cmp4p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp3p() const -> bk2cmp3p_f {return bk2cmp3p_f((m_value & bk2cmp3p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp2p() const -> bk2cmp2p_f {return bk2cmp2p_f((m_value & bk2cmp2p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp1p() const -> bk2cmp1p_f {return bk2cmp1p_f((m_value & bk2cmp1p_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2inp() const -> bk2inp_f {return bk2inp_f((m_value & bk2inp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp7e() const -> bk2cmp7e_f {return bk2cmp7e_f((m_value & bk2cmp7e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp6e() const -> bk2cmp6e_f {return bk2cmp6e_f((m_value & bk2cmp6e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp5e() const -> bk2cmp5e_f {return bk2cmp5e_f((m_value & bk2cmp5e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp4e() const -> bk2cmp4e_f {return bk2cmp4e_f((m_value & bk2cmp4e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp3e() const -> bk2cmp3e_f {return bk2cmp3e_f((m_value & bk2cmp3e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp2e() const -> bk2cmp2e_f {return bk2cmp2e_f((m_value & bk2cmp2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bk2cmp1e() const -> bk2cmp1e_f {return bk2cmp1e_f((m_value & bk2cmp1e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkine() const -> bkine_f {return bkine_f((m_value & bkine_f::Mask) != 0);}

	constexpr af2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(af2_r other) const -> af2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> af2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 100;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * control register
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

	static constexpr std::size_t Offset = 988;
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
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dmab_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator dmar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dmar_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dmar_r>() const {return ClearSet<dmar_r>(Mask, *this);}
	constexpr auto operator|(dmar_r other) const -> dmar_r { return static_cast<dmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dmar_r> other) const -> ClearSet<dmar_r> {return ClearSet<dmar_r>(dmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto dmab() const -> dmab_f {return dmab_f(static_cast<uint32_t>(m_value >> dmab_f::Offset));}

	constexpr dmar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dmar_r other) const -> dmar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dmar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 992;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	template<std::size_t Index> struct ccr_r { static_assert(Index == 1 || Index == 2 || Index == 3 || Index == 4 || Index == 5 || Index == 6); };
	template<std::size_t Index> using ccr_v = typename ccr_r<Index>::type;
	template<std::size_t Index> constexpr auto& ccr() { }

	template<std::size_t Index> struct af_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using af_v = typename af_r<Index>::type;
	template<std::size_t Index> constexpr auto& af() { }

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
	Memory<uint32_t,ccr5_r> ccr5;
	Memory<uint32_t,ccr6_r> ccr6;
	Memory<uint32_t,ccmr3_output_r> ccmr3_output;
	Memory<uint32_t,dtr2_r> dtr2;
	Memory<uint32_t,ecr_r> ecr;
	Memory<uint32_t,tisel_r> tisel;
	Memory<uint32_t,af1_r> af1;
	Memory<uint32_t,af2_r> af2;
	Padding<884> _p104;
	Memory<uint32_t,dcr_r> dcr;
	Memory<uint32_t,dmar_r> dmar;
};

template<> struct tim2_p::cr2_r::ois_f<6> { using type = tim2_p::cr2_r::ois6_f; };
template<> struct tim2_p::cr2_r::ois_f<5> { using type = tim2_p::cr2_r::ois5_f; };
template<> struct tim2_p::cr2_r::ois_f<4> { using type = tim2_p::cr2_r::ois4_f; };
template<> struct tim2_p::cr2_r::ois_f<3> { using type = tim2_p::cr2_r::ois3_f; };
template<> struct tim2_p::cr2_r::ois_f<2> { using type = tim2_p::cr2_r::ois2_f; };
template<> struct tim2_p::cr2_r::ois_f<1> { using type = tim2_p::cr2_r::ois1_f; };

template<> struct tim2_p::ccr5_r::gc5c_f<1> { using type = tim2_p::ccr5_r::gc5c1_f; };
template<> struct tim2_p::ccr5_r::gc5c_f<2> { using type = tim2_p::ccr5_r::gc5c2_f; };
template<> struct tim2_p::ccr5_r::gc5c_f<3> { using type = tim2_p::ccr5_r::gc5c3_f; };

template<> constexpr auto& tim2_p::cr<1>() { return cr1; }
template<> constexpr auto& tim2_p::cr<2>() { return cr2; }

template<> struct tim2_p::cr_r<1> { using type = tim2_p::cr1_r; };
template<> struct tim2_p::cr_r<2> { using type = tim2_p::cr2_r; };

template<> constexpr auto& tim2_p::ccr<1>() { return ccr1; }
template<> constexpr auto& tim2_p::ccr<2>() { return ccr2; }
template<> constexpr auto& tim2_p::ccr<3>() { return ccr3; }
template<> constexpr auto& tim2_p::ccr<4>() { return ccr4; }
template<> constexpr auto& tim2_p::ccr<5>() { return ccr5; }
template<> constexpr auto& tim2_p::ccr<6>() { return ccr6; }

template<> struct tim2_p::ccr_r<1> { using type = tim2_p::ccr1_r; };
template<> struct tim2_p::ccr_r<2> { using type = tim2_p::ccr2_r; };
template<> struct tim2_p::ccr_r<3> { using type = tim2_p::ccr3_r; };
template<> struct tim2_p::ccr_r<4> { using type = tim2_p::ccr4_r; };
template<> struct tim2_p::ccr_r<5> { using type = tim2_p::ccr5_r; };
template<> struct tim2_p::ccr_r<6> { using type = tim2_p::ccr6_r; };

template<> constexpr auto& tim2_p::af<1>() { return af1; }
template<> constexpr auto& tim2_p::af<2>() { return af2; }

template<> struct tim2_p::af_r<1> { using type = tim2_p::af1_r; };
template<> struct tim2_p::af_r<2> { using type = tim2_p::af2_r; };

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
static_assert(offsetof(tim2_p, rcr) == tim2_p::rcr_r::Offset);
static_assert(offsetof(tim2_p, ccr1) == tim2_p::ccr1_r::Offset);
static_assert(offsetof(tim2_p, ccr2) == tim2_p::ccr2_r::Offset);
static_assert(offsetof(tim2_p, ccr3) == tim2_p::ccr3_r::Offset);
static_assert(offsetof(tim2_p, ccr4) == tim2_p::ccr4_r::Offset);
static_assert(offsetof(tim2_p, bdtr) == tim2_p::bdtr_r::Offset);
static_assert(offsetof(tim2_p, ccr5) == tim2_p::ccr5_r::Offset);
static_assert(offsetof(tim2_p, ccr6) == tim2_p::ccr6_r::Offset);
static_assert(offsetof(tim2_p, ccmr3_output) == tim2_p::ccmr3_output_r::Offset);
static_assert(offsetof(tim2_p, dtr2) == tim2_p::dtr2_r::Offset);
static_assert(offsetof(tim2_p, ecr) == tim2_p::ecr_r::Offset);
static_assert(offsetof(tim2_p, tisel) == tim2_p::tisel_r::Offset);
static_assert(offsetof(tim2_p, af1) == tim2_p::af1_r::Offset);
static_assert(offsetof(tim2_p, af2) == tim2_p::af2_r::Offset);
static_assert(offsetof(tim2_p, dcr) == tim2_p::dcr_r::Offset);
static_assert(offsetof(tim2_p, dmar) == tim2_p::dmar_r::Offset);

/**
 * Basic-timers
 */
class tim6_p {
public:
/**
 * control register 1
 */
class cr1_r {
public:

/**
 * Dithering Enable
 */
class dithen_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dithen_f(bool value = true) : m_value(value) {}
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
 * UIF status bit remapping
 */
class uifremap_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr uifremap_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto dithen() const -> dithen_f {return dithen_f((m_value & dithen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto uifremap() const -> uifremap_f {return uifremap_f((m_value & uifremap_f::Mask) != 0);}
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
 * DMA/Interrupt enable register
 */
class dier_r {
public:

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

	[[nodiscard]] constexpr auto ude() const -> ude_f {return ude_f((m_value & ude_f::Mask) != 0);}
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
 * counter
 */
class cnt_r {
public:

/**
 * UIF Copy
 */
class uifcpy_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr uifcpy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cnt_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cnt_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cnt_r>() const {return ClearSet<cnt_r>(Mask, *this);}
	constexpr auto operator|(cnt_r other) const -> cnt_r { return static_cast<cnt_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cnt_r> other) const -> ClearSet<cnt_r> {return ClearSet<cnt_r>(cnt_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Low counter value
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

	[[nodiscard]] constexpr auto uifcpy() const -> uifcpy_f {return uifcpy_f((m_value & uifcpy_f::Mask) != 0);}
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
 * Low Auto-reload value
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
	static constexpr uint32_t ResetValue = 0b1111111111111111; // 65535 0xFFFF

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct cr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cr_v = typename cr_r<Index>::type;
	template<std::size_t Index> constexpr auto& cr() { }

	Memory<uint32_t,cr1_r> cr1;
	Memory<uint32_t,cr2_r> cr2;
	Padding<4> _p8;
	Memory<uint32_t,dier_r> dier;
	Memory<uint32_t,sr_r> sr;
	WriteOnlyMemory<uint32_t,egr_r> egr;
	Padding<12> _p24;
	Memory<uint32_t,cnt_r> cnt;
	Memory<uint32_t,psc_r> psc;
	Memory<uint32_t,arr_r> arr;
};

template<> constexpr auto& tim6_p::cr<1>() { return cr1; }
template<> constexpr auto& tim6_p::cr<2>() { return cr2; }

template<> struct tim6_p::cr_r<1> { using type = tim6_p::cr1_r; };
template<> struct tim6_p::cr_r<2> { using type = tim6_p::cr2_r; };

static_assert(std::is_standard_layout_v<tim6_p>);
static_assert(offsetof(tim6_p, cr1) == tim6_p::cr1_r::Offset);
static_assert(offsetof(tim6_p, cr2) == tim6_p::cr2_r::Offset);
static_assert(offsetof(tim6_p, dier) == tim6_p::dier_r::Offset);
static_assert(offsetof(tim6_p, sr) == tim6_p::sr_r::Offset);
static_assert(offsetof(tim6_p, egr) == tim6_p::egr_r::Offset);
static_assert(offsetof(tim6_p, cnt) == tim6_p::cnt_r::Offset);
static_assert(offsetof(tim6_p, psc) == tim6_p::psc_r::Offset);
static_assert(offsetof(tim6_p, arr) == tim6_p::arr_r::Offset);

inline tim15_p& tim15 = *reinterpret_cast<tim15_p*>(0x40014000);
inline tim16_p& tim16 = *reinterpret_cast<tim16_p*>(0x40014400);
inline tim16_p& tim17 = *reinterpret_cast<tim16_p*>(0x40014800);
inline tim1_p& tim1 = *reinterpret_cast<tim1_p*>(0x40012C00);
inline tim1_p& tim20 = *reinterpret_cast<tim1_p*>(0x40015000);
inline tim1_p& tim8 = *reinterpret_cast<tim1_p*>(0x40013400);
inline tim2_p& tim2 = *reinterpret_cast<tim2_p*>(0x40000000);
inline tim2_p& tim3 = *reinterpret_cast<tim2_p*>(0x40000400);
inline tim2_p& tim4 = *reinterpret_cast<tim2_p*>(0x40000800);
inline tim2_p& tim5 = *reinterpret_cast<tim2_p*>(0x40000C00);
inline tim6_p& tim6 = *reinterpret_cast<tim6_p*>(0x40001000);
inline tim6_p& tim7 = *reinterpret_cast<tim6_p*>(0x40001400);

} // STM32G473XX

