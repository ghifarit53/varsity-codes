/*

PROBLEM
  Write a program that will determine the total cost
  of a house after a five-year period and run the program
  for each of the following sets of data

INPUT
  > initial house cost ($)
  > annual fuel cost ($)
  > tax rate

OUTPUT
  > the total cost of a house after a five-year period

ALGORITHM
1. To calculate the house cost, add the initial cost
   to the fuel cost for five years, then add the taxes for five years
2. Taxes for one year are computed by multiplying the tax rate
   by the initial house cost, so for five years, multiply it by 5

IMPLEMENTATION
1. create a function named house_cost() that requires
   initial house cost, annual fuel cost, and tax rate as its arguments
2. use the algorithm to find all the required value
3. return the total house cost as double
4. create a main function that prompts user to enter all the
   required value
5. call the house_cost() function with all the entered value
6. print out the result

*/

#include <stdio.h>

// 1. create a function named house_cost() that requires
//    initial house cost, annual fuel cost, and tax rate as its arguments
double house_cost(int initial_cost, int annual_fuel_cost, double tax_rate) {
  // 2. use the algorithm to find all the required value
  double tax_for_five_years = tax_rate * (double)initial_cost * 5;
  double fuel_cost_for_five_years = (double)annual_fuel_cost * 5;
  double total_house_cost =
      (double)initial_cost + tax_for_five_years + fuel_cost_for_five_years;

  // 3. return the total house cost as double
  return total_house_cost;
}

// 4. create a main function that prompts user to enter all the
//    required value
int main() {
  int initial_cost, annual_fuel_cost;
  double tax_rate, total_house_cost;

  printf("Enter initial cost of the house ($) => ");
  scanf("%d", &initial_cost);

  printf("Enter annual fuel cost ($) => ");
  scanf("%d", &annual_fuel_cost);

  printf("Enter tax rate => ");
  scanf("%lf", &tax_rate);

  // 5. call the house_cost() function with all the entered value
  total_house_cost = house_cost(initial_cost, annual_fuel_cost, tax_rate);

  // 6. print out the result
  printf("Total cost of the house after 5 years is : $%.2lf\n",
         total_house_cost);

  return 0;
}
