/*

PROBLEM
  Write a function that calculates and displays the number
  of cases predicted for each day number entered using the following formula

                      40000
  Cases(x) = ------------------------
              1 + 39999 (e^-0.24681)

However we can see that x is not being used anywhere in the formula, but after
some testing, i can confidently say that x's location is in the e's power, so
the above formula should become like this

                      40000
  Cases(x) = -------------------------
              1 + 39999 (e^(-0.24681x))

And the result should be floored to find the case in integer

INPUT
  > day number

OUTPUT
  > cases predicted

NOTES
use the 'math.h' header to get euler's number

IMPLEMENTATION
1. define E as it's a constant
2. create a function cases() that requires day as its arguments
3. use the formula above in the function to calculate the case on a predicted
   day
4. create a function ask_day() to prompt users to enter day number
5. call the function cases() with the entered number
   as its arguments and print the result out
6. now create a main function that calls the ask_day() function three times

*/

#include <math.h>
#include <stdio.h>

// 1. define E as it's a constant
#define E 2.71828182

// 2. create a function cases() that requires day as its arguments
double cases(int day) {
  // 3. use the formula above in the function to calculate the case on a
  //    predicted day
  return floor(40000 / (1 + 39999 * (pow(E, (-0.24681 * day)))));
}

// 4. create a function ask_day() to prompt users to enter day number
int ask_day() {
  int day;

  printf("Enter day number > ");
  scanf("%d", &day);

  // 5. call the function cases() with the entered number
  //    as its arguments and print the result out
  double total_case = cases(day);

  printf("By day %d, model predicts %.0lf cases total.\n\n", day, total_case);

  return 0;
}

// 6. now create a main function that calls the ask_day() function three times
int main() {

  ask_day();
  ask_day();
  ask_day();

  return 0;
}
