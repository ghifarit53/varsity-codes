/*

PROBLEM
  Create a program that prompts the user to enter an integer n,
  uses Gosper’s formula to approximate n!, and then displays the result

INPUT
  > integer n

OUTPUT
  > n! using the Gopher's formula

FORMULA
                    __________________
                   /        1
n! = n^n e^(-n)   / ( 2n + --- ) π
                \/          3

IMPLEMENTATION
1. define PI as constant
2. create a function gosper() that requires integer n as its argument
3. plug n into the above formula, but first create intermediary variable
   to make debugging easier
4. return the result
5. create a main function and prompts the user to enter n
6. call gosper() with n as the arguments
7. print the result as requested

*/

#include <math.h>
#include <stdio.h>

// 1. define PI as constant
#define PI 3.14159265

// 2. create a function gosper() that requires integer n as its argument
double gosper(int n) {
  // 3. plug n into the above formula, but first create intermediary variable
  //    to make debugging easier
  double inside_sqrt = 2 * (double)n + (1 / 3);
  double inside_sqrt_pi = inside_sqrt * PI;

  double n_factorial = pow(n, n) * exp(-1 * n) * sqrt(inside_sqrt_pi);

  // 4. return the result
  return n_factorial;
}

// 5. create a main function and prompts the user to enter n
int main() {
  int n;

  printf("Enter n > ");
  scanf("%d", &n);

  // 6. call gosper() with n as the arguments
  double n_factorial = gosper(n);

  // 7. print the result as requested
  printf("%d! equals approximately %.5lf\n", n, n_factorial);

  return 0;
}
