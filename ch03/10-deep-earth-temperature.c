/*

PROBLEM
  Write a program to take a depth (in kilometers)
  inside the earth as input data. Compute and display
  the temperature at this depth in degrees Celsius and Fahrenheit

INPUT
  > depth (km)

OUTPUT
  > celcius temperature
  > fahrenheit temperature

RELEVANT FORMULAS

Celcius = 10 × depth + 20
Fahrenheit

IMPLEMENTATION
1. create function celcius that requires depth as its argument
2. calculate the temperature using the formula and return
   the result
3. create fahrenheit formula that purpose is to convert the
   celcius temperature into fahrenheit, so it requires celcius
   as argument
4. create a main function and prompt user to input depth in km
5. call celcius and fahrenheit function and print the result out

*/

#include <stdio.h>

// 1. create function celcius that requires depth as its argument
// 2. calculate the temperature using the formula and return
//    the result
double celcius_at_depth(double depth) {
  return (10 * depth) + 20;
}

// 3. create fahrenheit formula that purpose is to convert the
//    celcius temperature into fahrenheit, so it requires celcius
//    as argument
double fahrenheit(double celcius_degree) {
  return (1.8 * celcius_degree) + 32;
}

// 4. create a main function and prompt user to input depth in km
int main() {
  double depth, celcius_degree;

  printf("enter depth (km) > ");
  scanf("%lf", &depth);

  // 5. call celcius and fahrenheit function and print the result out
  celcius_degree = celcius_at_depth(depth);

  printf("it's %.2lf°C or %.2lf°F on the depth of %.2lfkm\n",
      celcius_degree, fahrenheit(celcius_degree), depth);

  return 0;
}
