#pragma once
#include "MembershipFunction.h"

/*
ABCD for General Bell:
----------------------
A = Bell width / 2
B = Entry/Exit slope control
C = Midpoint location of Bell where membership = 1.0
D = Ignored

*/

class BellMembershipFunction : 	public MembershipFunction {

	public:

		BellMembershipFunction(float newA, float newB, float newC, float newD) : MembershipFunction(newA, newB, newC, newD, MembershipFuncType::GENERALBELL) { };
		~BellMembershipFunction() = default;
		
		virtual float Membership(float x) override;

};

