#include "Quaternion.hpp"
#include <cmath>

using namespace math;

Quaternion::Quaternion()
{
	x = 0;
	y = 0;
	z = 0;
	w = 0;
}

Quaternion::Quaternion(float _x, float _y, float _z, float _w)
{
	x = _x;
	y = _y;
	z = _z;
	w = _w;
}

auto Quaternion::operator+(const Quaternion& quaternion) const -> Quaternion
{
	return Quaternion(x + quaternion.x, y + quaternion.y, z + quaternion.z, w + quaternion.w);
}

auto Quaternion::operator-(const Quaternion& quaternion) const -> Quaternion
{
	return Quaternion(x - quaternion.x, y - quaternion.y, z - quaternion.z, w - quaternion.w);
}

auto Quaternion::operator*(float scalar) const -> Quaternion
{
	return Quaternion(scalar * x, scalar * y, scalar * z, scalar * w);
}

auto Quaternion::operator*=(float scalar) -> Quaternion&
{
	x *= scalar;
	y *= scalar;
	z *= scalar;
	w *= scalar;

	return *this;
}

auto Quaternion::operator*(const Quaternion& quaternion) const -> Quaternion
{
	// * This Operation is need to 'Vector3' HeaderFile and Necessary 'DotProduct' and 'CrossProduct'

	float s1 = w;
	float s2 = quaternion.w;
	// Vector3 v1 = Vector3(x, y, z);
	// Vector3 v2 = Vector3(quaternion.x, quaternion.y, quaternion.z);
	
	//float fs = s1 * s2 - v1.Dot(v2); // Final Scalar
	//Vector3 fv = (s1 * v2) + (s2 * v1) + v2.Cross(v1); // Final Vector

	//return Quaternion(fv.x, fv.y, fv.z, fs);
	return Quaternion();
}

auto Quaternion::Dot(const Quaternion& quaternion) const -> float
{
	//float s1 = w;
	//float s2 = quaternion.w;
	//Vector3 v1 = Vector3(x, y, z);
	//Vector3 v2 = Vector3(quaternion.x, quaternion.y, quaternion.z);
	//return s1 * s2 + v1.Dot(v2);

	return (x * quaternion.x + y * quaternion.y + z * quaternion.z * + w * quaternion.w);
}

auto Quaternion::LengthSqrt() const -> float
{
	return Dot(*this); // DotProduct -> q * q;
}

auto Quaternion::Length() const -> float
{
	return sqrt(LengthSqrt()); // sqrt{ x^2+y^2+z^2+w^2 } = Length
}
