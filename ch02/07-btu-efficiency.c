/*

PROBLEM
	Write a program that calculates how many BTUs of heat are delivered to a
	house given the number of gallons of oil burned and the efficiency
	of the house’s oil furnace. Assume that a barrel of oil (42 gallons) has an energy
	equivalent of 5,800,000 BTU. (Note: This number is too large to represent
	as an int on some personal computers.) For one test use an
	efficiency of 65% and 100 gallons of oil.

ANALYSIS
42 gallons has an energy of 5800000.00 BTU, so
1 gallons = 138095.23 BTU

INPUT
	> number of gallons
	> efficiency of oil furnace (in %, then convert into decimal)
OUTPUT
	> BTUs

IMPLEMENTATION
1. prompt the user to enter number of gallons and the efficiency
   of the oil furnace
2. find the BTUs produced by multiplying gallons ,btu per gallon constant, and efficiency
3. print the result out

*/

#include <stdio.h>

// 42 gallons has an energy of 5800000.00 BTU,
// so 1 gallons = 138095.23 BTU
#define BTU_PER_GALLON 138095.23

int main() {
	double gallons, efficiency, btus_produced;

	// 1. prompt the user to enter number of gallons and the efficiency
  //    of the oil furnace
	printf("number of gallon(s): ");
	scanf("%lf", &gallons);

	printf("efficiency (%%): ");
	scanf("%lf", &efficiency);

	// 2. find the BTUs produced by multiplying gallons and the btu per gallon constant
	btus_produced = gallons * BTU_PER_GALLON * (efficiency / 100);

	// 3. print the result out
	printf("BTUs delivered is %.2lf BTU\n", btus_produced);

	return 0;
}
