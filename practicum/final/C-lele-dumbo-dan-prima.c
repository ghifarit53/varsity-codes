#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_prime(int n) {
  if (n <= 1) {
    return 0;
  }

  if (n == 2) {
    return 1;
  }

  if (n > 2 && n % 2 == 0) {
    return 0;
  }

  int max = floor(sqrt(n));
  for (int i = 3; i < max + 1; i += 2) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int concat_int(int a, int b) {
  char s1[16], s2[16];

  sprintf(s1, "%d", a);
  sprintf(s2, "%d", b);
  strcat(s1, s2);

  return atoi(s1);
}

int main() {
  int m, n;
  scanf("%d %d", &m, &n);

  int exist = 0;
  for (int i = m; i <= n; i++) {
    if (is_prime(i)) {
      for (int j = m; j <= n; j++) {
        if (is_prime(j)) {
          int tmp = concat_int(i, j);
          if (is_prime(tmp)) {
            printf("%d %d\n", i, j);
            exist = 1;
          }
        }
      }
    }
  }

  if (!exist) {
    printf("TIDAK ADA\n");
  }
}
