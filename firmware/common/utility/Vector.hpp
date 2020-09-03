#pragma once

#include <array>
#include <cstddef>
#include <utility>
#include <math.h>

template<std::size_t Size, typename ItemType = float>
class Vector
{
	static_assert(Size != 0, "Cannot make a zero sized vector");
	static_assert(Size != 1, "A one sized vector is a value");
	template<std::size_t S, typename I> friend class Vector; // Vector of all sizes are friend between them

public:

	/**
	 * Creates a vector from an initialization list
	 * @param value The first value in the list (there is at least two)
	 * @param values The remaining values in the list
	 */
	template<typename ... args>
	constexpr Vector(ItemType value, args&&... values) : m_values{{value, values...}}
	{
        static_assert(sizeof...(args) + 1 == Size, "Wrong number of values for vector initialization");
	}

	/**
	 * Creates a @c Vector from an array of values
	 * @param items The array containing the @c Vector values
	 */
	constexpr Vector(const std::array<ItemType, Size>& items) : m_values{items}
	{

	}

	/**
	 * Creates a @c Vector from another @c Vector
	 * @param vector The vector to copy
	 */
	constexpr Vector(const Vector& vector) : m_values{vector.m_values}
	{

	}

	/**
	 * Creates a @c Vector with a specified value at each rank
	 * @param value
	 */
	constexpr Vector(const ItemType& value) : m_values{construct([&](std::size_t) {return value;})}
	{

	}

	/**
	 * Creates a default @c Vector initialized with @c ItemType default value
	 */
	constexpr Vector() : Vector(ItemType())
	{

	}

	/**
	 * Copy assignment operator
	 * @param vector The vector to copy over this instance
	 * @return This instance reference
	 */
	constexpr Vector& operator=(const Vector& vector)
	{
		m_values = vector.m_values;
		return *this;
	}

	/**
	 * Constant bracket operator
	 * @param index The index of the value to get by const reference
	 * @return The n-th value of the @c Vector
	 */
	constexpr inline const ItemType& operator[](std::size_t index) const
	{
		return m_values[index];
	}

	/**
	 * Bracket operator
	 * @param index The index of the value to get by reference
	 * @return The n-th value of the @c Vector
	 */
	constexpr inline ItemType& operator[](std::size_t index)
	{
		return m_values[index];
	}

	/**
	 * Gets the size of the @c Vector
	 * @return The size of the @c Vector
	 */
	constexpr inline std::size_t size() const
	{
		return Size;
	}

	/**
	 * Gets the norm of the @c Vector (squared length)
	 * @return The norm of the @c Vector
	 */
	constexpr ItemType norm() const
	{
		// should use return std::transform_reduce here but not yet available in the library

		auto result = ItemType();

		for(auto i = 0U; i<Size; ++i)
			result += this->operator [](i) * this->operator [](i);

		return result;
	}

	/**
	 * Gets the length of the @c Vector (square root of the norm)
	 * @return The length of the @c Vector
	 */
	constexpr ItemType length() const
	{
		return std::sqrt(norm());
	}

	/**
	 * Normalizes the current @c Vector (divide all items by its length)
	 */
	constexpr void normalize()
	{
		*this /= length();
	}

	/**
	 * Gets the current @c Vector normalized as a copy
	 * @return The current @c Vector normalized
	 */
	constexpr Vector normalized() const
	{
		return *this / length();
	}

	/**
	 * Gets the item at rank @c Index by constant reference
	 * @tparam Index The index of the item to get
	 * @return A const reference to the n-th item
	 */
	template<std::size_t Index>
	constexpr const ItemType& at() const
	{
		static_assert(Index < Size, "Index out of bounds");
		return m_values[Index];
	}

	/**
	 * Gets the item at rank @c Index by reference
	 * @tparam Index The index of the item to get
	 * @return A reference to the n-th item
	 */
	template<std::size_t Index>
	constexpr ItemType& at()
	{
		static_assert(Index < Size, "Index out of bounds");
		return m_values[Index];
	}

	/**
	 * Gets the @c x (first) value in the @c Vector
	 * @return The @c x value
	 */
	template<std::size_t S = Size, typename = std::enable_if_t<S == 2 || S == 3 || S == 4>>
	constexpr const ItemType& x() const
	{
		return m_values[0];
	}

	/**
	 * Gets the @c x (first) value in the @c Vector
	 * @return The @c x value
	 */
	template<std::size_t S = Size, typename = std::enable_if_t<S == 2 || S == 3 || S == 4>>
	constexpr ItemType& x()
	{
		return m_values[0];
	}

	/**
	 * Gets the @c y (second) value in the @c Vector
	 * @return The @c y value
	 */
	template<std::size_t S = Size, typename = std::enable_if_t<S == 2 || S == 3 || S == 4>>
	constexpr const ItemType& y() const
	{
		return m_values[1];
	}

