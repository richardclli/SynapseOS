#pragma once

#include <cstddef>
#include <array>
#include <utility>

/**
 * An FIR slope filter based on https://ieeexplore.ieee.org/document/4644063
 * @tparam Depth The depth of the filter (number of previous values to calculate on)
 * @tparam ValueType The type of the values, by default @c float
 * @tparam CoefficientType The type of the coefficient, by default the same as @c ValueType
 * @warning Introduces a mean delay of Depth/2 samples
 */
template<std::size_t Depth, typename ValueType = float, typename CoefficientType = float>
class Slope
{
	static_assert(Depth >= 4, "For Depth below 4, this algorithm is less efficient than a normal differential");

public:

	/**
	 * Constructs a slope filter with the specified sampling frequency
	 * @param samplingFrequency The input sampling frequency
	 */
	explicit constexpr Slope(CoefficientType samplingFrequency) :
			m_samplingFrequency(samplingFrequency)
	{
	}

	/**
	 * Feeds a new value to the slope filter
	 * @param value The latest value to append to the filter
	 */
	constexpr void feed(const ValueType &value)
	{
		m_index++; // increment current index

		if (m_index == Depth) // if end of array reached
			m_index = 0; // reset to zero

		m_values[m_index] = value; // copy value into the array
	}

	/**
	 * Gets the current value of the filtered slope
	 * @return The current slope (in unit / s if @c samplingFrequency is in Hertz)
	 */
	constexpr ValueType value() const
	{
		ValueType accumulator = ValueType();
		for (auto i = 0U; i < Depth / 2; ++i)
			accumulator += kCoefficients[i] * (backward(i) - forward(i));
		return m_samplingFrequency * accumulator;
	}

private:

	static constexpr CoefficientType kTwelve = static_cast<CoefficientType>(12);
	static constexpr CoefficientType kSix = static_cast<CoefficientType>(6);
	static constexpr CoefficientType kDenominator = (Depth * (Depth * Depth - 1));
	static constexpr std::array<CoefficientType, Depth / 2> kCoefficients = Slope::coefs(std::make_index_sequence<Depth / 2>());

	std::array<ValueType, Depth> m_values;
	CoefficientType m_samplingFrequency;
	std::size_t m_index = 0;

	/**
	 * @brief Get a value in the array relative to the current index
	 * @param offset The offset from the current index
	 * @return The n-th value in the array (backward relative to current index)
	 */
	const ValueType& backward(std::size_t offset) const
	{
		return m_values[offset > m_index ? m_index + Depth - offset : m_index - offset];
	}

	/**
	 * @brief Get a value in the array relative to the current index
	 * @param offset The offset from the current index
	 * @return The n-th value in the array (forward relative to current index)
	 */
	const ValueType& forward(std::size_t offset) const
	{
		const auto tmp = m_index + offset + 1;
		return m_values[tmp < Depth ? tmp : tmp - Depth];
	}

	/**
	 * Calculate the i-th coefficient for the slope filter
	 * @param index The index of the coefficient
	 * @return The value of the i-th coefficient
	 */
	static constexpr CoefficientType coef(std::size_t index)
	{
		return (kSix * (Depth - 1) - kTwelve * static_cast<CoefficientType>(index)) / kDenominator;
	}

	/**
	 * Creates the list of coefficients for the slope filter
	 * @param An index sequence
	 * @return The array containing the slope filter coefficients
	 */
	template<std::size_t ... indices>
	static constexpr auto coefs(std::index_sequence<indices...>) -> std::array<CoefficientType, sizeof...(indices)>
	{
		return
		{
			{	coef(indices)...}};

	}

};

template<std::size_t Depth, typename ValueType, typename CoefficientType>
constexpr std::array<CoefficientType, Depth / 2> Slope<Depth, ValueType, CoefficientType>::kCoefficients;

