#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  // set constraint: 0 < n < 100, if outside
  // print out of bound
  if (n > 0 && n < 100) {
    // check whether n is even/odd
    if (n % 2 == 0) {
      printf("Genap ");
    } else {
      printf("Ganjil ");
    }

    // check whether n is a units/tens
    if (n > 0 && n < 10) {
      printf("Satuan");
    } else {
      printf("Puluhan");
    }
  } else {
    printf("Out of bound");
  }
  return 0;
}