	/**
	 * Gets the @c y (second) value in the @c Vector
	 * @return The @c y value
	 */
	template<std::size_t S = Size, typename = std::enable_if_t<S == 2 || S == 3 || S == 4>>
	constexpr ItemType& y()
	{
		return m_values[1];
	}

	/**
	 * Gets the @c z (third) value in the @c Vector
	 * @return The @c z value
	 */
	template<std::size_t S = Size, typename = std::enable_if_t<S == 3 || S == 4>>
	constexpr const ItemType& z() const
	{
		return m_values[2];
	}

	/**
	 * Gets the @c z (third) value in the @c Vector
	 * @return The @c z value
	 */
	template<std::size_t S = Size, typename = std::enable_if_t<S == 3 || S == 4>>
	constexpr ItemType& z()
	{
		return m_values[2];
	}

	/**
	 * Gets the @c w (fourth) value in the @c Vector
	 * @return The @c w value
	 */
	template<std::size_t S = Size, typename = std::enable_if_t<S == 4>>
	constexpr const ItemType& w() const
	{
		return m_values[3];
	}

	/**
	 * Gets the @c w (fourth) value in the @c Vector
	 * @return The @c w value
	 */
	template<std::size_t S = Size, typename = std::enable_if_t<S == 4>>
	constexpr ItemType& w()
	{
		return m_values[3];
	}

	/**
	 * Appends a new value to the current @c Vector
	 * @param value The value to append to the current @c Vector
	 * @return A new @c Vector as a concatenation of the current @c Vector and the specified value
	 */
	constexpr Vector<Size + 1, ItemType> append(const ItemType &value) const
	{
		return append_impl(value, m_values, std::make_index_sequence<Size>());
	}

	/**
	 * Prepends a new value to the current @c Vector
	 * @param value The value to prepend to the current @c Vector
	 * @return A new @c Vector as a concatenation of the specified value and the current @c Vector
	 */
	constexpr Vector<Size + 1, ItemType> prepend(const ItemType &value) const
	{
		return prepend_impl(value, m_values, std::make_index_sequence<Size>());
	}

	/**
	 * Extracts a sub-vector from the current vector
	 * @tparam Length The length of the sub-vector
	 * @tparam Offset The offset of the start of the sub-vector
	 * @return The sub-vector starting at @c Offset and with length @c Length
	 */
	template<std::size_t Length, std::size_t Offset = 0>
	constexpr Vector<Length, ItemType> sub() const
	{
		static_assert(Length + Offset <= Size, "Sub vector out of range");
		return extract_impl<Length, Offset>(m_values, std::make_index_sequence<Length>());
	}

	/**
	 * Multiplies the current @c Vector by a factor
	 * @param factor The multiplying factor
	 * @return A reference to the current @c Vector
	 */
	constexpr Vector& operator*=(const ItemType &factor)
	{
		for(auto i = 0U; i<Size; ++i)
			m_values[i] *= factor;

		return *this;
	}

	/**
	 * Divides the current @c Vector by a factor
	 * @param factor The dividing factor
	 * @return A reference to the current @c Vector
	 */
	constexpr Vector& operator/=(const ItemType &factor)
	{
		for(auto i = 0U; i<Size; ++i)
			m_values[i] /= factor;

		return *this;
	}

	/**
	 * Adds another @c Vector to the current @c Vector
	 * @param right The @c Vector to add
	 * @return A reference to the current @c Vector
	 */
	constexpr Vector& operator+=(const Vector &right)
	{
		for(auto i = 0U; i< Size; ++i)
			m_values[i] += right[i];

		return *this;
	}

	/**
	 * Subtracts another @c Vector to the current @c Vector
	 * @param right The @c Vector to subtracts
	 * @return A reference to the current @c Vector
	 */
	constexpr Vector& operator-=(const Vector &right)
	{
		for(auto i = 0U; i< Size; ++i)
			m_values[i] -= right[i];

		return *this;
	}

	/**
	 * Constructs the opposite of the current @c Vector (all values negated)
	 * @return A copy of the current @c Vector with all values negated
	 */
	constexpr Vector operator-() const
	{
		return construct([](const ItemType& l, const ItemType& r) {return l*r;}, m_values, static_cast<ItemType>(-1));
	}

	/**
	 * Adds another @c Vector to the current one
	 * @param right The @c Vector to add to the current one
	 * @return The @c Vector containing the sum of the two vectors
	 */
	constexpr Vector operator+(const Vector& right) const
	{
		return construct([](const ItemType& l, const ItemType& r){return l+r;}, m_values, right.m_values);
	}

	/**
	 * Subtracts another @c Vector to the current one
	 * @param right The @c Vector to subtracts to the current one
	 * @return The @c Vector containing the subtraction of the two vectors
	 */
	constexpr Vector operator-(const Vector& right) const
	{
		return construct([](const ItemType& l, const ItemType& r){return l-r;}, m_values, right.m_values);
	}


