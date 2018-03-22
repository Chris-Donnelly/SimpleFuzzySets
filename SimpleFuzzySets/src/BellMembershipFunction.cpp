#include "BellMembershipFunction.h"
#include <cmath>
#include <iostream>

// "General bell" Membership function for x (d is ignored)
float BellMembershipFunction::Membership(float x) {

	// 1 / ((x/a) ^ (2b)) + 1
	return 1.0f / fabs(powf(((x / a) - (c / a)), 2 * b) + 1);

}
