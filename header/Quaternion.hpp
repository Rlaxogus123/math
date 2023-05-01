#pragma once
namespace math
{
	class Quaternion
	{
	public:
		float x;
		float y;
		float z;
		float w;
		/* 
		Vector3 v; 
		*/

		Quaternion();
		Quaternion(float _x, float _y, float _z, float _w);

		// Operator
		auto operator+(const Quaternion& quaternion) const->Quaternion;
		auto operator-(const Quaternion& quaternion) const->Quaternion;
		auto operator*(float scalar) const->Quaternion;
		auto operator*=(float scalar)->Quaternion&;
		auto operator*(const Quaternion& quaternion) const->Quaternion;

		[[nodiscard]] auto Dot(const Quaternion& quaternion) const -> float;
		[[nodiscard]] auto LengthSqrt() const -> float;
		[[nodiscard]] auto Length() const -> float;
	};
}

