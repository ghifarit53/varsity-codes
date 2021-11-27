#include <stdio.h>

typedef struct {
  int num;
  char str[21];
} Fizzy;

int main() {
  int t;
  scanf("%d", &t);

  Fizzy fizz[t];
  for (int i = 0; i < t; i++) {
    scanf("%d %s", &fizz[i].num, fizz[i].str);
  }

  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    int not_divisible = 1;
    for (int j = 0; j < t; j++) {
      if (i % fizz[j].num == 0) {
        printf("%s", fizz[j].str);
        not_divisible = 0;
      }
    }

    if (not_divisible) {
      printf("%d", i);
    }
    printf("\n");
  }
}
