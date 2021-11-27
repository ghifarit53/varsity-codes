#include <stdio.h>

void fibonacci_until(int range) {
  int a = 0, b = 1, c;
  while (a <= range) {
    printf("%d,", a);
    c = a + b;
    a = b;
    b = c;
  }
}

int main() {
  int n, range;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &range);
    printf("Sequence: ");
    fibonacci_until(range);
    printf("\n");
  }

  return 0;
}
