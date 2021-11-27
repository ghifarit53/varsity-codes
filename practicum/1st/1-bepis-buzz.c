#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  if (n >= 15 && n <= 35) {
    printf("Special\n");
    return 0;
  }

  // 3 : Be
  // 5 : Pi
  // 7 : Buzz
  // 3 * 5 : BePi
  // 3 * 7 : BeBuzz
  // 5 * 7 : PiBuzz
  // 3 * 5 * 7 : BePiBuzz
  // order should be from the largest so n doesn't
  // get divided by the smaller numbers first
  if (n % 105 == 0) {
    printf("BePiBuzz\n");
  } else if (n % 35 == 0) {
    printf("PiBuzz\n");
  } else if (n % 21 == 0) {
    printf("BeBuzz\n");
  } else if (n % 15 == 0) {
    printf("BePi\n");
  } else if (n % 7 == 0) {
    printf("Be\n");
  } else if (n % 5 == 0) {
    printf("Pi\n");
  } else if (n % 3 == 0) {
    printf("Buzz\n");
  } else {
    printf("%d is not interesting.\n", n);
    if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122)) {
      printf(" Bepi made it interesting '%c'\n", (char)n);
    }
  }
  return 0;
}
