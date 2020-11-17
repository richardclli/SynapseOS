#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * DMAMUX
 */
class dmamux_p {
public:
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c0cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c0cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c0cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c0cr_r>() const {return ClearSet<c0cr_r>(Mask, *this);}
	constexpr auto operator|(c0cr_r other) const -> c0cr_r { return static_cast<c0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c0cr_r> other) const -> ClearSet<c0cr_r> {return ClearSet<c0cr_r>(c0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c0cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c0cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c0cr_r>() const {return ClearSet<c0cr_r>(Mask, *this);}
	constexpr auto operator|(c0cr_r other) const -> c0cr_r { return static_cast<c0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c0cr_r> other) const -> ClearSet<c0cr_r> {return ClearSet<c0cr_r>(c0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c0cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c0cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c0cr_r>() const {return ClearSet<c0cr_r>(Mask, *this);}
	constexpr auto operator|(c0cr_r other) const -> c0cr_r { return static_cast<c0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c0cr_r> other) const -> ClearSet<c0cr_r> {return ClearSet<c0cr_r>(c0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c0cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c0cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c0cr_r>() const {return ClearSet<c0cr_r>(Mask, *this);}
	constexpr auto operator|(c0cr_r other) const -> c0cr_r { return static_cast<c0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c0cr_r> other) const -> ClearSet<c0cr_r> {return ClearSet<c0cr_r>(c0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c0cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c0cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c0cr_r>() const {return ClearSet<c0cr_r>(Mask, *this);}
	constexpr auto operator|(c0cr_r other) const -> c0cr_r { return static_cast<c0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c0cr_r> other) const -> ClearSet<c0cr_r> {return ClearSet<c0cr_r>(c0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c0cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c0cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c0cr_r>() const {return ClearSet<c0cr_r>(Mask, *this);}
	constexpr auto operator|(c0cr_r other) const -> c0cr_r { return static_cast<c0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c0cr_r> other) const -> ClearSet<c0cr_r> {return ClearSet<c0cr_r>(c0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c0cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c0cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c0cr_r>() const {return ClearSet<c0cr_r>(Mask, *this);}
	constexpr auto operator|(c0cr_r other) const -> c0cr_r { return static_cast<c0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c0cr_r> other) const -> ClearSet<c0cr_r> {return ClearSet<c0cr_r>(c0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c0cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c0cr_r other) const -> c0cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c0cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c1cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c1cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c1cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c1cr_r>() const {return ClearSet<c1cr_r>(Mask, *this);}
	constexpr auto operator|(c1cr_r other) const -> c1cr_r { return static_cast<c1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c1cr_r> other) const -> ClearSet<c1cr_r> {return ClearSet<c1cr_r>(c1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c1cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c1cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c1cr_r>() const {return ClearSet<c1cr_r>(Mask, *this);}
	constexpr auto operator|(c1cr_r other) const -> c1cr_r { return static_cast<c1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c1cr_r> other) const -> ClearSet<c1cr_r> {return ClearSet<c1cr_r>(c1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c1cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c1cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c1cr_r>() const {return ClearSet<c1cr_r>(Mask, *this);}
	constexpr auto operator|(c1cr_r other) const -> c1cr_r { return static_cast<c1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c1cr_r> other) const -> ClearSet<c1cr_r> {return ClearSet<c1cr_r>(c1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c1cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c1cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c1cr_r>() const {return ClearSet<c1cr_r>(Mask, *this);}
	constexpr auto operator|(c1cr_r other) const -> c1cr_r { return static_cast<c1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c1cr_r> other) const -> ClearSet<c1cr_r> {return ClearSet<c1cr_r>(c1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c1cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c1cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c1cr_r>() const {return ClearSet<c1cr_r>(Mask, *this);}
	constexpr auto operator|(c1cr_r other) const -> c1cr_r { return static_cast<c1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c1cr_r> other) const -> ClearSet<c1cr_r> {return ClearSet<c1cr_r>(c1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c1cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c1cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c1cr_r>() const {return ClearSet<c1cr_r>(Mask, *this);}
	constexpr auto operator|(c1cr_r other) const -> c1cr_r { return static_cast<c1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c1cr_r> other) const -> ClearSet<c1cr_r> {return ClearSet<c1cr_r>(c1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c1cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c1cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c1cr_r>() const {return ClearSet<c1cr_r>(Mask, *this);}
	constexpr auto operator|(c1cr_r other) const -> c1cr_r { return static_cast<c1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c1cr_r> other) const -> ClearSet<c1cr_r> {return ClearSet<c1cr_r>(c1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c1cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c1cr_r other) const -> c1cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c1cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c2cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c2cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c2cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c2cr_r>() const {return ClearSet<c2cr_r>(Mask, *this);}
	constexpr auto operator|(c2cr_r other) const -> c2cr_r { return static_cast<c2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c2cr_r> other) const -> ClearSet<c2cr_r> {return ClearSet<c2cr_r>(c2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c2cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c2cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c2cr_r>() const {return ClearSet<c2cr_r>(Mask, *this);}
	constexpr auto operator|(c2cr_r other) const -> c2cr_r { return static_cast<c2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c2cr_r> other) const -> ClearSet<c2cr_r> {return ClearSet<c2cr_r>(c2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c2cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c2cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c2cr_r>() const {return ClearSet<c2cr_r>(Mask, *this);}
	constexpr auto operator|(c2cr_r other) const -> c2cr_r { return static_cast<c2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c2cr_r> other) const -> ClearSet<c2cr_r> {return ClearSet<c2cr_r>(c2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c2cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c2cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c2cr_r>() const {return ClearSet<c2cr_r>(Mask, *this);}
	constexpr auto operator|(c2cr_r other) const -> c2cr_r { return static_cast<c2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c2cr_r> other) const -> ClearSet<c2cr_r> {return ClearSet<c2cr_r>(c2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c2cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c2cr_r>() const {return ClearSet<c2cr_r>(Mask, *this);}
	constexpr auto operator|(c2cr_r other) const -> c2cr_r { return static_cast<c2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c2cr_r> other) const -> ClearSet<c2cr_r> {return ClearSet<c2cr_r>(c2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c2cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c2cr_r>() const {return ClearSet<c2cr_r>(Mask, *this);}
	constexpr auto operator|(c2cr_r other) const -> c2cr_r { return static_cast<c2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c2cr_r> other) const -> ClearSet<c2cr_r> {return ClearSet<c2cr_r>(c2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c2cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c2cr_r>() const {return ClearSet<c2cr_r>(Mask, *this);}
	constexpr auto operator|(c2cr_r other) const -> c2cr_r { return static_cast<c2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c2cr_r> other) const -> ClearSet<c2cr_r> {return ClearSet<c2cr_r>(c2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c2cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c2cr_r other) const -> c2cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c2cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c3cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c3cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c3cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c3cr_r>() const {return ClearSet<c3cr_r>(Mask, *this);}
	constexpr auto operator|(c3cr_r other) const -> c3cr_r { return static_cast<c3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c3cr_r> other) const -> ClearSet<c3cr_r> {return ClearSet<c3cr_r>(c3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c3cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c3cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c3cr_r>() const {return ClearSet<c3cr_r>(Mask, *this);}
	constexpr auto operator|(c3cr_r other) const -> c3cr_r { return static_cast<c3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c3cr_r> other) const -> ClearSet<c3cr_r> {return ClearSet<c3cr_r>(c3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c3cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c3cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c3cr_r>() const {return ClearSet<c3cr_r>(Mask, *this);}
	constexpr auto operator|(c3cr_r other) const -> c3cr_r { return static_cast<c3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c3cr_r> other) const -> ClearSet<c3cr_r> {return ClearSet<c3cr_r>(c3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c3cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c3cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c3cr_r>() const {return ClearSet<c3cr_r>(Mask, *this);}
	constexpr auto operator|(c3cr_r other) const -> c3cr_r { return static_cast<c3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c3cr_r> other) const -> ClearSet<c3cr_r> {return ClearSet<c3cr_r>(c3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c3cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c3cr_r>() const {return ClearSet<c3cr_r>(Mask, *this);}
	constexpr auto operator|(c3cr_r other) const -> c3cr_r { return static_cast<c3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c3cr_r> other) const -> ClearSet<c3cr_r> {return ClearSet<c3cr_r>(c3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c3cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c3cr_r>() const {return ClearSet<c3cr_r>(Mask, *this);}
	constexpr auto operator|(c3cr_r other) const -> c3cr_r { return static_cast<c3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c3cr_r> other) const -> ClearSet<c3cr_r> {return ClearSet<c3cr_r>(c3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c3cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c3cr_r>() const {return ClearSet<c3cr_r>(Mask, *this);}
	constexpr auto operator|(c3cr_r other) const -> c3cr_r { return static_cast<c3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c3cr_r> other) const -> ClearSet<c3cr_r> {return ClearSet<c3cr_r>(c3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c3cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c3cr_r other) const -> c3cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c3cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c4cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c4cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c4cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c4cr_r>() const {return ClearSet<c4cr_r>(Mask, *this);}
	constexpr auto operator|(c4cr_r other) const -> c4cr_r { return static_cast<c4cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c4cr_r> other) const -> ClearSet<c4cr_r> {return ClearSet<c4cr_r>(c4cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c4cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c4cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c4cr_r>() const {return ClearSet<c4cr_r>(Mask, *this);}
	constexpr auto operator|(c4cr_r other) const -> c4cr_r { return static_cast<c4cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c4cr_r> other) const -> ClearSet<c4cr_r> {return ClearSet<c4cr_r>(c4cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c4cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c4cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c4cr_r>() const {return ClearSet<c4cr_r>(Mask, *this);}
	constexpr auto operator|(c4cr_r other) const -> c4cr_r { return static_cast<c4cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c4cr_r> other) const -> ClearSet<c4cr_r> {return ClearSet<c4cr_r>(c4cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c4cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c4cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c4cr_r>() const {return ClearSet<c4cr_r>(Mask, *this);}
	constexpr auto operator|(c4cr_r other) const -> c4cr_r { return static_cast<c4cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c4cr_r> other) const -> ClearSet<c4cr_r> {return ClearSet<c4cr_r>(c4cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c4cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c4cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c4cr_r>() const {return ClearSet<c4cr_r>(Mask, *this);}
	constexpr auto operator|(c4cr_r other) const -> c4cr_r { return static_cast<c4cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c4cr_r> other) const -> ClearSet<c4cr_r> {return ClearSet<c4cr_r>(c4cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c4cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c4cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c4cr_r>() const {return ClearSet<c4cr_r>(Mask, *this);}
	constexpr auto operator|(c4cr_r other) const -> c4cr_r { return static_cast<c4cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c4cr_r> other) const -> ClearSet<c4cr_r> {return ClearSet<c4cr_r>(c4cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c4cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c4cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c4cr_r>() const {return ClearSet<c4cr_r>(Mask, *this);}
	constexpr auto operator|(c4cr_r other) const -> c4cr_r { return static_cast<c4cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c4cr_r> other) const -> ClearSet<c4cr_r> {return ClearSet<c4cr_r>(c4cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c4cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c4cr_r other) const -> c4cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c4cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c5cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c5cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c5cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c5cr_r>() const {return ClearSet<c5cr_r>(Mask, *this);}
	constexpr auto operator|(c5cr_r other) const -> c5cr_r { return static_cast<c5cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c5cr_r> other) const -> ClearSet<c5cr_r> {return ClearSet<c5cr_r>(c5cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c5cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c5cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c5cr_r>() const {return ClearSet<c5cr_r>(Mask, *this);}
	constexpr auto operator|(c5cr_r other) const -> c5cr_r { return static_cast<c5cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c5cr_r> other) const -> ClearSet<c5cr_r> {return ClearSet<c5cr_r>(c5cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c5cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c5cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c5cr_r>() const {return ClearSet<c5cr_r>(Mask, *this);}
	constexpr auto operator|(c5cr_r other) const -> c5cr_r { return static_cast<c5cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c5cr_r> other) const -> ClearSet<c5cr_r> {return ClearSet<c5cr_r>(c5cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c5cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c5cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c5cr_r>() const {return ClearSet<c5cr_r>(Mask, *this);}
	constexpr auto operator|(c5cr_r other) const -> c5cr_r { return static_cast<c5cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c5cr_r> other) const -> ClearSet<c5cr_r> {return ClearSet<c5cr_r>(c5cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c5cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c5cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c5cr_r>() const {return ClearSet<c5cr_r>(Mask, *this);}
	constexpr auto operator|(c5cr_r other) const -> c5cr_r { return static_cast<c5cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c5cr_r> other) const -> ClearSet<c5cr_r> {return ClearSet<c5cr_r>(c5cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c5cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c5cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c5cr_r>() const {return ClearSet<c5cr_r>(Mask, *this);}
	constexpr auto operator|(c5cr_r other) const -> c5cr_r { return static_cast<c5cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c5cr_r> other) const -> ClearSet<c5cr_r> {return ClearSet<c5cr_r>(c5cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c5cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c5cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c5cr_r>() const {return ClearSet<c5cr_r>(Mask, *this);}
	constexpr auto operator|(c5cr_r other) const -> c5cr_r { return static_cast<c5cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c5cr_r> other) const -> ClearSet<c5cr_r> {return ClearSet<c5cr_r>(c5cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c5cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c5cr_r other) const -> c5cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c5cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c6cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c6cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c6cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c6cr_r>() const {return ClearSet<c6cr_r>(Mask, *this);}
	constexpr auto operator|(c6cr_r other) const -> c6cr_r { return static_cast<c6cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c6cr_r> other) const -> ClearSet<c6cr_r> {return ClearSet<c6cr_r>(c6cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c6cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c6cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c6cr_r>() const {return ClearSet<c6cr_r>(Mask, *this);}
	constexpr auto operator|(c6cr_r other) const -> c6cr_r { return static_cast<c6cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c6cr_r> other) const -> ClearSet<c6cr_r> {return ClearSet<c6cr_r>(c6cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c6cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c6cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c6cr_r>() const {return ClearSet<c6cr_r>(Mask, *this);}
	constexpr auto operator|(c6cr_r other) const -> c6cr_r { return static_cast<c6cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c6cr_r> other) const -> ClearSet<c6cr_r> {return ClearSet<c6cr_r>(c6cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c6cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c6cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c6cr_r>() const {return ClearSet<c6cr_r>(Mask, *this);}
	constexpr auto operator|(c6cr_r other) const -> c6cr_r { return static_cast<c6cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c6cr_r> other) const -> ClearSet<c6cr_r> {return ClearSet<c6cr_r>(c6cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c6cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c6cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c6cr_r>() const {return ClearSet<c6cr_r>(Mask, *this);}
	constexpr auto operator|(c6cr_r other) const -> c6cr_r { return static_cast<c6cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c6cr_r> other) const -> ClearSet<c6cr_r> {return ClearSet<c6cr_r>(c6cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c6cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c6cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c6cr_r>() const {return ClearSet<c6cr_r>(Mask, *this);}
	constexpr auto operator|(c6cr_r other) const -> c6cr_r { return static_cast<c6cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c6cr_r> other) const -> ClearSet<c6cr_r> {return ClearSet<c6cr_r>(c6cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c6cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c6cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c6cr_r>() const {return ClearSet<c6cr_r>(Mask, *this);}
	constexpr auto operator|(c6cr_r other) const -> c6cr_r { return static_cast<c6cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c6cr_r> other) const -> ClearSet<c6cr_r> {return ClearSet<c6cr_r>(c6cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c6cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c6cr_r other) const -> c6cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c6cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c7cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c7cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c7cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c7cr_r>() const {return ClearSet<c7cr_r>(Mask, *this);}
	constexpr auto operator|(c7cr_r other) const -> c7cr_r { return static_cast<c7cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c7cr_r> other) const -> ClearSet<c7cr_r> {return ClearSet<c7cr_r>(c7cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c7cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c7cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c7cr_r>() const {return ClearSet<c7cr_r>(Mask, *this);}
	constexpr auto operator|(c7cr_r other) const -> c7cr_r { return static_cast<c7cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c7cr_r> other) const -> ClearSet<c7cr_r> {return ClearSet<c7cr_r>(c7cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c7cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c7cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c7cr_r>() const {return ClearSet<c7cr_r>(Mask, *this);}
	constexpr auto operator|(c7cr_r other) const -> c7cr_r { return static_cast<c7cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c7cr_r> other) const -> ClearSet<c7cr_r> {return ClearSet<c7cr_r>(c7cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c7cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c7cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c7cr_r>() const {return ClearSet<c7cr_r>(Mask, *this);}
	constexpr auto operator|(c7cr_r other) const -> c7cr_r { return static_cast<c7cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c7cr_r> other) const -> ClearSet<c7cr_r> {return ClearSet<c7cr_r>(c7cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c7cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c7cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c7cr_r>() const {return ClearSet<c7cr_r>(Mask, *this);}
	constexpr auto operator|(c7cr_r other) const -> c7cr_r { return static_cast<c7cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c7cr_r> other) const -> ClearSet<c7cr_r> {return ClearSet<c7cr_r>(c7cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c7cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c7cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c7cr_r>() const {return ClearSet<c7cr_r>(Mask, *this);}
	constexpr auto operator|(c7cr_r other) const -> c7cr_r { return static_cast<c7cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c7cr_r> other) const -> ClearSet<c7cr_r> {return ClearSet<c7cr_r>(c7cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c7cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c7cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c7cr_r>() const {return ClearSet<c7cr_r>(Mask, *this);}
	constexpr auto operator|(c7cr_r other) const -> c7cr_r { return static_cast<c7cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c7cr_r> other) const -> ClearSet<c7cr_r> {return ClearSet<c7cr_r>(c7cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c7cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c7cr_r other) const -> c7cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c7cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c8cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c8cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c8cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c8cr_r>() const {return ClearSet<c8cr_r>(Mask, *this);}
	constexpr auto operator|(c8cr_r other) const -> c8cr_r { return static_cast<c8cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c8cr_r> other) const -> ClearSet<c8cr_r> {return ClearSet<c8cr_r>(c8cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c8cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c8cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c8cr_r>() const {return ClearSet<c8cr_r>(Mask, *this);}
	constexpr auto operator|(c8cr_r other) const -> c8cr_r { return static_cast<c8cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c8cr_r> other) const -> ClearSet<c8cr_r> {return ClearSet<c8cr_r>(c8cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c8cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c8cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c8cr_r>() const {return ClearSet<c8cr_r>(Mask, *this);}
	constexpr auto operator|(c8cr_r other) const -> c8cr_r { return static_cast<c8cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c8cr_r> other) const -> ClearSet<c8cr_r> {return ClearSet<c8cr_r>(c8cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c8cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c8cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c8cr_r>() const {return ClearSet<c8cr_r>(Mask, *this);}
	constexpr auto operator|(c8cr_r other) const -> c8cr_r { return static_cast<c8cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c8cr_r> other) const -> ClearSet<c8cr_r> {return ClearSet<c8cr_r>(c8cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c8cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c8cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c8cr_r>() const {return ClearSet<c8cr_r>(Mask, *this);}
	constexpr auto operator|(c8cr_r other) const -> c8cr_r { return static_cast<c8cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c8cr_r> other) const -> ClearSet<c8cr_r> {return ClearSet<c8cr_r>(c8cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c8cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c8cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c8cr_r>() const {return ClearSet<c8cr_r>(Mask, *this);}
	constexpr auto operator|(c8cr_r other) const -> c8cr_r { return static_cast<c8cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c8cr_r> other) const -> ClearSet<c8cr_r> {return ClearSet<c8cr_r>(c8cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c8cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c8cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c8cr_r>() const {return ClearSet<c8cr_r>(Mask, *this);}
	constexpr auto operator|(c8cr_r other) const -> c8cr_r { return static_cast<c8cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c8cr_r> other) const -> ClearSet<c8cr_r> {return ClearSet<c8cr_r>(c8cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c8cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c8cr_r other) const -> c8cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c8cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c9cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c9cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c9cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c9cr_r>() const {return ClearSet<c9cr_r>(Mask, *this);}
	constexpr auto operator|(c9cr_r other) const -> c9cr_r { return static_cast<c9cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c9cr_r> other) const -> ClearSet<c9cr_r> {return ClearSet<c9cr_r>(c9cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c9cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c9cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c9cr_r>() const {return ClearSet<c9cr_r>(Mask, *this);}
	constexpr auto operator|(c9cr_r other) const -> c9cr_r { return static_cast<c9cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c9cr_r> other) const -> ClearSet<c9cr_r> {return ClearSet<c9cr_r>(c9cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c9cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c9cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c9cr_r>() const {return ClearSet<c9cr_r>(Mask, *this);}
	constexpr auto operator|(c9cr_r other) const -> c9cr_r { return static_cast<c9cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c9cr_r> other) const -> ClearSet<c9cr_r> {return ClearSet<c9cr_r>(c9cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c9cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c9cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c9cr_r>() const {return ClearSet<c9cr_r>(Mask, *this);}
	constexpr auto operator|(c9cr_r other) const -> c9cr_r { return static_cast<c9cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c9cr_r> other) const -> ClearSet<c9cr_r> {return ClearSet<c9cr_r>(c9cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c9cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c9cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c9cr_r>() const {return ClearSet<c9cr_r>(Mask, *this);}
	constexpr auto operator|(c9cr_r other) const -> c9cr_r { return static_cast<c9cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c9cr_r> other) const -> ClearSet<c9cr_r> {return ClearSet<c9cr_r>(c9cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c9cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c9cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c9cr_r>() const {return ClearSet<c9cr_r>(Mask, *this);}
	constexpr auto operator|(c9cr_r other) const -> c9cr_r { return static_cast<c9cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c9cr_r> other) const -> ClearSet<c9cr_r> {return ClearSet<c9cr_r>(c9cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c9cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c9cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c9cr_r>() const {return ClearSet<c9cr_r>(Mask, *this);}
	constexpr auto operator|(c9cr_r other) const -> c9cr_r { return static_cast<c9cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c9cr_r> other) const -> ClearSet<c9cr_r> {return ClearSet<c9cr_r>(c9cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c9cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c9cr_r other) const -> c9cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c9cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c10cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c10cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c10cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c10cr_r>() const {return ClearSet<c10cr_r>(Mask, *this);}
	constexpr auto operator|(c10cr_r other) const -> c10cr_r { return static_cast<c10cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c10cr_r> other) const -> ClearSet<c10cr_r> {return ClearSet<c10cr_r>(c10cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c10cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c10cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c10cr_r>() const {return ClearSet<c10cr_r>(Mask, *this);}
	constexpr auto operator|(c10cr_r other) const -> c10cr_r { return static_cast<c10cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c10cr_r> other) const -> ClearSet<c10cr_r> {return ClearSet<c10cr_r>(c10cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c10cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c10cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c10cr_r>() const {return ClearSet<c10cr_r>(Mask, *this);}
	constexpr auto operator|(c10cr_r other) const -> c10cr_r { return static_cast<c10cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c10cr_r> other) const -> ClearSet<c10cr_r> {return ClearSet<c10cr_r>(c10cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c10cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c10cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c10cr_r>() const {return ClearSet<c10cr_r>(Mask, *this);}
	constexpr auto operator|(c10cr_r other) const -> c10cr_r { return static_cast<c10cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c10cr_r> other) const -> ClearSet<c10cr_r> {return ClearSet<c10cr_r>(c10cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c10cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c10cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c10cr_r>() const {return ClearSet<c10cr_r>(Mask, *this);}
	constexpr auto operator|(c10cr_r other) const -> c10cr_r { return static_cast<c10cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c10cr_r> other) const -> ClearSet<c10cr_r> {return ClearSet<c10cr_r>(c10cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c10cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c10cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c10cr_r>() const {return ClearSet<c10cr_r>(Mask, *this);}
	constexpr auto operator|(c10cr_r other) const -> c10cr_r { return static_cast<c10cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c10cr_r> other) const -> ClearSet<c10cr_r> {return ClearSet<c10cr_r>(c10cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c10cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c10cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c10cr_r>() const {return ClearSet<c10cr_r>(Mask, *this);}
	constexpr auto operator|(c10cr_r other) const -> c10cr_r { return static_cast<c10cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c10cr_r> other) const -> ClearSet<c10cr_r> {return ClearSet<c10cr_r>(c10cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c10cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c10cr_r other) const -> c10cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c10cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c11cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c11cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c11cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c11cr_r>() const {return ClearSet<c11cr_r>(Mask, *this);}
	constexpr auto operator|(c11cr_r other) const -> c11cr_r { return static_cast<c11cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c11cr_r> other) const -> ClearSet<c11cr_r> {return ClearSet<c11cr_r>(c11cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c11cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c11cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c11cr_r>() const {return ClearSet<c11cr_r>(Mask, *this);}
	constexpr auto operator|(c11cr_r other) const -> c11cr_r { return static_cast<c11cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c11cr_r> other) const -> ClearSet<c11cr_r> {return ClearSet<c11cr_r>(c11cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c11cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c11cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c11cr_r>() const {return ClearSet<c11cr_r>(Mask, *this);}
	constexpr auto operator|(c11cr_r other) const -> c11cr_r { return static_cast<c11cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c11cr_r> other) const -> ClearSet<c11cr_r> {return ClearSet<c11cr_r>(c11cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c11cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c11cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c11cr_r>() const {return ClearSet<c11cr_r>(Mask, *this);}
	constexpr auto operator|(c11cr_r other) const -> c11cr_r { return static_cast<c11cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c11cr_r> other) const -> ClearSet<c11cr_r> {return ClearSet<c11cr_r>(c11cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c11cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c11cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c11cr_r>() const {return ClearSet<c11cr_r>(Mask, *this);}
	constexpr auto operator|(c11cr_r other) const -> c11cr_r { return static_cast<c11cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c11cr_r> other) const -> ClearSet<c11cr_r> {return ClearSet<c11cr_r>(c11cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c11cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c11cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c11cr_r>() const {return ClearSet<c11cr_r>(Mask, *this);}
	constexpr auto operator|(c11cr_r other) const -> c11cr_r { return static_cast<c11cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c11cr_r> other) const -> ClearSet<c11cr_r> {return ClearSet<c11cr_r>(c11cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c11cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c11cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c11cr_r>() const {return ClearSet<c11cr_r>(Mask, *this);}
	constexpr auto operator|(c11cr_r other) const -> c11cr_r { return static_cast<c11cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c11cr_r> other) const -> ClearSet<c11cr_r> {return ClearSet<c11cr_r>(c11cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c11cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c11cr_r other) const -> c11cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c11cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c12cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c12cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c12cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c12cr_r>() const {return ClearSet<c12cr_r>(Mask, *this);}
	constexpr auto operator|(c12cr_r other) const -> c12cr_r { return static_cast<c12cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c12cr_r> other) const -> ClearSet<c12cr_r> {return ClearSet<c12cr_r>(c12cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c12cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c12cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c12cr_r>() const {return ClearSet<c12cr_r>(Mask, *this);}
	constexpr auto operator|(c12cr_r other) const -> c12cr_r { return static_cast<c12cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c12cr_r> other) const -> ClearSet<c12cr_r> {return ClearSet<c12cr_r>(c12cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c12cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c12cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c12cr_r>() const {return ClearSet<c12cr_r>(Mask, *this);}
	constexpr auto operator|(c12cr_r other) const -> c12cr_r { return static_cast<c12cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c12cr_r> other) const -> ClearSet<c12cr_r> {return ClearSet<c12cr_r>(c12cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c12cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c12cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c12cr_r>() const {return ClearSet<c12cr_r>(Mask, *this);}
	constexpr auto operator|(c12cr_r other) const -> c12cr_r { return static_cast<c12cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c12cr_r> other) const -> ClearSet<c12cr_r> {return ClearSet<c12cr_r>(c12cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c12cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c12cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c12cr_r>() const {return ClearSet<c12cr_r>(Mask, *this);}
	constexpr auto operator|(c12cr_r other) const -> c12cr_r { return static_cast<c12cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c12cr_r> other) const -> ClearSet<c12cr_r> {return ClearSet<c12cr_r>(c12cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c12cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c12cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c12cr_r>() const {return ClearSet<c12cr_r>(Mask, *this);}
	constexpr auto operator|(c12cr_r other) const -> c12cr_r { return static_cast<c12cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c12cr_r> other) const -> ClearSet<c12cr_r> {return ClearSet<c12cr_r>(c12cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c12cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c12cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c12cr_r>() const {return ClearSet<c12cr_r>(Mask, *this);}
	constexpr auto operator|(c12cr_r other) const -> c12cr_r { return static_cast<c12cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c12cr_r> other) const -> ClearSet<c12cr_r> {return ClearSet<c12cr_r>(c12cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c12cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c12cr_r other) const -> c12cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c12cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c13cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c13cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c13cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c13cr_r>() const {return ClearSet<c13cr_r>(Mask, *this);}
	constexpr auto operator|(c13cr_r other) const -> c13cr_r { return static_cast<c13cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c13cr_r> other) const -> ClearSet<c13cr_r> {return ClearSet<c13cr_r>(c13cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c13cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c13cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c13cr_r>() const {return ClearSet<c13cr_r>(Mask, *this);}
	constexpr auto operator|(c13cr_r other) const -> c13cr_r { return static_cast<c13cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c13cr_r> other) const -> ClearSet<c13cr_r> {return ClearSet<c13cr_r>(c13cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c13cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c13cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c13cr_r>() const {return ClearSet<c13cr_r>(Mask, *this);}
	constexpr auto operator|(c13cr_r other) const -> c13cr_r { return static_cast<c13cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c13cr_r> other) const -> ClearSet<c13cr_r> {return ClearSet<c13cr_r>(c13cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c13cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c13cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c13cr_r>() const {return ClearSet<c13cr_r>(Mask, *this);}
	constexpr auto operator|(c13cr_r other) const -> c13cr_r { return static_cast<c13cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c13cr_r> other) const -> ClearSet<c13cr_r> {return ClearSet<c13cr_r>(c13cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c13cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c13cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c13cr_r>() const {return ClearSet<c13cr_r>(Mask, *this);}
	constexpr auto operator|(c13cr_r other) const -> c13cr_r { return static_cast<c13cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c13cr_r> other) const -> ClearSet<c13cr_r> {return ClearSet<c13cr_r>(c13cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c13cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c13cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c13cr_r>() const {return ClearSet<c13cr_r>(Mask, *this);}
	constexpr auto operator|(c13cr_r other) const -> c13cr_r { return static_cast<c13cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c13cr_r> other) const -> ClearSet<c13cr_r> {return ClearSet<c13cr_r>(c13cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c13cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c13cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c13cr_r>() const {return ClearSet<c13cr_r>(Mask, *this);}
	constexpr auto operator|(c13cr_r other) const -> c13cr_r { return static_cast<c13cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c13cr_r> other) const -> ClearSet<c13cr_r> {return ClearSet<c13cr_r>(c13cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c13cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c13cr_r other) const -> c13cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c13cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c14cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c14cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c14cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c14cr_r>() const {return ClearSet<c14cr_r>(Mask, *this);}
	constexpr auto operator|(c14cr_r other) const -> c14cr_r { return static_cast<c14cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c14cr_r> other) const -> ClearSet<c14cr_r> {return ClearSet<c14cr_r>(c14cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c14cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c14cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c14cr_r>() const {return ClearSet<c14cr_r>(Mask, *this);}
	constexpr auto operator|(c14cr_r other) const -> c14cr_r { return static_cast<c14cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c14cr_r> other) const -> ClearSet<c14cr_r> {return ClearSet<c14cr_r>(c14cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c14cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c14cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c14cr_r>() const {return ClearSet<c14cr_r>(Mask, *this);}
	constexpr auto operator|(c14cr_r other) const -> c14cr_r { return static_cast<c14cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c14cr_r> other) const -> ClearSet<c14cr_r> {return ClearSet<c14cr_r>(c14cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c14cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c14cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c14cr_r>() const {return ClearSet<c14cr_r>(Mask, *this);}
	constexpr auto operator|(c14cr_r other) const -> c14cr_r { return static_cast<c14cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c14cr_r> other) const -> ClearSet<c14cr_r> {return ClearSet<c14cr_r>(c14cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c14cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c14cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c14cr_r>() const {return ClearSet<c14cr_r>(Mask, *this);}
	constexpr auto operator|(c14cr_r other) const -> c14cr_r { return static_cast<c14cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c14cr_r> other) const -> ClearSet<c14cr_r> {return ClearSet<c14cr_r>(c14cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c14cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c14cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c14cr_r>() const {return ClearSet<c14cr_r>(Mask, *this);}
	constexpr auto operator|(c14cr_r other) const -> c14cr_r { return static_cast<c14cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c14cr_r> other) const -> ClearSet<c14cr_r> {return ClearSet<c14cr_r>(c14cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c14cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c14cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c14cr_r>() const {return ClearSet<c14cr_r>(Mask, *this);}
	constexpr auto operator|(c14cr_r other) const -> c14cr_r { return static_cast<c14cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c14cr_r> other) const -> ClearSet<c14cr_r> {return ClearSet<c14cr_r>(c14cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c14cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c14cr_r other) const -> c14cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c14cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request line multiplexer channel x control register
 */
class c15cr_r {
public:

/**
 * Input DMA request line selected
 */
class dmareq_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dmareq_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c15cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(c15cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c15cr_r>() const {return ClearSet<c15cr_r>(Mask, *this);}
	constexpr auto operator|(c15cr_r other) const -> c15cr_r { return static_cast<c15cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c15cr_r> other) const -> ClearSet<c15cr_r> {return ClearSet<c15cr_r>(c15cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at synchronization event overrun
 */
class soie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr soie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c15cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c15cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c15cr_r>() const {return ClearSet<c15cr_r>(Mask, *this);}
	constexpr auto operator|(c15cr_r other) const -> c15cr_r { return static_cast<c15cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c15cr_r> other) const -> ClearSet<c15cr_r> {return ClearSet<c15cr_r>(c15cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Event generation enable/disable
 */
class ege_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ege_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c15cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c15cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c15cr_r>() const {return ClearSet<c15cr_r>(Mask, *this);}
	constexpr auto operator|(c15cr_r other) const -> c15cr_r { return static_cast<c15cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c15cr_r> other) const -> ClearSet<c15cr_r> {return ClearSet<c15cr_r>(c15cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronous operating mode enable/disable
 */
class se_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr se_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator c15cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(c15cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c15cr_r>() const {return ClearSet<c15cr_r>(Mask, *this);}
	constexpr auto operator|(c15cr_r other) const -> c15cr_r { return static_cast<c15cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c15cr_r> other) const -> ClearSet<c15cr_r> {return ClearSet<c15cr_r>(c15cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Synchronization event type selector Defines the synchronization event on the selected synchronization input:
 */
class spol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr spol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c15cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c15cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c15cr_r>() const {return ClearSet<c15cr_r>(Mask, *this);}
	constexpr auto operator|(c15cr_r other) const -> c15cr_r { return static_cast<c15cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c15cr_r> other) const -> ClearSet<c15cr_r> {return ClearSet<c15cr_r>(c15cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
 */
class nbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c15cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c15cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c15cr_r>() const {return ClearSet<c15cr_r>(Mask, *this);}
	constexpr auto operator|(c15cr_r other) const -> c15cr_r { return static_cast<c15cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c15cr_r> other) const -> ClearSet<c15cr_r> {return ClearSet<c15cr_r>(c15cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronization input selected
 */
class sync_id_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr sync_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator c15cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(c15cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<c15cr_r>() const {return ClearSet<c15cr_r>(Mask, *this);}
	constexpr auto operator|(c15cr_r other) const -> c15cr_r { return static_cast<c15cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<c15cr_r> other) const -> ClearSet<c15cr_r> {return ClearSet<c15cr_r>(c15cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dmareq_id() const -> dmareq_id_f {return dmareq_id_f(static_cast<uint8_t>(m_value >> dmareq_id_f::Offset));}
	[[nodiscard]] constexpr auto soie() const -> soie_f {return soie_f((m_value & soie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ege() const -> ege_f {return ege_f((m_value & ege_f::Mask) != 0);}
	[[nodiscard]] constexpr auto se() const -> se_f {return se_f((m_value & se_f::Mask) != 0);}
	[[nodiscard]] constexpr auto spol() const -> spol_f {return spol_f(static_cast<uint8_t>(m_value >> spol_f::Offset));}
	[[nodiscard]] constexpr auto nbreq() const -> nbreq_f {return nbreq_f(static_cast<uint8_t>(m_value >> nbreq_f::Offset));}
	[[nodiscard]] constexpr auto sync_id() const -> sync_id_f {return sync_id_f(static_cast<uint8_t>(m_value >> sync_id_f::Offset));}

	constexpr c15cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(c15cr_r other) const -> c15cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> c15cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request generator channel x control register
 */
class rg0cr_r {
public:

/**
 * DMA request trigger input selected
 */
class sig_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sig_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg0cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rg0cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg0cr_r>() const {return ClearSet<rg0cr_r>(Mask, *this);}
	constexpr auto operator|(rg0cr_r other) const -> rg0cr_r { return static_cast<rg0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg0cr_r> other) const -> ClearSet<rg0cr_r> {return ClearSet<rg0cr_r>(rg0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at trigger event overrun
 */
class oie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rg0cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rg0cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg0cr_r>() const {return ClearSet<rg0cr_r>(Mask, *this);}
	constexpr auto operator|(rg0cr_r other) const -> rg0cr_r { return static_cast<rg0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg0cr_r> other) const -> ClearSet<rg0cr_r> {return ClearSet<rg0cr_r>(rg0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA request generator channel enable/disable
 */
class ge_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ge_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rg0cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rg0cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg0cr_r>() const {return ClearSet<rg0cr_r>(Mask, *this);}
	constexpr auto operator|(rg0cr_r other) const -> rg0cr_r { return static_cast<rg0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg0cr_r> other) const -> ClearSet<rg0cr_r> {return ClearSet<rg0cr_r>(rg0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
 */
class gpol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr gpol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg0cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rg0cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg0cr_r>() const {return ClearSet<rg0cr_r>(Mask, *this);}
	constexpr auto operator|(rg0cr_r other) const -> rg0cr_r { return static_cast<rg0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg0cr_r> other) const -> ClearSet<rg0cr_r> {return ClearSet<rg0cr_r>(rg0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
 */
class gnbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr gnbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg0cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rg0cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg0cr_r>() const {return ClearSet<rg0cr_r>(Mask, *this);}
	constexpr auto operator|(rg0cr_r other) const -> rg0cr_r { return static_cast<rg0cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg0cr_r> other) const -> ClearSet<rg0cr_r> {return ClearSet<rg0cr_r>(rg0cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sig_id() const -> sig_id_f {return sig_id_f(static_cast<uint8_t>(m_value >> sig_id_f::Offset));}
	[[nodiscard]] constexpr auto oie() const -> oie_f {return oie_f((m_value & oie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ge() const -> ge_f {return ge_f((m_value & ge_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpol() const -> gpol_f {return gpol_f(static_cast<uint8_t>(m_value >> gpol_f::Offset));}
	[[nodiscard]] constexpr auto gnbreq() const -> gnbreq_f {return gnbreq_f(static_cast<uint8_t>(m_value >> gnbreq_f::Offset));}

	constexpr rg0cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rg0cr_r other) const -> rg0cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rg0cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 256;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request generator channel x control register
 */
class rg1cr_r {
public:

/**
 * DMA request trigger input selected
 */
class sig_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sig_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg1cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rg1cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg1cr_r>() const {return ClearSet<rg1cr_r>(Mask, *this);}
	constexpr auto operator|(rg1cr_r other) const -> rg1cr_r { return static_cast<rg1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg1cr_r> other) const -> ClearSet<rg1cr_r> {return ClearSet<rg1cr_r>(rg1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at trigger event overrun
 */
class oie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rg1cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rg1cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg1cr_r>() const {return ClearSet<rg1cr_r>(Mask, *this);}
	constexpr auto operator|(rg1cr_r other) const -> rg1cr_r { return static_cast<rg1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg1cr_r> other) const -> ClearSet<rg1cr_r> {return ClearSet<rg1cr_r>(rg1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA request generator channel enable/disable
 */
class ge_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ge_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rg1cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rg1cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg1cr_r>() const {return ClearSet<rg1cr_r>(Mask, *this);}
	constexpr auto operator|(rg1cr_r other) const -> rg1cr_r { return static_cast<rg1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg1cr_r> other) const -> ClearSet<rg1cr_r> {return ClearSet<rg1cr_r>(rg1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
 */
class gpol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr gpol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg1cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rg1cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg1cr_r>() const {return ClearSet<rg1cr_r>(Mask, *this);}
	constexpr auto operator|(rg1cr_r other) const -> rg1cr_r { return static_cast<rg1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg1cr_r> other) const -> ClearSet<rg1cr_r> {return ClearSet<rg1cr_r>(rg1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
 */
class gnbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr gnbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg1cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rg1cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg1cr_r>() const {return ClearSet<rg1cr_r>(Mask, *this);}
	constexpr auto operator|(rg1cr_r other) const -> rg1cr_r { return static_cast<rg1cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg1cr_r> other) const -> ClearSet<rg1cr_r> {return ClearSet<rg1cr_r>(rg1cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sig_id() const -> sig_id_f {return sig_id_f(static_cast<uint8_t>(m_value >> sig_id_f::Offset));}
	[[nodiscard]] constexpr auto oie() const -> oie_f {return oie_f((m_value & oie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ge() const -> ge_f {return ge_f((m_value & ge_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpol() const -> gpol_f {return gpol_f(static_cast<uint8_t>(m_value >> gpol_f::Offset));}
	[[nodiscard]] constexpr auto gnbreq() const -> gnbreq_f {return gnbreq_f(static_cast<uint8_t>(m_value >> gnbreq_f::Offset));}

	constexpr rg1cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rg1cr_r other) const -> rg1cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rg1cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 260;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request generator channel x control register
 */
class rg2cr_r {
public:

/**
 * DMA request trigger input selected
 */
class sig_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sig_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg2cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rg2cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg2cr_r>() const {return ClearSet<rg2cr_r>(Mask, *this);}
	constexpr auto operator|(rg2cr_r other) const -> rg2cr_r { return static_cast<rg2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg2cr_r> other) const -> ClearSet<rg2cr_r> {return ClearSet<rg2cr_r>(rg2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at trigger event overrun
 */
class oie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rg2cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rg2cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg2cr_r>() const {return ClearSet<rg2cr_r>(Mask, *this);}
	constexpr auto operator|(rg2cr_r other) const -> rg2cr_r { return static_cast<rg2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg2cr_r> other) const -> ClearSet<rg2cr_r> {return ClearSet<rg2cr_r>(rg2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA request generator channel enable/disable
 */
class ge_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ge_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rg2cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rg2cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg2cr_r>() const {return ClearSet<rg2cr_r>(Mask, *this);}
	constexpr auto operator|(rg2cr_r other) const -> rg2cr_r { return static_cast<rg2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg2cr_r> other) const -> ClearSet<rg2cr_r> {return ClearSet<rg2cr_r>(rg2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
 */
class gpol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr gpol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rg2cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg2cr_r>() const {return ClearSet<rg2cr_r>(Mask, *this);}
	constexpr auto operator|(rg2cr_r other) const -> rg2cr_r { return static_cast<rg2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg2cr_r> other) const -> ClearSet<rg2cr_r> {return ClearSet<rg2cr_r>(rg2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
 */
class gnbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr gnbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg2cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rg2cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg2cr_r>() const {return ClearSet<rg2cr_r>(Mask, *this);}
	constexpr auto operator|(rg2cr_r other) const -> rg2cr_r { return static_cast<rg2cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg2cr_r> other) const -> ClearSet<rg2cr_r> {return ClearSet<rg2cr_r>(rg2cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sig_id() const -> sig_id_f {return sig_id_f(static_cast<uint8_t>(m_value >> sig_id_f::Offset));}
	[[nodiscard]] constexpr auto oie() const -> oie_f {return oie_f((m_value & oie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ge() const -> ge_f {return ge_f((m_value & ge_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpol() const -> gpol_f {return gpol_f(static_cast<uint8_t>(m_value >> gpol_f::Offset));}
	[[nodiscard]] constexpr auto gnbreq() const -> gnbreq_f {return gnbreq_f(static_cast<uint8_t>(m_value >> gnbreq_f::Offset));}

	constexpr rg2cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rg2cr_r other) const -> rg2cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rg2cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 264;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request generator channel x control register
 */
class rg3cr_r {
public:

/**
 * DMA request trigger input selected
 */
class sig_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sig_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg3cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rg3cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg3cr_r>() const {return ClearSet<rg3cr_r>(Mask, *this);}
	constexpr auto operator|(rg3cr_r other) const -> rg3cr_r { return static_cast<rg3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg3cr_r> other) const -> ClearSet<rg3cr_r> {return ClearSet<rg3cr_r>(rg3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Interrupt enable at trigger event overrun
 */
class oie_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr oie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rg3cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rg3cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg3cr_r>() const {return ClearSet<rg3cr_r>(Mask, *this);}
	constexpr auto operator|(rg3cr_r other) const -> rg3cr_r { return static_cast<rg3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg3cr_r> other) const -> ClearSet<rg3cr_r> {return ClearSet<rg3cr_r>(rg3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA request generator channel enable/disable
 */
class ge_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ge_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rg3cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rg3cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg3cr_r>() const {return ClearSet<rg3cr_r>(Mask, *this);}
	constexpr auto operator|(rg3cr_r other) const -> rg3cr_r { return static_cast<rg3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg3cr_r> other) const -> ClearSet<rg3cr_r> {return ClearSet<rg3cr_r>(rg3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
 */
class gpol_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr gpol_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rg3cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg3cr_r>() const {return ClearSet<rg3cr_r>(Mask, *this);}
	constexpr auto operator|(rg3cr_r other) const -> rg3cr_r { return static_cast<rg3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg3cr_r> other) const -> ClearSet<rg3cr_r> {return ClearSet<rg3cr_r>(rg3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
 */
class gnbreq_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr gnbreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rg3cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rg3cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rg3cr_r>() const {return ClearSet<rg3cr_r>(Mask, *this);}
	constexpr auto operator|(rg3cr_r other) const -> rg3cr_r { return static_cast<rg3cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rg3cr_r> other) const -> ClearSet<rg3cr_r> {return ClearSet<rg3cr_r>(rg3cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto sig_id() const -> sig_id_f {return sig_id_f(static_cast<uint8_t>(m_value >> sig_id_f::Offset));}
	[[nodiscard]] constexpr auto oie() const -> oie_f {return oie_f((m_value & oie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ge() const -> ge_f {return ge_f((m_value & ge_f::Mask) != 0);}
	[[nodiscard]] constexpr auto gpol() const -> gpol_f {return gpol_f(static_cast<uint8_t>(m_value >> gpol_f::Offset));}
	[[nodiscard]] constexpr auto gnbreq() const -> gnbreq_f {return gnbreq_f(static_cast<uint8_t>(m_value >> gnbreq_f::Offset));}

	constexpr rg3cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rg3cr_r other) const -> rg3cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rg3cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 268;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request generator status register
 */
class rgsr_r {
public:

/**
 * Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.
 */
class of_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr of_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rgsr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rgsr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rgsr_r>() const {return ClearSet<rgsr_r>(Mask, *this);}
	constexpr auto operator|(rgsr_r other) const -> rgsr_r { return static_cast<rgsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rgsr_r> other) const -> ClearSet<rgsr_r> {return ClearSet<rgsr_r>(rgsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto of() const -> of_f {return of_f(static_cast<uint8_t>(m_value >> of_f::Offset));}

	constexpr rgsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rgsr_r other) const -> rgsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rgsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 320;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMux - DMA request generator clear flag register
 */
class rgcfr_r {
public:

/**
 * Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
 */
class cof_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr cof_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rgcfr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rgcfr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rgcfr_r>() const {return ClearSet<rgcfr_r>(Mask, *this);}
	constexpr auto operator|(rgcfr_r other) const -> rgcfr_r { return static_cast<rgcfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rgcfr_r> other) const -> ClearSet<rgcfr_r> {return ClearSet<rgcfr_r>(rgcfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto cof() const -> cof_f {return cof_f(static_cast<uint8_t>(m_value >> cof_f::Offset));}

	constexpr rgcfr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rgcfr_r other) const -> rgcfr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rgcfr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 324;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMUX request line multiplexer interrupt channel status register
 */
class csr_r {
public:

/**
 * Synchronization overrun event flag
 */
class sof_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr sof_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator csr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(csr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<csr_r>() const {return ClearSet<csr_r>(Mask, *this);}
	constexpr auto operator|(csr_r other) const -> csr_r { return static_cast<csr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<csr_r> other) const -> ClearSet<csr_r> {return ClearSet<csr_r>(csr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto sof() const -> sof_f {return sof_f(static_cast<uint16_t>(m_value >> sof_f::Offset));}

	constexpr csr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(csr_r other) const -> csr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> csr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DMAMUX request line multiplexer interrupt clear flag register
 */
class cfr_r {
public:

/**
 * Clear synchronization overrun event flag
 */
class csof_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr csof_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cfr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfr_r>() const {return ClearSet<cfr_r>(Mask, *this);}
	constexpr auto operator|(cfr_r other) const -> cfr_r { return static_cast<cfr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfr_r> other) const -> ClearSet<cfr_r> {return ClearSet<cfr_r>(cfr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto csof() const -> csof_f {return csof_f(static_cast<uint16_t>(m_value >> csof_f::Offset));}

	constexpr cfr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfr_r other) const -> cfr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 132;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,c0cr_r> c0cr;
	Memory<uint32_t,c1cr_r> c1cr;
	Memory<uint32_t,c2cr_r> c2cr;
	Memory<uint32_t,c3cr_r> c3cr;
	Memory<uint32_t,c4cr_r> c4cr;
	Memory<uint32_t,c5cr_r> c5cr;
	Memory<uint32_t,c6cr_r> c6cr;
	Memory<uint32_t,c7cr_r> c7cr;
	Memory<uint32_t,c8cr_r> c8cr;
	Memory<uint32_t,c9cr_r> c9cr;
	Memory<uint32_t,c10cr_r> c10cr;
	Memory<uint32_t,c11cr_r> c11cr;
	Memory<uint32_t,c12cr_r> c12cr;
	Memory<uint32_t,c13cr_r> c13cr;
	Memory<uint32_t,c14cr_r> c14cr;
	Memory<uint32_t,c15cr_r> c15cr;
	Padding<64> _p64;
	ReadOnlyMemory<uint32_t,csr_r> csr;
	WriteOnlyMemory<uint32_t,cfr_r> cfr;
	Padding<120> _p136;
	Memory<uint32_t,rg0cr_r> rg0cr;
	Memory<uint32_t,rg1cr_r> rg1cr;
	Memory<uint32_t,rg2cr_r> rg2cr;
	Memory<uint32_t,rg3cr_r> rg3cr;
	Padding<48> _p272;
	ReadOnlyMemory<uint32_t,rgsr_r> rgsr;
	WriteOnlyMemory<uint32_t,rgcfr_r> rgcfr;
};

static_assert(std::is_standard_layout_v<dmamux_p>);
static_assert(offsetof(dmamux_p, c0cr) == dmamux_p::c0cr_r::Offset);
static_assert(offsetof(dmamux_p, c1cr) == dmamux_p::c1cr_r::Offset);
static_assert(offsetof(dmamux_p, c2cr) == dmamux_p::c2cr_r::Offset);
static_assert(offsetof(dmamux_p, c3cr) == dmamux_p::c3cr_r::Offset);
static_assert(offsetof(dmamux_p, c4cr) == dmamux_p::c4cr_r::Offset);
static_assert(offsetof(dmamux_p, c5cr) == dmamux_p::c5cr_r::Offset);
static_assert(offsetof(dmamux_p, c6cr) == dmamux_p::c6cr_r::Offset);
static_assert(offsetof(dmamux_p, c7cr) == dmamux_p::c7cr_r::Offset);
static_assert(offsetof(dmamux_p, c8cr) == dmamux_p::c8cr_r::Offset);
static_assert(offsetof(dmamux_p, c9cr) == dmamux_p::c9cr_r::Offset);
static_assert(offsetof(dmamux_p, c10cr) == dmamux_p::c10cr_r::Offset);
static_assert(offsetof(dmamux_p, c11cr) == dmamux_p::c11cr_r::Offset);
static_assert(offsetof(dmamux_p, c12cr) == dmamux_p::c12cr_r::Offset);
static_assert(offsetof(dmamux_p, c13cr) == dmamux_p::c13cr_r::Offset);
static_assert(offsetof(dmamux_p, c14cr) == dmamux_p::c14cr_r::Offset);
static_assert(offsetof(dmamux_p, c15cr) == dmamux_p::c15cr_r::Offset);
static_assert(offsetof(dmamux_p, rg0cr) == dmamux_p::rg0cr_r::Offset);
static_assert(offsetof(dmamux_p, rg1cr) == dmamux_p::rg1cr_r::Offset);
static_assert(offsetof(dmamux_p, rg2cr) == dmamux_p::rg2cr_r::Offset);
static_assert(offsetof(dmamux_p, rg3cr) == dmamux_p::rg3cr_r::Offset);
static_assert(offsetof(dmamux_p, rgsr) == dmamux_p::rgsr_r::Offset);
static_assert(offsetof(dmamux_p, rgcfr) == dmamux_p::rgcfr_r::Offset);
static_assert(offsetof(dmamux_p, csr) == dmamux_p::csr_r::Offset);
static_assert(offsetof(dmamux_p, cfr) == dmamux_p::cfr_r::Offset);

inline dmamux_p& dmamux = *reinterpret_cast<dmamux_p*>(0x40020800);

} // STM32G473XX

