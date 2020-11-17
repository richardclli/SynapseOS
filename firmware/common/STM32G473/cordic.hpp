#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * CORDIC Co-processor
 */
class cordic_p {
public:
/**
 * CORDIC Control Status register
 */
class csr_r {
public:

/**
 * FUNC
 */
class func_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr func_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * PRECISION
 */
class precision_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr precision_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator csr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SCALE
 */
class scale_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr scale_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator csr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(csr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * IEN
 */
class ien_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ien_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMAREN
 */
class dmaren_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmaren_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMAWEN
 */
class dmawen_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmawen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * NRES
 */
class nres_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr nres_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * NARGS
 */
class nargs_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr nargs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RESSIZE
 */
class ressize_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ressize_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ARGSIZE
 */
class argsize_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr argsize_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RRDY
 */
class rrdy_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rrdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator csr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(csr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto func() const -> func_f {return func_f(static_cast<uint8_t>(m_value >> func_f::Offset));}
	[[nodiscard]] constexpr auto precision() const -> precision_f {return precision_f(static_cast<uint8_t>(m_value >> precision_f::Offset));}
	[[nodiscard]] constexpr auto scale() const -> scale_f {return scale_f(static_cast<uint8_t>(m_value >> scale_f::Offset));}
	[[nodiscard]] constexpr auto ien() const -> ien_f {return ien_f((m_value & ien_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaren() const -> dmaren_f {return dmaren_f((m_value & dmaren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmawen() const -> dmawen_f {return dmawen_f((m_value & dmawen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nres() const -> nres_f {return nres_f((m_value & nres_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nargs() const -> nargs_f {return nargs_f((m_value & nargs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ressize() const -> ressize_f {return ressize_f((m_value & ressize_f::Mask) != 0);}
	[[nodiscard]] constexpr auto argsize() const -> argsize_f {return argsize_f((m_value & argsize_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rrdy() const -> rrdy_f {return rrdy_f((m_value & rrdy_f::Mask) != 0);}

	constexpr csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(csr_r other) const -> csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FMAC Write Data register
 */
class wdata_r {
public:

/**
 * ARG
 */
class arg_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr arg_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator wdata_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(wdata_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<wdata_r>() const {return ClearSet<wdata_r>(Mask, *this);}
	constexpr auto operator|(wdata_r other) const -> wdata_r { return static_cast<wdata_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<wdata_r> other) const -> ClearSet<wdata_r> {return ClearSet<wdata_r>(wdata_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto arg() const -> arg_f {return arg_f(static_cast<uint32_t>(m_value >> arg_f::Offset));}

	constexpr wdata_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(wdata_r other) const -> wdata_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> wdata_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FMAC Read Data register
 */
class rdata_r {
public:

/**
 * RES
 */
class res_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr res_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator rdata_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rdata_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rdata_r>() const {return ClearSet<rdata_r>(Mask, *this);}
	constexpr auto operator|(rdata_r other) const -> rdata_r { return static_cast<rdata_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rdata_r> other) const -> ClearSet<rdata_r> {return ClearSet<rdata_r>(rdata_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto res() const -> res_f {return res_f(static_cast<uint32_t>(m_value >> res_f::Offset));}

	constexpr rdata_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rdata_r other) const -> rdata_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rdata_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,csr_r> csr;
	Memory<uint32_t,wdata_r> wdata;
	ReadOnlyMemory<uint32_t,rdata_r> rdata;
};

static_assert(std::is_standard_layout_v<cordic_p>);
static_assert(offsetof(cordic_p, csr) == cordic_p::csr_r::Offset);
static_assert(offsetof(cordic_p, wdata) == cordic_p::wdata_r::Offset);
static_assert(offsetof(cordic_p, rdata) == cordic_p::rdata_r::Offset);

inline cordic_p& cordic = *reinterpret_cast<cordic_p*>(0x40020C00);

} // STM32G473XX

