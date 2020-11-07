#pragma once

#include "Memory.hpp"

namespace STM32F401
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
 * control register
 */
class cr_r {
public:

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
 * Calibration Output selection
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
 * Coarse digital calibration enable
 */
class dce_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dce_f(bool value = true) : m_value(value) {}
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

	[[nodiscard]] constexpr auto coe() const -> coe_f {return coe_f((m_value & coe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto osel() const -> osel_f {return osel_f(static_cast<uint8_t>(m_value >> osel_f::Offset));}
	[[nodiscard]] constexpr auto pol() const -> pol_f {return pol_f((m_value & pol_f::Mask) != 0);}
	[[nodiscard]] constexpr auto cosel() const -> cosel_f {return cosel_f((m_value & cosel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f((m_value & bkp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sub1h() const -> sub1h_f {return sub1h_f((m_value & sub1h_f::Mask) != 0);}
	[[nodiscard]] constexpr auto add1h() const -> add1h_f {return add1h_f((m_value & add1h_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsie() const -> tsie_f {return tsie_f((m_value & tsie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wutie() const -> wutie_f {return wutie_f((m_value & wutie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alrbie() const -> alrbie_f {return alrbie_f((m_value & alrbie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alraie() const -> alraie_f {return alraie_f((m_value & alraie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tse() const -> tse_f {return tse_f((m_value & tse_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wute() const -> wute_f {return wute_f((m_value & wute_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alrbe() const -> alrbe_f {return alrbe_f((m_value & alrbe_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alrae() const -> alrae_f {return alrae_f((m_value & alrae_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dce() const -> dce_f {return dce_f((m_value & dce_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fmt() const -> fmt_f {return fmt_f((m_value & fmt_f::Mask) != 0);}
	[[nodiscard]] constexpr auto bypshad() const -> bypshad_f {return bypshad_f((m_value & bypshad_f::Mask) != 0);}
	[[nodiscard]] constexpr auto refckon() const -> refckon_f {return refckon_f((m_value & refckon_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsedge() const -> tsedge_f {return tsedge_f((m_value & tsedge_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wcksel() const -> wcksel_f {return wcksel_f(static_cast<uint8_t>(m_value >> wcksel_f::Offset));}

	constexpr cr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cr_r other) const -> cr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * initialization and status register
 */
class isr_r {
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
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

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
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Alarm A flag
 */
class alraf_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr alraf_f(bool value = true) : m_value(value) {}
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
 * Alarm B flag
 */
class alrbf_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr alrbf_f(bool value = true) : m_value(value) {}
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
 * Wakeup timer flag
 */
class wutf_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wutf_f(bool value = true) : m_value(value) {}
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
 * Time-stamp flag
 */
class tsf_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tsf_f(bool value = true) : m_value(value) {}
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
 * Time-stamp overflow flag
 */
class tsovf_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tsovf_f(bool value = true) : m_value(value) {}
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
 * Tamper detection flag
 */
class tamp1f_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tamp1f_f(bool value = true) : m_value(value) {}
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
 * TAMPER2 detection flag
 */
class tamp2f_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tamp2f_f(bool value = true) : m_value(value) {}
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
 * Recalibration pending Flag
 */
class recalpf_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr recalpf_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator isr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(isr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<isr_r>() const {return ClearSet<isr_r>(Mask, *this);}
	constexpr auto operator|(isr_r other) const -> isr_r { return static_cast<isr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<isr_r> other) const -> ClearSet<isr_r> {return ClearSet<isr_r>(isr_r(Mask) | other.clear(), *this | other.set()); }

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
	[[nodiscard]] constexpr auto alraf() const -> alraf_f {return alraf_f((m_value & alraf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto alrbf() const -> alrbf_f {return alrbf_f((m_value & alrbf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wutf() const -> wutf_f {return wutf_f((m_value & wutf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsf() const -> tsf_f {return tsf_f((m_value & tsf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsovf() const -> tsovf_f {return tsovf_f((m_value & tsovf_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp1f() const -> tamp1f_f {return tamp1f_f((m_value & tamp1f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp2f() const -> tamp2f_f {return tamp2f_f((m_value & tamp2f_f::Mask) != 0);}
	[[nodiscard]] constexpr auto recalpf() const -> recalpf_f {return recalpf_f((m_value & recalpf_f::Mask) != 0);}

	constexpr isr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(isr_r other) const -> isr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> isr_r { return ~m_value; }
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
 * calibration register
 */
class calibr_r {
public:

/**
 * Digital calibration sign
 */
class dcs_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dcs_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator calibr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(calibr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calibr_r>() const {return ClearSet<calibr_r>(Mask, *this);}
	constexpr auto operator|(calibr_r other) const -> calibr_r { return static_cast<calibr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calibr_r> other) const -> ClearSet<calibr_r> {return ClearSet<calibr_r>(calibr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Digital calibration
 */
class dc_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 5;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr dc_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator calibr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(calibr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<calibr_r>() const {return ClearSet<calibr_r>(Mask, *this);}
	constexpr auto operator|(calibr_r other) const -> calibr_r { return static_cast<calibr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<calibr_r> other) const -> ClearSet<calibr_r> {return ClearSet<calibr_r>(calibr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

	[[nodiscard]] constexpr auto dcs() const -> dcs_f {return dcs_f((m_value & dcs_f::Mask) != 0);}
	[[nodiscard]] constexpr auto dc() const -> dc_f {return dc_f(static_cast<uint8_t>(m_value >> dc_f::Offset));}

	constexpr calibr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(calibr_r other) const -> calibr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> calibr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
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

	static constexpr std::size_t Offset = 28;
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

	static constexpr std::size_t Offset = 32;
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

	[[nodiscard]] constexpr auto pm() const -> pm_f {return pm_f((m_value & pm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ht() const -> ht_f {return ht_f(static_cast<uint8_t>(m_value >> ht_f::Offset));}
	[[nodiscard]] constexpr auto hu() const -> hu_f {return hu_f(static_cast<uint8_t>(m_value >> hu_f::Offset));}
	[[nodiscard]] constexpr auto mnt() const -> mnt_f {return mnt_f(static_cast<uint8_t>(m_value >> mnt_f::Offset));}
	[[nodiscard]] constexpr auto mnu() const -> mnu_f {return mnu_f(static_cast<uint8_t>(m_value >> mnu_f::Offset));}
	[[nodiscard]] constexpr auto st() const -> st_f {return st_f(static_cast<uint8_t>(m_value >> st_f::Offset));}
	[[nodiscard]] constexpr auto su() const -> su_f {return su_f(static_cast<uint8_t>(m_value >> su_f::Offset));}

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

	static constexpr std::size_t Offset = 60;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * tamper and alternate function configuration register
 */
class tafcr_r {
public:

/**
 * AFO_ALARM output type
 */
class alarmouttype_f {
public:
	static constexpr std::size_t Offset = 18;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr alarmouttype_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tafcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tafcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TIMESTAMP mapping
 */
class tsinsel_f {
public:
	static constexpr std::size_t Offset = 17;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tsinsel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tafcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tafcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMPER1 mapping
 */
class tamp1insel_f {
public:
	static constexpr std::size_t Offset = 16;
	static constexpr std::size_t Width = 1;
	static constexpr uint32_t Mask = static_cast<uint32_t>(1ULL << Offset);

	constexpr tamp1insel_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tafcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tafcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * TAMPER pull-up disable
 */
class tamppudis_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr tamppudis_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tafcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tafcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Tamper precharge duration
 */
class tampprch_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tampprch_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tafcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tafcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Tamper filter count
 */
class tampflt_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tampflt_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tafcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tafcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Tamper sampling frequency
 */
class tampfreq_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 3;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr tampfreq_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator tafcr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(tafcr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * Activate timestamp on tamper detection event
 */
class tampts_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tampts_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tafcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tafcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Active level for tamper 2
 */
class tamp2trg_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp2trg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tafcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tafcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Tamper 2 detection enable
 */
class tamp2e_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp2e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tafcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tafcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Tamper interrupt enable
 */
class tampie_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tampie_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tafcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tafcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Active level for tamper 1
 */
class tamp1trg_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp1trg_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tafcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tafcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * Tamper 1 detection enable
 */
class tamp1e_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr tamp1e_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator tafcr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(tafcr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<tafcr_r>() const {return ClearSet<tafcr_r>(Mask, *this);}
	constexpr auto operator|(tafcr_r other) const -> tafcr_r { return static_cast<tafcr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<tafcr_r> other) const -> ClearSet<tafcr_r> {return ClearSet<tafcr_r>(tafcr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto alarmouttype() const -> alarmouttype_f {return alarmouttype_f((m_value & alarmouttype_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tsinsel() const -> tsinsel_f {return tsinsel_f((m_value & tsinsel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp1insel() const -> tamp1insel_f {return tamp1insel_f((m_value & tamp1insel_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamppudis() const -> tamppudis_f {return tamppudis_f((m_value & tamppudis_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tampprch() const -> tampprch_f {return tampprch_f(static_cast<uint8_t>(m_value >> tampprch_f::Offset));}
	[[nodiscard]] constexpr auto tampflt() const -> tampflt_f {return tampflt_f(static_cast<uint8_t>(m_value >> tampflt_f::Offset));}
	[[nodiscard]] constexpr auto tampfreq() const -> tampfreq_f {return tampfreq_f(static_cast<uint8_t>(m_value >> tampfreq_f::Offset));}
	[[nodiscard]] constexpr auto tampts() const -> tampts_f {return tampts_f((m_value & tampts_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp2trg() const -> tamp2trg_f {return tamp2trg_f((m_value & tamp2trg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp2e() const -> tamp2e_f {return tamp2e_f((m_value & tamp2e_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tampie() const -> tampie_f {return tampie_f((m_value & tampie_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp1trg() const -> tamp1trg_f {return tamp1trg_f((m_value & tamp1trg_f::Mask) != 0);}
	[[nodiscard]] constexpr auto tamp1e() const -> tamp1e_f {return tamp1e_f((m_value & tamp1e_f::Mask) != 0);}

	constexpr tafcr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(tafcr_r other) const -> tafcr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> tafcr_r { return ~m_value; }
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

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp0r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp0r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp0r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp0r_r>() const {return ClearSet<bkp0r_r>(Mask, *this);}
	constexpr auto operator|(bkp0r_r other) const -> bkp0r_r { return static_cast<bkp0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp0r_r> other) const -> ClearSet<bkp0r_r> {return ClearSet<bkp0r_r>(bkp0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp0r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp0r_r other) const -> bkp0r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp0r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp1r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp1r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp1r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp1r_r>() const {return ClearSet<bkp1r_r>(Mask, *this);}
	constexpr auto operator|(bkp1r_r other) const -> bkp1r_r { return static_cast<bkp1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp1r_r> other) const -> ClearSet<bkp1r_r> {return ClearSet<bkp1r_r>(bkp1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp1r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp1r_r other) const -> bkp1r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp1r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 84;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp2r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp2r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp2r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp2r_r>() const {return ClearSet<bkp2r_r>(Mask, *this);}
	constexpr auto operator|(bkp2r_r other) const -> bkp2r_r { return static_cast<bkp2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp2r_r> other) const -> ClearSet<bkp2r_r> {return ClearSet<bkp2r_r>(bkp2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp2r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp2r_r other) const -> bkp2r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp2r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 88;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp3r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp3r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp3r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp3r_r>() const {return ClearSet<bkp3r_r>(Mask, *this);}
	constexpr auto operator|(bkp3r_r other) const -> bkp3r_r { return static_cast<bkp3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp3r_r> other) const -> ClearSet<bkp3r_r> {return ClearSet<bkp3r_r>(bkp3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp3r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp3r_r other) const -> bkp3r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp3r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 92;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp4r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp4r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp4r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp4r_r>() const {return ClearSet<bkp4r_r>(Mask, *this);}
	constexpr auto operator|(bkp4r_r other) const -> bkp4r_r { return static_cast<bkp4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp4r_r> other) const -> ClearSet<bkp4r_r> {return ClearSet<bkp4r_r>(bkp4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp4r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp4r_r other) const -> bkp4r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp4r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 96;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp5r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp5r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp5r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp5r_r>() const {return ClearSet<bkp5r_r>(Mask, *this);}
	constexpr auto operator|(bkp5r_r other) const -> bkp5r_r { return static_cast<bkp5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp5r_r> other) const -> ClearSet<bkp5r_r> {return ClearSet<bkp5r_r>(bkp5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp5r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp5r_r other) const -> bkp5r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp5r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 100;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp6r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp6r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp6r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp6r_r>() const {return ClearSet<bkp6r_r>(Mask, *this);}
	constexpr auto operator|(bkp6r_r other) const -> bkp6r_r { return static_cast<bkp6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp6r_r> other) const -> ClearSet<bkp6r_r> {return ClearSet<bkp6r_r>(bkp6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp6r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp6r_r other) const -> bkp6r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp6r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 104;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp7r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp7r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp7r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp7r_r>() const {return ClearSet<bkp7r_r>(Mask, *this);}
	constexpr auto operator|(bkp7r_r other) const -> bkp7r_r { return static_cast<bkp7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp7r_r> other) const -> ClearSet<bkp7r_r> {return ClearSet<bkp7r_r>(bkp7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp7r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp7r_r other) const -> bkp7r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp7r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 108;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp8r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp8r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp8r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp8r_r>() const {return ClearSet<bkp8r_r>(Mask, *this);}
	constexpr auto operator|(bkp8r_r other) const -> bkp8r_r { return static_cast<bkp8r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp8r_r> other) const -> ClearSet<bkp8r_r> {return ClearSet<bkp8r_r>(bkp8r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp8r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp8r_r other) const -> bkp8r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp8r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 112;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp9r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp9r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp9r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp9r_r>() const {return ClearSet<bkp9r_r>(Mask, *this);}
	constexpr auto operator|(bkp9r_r other) const -> bkp9r_r { return static_cast<bkp9r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp9r_r> other) const -> ClearSet<bkp9r_r> {return ClearSet<bkp9r_r>(bkp9r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp9r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp9r_r other) const -> bkp9r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp9r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 116;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp10r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp10r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp10r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp10r_r>() const {return ClearSet<bkp10r_r>(Mask, *this);}
	constexpr auto operator|(bkp10r_r other) const -> bkp10r_r { return static_cast<bkp10r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp10r_r> other) const -> ClearSet<bkp10r_r> {return ClearSet<bkp10r_r>(bkp10r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp10r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp10r_r other) const -> bkp10r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp10r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 120;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp11r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp11r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp11r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp11r_r>() const {return ClearSet<bkp11r_r>(Mask, *this);}
	constexpr auto operator|(bkp11r_r other) const -> bkp11r_r { return static_cast<bkp11r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp11r_r> other) const -> ClearSet<bkp11r_r> {return ClearSet<bkp11r_r>(bkp11r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp11r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp11r_r other) const -> bkp11r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp11r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 124;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp12r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp12r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp12r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp12r_r>() const {return ClearSet<bkp12r_r>(Mask, *this);}
	constexpr auto operator|(bkp12r_r other) const -> bkp12r_r { return static_cast<bkp12r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp12r_r> other) const -> ClearSet<bkp12r_r> {return ClearSet<bkp12r_r>(bkp12r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp12r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp12r_r other) const -> bkp12r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp12r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 128;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp13r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp13r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp13r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp13r_r>() const {return ClearSet<bkp13r_r>(Mask, *this);}
	constexpr auto operator|(bkp13r_r other) const -> bkp13r_r { return static_cast<bkp13r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp13r_r> other) const -> ClearSet<bkp13r_r> {return ClearSet<bkp13r_r>(bkp13r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp13r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp13r_r other) const -> bkp13r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp13r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 132;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp14r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp14r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp14r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp14r_r>() const {return ClearSet<bkp14r_r>(Mask, *this);}
	constexpr auto operator|(bkp14r_r other) const -> bkp14r_r { return static_cast<bkp14r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp14r_r> other) const -> ClearSet<bkp14r_r> {return ClearSet<bkp14r_r>(bkp14r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp14r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp14r_r other) const -> bkp14r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp14r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 136;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp15r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp15r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp15r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp15r_r>() const {return ClearSet<bkp15r_r>(Mask, *this);}
	constexpr auto operator|(bkp15r_r other) const -> bkp15r_r { return static_cast<bkp15r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp15r_r> other) const -> ClearSet<bkp15r_r> {return ClearSet<bkp15r_r>(bkp15r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp15r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp15r_r other) const -> bkp15r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp15r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 140;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp16r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp16r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp16r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp16r_r>() const {return ClearSet<bkp16r_r>(Mask, *this);}
	constexpr auto operator|(bkp16r_r other) const -> bkp16r_r { return static_cast<bkp16r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp16r_r> other) const -> ClearSet<bkp16r_r> {return ClearSet<bkp16r_r>(bkp16r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp16r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp16r_r other) const -> bkp16r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp16r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 144;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp17r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp17r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp17r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp17r_r>() const {return ClearSet<bkp17r_r>(Mask, *this);}
	constexpr auto operator|(bkp17r_r other) const -> bkp17r_r { return static_cast<bkp17r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp17r_r> other) const -> ClearSet<bkp17r_r> {return ClearSet<bkp17r_r>(bkp17r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp17r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp17r_r other) const -> bkp17r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp17r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 148;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp18r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp18r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp18r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp18r_r>() const {return ClearSet<bkp18r_r>(Mask, *this);}
	constexpr auto operator|(bkp18r_r other) const -> bkp18r_r { return static_cast<bkp18r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp18r_r> other) const -> ClearSet<bkp18r_r> {return ClearSet<bkp18r_r>(bkp18r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp18r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp18r_r other) const -> bkp18r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp18r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 152;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * backup register
 */
class bkp19r_r {
public:

/**
 * BKP
 */
class bkp_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 32;
	static constexpr uint32_t Range = static_cast<uint32_t>(0b11111111111111111111111111111111);
	static constexpr uint32_t Mask = static_cast<uint32_t>(static_cast<uint32_t>(Range) << Offset);

	constexpr bkp_f(uint32_t value) : m_value(value) {}
	constexpr operator uint32_t() const {return m_value;}
	constexpr operator bkp19r_r() const {return static_cast<uint32_t>(static_cast<uint32_t>(m_value) << Offset);}
	static constexpr auto get(bkp19r_r value) -> uint32_t { return static_cast<uint32_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<bkp19r_r>() const {return ClearSet<bkp19r_r>(Mask, *this);}
	constexpr auto operator|(bkp19r_r other) const -> bkp19r_r { return static_cast<bkp19r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<bkp19r_r> other) const -> ClearSet<bkp19r_r> {return ClearSet<bkp19r_r>(bkp19r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint32_t m_value;
};

	[[nodiscard]] constexpr auto bkp() const -> bkp_f {return bkp_f(static_cast<uint32_t>(m_value >> bkp_f::Offset));}

	constexpr bkp19r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(bkp19r_r other) const -> bkp19r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> bkp19r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 156;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,tr_r> tr;
	Memory<uint32_t,dr_r> dr;
	Memory<uint32_t,cr_r> cr;
	Memory<uint32_t,isr_r> isr;
	Memory<uint32_t,prer_r> prer;
	Memory<uint32_t,wutr_r> wutr;
	Memory<uint32_t,calibr_r> calibr;
	Memory<uint32_t,alrmar_r> alrmar;
	Memory<uint32_t,alrmbr_r> alrmbr;
	WriteOnlyMemory<uint32_t,wpr_r> wpr;
	ReadOnlyMemory<uint32_t,ssr_r> ssr;
	WriteOnlyMemory<uint32_t,shiftr_r> shiftr;
	ReadOnlyMemory<uint32_t,tstr_r> tstr;
	ReadOnlyMemory<uint32_t,tsdr_r> tsdr;
	ReadOnlyMemory<uint32_t,tsssr_r> tsssr;
	Memory<uint32_t,calr_r> calr;
	Memory<uint32_t,tafcr_r> tafcr;
	Memory<uint32_t,alrmassr_r> alrmassr;
	Memory<uint32_t,alrmbssr_r> alrmbssr;
	Padding<4> _p76;
	Memory<uint32_t,bkp0r_r> bkp0r;
	Memory<uint32_t,bkp1r_r> bkp1r;
	Memory<uint32_t,bkp2r_r> bkp2r;
	Memory<uint32_t,bkp3r_r> bkp3r;
	Memory<uint32_t,bkp4r_r> bkp4r;
	Memory<uint32_t,bkp5r_r> bkp5r;
	Memory<uint32_t,bkp6r_r> bkp6r;
	Memory<uint32_t,bkp7r_r> bkp7r;
	Memory<uint32_t,bkp8r_r> bkp8r;
	Memory<uint32_t,bkp9r_r> bkp9r;
	Memory<uint32_t,bkp10r_r> bkp10r;
	Memory<uint32_t,bkp11r_r> bkp11r;
	Memory<uint32_t,bkp12r_r> bkp12r;
	Memory<uint32_t,bkp13r_r> bkp13r;
	Memory<uint32_t,bkp14r_r> bkp14r;
	Memory<uint32_t,bkp15r_r> bkp15r;
	Memory<uint32_t,bkp16r_r> bkp16r;
	Memory<uint32_t,bkp17r_r> bkp17r;
	Memory<uint32_t,bkp18r_r> bkp18r;
	Memory<uint32_t,bkp19r_r> bkp19r;
};

template<> struct rtc_p::alrmar_r::msk_f<4> { using type = rtc_p::alrmar_r::msk4_f; };
template<> struct rtc_p::alrmar_r::msk_f<3> { using type = rtc_p::alrmar_r::msk3_f; };
template<> struct rtc_p::alrmar_r::msk_f<2> { using type = rtc_p::alrmar_r::msk2_f; };
template<> struct rtc_p::alrmar_r::msk_f<1> { using type = rtc_p::alrmar_r::msk1_f; };

template<> struct rtc_p::alrmbr_r::msk_f<4> { using type = rtc_p::alrmbr_r::msk4_f; };
template<> struct rtc_p::alrmbr_r::msk_f<3> { using type = rtc_p::alrmbr_r::msk3_f; };
template<> struct rtc_p::alrmbr_r::msk_f<2> { using type = rtc_p::alrmbr_r::msk2_f; };
template<> struct rtc_p::alrmbr_r::msk_f<1> { using type = rtc_p::alrmbr_r::msk1_f; };

template<> struct rtc_p::calr_r::calw_f<8> { using type = rtc_p::calr_r::calw8_f; };
template<> struct rtc_p::calr_r::calw_f<16> { using type = rtc_p::calr_r::calw16_f; };

static_assert(std::is_standard_layout_v<rtc_p>);
static_assert(offsetof(rtc_p, tr) == rtc_p::tr_r::Offset);
static_assert(offsetof(rtc_p, dr) == rtc_p::dr_r::Offset);
static_assert(offsetof(rtc_p, cr) == rtc_p::cr_r::Offset);
static_assert(offsetof(rtc_p, isr) == rtc_p::isr_r::Offset);
static_assert(offsetof(rtc_p, prer) == rtc_p::prer_r::Offset);
static_assert(offsetof(rtc_p, wutr) == rtc_p::wutr_r::Offset);
static_assert(offsetof(rtc_p, calibr) == rtc_p::calibr_r::Offset);
static_assert(offsetof(rtc_p, alrmar) == rtc_p::alrmar_r::Offset);
static_assert(offsetof(rtc_p, alrmbr) == rtc_p::alrmbr_r::Offset);
static_assert(offsetof(rtc_p, wpr) == rtc_p::wpr_r::Offset);
static_assert(offsetof(rtc_p, ssr) == rtc_p::ssr_r::Offset);
static_assert(offsetof(rtc_p, shiftr) == rtc_p::shiftr_r::Offset);
static_assert(offsetof(rtc_p, tstr) == rtc_p::tstr_r::Offset);
static_assert(offsetof(rtc_p, tsdr) == rtc_p::tsdr_r::Offset);
static_assert(offsetof(rtc_p, tsssr) == rtc_p::tsssr_r::Offset);
static_assert(offsetof(rtc_p, calr) == rtc_p::calr_r::Offset);
static_assert(offsetof(rtc_p, tafcr) == rtc_p::tafcr_r::Offset);
static_assert(offsetof(rtc_p, alrmassr) == rtc_p::alrmassr_r::Offset);
static_assert(offsetof(rtc_p, alrmbssr) == rtc_p::alrmbssr_r::Offset);
static_assert(offsetof(rtc_p, bkp0r) == rtc_p::bkp0r_r::Offset);
static_assert(offsetof(rtc_p, bkp1r) == rtc_p::bkp1r_r::Offset);
static_assert(offsetof(rtc_p, bkp2r) == rtc_p::bkp2r_r::Offset);
static_assert(offsetof(rtc_p, bkp3r) == rtc_p::bkp3r_r::Offset);
static_assert(offsetof(rtc_p, bkp4r) == rtc_p::bkp4r_r::Offset);
static_assert(offsetof(rtc_p, bkp5r) == rtc_p::bkp5r_r::Offset);
static_assert(offsetof(rtc_p, bkp6r) == rtc_p::bkp6r_r::Offset);
static_assert(offsetof(rtc_p, bkp7r) == rtc_p::bkp7r_r::Offset);
static_assert(offsetof(rtc_p, bkp8r) == rtc_p::bkp8r_r::Offset);
static_assert(offsetof(rtc_p, bkp9r) == rtc_p::bkp9r_r::Offset);
static_assert(offsetof(rtc_p, bkp10r) == rtc_p::bkp10r_r::Offset);
static_assert(offsetof(rtc_p, bkp11r) == rtc_p::bkp11r_r::Offset);
static_assert(offsetof(rtc_p, bkp12r) == rtc_p::bkp12r_r::Offset);
static_assert(offsetof(rtc_p, bkp13r) == rtc_p::bkp13r_r::Offset);
static_assert(offsetof(rtc_p, bkp14r) == rtc_p::bkp14r_r::Offset);
static_assert(offsetof(rtc_p, bkp15r) == rtc_p::bkp15r_r::Offset);
static_assert(offsetof(rtc_p, bkp16r) == rtc_p::bkp16r_r::Offset);
static_assert(offsetof(rtc_p, bkp17r) == rtc_p::bkp17r_r::Offset);
static_assert(offsetof(rtc_p, bkp18r) == rtc_p::bkp18r_r::Offset);
static_assert(offsetof(rtc_p, bkp19r) == rtc_p::bkp19r_r::Offset);

inline rtc_p& rtc = *reinterpret_cast<rtc_p*>(0x40002800);

} // STM32F401

