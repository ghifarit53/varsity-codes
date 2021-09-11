/*

PROBLEM
	Write a program that would estimate the magnitude (liters/day)
	and cost of the water saved based on the community’s population

INPUT
	> number of population

OUTPUT
	> liters/day of toilet flush
	> cost of water saved

make a constant for the following values
> new toilet flush
> old toilet flush
> installation cost
> avg. usage per day

IMPLEMENTATION
1. prompt the user to enter the number of population
2. we know that 1 toilet is used by 3 persons, so to find the
   number of currently available toilets, divide population by 3
3. find the water usage per day with the old and the new toilet,
   by multiplying them to avg. usage per day
4. find the difference by substracting the total of old toilet
	 water usage by the new one.
5. find the total cost of new toilet installation by multiplying
   the number of toilets to the installation cost
6. print the water usage difference and total cost
*/

#include <stdio.h>

#define NEW_TOILET_USAGE 2
#define OLD_TOILET_USAGE 15
#define INSTALLATION_COST 150
#define AVG_USAGE_PER_DAY 14

int main() {
	const int new_toilet_usage = 2,
						old_toilet_usage = 15,
						installation_cost = 150,
						avg_usage_per_day = 14;
	int population, toilets;
	double diff, total_install_cost;

	// 1. prompt the user to enter the number of population
	printf("enter the number of population => ");
	scanf("%d", &population);

	// 2. we know that 1 toilet is used by 3 persons, so to find the
  //  	number of currently available toilets, divide population by 3
	toilets = population / 3;

	//3. find the water usage per day with the old and the new toilet,
  //   by multiplying them to avg. usage per day
	// 4. find the difference by substracting the total of old toilet
	//		water usage by the new one.
	diff = (old_toilet_usage * avg_usage_per_day) - (new_toilet_usage * avg_usage_per_day);

	// 5. find the total cost of new toilet installation by multiplying
  //    the number of toilets to the installation cost
	total_install_cost = toilets * installation_cost;

	// 6. print the water usage difference and total cost
	printf("water saved: %.2lf\ntotal installation cost: $%.2lf\n", diff, total_install_cost);

	return 0;
}
