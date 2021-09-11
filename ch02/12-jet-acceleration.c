/*

PROBLEM
	Write a program that calculates the acceleration (m/s²) of a jet fighter
	launched from an aircraft-carrier catapult, given the jet’s takeoff speed in km/h
	and the distance (meters) over which the catapult accelerates the jet from rest to takeoff.

INPUT
	> takeoff speed (km/h)
	> distance (m)

OUTPUT
	> acceleration (m/s²)
	> time for the jet to be accelerated to takeoff speed (s)

RELEVANT FORMULA
v = a × t
s = (1/2) × a × t²

a can be replaced with v / t, so the second formula will look like this
s = (1/2) × v / t × t² (eliminate one t)
s = (1/2) × v × t
2 × s / v = t
now we can find time

to find acceleration, we can use the 1st formula, it'll become as follow
a = v / t

IMPLEMENTATION
1. prompt user to enter speed (km/h) and distance (m)
2. convert speed from (km/h) to (m/s)
3. use the second formula to find time based on the distance and speed
4. use the first formula to find acceleration
5. print both result to the stdout

*/

#include <stdio.h>

int main() {
	double speed_kmph, speed_mps, distance, acceleration, time;

	// 1. prompt user to enter speed (km/h) and distance (m)
	printf("input speed (km/h) => ");
	scanf("%lf", &speed_kmph);

	printf("input distance (m) => ");
	scanf("%lf", &distance);

	// 2. convert speed from (km/h) to (m/s)
	speed_mps = speed_kmph * 1000 / 3600;

	// 3. use the second formula to find time based on the distance and speed
	time = 2 * distance / speed_mps;

	// 4. use the first formula to find acceleration
	acceleration = speed_mps / time;

	// 5. print both result to the stdout
	printf("jet fighter acceleration is: %.2lf m/s²\n", acceleration);
	printf("and the time it takes to accelerate to takeoff speed is: %.2lf second\n", time);

	return 0;
}
