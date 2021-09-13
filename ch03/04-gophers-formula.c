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
1. de
1. create a function gopher() that requires integer n as its argument
2. plug n into the above formula, but first create intermediary variable
   to make debugging easier
3. return the result
4. create a main function and prompts the user to enter n
5. call gopher() with n as the arguments
6. print the result as requested

*/

#include <math.h>
#include <stdio.h>

#define PI 3.14159265

double gopher(int n) {
  double inside_sqrt = 2 * (double)n + (1 / 3);
  double inside_sqrt_pi = inside_sqrt * PI;

  double n_factorial = pow(n, n) * exp(-1 * n) * sqrt(inside_sqrt_pi);

  return n_factorial;
}

int main() {
  int n;

  printf("Enter n > ");
  scanf("%d", &n);

  double n_factorial = gopher(n);

  printf("%d! equals approximately %.5lf\n", n, n_factorial);

  return 0;
}
