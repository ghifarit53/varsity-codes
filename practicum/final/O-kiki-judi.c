#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void sort(int n, int *arr) {
  int count = 0;

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
        count++;
      }
    }
  }
  printf("minimal pertukaran : %d\n", count);
}

int main() {
  int n;
  while (1) {
    scanf("%d", &n);

    if (n == 0) {
      break;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    sort(n, arr);
  }
}
