#include <stdio.h>

int four_square(int x, int num_of_squares) {
  if (x == 0 && num_of_squares == 0) {
    return 1;
  }
  if (num_of_squares == 0) {
    return 0;
  }

  for (int i = 1; i * i <= x; i++) {
    int squared = i * i;
    if (four_square(x - squared, num_of_squares - 1)) {
      return 1;
    }
  }

  return 0;
}

int main() {
  int testcase;

  scanf("%d", &testcase);

  for (int i = 0; i < testcase; i++) {
    int x;
    scanf("%d", &x);
    printf(four_square(x, 4) ? "LEAVE\n" : "ERASE\n");
  }

  return 0;
}
