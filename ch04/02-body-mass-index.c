#include <math.h>
#include <stdio.h>

double calculate_bmi(double wt_lb, double ht_in) {
  return (703 * wt_lb) / pow(ht_in, 2);
}

int main() {
  double wt_lb, ht_in;

  printf("Enter your weight (lb): ");
  scanf("%lf", &wt_lb);

  printf("Enter your height: ");
  scanf("%lf", &ht_in);

  double bmi = calculate_bmi(wt_lb, ht_in);

  if (bmi < 18.5) {
    printf("Underweight\n");
  } else if (bmi >= 18.5 && bmi <= 24.9) {
    printf("Normal\n");
  } else if (bmi >= 25.0 && bmi <= 29.9) {
    printf("Overweight\n");
  } else {
    printf("Obese\n");
  }

  return 0;
}
