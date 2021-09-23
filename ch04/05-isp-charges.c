#include <stdio.h>

int main() {
  double data_usage;

  printf("Enter data usage (Gb): ");
  scanf("%lf", &data_usage);

  if (data_usage > 0 && data_usage <= 1.0) {
    printf("Charges: $ 250\n");
  } else if (data_usage > 1.0 && data_usage <= 2.0) {
    printf("Charges: $ 500\n");
  } else if (data_usage > 2.0 && data_usage <= 5.0) {
    printf("Charges: $ 1000\n");
  } else if (data_usage > 5.0 && data_usage <= 10.0) {
    printf("Charges: $ 1500\n");
  } else if (data_usage > 10.0) {
    printf("Charges: $ 2000\n");
  }

  return 0;
}
