#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Memory protection unit
 */
class mpu_p {
public:
/**
 * MPU type register
 */
class typer_r {
public:

/**
 * Separate flag
 */
class separate_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr separate_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator typer_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(typer_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<typer_r>() const {return ClearSet<typer_r>(Mask, *this);}
	constexpr auto operator|(typer_r other) const -> typer_r { return static_cast<typer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<typer_r> other) const -> ClearSet<typer_r> {return ClearSet<typer_r>(typer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Number of MPU data regions
 */
class dregion_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dregion_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator typer_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(typer_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<typer_r>() const {return ClearSet<typer_r>(Mask, *this);}
	constexpr auto operator|(typer_r other) const -> typer_r { return static_cast<typer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<typer_r> other) const -> ClearSet<typer_r> {return ClearSet<typer_r>(typer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Number of MPU instruction regions
 */
class iregion_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr iregion_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator typer_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(typer_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<typer_r>() const {return ClearSet<typer_r>(Mask, *this);}
	constexpr auto operator|(typer_r other) const -> typer_r { return static_cast<typer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<typer_r> other) const -> ClearSet<typer_r> {return ClearSet<typer_r>(typer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto separate() const -> separate_f {return separate_f((m_value & separate_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dregion() const -> dregion_f {return dregion_f(static_cast<uint8_t>(m_value >> dregion_f::Offset));}
	[[nodiscard]] constexpr auto iregion() const -> iregion_f {return iregion_f(static_cast<uint8_t>(m_value >> iregion_f::Offset));}

	constexpr typer_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(typer_r other) const -> typer_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> typer_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b100000000000; // 2048 0x800

private:
	uint32_t m_value;
};
/**
 * MPU control register
 */
class ctrl_r {
public:

/**
 * Enables the MPU
 */
class enable_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr enable_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ctrl_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ctrl_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ctrl_r>() const {return ClearSet<ctrl_r>(Mask, *this);}
	constexpr auto operator|(ctrl_r other) const -> ctrl_r { return static_cast<ctrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ctrl_r> other) const -> ClearSet<ctrl_r> {return ClearSet<ctrl_r>(ctrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Enables the operation of MPU during hard fault
 */
class hfnmiena_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr hfnmiena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ctrl_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ctrl_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ctrl_r>() const {return ClearSet<ctrl_r>(Mask, *this);}
	constexpr auto operator|(ctrl_r other) const -> ctrl_r { return static_cast<ctrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ctrl_r> other) const -> ClearSet<ctrl_r> {return ClearSet<ctrl_r>(ctrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Enable priviliged software access to default memory map
 */
class privdefena_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr privdefena_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ctrl_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ctrl_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ctrl_r>() const {return ClearSet<ctrl_r>(Mask, *this);}
	constexpr auto operator|(ctrl_r other) const -> ctrl_r { return static_cast<ctrl_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ctrl_r> other) const -> ClearSet<ctrl_r> {return ClearSet<ctrl_r>(ctrl_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto enable() const -> enable_f {return enable_f((m_value & enable_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hfnmiena() const -> hfnmiena_f {return hfnmiena_f((m_value & hfnmiena_f::Mask) != 0);}
	[[nodiscard]] constexpr auto privdefena() const -> privdefena_f {return privdefena_f((m_value & privdefena_f::Mask) != 0);}

	constexpr ctrl_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ctrl_r other) const -> ctrl_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ctrl_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * MPU region number register
 */
class rnr_r {
public:

/**
 * MPU region
 */
class region_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr region_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rnr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rnr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rnr_r>() const {return ClearSet<rnr_r>(Mask, *this);}
	constexpr auto operator|(rnr_r other) const -> rnr_r { return static_cast<rnr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rnr_r> other) const -> ClearSet<rnr_r> {return ClearSet<rnr_r>(rnr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto region() const -> region_f {return region_f(static_cast<uint8_t>(m_value >> region_f::Offset));}

	constexpr rnr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rnr_r other) const -> rnr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rnr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * MPU region base address register
 */
class rbar_r {
public:

/**
 * MPU region field
 */
class region_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr region_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rbar_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rbar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rbar_r>() const {return ClearSet<rbar_r>(Mask, *this);}
	constexpr auto operator|(rbar_r other) const -> rbar_r { return static_cast<rbar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rbar_r> other) const -> ClearSet<rbar_r> {return ClearSet<rbar_r>(rbar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * MPU region number valid
 */
class valid_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr valid_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rbar_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rbar_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rbar_r>() const {return ClearSet<rbar_r>(Mask, *this);}
	constexpr auto operator|(rbar_r other) const -> rbar_r { return static_cast<rbar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rbar_r> other) const -> ClearSet<rbar_r> {return ClearSet<rbar_r>(rbar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Region base address field
 */
class addr_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 27;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr addr_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator rbar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rbar_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rbar_r>() const {return ClearSet<rbar_r>(Mask, *this);}
	constexpr auto operator|(rbar_r other) const -> rbar_r { return static_cast<rbar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rbar_r> other) const -> ClearSet<rbar_r> {return ClearSet<rbar_r>(rbar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto region() const -> region_f {return region_f(static_cast<uint8_t>(m_value >> region_f::Offset));}
	[[nodiscard]] constexpr auto valid() const -> valid_f {return valid_f((m_value & valid_f::Mask) != 0);}
	[[nodiscard]] constexpr auto addr() const -> addr_f {return addr_f(static_cast<uint32_t>(m_value >> addr_f::Offset));}

	constexpr rbar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rbar_r other) const -> rbar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rbar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * MPU region attribute and size register
 */
class rasr_r {
public:

/**
 * Region enable bit.
 */
class enable_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr enable_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rasr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rasr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rasr_r>() const {return ClearSet<rasr_r>(Mask, *this);}
	constexpr auto operator|(rasr_r other) const -> rasr_r { return static_cast<rasr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rasr_r> other) const -> ClearSet<rasr_r> {return ClearSet<rasr_r>(rasr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Size of the MPU protection region
 */
class size_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr size_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rasr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(rasr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rasr_r>() const {return ClearSet<rasr_r>(Mask, *this);}
	constexpr auto operator|(rasr_r other) const -> rasr_r { return static_cast<rasr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rasr_r> other) const -> ClearSet<rasr_r> {return ClearSet<rasr_r>(rasr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Subregion disable bits
 */
class srd_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr srd_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rasr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(rasr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rasr_r>() const {return ClearSet<rasr_r>(Mask, *this);}
	constexpr auto operator|(rasr_r other) const -> rasr_r { return static_cast<rasr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rasr_r> other) const -> ClearSet<rasr_r> {return ClearSet<rasr_r>(rasr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * memory attribute
 */
class b_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr b_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rasr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rasr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rasr_r>() const {return ClearSet<rasr_r>(Mask, *this);}
	constexpr auto operator|(rasr_r other) const -> rasr_r { return static_cast<rasr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rasr_r> other) const -> ClearSet<rasr_r> {return ClearSet<rasr_r>(rasr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * memory attribute
 */
class c_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr c_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rasr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rasr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rasr_r>() const {return ClearSet<rasr_r>(Mask, *this);}
	constexpr auto operator|(rasr_r other) const -> rasr_r { return static_cast<rasr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rasr_r> other) const -> ClearSet<rasr_r> {return ClearSet<rasr_r>(rasr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Shareable memory attribute
 */
class s_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr s_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rasr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rasr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rasr_r>() const {return ClearSet<rasr_r>(Mask, *this);}
	constexpr auto operator|(rasr_r other) const -> rasr_r { return static_cast<rasr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rasr_r> other) const -> ClearSet<rasr_r> {return ClearSet<rasr_r>(rasr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * memory attribute
 */
class tex_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr tex_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rasr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rasr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rasr_r>() const {return ClearSet<rasr_r>(Mask, *this);}
	constexpr auto operator|(rasr_r other) const -> rasr_r { return static_cast<rasr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rasr_r> other) const -> ClearSet<rasr_r> {return ClearSet<rasr_r>(rasr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Access permission
 */
class ap_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ap_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator rasr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(rasr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rasr_r>() const {return ClearSet<rasr_r>(Mask, *this);}
	constexpr auto operator|(rasr_r other) const -> rasr_r { return static_cast<rasr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rasr_r> other) const -> ClearSet<rasr_r> {return ClearSet<rasr_r>(rasr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Instruction access disable bit
 */
class xn_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr xn_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator rasr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(rasr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<rasr_r>() const {return ClearSet<rasr_r>(Mask, *this);}
	constexpr auto operator|(rasr_r other) const -> rasr_r { return static_cast<rasr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<rasr_r> other) const -> ClearSet<rasr_r> {return ClearSet<rasr_r>(rasr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto enable() const -> enable_f {return enable_f((m_value & enable_f::Mask) != 0);}
	[[nodiscard]] constexpr auto size() const -> size_f {return size_f(static_cast<uint8_t>(m_value >> size_f::Offset));}
	[[nodiscard]] constexpr auto srd() const -> srd_f {return srd_f(static_cast<uint8_t>(m_value >> srd_f::Offset));}
	[[nodiscard]] constexpr auto b() const -> b_f {return b_f((m_value & b_f::Mask) != 0);}
	[[nodiscard]] constexpr auto c() const -> c_f {return c_f((m_value & c_f::Mask) != 0);}
	[[nodiscard]] constexpr auto s() const -> s_f {return s_f((m_value & s_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tex() const -> tex_f {return tex_f(static_cast<uint8_t>(m_value >> tex_f::Offset));}
	[[nodiscard]] constexpr auto ap() const -> ap_f {return ap_f(static_cast<uint8_t>(m_value >> ap_f::Offset));}
	[[nodiscard]] constexpr auto xn() const -> xn_f {return xn_f((m_value & xn_f::Mask) != 0);}

	constexpr rasr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(rasr_r other) const -> rasr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> rasr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	ReadOnlyMemory<uint32_t,typer_r> typer;
	Memory<uint32_t,ctrl_r> ctrl;
	Memory<uint32_t,rnr_r> rnr;
	Memory<uint32_t,rbar_r> rbar;
	Memory<uint32_t,rasr_r> rasr;
};

static_assert(std::is_standard_layout_v<mpu_p>);
static_assert(offsetof(mpu_p, typer) == mpu_p::typer_r::Offset);
static_assert(offsetof(mpu_p, ctrl) == mpu_p::ctrl_r::Offset);
static_assert(offsetof(mpu_p, rnr) == mpu_p::rnr_r::Offset);
static_assert(offsetof(mpu_p, rbar) == mpu_p::rbar_r::Offset);
static_assert(offsetof(mpu_p, rasr) == mpu_p::rasr_r::Offset);

inline mpu_p& mpu = *reinterpret_cast<mpu_p*>(0xE000E084);

} // STM32G473XX

