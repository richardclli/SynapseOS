#pragma once

#include "Memory.hpp"

namespace STM32G473XX
{

/**
 * USB_FS_device
 */
class usb_p {
public:
/**
 * USB endpoint n register
 */
class ep0r_r {
public:

/**
 * EA
 */
class ea_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ea_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep0r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep0r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep0r_r>() const {return ClearSet<ep0r_r>(Mask, *this);}
	constexpr auto operator|(ep0r_r other) const -> ep0r_r { return static_cast<ep0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep0r_r> other) const -> ClearSet<ep0r_r> {return ClearSet<ep0r_r>(ep0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * STAT_TX
 */
class stat_tx_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr stat_tx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep0r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep0r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep0r_r>() const {return ClearSet<ep0r_r>(Mask, *this);}
	constexpr auto operator|(ep0r_r other) const -> ep0r_r { return static_cast<ep0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep0r_r> other) const -> ClearSet<ep0r_r> {return ClearSet<ep0r_r>(ep0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_TX
 */
class dtog_tx_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtog_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep0r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep0r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep0r_r>() const {return ClearSet<ep0r_r>(Mask, *this);}
	constexpr auto operator|(ep0r_r other) const -> ep0r_r { return static_cast<ep0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep0r_r> other) const -> ClearSet<ep0r_r> {return ClearSet<ep0r_r>(ep0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_TX
 */
class ctr_tx_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctr_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep0r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep0r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep0r_r>() const {return ClearSet<ep0r_r>(Mask, *this);}
	constexpr auto operator|(ep0r_r other) const -> ep0r_r { return static_cast<ep0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep0r_r> other) const -> ClearSet<ep0r_r> {return ClearSet<ep0r_r>(ep0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_KIND
 */
class ep_kind_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ep_kind_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep0r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep0r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep0r_r>() const {return ClearSet<ep0r_r>(Mask, *this);}
	constexpr auto operator|(ep0r_r other) const -> ep0r_r { return static_cast<ep0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep0r_r> other) const -> ClearSet<ep0r_r> {return ClearSet<ep0r_r>(ep0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_TYPE
 */
class ep_type_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ep_type_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep0r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep0r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep0r_r>() const {return ClearSet<ep0r_r>(Mask, *this);}
	constexpr auto operator|(ep0r_r other) const -> ep0r_r { return static_cast<ep0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep0r_r> other) const -> ClearSet<ep0r_r> {return ClearSet<ep0r_r>(ep0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SETUP
 */
class setup_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr setup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep0r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep0r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep0r_r>() const {return ClearSet<ep0r_r>(Mask, *this);}
	constexpr auto operator|(ep0r_r other) const -> ep0r_r { return static_cast<ep0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep0r_r> other) const -> ClearSet<ep0r_r> {return ClearSet<ep0r_r>(ep0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * STAT_RX
 */
class stat_rx_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stat_rx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep0r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep0r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep0r_r>() const {return ClearSet<ep0r_r>(Mask, *this);}
	constexpr auto operator|(ep0r_r other) const -> ep0r_r { return static_cast<ep0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep0r_r> other) const -> ClearSet<ep0r_r> {return ClearSet<ep0r_r>(ep0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_RX
 */
class dtog_rx_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dtog_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep0r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep0r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep0r_r>() const {return ClearSet<ep0r_r>(Mask, *this);}
	constexpr auto operator|(ep0r_r other) const -> ep0r_r { return static_cast<ep0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep0r_r> other) const -> ClearSet<ep0r_r> {return ClearSet<ep0r_r>(ep0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_RX
 */
class ctr_rx_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctr_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep0r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep0r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep0r_r>() const {return ClearSet<ep0r_r>(Mask, *this);}
	constexpr auto operator|(ep0r_r other) const -> ep0r_r { return static_cast<ep0r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep0r_r> other) const -> ClearSet<ep0r_r> {return ClearSet<ep0r_r>(ep0r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ea() const -> ea_f {return ea_f(static_cast<uint8_t>(m_value >> ea_f::Offset));}
	[[nodiscard]] constexpr auto stat_tx() const -> stat_tx_f {return stat_tx_f(static_cast<uint8_t>(m_value >> stat_tx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_tx() const -> dtog_tx_f {return dtog_tx_f((m_value & dtog_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_tx() const -> ctr_tx_f {return ctr_tx_f((m_value & ctr_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_kind() const -> ep_kind_f {return ep_kind_f((m_value & ep_kind_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_type() const -> ep_type_f {return ep_type_f(static_cast<uint8_t>(m_value >> ep_type_f::Offset));}
	[[nodiscard]] constexpr auto setup() const -> setup_f {return setup_f((m_value & setup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stat_rx() const -> stat_rx_f {return stat_rx_f(static_cast<uint8_t>(m_value >> stat_rx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_rx() const -> dtog_rx_f {return dtog_rx_f((m_value & dtog_rx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_rx() const -> ctr_rx_f {return ctr_rx_f((m_value & ctr_rx_f::Mask) != 0);}

	constexpr ep0r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ep0r_r other) const -> ep0r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ep0r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 0;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB endpoint n register
 */
class ep1r_r {
public:

/**
 * EA
 */
class ea_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ea_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep1r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep1r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep1r_r>() const {return ClearSet<ep1r_r>(Mask, *this);}
	constexpr auto operator|(ep1r_r other) const -> ep1r_r { return static_cast<ep1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep1r_r> other) const -> ClearSet<ep1r_r> {return ClearSet<ep1r_r>(ep1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * STAT_TX
 */
class stat_tx_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr stat_tx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep1r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep1r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep1r_r>() const {return ClearSet<ep1r_r>(Mask, *this);}
	constexpr auto operator|(ep1r_r other) const -> ep1r_r { return static_cast<ep1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep1r_r> other) const -> ClearSet<ep1r_r> {return ClearSet<ep1r_r>(ep1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_TX
 */
class dtog_tx_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtog_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep1r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep1r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep1r_r>() const {return ClearSet<ep1r_r>(Mask, *this);}
	constexpr auto operator|(ep1r_r other) const -> ep1r_r { return static_cast<ep1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep1r_r> other) const -> ClearSet<ep1r_r> {return ClearSet<ep1r_r>(ep1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_TX
 */
class ctr_tx_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctr_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep1r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep1r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep1r_r>() const {return ClearSet<ep1r_r>(Mask, *this);}
	constexpr auto operator|(ep1r_r other) const -> ep1r_r { return static_cast<ep1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep1r_r> other) const -> ClearSet<ep1r_r> {return ClearSet<ep1r_r>(ep1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_KIND
 */
class ep_kind_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ep_kind_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep1r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep1r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep1r_r>() const {return ClearSet<ep1r_r>(Mask, *this);}
	constexpr auto operator|(ep1r_r other) const -> ep1r_r { return static_cast<ep1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep1r_r> other) const -> ClearSet<ep1r_r> {return ClearSet<ep1r_r>(ep1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_TYPE
 */
class ep_type_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ep_type_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep1r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep1r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep1r_r>() const {return ClearSet<ep1r_r>(Mask, *this);}
	constexpr auto operator|(ep1r_r other) const -> ep1r_r { return static_cast<ep1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep1r_r> other) const -> ClearSet<ep1r_r> {return ClearSet<ep1r_r>(ep1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SETUP
 */
class setup_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr setup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep1r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep1r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep1r_r>() const {return ClearSet<ep1r_r>(Mask, *this);}
	constexpr auto operator|(ep1r_r other) const -> ep1r_r { return static_cast<ep1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep1r_r> other) const -> ClearSet<ep1r_r> {return ClearSet<ep1r_r>(ep1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * STAT_RX
 */
class stat_rx_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stat_rx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep1r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep1r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep1r_r>() const {return ClearSet<ep1r_r>(Mask, *this);}
	constexpr auto operator|(ep1r_r other) const -> ep1r_r { return static_cast<ep1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep1r_r> other) const -> ClearSet<ep1r_r> {return ClearSet<ep1r_r>(ep1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_RX
 */
class dtog_rx_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dtog_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep1r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep1r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep1r_r>() const {return ClearSet<ep1r_r>(Mask, *this);}
	constexpr auto operator|(ep1r_r other) const -> ep1r_r { return static_cast<ep1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep1r_r> other) const -> ClearSet<ep1r_r> {return ClearSet<ep1r_r>(ep1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_RX
 */
class ctr_rx_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctr_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep1r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep1r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep1r_r>() const {return ClearSet<ep1r_r>(Mask, *this);}
	constexpr auto operator|(ep1r_r other) const -> ep1r_r { return static_cast<ep1r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep1r_r> other) const -> ClearSet<ep1r_r> {return ClearSet<ep1r_r>(ep1r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ea() const -> ea_f {return ea_f(static_cast<uint8_t>(m_value >> ea_f::Offset));}
	[[nodiscard]] constexpr auto stat_tx() const -> stat_tx_f {return stat_tx_f(static_cast<uint8_t>(m_value >> stat_tx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_tx() const -> dtog_tx_f {return dtog_tx_f((m_value & dtog_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_tx() const -> ctr_tx_f {return ctr_tx_f((m_value & ctr_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_kind() const -> ep_kind_f {return ep_kind_f((m_value & ep_kind_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_type() const -> ep_type_f {return ep_type_f(static_cast<uint8_t>(m_value >> ep_type_f::Offset));}
	[[nodiscard]] constexpr auto setup() const -> setup_f {return setup_f((m_value & setup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stat_rx() const -> stat_rx_f {return stat_rx_f(static_cast<uint8_t>(m_value >> stat_rx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_rx() const -> dtog_rx_f {return dtog_rx_f((m_value & dtog_rx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_rx() const -> ctr_rx_f {return ctr_rx_f((m_value & ctr_rx_f::Mask) != 0);}

	constexpr ep1r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ep1r_r other) const -> ep1r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ep1r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 4;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB endpoint n register
 */
class ep2r_r {
public:

/**
 * EA
 */
class ea_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ea_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep2r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep2r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep2r_r>() const {return ClearSet<ep2r_r>(Mask, *this);}
	constexpr auto operator|(ep2r_r other) const -> ep2r_r { return static_cast<ep2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep2r_r> other) const -> ClearSet<ep2r_r> {return ClearSet<ep2r_r>(ep2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * STAT_TX
 */
class stat_tx_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr stat_tx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep2r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep2r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep2r_r>() const {return ClearSet<ep2r_r>(Mask, *this);}
	constexpr auto operator|(ep2r_r other) const -> ep2r_r { return static_cast<ep2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep2r_r> other) const -> ClearSet<ep2r_r> {return ClearSet<ep2r_r>(ep2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_TX
 */
class dtog_tx_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtog_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep2r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep2r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep2r_r>() const {return ClearSet<ep2r_r>(Mask, *this);}
	constexpr auto operator|(ep2r_r other) const -> ep2r_r { return static_cast<ep2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep2r_r> other) const -> ClearSet<ep2r_r> {return ClearSet<ep2r_r>(ep2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_TX
 */
class ctr_tx_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctr_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep2r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep2r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep2r_r>() const {return ClearSet<ep2r_r>(Mask, *this);}
	constexpr auto operator|(ep2r_r other) const -> ep2r_r { return static_cast<ep2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep2r_r> other) const -> ClearSet<ep2r_r> {return ClearSet<ep2r_r>(ep2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_KIND
 */
class ep_kind_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ep_kind_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep2r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep2r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep2r_r>() const {return ClearSet<ep2r_r>(Mask, *this);}
	constexpr auto operator|(ep2r_r other) const -> ep2r_r { return static_cast<ep2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep2r_r> other) const -> ClearSet<ep2r_r> {return ClearSet<ep2r_r>(ep2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_TYPE
 */
class ep_type_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ep_type_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep2r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep2r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep2r_r>() const {return ClearSet<ep2r_r>(Mask, *this);}
	constexpr auto operator|(ep2r_r other) const -> ep2r_r { return static_cast<ep2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep2r_r> other) const -> ClearSet<ep2r_r> {return ClearSet<ep2r_r>(ep2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SETUP
 */
class setup_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr setup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep2r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep2r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep2r_r>() const {return ClearSet<ep2r_r>(Mask, *this);}
	constexpr auto operator|(ep2r_r other) const -> ep2r_r { return static_cast<ep2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep2r_r> other) const -> ClearSet<ep2r_r> {return ClearSet<ep2r_r>(ep2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * STAT_RX
 */
class stat_rx_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stat_rx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep2r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep2r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep2r_r>() const {return ClearSet<ep2r_r>(Mask, *this);}
	constexpr auto operator|(ep2r_r other) const -> ep2r_r { return static_cast<ep2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep2r_r> other) const -> ClearSet<ep2r_r> {return ClearSet<ep2r_r>(ep2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_RX
 */
class dtog_rx_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dtog_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep2r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep2r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep2r_r>() const {return ClearSet<ep2r_r>(Mask, *this);}
	constexpr auto operator|(ep2r_r other) const -> ep2r_r { return static_cast<ep2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep2r_r> other) const -> ClearSet<ep2r_r> {return ClearSet<ep2r_r>(ep2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_RX
 */
class ctr_rx_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctr_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep2r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep2r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep2r_r>() const {return ClearSet<ep2r_r>(Mask, *this);}
	constexpr auto operator|(ep2r_r other) const -> ep2r_r { return static_cast<ep2r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep2r_r> other) const -> ClearSet<ep2r_r> {return ClearSet<ep2r_r>(ep2r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ea() const -> ea_f {return ea_f(static_cast<uint8_t>(m_value >> ea_f::Offset));}
	[[nodiscard]] constexpr auto stat_tx() const -> stat_tx_f {return stat_tx_f(static_cast<uint8_t>(m_value >> stat_tx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_tx() const -> dtog_tx_f {return dtog_tx_f((m_value & dtog_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_tx() const -> ctr_tx_f {return ctr_tx_f((m_value & ctr_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_kind() const -> ep_kind_f {return ep_kind_f((m_value & ep_kind_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_type() const -> ep_type_f {return ep_type_f(static_cast<uint8_t>(m_value >> ep_type_f::Offset));}
	[[nodiscard]] constexpr auto setup() const -> setup_f {return setup_f((m_value & setup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stat_rx() const -> stat_rx_f {return stat_rx_f(static_cast<uint8_t>(m_value >> stat_rx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_rx() const -> dtog_rx_f {return dtog_rx_f((m_value & dtog_rx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_rx() const -> ctr_rx_f {return ctr_rx_f((m_value & ctr_rx_f::Mask) != 0);}

	constexpr ep2r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ep2r_r other) const -> ep2r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ep2r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 8;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB endpoint n register
 */
class ep3r_r {
public:

/**
 * EA
 */
class ea_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ea_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep3r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep3r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep3r_r>() const {return ClearSet<ep3r_r>(Mask, *this);}
	constexpr auto operator|(ep3r_r other) const -> ep3r_r { return static_cast<ep3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep3r_r> other) const -> ClearSet<ep3r_r> {return ClearSet<ep3r_r>(ep3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * STAT_TX
 */
class stat_tx_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr stat_tx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep3r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep3r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep3r_r>() const {return ClearSet<ep3r_r>(Mask, *this);}
	constexpr auto operator|(ep3r_r other) const -> ep3r_r { return static_cast<ep3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep3r_r> other) const -> ClearSet<ep3r_r> {return ClearSet<ep3r_r>(ep3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_TX
 */
class dtog_tx_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtog_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep3r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep3r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep3r_r>() const {return ClearSet<ep3r_r>(Mask, *this);}
	constexpr auto operator|(ep3r_r other) const -> ep3r_r { return static_cast<ep3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep3r_r> other) const -> ClearSet<ep3r_r> {return ClearSet<ep3r_r>(ep3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_TX
 */
class ctr_tx_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctr_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep3r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep3r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep3r_r>() const {return ClearSet<ep3r_r>(Mask, *this);}
	constexpr auto operator|(ep3r_r other) const -> ep3r_r { return static_cast<ep3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep3r_r> other) const -> ClearSet<ep3r_r> {return ClearSet<ep3r_r>(ep3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_KIND
 */
class ep_kind_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ep_kind_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep3r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep3r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep3r_r>() const {return ClearSet<ep3r_r>(Mask, *this);}
	constexpr auto operator|(ep3r_r other) const -> ep3r_r { return static_cast<ep3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep3r_r> other) const -> ClearSet<ep3r_r> {return ClearSet<ep3r_r>(ep3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_TYPE
 */
class ep_type_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ep_type_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep3r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep3r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep3r_r>() const {return ClearSet<ep3r_r>(Mask, *this);}
	constexpr auto operator|(ep3r_r other) const -> ep3r_r { return static_cast<ep3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep3r_r> other) const -> ClearSet<ep3r_r> {return ClearSet<ep3r_r>(ep3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SETUP
 */
class setup_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr setup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep3r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep3r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep3r_r>() const {return ClearSet<ep3r_r>(Mask, *this);}
	constexpr auto operator|(ep3r_r other) const -> ep3r_r { return static_cast<ep3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep3r_r> other) const -> ClearSet<ep3r_r> {return ClearSet<ep3r_r>(ep3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * STAT_RX
 */
class stat_rx_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stat_rx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep3r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep3r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep3r_r>() const {return ClearSet<ep3r_r>(Mask, *this);}
	constexpr auto operator|(ep3r_r other) const -> ep3r_r { return static_cast<ep3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep3r_r> other) const -> ClearSet<ep3r_r> {return ClearSet<ep3r_r>(ep3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_RX
 */
class dtog_rx_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dtog_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep3r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep3r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep3r_r>() const {return ClearSet<ep3r_r>(Mask, *this);}
	constexpr auto operator|(ep3r_r other) const -> ep3r_r { return static_cast<ep3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep3r_r> other) const -> ClearSet<ep3r_r> {return ClearSet<ep3r_r>(ep3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_RX
 */
class ctr_rx_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctr_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep3r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep3r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep3r_r>() const {return ClearSet<ep3r_r>(Mask, *this);}
	constexpr auto operator|(ep3r_r other) const -> ep3r_r { return static_cast<ep3r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep3r_r> other) const -> ClearSet<ep3r_r> {return ClearSet<ep3r_r>(ep3r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ea() const -> ea_f {return ea_f(static_cast<uint8_t>(m_value >> ea_f::Offset));}
	[[nodiscard]] constexpr auto stat_tx() const -> stat_tx_f {return stat_tx_f(static_cast<uint8_t>(m_value >> stat_tx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_tx() const -> dtog_tx_f {return dtog_tx_f((m_value & dtog_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_tx() const -> ctr_tx_f {return ctr_tx_f((m_value & ctr_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_kind() const -> ep_kind_f {return ep_kind_f((m_value & ep_kind_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_type() const -> ep_type_f {return ep_type_f(static_cast<uint8_t>(m_value >> ep_type_f::Offset));}
	[[nodiscard]] constexpr auto setup() const -> setup_f {return setup_f((m_value & setup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stat_rx() const -> stat_rx_f {return stat_rx_f(static_cast<uint8_t>(m_value >> stat_rx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_rx() const -> dtog_rx_f {return dtog_rx_f((m_value & dtog_rx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_rx() const -> ctr_rx_f {return ctr_rx_f((m_value & ctr_rx_f::Mask) != 0);}

	constexpr ep3r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ep3r_r other) const -> ep3r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ep3r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 12;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB endpoint n register
 */
class ep4r_r {
public:

/**
 * EA
 */
class ea_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ea_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep4r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep4r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep4r_r>() const {return ClearSet<ep4r_r>(Mask, *this);}
	constexpr auto operator|(ep4r_r other) const -> ep4r_r { return static_cast<ep4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep4r_r> other) const -> ClearSet<ep4r_r> {return ClearSet<ep4r_r>(ep4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * STAT_TX
 */
class stat_tx_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr stat_tx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep4r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep4r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep4r_r>() const {return ClearSet<ep4r_r>(Mask, *this);}
	constexpr auto operator|(ep4r_r other) const -> ep4r_r { return static_cast<ep4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep4r_r> other) const -> ClearSet<ep4r_r> {return ClearSet<ep4r_r>(ep4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_TX
 */
class dtog_tx_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtog_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep4r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep4r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep4r_r>() const {return ClearSet<ep4r_r>(Mask, *this);}
	constexpr auto operator|(ep4r_r other) const -> ep4r_r { return static_cast<ep4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep4r_r> other) const -> ClearSet<ep4r_r> {return ClearSet<ep4r_r>(ep4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_TX
 */
class ctr_tx_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctr_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep4r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep4r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep4r_r>() const {return ClearSet<ep4r_r>(Mask, *this);}
	constexpr auto operator|(ep4r_r other) const -> ep4r_r { return static_cast<ep4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep4r_r> other) const -> ClearSet<ep4r_r> {return ClearSet<ep4r_r>(ep4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_KIND
 */
class ep_kind_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ep_kind_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep4r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep4r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep4r_r>() const {return ClearSet<ep4r_r>(Mask, *this);}
	constexpr auto operator|(ep4r_r other) const -> ep4r_r { return static_cast<ep4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep4r_r> other) const -> ClearSet<ep4r_r> {return ClearSet<ep4r_r>(ep4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_TYPE
 */
class ep_type_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ep_type_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep4r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep4r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep4r_r>() const {return ClearSet<ep4r_r>(Mask, *this);}
	constexpr auto operator|(ep4r_r other) const -> ep4r_r { return static_cast<ep4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep4r_r> other) const -> ClearSet<ep4r_r> {return ClearSet<ep4r_r>(ep4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SETUP
 */
class setup_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr setup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep4r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep4r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep4r_r>() const {return ClearSet<ep4r_r>(Mask, *this);}
	constexpr auto operator|(ep4r_r other) const -> ep4r_r { return static_cast<ep4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep4r_r> other) const -> ClearSet<ep4r_r> {return ClearSet<ep4r_r>(ep4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * STAT_RX
 */
class stat_rx_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stat_rx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep4r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep4r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep4r_r>() const {return ClearSet<ep4r_r>(Mask, *this);}
	constexpr auto operator|(ep4r_r other) const -> ep4r_r { return static_cast<ep4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep4r_r> other) const -> ClearSet<ep4r_r> {return ClearSet<ep4r_r>(ep4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_RX
 */
class dtog_rx_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dtog_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep4r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep4r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep4r_r>() const {return ClearSet<ep4r_r>(Mask, *this);}
	constexpr auto operator|(ep4r_r other) const -> ep4r_r { return static_cast<ep4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep4r_r> other) const -> ClearSet<ep4r_r> {return ClearSet<ep4r_r>(ep4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_RX
 */
class ctr_rx_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctr_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep4r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep4r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep4r_r>() const {return ClearSet<ep4r_r>(Mask, *this);}
	constexpr auto operator|(ep4r_r other) const -> ep4r_r { return static_cast<ep4r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep4r_r> other) const -> ClearSet<ep4r_r> {return ClearSet<ep4r_r>(ep4r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ea() const -> ea_f {return ea_f(static_cast<uint8_t>(m_value >> ea_f::Offset));}
	[[nodiscard]] constexpr auto stat_tx() const -> stat_tx_f {return stat_tx_f(static_cast<uint8_t>(m_value >> stat_tx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_tx() const -> dtog_tx_f {return dtog_tx_f((m_value & dtog_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_tx() const -> ctr_tx_f {return ctr_tx_f((m_value & ctr_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_kind() const -> ep_kind_f {return ep_kind_f((m_value & ep_kind_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_type() const -> ep_type_f {return ep_type_f(static_cast<uint8_t>(m_value >> ep_type_f::Offset));}
	[[nodiscard]] constexpr auto setup() const -> setup_f {return setup_f((m_value & setup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stat_rx() const -> stat_rx_f {return stat_rx_f(static_cast<uint8_t>(m_value >> stat_rx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_rx() const -> dtog_rx_f {return dtog_rx_f((m_value & dtog_rx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_rx() const -> ctr_rx_f {return ctr_rx_f((m_value & ctr_rx_f::Mask) != 0);}

	constexpr ep4r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ep4r_r other) const -> ep4r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ep4r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 16;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB endpoint n register
 */
class ep5r_r {
public:

/**
 * EA
 */
class ea_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ea_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep5r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep5r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep5r_r>() const {return ClearSet<ep5r_r>(Mask, *this);}
	constexpr auto operator|(ep5r_r other) const -> ep5r_r { return static_cast<ep5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep5r_r> other) const -> ClearSet<ep5r_r> {return ClearSet<ep5r_r>(ep5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * STAT_TX
 */
class stat_tx_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr stat_tx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep5r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep5r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep5r_r>() const {return ClearSet<ep5r_r>(Mask, *this);}
	constexpr auto operator|(ep5r_r other) const -> ep5r_r { return static_cast<ep5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep5r_r> other) const -> ClearSet<ep5r_r> {return ClearSet<ep5r_r>(ep5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_TX
 */
class dtog_tx_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtog_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep5r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep5r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep5r_r>() const {return ClearSet<ep5r_r>(Mask, *this);}
	constexpr auto operator|(ep5r_r other) const -> ep5r_r { return static_cast<ep5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep5r_r> other) const -> ClearSet<ep5r_r> {return ClearSet<ep5r_r>(ep5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_TX
 */
class ctr_tx_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctr_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep5r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep5r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep5r_r>() const {return ClearSet<ep5r_r>(Mask, *this);}
	constexpr auto operator|(ep5r_r other) const -> ep5r_r { return static_cast<ep5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep5r_r> other) const -> ClearSet<ep5r_r> {return ClearSet<ep5r_r>(ep5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_KIND
 */
class ep_kind_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ep_kind_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep5r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep5r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep5r_r>() const {return ClearSet<ep5r_r>(Mask, *this);}
	constexpr auto operator|(ep5r_r other) const -> ep5r_r { return static_cast<ep5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep5r_r> other) const -> ClearSet<ep5r_r> {return ClearSet<ep5r_r>(ep5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_TYPE
 */
class ep_type_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ep_type_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep5r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep5r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep5r_r>() const {return ClearSet<ep5r_r>(Mask, *this);}
	constexpr auto operator|(ep5r_r other) const -> ep5r_r { return static_cast<ep5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep5r_r> other) const -> ClearSet<ep5r_r> {return ClearSet<ep5r_r>(ep5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SETUP
 */
class setup_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr setup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep5r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep5r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep5r_r>() const {return ClearSet<ep5r_r>(Mask, *this);}
	constexpr auto operator|(ep5r_r other) const -> ep5r_r { return static_cast<ep5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep5r_r> other) const -> ClearSet<ep5r_r> {return ClearSet<ep5r_r>(ep5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * STAT_RX
 */
class stat_rx_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stat_rx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep5r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep5r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep5r_r>() const {return ClearSet<ep5r_r>(Mask, *this);}
	constexpr auto operator|(ep5r_r other) const -> ep5r_r { return static_cast<ep5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep5r_r> other) const -> ClearSet<ep5r_r> {return ClearSet<ep5r_r>(ep5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_RX
 */
class dtog_rx_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dtog_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep5r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep5r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep5r_r>() const {return ClearSet<ep5r_r>(Mask, *this);}
	constexpr auto operator|(ep5r_r other) const -> ep5r_r { return static_cast<ep5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep5r_r> other) const -> ClearSet<ep5r_r> {return ClearSet<ep5r_r>(ep5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_RX
 */
class ctr_rx_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctr_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep5r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep5r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep5r_r>() const {return ClearSet<ep5r_r>(Mask, *this);}
	constexpr auto operator|(ep5r_r other) const -> ep5r_r { return static_cast<ep5r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep5r_r> other) const -> ClearSet<ep5r_r> {return ClearSet<ep5r_r>(ep5r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ea() const -> ea_f {return ea_f(static_cast<uint8_t>(m_value >> ea_f::Offset));}
	[[nodiscard]] constexpr auto stat_tx() const -> stat_tx_f {return stat_tx_f(static_cast<uint8_t>(m_value >> stat_tx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_tx() const -> dtog_tx_f {return dtog_tx_f((m_value & dtog_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_tx() const -> ctr_tx_f {return ctr_tx_f((m_value & ctr_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_kind() const -> ep_kind_f {return ep_kind_f((m_value & ep_kind_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_type() const -> ep_type_f {return ep_type_f(static_cast<uint8_t>(m_value >> ep_type_f::Offset));}
	[[nodiscard]] constexpr auto setup() const -> setup_f {return setup_f((m_value & setup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stat_rx() const -> stat_rx_f {return stat_rx_f(static_cast<uint8_t>(m_value >> stat_rx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_rx() const -> dtog_rx_f {return dtog_rx_f((m_value & dtog_rx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_rx() const -> ctr_rx_f {return ctr_rx_f((m_value & ctr_rx_f::Mask) != 0);}

	constexpr ep5r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ep5r_r other) const -> ep5r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ep5r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 20;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB endpoint n register
 */
class ep6r_r {
public:

/**
 * EA
 */
class ea_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ea_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep6r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep6r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep6r_r>() const {return ClearSet<ep6r_r>(Mask, *this);}
	constexpr auto operator|(ep6r_r other) const -> ep6r_r { return static_cast<ep6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep6r_r> other) const -> ClearSet<ep6r_r> {return ClearSet<ep6r_r>(ep6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * STAT_TX
 */
class stat_tx_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr stat_tx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep6r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep6r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep6r_r>() const {return ClearSet<ep6r_r>(Mask, *this);}
	constexpr auto operator|(ep6r_r other) const -> ep6r_r { return static_cast<ep6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep6r_r> other) const -> ClearSet<ep6r_r> {return ClearSet<ep6r_r>(ep6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_TX
 */
class dtog_tx_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtog_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep6r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep6r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep6r_r>() const {return ClearSet<ep6r_r>(Mask, *this);}
	constexpr auto operator|(ep6r_r other) const -> ep6r_r { return static_cast<ep6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep6r_r> other) const -> ClearSet<ep6r_r> {return ClearSet<ep6r_r>(ep6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_TX
 */
class ctr_tx_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctr_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep6r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep6r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep6r_r>() const {return ClearSet<ep6r_r>(Mask, *this);}
	constexpr auto operator|(ep6r_r other) const -> ep6r_r { return static_cast<ep6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep6r_r> other) const -> ClearSet<ep6r_r> {return ClearSet<ep6r_r>(ep6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_KIND
 */
class ep_kind_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ep_kind_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep6r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep6r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep6r_r>() const {return ClearSet<ep6r_r>(Mask, *this);}
	constexpr auto operator|(ep6r_r other) const -> ep6r_r { return static_cast<ep6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep6r_r> other) const -> ClearSet<ep6r_r> {return ClearSet<ep6r_r>(ep6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_TYPE
 */
class ep_type_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ep_type_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep6r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep6r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep6r_r>() const {return ClearSet<ep6r_r>(Mask, *this);}
	constexpr auto operator|(ep6r_r other) const -> ep6r_r { return static_cast<ep6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep6r_r> other) const -> ClearSet<ep6r_r> {return ClearSet<ep6r_r>(ep6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SETUP
 */
class setup_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr setup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep6r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep6r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep6r_r>() const {return ClearSet<ep6r_r>(Mask, *this);}
	constexpr auto operator|(ep6r_r other) const -> ep6r_r { return static_cast<ep6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep6r_r> other) const -> ClearSet<ep6r_r> {return ClearSet<ep6r_r>(ep6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * STAT_RX
 */
class stat_rx_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stat_rx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep6r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep6r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep6r_r>() const {return ClearSet<ep6r_r>(Mask, *this);}
	constexpr auto operator|(ep6r_r other) const -> ep6r_r { return static_cast<ep6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep6r_r> other) const -> ClearSet<ep6r_r> {return ClearSet<ep6r_r>(ep6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_RX
 */
class dtog_rx_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dtog_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep6r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep6r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep6r_r>() const {return ClearSet<ep6r_r>(Mask, *this);}
	constexpr auto operator|(ep6r_r other) const -> ep6r_r { return static_cast<ep6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep6r_r> other) const -> ClearSet<ep6r_r> {return ClearSet<ep6r_r>(ep6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_RX
 */
class ctr_rx_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctr_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep6r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep6r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep6r_r>() const {return ClearSet<ep6r_r>(Mask, *this);}
	constexpr auto operator|(ep6r_r other) const -> ep6r_r { return static_cast<ep6r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep6r_r> other) const -> ClearSet<ep6r_r> {return ClearSet<ep6r_r>(ep6r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ea() const -> ea_f {return ea_f(static_cast<uint8_t>(m_value >> ea_f::Offset));}
	[[nodiscard]] constexpr auto stat_tx() const -> stat_tx_f {return stat_tx_f(static_cast<uint8_t>(m_value >> stat_tx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_tx() const -> dtog_tx_f {return dtog_tx_f((m_value & dtog_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_tx() const -> ctr_tx_f {return ctr_tx_f((m_value & ctr_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_kind() const -> ep_kind_f {return ep_kind_f((m_value & ep_kind_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_type() const -> ep_type_f {return ep_type_f(static_cast<uint8_t>(m_value >> ep_type_f::Offset));}
	[[nodiscard]] constexpr auto setup() const -> setup_f {return setup_f((m_value & setup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stat_rx() const -> stat_rx_f {return stat_rx_f(static_cast<uint8_t>(m_value >> stat_rx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_rx() const -> dtog_rx_f {return dtog_rx_f((m_value & dtog_rx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_rx() const -> ctr_rx_f {return ctr_rx_f((m_value & ctr_rx_f::Mask) != 0);}

	constexpr ep6r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ep6r_r other) const -> ep6r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ep6r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 24;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB endpoint n register
 */
class ep7r_r {
public:

/**
 * EA
 */
class ea_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ea_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep7r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep7r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep7r_r>() const {return ClearSet<ep7r_r>(Mask, *this);}
	constexpr auto operator|(ep7r_r other) const -> ep7r_r { return static_cast<ep7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep7r_r> other) const -> ClearSet<ep7r_r> {return ClearSet<ep7r_r>(ep7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * STAT_TX
 */
class stat_tx_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr stat_tx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep7r_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(ep7r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep7r_r>() const {return ClearSet<ep7r_r>(Mask, *this);}
	constexpr auto operator|(ep7r_r other) const -> ep7r_r { return static_cast<ep7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep7r_r> other) const -> ClearSet<ep7r_r> {return ClearSet<ep7r_r>(ep7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_TX
 */
class dtog_tx_f {
public:
	static constexpr std::size_t Offset = 6;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dtog_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep7r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep7r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep7r_r>() const {return ClearSet<ep7r_r>(Mask, *this);}
	constexpr auto operator|(ep7r_r other) const -> ep7r_r { return static_cast<ep7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep7r_r> other) const -> ClearSet<ep7r_r> {return ClearSet<ep7r_r>(ep7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_TX
 */
class ctr_tx_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ctr_tx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep7r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep7r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep7r_r>() const {return ClearSet<ep7r_r>(Mask, *this);}
	constexpr auto operator|(ep7r_r other) const -> ep7r_r { return static_cast<ep7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep7r_r> other) const -> ClearSet<ep7r_r> {return ClearSet<ep7r_r>(ep7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_KIND
 */
class ep_kind_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ep_kind_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep7r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep7r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep7r_r>() const {return ClearSet<ep7r_r>(Mask, *this);}
	constexpr auto operator|(ep7r_r other) const -> ep7r_r { return static_cast<ep7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep7r_r> other) const -> ClearSet<ep7r_r> {return ClearSet<ep7r_r>(ep7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * EP_TYPE
 */
class ep_type_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr ep_type_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep7r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep7r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep7r_r>() const {return ClearSet<ep7r_r>(Mask, *this);}
	constexpr auto operator|(ep7r_r other) const -> ep7r_r { return static_cast<ep7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep7r_r> other) const -> ClearSet<ep7r_r> {return ClearSet<ep7r_r>(ep7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * SETUP
 */
class setup_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr setup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep7r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep7r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep7r_r>() const {return ClearSet<ep7r_r>(Mask, *this);}
	constexpr auto operator|(ep7r_r other) const -> ep7r_r { return static_cast<ep7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep7r_r> other) const -> ClearSet<ep7r_r> {return ClearSet<ep7r_r>(ep7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * STAT_RX
 */
class stat_rx_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr stat_rx_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator ep7r_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(ep7r_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep7r_r>() const {return ClearSet<ep7r_r>(Mask, *this);}
	constexpr auto operator|(ep7r_r other) const -> ep7r_r { return static_cast<ep7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep7r_r> other) const -> ClearSet<ep7r_r> {return ClearSet<ep7r_r>(ep7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DTOG_RX
 */
class dtog_rx_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr dtog_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep7r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep7r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep7r_r>() const {return ClearSet<ep7r_r>(Mask, *this);}
	constexpr auto operator|(ep7r_r other) const -> ep7r_r { return static_cast<ep7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep7r_r> other) const -> ClearSet<ep7r_r> {return ClearSet<ep7r_r>(ep7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR_RX
 */
class ctr_rx_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctr_rx_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator ep7r_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(ep7r_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<ep7r_r>() const {return ClearSet<ep7r_r>(Mask, *this);}
	constexpr auto operator|(ep7r_r other) const -> ep7r_r { return static_cast<ep7r_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<ep7r_r> other) const -> ClearSet<ep7r_r> {return ClearSet<ep7r_r>(ep7r_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ea() const -> ea_f {return ea_f(static_cast<uint8_t>(m_value >> ea_f::Offset));}
	[[nodiscard]] constexpr auto stat_tx() const -> stat_tx_f {return stat_tx_f(static_cast<uint8_t>(m_value >> stat_tx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_tx() const -> dtog_tx_f {return dtog_tx_f((m_value & dtog_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_tx() const -> ctr_tx_f {return ctr_tx_f((m_value & ctr_tx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_kind() const -> ep_kind_f {return ep_kind_f((m_value & ep_kind_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ep_type() const -> ep_type_f {return ep_type_f(static_cast<uint8_t>(m_value >> ep_type_f::Offset));}
	[[nodiscard]] constexpr auto setup() const -> setup_f {return setup_f((m_value & setup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto stat_rx() const -> stat_rx_f {return stat_rx_f(static_cast<uint8_t>(m_value >> stat_rx_f::Offset));}
	[[nodiscard]] constexpr auto dtog_rx() const -> dtog_rx_f {return dtog_rx_f((m_value & dtog_rx_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr_rx() const -> ctr_rx_f {return ctr_rx_f((m_value & ctr_rx_f::Mask) != 0);}

	constexpr ep7r_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(ep7r_r other) const -> ep7r_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> ep7r_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 28;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB control register
 */
class cntr_r {
public:

/**
 * FRES
 */
class fres_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fres_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PDWN
 */
class pdwn_f {
public:
	static constexpr std::size_t Offset = 1;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr pdwn_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * LP_MODE
 */
class lp_mode_f {
public:
	static constexpr std::size_t Offset = 2;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr lp_mode_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * FSUSP
 */
class fsusp_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr fsusp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RESUME
 */
class resume_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr resume_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * L1RESUME
 */
class l1resume_f {
public:
	static constexpr std::size_t Offset = 5;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr l1resume_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * L1REQM
 */
class l1reqm_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr l1reqm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ESOFM
 */
class esofm_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr esofm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SOFM
 */
class sofm_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sofm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RESETM
 */
class resetm_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr resetm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SUSPM
 */
class suspm_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr suspm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WKUPM
 */
class wkupm_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wkupm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ERRM
 */
class errm_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr errm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PMAOVRM
 */
class pmaovrm_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pmaovrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTRM
 */
class ctrm_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctrm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator cntr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(cntr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<cntr_r>() const {return ClearSet<cntr_r>(Mask, *this);}
	constexpr auto operator|(cntr_r other) const -> cntr_r { return static_cast<cntr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<cntr_r> other) const -> ClearSet<cntr_r> {return ClearSet<cntr_r>(cntr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto fres() const -> fres_f {return fres_f((m_value & fres_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pdwn() const -> pdwn_f {return pdwn_f((m_value & pdwn_f::Mask) != 0);}
	[[nodiscard]] constexpr auto lp_mode() const -> lp_mode_f {return lp_mode_f((m_value & lp_mode_f::Mask) != 0);}
	[[nodiscard]] constexpr auto fsusp() const -> fsusp_f {return fsusp_f((m_value & fsusp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto resume() const -> resume_f {return resume_f((m_value & resume_f::Mask) != 0);}
	[[nodiscard]] constexpr auto l1resume() const -> l1resume_f {return l1resume_f((m_value & l1resume_f::Mask) != 0);}
	[[nodiscard]] constexpr auto l1reqm() const -> l1reqm_f {return l1reqm_f((m_value & l1reqm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto esofm() const -> esofm_f {return esofm_f((m_value & esofm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sofm() const -> sofm_f {return sofm_f((m_value & sofm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto resetm() const -> resetm_f {return resetm_f((m_value & resetm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto suspm() const -> suspm_f {return suspm_f((m_value & suspm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wkupm() const -> wkupm_f {return wkupm_f((m_value & wkupm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto errm() const -> errm_f {return errm_f((m_value & errm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pmaovrm() const -> pmaovrm_f {return pmaovrm_f((m_value & pmaovrm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctrm() const -> ctrm_f {return ctrm_f((m_value & ctrm_f::Mask) != 0);}

	constexpr cntr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(cntr_r other) const -> cntr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> cntr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 64;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB interrupt status register
 */
class istr_r {
public:

/**
 * EP_ID
 */
class ep_id_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 4;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr ep_id_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator istr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(istr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * DIR
 */
class dir_f {
public:
	static constexpr std::size_t Offset = 4;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr dir_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator istr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(istr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * L1REQ
 */
class l1req_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr l1req_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator istr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(istr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ESOF
 */
class esof_f {
public:
	static constexpr std::size_t Offset = 8;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr esof_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator istr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(istr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SOF
 */
class sof_f {
public:
	static constexpr std::size_t Offset = 9;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr sof_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator istr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(istr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RESET
 */
class reset_f {
public:
	static constexpr std::size_t Offset = 10;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr reset_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator istr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(istr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * SUSP
 */
class susp_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr susp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator istr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(istr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * WKUP
 */
class wkup_f {
public:
	static constexpr std::size_t Offset = 12;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr wkup_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator istr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(istr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * ERR
 */
class err_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr err_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator istr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(istr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * PMAOVR
 */
class pmaovr_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr pmaovr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator istr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(istr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * CTR
 */
class ctr_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr ctr_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator istr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(istr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<istr_r>() const {return ClearSet<istr_r>(Mask, *this);}
	constexpr auto operator|(istr_r other) const -> istr_r { return static_cast<istr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<istr_r> other) const -> ClearSet<istr_r> {return ClearSet<istr_r>(istr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto ep_id() const -> ep_id_f {return ep_id_f(static_cast<uint8_t>(m_value >> ep_id_f::Offset));}
	[[nodiscard]] constexpr auto dir() const -> dir_f {return dir_f((m_value & dir_f::Mask) != 0);}
	[[nodiscard]] constexpr auto l1req() const -> l1req_f {return l1req_f((m_value & l1req_f::Mask) != 0);}
	[[nodiscard]] constexpr auto esof() const -> esof_f {return esof_f((m_value & esof_f::Mask) != 0);}
	[[nodiscard]] constexpr auto sof() const -> sof_f {return sof_f((m_value & sof_f::Mask) != 0);}
	[[nodiscard]] constexpr auto reset() const -> reset_f {return reset_f((m_value & reset_f::Mask) != 0);}
	[[nodiscard]] constexpr auto susp() const -> susp_f {return susp_f((m_value & susp_f::Mask) != 0);}
	[[nodiscard]] constexpr auto wkup() const -> wkup_f {return wkup_f((m_value & wkup_f::Mask) != 0);}
	[[nodiscard]] constexpr auto err() const -> err_f {return err_f((m_value & err_f::Mask) != 0);}
	[[nodiscard]] constexpr auto pmaovr() const -> pmaovr_f {return pmaovr_f((m_value & pmaovr_f::Mask) != 0);}
	[[nodiscard]] constexpr auto ctr() const -> ctr_f {return ctr_f((m_value & ctr_f::Mask) != 0);}

	constexpr istr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(istr_r other) const -> istr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> istr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 68;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB frame number register
 */
class fnr_r {
public:

/**
 * FN
 */
class fn_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 11;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b11111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr fn_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator fnr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(fnr_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fnr_r>() const {return ClearSet<fnr_r>(Mask, *this);}
	constexpr auto operator|(fnr_r other) const -> fnr_r { return static_cast<fnr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fnr_r> other) const -> ClearSet<fnr_r> {return ClearSet<fnr_r>(fnr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

/**
 * LSOF
 */
class lsof_f {
public:
	static constexpr std::size_t Offset = 11;
	static constexpr std::size_t Width = 2;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b11);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr lsof_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator fnr_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(fnr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fnr_r>() const {return ClearSet<fnr_r>(Mask, *this);}
	constexpr auto operator|(fnr_r other) const -> fnr_r { return static_cast<fnr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fnr_r> other) const -> ClearSet<fnr_r> {return ClearSet<fnr_r>(fnr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * LCK
 */
class lck_f {
public:
	static constexpr std::size_t Offset = 13;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr lck_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fnr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(fnr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fnr_r>() const {return ClearSet<fnr_r>(Mask, *this);}
	constexpr auto operator|(fnr_r other) const -> fnr_r { return static_cast<fnr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fnr_r> other) const -> ClearSet<fnr_r> {return ClearSet<fnr_r>(fnr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXDM
 */
class rxdm_f {
public:
	static constexpr std::size_t Offset = 14;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxdm_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fnr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(fnr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fnr_r>() const {return ClearSet<fnr_r>(Mask, *this);}
	constexpr auto operator|(fnr_r other) const -> fnr_r { return static_cast<fnr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fnr_r> other) const -> ClearSet<fnr_r> {return ClearSet<fnr_r>(fnr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

/**
 * RXDP
 */
class rxdp_f {
public:
	static constexpr std::size_t Offset = 15;
	static constexpr std::size_t Width = 1;
	static constexpr uint16_t Mask = static_cast<uint16_t>(1ULL << Offset);

	constexpr rxdp_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator fnr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(fnr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<fnr_r>() const {return ClearSet<fnr_r>(Mask, *this);}
	constexpr auto operator|(fnr_r other) const -> fnr_r { return static_cast<fnr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<fnr_r> other) const -> ClearSet<fnr_r> {return ClearSet<fnr_r>(fnr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto fn() const -> fn_f {return fn_f(static_cast<uint16_t>(m_value >> fn_f::Offset));}
	[[nodiscard]] constexpr auto lsof() const -> lsof_f {return lsof_f(static_cast<uint8_t>(m_value >> lsof_f::Offset));}
	[[nodiscard]] constexpr auto lck() const -> lck_f {return lck_f((m_value & lck_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxdm() const -> rxdm_f {return rxdm_f((m_value & rxdm_f::Mask) != 0);}
	[[nodiscard]] constexpr auto rxdp() const -> rxdp_f {return rxdp_f((m_value & rxdp_f::Mask) != 0);}

	constexpr fnr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(fnr_r other) const -> fnr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> fnr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 72;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * USB device address
 */
class daddr_r {
public:

/**
 * ADD
 */
class add_f {
public:
	static constexpr std::size_t Offset = 0;
	static constexpr std::size_t Width = 7;
	static constexpr uint8_t Range = static_cast<uint8_t>(0b1111111);
	static constexpr uint8_t Mask = static_cast<uint8_t>(static_cast<uint8_t>(Range) << Offset);

	constexpr add_f(uint8_t value) : m_value(value & Range) {}
	constexpr operator uint8_t() const {return m_value;}
	constexpr operator daddr_r() const {return static_cast<uint8_t>(static_cast<uint8_t>(m_value) << Offset);}
	static constexpr auto get(daddr_r value) -> uint8_t { return static_cast<uint8_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<daddr_r>() const {return ClearSet<daddr_r>(Mask, *this);}
	constexpr auto operator|(daddr_r other) const -> daddr_r { return static_cast<daddr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<daddr_r> other) const -> ClearSet<daddr_r> {return ClearSet<daddr_r>(daddr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint8_t m_value;
};

/**
 * EF
 */
class ef_f {
public:
	static constexpr std::size_t Offset = 7;
	static constexpr std::size_t Width = 1;
	static constexpr uint8_t Mask = static_cast<uint8_t>(1ULL << Offset);

	constexpr ef_f(bool value = true) : m_value(value) {}
	constexpr operator bool() const {return m_value;}
	constexpr operator daddr_r() const {return m_value ? Mask : 0;}
	static constexpr auto get(daddr_r value) -> bool { return static_cast<bool>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<daddr_r>() const {return ClearSet<daddr_r>(Mask, *this);}
	constexpr auto operator|(daddr_r other) const -> daddr_r { return static_cast<daddr_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<daddr_r> other) const -> ClearSet<daddr_r> {return ClearSet<daddr_r>(daddr_r(Mask) | other.clear(), *this | other.set()); }

private:
	 bool m_value;
};

	[[nodiscard]] constexpr auto add() const -> add_f {return add_f(static_cast<uint8_t>(m_value >> add_f::Offset));}
	[[nodiscard]] constexpr auto ef() const -> ef_f {return ef_f((m_value & ef_f::Mask) != 0);}

	constexpr daddr_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(daddr_r other) const -> daddr_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> daddr_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 76;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};
/**
 * Buffer table address
 */
class btable_r {
public:

/**
 * BTABLE
 */
class btable_f {
public:
	static constexpr std::size_t Offset = 3;
	static constexpr std::size_t Width = 13;
	static constexpr uint16_t Range = static_cast<uint16_t>(0b1111111111111);
	static constexpr uint16_t Mask = static_cast<uint16_t>(static_cast<uint16_t>(Range) << Offset);

	constexpr btable_f(uint16_t value) : m_value(value & Range) {}
	constexpr operator uint16_t() const {return m_value;}
	constexpr operator btable_r() const {return static_cast<uint16_t>(static_cast<uint16_t>(m_value) << Offset);}
	static constexpr auto get(btable_r value) -> uint16_t { return static_cast<uint16_t>((value.value() >> Offset) & Mask); }
	constexpr operator ClearSet<btable_r>() const {return ClearSet<btable_r>(Mask, *this);}
	constexpr auto operator|(btable_r other) const -> btable_r { return static_cast<btable_r>(*this) | other.m_value;}
	constexpr auto operator||(ClearSet<btable_r> other) const -> ClearSet<btable_r> {return ClearSet<btable_r>(btable_r(Mask) | other.clear(), *this | other.set()); }

private:
	 uint16_t m_value;
};

	[[nodiscard]] constexpr auto btable() const -> btable_f {return btable_f(static_cast<uint16_t>(m_value >> btable_f::Offset));}

	constexpr btable_r(uint32_t value) : m_value(value) {}
	constexpr auto operator |(btable_r other) const -> btable_r { return m_value | other.m_value; }
	constexpr auto operator ~() const -> btable_r { return ~m_value; }
	[[nodiscard]] constexpr auto value() const -> uint32_t { return m_value; }

	static constexpr std::size_t Offset = 80;
	static constexpr uint32_t ResetValue = 0; // 0 0x0

private:
	uint32_t m_value;
};

	Memory<uint32_t,ep0r_r> ep0r;
	Memory<uint32_t,ep1r_r> ep1r;
	Memory<uint32_t,ep2r_r> ep2r;
	Memory<uint32_t,ep3r_r> ep3r;
	Memory<uint32_t,ep4r_r> ep4r;
	Memory<uint32_t,ep5r_r> ep5r;
	Memory<uint32_t,ep6r_r> ep6r;
	Memory<uint32_t,ep7r_r> ep7r;
	Padding<32> _p32;
	Memory<uint32_t,cntr_r> cntr;
	Memory<uint32_t,istr_r> istr;
	ReadOnlyMemory<uint32_t,fnr_r> fnr;
	Memory<uint32_t,daddr_r> daddr;
	Memory<uint32_t,btable_r> btable;
};

static_assert(std::is_standard_layout_v<usb_p>);
static_assert(offsetof(usb_p, ep0r) == usb_p::ep0r_r::Offset);
static_assert(offsetof(usb_p, ep1r) == usb_p::ep1r_r::Offset);
static_assert(offsetof(usb_p, ep2r) == usb_p::ep2r_r::Offset);
static_assert(offsetof(usb_p, ep3r) == usb_p::ep3r_r::Offset);
static_assert(offsetof(usb_p, ep4r) == usb_p::ep4r_r::Offset);
static_assert(offsetof(usb_p, ep5r) == usb_p::ep5r_r::Offset);
static_assert(offsetof(usb_p, ep6r) == usb_p::ep6r_r::Offset);
static_assert(offsetof(usb_p, ep7r) == usb_p::ep7r_r::Offset);
static_assert(offsetof(usb_p, cntr) == usb_p::cntr_r::Offset);
static_assert(offsetof(usb_p, istr) == usb_p::istr_r::Offset);
static_assert(offsetof(usb_p, fnr) == usb_p::fnr_r::Offset);
static_assert(offsetof(usb_p, daddr) == usb_p::daddr_r::Offset);
static_assert(offsetof(usb_p, btable) == usb_p::btable_r::Offset);

inline usb_p& usb_fs_device = *reinterpret_cast<usb_p*>(0x40005C00);

} // STM32G473XX

