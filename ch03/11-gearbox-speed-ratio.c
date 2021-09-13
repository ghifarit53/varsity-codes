/*

PROBLEM
  The ratio between successive speeds of a six-speed gearbox

INPUT
  > M : maximum speed (rpm)
  > m : minimum speed (rpm)

OUTPUT
  > speed ratio

FORMULA

    _______
  ⁵√ M / m

IMPLEMENTATION
1. Write a function speeds_ratio that calculates this ratio for any maximum and
   minimum speeds
2. because math.h has only sqrt() function and not root of five, we can use
   pow() with the power as a fraction of five
3. Write a main function that prompts for maximum and minimum speeds (rpm)
4. calls speeds_ratio to calculate the ratio
5. displays the results in a sentence of the form

*/

#include <math.h>
#include <stdio.h>

// 1. Write a function speeds_ratio that calculates this ratio for any maximum
//    and minimum speeds
double speeds_ratio(int max_speed, int min_speed) {
  double max_min = (double)(max_speed / min_speed);
  // 2. because math.h has only sqrt() function and not root of five, we can use
  //    pow() with the power as a fraction of five
  double ratio = pow(max_min, 1.0 / 5.0);

  return ratio;
}

// 3. Write a main function that prompts for maximum and minimum speeds (rpm)
int main() {
  int max_speed, min_speed;

  printf("Enter max speed (rpm) => ");
  scanf("%d", &max_speed);

  printf("Enter min speed (rpm) => ");
  scanf("%d", &min_speed);

  // 4. calls speeds_ratio to calculate the ratio
  double ratio = speeds_ratio(max_speed, min_speed);

  // 5. displays the results in a sentence of the form
  printf("The ratio between successive speeds of a six-speed gearbox "
         "with maximum speed %d rpm and minimum speed %d rpm is %2.lf\n",
         max_speed, min_speed, ratio);
}
