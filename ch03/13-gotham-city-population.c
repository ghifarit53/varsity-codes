/*

PROBLEM
  Write a program that can predicts Gotham city's population
  in the coming years, using the following formula

  P(t) = 52.966 + 2.84t

  where t is years after 1990, and P is population in thousands

INPUT
  > year after 1990

OUTPUT
  > Gotham's population in thousands

IMPLEMENTATION
1. create a function called 'population()' that requires year as its argument
2. create some constant for population rate, initial population,
   and initial year
3. substract the year by initial year (1990) and use the result in the formula
5. return the result
6. now create a main function that prompts user for year after 1990
7. call the population() function with the entered year
8. finally, print out the result

*/

#include <stdio.h>

// 1. create a function called 'population()' that requires year as its argument
double population(int year) {
  //2. create some constant for population rate, initial population,
  //   and initial year
  const double population_rate = 2.184,
               initial_population = 52.966;
  const int initial_year = 1990;
  double current_population;
  int year_difference;

  // 3. substract the year by initial year (1990) and use the result in the formula
  year_difference = year - initial_year;
  current_population = initial_population + (population_rate * year_difference);

  // 5. return the result
  return current_population;
}

// 6. now create a main function that prompts user for year after 1990
int main() {
  int year;

  printf("Enter a year after 1990> ");
  scanf("%d", &year);

  // 7. call the population() function with the entered year
  // 8. finally, print out the result
  printf("Predicted Gotham City population in %i (in thousands) is: %.3lf\n", year,population(year));

  return 0;
}
