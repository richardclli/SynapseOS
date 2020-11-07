#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * Real-time clock
 */
class rtc_p {
public:
/**
 * time register
 */
class tr_r {
public:

/**
 * AM/PM notation
 */
class pm_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr_r>() const {return ClearSet<tr_r>(Mask, *this);}
	constexpr auto operator|(tr_r other) const -> tr_r { return static_cast<tr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr_r> other) const -> ClearSet<tr_r> {return ClearSet<tr_r>(tr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Hour tens in BCD format
 */
class ht_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ht_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr_r>() const {return ClearSet<tr_r>(Mask, *this);}
	constexpr auto operator|(tr_r other) const -> tr_r { return static_cast<tr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr_r> other) const -> ClearSet<tr_r> {return ClearSet<tr_r>(tr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Hour units in BCD format
 */
class hu_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr_r>() const {return ClearSet<tr_r>(Mask, *this);}
	constexpr auto operator|(tr_r other) const -> tr_r { return static_cast<tr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr_r> other) const -> ClearSet<tr_r> {return ClearSet<tr_r>(tr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Minute tens in BCD format
 */
class mnt_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr_r>() const {return ClearSet<tr_r>(Mask, *this);}
	constexpr auto operator|(tr_r other) const -> tr_r { return static_cast<tr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr_r> other) const -> ClearSet<tr_r> {return ClearSet<tr_r>(tr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Minute units in BCD format
 */
class mnu_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mnu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr_r>() const {return ClearSet<tr_r>(Mask, *this);}
	constexpr auto operator|(tr_r other) const -> tr_r { return static_cast<tr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr_r> other) const -> ClearSet<tr_r> {return ClearSet<tr_r>(tr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Second tens in BCD format
 */
class st_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr st_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr_r>() const {return ClearSet<tr_r>(Mask, *this);}
	constexpr auto operator|(tr_r other) const -> tr_r { return static_cast<tr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr_r> other) const -> ClearSet<tr_r> {return ClearSet<tr_r>(tr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Second units in BCD format
 */
class su_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr su_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tr_r>() const {return ClearSet<tr_r>(Mask, *this);}
	constexpr auto operator|(tr_r other) const -> tr_r { return static_cast<tr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tr_r> other) const -> ClearSet<tr_r> {return ClearSet<tr_r>(tr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto pm() const -> pm_f {return pm_f((m_value & pm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ht() const -> ht_f {return ht_f(static_cast<uint8_t>(m_value >> ht_f::Offset));}
	[[nodiscard]] constexpr auto hu() const -> hu_f {return hu_f(static_cast<uint8_t>(m_value >> hu_f::Offset));}
	[[nodiscard]] constexpr auto mnt() const -> mnt_f {return mnt_f(static_cast<uint8_t>(m_value >> mnt_f::Offset));}
	[[nodiscard]] constexpr auto mnu() const -> mnu_f {return mnu_f(static_cast<uint8_t>(m_value >> mnu_f::Offset));}
	[[nodiscard]] constexpr auto st() const -> st_f {return st_f(static_cast<uint8_t>(m_value >> st_f::Offset));}
	[[nodiscard]] constexpr auto su() const -> su_f {return su_f(static_cast<uint8_t>(m_value >> su_f::Offset));}

	constexpr tr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tr_r other) const -> tr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * date register
 */
class dr_r {
public:

/**
 * Year tens in BCD format
 */
class yt_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr yt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Year units in BCD format
 */
class yu_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr yu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Week day units
 */
class wdu_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr wdu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Month tens in BCD format
 */
class mt_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mt_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator dr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(dr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Month units in BCD format
 */
class mu_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Date tens in BCD format
 */
class dt_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Date units in BCD format
 */
class du_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr du_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator dr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(dr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<dr_r>() const {return ClearSet<dr_r>(Mask, *this);}
	constexpr auto operator|(dr_r other) const -> dr_r { return static_cast<dr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<dr_r> other) const -> ClearSet<dr_r> {return ClearSet<dr_r>(dr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto yt() const -> yt_f {return yt_f(static_cast<uint8_t>(m_value >> yt_f::Offset));}
	[[nodiscard]] constexpr auto yu() const -> yu_f {return yu_f(static_cast<uint8_t>(m_value >> yu_f::Offset));}
	[[nodiscard]] constexpr auto wdu() const -> wdu_f {return wdu_f(static_cast<uint8_t>(m_value >> wdu_f::Offset));}
	[[nodiscard]] constexpr auto mt() const -> mt_f {return mt_f((m_value & mt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mu() const -> mu_f {return mu_f(static_cast<uint8_t>(m_value >> mu_f::Offset));}
	[[nodiscard]] constexpr auto dt() const -> dt_f {return dt_f(static_cast<uint8_t>(m_value >> dt_f::Offset));}
	[[nodiscard]] constexpr auto du() const -> du_f {return du_f(static_cast<uint8_t>(m_value >> du_f::Offset));}

	constexpr dr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(dr_r other) const -> dr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> dr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0b10000100000001; // 8449 0x2101

private:
	uint32_t m_value;
};
/**
 * sub second register
 */
class ssr_r {
public:

/**
 * Sub second value
 */
class ss_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ss_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator ssr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ssr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ssr_r>() const {return ClearSet<ssr_r>(Mask, *this);}
	constexpr auto operator|(ssr_r other) const -> ssr_r { return static_cast<ssr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ssr_r> other) const -> ClearSet<ssr_r> {return ClearSet<ssr_r>(ssr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ss() const -> ss_f {return ss_f(static_cast<uint16_t>(m_value >> ss_f::Offset));}

	constexpr ssr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ssr_r other) const -> ssr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ssr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * initialization and status register
 */
class icsr_r {
public:

/**
 * Alarm A write flag
 */
class alrawf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr alrawf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Alarm B write flag
 */
class alrbwf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr alrbwf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Wakeup timer write flag
 */
class wutwf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wutwf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Shift operation pending
 */
class shpf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr shpf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Initialization status flag
 */
class inits_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr inits_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Registers synchronization flag
 */
class rsf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr rsf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Initialization flag
 */
class initf_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr initf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Initialization mode
 */
class init_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr init_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Recalibration pending Flag
 */
class recalpf_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr recalpf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator icsr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(icsr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<icsr_r>() const {return ClearSet<icsr_r>(Mask, *this);}
	constexpr auto operator|(icsr_r other) const -> icsr_r { return static_cast<icsr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<icsr_r> other) const -> ClearSet<icsr_r> {return ClearSet<icsr_r>(icsr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto alrawf() const -> alrawf_f {return alrawf_f((m_value & alrawf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alrbwf() const -> alrbwf_f {return alrbwf_f((m_value & alrbwf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wutwf() const -> wutwf_f {return wutwf_f((m_value & wutwf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto shpf() const -> shpf_f {return shpf_f((m_value & shpf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto inits() const -> inits_f {return inits_f((m_value & inits_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rsf() const -> rsf_f {return rsf_f((m_value & rsf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto initf() const -> initf_f {return initf_f((m_value & initf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto init() const -> init_f {return init_f((m_value & init_f::Mask) != 0);}
	[[nodiscard]] constexpr auto recalpf() const -> recalpf_f {return recalpf_f((m_value & recalpf_f::Mask) != 0);}

	constexpr icsr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(icsr_r other) const -> icsr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> icsr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0b111; // 7 0x7

private:
	uint32_t m_value;
};
/**
 * prescaler register
 */
class prer_r {
public:

/**
 * Asynchronous prescaler factor
 */
class prediv_a_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr prediv_a_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator prer_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(prer_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<prer_r>() const {return ClearSet<prer_r>(Mask, *this);}
	constexpr auto operator|(prer_r other) const -> prer_r { return static_cast<prer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<prer_r> other) const -> ClearSet<prer_r> {return ClearSet<prer_r>(prer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Synchronous prescaler factor
 */
class prediv_s_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 15;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr prediv_s_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator prer_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(prer_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<prer_r>() const {return ClearSet<prer_r>(Mask, *this);}
	constexpr auto operator|(prer_r other) const -> prer_r { return static_cast<prer_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<prer_r> other) const -> ClearSet<prer_r> {return ClearSet<prer_r>(prer_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto prediv_a() const -> prediv_a_f {return prediv_a_f(static_cast<uint8_t>(m_value >> prediv_a_f::Offset));}
	[[nodiscard]] constexpr auto prediv_s() const -> prediv_s_f {return prediv_s_f(static_cast<uint16_t>(m_value >> prediv_s_f::Offset));}

	constexpr prer_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(prer_r other) const -> prer_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> prer_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0b11111110000000011111111; // 8323327 0x7F00FF

private:
	uint32_t m_value;
};
/**
 * wakeup timer register
 */
class wutr_r {
public:

/**
 * Wakeup auto-reload value bits
 */
class wut_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr wut_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator wutr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(wutr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<wutr_r>() const {return ClearSet<wutr_r>(Mask, *this);}
	constexpr auto operator|(wutr_r other) const -> wutr_r { return static_cast<wutr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<wutr_r> other) const -> ClearSet<wutr_r> {return ClearSet<wutr_r>(wutr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto wut() const -> wut_f {return wut_f(static_cast<uint16_t>(m_value >> wut_f::Offset));}

	constexpr wutr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(wutr_r other) const -> wutr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> wutr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0b1111111111111111; // 65535 0xFFFF

private:
	uint32_t m_value;
};
/**
 * control register
 */
class cr_r {
public:

/**
 * Wakeup clock selection
 */
class wcksel_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr wcksel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Time-stamp event active edge
 */
class tsedge_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tsedge_f(bool value = true) : m_value(value) {}
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
 * Reference clock detection enable (50 or 60 Hz)
 */
class refckon_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr refckon_f(bool value = true) : m_value(value) {}
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
 * Bypass the shadow registers
 */
class bypshad_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr bypshad_f(bool value = true) : m_value(value) {}
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
 * Hour format
 */
class fmt_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fmt_f(bool value = true) : m_value(value) {}
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
 * Alarm A enable
 */
class alrae_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr alrae_f(bool value = true) : m_value(value) {}
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
 * Alarm B enable
 */
class alrbe_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr alrbe_f(bool value = true) : m_value(value) {}
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
 * Wakeup timer enable
 */
class wute_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wute_f(bool value = true) : m_value(value) {}
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
 * Time stamp enable
 */
class tse_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tse_f(bool value = true) : m_value(value) {}
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
 * Alarm A interrupt enable
 */
class alraie_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr alraie_f(bool value = true) : m_value(value) {}
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
 * Alarm B interrupt enable
 */
class alrbie_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr alrbie_f(bool value = true) : m_value(value) {}
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
 * Wakeup timer interrupt enable
 */
class wutie_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wutie_f(bool value = true) : m_value(value) {}
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
 * Time-stamp interrupt enable
 */
class tsie_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tsie_f(bool value = true) : m_value(value) {}
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
 * Add 1 hour (summer time change)
 */
class add1h_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr add1h_f(bool value = true) : m_value(value) {}
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
 * Subtract 1 hour (winter time change)
 */
class sub1h_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr sub1h_f(bool value = true) : m_value(value) {}
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
 * Backup
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr bkp_f(bool value = true) : m_value(value) {}
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
 * Calibration output selection
 */
class cosel_f {
public:
	static constexpr std::size_t Offset = 19;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr cosel_f(bool value = true) : m_value(value) {}
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
 * Output polarity
 */
class pol_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pol_f(bool value = true) : m_value(value) {}
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
 * Output selection
 */
class osel_f {
public:
	static constexpr std::size_t Offset = 21;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr osel_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator cr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(cr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Calibration output enable
 */
class coe_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr coe_f(bool value = true) : m_value(value) {}
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
 * timestamp on internal event enable
 */
class itse_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr itse_f(bool value = true) : m_value(value) {}
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
 * TAMPTS
 */
class tampts_f {
public:
	static constexpr std::size_t Offset = 25;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tampts_f(bool value = true) : m_value(value) {}
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
 * TAMPOE
 */
class tampoe_f {
public:
	static constexpr std::size_t Offset = 26;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tampoe_f(bool value = true) : m_value(value) {}
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
 * TAMPALRM_PU
 */
class tampalrm_pu_f {
public:
	static constexpr std::size_t Offset = 29;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tampalrm_pu_f(bool value = true) : m_value(value) {}
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
 * TAMPALRM_TYPE
 */
class tampalrm_type_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tampalrm_type_f(bool value = true) : m_value(value) {}
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
 * OUT2EN
 */
class out2en_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr out2en_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cr_r>() const {return ClearSet<cr_r>(Mask, *this);}
	constexpr auto operator|(cr_r other) const -> cr_r { return static_cast<cr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cr_r> other) const -> ClearSet<cr_r> {return ClearSet<cr_r>(cr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto wcksel() const -> wcksel_f {return wcksel_f(static_cast<uint8_t>(m_value >> wcksel_f::Offset));}
	[[nodiscard]] constexpr auto tsedge() const -> tsedge_f {return tsedge_f((m_value & tsedge_f::Mask) != 0);}
	[[nodiscard]] constexpr auto refckon() const -> refckon_f {return refckon_f((m_value & refckon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bypshad() const -> bypshad_f {return bypshad_f((m_value & bypshad_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fmt() const -> fmt_f {return fmt_f((m_value & fmt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alrae() const -> alrae_f {return alrae_f((m_value & alrae_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alrbe() const -> alrbe_f {return alrbe_f((m_value & alrbe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wute() const -> wute_f {return wute_f((m_value & wute_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tse() const -> tse_f {return tse_f((m_value & tse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alraie() const -> alraie_f {return alraie_f((m_value & alraie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alrbie() const -> alrbie_f {return alrbie_f((m_value & alrbie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wutie() const -> wutie_f {return wutie_f((m_value & wutie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsie() const -> tsie_f {return tsie_f((m_value & tsie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto add1h() const -> add1h_f {return add1h_f((m_value & add1h_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sub1h() const -> sub1h_f {return sub1h_f((m_value & sub1h_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f((m_value & bkp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cosel() const -> cosel_f {return cosel_f((m_value & cosel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pol() const -> pol_f {return pol_f((m_value & pol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto osel() const -> osel_f {return osel_f(static_cast<uint8_t>(m_value >> osel_f::Offset));}
	[[nodiscard]] constexpr auto coe() const -> coe_f {return coe_f((m_value & coe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itse() const -> itse_f {return itse_f((m_value & itse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tampts() const -> tampts_f {return tampts_f((m_value & tampts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tampoe() const -> tampoe_f {return tampoe_f((m_value & tampoe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tampalrm_pu() const -> tampalrm_pu_f {return tampalrm_pu_f((m_value & tampalrm_pu_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tampalrm_type() const -> tampalrm_type_f {return tampalrm_type_f((m_value & tampalrm_type_f::Mask) != 0);}
	[[nodiscard]] constexpr auto out2en() const -> out2en_f {return out2en_f((m_value & out2en_f::Mask) != 0);}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * write protection register
 */
class wpr_r {
public:

/**
 * Write protection key
 */
class key_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 8;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr key_f(uint8_t value) : m_value(value) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator wpr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(wpr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<wpr_r>() const {return ClearSet<wpr_r>(Mask, *this);}
	constexpr auto operator|(wpr_r other) const -> wpr_r { return static_cast<wpr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<wpr_r> other) const -> ClearSet<wpr_r> {return ClearSet<wpr_r>(wpr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto key() const -> key_f {return key_f(static_cast<uint8_t>(m_value >> key_f::Offset));}

	constexpr wpr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(wpr_r other) const -> wpr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> wpr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 36;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * calibration register
 */
class calr_r {
public:

/**
 * Increase frequency of RTC by 488.5 ppm
 */
class calp_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr calp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator calr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(calr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calr_r>() const {return ClearSet<calr_r>(Mask, *this);}
	constexpr auto operator|(calr_r other) const -> calr_r { return static_cast<calr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calr_r> other) const -> ClearSet<calr_r> {return ClearSet<calr_r>(calr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Use an 8-second calibration cycle period
 */
class calw8_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr calw8_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator calr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(calr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calr_r>() const {return ClearSet<calr_r>(Mask, *this);}
	constexpr auto operator|(calr_r other) const -> calr_r { return static_cast<calr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calr_r> other) const -> ClearSet<calr_r> {return ClearSet<calr_r>(calr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Use a 16-second calibration cycle period
 */
class calw16_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr calw16_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator calr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(calr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calr_r>() const {return ClearSet<calr_r>(Mask, *this);}
	constexpr auto operator|(calr_r other) const -> calr_r { return static_cast<calr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calr_r> other) const -> ClearSet<calr_r> {return ClearSet<calr_r>(calr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Calibration minus
 */
class calm_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 9;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr calm_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator calr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(calr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calr_r>() const {return ClearSet<calr_r>(Mask, *this);}
	constexpr auto operator|(calr_r other) const -> calr_r { return static_cast<calr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calr_r> other) const -> ClearSet<calr_r> {return ClearSet<calr_r>(calr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto calp() const -> calp_f {return calp_f((m_value & calp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calw8() const -> calw8_f {return calw8_f((m_value & calw8_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calw16() const -> calw16_f {return calw16_f((m_value & calw16_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calm() const -> calm_f {return calm_f(static_cast<uint16_t>(m_value >> calm_f::Offset));}

	template<std::size_t Index> struct calw_f { static_assert(Index == 8 || Index == 16); };
	template<std::size_t Index> using calw_v = typename calw_f<Index>::type;
	template<std::size_t Index> constexpr auto calw() const { return calw_v<Index>::get(*this); }

	constexpr calr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(calr_r other) const -> calr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> calr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 40;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * shift control register
 */
class shiftr_r {
public:

/**
 * Add one second
 */
class add1s_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr add1s_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator shiftr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(shiftr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<shiftr_r>() const {return ClearSet<shiftr_r>(Mask, *this);}
	constexpr auto operator|(shiftr_r other) const -> shiftr_r { return static_cast<shiftr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shiftr_r> other) const -> ClearSet<shiftr_r> {return ClearSet<shiftr_r>(shiftr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Subtract a fraction of a second
 */
class subfs_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 15;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr subfs_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator shiftr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(shiftr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<shiftr_r>() const {return ClearSet<shiftr_r>(Mask, *this);}
	constexpr auto operator|(shiftr_r other) const -> shiftr_r { return static_cast<shiftr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<shiftr_r> other) const -> ClearSet<shiftr_r> {return ClearSet<shiftr_r>(shiftr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto add1s() const -> add1s_f {return add1s_f((m_value & add1s_f::Mask) != 0);}
	[[nodiscard]] constexpr auto subfs() const -> subfs_f {return subfs_f(static_cast<uint16_t>(m_value >> subfs_f::Offset));}

	constexpr shiftr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(shiftr_r other) const -> shiftr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> shiftr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 44;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * time stamp time register
 */
class tstr_r {
public:

/**
 * Second units in BCD format
 */
class su_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr su_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tstr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tstr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tstr_r>() const {return ClearSet<tstr_r>(Mask, *this);}
	constexpr auto operator|(tstr_r other) const -> tstr_r { return static_cast<tstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tstr_r> other) const -> ClearSet<tstr_r> {return ClearSet<tstr_r>(tstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Second tens in BCD format
 */
class st_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr st_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tstr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tstr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tstr_r>() const {return ClearSet<tstr_r>(Mask, *this);}
	constexpr auto operator|(tstr_r other) const -> tstr_r { return static_cast<tstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tstr_r> other) const -> ClearSet<tstr_r> {return ClearSet<tstr_r>(tstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Minute units in BCD format
 */
class mnu_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mnu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tstr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tstr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tstr_r>() const {return ClearSet<tstr_r>(Mask, *this);}
	constexpr auto operator|(tstr_r other) const -> tstr_r { return static_cast<tstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tstr_r> other) const -> ClearSet<tstr_r> {return ClearSet<tstr_r>(tstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Minute tens in BCD format
 */
class mnt_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tstr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tstr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tstr_r>() const {return ClearSet<tstr_r>(Mask, *this);}
	constexpr auto operator|(tstr_r other) const -> tstr_r { return static_cast<tstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tstr_r> other) const -> ClearSet<tstr_r> {return ClearSet<tstr_r>(tstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Hour units in BCD format
 */
class hu_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tstr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tstr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tstr_r>() const {return ClearSet<tstr_r>(Mask, *this);}
	constexpr auto operator|(tstr_r other) const -> tstr_r { return static_cast<tstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tstr_r> other) const -> ClearSet<tstr_r> {return ClearSet<tstr_r>(tstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Hour tens in BCD format
 */
class ht_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ht_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tstr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(tstr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tstr_r>() const {return ClearSet<tstr_r>(Mask, *this);}
	constexpr auto operator|(tstr_r other) const -> tstr_r { return static_cast<tstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tstr_r> other) const -> ClearSet<tstr_r> {return ClearSet<tstr_r>(tstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * AM/PM notation
 */
class pm_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tstr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tstr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tstr_r>() const {return ClearSet<tstr_r>(Mask, *this);}
	constexpr auto operator|(tstr_r other) const -> tstr_r { return static_cast<tstr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tstr_r> other) const -> ClearSet<tstr_r> {return ClearSet<tstr_r>(tstr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto su() const -> su_f {return su_f(static_cast<uint8_t>(m_value >> su_f::Offset));}
	[[nodiscard]] constexpr auto st() const -> st_f {return st_f(static_cast<uint8_t>(m_value >> st_f::Offset));}
	[[nodiscard]] constexpr auto mnu() const -> mnu_f {return mnu_f(static_cast<uint8_t>(m_value >> mnu_f::Offset));}
	[[nodiscard]] constexpr auto mnt() const -> mnt_f {return mnt_f(static_cast<uint8_t>(m_value >> mnt_f::Offset));}
	[[nodiscard]] constexpr auto hu() const -> hu_f {return hu_f(static_cast<uint8_t>(m_value >> hu_f::Offset));}
	[[nodiscard]] constexpr auto ht() const -> ht_f {return ht_f(static_cast<uint8_t>(m_value >> ht_f::Offset));}
	[[nodiscard]] constexpr auto pm() const -> pm_f {return pm_f((m_value & pm_f::Mask) != 0);}

	constexpr tstr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tstr_r other) const -> tstr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tstr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 48;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * time stamp date register
 */
class tsdr_r {
public:

/**
 * Week day units
 */
class wdu_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr wdu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tsdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tsdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tsdr_r>() const {return ClearSet<tsdr_r>(Mask, *this);}
	constexpr auto operator|(tsdr_r other) const -> tsdr_r { return static_cast<tsdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tsdr_r> other) const -> ClearSet<tsdr_r> {return ClearSet<tsdr_r>(tsdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Month tens in BCD format
 */
class mt_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr mt_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tsdr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tsdr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tsdr_r>() const {return ClearSet<tsdr_r>(Mask, *this);}
	constexpr auto operator|(tsdr_r other) const -> tsdr_r { return static_cast<tsdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tsdr_r> other) const -> ClearSet<tsdr_r> {return ClearSet<tsdr_r>(tsdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Month units in BCD format
 */
class mu_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tsdr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tsdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tsdr_r>() const {return ClearSet<tsdr_r>(Mask, *this);}
	constexpr auto operator|(tsdr_r other) const -> tsdr_r { return static_cast<tsdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tsdr_r> other) const -> ClearSet<tsdr_r> {return ClearSet<tsdr_r>(tsdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Date tens in BCD format
 */
class dt_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tsdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tsdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tsdr_r>() const {return ClearSet<tsdr_r>(Mask, *this);}
	constexpr auto operator|(tsdr_r other) const -> tsdr_r { return static_cast<tsdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tsdr_r> other) const -> ClearSet<tsdr_r> {return ClearSet<tsdr_r>(tsdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Date units in BCD format
 */
class du_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr du_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tsdr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(tsdr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tsdr_r>() const {return ClearSet<tsdr_r>(Mask, *this);}
	constexpr auto operator|(tsdr_r other) const -> tsdr_r { return static_cast<tsdr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tsdr_r> other) const -> ClearSet<tsdr_r> {return ClearSet<tsdr_r>(tsdr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto wdu() const -> wdu_f {return wdu_f(static_cast<uint8_t>(m_value >> wdu_f::Offset));}
	[[nodiscard]] constexpr auto mt() const -> mt_f {return mt_f((m_value & mt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mu() const -> mu_f {return mu_f(static_cast<uint8_t>(m_value >> mu_f::Offset));}
	[[nodiscard]] constexpr auto dt() const -> dt_f {return dt_f(static_cast<uint8_t>(m_value >> dt_f::Offset));}
	[[nodiscard]] constexpr auto du() const -> du_f {return du_f(static_cast<uint8_t>(m_value >> du_f::Offset));}

	constexpr tsdr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tsdr_r other) const -> tsdr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tsdr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 52;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * timestamp sub second register
 */
class tsssr_r {
public:

/**
 * Sub second value
 */
class ss_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 16;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ss_f(uint16_t value) : m_value(value) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator tsssr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tsssr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tsssr_r>() const {return ClearSet<tsssr_r>(Mask, *this);}
	constexpr auto operator|(tsssr_r other) const -> tsssr_r { return static_cast<tsssr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tsssr_r> other) const -> ClearSet<tsssr_r> {return ClearSet<tsssr_r>(tsssr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto ss() const -> ss_f {return ss_f(static_cast<uint16_t>(m_value >> ss_f::Offset));}

	constexpr tsssr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tsssr_r other) const -> tsssr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tsssr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 56;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * alarm A register
 */
class alrmar_r {
public:

/**
 * Alarm A date mask
 */
class msk4_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr msk4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmar_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmar_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Week day selection
 */
class wdsel_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wdsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmar_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmar_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Date tens in BCD format
 */
class dt_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(alrmar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Date units or day in BCD format
 */
class du_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr du_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(alrmar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alarm A hours mask
 */
class msk3_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr msk3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmar_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmar_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AM/PM notation
 */
class pm_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmar_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmar_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Hour tens in BCD format
 */
class ht_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ht_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(alrmar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Hour units in BCD format
 */
class hu_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmar_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(alrmar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alarm A minutes mask
 */
class msk2_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr msk2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmar_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmar_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Minute tens in BCD format
 */
class mnt_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmar_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(alrmar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Minute units in BCD format
 */
class mnu_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mnu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmar_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(alrmar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alarm A seconds mask
 */
class msk1_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr msk1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmar_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmar_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Second tens in BCD format
 */
class st_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr st_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmar_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(alrmar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Second units in BCD format
 */
class su_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr su_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmar_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(alrmar_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmar_r>() const {return ClearSet<alrmar_r>(Mask, *this);}
	constexpr auto operator|(alrmar_r other) const -> alrmar_r { return static_cast<alrmar_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmar_r> other) const -> ClearSet<alrmar_r> {return ClearSet<alrmar_r>(alrmar_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto msk4() const -> msk4_f {return msk4_f((m_value & msk4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wdsel() const -> wdsel_f {return wdsel_f((m_value & wdsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dt() const -> dt_f {return dt_f(static_cast<uint8_t>(m_value >> dt_f::Offset));}
	[[nodiscard]] constexpr auto du() const -> du_f {return du_f(static_cast<uint8_t>(m_value >> du_f::Offset));}
	[[nodiscard]] constexpr auto msk3() const -> msk3_f {return msk3_f((m_value & msk3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pm() const -> pm_f {return pm_f((m_value & pm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ht() const -> ht_f {return ht_f(static_cast<uint8_t>(m_value >> ht_f::Offset));}
	[[nodiscard]] constexpr auto hu() const -> hu_f {return hu_f(static_cast<uint8_t>(m_value >> hu_f::Offset));}
	[[nodiscard]] constexpr auto msk2() const -> msk2_f {return msk2_f((m_value & msk2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mnt() const -> mnt_f {return mnt_f(static_cast<uint8_t>(m_value >> mnt_f::Offset));}
	[[nodiscard]] constexpr auto mnu() const -> mnu_f {return mnu_f(static_cast<uint8_t>(m_value >> mnu_f::Offset));}
	[[nodiscard]] constexpr auto msk1() const -> msk1_f {return msk1_f((m_value & msk1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto st() const -> st_f {return st_f(static_cast<uint8_t>(m_value >> st_f::Offset));}
	[[nodiscard]] constexpr auto su() const -> su_f {return su_f(static_cast<uint8_t>(m_value >> su_f::Offset));}

	template<std::size_t Index> struct msk_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using msk_v = typename msk_f<Index>::type;
	template<std::size_t Index> constexpr auto msk() const { return msk_v<Index>::get(*this); }

	constexpr alrmar_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(alrmar_r other) const -> alrmar_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> alrmar_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * alarm A sub second register
 */
class alrmassr_r {
public:

/**
 * Mask the most-significant bits starting at this bit
 */
class maskss_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr maskss_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmassr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(alrmassr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmassr_r>() const {return ClearSet<alrmassr_r>(Mask, *this);}
	constexpr auto operator|(alrmassr_r other) const -> alrmassr_r { return static_cast<alrmassr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmassr_r> other) const -> ClearSet<alrmassr_r> {return ClearSet<alrmassr_r>(alrmassr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Sub seconds value
 */
class ss_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 15;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ss_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator alrmassr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(alrmassr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmassr_r>() const {return ClearSet<alrmassr_r>(Mask, *this);}
	constexpr auto operator|(alrmassr_r other) const -> alrmassr_r { return static_cast<alrmassr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmassr_r> other) const -> ClearSet<alrmassr_r> {return ClearSet<alrmassr_r>(alrmassr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto maskss() const -> maskss_f {return maskss_f(static_cast<uint8_t>(m_value >> maskss_f::Offset));}
	[[nodiscard]] constexpr auto ss() const -> ss_f {return ss_f(static_cast<uint16_t>(m_value >> ss_f::Offset));}

	constexpr alrmassr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(alrmassr_r other) const -> alrmassr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> alrmassr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * alarm B register
 */
class alrmbr_r {
public:

/**
 * Alarm B date mask
 */
class msk4_f {
public:
	static constexpr std::size_t Offset = 31;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr msk4_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmbr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmbr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Week day selection
 */
class wdsel_f {
public:
	static constexpr std::size_t Offset = 30;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr wdsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmbr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmbr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Date tens in BCD format
 */
class dt_f {
public:
	static constexpr std::size_t Offset = 28;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr dt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmbr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(alrmbr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Date units or day in BCD format
 */
class du_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr du_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmbr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(alrmbr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alarm B hours mask
 */
class msk3_f {
public:
	static constexpr std::size_t Offset = 23;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr msk3_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmbr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmbr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * AM/PM notation
 */
class pm_f {
public:
	static constexpr std::size_t Offset = 22;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr pm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmbr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmbr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Hour tens in BCD format
 */
class ht_f {
public:
	static constexpr std::size_t Offset = 20;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr ht_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmbr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(alrmbr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Hour units in BCD format
 */
class hu_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr hu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmbr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(alrmbr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alarm B minutes mask
 */
class msk2_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr msk2_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmbr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmbr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Minute tens in BCD format
 */
class mnt_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mnt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmbr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(alrmbr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Minute units in BCD format
 */
class mnu_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr mnu_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmbr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(alrmbr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Alarm B seconds mask
 */
class msk1_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr msk1_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator alrmbr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(alrmbr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Second tens in BCD format
 */
class st_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr st_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmbr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(alrmbr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Second units in BCD format
 */
class su_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr su_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmbr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(alrmbr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbr_r>() const {return ClearSet<alrmbr_r>(Mask, *this);}
	constexpr auto operator|(alrmbr_r other) const -> alrmbr_r { return static_cast<alrmbr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbr_r> other) const -> ClearSet<alrmbr_r> {return ClearSet<alrmbr_r>(alrmbr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto msk4() const -> msk4_f {return msk4_f((m_value & msk4_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wdsel() const -> wdsel_f {return wdsel_f((m_value & wdsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dt() const -> dt_f {return dt_f(static_cast<uint8_t>(m_value >> dt_f::Offset));}
	[[nodiscard]] constexpr auto du() const -> du_f {return du_f(static_cast<uint8_t>(m_value >> du_f::Offset));}
	[[nodiscard]] constexpr auto msk3() const -> msk3_f {return msk3_f((m_value & msk3_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pm() const -> pm_f {return pm_f((m_value & pm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ht() const -> ht_f {return ht_f(static_cast<uint8_t>(m_value >> ht_f::Offset));}
	[[nodiscard]] constexpr auto hu() const -> hu_f {return hu_f(static_cast<uint8_t>(m_value >> hu_f::Offset));}
	[[nodiscard]] constexpr auto msk2() const -> msk2_f {return msk2_f((m_value & msk2_f::Mask) != 0);}
	[[nodiscard]] constexpr auto mnt() const -> mnt_f {return mnt_f(static_cast<uint8_t>(m_value >> mnt_f::Offset));}
	[[nodiscard]] constexpr auto mnu() const -> mnu_f {return mnu_f(static_cast<uint8_t>(m_value >> mnu_f::Offset));}
	[[nodiscard]] constexpr auto msk1() const -> msk1_f {return msk1_f((m_value & msk1_f::Mask) != 0);}
	[[nodiscard]] constexpr auto st() const -> st_f {return st_f(static_cast<uint8_t>(m_value >> st_f::Offset));}
	[[nodiscard]] constexpr auto su() const -> su_f {return su_f(static_cast<uint8_t>(m_value >> su_f::Offset));}

	template<std::size_t Index> struct msk_f { static_assert(Index == 4 || Index == 3 || Index == 2 || Index == 1); };
	template<std::size_t Index> using msk_v = typename msk_f<Index>::type;
	template<std::size_t Index> constexpr auto msk() const { return msk_v<Index>::get(*this); }

	constexpr alrmbr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(alrmbr_r other) const -> alrmbr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> alrmbr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * alarm B sub second register
 */
class alrmbssr_r {
public:

/**
 * Mask the most-significant bits starting at this bit
 */
class maskss_f {
public:
	static constexpr std::size_t Offset = 24;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr maskss_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator alrmbssr_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(alrmbssr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbssr_r>() const {return ClearSet<alrmbssr_r>(Mask, *this);}
	constexpr auto operator|(alrmbssr_r other) const -> alrmbssr_r { return static_cast<alrmbssr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbssr_r> other) const -> ClearSet<alrmbssr_r> {return ClearSet<alrmbssr_r>(alrmbssr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Sub seconds value
 */
class ss_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 15;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b111111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ss_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator alrmbssr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(alrmbssr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<alrmbssr_r>() const {return ClearSet<alrmbssr_r>(Mask, *this);}
	constexpr auto operator|(alrmbssr_r other) const -> alrmbssr_r { return static_cast<alrmbssr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<alrmbssr_r> other) const -> ClearSet<alrmbssr_r> {return ClearSet<alrmbssr_r>(alrmbssr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto maskss() const -> maskss_f {return maskss_f(static_cast<uint8_t>(m_value >> maskss_f::Offset));}
	[[nodiscard]] constexpr auto ss() const -> ss_f {return ss_f(static_cast<uint16_t>(m_value >> ss_f::Offset));}

	constexpr alrmbssr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(alrmbssr_r other) const -> alrmbssr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> alrmbssr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
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
 * ALRAF
 */
class alraf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr alraf_f(bool value = true) : m_value(value) {}
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
 * ALRBF
 */
class alrbf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr alrbf_f(bool value = true) : m_value(value) {}
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
 * WUTF
 */
class wutf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wutf_f(bool value = true) : m_value(value) {}
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
 * TSF
 */
class tsf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tsf_f(bool value = true) : m_value(value) {}
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
 * TSOVF
 */
class tsovf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tsovf_f(bool value = true) : m_value(value) {}
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
 * ITSF
 */
class itsf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr itsf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator sr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(sr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<sr_r>() const {return ClearSet<sr_r>(Mask, *this);}
	constexpr auto operator|(sr_r other) const -> sr_r { return static_cast<sr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<sr_r> other) const -> ClearSet<sr_r> {return ClearSet<sr_r>(sr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto alraf() const -> alraf_f {return alraf_f((m_value & alraf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alrbf() const -> alrbf_f {return alrbf_f((m_value & alrbf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wutf() const -> wutf_f {return wutf_f((m_value & wutf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsf() const -> tsf_f {return tsf_f((m_value & tsf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsovf() const -> tsovf_f {return tsovf_f((m_value & tsovf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itsf() const -> itsf_f {return itsf_f((m_value & itsf_f::Mask) != 0);}

	constexpr sr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(sr_r other) const -> sr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> sr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class misr_r {
public:

/**
 * ALRAMF
 */
class alramf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr alramf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ALRBMF
 */
class alrbmf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr alrbmf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WUTMF
 */
class wutmf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr wutmf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TSMF
 */
class tsmf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tsmf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TSOVMF
 */
class tsovmf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tsovmf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ITSMF
 */
class itsmf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr itsmf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator misr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(misr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<misr_r>() const {return ClearSet<misr_r>(Mask, *this);}
	constexpr auto operator|(misr_r other) const -> misr_r { return static_cast<misr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<misr_r> other) const -> ClearSet<misr_r> {return ClearSet<misr_r>(misr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto alramf() const -> alramf_f {return alramf_f((m_value & alramf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alrbmf() const -> alrbmf_f {return alrbmf_f((m_value & alrbmf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wutmf() const -> wutmf_f {return wutmf_f((m_value & wutmf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsmf() const -> tsmf_f {return tsmf_f((m_value & tsmf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsovmf() const -> tsovmf_f {return tsovmf_f((m_value & tsovmf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto itsmf() const -> itsmf_f {return itsmf_f((m_value & itsmf_f::Mask) != 0);}

	constexpr misr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(misr_r other) const -> misr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> misr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * status register
 */
class scr_r {
public:

/**
 * CALRAF
 */
class calraf_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr calraf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CALRBF
 */
class calrbf_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr calrbf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CWUTF
 */
class cwutf_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr cwutf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTSF
 */
class ctsf_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctsf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTSOVF
 */
class ctsovf_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctsovf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CITSF
 */
class citsf_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr citsf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator scr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(scr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<scr_r>() const {return ClearSet<scr_r>(Mask, *this);}
	constexpr auto operator|(scr_r other) const -> scr_r { return static_cast<scr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<scr_r> other) const -> ClearSet<scr_r> {return ClearSet<scr_r>(scr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto calraf() const -> calraf_f {return calraf_f((m_value & calraf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto calrbf() const -> calrbf_f {return calrbf_f((m_value & calrbf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cwutf() const -> cwutf_f {return cwutf_f((m_value & cwutf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctsf() const -> ctsf_f {return ctsf_f((m_value & ctsf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctsovf() const -> ctsovf_f {return ctsovf_f((m_value & ctsovf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto citsf() const -> citsf_f {return citsf_f((m_value & citsf_f::Mask) != 0);}

	constexpr scr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(scr_r other) const -> scr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> scr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,tr_r> tr;
	Memory<uint32_t,dr_r> dr;
	ReadOnlyMemory<uint32_t,ssr_r> ssr;
	Memory<uint32_t,icsr_r> icsr;
	Memory<uint32_t,prer_r> prer;
	Memory<uint32_t,wutr_r> wutr;
	Memory<uint32_t,cr_r> cr;
	Padding<8> _p28;
	WriteOnlyMemory<uint32_t,wpr_r> wpr;
	Memory<uint32_t,calr_r> calr;
	WriteOnlyMemory<uint32_t,shiftr_r> shiftr;
	ReadOnlyMemory<uint32_t,tstr_r> tstr;
	ReadOnlyMemory<uint32_t,tsdr_r> tsdr;
	ReadOnlyMemory<uint32_t,tsssr_r> tsssr;
	Padding<4> _p60;
	Memory<uint32_t,alrmar_r> alrmar;
	Memory<uint32_t,alrmassr_r> alrmassr;
	Memory<uint32_t,alrmbr_r> alrmbr;
	Memory<uint32_t,alrmbssr_r> alrmbssr;
	ReadOnlyMemory<uint32_t,sr_r> sr;
	ReadOnlyMemory<uint32_t,misr_r> misr;
	Padding<4> _p88;
	WriteOnlyMemory<uint32_t,scr_r> scr;
};

template<> struct rtc_p::calr_r::calw_f<8> { using type = rtc_p::calr_r::calw8_f; };
template<> struct rtc_p::calr_r::calw_f<16> { using type = rtc_p::calr_r::calw16_f; };

template<> struct rtc_p::alrmar_r::msk_f<4> { using type = rtc_p::alrmar_r::msk4_f; };
template<> struct rtc_p::alrmar_r::msk_f<3> { using type = rtc_p::alrmar_r::msk3_f; };
template<> struct rtc_p::alrmar_r::msk_f<2> { using type = rtc_p::alrmar_r::msk2_f; };
template<> struct rtc_p::alrmar_r::msk_f<1> { using type = rtc_p::alrmar_r::msk1_f; };

template<> struct rtc_p::alrmbr_r::msk_f<4> { using type = rtc_p::alrmbr_r::msk4_f; };
template<> struct rtc_p::alrmbr_r::msk_f<3> { using type = rtc_p::alrmbr_r::msk3_f; };
template<> struct rtc_p::alrmbr_r::msk_f<2> { using type = rtc_p::alrmbr_r::msk2_f; };
template<> struct rtc_p::alrmbr_r::msk_f<1> { using type = rtc_p::alrmbr_r::msk1_f; };

static_assert(std::is_standard_layout_v<rtc_p>);
static_assert(offsetof(rtc_p, tr) == rtc_p::tr_r::Offset);
static_assert(offsetof(rtc_p, dr) == rtc_p::dr_r::Offset);
static_assert(offsetof(rtc_p, ssr) == rtc_p::ssr_r::Offset);
static_assert(offsetof(rtc_p, icsr) == rtc_p::icsr_r::Offset);
static_assert(offsetof(rtc_p, prer) == rtc_p::prer_r::Offset);
static_assert(offsetof(rtc_p, wutr) == rtc_p::wutr_r::Offset);
static_assert(offsetof(rtc_p, cr) == rtc_p::cr_r::Offset);
static_assert(offsetof(rtc_p, wpr) == rtc_p::wpr_r::Offset);
static_assert(offsetof(rtc_p, calr) == rtc_p::calr_r::Offset);
static_assert(offsetof(rtc_p, shiftr) == rtc_p::shiftr_r::Offset);
static_assert(offsetof(rtc_p, tstr) == rtc_p::tstr_r::Offset);
static_assert(offsetof(rtc_p, tsdr) == rtc_p::tsdr_r::Offset);
static_assert(offsetof(rtc_p, tsssr) == rtc_p::tsssr_r::Offset);
static_assert(offsetof(rtc_p, alrmar) == rtc_p::alrmar_r::Offset);
static_assert(offsetof(rtc_p, alrmassr) == rtc_p::alrmassr_r::Offset);
static_assert(offsetof(rtc_p, alrmbr) == rtc_p::alrmbr_r::Offset);
static_assert(offsetof(rtc_p, alrmbssr) == rtc_p::alrmbssr_r::Offset);
static_assert(offsetof(rtc_p, sr) == rtc_p::sr_r::Offset);
static_assert(offsetof(rtc_p, misr) == rtc_p::misr_r::Offset);
static_assert(offsetof(rtc_p, scr) == rtc_p::scr_r::Offset);

inline rtc_p& rtc = *reinterpret_cast<rtc_p*>(0x40002800);

} // STM32G473XX

