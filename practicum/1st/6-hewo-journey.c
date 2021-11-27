#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  switch (n) {
  case 2:
  case 3:
  case 5:
  case 7:
    printf("IT IS A PRIME");
    break;
  default:
    if ((n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0 && n % 11 != 0 &&
         n % 13 != 0 && n % 17 != 0 && n % 19 != 0 && n % 23 != 0 &&
         n % 29 != 0 && n % 31 != 0 && n % 37 != 0 && n % 41 != 0) &&
        (n != 4 && n != 6 && n != 8 && n != 9)) {
      printf("IT IS A PRIME");
    } else {
      printf("IT IS NOT A PRIME");
    }
  }

  return 0;
}
