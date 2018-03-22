#pragma once

// Just in case you want to separate by types
enum class MembershipFuncType {

	TRIANGLE = 1001,
	TRAPEZOID = 1002,
	GENERALBELL = 1003

};

class MembershipFunction {

	protected:

		float a{ 0.0f };
		float b{ 0.0f };
		float c{ 0.0f };
		float d{ 0.0f };

		MembershipFuncType m_Type;

	public:
		
		MembershipFunction() = delete;
		MembershipFunction(float newA, float newB, float newC, float newD, MembershipFuncType type) : a(newA), b(newB), c(newC), d(newD), m_Type(type) {}
		~MembershipFunction() = default;

		virtual float Membership(float x) = 0;

		float GetA() { return a; }
		float GetB() { return b; }
		float GetC() { return c; }
		float GetD() { return d; }

		MembershipFuncType GetType() { return m_Type; }

};
