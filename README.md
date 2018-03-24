# SimpleFuzzySets
## Basic Fuzzy Set function C++ classes (which can be extended) to get a very basic grasp on the concept

This was created for my MSc dissertation to measure and enumerate given angles of bones in the hand (measured by the Leap Motion API/Sensor) and calculate finger poses based on each bone (such as closed, curled, straight, etc), which where then used to calculate the overall pose of each hand, and then to calculate an interpretable two-handed gesture for painting in VR using a Kinect, Oculus Rift DK2 and Leap sensor.

*Please note this code was produced under constraints, and is therefore only partially complete and may require further architecturing etc, for improvements*

The fuzzy set functions (here: **triangle**, **trapezoid** and **bell**) are derived from a pure virtual base (**MembershipFunction**) to perform their own logic when queried with a float value.

Simply create the desired object using one of:

* TriangleMembershipFunction *(Simple triangle function)*
* TrapezoidMembershipFunction *(Simple trapezoid function)*
* BellMembershipFunction *(General Bell function)*

make sure you supply the parameters in the constructor listed as **A**, **B**, **C** and **D** (each implementation will describe how the A/B/C/D are used according to the membership function) and use the Membership(float) member function to return a membership value of [0..1]

*This is only very basic work, but can be quickly adapted; for instance, I used multiple Membership Function types in one vector, querying them iteratively to create a graph as needed and ascertain the highest membership value and act accordingly. *

