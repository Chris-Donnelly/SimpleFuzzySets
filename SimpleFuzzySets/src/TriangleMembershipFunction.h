#pragma once

/*
	ABCD for Triangle:
	------------------
	A = Start point for triangle
	B = Middle point for triangle (where membership = 1.0)
	C = End point of triangle
	D = Ignored

*/

#include "MembershipFunction.h"
class TriangleMembershipFunction :	public MembershipFunction {

	public:

		TriangleMembershipFunction(float newA, float newB, float newC, float newD) : MembershipFunction(newA, newB, newC, newD, MembershipFuncType::TRIANGLE) { };
		~TriangleMembershipFunction() = default;

		virtual float Membership(float x) override;

};

