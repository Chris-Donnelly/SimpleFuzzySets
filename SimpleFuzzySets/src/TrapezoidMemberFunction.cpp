#include "TrapezoidMemberFunction.h"

// Trapezoidal membership function for x
float TrapezoidMemberFunction::Membership(float x) {

	// 'Outside' cases
	if (x <= a || x >= d) {

		return 0.0f;

	}

	// 'Inside' Case 1 - full membership
	if (x >= b && x <= c) {

		return 1.0f;

	}

	// 'Inside case 2 - partial membership
	return (x >= a && x <= b)? ((x - a) / (b - a)) : ((d - x) / (d - c));

}
