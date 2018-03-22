#pragma once
#include "MembershipFunction.h"

/*
ABCD for Trapezoid:
-------------------
A = Begin entry 'ramp' point
B = Begin main body, where membership = 1.0
C = End main body, where membership = 1.0
D = End point of Trapezoid

*/

class TrapezoidMemberFunction : public MembershipFunction {

	public:

		TrapezoidMemberFunction(float newA, float newB, float newC, float newD) : MembershipFunction(newA, newB, newC, newD, MembershipFuncType::TRAPEZOID) { };
		~TrapezoidMemberFunction() = default;

		virtual float Membership(float x) override;

};

