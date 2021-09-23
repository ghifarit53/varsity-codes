#include <stdio.h>

int is_divisible_by_nine(int num) {
  int sum = 0, extracted_digit;

  for (int i = 0; i < 6; i++) {
    extracted_digit = num % 10;
    sum += extracted_digit;
    num /= 10;
  }

  if (sum % 9 == 0 && num % 9 == 0) {
    return 1;
  } else {
    return 0;
  }

  return 0;
}

int main() {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (is_divisible_by_nine(num)) {
    printf("%d is divisible by nine\n", num);
  } else {
    printf("%d is not divisible by nine\n", num);
  }

  return 0;
}
