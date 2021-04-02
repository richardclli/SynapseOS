#pragma once

#include <math.h>
#include <array>

/**
 * Defines the type of a filter
 */
enum class FilterType
{
	LowPass, /// Filter high frequencies, allow low frequencies
	HighPass, /// Filter low frequencies, allow high frequencies
	Notch, /// Filter around a specified frequency
	BandPass, /// /// Filter averything expect a specified frequency
};

/**
 * A biquad filter class
 * @tparam ValueType The type of the values to filter
 * @tparam CoefficientType The type of the coefficients (usually float or double)
 */
template<typename ValueType = float, typename CoefficientType = float>
class Biquad
{
public:

	/**
	 * The Butterworth Q value
	 */
	static constexpr CoefficientType ButterWorthQ = static_cast<CoefficientType>(1.0 / std::sqrt(2.0));

	/**
	 * Constructs a @c Biquad with the speficied caracteristics
	 * @param samplingFrequency The sampling frequency
	 * @param cutFrequency The cut frequency of the filter
	 * @param type The type of the filter
	 * @param q The Q value ("quality factor") of the filter
	 * @param initialValue The initial value of the filter
	 */
	constexpr Biquad(
			const CoefficientType &samplingFrequency,
			const CoefficientType &cutFrequency,
			FilterType type,
			CoefficientType q = ButterWorthQ,
			const ValueType &initialValue = ValueType()) :
					m_b({
							make<b0>(samplingFrequency, cutFrequency, type, q),
							make<b1>(samplingFrequency, cutFrequency, type, q),
							make<b2>(samplingFrequency, cutFrequency, type, q)}),
					m_a({
							make<a1>(samplingFrequency, cutFrequency, type, q),
							make<a2>(samplingFrequency, cutFrequency, type, q)}),
					m_delay({
							init(initialValue),
							init(initialValue),
							init(initialValue)})
	{

	}

	/**
	 * Feeds a new value to the filter
	 * @param value The new value of the signal (should be called at sampling frequency)
	 */
	constexpr void feed(const ValueType &value)
	{
		auto w = value - m_delay[0] * m_a[0] - m_delay[1] * m_a[1];
		m_delay[2] = m_delay[1];
		m_delay[1] = m_delay[0];
		m_delay[0] = w;
	}

	/**
	 * Computes the current value of the filter
	 * @return The current value of the filter
	 */
	constexpr ValueType value() const
	{
		return m_delay[0] * m_b[0] + m_delay[1] * m_b[1] + m_delay[2] * m_b[2];
	}

	/**
	 * Resets the filter to a known value if possible
	 * @param value The expected new output value of the filter.
	 */
	constexpr void reset(const ValueType &value)
	{
		m_delay[0] = m_delay[1] = m_delay[2] = init(value);
	}

private:

	static constexpr CoefficientType zero = static_cast<CoefficientType>(0);
	static constexpr CoefficientType one = static_cast<CoefficientType>(1);

	std::array<CoefficientType, 3> m_b;
	std::array<CoefficientType, 2> m_a;
	std::array<ValueType, 3> m_delay;

	enum Coeff
	{
		b0, b1, b2, a1, a2
	};

	/**
	 * Calculates the specified coefficient for the filter
	 * @param sampling The sampling frequency
	 * @param cut The cut frequency
	 * @param type The filter type
	 * @param q The quality factor
	 * @return The value of the coefficient
	 */
	template<Coeff coeff>
	constexpr CoefficientType make(const CoefficientType &sampling, const CoefficientType &cut, FilterType type, CoefficientType q)
	{
		constexpr CoefficientType pi = static_cast<CoefficientType>(std::acos(-1.0));
		constexpr CoefficientType two = static_cast<CoefficientType>(2);

		auto k = std::tan(pi * cut / sampling);
		[[maybe_unused]] auto norm = one / (one + k / q + k * k);

		switch (coeff)
		{
		case Coeff::b0:
		{
			switch (type)
			{
			default:
			case FilterType::LowPass:
				return k * k * norm;
			case FilterType::HighPass:
				return norm;
			case FilterType::BandPass:
				return k / q * norm;
			case FilterType::Notch:
				return (one + k * k) * norm;
			}
		}
		case Coeff::b1:
		{
			switch (type)
			{
			default:
			case FilterType::LowPass:
				return two * m_b[0];
			case FilterType::HighPass:
				return -two * m_b[0];
			case FilterType::BandPass:
				return zero;
			case FilterType::Notch:
				return two * (k * k - one) * norm;
			}
		}
		case Coeff::b2:
		{
			switch (type)
			{
			default:
			case FilterType::LowPass:
			case FilterType::HighPass:
			case FilterType::Notch:
				return m_b[0];

			case FilterType::BandPass:
				return -m_b[0];
			}
		}
		case Coeff::a1:
		{
			switch (type)
			{
			default:
			case FilterType::LowPass:
			case FilterType::HighPass:
			case FilterType::BandPass:
				return two * (k * k - one) * norm;
			case FilterType::Notch:
				return m_b[1];
			}
		}
		case Coeff::a2:
			return (one - k / q + k * k) * norm;

		default:
			return zero;
		}
	}

	/**
	 * Computes the value to put in m_delay to get the specified filter output
	 * @param value The expected filter output
	 * @return The value to put in m_delay to get the expected filter output
	 */
	constexpr ValueType init(const ValueType& value)
	{
		auto denom = one + m_a[0] + m_a[1];
		return denom == zero ? value : value / denom;
	}
};
