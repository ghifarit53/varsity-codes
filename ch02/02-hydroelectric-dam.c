/*

PROBLEM
	Write a program to assist in the design of a hydroelectric dam.
	Prompt the user for the height of the dam and for the number of cubic meters
	of water that are projected to flow from the top
	to the bottom of the dam each second

INPUT
	> height of the dam (m)
	> meter cubic of water flow per second (m³/s)

OUTPUT
	> megawatts of power produced (W)

NOTES
	> 9.80 m/s² as gravitational constant
	> 90% as efficiency constant

RELEVANT FORMULA
	> 1 MW = 10⁶ W
	> w = m . g . h

IMPLEMENTATION
1. prompt the user to enter the dam height and the volume
   of the water that flows per second
2. to find the work, multiply the dam height, gravity, and efficiency of
   the dam
3. convert work to megawatt by dividing it by 10⁶
4. print the amount of megawatts
*/

#include <stdio.h>

#define GRAVITY 9.80
#define EFFICIENCY 0.90

int main() {
	double dam_height, water_vol, work, work_megawatt;

	// 1. prompt the user to enter the dam height and the volume
  //    of the water that flows per second
	printf("Enter the dam height (m): ");
	scanf("%lf", &dam_height);

	printf("Enter the water volume that flows per second (m³/s): ");
	scanf("%lf", &water_vol);

	// 2. to find the work, multiply the dam height, gravity, and efficiency of
  //    the dam
	work = water_vol * dam_height * GRAVITY * EFFICIENCY;

	// 3. convert work to megawatt by dividing it by 10^6
	work_megawatt = work / 1000000;

	// 4. print the amount of megawatts
	printf("Megawatts produced: %.2lf MW\n", work_megawatt);

	return 0;
}
