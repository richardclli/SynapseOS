#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Filter Math Accelerator
 */
class fmac_p {
public:
/**
 * FMAC X1 Buffer Configuration register
 */
class x1bufcfg_r {
public:

/**
 * X1_BASE
 */
class x1_base_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr x1_base_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator x1bufcfg_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(x1bufcfg_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<x1bufcfg_r>() const {return ClearSet<x1bufcfg_r>(Mask, *this);}
	constexpr auto operator|(x1bufcfg_r other) const -> x1bufcfg_r { return static_cast<x1bufcfg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<x1bufcfg_r> other) const -> ClearSet<x1bufcfg_r> {return ClearSet<x1bufcfg_r>(x1bufcfg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * X1_BUF_SIZE
 */
class x1_buf_size_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr x1_buf_size_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator x1bufcfg_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(x1bufcfg_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<x1bufcfg_r>() const {return ClearSet<x1bufcfg_r>(Mask, *this);}
	constexpr auto operator|(x1bufcfg_r other) const -> x1bufcfg_r { return static_cast<x1bufcfg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<x1bufcfg_r> other) const -> ClearSet<x1bufcfg_r> {return ClearSet<x1bufcfg_r>(x1bufcfg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * FULL_WM
 */
class full_wm_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr full_wm_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator x1bufcfg_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(x1bufcfg_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<x1bufcfg_r>() const {return ClearSet<x1bufcfg_r>(Mask, *this);}
	constexpr auto operator|(x1bufcfg_r other) const -> x1bufcfg_r { return static_cast<x1bufcfg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<x1bufcfg_r> other) const -> ClearSet<x1bufcfg_r> {return ClearSet<x1bufcfg_r>(x1bufcfg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto x1_base() const -> x1_base_f {return x1_base_f(static_cast<uint8_t>(m_value >> x1_base_f::Offset));}
	[[nodiscard]] constexpr auto x1_buf_size() const -> x1_buf_size_f {return x1_buf_size_f(static_cast<uint8_t>(m_value >> x1_buf_size_f::Offset));}
	[[nodiscard]] constexpr auto full_wm() const -> full_wm_f {return full_wm_f(static_cast<uint8_t>(m_value >> full_wm_f::Offset));}

	constexpr x1bufcfg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(x1bufcfg_r other) const -> x1bufcfg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> x1bufcfg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FMAC X2 Buffer Configuration register
 */
class x2bufcfg_r {
public:

/**
 * X1_BASE
 */
class x2_base_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr x2_base_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator x2bufcfg_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(x2bufcfg_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<x2bufcfg_r>() const {return ClearSet<x2bufcfg_r>(Mask, *this);}
	constexpr auto operator|(x2bufcfg_r other) const -> x2bufcfg_r { return static_cast<x2bufcfg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<x2bufcfg_r> other) const -> ClearSet<x2bufcfg_r> {return ClearSet<x2bufcfg_r>(x2bufcfg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * X1_BUF_SIZE
 */
class x2_buf_size_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr x2_buf_size_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator x2bufcfg_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(x2bufcfg_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<x2bufcfg_r>() const {return ClearSet<x2bufcfg_r>(Mask, *this);}
	constexpr auto operator|(x2bufcfg_r other) const -> x2bufcfg_r { return static_cast<x2bufcfg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<x2bufcfg_r> other) const -> ClearSet<x2bufcfg_r> {return ClearSet<x2bufcfg_r>(x2bufcfg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto x2_base() const -> x2_base_f {return x2_base_f(static_cast<uint8_t>(m_value >> x2_base_f::Offset));}
	[[nodiscard]] constexpr auto x2_buf_size() const -> x2_buf_size_f {return x2_buf_size_f(static_cast<uint8_t>(m_value >> x2_buf_size_f::Offset));}

	constexpr x2bufcfg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(x2bufcfg_r other) const -> x2bufcfg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> x2bufcfg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FMAC Y Buffer Configuration register
 */
class ybufcfg_r {
public:

/**
 * X1_BASE
 */
class y_base_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr y_base_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ybufcfg_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ybufcfg_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ybufcfg_r>() const {return ClearSet<ybufcfg_r>(Mask, *this);}
	constexpr auto operator|(ybufcfg_r other) const -> ybufcfg_r { return static_cast<ybufcfg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ybufcfg_r> other) const -> ClearSet<ybufcfg_r> {return ClearSet<ybufcfg_r>(ybufcfg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * X1_BUF_SIZE
 */
class y_buf_size_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr y_buf_size_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ybufcfg_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ybufcfg_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ybufcfg_r>() const {return ClearSet<ybufcfg_r>(Mask, *this);}
	constexpr auto operator|(ybufcfg_r other) const -> ybufcfg_r { return static_cast<ybufcfg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ybufcfg_r> other) const -> ClearSet<ybufcfg_r> {return ClearSet<ybufcfg_r>(ybufcfg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * EMPTY_WM
 */
class empty_wm_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr empty_wm_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ybufcfg_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(ybufcfg_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ybufcfg_r>() const {return ClearSet<ybufcfg_r>(Mask, *this);}
	constexpr auto operator|(ybufcfg_r other) const -> ybufcfg_r { return static_cast<ybufcfg_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ybufcfg_r> other) const -> ClearSet<ybufcfg_r> {return ClearSet<ybufcfg_r>(ybufcfg_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto y_base() const -> y_base_f {return y_base_f(static_cast<uint8_t>(m_value >> y_base_f::Offset));}
	[[nodiscard]] constexpr auto y_buf_size() const -> y_buf_size_f {return y_buf_size_f(static_cast<uint8_t>(m_value >> y_buf_size_f::Offset));}
	[[nodiscard]] constexpr auto empty_wm() const -> empty_wm_f {return empty_wm_f(static_cast<uint8_t>(m_value >> empty_wm_f::Offset));}

	constexpr ybufcfg_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ybufcfg_r other) const -> ybufcfg_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ybufcfg_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FMAC Parameter register
 */
class param_r {
public:

/**
 * START
 */
class start_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr start_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator param_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(param_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<param_r>() const {return ClearSet<param_r>(Mask, *this);}
	constexpr auto operator|(param_r other) const -> param_r { return static_cast<param_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<param_r> other) const -> ClearSet<param_r> {return ClearSet<param_r>(param_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FUNC
 */
class func_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr func_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator param_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(param_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<param_r>() const {return ClearSet<param_r>(Mask, *this);}
	constexpr auto operator|(param_r other) const -> param_r { return static_cast<param_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<param_r> other) const -> ClearSet<param_r> {return ClearSet<param_r>(param_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * R
 */
class r_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr r_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator param_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(param_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<param_r>() const {return ClearSet<param_r>(Mask, *this);}
	constexpr auto operator|(param_r other) const -> param_r { return static_cast<param_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<param_r> other) const -> ClearSet<param_r> {return ClearSet<param_r>(param_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Q
 */
class q_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr q_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator param_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(param_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<param_r>() const {return ClearSet<param_r>(Mask, *this);}
	constexpr auto operator|(param_r other) const -> param_r { return static_cast<param_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<param_r> other) const -> ClearSet<param_r> {return ClearSet<param_r>(param_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * P
 */
class p_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr p_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator param_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(param_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<param_r>() const {return ClearSet<param_r>(Mask, *this);}
	constexpr auto operator|(param_r other) const -> param_r { return static_cast<param_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<param_r> other) const -> ClearSet<param_r> {return ClearSet<param_r>(param_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto start() const -> start_f {return start_f((m_value & start_f::Mask) != 0);}
	[[nodiscard]] constexpr auto func() const -> func_f {return func_f(static_cast<uint8_t>(m_value >> func_f::Offset));}
	[[nodiscard]] constexpr auto r() const -> r_f {return r_f(static_cast<uint8_t>(m_value >> r_f::Offset));}
	[[nodiscard]] constexpr auto q() const -> q_f {return q_f(static_cast<uint8_t>(m_value >> q_f::Offset));}
	[[nodiscard]] constexpr auto p() const -> p_f {return p_f(static_cast<uint8_t>(m_value >> p_f::Offset));}

	constexpr param_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(param_r other) const -> param_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> param_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * FMAC Control register
 */
class cr_r {
public:

/**
 * RESET
 */
class reset_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr reset_f(bool value = true) : m_value(value) {}
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
 * CLIPEN
 */
class clipen_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr clipen_f(bool value = true) : m_value(value) {}
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
 * DMAWEN
 */
class dmawen_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmawen_f(bool value = true) : m_value(value) {}
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
 * DMAREN
 */
class dmaren_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmaren_f(bool value = true) : m_value(value) {}
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
 * SATIEN
 */
class satien_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr satien_f(bool value = true) : m_value(value) {}
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
 * UNFLIEN
 */
class unflien_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr unflien_f(bool value = true) : m_value(value) {}
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
 * OVFLIEN
 */
class ovflien_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ovflien_f(bool value = true) : m_value(value) {}
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
 * WIEN
 */
class wien_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wien_f(bool value = true) : m_value(value) {}
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
 * RIEN
 */
class rien_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rien_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto reset() const -> reset_f {return reset_f((m_value & reset_f::Mask) != 0);}
	[[nodiscard]] constexpr auto clipen() const -> clipen_f {return clipen_f((m_value & clipen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmawen() const -> dmawen_f {return dmawen_f((m_value & dmawen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaren() const -> dmaren_f {return dmaren_f((m_value & dmaren_f::Mask) != 0);}
	[[nodiscard]] constexpr auto satien() const -> satien_f {return satien_f((m_value & satien_f::Mask) != 0);}
	[[nodiscard]] constexpr auto unflien() const -> unflien_f {return unflien_f((m_value & unflien_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovflien() const -> ovflien_f {return ovflien_f((m_value & ovflien_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wien() const -> wien_f {return wien_f((m_value & wien_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rien() const -> rien_f {return rien_f((m_value & rien_f::Mask) != 0);}

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
 * FMAC Status register
 */
class sr_r {
public:

/**
 * YEMPTY
 */
class yempty_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr yempty_f(bool value = true) : m_value(value) {}
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
 * X1FULL
 */
class x1full_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr x1full_f(bool value = true) : m_value(value) {}
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
 * OVFL
 */
class ovfl_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ovfl_f(bool value = true) : m_value(value) {}
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
 * UNFL
 */
class unfl_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr unfl_f(bool value = true) : m_value(value) {}
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
 * SAT
 */
class sat_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sat_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto yempty() const -> yempty_f {return yempty_f((m_value & yempty_f::Mask) != 0);}
	[[nodiscard]] constexpr auto x1full() const -> x1full_f {return x1full_f((m_value & x1full_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ovfl() const -> ovfl_f {return ovfl_f((m_value & ovfl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto unfl() const -> unfl_f {return unfl_f((m_value & unfl_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sat() const -> sat_f {return sat_f((m_value & sat_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
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
 * WDATA
 */
class wdata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr wdata_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator wdata_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(wdata_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<wdata_r>() const {return ClearSet<wdata_r>(Mask, *this);}
	constexpr auto operator|(wdata_r other) const -> wdata_r { return static_cast<wdata_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<wdata_r> other) const -> ClearSet<wdata_r> {return ClearSet<wdata_r>(wdata_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto wdata() const -> wdata_f {return wdata_f(static_cast<uint16_t>(m_value >> wdata_f::Offset));}

	constexpr wdata_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(wdata_r other) const -> wdata_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> wdata_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
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
 * RDATA
 */
class rdata_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr rdata_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator rdata_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rdata_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rdata_r>() const {return ClearSet<rdata_r>(Mask, *this);}
	constexpr auto operator|(rdata_r other) const -> rdata_r { return static_cast<rdata_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rdata_r> other) const -> ClearSet<rdata_r> {return ClearSet<rdata_r>(rdata_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto rdata() const -> rdata_f {return rdata_f(static_cast<uint16_t>(m_value >> rdata_f::Offset));}

	constexpr rdata_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rdata_r other) const -> rdata_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rdata_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,x1bufcfg_r> x1bufcfg;
	Memory<uint32_t,x2bufcfg_r> x2bufcfg;
	Memory<uint32_t,ybufcfg_r> ybufcfg;
	Memory<uint32_t,param_r> param;
	Memory<uint32_t,cr_r> cr;
	ReadOnlyMemory<uint32_t,sr_r> sr;
	WriteOnlyMemory<uint32_t,wdata_r> wdata;
	ReadOnlyMemory<uint32_t,rdata_r> rdata;
};

static_assert(std::is_standard_layout_v<fmac_p>);
static_assert(offsetof(fmac_p, x1bufcfg) == fmac_p::x1bufcfg_r::Offset);
static_assert(offsetof(fmac_p, x2bufcfg) == fmac_p::x2bufcfg_r::Offset);
static_assert(offsetof(fmac_p, ybufcfg) == fmac_p::ybufcfg_r::Offset);
static_assert(offsetof(fmac_p, param) == fmac_p::param_r::Offset);
static_assert(offsetof(fmac_p, cr) == fmac_p::cr_r::Offset);
static_assert(offsetof(fmac_p, sr) == fmac_p::sr_r::Offset);
static_assert(offsetof(fmac_p, wdata) == fmac_p::wdata_r::Offset);
static_assert(offsetof(fmac_p, rdata) == fmac_p::rdata_r::Offset);

inline fmac_p& fmac = *reinterpret_cast<fmac_p*>(0x40021400);

} // STM32G473XX

