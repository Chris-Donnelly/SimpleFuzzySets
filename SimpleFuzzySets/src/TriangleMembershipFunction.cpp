#include "TriangleMembershipFunction.h"

// Triangular membership function (ignores d) for x
float TriangleMembershipFunction::Membership(float x) {

	// 'Outside' cases (0 membership)
	if (x <= a || x >= c) {

		return 0.0f;

	}

	// 'Inside' cases (>0 membership)
	return (x >= a && x <= b) ? ((x - a) / (b - a)) : ((c - x) / (c - b));

}
