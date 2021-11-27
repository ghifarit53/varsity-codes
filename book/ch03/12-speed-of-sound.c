/*

PROBLEM
  Write a program that calculates the speed of sound (a)
  in air of a given temperature T (°F)

INPUT
  > temperature in fahrenheit

OUTPUT
  > speed of sound (a)

FORMULA
              ____________
             /  5T + 297
a = 1086 \  / ------------
          \/      247

IMPLEMENTATION
1. import math.h so we can use pow()
2. create a function named speed_of_sound() that requires
   temperature (in fahrenheits) as its arguments
3. plug the temperature into the formula and return the result
4. create a main function that prompts the user to enter temperature
5. call speed_of_sound() with the entered temperature
6. print the result out

*/

// 1. import math.h so we can use pow()
#include <math.h>
#include <stdio.h>

// 2. create a function named speed_of_sound() that requires
//    temperature (in fahrenheits) as its arguments
double speed_of_sound(double temperature) {
  // 3. plug the temperature into the formula and return the result
  double inside_sqrt = (5 * temperature + 297) / 247;
  double a = 1086 * sqrt(inside_sqrt);

  return a;
}

// 4. create a main function that prompts the user to enter temperature
int main() {
  double temperature;

  printf("Enter temperature (°F) => ");
  scanf("%lf", &temperature);

  // 5. call speed_of_sound() with the entered temperature
  double speed = speed_of_sound(temperature);

  // 6. print the result out
  printf("The speed of sound in %.2lf°F is %.2lf\n", temperature, speed);
}
