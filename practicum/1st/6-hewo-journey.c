#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  switch (n) {
  case 2:
  case 3:
  case 5:
  case 7:
  case 11:
  case 13:
  case 17:
  case 19:
  case 23:
  case 29:
  case 31:
  case 37:
  case 41:
  case 47:
    printf("IT IS A PRIME");
    break
  default:
    printf("IT IS NOT A PRIME");
    break;
  }

  return 0;
}
