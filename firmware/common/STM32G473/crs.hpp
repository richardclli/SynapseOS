#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * CRS
 */
class crs_p {
public:
/**
 * CRS control register
 */
class cr_r {
public:

/**
 * SYNC event OK interrupt enable
 */
class syncokie_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr syncokie_f(bool value = true) : m_value(value) {}
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
 * SYNC warning interrupt enable
 */
class syncwarnie_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr syncwarnie_f(bool value = true) : m_value(value) {}
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
 * Synchronization or trimming error interrupt enable
 */
class errie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

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
 * Expected SYNC interrupt enable
 */
class esyncie_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr esyncie_f(bool value = true) : m_value(value) {}
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
 * Frequency error counter enable This bit enables the oscillator clock for the frequency error counter. When this bit is set, the CRS_CFGR register is write-protected and cannot be modified.
 */
class cen_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cen_f(bool value = true) : m_value(value) {}
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
 * Automatic trimming enable This bit enables the automatic hardware adjustment of TRIM bits according to the measured frequency error between two SYNC events. If this bit is set, the TRIM bits are read-only. The TRIM value can be adjusted by hardware by one or two steps at a time, depending on the measured frequency error value. Refer to Section7.3.4: Frequency error evaluation and automatic trimming for more details.
 */
class autotrimen_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr autotrimen_f(bool value = true) : m_value(value) {}
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
 * Generate software SYNC event This bit is set by software in order to generate a software SYNC event. It is automatically cleared by hardware.
 */
class swsync_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swsync_f(bool value = true) : m_value(value) {}
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
 * HSI48 oscillator smooth trimming These bits provide a user-programmable trimming value to the HSI48 oscillator. They can be programmed to adjust to variations in voltage and temperature that influence the frequency of the HSI48. The default value is 32, which corresponds to the middle of the trimming interval. The trimming step is around 67 kHz between two consecutive TRIM steps. A higher TRIM value corresponds to a higher output frequency. When the AUTOTRIMEN bit is set, this field is controlled by hardware and is read-only.
 */
class trim_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr trim_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto syncokie() const -> syncokie_f {return syncokie_f((m_value & syncokie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto syncwarnie() const -> syncwarnie_f {return syncwarnie_f((m_value & syncwarnie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto errie() const -> errie_f {return errie_f((m_value & errie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto esyncie() const -> esyncie_f {return esyncie_f((m_value & esyncie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cen() const -> cen_f {return cen_f((m_value & cen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto autotrimen() const -> autotrimen_f {return autotrimen_f((m_value & autotrimen_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swsync() const -> swsync_f {return swsync_f((m_value & swsync_f::Mask) != 0);}
	[[nodiscard]] constexpr auto trim() const -> trim_f {return trim_f(static_cast<uint8_t>(m_value >> trim_f::Offset));}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0b100000000000000; // 16384 0x4000

private:
	uint32_t m_value;
};
/**
 * This register can be written only when the frequency error counter is disabled (CEN bit is cleared in CRS_CR). When the counter is enabled, this register is write-protected.
 */
class cfgr_r {
public:

/**
 * Counter reload value RELOAD is the value to be loaded in the frequency error counter with each SYNC event. Refer to Section7.3.3: Frequency error measurement for more details about counter behavior.
 */
class reload_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr reload_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator cfgr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(cfgr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * Frequency error limit FELIM contains the value to be used to evaluate the captured frequency error value latched in the FECAP[15:0] bits of the CRS_ISR register. Refer to Section7.3.4: Frequency error evaluation and automatic trimming for more details about FECAP evaluation.
 */
class felim_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr felim_f(uint8_t value) : m_value(value) {}
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
 * SYNC divider These bits are set and cleared by software to control the division factor of the SYNC signal.
 */
class syncdiv_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr syncdiv_f(uint8_t value) : m_value(value & Range) {}
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
 * SYNC signal source selection These bits are set and cleared by software to select the SYNC signal source. Note: When using USB LPM (Link Power Management) and the device is in Sleep mode, the periodic USB SOF will not be generated by the host. No SYNC signal will therefore be provided to the CRS to calibrate the HSI48 on the run. To guarantee the required clock precision after waking up from Sleep mode, the LSE or reference clock on the GPIOs should be used as SYNC signal.
 */
class syncsrc_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr syncsrc_f(uint8_t value) : m_value(value & Range) {}
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
 * SYNC polarity selection This bit is set and cleared by software to select the input polarity for the SYNC signal source.
 */
class syncpol_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr syncpol_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cfgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cfgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cfgr_r>() const {return ClearSet<cfgr_r>(Mask, *this);}
	constexpr auto operator|(cfgr_r other) const -> cfgr_r { return static_cast<cfgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cfgr_r> other) const -> ClearSet<cfgr_r> {return ClearSet<cfgr_r>(cfgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto reload() const -> reload_f {return reload_f(static_cast<uint16_t>(m_value >> reload_f::Offset));}
	[[nodiscard]] constexpr auto felim() const -> felim_f {return felim_f(static_cast<uint8_t>(m_value >> felim_f::Offset));}
	[[nodiscard]] constexpr auto syncdiv() const -> syncdiv_f {return syncdiv_f(static_cast<uint8_t>(m_value >> syncdiv_f::Offset));}
	[[nodiscard]] constexpr auto syncsrc() const -> syncsrc_f {return syncsrc_f(static_cast<uint8_t>(m_value >> syncsrc_f::Offset));}
	[[nodiscard]] constexpr auto syncpol() const -> syncpol_f {return syncpol_f((m_value & syncpol_f::Mask) != 0);}

	constexpr cfgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cfgr_r other) const -> cfgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cfgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0b100000001000101011101101111111; // 539147135 0x2022BB7F

private:
	uint32_t m_value;
};
/**
 * CRS interrupt and status register
 */
class isr_r {
public:

/**
 * SYNC event OK flag This flag is set by hardware when the measured frequency error is smaller than FELIM * 3. This means that either no adjustment of the TRIM value is needed or that an adjustment by one trimming step is enough to compensate the frequency error. An interrupt is generated if the SYNCOKIE bit is set in the CRS_CR register. It is cleared by software by setting the SYNCOKC bit in the CRS_ICR register.
 */
class syncokf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr syncokf_f(bool value = true) : m_value(value) {}
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
 * SYNC warning flag This flag is set by hardware when the measured frequency error is greater than or equal to FELIM * 3, but smaller than FELIM * 128. This means that to compensate the frequency error, the TRIM value must be adjusted by two steps or more. An interrupt is generated if the SYNCWARNIE bit is set in the CRS_CR register. It is cleared by software by setting the SYNCWARNC bit in the CRS_ICR register.
 */
class syncwarnf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr syncwarnf_f(bool value = true) : m_value(value) {}
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
 * Error flag This flag is set by hardware in case of any synchronization or trimming error. It is the logical OR of the TRIMOVF, SYNCMISS and SYNCERR bits. An interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software in reaction to setting the ERRC bit in the CRS_ICR register, which clears the TRIMOVF, SYNCMISS and SYNCERR bits.
 */
class errf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr errf_f(bool value = true) : m_value(value) {}
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
 * Expected SYNC flag This flag is set by hardware when the frequency error counter reached a zero value. An interrupt is generated if the ESYNCIE bit is set in the CRS_CR register. It is cleared by software by setting the ESYNCC bit in the CRS_ICR register.
 */
class esyncf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr esyncf_f(bool value = true) : m_value(value) {}
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
 * SYNC error This flag is set by hardware when the SYNC pulse arrives before the ESYNC event and the measured frequency error is greater than or equal to FELIM * 128. This means that the frequency error is too big (internal frequency too low) to be compensated by adjusting the TRIM value, and that some other action should be taken. An interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software by setting the ERRC bit in the CRS_ICR register.
 */
class syncerr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr syncerr_f(bool value = true) : m_value(value) {}
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
 * SYNC missed This flag is set by hardware when the frequency error counter reached value FELIM * 128 and no SYNC was detected, meaning either that a SYNC pulse was missed or that the frequency error is too big (internal frequency too high) to be compensated by adjusting the TRIM value, and that some other action should be taken. At this point, the frequency error counter is stopped (waiting for a next SYNC) and an interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software by setting the ERRC bit in the CRS_ICR register.
 */
class syncmiss_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr syncmiss_f(bool value = true) : m_value(value) {}
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
 * Trimming overflow or underflow This flag is set by hardware when the automatic trimming tries to over- or under-flow the TRIM value. An interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software by setting the ERRC bit in the CRS_ICR register.
 */
class trimovf_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr trimovf_f(bool value = true) : m_value(value) {}
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
 * Frequency error direction FEDIR is the counting direction of the frequency error counter latched in the time of the last SYNC event. It shows whether the actual frequency is below or above the target.
 */
class fedir_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr fedir_f(bool value = true) : m_value(value) {}
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
 * Frequency error capture FECAP is the frequency error counter value latched in the time ofthe last SYNC event. Refer to Section7.3.4: Frequency error evaluation and automatic trimming for more details about FECAP usage.
 */
class fecap_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr fecap_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator isr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(isr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto syncokf() const -> syncokf_f {return syncokf_f((m_value & syncokf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto syncwarnf() const -> syncwarnf_f {return syncwarnf_f((m_value & syncwarnf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto errf() const -> errf_f {return errf_f((m_value & errf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto esyncf() const -> esyncf_f {return esyncf_f((m_value & esyncf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto syncerr() const -> syncerr_f {return syncerr_f((m_value & syncerr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto syncmiss() const -> syncmiss_f {return syncmiss_f((m_value & syncmiss_f::Mask) != 0);}
	[[nodiscard]] constexpr auto trimovf() const -> trimovf_f {return trimovf_f((m_value & trimovf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fedir() const -> fedir_f {return fedir_f((m_value & fedir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fecap() const -> fecap_f {return fecap_f(static_cast<uint16_t>(m_value >> fecap_f::Offset));}

	constexpr isr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(isr_r other) const -> isr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> isr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * CRS interrupt flag clear register
 */
class icr_r {
public:

/**
 * SYNC event OK clear flag Writing 1 to this bit clears the SYNCOKF flag in the CRS_ISR register.
 */
class syncokc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr syncokc_f(bool value = true) : m_value(value) {}
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
 * SYNC warning clear flag Writing 1 to this bit clears the SYNCWARNF flag in the CRS_ISR register.
 */
class syncwarnc_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr syncwarnc_f(bool value = true) : m_value(value) {}
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
 * Error clear flag Writing 1 to this bit clears TRIMOVF, SYNCMISS and SYNCERR bits and consequently also the ERRF flag in the CRS_ISR register.
 */
class errc_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr errc_f(bool value = true) : m_value(value) {}
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
 * Expected SYNC clear flag Writing 1 to this bit clears the ESYNCF flag in the CRS_ISR register.
 */
class esyncc_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr esyncc_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icr_r>() const {return ClearSet<icr_r>(Mask, *this);}
	constexpr auto operator|(icr_r other) const -> icr_r { return static_cast<icr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icr_r> other) const -> ClearSet<icr_r> {return ClearSet<icr_r>(icr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto syncokc() const -> syncokc_f {return syncokc_f((m_value & syncokc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto syncwarnc() const -> syncwarnc_f {return syncwarnc_f((m_value & syncwarnc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto errc() const -> errc_f {return errc_f((m_value & errc_f::Mask) != 0);}
	[[nodiscard]] constexpr auto esyncc() const -> esyncc_f {return esyncc_f((m_value & esyncc_f::Mask) != 0);}

	constexpr icr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icr_r other) const -> icr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,cfgr_r> cfgr;
	ReadOnlyMemory<uint32_t,isr_r> isr;
	Memory<uint32_t,icr_r> icr;
};

static_assert(std::is_standard_layout_v<crs_p>);
static_assert(offsetof(crs_p, cr) == crs_p::cr_r::Offset);
static_assert(offsetof(crs_p, cfgr) == crs_p::cfgr_r::Offset);
static_assert(offsetof(crs_p, isr) == crs_p::isr_r::Offset);
static_assert(offsetof(crs_p, icr) == crs_p::icr_r::Offset);

inline crs_p& crs = *reinterpret_cast<crs_p*>(0x40002000);

} // STM32G473XX

