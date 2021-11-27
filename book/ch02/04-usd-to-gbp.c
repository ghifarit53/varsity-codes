/*

PROBLEM
  write a program to convert a sum of money
  in US Dollars to British Pounds, given that
  1 USD = 0.65 GBP

INPUT
  > the nominal of USD in floating point
  
OUTPUT
  > the nominal of GBP in floating point

IMPLEMENTATION
1. define a constant for the pounds
2. get the nominal of USD from input
3. multiply it by the constant
4. print the result out

*/

#include <stdio.h>

// 1. define a constant for the pounds
#define ONE_USD_IN_GBP 0.65

int main() {
  double usd_nominal, gbp_nominal;

  // 2. get the nominal of USD from input
  printf("Enter your USD nominal => ");
  scanf("%lf", &usd_nominal);

  // 3. multiply it by the constant
  gbp_nominal = usd_nominal * ONE_USD_IN_GBP;

  // 4. print the result out
  printf("%.2lf USD = %.2lf GBP\n", usd_nominal, gbp_nominal);

  return 0;
}
