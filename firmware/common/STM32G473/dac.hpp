#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Digital-to-analog converter
 */
class dac_p {
public:
/**
 * DAC control register
 */
class dac_cr_r {
public:

/**
 * DAC channel1 enable This bit is set and cleared by software to enable/disable DAC channel1.
 */
class en1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr en1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel1 trigger enable
 */
class ten1_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ten1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel1 trigger selection These bits select the external event used to trigger DAC channel1. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
 */
class tsel1_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr tsel1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dac_cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC channel1 noise/triangle wave generation enable These bits are set and cleared by software. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
 */
class wave1_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr wave1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dac_cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC channel1 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
 */
class mamp1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mamp1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_cr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC channel1 DMA enable This bit is set and cleared by software.
 */
class dmaen1_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmaen1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel1 DMA Underrun Interrupt enable This bit is set and cleared by software.
 */
class dmaudrie1_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmaudrie1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC Channel 1 calibration enable This bit is set and cleared by software to enable/disable DAC channel 1 calibration, it can be written only if bit EN1=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored.
 */
class cen1_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cen1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel2 enable This bit is set and cleared by software to enable/disable DAC channel2.
 */
class en2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr en2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel2 trigger enable
 */
class ten2_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr ten2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel2 trigger selection These bits select the external event used to trigger DAC channel2 Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled).
 */
class tsel2_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr tsel2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC channel2 noise/triangle wave generation enable These bits are set/reset by software. 1x: Triangle wave generation enabled Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled)
 */
class wave2_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr wave2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC channel2 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
 */
class mamp2_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mamp2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC channel2 DMA enable This bit is set and cleared by software.
 */
class dmaen2_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmaen2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel2 DMA underrun interrupt enable This bit is set and cleared by software.
 */
class dmaudrie2_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmaudrie2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC Channel 2 calibration enable This bit is set and cleared by software to enable/disable DAC channel 2 calibration, it can be written only if bit EN2=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored.
 */
