#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Voltage reference buffer
 */
class vrefbuf_p {
public:
/**
 * VREF_BUF Control and Status Register
 */
class vrefbuf_csr_r {
public:

/**
 * Enable Voltage Reference
 */
class envr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr envr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator vrefbuf_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(vrefbuf_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<vrefbuf_csr_r>() const {return ClearSet<vrefbuf_csr_r>(Mask, *this);}
	constexpr auto operator|(vrefbuf_csr_r other) const -> vrefbuf_csr_r { return static_cast<vrefbuf_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<vrefbuf_csr_r> other) const -> ClearSet<vrefbuf_csr_r> {return ClearSet<vrefbuf_csr_r>(vrefbuf_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * High impedence mode for the VREF_BUF
 */
class hiz_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hiz_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator vrefbuf_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(vrefbuf_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<vrefbuf_csr_r>() const {return ClearSet<vrefbuf_csr_r>(Mask, *this);}
	constexpr auto operator|(vrefbuf_csr_r other) const -> vrefbuf_csr_r { return static_cast<vrefbuf_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<vrefbuf_csr_r> other) const -> ClearSet<vrefbuf_csr_r> {return ClearSet<vrefbuf_csr_r>(vrefbuf_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Voltage reference buffer ready
 */
class vrr_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr vrr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator vrefbuf_csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(vrefbuf_csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<vrefbuf_csr_r>() const {return ClearSet<vrefbuf_csr_r>(Mask, *this);}
	constexpr auto operator|(vrefbuf_csr_r other) const -> vrefbuf_csr_r { return static_cast<vrefbuf_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<vrefbuf_csr_r> other) const -> ClearSet<vrefbuf_csr_r> {return ClearSet<vrefbuf_csr_r>(vrefbuf_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Voltage reference scale
 */
class vrs_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr vrs_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator vrefbuf_csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(vrefbuf_csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<vrefbuf_csr_r>() const {return ClearSet<vrefbuf_csr_r>(Mask, *this);}
	constexpr auto operator|(vrefbuf_csr_r other) const -> vrefbuf_csr_r { return static_cast<vrefbuf_csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<vrefbuf_csr_r> other) const -> ClearSet<vrefbuf_csr_r> {return ClearSet<vrefbuf_csr_r>(vrefbuf_csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto envr() const -> envr_f {return envr_f((m_value & envr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hiz() const -> hiz_f {return hiz_f((m_value & hiz_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vrr() const -> vrr_f {return vrr_f((m_value & vrr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto vrs() const -> vrs_f {return vrs_f(static_cast<uint8_t>(m_value >> vrs_f::Offset));}

	constexpr vrefbuf_csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(vrefbuf_csr_r other) const -> vrefbuf_csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> vrefbuf_csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b10; // 2 0x2

private:
	uint32_t m_value;
};
/**
 * VREF_BUF Calibration Control Register
 */
class vrefbuf_ccr_r {
public:

/**
 * Trimming code
 */
class trim_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 6;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr trim_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator vrefbuf_ccr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(vrefbuf_ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<vrefbuf_ccr_r>() const {return ClearSet<vrefbuf_ccr_r>(Mask, *this);}
	constexpr auto operator|(vrefbuf_ccr_r other) const -> vrefbuf_ccr_r { return static_cast<vrefbuf_ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<vrefbuf_ccr_r> other) const -> ClearSet<vrefbuf_ccr_r> {return ClearSet<vrefbuf_ccr_r>(vrefbuf_ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto trim() const -> trim_f {return trim_f(static_cast<uint8_t>(m_value >> trim_f::Offset));}

	constexpr vrefbuf_ccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(vrefbuf_ccr_r other) const -> vrefbuf_ccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> vrefbuf_ccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,vrefbuf_csr_r> vrefbuf_csr;
	Memory<uint32_t,vrefbuf_ccr_r> vrefbuf_ccr;
};

static_assert(std::is_standard_layout_v<vrefbuf_p>);
static_assert(offsetof(vrefbuf_p, vrefbuf_csr) == vrefbuf_p::vrefbuf_csr_r::Offset);
static_assert(offsetof(vrefbuf_p, vrefbuf_ccr) == vrefbuf_p::vrefbuf_ccr_r::Offset);

inline vrefbuf_p& vrefbuf = *reinterpret_cast<vrefbuf_p*>(0x40010030);

} // STM32G473XX