	/**
	 * Multiplies the current @c Vector by a factor
	 * @param factor The multiplying factor
	 * @return The current @c Vector multiplied by the factor
	 */
	constexpr Vector operator*(const ItemType& factor) const
	{
		return construct([](const ItemType& l, const ItemType& r){return l*r;}, m_values, factor);
	}

	/**
	 * Divides the current @c Vector by a factor
	 * @param factor The dividing factor
	 * @return The current @c Vector divided by the factor
	 */
	constexpr Vector operator/(const ItemType& factor) const
	{
		return construct([](const ItemType& l, const ItemType& r){return l/r;}, m_values, factor);
	}

	/**
	 * Checks if two vectors are identical term by term
	 * @param right The @c Vector to compare to
	 * @return @c true if both vectors are identical, @c false otherwise
	 */
	constexpr bool operator==(const Vector &right) const
	{
		return m_values == right.m_values;
	}

private:

	std::array<ItemType, Size> m_values;

	template<typename F, std::size_t... Is>
	static constexpr std::array<ItemType, Size> construct_impl(F func, std::index_sequence<Is...>)
	{
		return {func(Is)...};
	}

	template<typename F, std::size_t... Is>
	static constexpr std::array<ItemType, Size> construct_impl(F func, const std::array<ItemType, Size>& values, const ItemType& param, std::index_sequence<Is...>)
	{
		return {func(values[Is], param)...};
	}

	template<typename F, std::size_t... Is>
	static constexpr std::array<ItemType, Size> construct_impl(F func, const std::array<ItemType, Size>& values, const std::array<ItemType, Size>& param, std::index_sequence<Is...>)
	{
		return {func(values[Is], param[Is])...};
	}

	template<std::size_t... Is>
	static constexpr std::array<ItemType, Size + 1> append_impl(const ItemType& value, const std::array<ItemType, Size>& values, std::index_sequence<Is...>)
	{
		return {values[Is]..., value};
	}

	template<std::size_t... Is>
	static constexpr std::array<ItemType, Size + 1> prepend_impl(const ItemType& value, const std::array<ItemType, Size>& values, std::index_sequence<Is...>)
	{
		return {value, values[Is]...};
	}

    template <std::size_t Length, std::size_t Offset, std::size_t... Is>
    static constexpr Vector<Length, ItemType> extract_impl(const std::array<ItemType, Size>& values, std::index_sequence<Is...>)
    {
        return { values[Is + Offset]... };
    }

	template<typename F>
	static constexpr std::array<ItemType, Size> construct(F func)
	{
		return construct_impl(func, std::make_index_sequence<Size>());
	}

	template<typename F>
	static constexpr std::array<ItemType, Size> construct(F func, const std::array<ItemType, Size>& values, const ItemType& value)
	{
		return construct_impl(func, values, value, std::make_index_sequence<Size>());
	}

	template<typename F>
	static constexpr std::array<ItemType, Size> construct(F func, const std::array<ItemType, Size>& values, const std::array<ItemType, Size>& param)
	{
		return construct_impl(func, values, param, std::make_index_sequence<Size>());
	}

};


template<std::size_t Size, typename ItemType>
constexpr auto operator*(const ItemType& factor, const Vector<Size, ItemType>& vector)
{
	return vector * factor;
}

/**
 * Creates the image of the @c Vector by the rotation of a specified angle
 * @param v The @c Vector to rotate
 * @param angle The angle of rotation
 * @return The image of v by the rotation of angle radian
 */
template<typename ItemType>
auto rotate(const Vector<2, ItemType>& v, ItemType angle) -> Vector<2, ItemType>
{
	auto sin = std::sin(angle);
	auto cos = std::cos(angle);

	return Vector<2>{v.x()*cos - v.y()*sin, v.y()*cos+v.x()*sin};
}

/**
 * Calculates the cross product of two vectors
 * @param left The first vector
 * @param right The second vector
 * @return The cross product of left and right
 */
template<typename ItemType>
auto crossProduct(const Vector<3, ItemType>& left, const Vector<3, ItemType>& right) -> Vector<3, ItemType>
{
	return Vector<3, ItemType>{
		left.y() * right.z() - left.z() * right.y(),
		left.z() * right.x() - left.x() * right.z(),
		left.x() * right.y() - left.y() * right.x()
	};
}

/**
 * Calculates the dot product of two vectors
 * @param left The first vector
 * @param right The second vector
 * @return The dot product of left and right
 */
template<std::size_t Size, typename ItemType>
auto dotProduct(const Vector<Size, ItemType>& left, const Vector<Size, ItemType>& right) -> ItemType
{
	ItemType result = ItemType();

	for (auto i = 0U; i < Size; ++i)
		result += left[i] * right[i];

	return result;
}

