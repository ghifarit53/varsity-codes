/*

PROBLEM
	Write a program that takes the length and width of a rectangular yard
	and the length and width of a rectangular house situated in the yard.
	Your program should compute the time required to cut the grass
	at the rate of two square feet a second.

INPUT
	> l and w of rectangular yard (in feet)
	> l and w of rectangular house situated in the yard (in feet), so
		l house and w house <= l yard and w yard respectively
OUTPUT
	> the time needed to cut the grass

IMPLEMENTATION
1. get all the required values from input, and assign them
	 to their respective variables
2. calculate the area of the yard and house
3. check whether house area is larger than yard, if yes, then exit with code 1
4. to find the grass area, substract the area of the yard by the area of the house
5. to find the time, divide the grass area by the rate of
   cutting grass rate of square feet per second
6. print the result out

*/

#include <stdio.h>

int main() {
	const int cutting_grass_rate = 2;
	double l_yard, w_yard, a_yard,
				 l_house, w_house, a_house,
				 a_grass,
				 estimated_time;

	//1. get all the required values from input, and assign them
	//   to their respective variables
	printf("Enter the length and width of the yard separated by space (in feet) => ");
	scanf("%lf %lf", &l_yard, &w_yard);

	printf("Enter the length and width of the house separated by space (in feet) => ");
	scanf("%lf %lf", &l_house, &w_house);

	// calculate the area of the yard and house
	a_yard = l_yard * w_yard;
	a_house = l_house * w_house;

	if (a_yard > a_house) {
		// 3. to find the grass area, substract the area of the yard by the area of the house
		a_grass = a_yard - a_house;

		// 4. to find the time, divide the grass area by the rate of
		//    cutting grass of 2 square feet per second
		estimated_time = a_grass / cutting_grass_rate;

		// 5. print the result out
		printf("It will take %.2lf second to cut the grass in the %.2lfft of grass area\n",
				estimated_time, a_grass);
	} else {
		printf("error: area of the house can't be larger than the yard!\n");
		return 1;
	}

	return 0;
}
