#pragma once
namespace math 
{
	class MATRIX 
	{
	public:
		// 4x4 Matrix
		float m[4][4] = { 0, };

		float* _11 = m[0];
		float* _12 = m[0] + 1;
		float* _13 = m[0] + 2;
		float* _14 = m[0] + 3;

		float* _21 = m[1];
		float* _22 = m[1] + 1;
		float* _23 = m[1] + 2;
		float* _24 = m[1] + 3;

		float* _31 = m[2];
		float* _32 = m[2] + 1;
		float* _33 = m[2] + 2;
		float* _34 = m[2] + 3;

		float* _41 = m[3];
		float* _42 = m[3] + 1;
		float* _43 = m[3] + 2;
		float* _44 = m[3] + 3;

		MATRIX();
		MATRIX( float f11, float f12, float f13, float f14,
			    float f21, float f22, float f23, float f24, 
			    float f31, float f32, float f33, float f34, 
			    float f41, float f42, float f43, float f44 );
		MATRIX(const MATRIX& c);

		// Operator
		auto operator+(const MATRIX& matrix) const->MATRIX;
		auto operator-(const MATRIX& matrix) const->MATRIX;
		auto operator*(float scalar) const->MATRIX;
		auto operator*=(float scalar) ->MATRIX&;
		auto operator*(MATRIX& matrix) const->MATRIX; // WIP

		void Identity();
		void Transpose(); // WIP
		void Inverse(); // WIP
	};
}

