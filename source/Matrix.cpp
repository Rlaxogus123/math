#include "Matrix.hpp"
#include <cmath>

using namespace math;

MATRIX::MATRIX()
{
	*_11 = 0; *_12 = 0; *_13 = 0; *_14 = 0;
	*_21 = 0; *_22 = 0; *_23 = 0; *_24 = 0;
	*_31 = 0; *_32 = 0; *_33 = 0; *_34 = 0;
	*_41 = 0; *_42 = 0; *_43 = 0; *_44 = 0;
}

MATRIX::MATRIX(float f11, float f12, float f13, float f14, float f21, float f22, float f23, float f24, float f31, float f32, float f33, float f34, float f41, float f42, float f43, float f44)
{
	*_11 = f11; *_12 = f12; *_13 = f13; *_14 = f14;
	*_21 = f21; *_22 = f22; *_23 = f23; *_24 = f24;
	*_31 = f31; *_32 = f32; *_33 = f33; *_34 = f34;
	*_41 = f41; *_42 = f42; *_43 = f43; *_44 = f44;
}

auto MATRIX::operator+(const MATRIX& matrix) const -> MATRIX
{
	return MATRIX(
		*_11 + *matrix._11, *_12 + *matrix._12, *_13 + *matrix._13, *_14 + *matrix._14,
		*_21 + *matrix._21, *_22 + *matrix._22, *_23 + *matrix._23, *_24 + *matrix._24,
		*_31 + *matrix._31, *_32 + *matrix._32, *_33 + *matrix._33, *_34 + *matrix._34,
		*_41 + *matrix._41, *_42 + *matrix._42, *_43 + *matrix._43, *_44 + *matrix._44);
}

auto MATRIX::operator-(const MATRIX& matrix) const -> MATRIX
{
	return MATRIX(
		*_11 - *matrix._11, *_12 - *matrix._12, *_13 - *matrix._13, *_14 - *matrix._14,
		*_21 - *matrix._21, *_22 - *matrix._22, *_23 - *matrix._23, *_24 - *matrix._24,
		*_31 - *matrix._31, *_32 - *matrix._32, *_33 - *matrix._33, *_34 - *matrix._34,
		*_41 - *matrix._41, *_42 - *matrix._42, *_43 - *matrix._43, *_44 - *matrix._44);
}

auto MATRIX::operator*(float scalar) const -> MATRIX
{
	return MATRIX(
		scalar * *_11, scalar * *_12, scalar * *_13, scalar * *_14,
		scalar * *_21, scalar * *_22, scalar * *_23, scalar * *_24,
		scalar * *_31, scalar * *_32, scalar * *_33, scalar * *_34,
		scalar * *_41, scalar * *_42, scalar * *_43, scalar * *_44);
}

auto MATRIX::operator*=(float scalar) -> MATRIX&
{
	*_11 *= scalar; *_12 *= scalar; *_13 *= scalar; *_14 *= scalar;
	*_21 *= scalar; *_22 *= scalar; *_23 *= scalar; *_24 *= scalar;
	*_31 *= scalar; *_32 *= scalar; *_33 *= scalar; *_34 *= scalar;
	*_41 *= scalar; *_42 *= scalar; *_43 *= scalar; *_44 *= scalar;
	return *this;
}

auto MATRIX::operator*(MATRIX& matrix) const -> MATRIX
{
	for (int row = 0; row < 4; row++) 
	{
		for (int col = 0; col < 4; col++) 
		{
			// WIP
		}
	}

	return MATRIX();
}

void MATRIX::Identity()
{
	*_11 = 1; *_12 = 0; *_13 = 0; *_14 = 0;
	*_21 = 0; *_22 = 1; *_23 = 0; *_24 = 0;
	*_31 = 0; *_32 = 0; *_33 = 1; *_34 = 0;
	*_41 = 0; *_42 = 0; *_43 = 0; *_44 = 1;
}

void MATRIX::Transpose()
{
	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			m[col][row] = m[row][col];
		}
	}
}

void MATRIX::Inverse()
{
	// WIP
}
