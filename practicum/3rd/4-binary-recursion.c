#include <stdio.h>

void to_binary(unsigned long n) {
  if (n == 0) {
    return;
  }

  to_binary(n / 2);
  printf("%lu", n % 2);
}

int main() {
  unsigned long n;

  scanf("%lu", &n);

  to_binary(n);
  printf("\n");
}