class cen2_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cen2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_cr_r>() const {return ClearSet<dac_cr_r>(Mask, *this);}
	constexpr auto operator|(dac_cr_r other) const -> dac_cr_r { return static_cast<dac_cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_cr_r> other) const -> ClearSet<dac_cr_r> {return ClearSet<dac_cr_r>(dac_cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto en1() const -> en1_f {return en1_f((m_value & en1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ten1() const -> ten1_f {return ten1_f((m_value & ten1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsel1() const -> tsel1_f {return tsel1_f(static_cast<uint8_t>(m_value >> tsel1_f::Offset));}
	[[nodiscard]] constexpr auto wave1() const -> wave1_f {return wave1_f(static_cast<uint8_t>(m_value >> wave1_f::Offset));}
	[[nodiscard]] constexpr auto mamp1() const -> mamp1_f {return mamp1_f(static_cast<uint8_t>(m_value >> mamp1_f::Offset));}
	[[nodiscard]] constexpr auto dmaen1() const -> dmaen1_f {return dmaen1_f((m_value & dmaen1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaudrie1() const -> dmaudrie1_f {return dmaudrie1_f((m_value & dmaudrie1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cen1() const -> cen1_f {return cen1_f((m_value & cen1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto en2() const -> en2_f {return en2_f((m_value & en2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ten2() const -> ten2_f {return ten2_f((m_value & ten2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsel2() const -> tsel2_f {return tsel2_f(static_cast<uint8_t>(m_value >> tsel2_f::Offset));}
	[[nodiscard]] constexpr auto wave2() const -> wave2_f {return wave2_f(static_cast<uint8_t>(m_value >> wave2_f::Offset));}
	[[nodiscard]] constexpr auto mamp2() const -> mamp2_f {return mamp2_f(static_cast<uint8_t>(m_value >> mamp2_f::Offset));}
	[[nodiscard]] constexpr auto dmaen2() const -> dmaen2_f {return dmaen2_f((m_value & dmaen2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaudrie2() const -> dmaudrie2_f {return dmaudrie2_f((m_value & dmaudrie2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cen2() const -> cen2_f {return cen2_f((m_value & cen2_f::Mask) != 0);}

	template<std::size_t Index> struct en_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using en_v = typename en_f<Index>::type;
	template<std::size_t Index> constexpr auto en() const { return en_v<Index>::get(*this); }

	template<std::size_t Index> struct ten_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using ten_v = typename ten_f<Index>::type;
	template<std::size_t Index> constexpr auto ten() const { return ten_v<Index>::get(*this); }

	template<std::size_t Index> struct tsel_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using tsel_v = typename tsel_f<Index>::type;
	template<std::size_t Index> constexpr auto tsel() const { return tsel_v<Index>::get(*this); }

	template<std::size_t Index> struct wave_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using wave_v = typename wave_f<Index>::type;
	template<std::size_t Index> constexpr auto wave() const { return wave_v<Index>::get(*this); }

	template<std::size_t Index> struct mamp_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using mamp_v = typename mamp_f<Index>::type;
	template<std::size_t Index> constexpr auto mamp() const { return mamp_v<Index>::get(*this); }

	template<std::size_t Index> struct dmaen_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dmaen_v = typename dmaen_f<Index>::type;
	template<std::size_t Index> constexpr auto dmaen() const { return dmaen_v<Index>::get(*this); }

	template<std::size_t Index> struct dmaudrie_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dmaudrie_v = typename dmaudrie_f<Index>::type;
	template<std::size_t Index> constexpr auto dmaudrie() const { return dmaudrie_v<Index>::get(*this); }

	template<std::size_t Index> struct cen_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cen_v = typename cen_f<Index>::type;
	template<std::size_t Index> constexpr auto cen() const { return cen_v<Index>::get(*this); }

	constexpr dac_cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_cr_r other) const -> dac_cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC software trigger register
 */
class dac_swtrgr_r {
public:

/**
 * DAC channel1 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR1 register value has been loaded into the DAC_DOR1 register.
 */
class swtrig1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swtrig1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_swtrgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_swtrgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_swtrgr_r>() const {return ClearSet<dac_swtrgr_r>(Mask, *this);}
	constexpr auto operator|(dac_swtrgr_r other) const -> dac_swtrgr_r { return static_cast<dac_swtrgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_swtrgr_r> other) const -> ClearSet<dac_swtrgr_r> {return ClearSet<dac_swtrgr_r>(dac_swtrgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel2 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR2 register value has been loaded into the DAC_DOR2 register.
 */
class swtrig2_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr swtrig2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_swtrgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_swtrgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_swtrgr_r>() const {return ClearSet<dac_swtrgr_r>(Mask, *this);}
	constexpr auto operator|(dac_swtrgr_r other) const -> dac_swtrgr_r { return static_cast<dac_swtrgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_swtrgr_r> other) const -> ClearSet<dac_swtrgr_r> {return ClearSet<dac_swtrgr_r>(dac_swtrgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel1 software trigger B
 */
class swtrigb1_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swtrigb1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_swtrgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_swtrgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_swtrgr_r>() const {return ClearSet<dac_swtrgr_r>(Mask, *this);}
	constexpr auto operator|(dac_swtrgr_r other) const -> dac_swtrgr_r { return static_cast<dac_swtrgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_swtrgr_r> other) const -> ClearSet<dac_swtrgr_r> {return ClearSet<dac_swtrgr_r>(dac_swtrgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel2 software trigger B
 */
class swtrigb2_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr swtrigb2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_swtrgr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_swtrgr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_swtrgr_r>() const {return ClearSet<dac_swtrgr_r>(Mask, *this);}
	constexpr auto operator|(dac_swtrgr_r other) const -> dac_swtrgr_r { return static_cast<dac_swtrgr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_swtrgr_r> other) const -> ClearSet<dac_swtrgr_r> {return ClearSet<dac_swtrgr_r>(dac_swtrgr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto swtrig1() const -> swtrig1_f {return swtrig1_f((m_value & swtrig1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swtrig2() const -> swtrig2_f {return swtrig2_f((m_value & swtrig2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swtrigb1() const -> swtrigb1_f {return swtrigb1_f((m_value & swtrigb1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto swtrigb2() const -> swtrigb2_f {return swtrigb2_f((m_value & swtrigb2_f::Mask) != 0);}

	template<std::size_t Index> struct swtrig_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using swtrig_v = typename swtrig_f<Index>::type;
	template<std::size_t Index> constexpr auto swtrig() const { return swtrig_v<Index>::get(*this); }

	template<std::size_t Index> struct swtrigb_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using swtrigb_v = typename swtrigb_f<Index>::type;
	template<std::size_t Index> constexpr auto swtrigb() const { return swtrigb_v<Index>::get(*this); }

	constexpr dac_swtrgr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_swtrgr_r other) const -> dac_swtrgr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_swtrgr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC channel1 12-bit right-aligned data holding register
 */
class dac_dhr12r1_r {
public:

/**
 * DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
 */
class dacc1dhr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc1dhr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12r1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12r1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12r1_r>() const {return ClearSet<dac_dhr12r1_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12r1_r other) const -> dac_dhr12r1_r { return static_cast<dac_dhr12r1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12r1_r> other) const -> ClearSet<dac_dhr12r1_r> {return ClearSet<dac_dhr12r1_r>(dac_dhr12r1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC channel1 12-bit right-aligned data B
 */
class dacc1dhrb_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dacc1dhrb_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12r1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12r1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12r1_r>() const {return ClearSet<dac_dhr12r1_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12r1_r other) const -> dac_dhr12r1_r { return static_cast<dac_dhr12r1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12r1_r> other) const -> ClearSet<dac_dhr12r1_r> {return ClearSet<dac_dhr12r1_r>(dac_dhr12r1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dacc1dhr() const -> dacc1dhr_f {return dacc1dhr_f(static_cast<uint16_t>(m_value >> dacc1dhr_f::Offset));}
	[[nodiscard]] constexpr auto dacc1dhrb() const -> dacc1dhrb_f {return dacc1dhrb_f(static_cast<uint16_t>(m_value >> dacc1dhrb_f::Offset));}

	constexpr dac_dhr12r1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dhr12r1_r other) const -> dac_dhr12r1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dhr12r1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC channel1 12-bit left aligned data holding register
 */
class dac_dhr12l1_r {
public:

/**
 * DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
 */
class dacc1dhr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc1dhr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12l1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12l1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12l1_r>() const {return ClearSet<dac_dhr12l1_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12l1_r other) const -> dac_dhr12l1_r { return static_cast<dac_dhr12l1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12l1_r> other) const -> ClearSet<dac_dhr12l1_r> {return ClearSet<dac_dhr12l1_r>(dac_dhr12l1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC channel1 12-bit left-aligned data B
 */
class dacc1dhrb_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dacc1dhrb_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12l1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12l1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12l1_r>() const {return ClearSet<dac_dhr12l1_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12l1_r other) const -> dac_dhr12l1_r { return static_cast<dac_dhr12l1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12l1_r> other) const -> ClearSet<dac_dhr12l1_r> {return ClearSet<dac_dhr12l1_r>(dac_dhr12l1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dacc1dhr() const -> dacc1dhr_f {return dacc1dhr_f(static_cast<uint16_t>(m_value >> dacc1dhr_f::Offset));}
	[[nodiscard]] constexpr auto dacc1dhrb() const -> dacc1dhrb_f {return dacc1dhrb_f(static_cast<uint16_t>(m_value >> dacc1dhrb_f::Offset));}

	constexpr dac_dhr12l1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dhr12l1_r other) const -> dac_dhr12l1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dhr12l1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC channel1 8-bit right aligned data holding register
 */
class dac_dhr8r1_r {
public:

/**
 * DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.
 */
class dacc1dhr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dacc1dhr_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_dhr8r1_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr8r1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr8r1_r>() const {return ClearSet<dac_dhr8r1_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr8r1_r other) const -> dac_dhr8r1_r { return static_cast<dac_dhr8r1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr8r1_r> other) const -> ClearSet<dac_dhr8r1_r> {return ClearSet<dac_dhr8r1_r>(dac_dhr8r1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC channel1 8-bit right-aligned data
 */
class dacc1dhrb_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc1dhrb_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_dhr8r1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr8r1_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr8r1_r>() const {return ClearSet<dac_dhr8r1_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr8r1_r other) const -> dac_dhr8r1_r { return static_cast<dac_dhr8r1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr8r1_r> other) const -> ClearSet<dac_dhr8r1_r> {return ClearSet<dac_dhr8r1_r>(dac_dhr8r1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dacc1dhr() const -> dacc1dhr_f {return dacc1dhr_f(static_cast<uint8_t>(m_value >> dacc1dhr_f::Offset));}
	[[nodiscard]] constexpr auto dacc1dhrb() const -> dacc1dhrb_f {return dacc1dhrb_f(static_cast<uint8_t>(m_value >> dacc1dhrb_f::Offset));}

	constexpr dac_dhr8r1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dhr8r1_r other) const -> dac_dhr8r1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dhr8r1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC channel2 12-bit right aligned data holding register
 */
class dac_dhr12r2_r {
public:

/**
 * DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.
 */
class dacc2dhr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc2dhr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12r2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12r2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12r2_r>() const {return ClearSet<dac_dhr12r2_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12r2_r other) const -> dac_dhr12r2_r { return static_cast<dac_dhr12r2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12r2_r> other) const -> ClearSet<dac_dhr12r2_r> {return ClearSet<dac_dhr12r2_r>(dac_dhr12r2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC channel2 12-bit right-aligned data
 */
class dacc2dhrb_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dacc2dhrb_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12r2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12r2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12r2_r>() const {return ClearSet<dac_dhr12r2_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12r2_r other) const -> dac_dhr12r2_r { return static_cast<dac_dhr12r2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12r2_r> other) const -> ClearSet<dac_dhr12r2_r> {return ClearSet<dac_dhr12r2_r>(dac_dhr12r2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dacc2dhr() const -> dacc2dhr_f {return dacc2dhr_f(static_cast<uint16_t>(m_value >> dacc2dhr_f::Offset));}
	[[nodiscard]] constexpr auto dacc2dhrb() const -> dacc2dhrb_f {return dacc2dhrb_f(static_cast<uint16_t>(m_value >> dacc2dhrb_f::Offset));}

	constexpr dac_dhr12r2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dhr12r2_r other) const -> dac_dhr12r2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dhr12r2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC channel2 12-bit left aligned data holding register
 */
class dac_dhr12l2_r {
public:

/**
 * DAC channel2 12-bit left-aligned data These bits are written by software which specify 12-bit data for DAC channel2.
 */
class dacc2dhr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc2dhr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12l2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12l2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12l2_r>() const {return ClearSet<dac_dhr12l2_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12l2_r other) const -> dac_dhr12l2_r { return static_cast<dac_dhr12l2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12l2_r> other) const -> ClearSet<dac_dhr12l2_r> {return ClearSet<dac_dhr12l2_r>(dac_dhr12l2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC channel2 12-bit left-aligned data B
 */
class dacc2dhrb_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dacc2dhrb_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12l2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12l2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12l2_r>() const {return ClearSet<dac_dhr12l2_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12l2_r other) const -> dac_dhr12l2_r { return static_cast<dac_dhr12l2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12l2_r> other) const -> ClearSet<dac_dhr12l2_r> {return ClearSet<dac_dhr12l2_r>(dac_dhr12l2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dacc2dhr() const -> dacc2dhr_f {return dacc2dhr_f(static_cast<uint16_t>(m_value >> dacc2dhr_f::Offset));}
	[[nodiscard]] constexpr auto dacc2dhrb() const -> dacc2dhrb_f {return dacc2dhrb_f(static_cast<uint16_t>(m_value >> dacc2dhrb_f::Offset));}

	constexpr dac_dhr12l2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dhr12l2_r other) const -> dac_dhr12l2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dhr12l2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC channel2 8-bit right-aligned data holding register
 */
class dac_dhr8r2_r {
public:

/**
 * DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.
 */
class dacc2dhr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dacc2dhr_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_dhr8r2_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr8r2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr8r2_r>() const {return ClearSet<dac_dhr8r2_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr8r2_r other) const -> dac_dhr8r2_r { return static_cast<dac_dhr8r2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr8r2_r> other) const -> ClearSet<dac_dhr8r2_r> {return ClearSet<dac_dhr8r2_r>(dac_dhr8r2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC channel2 8-bit right-aligned data
 */
class dacc2dhrb_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc2dhrb_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_dhr8r2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr8r2_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr8r2_r>() const {return ClearSet<dac_dhr8r2_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr8r2_r other) const -> dac_dhr8r2_r { return static_cast<dac_dhr8r2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr8r2_r> other) const -> ClearSet<dac_dhr8r2_r> {return ClearSet<dac_dhr8r2_r>(dac_dhr8r2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dacc2dhr() const -> dacc2dhr_f {return dacc2dhr_f(static_cast<uint8_t>(m_value >> dacc2dhr_f::Offset));}
	[[nodiscard]] constexpr auto dacc2dhrb() const -> dacc2dhrb_f {return dacc2dhrb_f(static_cast<uint8_t>(m_value >> dacc2dhrb_f::Offset));}

	constexpr dac_dhr8r2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dhr8r2_r other) const -> dac_dhr8r2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dhr8r2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Dual DAC 12-bit right-aligned data holding register
 */
class dac_dhr12rd_r {
public:

/**
 * DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
 */
class dacc1dhr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc1dhr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12rd_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12rd_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12rd_r>() const {return ClearSet<dac_dhr12rd_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12rd_r other) const -> dac_dhr12rd_r { return static_cast<dac_dhr12rd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12rd_r> other) const -> ClearSet<dac_dhr12rd_r> {return ClearSet<dac_dhr12rd_r>(dac_dhr12rd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.
 */
class dacc2dhr_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dacc2dhr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12rd_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12rd_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12rd_r>() const {return ClearSet<dac_dhr12rd_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12rd_r other) const -> dac_dhr12rd_r { return static_cast<dac_dhr12rd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12rd_r> other) const -> ClearSet<dac_dhr12rd_r> {return ClearSet<dac_dhr12rd_r>(dac_dhr12rd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dacc1dhr() const -> dacc1dhr_f {return dacc1dhr_f(static_cast<uint16_t>(m_value >> dacc1dhr_f::Offset));}
	[[nodiscard]] constexpr auto dacc2dhr() const -> dacc2dhr_f {return dacc2dhr_f(static_cast<uint16_t>(m_value >> dacc2dhr_f::Offset));}

	constexpr dac_dhr12rd_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dhr12rd_r other) const -> dac_dhr12rd_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dhr12rd_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 32;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DUAL DAC 12-bit left aligned data holding register
 */
class dac_dhr12ld_r {
public:

/**
 * DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
 */
class dacc1dhr_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc1dhr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12ld_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12ld_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12ld_r>() const {return ClearSet<dac_dhr12ld_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12ld_r other) const -> dac_dhr12ld_r { return static_cast<dac_dhr12ld_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12ld_r> other) const -> ClearSet<dac_dhr12ld_r> {return ClearSet<dac_dhr12ld_r>(dac_dhr12ld_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC channel2 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.
 */
class dacc2dhr_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dacc2dhr_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dhr12ld_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr12ld_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr12ld_r>() const {return ClearSet<dac_dhr12ld_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr12ld_r other) const -> dac_dhr12ld_r { return static_cast<dac_dhr12ld_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr12ld_r> other) const -> ClearSet<dac_dhr12ld_r> {return ClearSet<dac_dhr12ld_r>(dac_dhr12ld_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dacc1dhr() const -> dacc1dhr_f {return dacc1dhr_f(static_cast<uint16_t>(m_value >> dacc1dhr_f::Offset));}
	[[nodiscard]] constexpr auto dacc2dhr() const -> dacc2dhr_f {return dacc2dhr_f(static_cast<uint16_t>(m_value >> dacc2dhr_f::Offset));}

	constexpr dac_dhr12ld_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dhr12ld_r other) const -> dac_dhr12ld_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dhr12ld_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DUAL DAC 8-bit right aligned data holding register
 */
class dac_dhr8rd_r {
public:

/**
 * DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.
 */
class dacc1dhr_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dacc1dhr_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_dhr8rd_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr8rd_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr8rd_r>() const {return ClearSet<dac_dhr8rd_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr8rd_r other) const -> dac_dhr8rd_r { return static_cast<dac_dhr8rd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr8rd_r> other) const -> ClearSet<dac_dhr8rd_r> {return ClearSet<dac_dhr8rd_r>(dac_dhr8rd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.
 */
class dacc2dhr_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc2dhr_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_dhr8rd_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dhr8rd_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dhr8rd_r>() const {return ClearSet<dac_dhr8rd_r>(Mask, *this);}
	constexpr auto operator|(dac_dhr8rd_r other) const -> dac_dhr8rd_r { return static_cast<dac_dhr8rd_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dhr8rd_r> other) const -> ClearSet<dac_dhr8rd_r> {return ClearSet<dac_dhr8rd_r>(dac_dhr8rd_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dacc1dhr() const -> dacc1dhr_f {return dacc1dhr_f(static_cast<uint8_t>(m_value >> dacc1dhr_f::Offset));}
	[[nodiscard]] constexpr auto dacc2dhr() const -> dacc2dhr_f {return dacc2dhr_f(static_cast<uint8_t>(m_value >> dacc2dhr_f::Offset));}

	constexpr dac_dhr8rd_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dhr8rd_r other) const -> dac_dhr8rd_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dhr8rd_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC channel1 data output register
 */
class dac_dor1_r {
public:

/**
 * DAC channel1 data output These bits are read-only, they contain data output for DAC channel1.
 */
class dacc1dor_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc1dor_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dor1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dor1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dor1_r>() const {return ClearSet<dac_dor1_r>(Mask, *this);}
	constexpr auto operator|(dac_dor1_r other) const -> dac_dor1_r { return static_cast<dac_dor1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dor1_r> other) const -> ClearSet<dac_dor1_r> {return ClearSet<dac_dor1_r>(dac_dor1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC channel1 data output
 */
class dacc1dorb_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dacc1dorb_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dor1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_dor1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dor1_r>() const {return ClearSet<dac_dor1_r>(Mask, *this);}
	constexpr auto operator|(dac_dor1_r other) const -> dac_dor1_r { return static_cast<dac_dor1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dor1_r> other) const -> ClearSet<dac_dor1_r> {return ClearSet<dac_dor1_r>(dac_dor1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dacc1dor() const -> dacc1dor_f {return dacc1dor_f(static_cast<uint16_t>(m_value >> dacc1dor_f::Offset));}
	[[nodiscard]] constexpr auto dacc1dorb() const -> dacc1dorb_f {return dacc1dorb_f(static_cast<uint16_t>(m_value >> dacc1dorb_f::Offset));}

	constexpr dac_dor1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dor1_r other) const -> dac_dor1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dor1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC channel2 data output register
 */
class dac_dor2_r {
public:

/**
 * DAC channel2 data output These bits are read-only, they contain data output for DAC channel2.
 */
class dacc2dor_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr dacc2dor_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dor2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_dor2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dor2_r>() const {return ClearSet<dac_dor2_r>(Mask, *this);}
	constexpr auto operator|(dac_dor2_r other) const -> dac_dor2_r { return static_cast<dac_dor2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dor2_r> other) const -> ClearSet<dac_dor2_r> {return ClearSet<dac_dor2_r>(dac_dor2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC channel2 data output
 */
class dacc2dorb_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dacc2dorb_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_dor2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_dor2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_dor2_r>() const {return ClearSet<dac_dor2_r>(Mask, *this);}
	constexpr auto operator|(dac_dor2_r other) const -> dac_dor2_r { return static_cast<dac_dor2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_dor2_r> other) const -> ClearSet<dac_dor2_r> {return ClearSet<dac_dor2_r>(dac_dor2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto dacc2dor() const -> dacc2dor_f {return dacc2dor_f(static_cast<uint16_t>(m_value >> dacc2dor_f::Offset));}
	[[nodiscard]] constexpr auto dacc2dorb() const -> dacc2dorb_f {return dacc2dorb_f(static_cast<uint16_t>(m_value >> dacc2dorb_f::Offset));}

	constexpr dac_dor2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_dor2_r other) const -> dac_dor2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_dor2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC status register
 */
class dac_sr_r {
public:

/**
 * DAC channel1 ready status bit
 */
class dac1rdy_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dac1rdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_sr_r>() const {return ClearSet<dac_sr_r>(Mask, *this);}
	constexpr auto operator|(dac_sr_r other) const -> dac_sr_r { return static_cast<dac_sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_sr_r> other) const -> ClearSet<dac_sr_r> {return ClearSet<dac_sr_r>(dac_sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel1 output register status bit
 */
class dorstat1_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dorstat1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_sr_r>() const {return ClearSet<dac_sr_r>(Mask, *this);}
	constexpr auto operator|(dac_sr_r other) const -> dac_sr_r { return static_cast<dac_sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_sr_r> other) const -> ClearSet<dac_sr_r> {return ClearSet<dac_sr_r>(dac_sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel1 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1).
 */
class dmaudr1_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmaudr1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_sr_r>() const {return ClearSet<dac_sr_r>(Mask, *this);}
	constexpr auto operator|(dac_sr_r other) const -> dac_sr_r { return static_cast<dac_sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_sr_r> other) const -> ClearSet<dac_sr_r> {return ClearSet<dac_sr_r>(dac_sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC Channel 1 calibration offset status This bit is set and cleared by hardware
 */
class cal_flag1_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr cal_flag1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_sr_r>() const {return ClearSet<dac_sr_r>(Mask, *this);}
	constexpr auto operator|(dac_sr_r other) const -> dac_sr_r { return static_cast<dac_sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_sr_r> other) const -> ClearSet<dac_sr_r> {return ClearSet<dac_sr_r>(dac_sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC Channel 1 busy writing sample time flag This bit is systematically set just after Sample & Hold mode enable and is set each time the software writes the register DAC_SHSR1, It is cleared by hardware when the write operation of DAC_SHSR1 is complete. (It takes about 3LSI periods of synchronization).
 */
class bwst1_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr bwst1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_sr_r>() const {return ClearSet<dac_sr_r>(Mask, *this);}
	constexpr auto operator|(dac_sr_r other) const -> dac_sr_r { return static_cast<dac_sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_sr_r> other) const -> ClearSet<dac_sr_r> {return ClearSet<dac_sr_r>(dac_sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel 2 ready status bit
 */
class dac2rdy_f {
public:
	static constexpr std::size_t Offset = 27;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dac2rdy_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_sr_r>() const {return ClearSet<dac_sr_r>(Mask, *this);}
	constexpr auto operator|(dac_sr_r other) const -> dac_sr_r { return static_cast<dac_sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_sr_r> other) const -> ClearSet<dac_sr_r> {return ClearSet<dac_sr_r>(dac_sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel 2 output register status bit
 */
class dorstat2_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dorstat2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_sr_r>() const {return ClearSet<dac_sr_r>(Mask, *this);}
	constexpr auto operator|(dac_sr_r other) const -> dac_sr_r { return static_cast<dac_sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_sr_r> other) const -> ClearSet<dac_sr_r> {return ClearSet<dac_sr_r>(dac_sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC channel2 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1).
 */
class dmaudr2_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmaudr2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_sr_r>() const {return ClearSet<dac_sr_r>(Mask, *this);}
	constexpr auto operator|(dac_sr_r other) const -> dac_sr_r { return static_cast<dac_sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_sr_r> other) const -> ClearSet<dac_sr_r> {return ClearSet<dac_sr_r>(dac_sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC Channel 2 calibration offset status This bit is set and cleared by hardware
 */
class cal_flag2_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cal_flag2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_sr_r>() const {return ClearSet<dac_sr_r>(Mask, *this);}
	constexpr auto operator|(dac_sr_r other) const -> dac_sr_r { return static_cast<dac_sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_sr_r> other) const -> ClearSet<dac_sr_r> {return ClearSet<dac_sr_r>(dac_sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC Channel 2 busy writing sample time flag This bit is systematically set just after Sample & Hold mode enable and is set each time the software writes the register DAC_SHSR2, It is cleared by hardware when the write operation of DAC_SHSR2 is complete. (It takes about 3 LSI periods of synchronization).
 */
class bwst2_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bwst2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_sr_r>() const {return ClearSet<dac_sr_r>(Mask, *this);}
	constexpr auto operator|(dac_sr_r other) const -> dac_sr_r { return static_cast<dac_sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_sr_r> other) const -> ClearSet<dac_sr_r> {return ClearSet<dac_sr_r>(dac_sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto dac1rdy() const -> dac1rdy_f {return dac1rdy_f((m_value & dac1rdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dorstat1() const -> dorstat1_f {return dorstat1_f((m_value & dorstat1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaudr1() const -> dmaudr1_f {return dmaudr1_f((m_value & dmaudr1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cal_flag1() const -> cal_flag1_f {return cal_flag1_f((m_value & cal_flag1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bwst1() const -> bwst1_f {return bwst1_f((m_value & bwst1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dac2rdy() const -> dac2rdy_f {return dac2rdy_f((m_value & dac2rdy_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dorstat2() const -> dorstat2_f {return dorstat2_f((m_value & dorstat2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dmaudr2() const -> dmaudr2_f {return dmaudr2_f((m_value & dmaudr2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cal_flag2() const -> cal_flag2_f {return cal_flag2_f((m_value & cal_flag2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bwst2() const -> bwst2_f {return bwst2_f((m_value & bwst2_f::Mask) != 0);}

	template<std::size_t Index> struct dorstat_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dorstat_v = typename dorstat_f<Index>::type;
	template<std::size_t Index> constexpr auto dorstat() const { return dorstat_v<Index>::get(*this); }

	template<std::size_t Index> struct dmaudr_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dmaudr_v = typename dmaudr_f<Index>::type;
	template<std::size_t Index> constexpr auto dmaudr() const { return dmaudr_v<Index>::get(*this); }

	template<std::size_t Index> struct cal_flag_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using cal_flag_v = typename cal_flag_f<Index>::type;
	template<std::size_t Index> constexpr auto cal_flag() const { return cal_flag_v<Index>::get(*this); }

	template<std::size_t Index> struct bwst_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using bwst_v = typename bwst_f<Index>::type;
	template<std::size_t Index> constexpr auto bwst() const { return bwst_v<Index>::get(*this); }

	constexpr dac_sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_sr_r other) const -> dac_sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC calibration control register
 */
class dac_ccr_r {
public:

/**
 * DAC Channel 1 offset trimming value
 */
class otrim1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr otrim1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_ccr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dac_ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_ccr_r>() const {return ClearSet<dac_ccr_r>(Mask, *this);}
	constexpr auto operator|(dac_ccr_r other) const -> dac_ccr_r { return static_cast<dac_ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_ccr_r> other) const -> ClearSet<dac_ccr_r> {return ClearSet<dac_ccr_r>(dac_ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC Channel 2 offset trimming value
 */
class otrim2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr otrim2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_ccr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_ccr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_ccr_r>() const {return ClearSet<dac_ccr_r>(Mask, *this);}
	constexpr auto operator|(dac_ccr_r other) const -> dac_ccr_r { return static_cast<dac_ccr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_ccr_r> other) const -> ClearSet<dac_ccr_r> {return ClearSet<dac_ccr_r>(dac_ccr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto otrim1() const -> otrim1_f {return otrim1_f(static_cast<uint8_t>(m_value >> otrim1_f::Offset));}
	[[nodiscard]] constexpr auto otrim2() const -> otrim2_f {return otrim2_f(static_cast<uint8_t>(m_value >> otrim2_f::Offset));}

	template<std::size_t Index> struct otrim_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using otrim_v = typename otrim_f<Index>::type;
	template<std::size_t Index> constexpr auto otrim() const { return otrim_v<Index>::get(*this); }

	constexpr dac_ccr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_ccr_r other) const -> dac_ccr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_ccr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC mode control register
 */
class dac_mcr_r {
public:

/**
 * DAC Channel 1 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN1=0 and bit CEN1 =0 in the DAC_CR register). If EN1=1 or CEN1 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 1 mode: DAC Channel 1 in normal Mode DAC Channel 1 in sample &amp; hold mode
 */
class mode1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr mode1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_mcr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dac_mcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_mcr_r>() const {return ClearSet<dac_mcr_r>(Mask, *this);}
	constexpr auto operator|(dac_mcr_r other) const -> dac_mcr_r { return static_cast<dac_mcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_mcr_r> other) const -> ClearSet<dac_mcr_r> {return ClearSet<dac_mcr_r>(dac_mcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC Channel1 DMA double data mode
 */
class dmadouble1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dmadouble1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_mcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_mcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_mcr_r>() const {return ClearSet<dac_mcr_r>(Mask, *this);}
	constexpr auto operator|(dac_mcr_r other) const -> dac_mcr_r { return static_cast<dac_mcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_mcr_r> other) const -> ClearSet<dac_mcr_r> {return ClearSet<dac_mcr_r>(dac_mcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Enable signed format for DAC channel1
 */
class sinformat1_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sinformat1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_mcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_mcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_mcr_r>() const {return ClearSet<dac_mcr_r>(Mask, *this);}
	constexpr auto operator|(dac_mcr_r other) const -> dac_mcr_r { return static_cast<dac_mcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_mcr_r> other) const -> ClearSet<dac_mcr_r> {return ClearSet<dac_mcr_r>(dac_mcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * High frequency interface mode selection
 */
class hfsel_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr hfsel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_mcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_mcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_mcr_r>() const {return ClearSet<dac_mcr_r>(Mask, *this);}
	constexpr auto operator|(dac_mcr_r other) const -> dac_mcr_r { return static_cast<dac_mcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_mcr_r> other) const -> ClearSet<dac_mcr_r> {return ClearSet<dac_mcr_r>(dac_mcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC Channel 2 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN2=0 and bit CEN2 =0 in the DAC_CR register). If EN2=1 or CEN2 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 2 mode: DAC Channel 2 in normal Mode DAC Channel 2 in sample &amp; hold mode
 */
class mode2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr mode2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_mcr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_mcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_mcr_r>() const {return ClearSet<dac_mcr_r>(Mask, *this);}
	constexpr auto operator|(dac_mcr_r other) const -> dac_mcr_r { return static_cast<dac_mcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_mcr_r> other) const -> ClearSet<dac_mcr_r> {return ClearSet<dac_mcr_r>(dac_mcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC Channel2 DMA double data mode
 */
class dmadouble2_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr dmadouble2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_mcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_mcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_mcr_r>() const {return ClearSet<dac_mcr_r>(Mask, *this);}
	constexpr auto operator|(dac_mcr_r other) const -> dac_mcr_r { return static_cast<dac_mcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_mcr_r> other) const -> ClearSet<dac_mcr_r> {return ClearSet<dac_mcr_r>(dac_mcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Enable signed format for DAC channel2
 */
class sinformat2_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sinformat2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_mcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_mcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_mcr_r>() const {return ClearSet<dac_mcr_r>(Mask, *this);}
	constexpr auto operator|(dac_mcr_r other) const -> dac_mcr_r { return static_cast<dac_mcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_mcr_r> other) const -> ClearSet<dac_mcr_r> {return ClearSet<dac_mcr_r>(dac_mcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto mode1() const -> mode1_f {return mode1_f(static_cast<uint8_t>(m_value >> mode1_f::Offset));}
	[[nodiscard]] constexpr auto dmadouble1() const -> dmadouble1_f {return dmadouble1_f((m_value & dmadouble1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sinformat1() const -> sinformat1_f {return sinformat1_f((m_value & sinformat1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto hfsel() const -> hfsel_f {return hfsel_f(static_cast<uint8_t>(m_value >> hfsel_f::Offset));}
	[[nodiscard]] constexpr auto mode2() const -> mode2_f {return mode2_f(static_cast<uint8_t>(m_value >> mode2_f::Offset));}
	[[nodiscard]] constexpr auto dmadouble2() const -> dmadouble2_f {return dmadouble2_f((m_value & dmadouble2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sinformat2() const -> sinformat2_f {return sinformat2_f((m_value & sinformat2_f::Mask) != 0);}

	template<std::size_t Index> struct mode_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using mode_v = typename mode_f<Index>::type;
	template<std::size_t Index> constexpr auto mode() const { return mode_v<Index>::get(*this); }

	template<std::size_t Index> struct dmadouble_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dmadouble_v = typename dmadouble_f<Index>::type;
	template<std::size_t Index> constexpr auto dmadouble() const { return dmadouble_v<Index>::get(*this); }

	template<std::size_t Index> struct sinformat_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using sinformat_v = typename sinformat_f<Index>::type;
	template<std::size_t Index> constexpr auto sinformat() const { return sinformat_v<Index>::get(*this); }

	constexpr dac_mcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_mcr_r other) const -> dac_mcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_mcr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC Sample and Hold sample time register 1
 */
class dac_shsr1_r {
public:

/**
 * DAC Channel 1 sample Time (only valid in sample &amp; hold mode) These bits can be written when the DAC channel1 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, If BWSTx=1, the write operation is ignored.
 */
class tsample1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tsample1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_shsr1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_shsr1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_shsr1_r>() const {return ClearSet<dac_shsr1_r>(Mask, *this);}
	constexpr auto operator|(dac_shsr1_r other) const -> dac_shsr1_r { return static_cast<dac_shsr1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_shsr1_r> other) const -> ClearSet<dac_shsr1_r> {return ClearSet<dac_shsr1_r>(dac_shsr1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto tsample1() const -> tsample1_f {return tsample1_f(static_cast<uint16_t>(m_value >> tsample1_f::Offset));}

	constexpr dac_shsr1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_shsr1_r other) const -> dac_shsr1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_shsr1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC Sample and Hold sample time register 2
 */
class dac_shsr2_r {
public:

/**
 * DAC Channel 2 sample Time (only valid in sample &amp; hold mode) These bits can be written when the DAC channel2 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, if BWSTx=1, the write operation is ignored.
 */
class tsample2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tsample2_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_shsr2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_shsr2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_shsr2_r>() const {return ClearSet<dac_shsr2_r>(Mask, *this);}
	constexpr auto operator|(dac_shsr2_r other) const -> dac_shsr2_r { return static_cast<dac_shsr2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_shsr2_r> other) const -> ClearSet<dac_shsr2_r> {return ClearSet<dac_shsr2_r>(dac_shsr2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto tsample2() const -> tsample2_f {return tsample2_f(static_cast<uint16_t>(m_value >> tsample2_f::Offset));}

	constexpr dac_shsr2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_shsr2_r other) const -> dac_shsr2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_shsr2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * DAC Sample and Hold hold time register
 */
class dac_shhr_r {
public:

/**
 * DAC Channel 1 hold Time (only valid in sample &amp; hold mode) Hold time= (THOLD[9:0]) x T LSI
 */
class thold1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr thold1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_shhr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_shhr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_shhr_r>() const {return ClearSet<dac_shhr_r>(Mask, *this);}
	constexpr auto operator|(dac_shhr_r other) const -> dac_shhr_r { return static_cast<dac_shhr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_shhr_r> other) const -> ClearSet<dac_shhr_r> {return ClearSet<dac_shhr_r>(dac_shhr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC Channel 2 hold time (only valid in sample &amp; hold mode). Hold time= (THOLD[9:0]) x T LSI
 */
class thold2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 10;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr thold2_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_shhr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_shhr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_shhr_r>() const {return ClearSet<dac_shhr_r>(Mask, *this);}
	constexpr auto operator|(dac_shhr_r other) const -> dac_shhr_r { return static_cast<dac_shhr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_shhr_r> other) const -> ClearSet<dac_shhr_r> {return ClearSet<dac_shhr_r>(dac_shhr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto thold1() const -> thold1_f {return thold1_f(static_cast<uint16_t>(m_value >> thold1_f::Offset));}
	[[nodiscard]] constexpr auto thold2() const -> thold2_f {return thold2_f(static_cast<uint16_t>(m_value >> thold2_f::Offset));}

	template<std::size_t Index> struct thold_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using thold_v = typename thold_f<Index>::type;
	template<std::size_t Index> constexpr auto thold() const { return thold_v<Index>::get(*this); }

	constexpr dac_shhr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_shhr_r other) const -> dac_shhr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_shhr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0b10000000000000001; // 65537 0x10001

private:
	uint32_t m_value;
};
/**
 * DAC Sample and Hold refresh time register
 */
class dac_shrr_r {
public:

/**
 * DAC Channel 1 refresh Time (only valid in sample &amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI
 */
class trefresh1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr trefresh1_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_shrr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dac_shrr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_shrr_r>() const {return ClearSet<dac_shrr_r>(Mask, *this);}
	constexpr auto operator|(dac_shrr_r other) const -> dac_shrr_r { return static_cast<dac_shrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_shrr_r> other) const -> ClearSet<dac_shrr_r> {return ClearSet<dac_shrr_r>(dac_shrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC Channel 2 refresh Time (only valid in sample &amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI
 */
class trefresh2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr trefresh2_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_shrr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_shrr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_shrr_r>() const {return ClearSet<dac_shrr_r>(Mask, *this);}
	constexpr auto operator|(dac_shrr_r other) const -> dac_shrr_r { return static_cast<dac_shrr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_shrr_r> other) const -> ClearSet<dac_shrr_r> {return ClearSet<dac_shrr_r>(dac_shrr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto trefresh1() const -> trefresh1_f {return trefresh1_f(static_cast<uint8_t>(m_value >> trefresh1_f::Offset));}
	[[nodiscard]] constexpr auto trefresh2() const -> trefresh2_f {return trefresh2_f(static_cast<uint8_t>(m_value >> trefresh2_f::Offset));}

	template<std::size_t Index> struct trefresh_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using trefresh_v = typename trefresh_f<Index>::type;
	template<std::size_t Index> constexpr auto trefresh() const { return trefresh_v<Index>::get(*this); }

	constexpr dac_shrr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_shrr_r other) const -> dac_shrr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_shrr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0b10000000000000001; // 65537 0x10001

private:
	uint32_t m_value;
};
/**
 * Sawtooth register
 */
class dac_str1_r {
public:

/**
 * DAC Channel 1 Sawtooth reset value
 */
class strstdata1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr strstdata1_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_str1_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_str1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_str1_r>() const {return ClearSet<dac_str1_r>(Mask, *this);}
	constexpr auto operator|(dac_str1_r other) const -> dac_str1_r { return static_cast<dac_str1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_str1_r> other) const -> ClearSet<dac_str1_r> {return ClearSet<dac_str1_r>(dac_str1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC Channel1 Sawtooth direction setting
 */
class stdir1_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr stdir1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_str1_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_str1_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_str1_r>() const {return ClearSet<dac_str1_r>(Mask, *this);}
	constexpr auto operator|(dac_str1_r other) const -> dac_str1_r { return static_cast<dac_str1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_str1_r> other) const -> ClearSet<dac_str1_r> {return ClearSet<dac_str1_r>(dac_str1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC CH1 Sawtooth increment value (12.4 bit format)
 */
class stincdata1_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr stincdata1_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_str1_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_str1_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_str1_r>() const {return ClearSet<dac_str1_r>(Mask, *this);}
	constexpr auto operator|(dac_str1_r other) const -> dac_str1_r { return static_cast<dac_str1_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_str1_r> other) const -> ClearSet<dac_str1_r> {return ClearSet<dac_str1_r>(dac_str1_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto strstdata1() const -> strstdata1_f {return strstdata1_f(static_cast<uint16_t>(m_value >> strstdata1_f::Offset));}
	[[nodiscard]] constexpr auto stdir1() const -> stdir1_f {return stdir1_f((m_value & stdir1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stincdata1() const -> stincdata1_f {return stincdata1_f(static_cast<uint16_t>(m_value >> stincdata1_f::Offset));}

	constexpr dac_str1_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_str1_r other) const -> dac_str1_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_str1_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 88;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Sawtooth register
 */
class dac_str2_r {
public:

/**
 * DAC Channel 2 Sawtooth reset value
 */
class strstdata2_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 12;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr strstdata2_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_str2_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_str2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_str2_r>() const {return ClearSet<dac_str2_r>(Mask, *this);}
	constexpr auto operator|(dac_str2_r other) const -> dac_str2_r { return static_cast<dac_str2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_str2_r> other) const -> ClearSet<dac_str2_r> {return ClearSet<dac_str2_r>(dac_str2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * DAC Channel2 Sawtooth direction setting
 */
class stdir2_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr stdir2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dac_str2_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dac_str2_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_str2_r>() const {return ClearSet<dac_str2_r>(Mask, *this);}
	constexpr auto operator|(dac_str2_r other) const -> dac_str2_r { return static_cast<dac_str2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_str2_r> other) const -> ClearSet<dac_str2_r> {return ClearSet<dac_str2_r>(dac_str2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * DAC CH2 Sawtooth increment value (12.4 bit format)
 */
class stincdata2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr stincdata2_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator dac_str2_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_str2_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_str2_r>() const {return ClearSet<dac_str2_r>(Mask, *this);}
	constexpr auto operator|(dac_str2_r other) const -> dac_str2_r { return static_cast<dac_str2_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_str2_r> other) const -> ClearSet<dac_str2_r> {return ClearSet<dac_str2_r>(dac_str2_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto strstdata2() const -> strstdata2_f {return strstdata2_f(static_cast<uint16_t>(m_value >> strstdata2_f::Offset));}
	[[nodiscard]] constexpr auto stdir2() const -> stdir2_f {return stdir2_f((m_value & stdir2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stincdata2() const -> stincdata2_f {return stincdata2_f(static_cast<uint16_t>(m_value >> stincdata2_f::Offset));}

	constexpr dac_str2_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_str2_r other) const -> dac_str2_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_str2_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Sawtooth Mode register
 */
class dac_stmodr_r {
public:

/**
 * DAC Channel 1 Sawtooth Reset trigger selection
 */
class strsttrigsel1_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr strsttrigsel1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_stmodr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dac_stmodr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_stmodr_r>() const {return ClearSet<dac_stmodr_r>(Mask, *this);}
	constexpr auto operator|(dac_stmodr_r other) const -> dac_stmodr_r { return static_cast<dac_stmodr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_stmodr_r> other) const -> ClearSet<dac_stmodr_r> {return ClearSet<dac_stmodr_r>(dac_stmodr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC Channel 1 Sawtooth Increment trigger selection
 */
class stinctrigsel1_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stinctrigsel1_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_stmodr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dac_stmodr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_stmodr_r>() const {return ClearSet<dac_stmodr_r>(Mask, *this);}
	constexpr auto operator|(dac_stmodr_r other) const -> dac_stmodr_r { return static_cast<dac_stmodr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_stmodr_r> other) const -> ClearSet<dac_stmodr_r> {return ClearSet<dac_stmodr_r>(dac_stmodr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC Channel 1 Sawtooth Reset trigger selection
 */
class strsttrigsel2_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr strsttrigsel2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_stmodr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_stmodr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_stmodr_r>() const {return ClearSet<dac_stmodr_r>(Mask, *this);}
	constexpr auto operator|(dac_stmodr_r other) const -> dac_stmodr_r { return static_cast<dac_stmodr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_stmodr_r> other) const -> ClearSet<dac_stmodr_r> {return ClearSet<dac_stmodr_r>(dac_stmodr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DAC Channel 2 Sawtooth Increment trigger selection
 */
class stinctrigsel2_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr stinctrigsel2_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dac_stmodr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dac_stmodr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dac_stmodr_r>() const {return ClearSet<dac_stmodr_r>(Mask, *this);}
	constexpr auto operator|(dac_stmodr_r other) const -> dac_stmodr_r { return static_cast<dac_stmodr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dac_stmodr_r> other) const -> ClearSet<dac_stmodr_r> {return ClearSet<dac_stmodr_r>(dac_stmodr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto strsttrigsel1() const -> strsttrigsel1_f {return strsttrigsel1_f(static_cast<uint8_t>(m_value >> strsttrigsel1_f::Offset));}
	[[nodiscard]] constexpr auto stinctrigsel1() const -> stinctrigsel1_f {return stinctrigsel1_f(static_cast<uint8_t>(m_value >> stinctrigsel1_f::Offset));}
	[[nodiscard]] constexpr auto strsttrigsel2() const -> strsttrigsel2_f {return strsttrigsel2_f(static_cast<uint8_t>(m_value >> strsttrigsel2_f::Offset));}
	[[nodiscard]] constexpr auto stinctrigsel2() const -> stinctrigsel2_f {return stinctrigsel2_f(static_cast<uint8_t>(m_value >> stinctrigsel2_f::Offset));}

	template<std::size_t Index> struct strsttrigsel_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using strsttrigsel_v = typename strsttrigsel_f<Index>::type;
	template<std::size_t Index> constexpr auto strsttrigsel() const { return strsttrigsel_v<Index>::get(*this); }

	template<std::size_t Index> struct stinctrigsel_f { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using stinctrigsel_v = typename stinctrigsel_f<Index>::type;
	template<std::size_t Index> constexpr auto stinctrigsel() const { return stinctrigsel_v<Index>::get(*this); }

	constexpr dac_stmodr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dac_stmodr_r other) const -> dac_stmodr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dac_stmodr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	template<std::size_t Index> struct dac_dhr12r_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dac_dhr12r_v = typename dac_dhr12r_r<Index>::type;
	template<std::size_t Index> constexpr auto& dac_dhr12r() { }

	template<std::size_t Index> struct dac_dhr12l_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dac_dhr12l_v = typename dac_dhr12l_r<Index>::type;
	template<std::size_t Index> constexpr auto& dac_dhr12l() { }

	template<std::size_t Index> struct dac_dhr8r_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dac_dhr8r_v = typename dac_dhr8r_r<Index>::type;
	template<std::size_t Index> constexpr auto& dac_dhr8r() { }

	template<std::size_t Index> struct dac_dor_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dac_dor_v = typename dac_dor_r<Index>::type;
	template<std::size_t Index> constexpr auto& dac_dor() { }

	template<std::size_t Index> struct dac_shsr_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dac_shsr_v = typename dac_shsr_r<Index>::type;
	template<std::size_t Index> constexpr auto& dac_shsr() { }

	template<std::size_t Index> struct dac_str_r { static_assert(Index == 1 || Index == 2); };
	template<std::size_t Index> using dac_str_v = typename dac_str_r<Index>::type;
	template<std::size_t Index> constexpr auto& dac_str() { }

	Memory<uint32_t,dac_cr_r> dac_cr;
	WriteOnlyMemory<uint32_t,dac_swtrgr_r> dac_swtrgr;
	Memory<uint32_t,dac_dhr12r1_r> dac_dhr12r1;
	Memory<uint32_t,dac_dhr12l1_r> dac_dhr12l1;
	Memory<uint32_t,dac_dhr8r1_r> dac_dhr8r1;
	Memory<uint32_t,dac_dhr12r2_r> dac_dhr12r2;
	Memory<uint32_t,dac_dhr12l2_r> dac_dhr12l2;
	Memory<uint32_t,dac_dhr8r2_r> dac_dhr8r2;
	Memory<uint32_t,dac_dhr12rd_r> dac_dhr12rd;
	Memory<uint32_t,dac_dhr12ld_r> dac_dhr12ld;
	Memory<uint32_t,dac_dhr8rd_r> dac_dhr8rd;
	ReadOnlyMemory<uint32_t,dac_dor1_r> dac_dor1;
	ReadOnlyMemory<uint32_t,dac_dor2_r> dac_dor2;
	Memory<uint32_t,dac_sr_r> dac_sr;
	Memory<uint32_t,dac_ccr_r> dac_ccr;
	Memory<uint32_t,dac_mcr_r> dac_mcr;
	Memory<uint32_t,dac_shsr1_r> dac_shsr1;
	Memory<uint32_t,dac_shsr2_r> dac_shsr2;
	Memory<uint32_t,dac_shhr_r> dac_shhr;
	Memory<uint32_t,dac_shrr_r> dac_shrr;
	Padding<8> _p80;
	Memory<uint32_t,dac_str1_r> dac_str1;
	Memory<uint32_t,dac_str2_r> dac_str2;
	Memory<uint32_t,dac_stmodr_r> dac_stmodr;
};

template<> struct dac_p::dac_cr_r::en_f<1> { using type = dac_p::dac_cr_r::en1_f; };
template<> struct dac_p::dac_cr_r::en_f<2> { using type = dac_p::dac_cr_r::en2_f; };
template<> struct dac_p::dac_cr_r::ten_f<1> { using type = dac_p::dac_cr_r::ten1_f; };
template<> struct dac_p::dac_cr_r::ten_f<2> { using type = dac_p::dac_cr_r::ten2_f; };
template<> struct dac_p::dac_cr_r::tsel_f<1> { using type = dac_p::dac_cr_r::tsel1_f; };
template<> struct dac_p::dac_cr_r::tsel_f<2> { using type = dac_p::dac_cr_r::tsel2_f; };
template<> struct dac_p::dac_cr_r::wave_f<1> { using type = dac_p::dac_cr_r::wave1_f; };
template<> struct dac_p::dac_cr_r::wave_f<2> { using type = dac_p::dac_cr_r::wave2_f; };
template<> struct dac_p::dac_cr_r::mamp_f<1> { using type = dac_p::dac_cr_r::mamp1_f; };
template<> struct dac_p::dac_cr_r::mamp_f<2> { using type = dac_p::dac_cr_r::mamp2_f; };
template<> struct dac_p::dac_cr_r::dmaen_f<1> { using type = dac_p::dac_cr_r::dmaen1_f; };
template<> struct dac_p::dac_cr_r::dmaen_f<2> { using type = dac_p::dac_cr_r::dmaen2_f; };
template<> struct dac_p::dac_cr_r::dmaudrie_f<1> { using type = dac_p::dac_cr_r::dmaudrie1_f; };
template<> struct dac_p::dac_cr_r::dmaudrie_f<2> { using type = dac_p::dac_cr_r::dmaudrie2_f; };
template<> struct dac_p::dac_cr_r::cen_f<1> { using type = dac_p::dac_cr_r::cen1_f; };
template<> struct dac_p::dac_cr_r::cen_f<2> { using type = dac_p::dac_cr_r::cen2_f; };

template<> struct dac_p::dac_swtrgr_r::swtrig_f<1> { using type = dac_p::dac_swtrgr_r::swtrig1_f; };
template<> struct dac_p::dac_swtrgr_r::swtrig_f<2> { using type = dac_p::dac_swtrgr_r::swtrig2_f; };
template<> struct dac_p::dac_swtrgr_r::swtrigb_f<1> { using type = dac_p::dac_swtrgr_r::swtrigb1_f; };
template<> struct dac_p::dac_swtrgr_r::swtrigb_f<2> { using type = dac_p::dac_swtrgr_r::swtrigb2_f; };

template<> struct dac_p::dac_sr_r::dorstat_f<1> { using type = dac_p::dac_sr_r::dorstat1_f; };
template<> struct dac_p::dac_sr_r::dorstat_f<2> { using type = dac_p::dac_sr_r::dorstat2_f; };
template<> struct dac_p::dac_sr_r::dmaudr_f<1> { using type = dac_p::dac_sr_r::dmaudr1_f; };
template<> struct dac_p::dac_sr_r::dmaudr_f<2> { using type = dac_p::dac_sr_r::dmaudr2_f; };
template<> struct dac_p::dac_sr_r::cal_flag_f<1> { using type = dac_p::dac_sr_r::cal_flag1_f; };
template<> struct dac_p::dac_sr_r::cal_flag_f<2> { using type = dac_p::dac_sr_r::cal_flag2_f; };
template<> struct dac_p::dac_sr_r::bwst_f<1> { using type = dac_p::dac_sr_r::bwst1_f; };
template<> struct dac_p::dac_sr_r::bwst_f<2> { using type = dac_p::dac_sr_r::bwst2_f; };

template<> struct dac_p::dac_ccr_r::otrim_f<1> { using type = dac_p::dac_ccr_r::otrim1_f; };
template<> struct dac_p::dac_ccr_r::otrim_f<2> { using type = dac_p::dac_ccr_r::otrim2_f; };

template<> struct dac_p::dac_mcr_r::mode_f<1> { using type = dac_p::dac_mcr_r::mode1_f; };
template<> struct dac_p::dac_mcr_r::mode_f<2> { using type = dac_p::dac_mcr_r::mode2_f; };
template<> struct dac_p::dac_mcr_r::dmadouble_f<1> { using type = dac_p::dac_mcr_r::dmadouble1_f; };
template<> struct dac_p::dac_mcr_r::dmadouble_f<2> { using type = dac_p::dac_mcr_r::dmadouble2_f; };
template<> struct dac_p::dac_mcr_r::sinformat_f<1> { using type = dac_p::dac_mcr_r::sinformat1_f; };
template<> struct dac_p::dac_mcr_r::sinformat_f<2> { using type = dac_p::dac_mcr_r::sinformat2_f; };

template<> struct dac_p::dac_shhr_r::thold_f<1> { using type = dac_p::dac_shhr_r::thold1_f; };
template<> struct dac_p::dac_shhr_r::thold_f<2> { using type = dac_p::dac_shhr_r::thold2_f; };

template<> struct dac_p::dac_shrr_r::trefresh_f<1> { using type = dac_p::dac_shrr_r::trefresh1_f; };
template<> struct dac_p::dac_shrr_r::trefresh_f<2> { using type = dac_p::dac_shrr_r::trefresh2_f; };

template<> struct dac_p::dac_stmodr_r::strsttrigsel_f<1> { using type = dac_p::dac_stmodr_r::strsttrigsel1_f; };
template<> struct dac_p::dac_stmodr_r::strsttrigsel_f<2> { using type = dac_p::dac_stmodr_r::strsttrigsel2_f; };
template<> struct dac_p::dac_stmodr_r::stinctrigsel_f<1> { using type = dac_p::dac_stmodr_r::stinctrigsel1_f; };
template<> struct dac_p::dac_stmodr_r::stinctrigsel_f<2> { using type = dac_p::dac_stmodr_r::stinctrigsel2_f; };

template<> constexpr auto& dac_p::dac_dhr12r<1>() { return dac_dhr12r1; }
template<> constexpr auto& dac_p::dac_dhr12r<2>() { return dac_dhr12r2; }

template<> struct dac_p::dac_dhr12r_r<1> { using type = dac_p::dac_dhr12r1_r; };
template<> struct dac_p::dac_dhr12r_r<2> { using type = dac_p::dac_dhr12r2_r; };

template<> constexpr auto& dac_p::dac_dhr12l<1>() { return dac_dhr12l1; }
template<> constexpr auto& dac_p::dac_dhr12l<2>() { return dac_dhr12l2; }

template<> struct dac_p::dac_dhr12l_r<1> { using type = dac_p::dac_dhr12l1_r; };
template<> struct dac_p::dac_dhr12l_r<2> { using type = dac_p::dac_dhr12l2_r; };

template<> constexpr auto& dac_p::dac_dhr8r<1>() { return dac_dhr8r1; }
template<> constexpr auto& dac_p::dac_dhr8r<2>() { return dac_dhr8r2; }

template<> struct dac_p::dac_dhr8r_r<1> { using type = dac_p::dac_dhr8r1_r; };
template<> struct dac_p::dac_dhr8r_r<2> { using type = dac_p::dac_dhr8r2_r; };

template<> constexpr auto& dac_p::dac_dor<1>() { return dac_dor1; }
template<> constexpr auto& dac_p::dac_dor<2>() { return dac_dor2; }

template<> struct dac_p::dac_dor_r<1> { using type = dac_p::dac_dor1_r; };
template<> struct dac_p::dac_dor_r<2> { using type = dac_p::dac_dor2_r; };

template<> constexpr auto& dac_p::dac_shsr<1>() { return dac_shsr1; }
template<> constexpr auto& dac_p::dac_shsr<2>() { return dac_shsr2; }

template<> struct dac_p::dac_shsr_r<1> { using type = dac_p::dac_shsr1_r; };
template<> struct dac_p::dac_shsr_r<2> { using type = dac_p::dac_shsr2_r; };

template<> constexpr auto& dac_p::dac_str<1>() { return dac_str1; }
template<> constexpr auto& dac_p::dac_str<2>() { return dac_str2; }

template<> struct dac_p::dac_str_r<1> { using type = dac_p::dac_str1_r; };
template<> struct dac_p::dac_str_r<2> { using type = dac_p::dac_str2_r; };

static_assert(std::is_standard_layout_v<dac_p>);
static_assert(offsetof(dac_p, dac_cr) == dac_p::dac_cr_r::Offset);
static_assert(offsetof(dac_p, dac_swtrgr) == dac_p::dac_swtrgr_r::Offset);
static_assert(offsetof(dac_p, dac_dhr12r1) == dac_p::dac_dhr12r1_r::Offset);
static_assert(offsetof(dac_p, dac_dhr12l1) == dac_p::dac_dhr12l1_r::Offset);
static_assert(offsetof(dac_p, dac_dhr8r1) == dac_p::dac_dhr8r1_r::Offset);
static_assert(offsetof(dac_p, dac_dhr12r2) == dac_p::dac_dhr12r2_r::Offset);
static_assert(offsetof(dac_p, dac_dhr12l2) == dac_p::dac_dhr12l2_r::Offset);
static_assert(offsetof(dac_p, dac_dhr8r2) == dac_p::dac_dhr8r2_r::Offset);
static_assert(offsetof(dac_p, dac_dhr12rd) == dac_p::dac_dhr12rd_r::Offset);
static_assert(offsetof(dac_p, dac_dhr12ld) == dac_p::dac_dhr12ld_r::Offset);
static_assert(offsetof(dac_p, dac_dhr8rd) == dac_p::dac_dhr8rd_r::Offset);
static_assert(offsetof(dac_p, dac_dor1) == dac_p::dac_dor1_r::Offset);
static_assert(offsetof(dac_p, dac_dor2) == dac_p::dac_dor2_r::Offset);
static_assert(offsetof(dac_p, dac_sr) == dac_p::dac_sr_r::Offset);
static_assert(offsetof(dac_p, dac_ccr) == dac_p::dac_ccr_r::Offset);
static_assert(offsetof(dac_p, dac_mcr) == dac_p::dac_mcr_r::Offset);
static_assert(offsetof(dac_p, dac_shsr1) == dac_p::dac_shsr1_r::Offset);
static_assert(offsetof(dac_p, dac_shsr2) == dac_p::dac_shsr2_r::Offset);
static_assert(offsetof(dac_p, dac_shhr) == dac_p::dac_shhr_r::Offset);
static_assert(offsetof(dac_p, dac_shrr) == dac_p::dac_shrr_r::Offset);
static_assert(offsetof(dac_p, dac_str1) == dac_p::dac_str1_r::Offset);
static_assert(offsetof(dac_p, dac_str2) == dac_p::dac_str2_r::Offset);
static_assert(offsetof(dac_p, dac_stmodr) == dac_p::dac_stmodr_r::Offset);

inline dac_p& dac1 = *reinterpret_cast<dac_p*>(0x50000800);
inline dac_p& dac2 = *reinterpret_cast<dac_p*>(0x50000C00);
inline dac_p& dac3 = *reinterpret_cast<dac_p*>(0x50001000);
inline dac_p& dac4 = *reinterpret_cast<dac_p*>(0x50001400);

} // STM32G473XX

