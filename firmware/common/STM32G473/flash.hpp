#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Flash
 */
class flash_p {
public:
/**
 * Access control register
 */
class acr_r {
public:

/**
 * Latency
 */
class latency_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr latency_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator acr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(acr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr_r>() const {return ClearSet<acr_r>(Mask, *this);}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr_r> other) const -> ClearSet<acr_r> {return ClearSet<acr_r>(acr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Prefetch enable
 */
class prften_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr prften_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr_r>() const {return ClearSet<acr_r>(Mask, *this);}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr_r> other) const -> ClearSet<acr_r> {return ClearSet<acr_r>(acr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Instruction cache enable
 */
class icen_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr icen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr_r>() const {return ClearSet<acr_r>(Mask, *this);}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr_r> other) const -> ClearSet<acr_r> {return ClearSet<acr_r>(acr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Data cache enable
 */
class dcen_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dcen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr_r>() const {return ClearSet<acr_r>(Mask, *this);}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr_r> other) const -> ClearSet<acr_r> {return ClearSet<acr_r>(acr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Instruction cache reset
 */
class icrst_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr icrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr_r>() const {return ClearSet<acr_r>(Mask, *this);}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr_r> other) const -> ClearSet<acr_r> {return ClearSet<acr_r>(acr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Data cache reset
 */
class dcrst_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dcrst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr_r>() const {return ClearSet<acr_r>(Mask, *this);}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr_r> other) const -> ClearSet<acr_r> {return ClearSet<acr_r>(acr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Flash Power-down mode during Low-power run mode
 */
class run_pd_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr run_pd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr_r>() const {return ClearSet<acr_r>(Mask, *this);}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr_r> other) const -> ClearSet<acr_r> {return ClearSet<acr_r>(acr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Flash Power-down mode during Low-power sleep mode
 */
class sleep_pd_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sleep_pd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr_r>() const {return ClearSet<acr_r>(Mask, *this);}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr_r> other) const -> ClearSet<acr_r> {return ClearSet<acr_r>(acr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Debug software enable
 */
class dbg_swen_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dbg_swen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator acr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(acr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<acr_r>() const {return ClearSet<acr_r>(Mask, *this);}
	constexpr auto operator|(acr_r other) const -> acr_r { return static_cast<acr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<acr_r> other) const -> ClearSet<acr_r> {return ClearSet<acr_r>(acr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto latency() const -> latency_f {return latency_f(static_cast<uint8_t>(m_value >> latency_f::Offset));}
	[[nodiscard]] constexpr auto prften() const -> prften_f {return prften_f((m_value & prften_f::Mask) != 0);}
	[[nodiscard]] constexpr auto icen() const -> icen_f {return icen_f((m_value & icen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dcen() const -> dcen_f {return dcen_f((m_value & dcen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto icrst() const -> icrst_f {return icrst_f((m_value & icrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dcrst() const -> dcrst_f {return dcrst_f((m_value & dcrst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto run_pd() const -> run_pd_f {return run_pd_f((m_value & run_pd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sleep_pd() const -> sleep_pd_f {return sleep_pd_f((m_value & sleep_pd_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dbg_swen() const -> dbg_swen_f {return dbg_swen_f((m_value & dbg_swen_f::Mask) != 0);}

	constexpr acr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(acr_r other) const -> acr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> acr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b11000000000; // 1536 0x600

private:
	uint32_t m_value;
};
/**
 * Power down key register
 */
class pdkeyr_r {
public:

/**
 * RUN_PD in FLASH_ACR key
 */
class pdkeyr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr pdkeyr_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator pdkeyr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(pdkeyr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pdkeyr_r>() const {return ClearSet<pdkeyr_r>(Mask, *this);}
	constexpr auto operator|(pdkeyr_r other) const -> pdkeyr_r { return static_cast<pdkeyr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pdkeyr_r> other) const -> ClearSet<pdkeyr_r> {return ClearSet<pdkeyr_r>(pdkeyr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto pdkeyr() const -> pdkeyr_f {return pdkeyr_f(static_cast<uint32_t>(m_value >> pdkeyr_f::Offset));}

	constexpr pdkeyr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pdkeyr_r other) const -> pdkeyr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pdkeyr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Flash key register
 */
class keyr_r {
public:

/**
 * KEYR
 */
class keyr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr keyr_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator keyr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(keyr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<keyr_r>() const {return ClearSet<keyr_r>(Mask, *this);}
	constexpr auto operator|(keyr_r other) const -> keyr_r { return static_cast<keyr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<keyr_r> other) const -> ClearSet<keyr_r> {return ClearSet<keyr_r>(keyr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto keyr() const -> keyr_f {return keyr_f(static_cast<uint32_t>(m_value >> keyr_f::Offset));}

	constexpr keyr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(keyr_r other) const -> keyr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> keyr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Option byte key register
 */
class optkeyr_r {
public:

/**
 * Option byte key
 */
class optkeyr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr optkeyr_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator optkeyr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(optkeyr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optkeyr_r>() const {return ClearSet<optkeyr_r>(Mask, *this);}
	constexpr auto operator|(optkeyr_r other) const -> optkeyr_r { return static_cast<optkeyr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optkeyr_r> other) const -> ClearSet<optkeyr_r> {return ClearSet<optkeyr_r>(optkeyr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto optkeyr() const -> optkeyr_f {return optkeyr_f(static_cast<uint32_t>(m_value >> optkeyr_f::Offset));}

	constexpr optkeyr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(optkeyr_r other) const -> optkeyr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> optkeyr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Status register
 */
class sr_r {
public:

/**
 * End of operation
 */
class eop_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr eop_f(bool value = true) : m_value(value) {}
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
 * Operation error
 */
class operr_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr operr_f(bool value = true) : m_value(value) {}
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
 * Programming error
 */
class progerr_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr progerr_f(bool value = true) : m_value(value) {}
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
 * Write protected error
 */
class wrperr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wrperr_f(bool value = true) : m_value(value) {}
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
 * Programming alignment error
 */
class pgaerr_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pgaerr_f(bool value = true) : m_value(value) {}
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
 * Size error
 */
class sizerr_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr sizerr_f(bool value = true) : m_value(value) {}
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
 * Programming sequence error
 */
class pgserr_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pgserr_f(bool value = true) : m_value(value) {}
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
 * Fast programming data miss error
 */
class miserr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr miserr_f(bool value = true) : m_value(value) {}
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
 * Fast programming error
 */
class fasterr_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr fasterr_f(bool value = true) : m_value(value) {}
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
 * PCROP read error
 */
class rderr_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rderr_f(bool value = true) : m_value(value) {}
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
 * Option validity error
 */
class optverr_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr optverr_f(bool value = true) : m_value(value) {}
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
 * Busy
 */
class bsy_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bsy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto eop() const -> eop_f {return eop_f((m_value & eop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto operr() const -> operr_f {return operr_f((m_value & operr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto progerr() const -> progerr_f {return progerr_f((m_value & progerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wrperr() const -> wrperr_f {return wrperr_f((m_value & wrperr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pgaerr() const -> pgaerr_f {return pgaerr_f((m_value & pgaerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sizerr() const -> sizerr_f {return sizerr_f((m_value & sizerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pgserr() const -> pgserr_f {return pgserr_f((m_value & pgserr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto miserr() const -> miserr_f {return miserr_f((m_value & miserr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fasterr() const -> fasterr_f {return fasterr_f((m_value & fasterr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rderr() const -> rderr_f {return rderr_f((m_value & rderr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto optverr() const -> optverr_f {return optverr_f((m_value & optverr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bsy() const -> bsy_f {return bsy_f((m_value & bsy_f::Mask) != 0);}

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
 * Flash control register
 */
class cr_r {
public:

/**
 * Programming
 */
class pg_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pg_f(bool value = true) : m_value(value) {}
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
 * Page erase
 */
class per_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr per_f(bool value = true) : m_value(value) {}
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
 * Bank 1 Mass erase
 */
class mer1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr mer1_f(bool value = true) : m_value(value) {}
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
 * Page number
 */
class pnb_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pnb_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Start
 */
class strt_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr strt_f(bool value = true) : m_value(value) {}
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
 * Options modification start
 */
class optstrt_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr optstrt_f(bool value = true) : m_value(value) {}
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
 * Fast programming
 */
class fstpg_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr fstpg_f(bool value = true) : m_value(value) {}
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
 * End of operation interrupt enable
 */
class eopie_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eopie_f(bool value = true) : m_value(value) {}
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
 * Error interrupt enable
 */
class errie_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr errie_f(bool value = true) : m_value(value) {}
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
 * PCROP read error interrupt enable
 */
class rderrie_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr rderrie_f(bool value = true) : m_value(value) {}
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
 * Force the option byte loading
 */
class obl_launch_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr obl_launch_f(bool value = true) : m_value(value) {}
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
 * SEC_PROT1
 */
class sec_prot1_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sec_prot1_f(bool value = true) : m_value(value) {}
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
 * Options Lock
 */
class optlock_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr optlock_f(bool value = true) : m_value(value) {}
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
 * FLASH_CR Lock
 */
class lock_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pg() const -> pg_f {return pg_f((m_value & pg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto per() const -> per_f {return per_f((m_value & per_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mer1() const -> mer1_f {return mer1_f((m_value & mer1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pnb() const -> pnb_f {return pnb_f(static_cast<uint8_t>(m_value >> pnb_f::Offset));}
	[[nodiscard]] constexpr auto strt() const -> strt_f {return strt_f((m_value & strt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto optstrt() const -> optstrt_f {return optstrt_f((m_value & optstrt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fstpg() const -> fstpg_f {return fstpg_f((m_value & fstpg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eopie() const -> eopie_f {return eopie_f((m_value & eopie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto errie() const -> errie_f {return errie_f((m_value & errie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rderrie() const -> rderrie_f {return rderrie_f((m_value & rderrie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto obl_launch() const -> obl_launch_f {return obl_launch_f((m_value & obl_launch_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sec_prot1() const -> sec_prot1_f {return sec_prot1_f((m_value & sec_prot1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto optlock() const -> optlock_f {return optlock_f((m_value & optlock_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lock() const -> lock_f {return lock_f((m_value & lock_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0b11000000000000000000000000000000; // 3221225472 0xC0000000

private:
	uint32_t m_value;
};
/**
 * Flash ECC register
 */
class eccr_r {
public:

/**
 * ECC fail address
 */
class addr_ecc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 19;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b1111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr addr_ecc_f(uint32_t value) : m_value(value & Range) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator eccr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(eccr_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<eccr_r>() const {return ClearSet<eccr_r>(Mask, *this);}
	constexpr auto operator|(eccr_r other) const -> eccr_r { return static_cast<eccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<eccr_r> other) const -> ClearSet<eccr_r> {return ClearSet<eccr_r>(eccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

/**
 * BK_ECC
 */
class bk_ecc_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bk_ecc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator eccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(eccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<eccr_r>() const {return ClearSet<eccr_r>(Mask, *this);}
	constexpr auto operator|(eccr_r other) const -> eccr_r { return static_cast<eccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<eccr_r> other) const -> ClearSet<eccr_r> {return ClearSet<eccr_r>(eccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SYSF_ECC
 */
class sysf_ecc_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sysf_ecc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator eccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(eccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<eccr_r>() const {return ClearSet<eccr_r>(Mask, *this);}
	constexpr auto operator|(eccr_r other) const -> eccr_r { return static_cast<eccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<eccr_r> other) const -> ClearSet<eccr_r> {return ClearSet<eccr_r>(eccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ECCIE
 */
class eccie_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eccie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator eccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(eccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<eccr_r>() const {return ClearSet<eccr_r>(Mask, *this);}
	constexpr auto operator|(eccr_r other) const -> eccr_r { return static_cast<eccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<eccr_r> other) const -> ClearSet<eccr_r> {return ClearSet<eccr_r>(eccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ECC correction
 */
class eccc2_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eccc2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator eccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(eccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<eccr_r>() const {return ClearSet<eccr_r>(Mask, *this);}
	constexpr auto operator|(eccr_r other) const -> eccr_r { return static_cast<eccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<eccr_r> other) const -> ClearSet<eccr_r> {return ClearSet<eccr_r>(eccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ECC2 detection
 */
class eccd2_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eccd2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator eccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(eccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<eccr_r>() const {return ClearSet<eccr_r>(Mask, *this);}
	constexpr auto operator|(eccr_r other) const -> eccr_r { return static_cast<eccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<eccr_r> other) const -> ClearSet<eccr_r> {return ClearSet<eccr_r>(eccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ECC correction
 */
class eccc_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eccc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator eccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(eccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<eccr_r>() const {return ClearSet<eccr_r>(Mask, *this);}
	constexpr auto operator|(eccr_r other) const -> eccr_r { return static_cast<eccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<eccr_r> other) const -> ClearSet<eccr_r> {return ClearSet<eccr_r>(eccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ECC detection
 */
class eccd_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr eccd_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator eccr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(eccr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<eccr_r>() const {return ClearSet<eccr_r>(Mask, *this);}
	constexpr auto operator|(eccr_r other) const -> eccr_r { return static_cast<eccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<eccr_r> other) const -> ClearSet<eccr_r> {return ClearSet<eccr_r>(eccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto addr_ecc() const -> addr_ecc_f {return addr_ecc_f(static_cast<uint32_t>(m_value >> addr_ecc_f::Offset));}
	[[nodiscard]] constexpr auto bk_ecc() const -> bk_ecc_f {return bk_ecc_f((m_value & bk_ecc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sysf_ecc() const -> sysf_ecc_f {return sysf_ecc_f((m_value & sysf_ecc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eccie() const -> eccie_f {return eccie_f((m_value & eccie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eccc2() const -> eccc2_f {return eccc2_f((m_value & eccc2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eccd2() const -> eccd2_f {return eccd2_f((m_value & eccd2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eccc() const -> eccc_f {return eccc_f((m_value & eccc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto eccd() const -> eccd_f {return eccd_f((m_value & eccd_f::Mask) != 0);}

	constexpr eccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(eccr_r other) const -> eccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> eccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Flash option register
 */
class optr_r {
public:

/**
 * Read protection level
 */
class rdp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr rdp_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator optr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(optr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * BOR reset Level
 */
class bor_lev_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr bor_lev_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator optr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(optr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * nRST_STOP
 */
class nrst_stop_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr nrst_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * nRST_STDBY
 */
class nrst_stdby_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr nrst_stdby_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * nRST_SHDW
 */
class nrst_shdw_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr nrst_shdw_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Independent watchdog selection
 */
class idwg_sw_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr idwg_sw_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Independent watchdog counter freeze in Stop mode
 */
class iwdg_stop_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr iwdg_stop_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Independent watchdog counter freeze in Standby mode
 */
class iwdg_stdby_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr iwdg_stdby_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Window watchdog selection
 */
class wwdg_sw_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wwdg_sw_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Boot configuration
 */
class nboot1_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr nboot1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SRAM2 parity check enable
 */
class sram2_pe_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sram2_pe_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SRAM2 Erase when system reset
 */
class sram2_rst_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sram2_rst_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * nSWBOOT0
 */
class nswboot0_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr nswboot0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * nBOOT0
 */
class nboot0_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr nboot0_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * NRST_MODE
 */
class nrst_mode_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr nrst_mode_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator optr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(optr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * IRHEN
 */
class irhen_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr irhen_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator optr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(optr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<optr_r>() const {return ClearSet<optr_r>(Mask, *this);}
	constexpr auto operator|(optr_r other) const -> optr_r { return static_cast<optr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<optr_r> other) const -> ClearSet<optr_r> {return ClearSet<optr_r>(optr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto rdp() const -> rdp_f {return rdp_f(static_cast<uint8_t>(m_value >> rdp_f::Offset));}
	[[nodiscard]] constexpr auto bor_lev() const -> bor_lev_f {return bor_lev_f(static_cast<uint8_t>(m_value >> bor_lev_f::Offset));}
	[[nodiscard]] constexpr auto nrst_stop() const -> nrst_stop_f {return nrst_stop_f((m_value & nrst_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nrst_stdby() const -> nrst_stdby_f {return nrst_stdby_f((m_value & nrst_stdby_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nrst_shdw() const -> nrst_shdw_f {return nrst_shdw_f((m_value & nrst_shdw_f::Mask) != 0);}
	[[nodiscard]] constexpr auto idwg_sw() const -> idwg_sw_f {return idwg_sw_f((m_value & idwg_sw_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iwdg_stop() const -> iwdg_stop_f {return iwdg_stop_f((m_value & iwdg_stop_f::Mask) != 0);}
	[[nodiscard]] constexpr auto iwdg_stdby() const -> iwdg_stdby_f {return iwdg_stdby_f((m_value & iwdg_stdby_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wwdg_sw() const -> wwdg_sw_f {return wwdg_sw_f((m_value & wwdg_sw_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nboot1() const -> nboot1_f {return nboot1_f((m_value & nboot1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sram2_pe() const -> sram2_pe_f {return sram2_pe_f((m_value & sram2_pe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sram2_rst() const -> sram2_rst_f {return sram2_rst_f((m_value & sram2_rst_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nswboot0() const -> nswboot0_f {return nswboot0_f((m_value & nswboot0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nboot0() const -> nboot0_f {return nboot0_f((m_value & nboot0_f::Mask) != 0);}
	[[nodiscard]] constexpr auto nrst_mode() const -> nrst_mode_f {return nrst_mode_f(static_cast<uint8_t>(m_value >> nrst_mode_f::Offset));}
	[[nodiscard]] constexpr auto irhen() const -> irhen_f {return irhen_f((m_value & irhen_f::Mask) != 0);}

	template<std::size_t Index> struct nboot_f { static_assert(Index == 1 || Index == 0); };
	template<std::size_t Index> using nboot_v = typename nboot_f<Index>::type;
	template<std::size_t Index> constexpr auto nboot() const { return nboot_v<Index>::get(*this); }

	constexpr optr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(optr_r other) const -> optr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> optr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0b11110000000000000000000000000000; // 4026531840 0xF0000000

private:
	uint32_t m_value;
};
/**
 * Flash Bank 1 PCROP Start address register
 */
class pcrop1sr_r {
public:

/**
 * Bank 1 PCROP area start offset
 */
class pcrop1_strt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 15;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pcrop1_strt_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator pcrop1sr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pcrop1sr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcrop1sr_r>() const {return ClearSet<pcrop1sr_r>(Mask, *this);}
	constexpr auto operator|(pcrop1sr_r other) const -> pcrop1sr_r { return static_cast<pcrop1sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcrop1sr_r> other) const -> ClearSet<pcrop1sr_r> {return ClearSet<pcrop1sr_r>(pcrop1sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto pcrop1_strt() const -> pcrop1_strt_f {return pcrop1_strt_f(static_cast<uint16_t>(m_value >> pcrop1_strt_f::Offset));}

	constexpr pcrop1sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pcrop1sr_r other) const -> pcrop1sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pcrop1sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0b11111111111111110000000000000000; // 4294901760 0xFFFF0000

private:
	uint32_t m_value;
};
/**
 * Flash Bank 1 PCROP End address register
 */
class pcrop1er_r {
public:

/**
 * Bank 1 PCROP area end offset
 */
class pcrop1_end_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 15;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr pcrop1_end_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator pcrop1er_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(pcrop1er_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcrop1er_r>() const {return ClearSet<pcrop1er_r>(Mask, *this);}
	constexpr auto operator|(pcrop1er_r other) const -> pcrop1er_r { return static_cast<pcrop1er_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcrop1er_r> other) const -> ClearSet<pcrop1er_r> {return ClearSet<pcrop1er_r>(pcrop1er_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * PCROP area preserved when RDP level decreased
 */
class pcrop_rdp_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pcrop_rdp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator pcrop1er_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(pcrop1er_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<pcrop1er_r>() const {return ClearSet<pcrop1er_r>(Mask, *this);}
	constexpr auto operator|(pcrop1er_r other) const -> pcrop1er_r { return static_cast<pcrop1er_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<pcrop1er_r> other) const -> ClearSet<pcrop1er_r> {return ClearSet<pcrop1er_r>(pcrop1er_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto pcrop1_end() const -> pcrop1_end_f {return pcrop1_end_f(static_cast<uint16_t>(m_value >> pcrop1_end_f::Offset));}
	[[nodiscard]] constexpr auto pcrop_rdp() const -> pcrop_rdp_f {return pcrop_rdp_f((m_value & pcrop_rdp_f::Mask) != 0);}

	constexpr pcrop1er_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(pcrop1er_r other) const -> pcrop1er_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> pcrop1er_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0b1111111111110000000000000000; // 268369920 0xFFF0000

private:
	uint32_t m_value;
};
/**
 * Flash Bank 1 WRP area A address register
 */
class wrp1ar_r {
public:

/**
 * Bank 1 WRP first area start offset
 */
class wrp1a_strt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr wrp1a_strt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator wrp1ar_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(wrp1ar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<wrp1ar_r>() const {return ClearSet<wrp1ar_r>(Mask, *this);}
	constexpr auto operator|(wrp1ar_r other) const -> wrp1ar_r { return static_cast<wrp1ar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<wrp1ar_r> other) const -> ClearSet<wrp1ar_r> {return ClearSet<wrp1ar_r>(wrp1ar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Bank 1 WRP first area A end offset
 */
class wrp1a_end_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr wrp1a_end_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator wrp1ar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(wrp1ar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<wrp1ar_r>() const {return ClearSet<wrp1ar_r>(Mask, *this);}
	constexpr auto operator|(wrp1ar_r other) const -> wrp1ar_r { return static_cast<wrp1ar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<wrp1ar_r> other) const -> ClearSet<wrp1ar_r> {return ClearSet<wrp1ar_r>(wrp1ar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto wrp1a_strt() const -> wrp1a_strt_f {return wrp1a_strt_f(static_cast<uint8_t>(m_value >> wrp1a_strt_f::Offset));}
	[[nodiscard]] constexpr auto wrp1a_end() const -> wrp1a_end_f {return wrp1a_end_f(static_cast<uint8_t>(m_value >> wrp1a_end_f::Offset));}

	constexpr wrp1ar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(wrp1ar_r other) const -> wrp1ar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> wrp1ar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Flash Bank 1 WRP area B address register
 */
class wrp1br_r {
public:

/**
 * Bank 1 WRP second area B end offset
 */
class wrp1b_strt_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr wrp1b_strt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator wrp1br_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(wrp1br_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<wrp1br_r>() const {return ClearSet<wrp1br_r>(Mask, *this);}
	constexpr auto operator|(wrp1br_r other) const -> wrp1br_r { return static_cast<wrp1br_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<wrp1br_r> other) const -> ClearSet<wrp1br_r> {return ClearSet<wrp1br_r>(wrp1br_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Bank 1 WRP second area B start offset
 */
class wrp1b_end_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr wrp1b_end_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator wrp1br_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(wrp1br_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<wrp1br_r>() const {return ClearSet<wrp1br_r>(Mask, *this);}
	constexpr auto operator|(wrp1br_r other) const -> wrp1br_r { return static_cast<wrp1br_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<wrp1br_r> other) const -> ClearSet<wrp1br_r> {return ClearSet<wrp1br_r>(wrp1br_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto wrp1b_strt() const -> wrp1b_strt_f {return wrp1b_strt_f(static_cast<uint8_t>(m_value >> wrp1b_strt_f::Offset));}
	[[nodiscard]] constexpr auto wrp1b_end() const -> wrp1b_end_f {return wrp1b_end_f(static_cast<uint8_t>(m_value >> wrp1b_end_f::Offset));}

	constexpr wrp1br_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(wrp1br_r other) const -> wrp1br_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> wrp1br_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * securable area bank1 register
 */
class sec1r_r {
public:

/**
 * BOOT_LOCK
 */
class boot_lock_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr boot_lock_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sec1r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sec1r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sec1r_r>() const {return ClearSet<sec1r_r>(Mask, *this);}
	constexpr auto operator|(sec1r_r other) const -> sec1r_r { return static_cast<sec1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sec1r_r> other) const -> ClearSet<sec1r_r> {return ClearSet<sec1r_r>(sec1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SEC_SIZE1
 */
class sec_size1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr sec_size1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator sec1r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(sec1r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sec1r_r>() const {return ClearSet<sec1r_r>(Mask, *this);}
	constexpr auto operator|(sec1r_r other) const -> sec1r_r { return static_cast<sec1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sec1r_r> other) const -> ClearSet<sec1r_r> {return ClearSet<sec1r_r>(sec1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto boot_lock() const -> boot_lock_f {return boot_lock_f((m_value & boot_lock_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sec_size1() const -> sec_size1_f {return sec_size1_f(static_cast<uint8_t>(m_value >> sec_size1_f::Offset));}

	constexpr sec1r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sec1r_r other) const -> sec1r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sec1r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 112;
	static constexpr uint32_t ResetValue = 0b11111111000000001111111100000000; // 4278255360 0xFF00FF00

private:
	uint32_t m_value;
};

	Memory<uint32_t,acr_r> acr;
	WriteOnlyMemory<uint32_t,pdkeyr_r> pdkeyr;
	WriteOnlyMemory<uint32_t,keyr_r> keyr;
	WriteOnlyMemory<uint32_t,optkeyr_r> optkeyr;
	Memory<uint32_t,sr_r> sr;
	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,eccr_r> eccr;
	Padding<4> _p28;
	Memory<uint32_t,optr_r> optr;
	Memory<uint32_t,pcrop1sr_r> pcrop1sr;
	Memory<uint32_t,pcrop1er_r> pcrop1er;
	Memory<uint32_t,wrp1ar_r> wrp1ar;
	Memory<uint32_t,wrp1br_r> wrp1br;
	Padding<60> _p52;
	Memory<uint32_t,sec1r_r> sec1r;
};

template<> struct flash_p::optr_r::nboot_f<1> { using type = flash_p::optr_r::nboot1_f; };
template<> struct flash_p::optr_r::nboot_f<0> { using type = flash_p::optr_r::nboot0_f; };

static_assert(std::is_standard_layout_v<flash_p>);
static_assert(offsetof(flash_p, acr) == flash_p::acr_r::Offset);
static_assert(offsetof(flash_p, pdkeyr) == flash_p::pdkeyr_r::Offset);
static_assert(offsetof(flash_p, keyr) == flash_p::keyr_r::Offset);
static_assert(offsetof(flash_p, optkeyr) == flash_p::optkeyr_r::Offset);
static_assert(offsetof(flash_p, sr) == flash_p::sr_r::Offset);
static_assert(offsetof(flash_p, cr) == flash_p::cr_r::Offset);
static_assert(offsetof(flash_p, eccr) == flash_p::eccr_r::Offset);
static_assert(offsetof(flash_p, optr) == flash_p::optr_r::Offset);
static_assert(offsetof(flash_p, pcrop1sr) == flash_p::pcrop1sr_r::Offset);
static_assert(offsetof(flash_p, pcrop1er) == flash_p::pcrop1er_r::Offset);
static_assert(offsetof(flash_p, wrp1ar) == flash_p::wrp1ar_r::Offset);
static_assert(offsetof(flash_p, wrp1br) == flash_p::wrp1br_r::Offset);
static_assert(offsetof(flash_p, sec1r) == flash_p::sec1r_r::Offset);

inline flash_p& flash = *reinterpret_cast<flash_p*>(0x40022000);

} // STM32G473XX

