#include <stdio.h>

void insertion_sort(int *arr, int n) {
  int key;
  for (int i = 0; i < n; i++) {
    key = *(arr + i);
    int j = i - 1;

    while (j >= 0 && *(arr + j) > key) {
      *(arr + j + 1) = *(arr + j);
      j--;
    }
    *(arr + j + 1) = key;
  }

  for (int i = 0; i < n; i++) {
    printf("%d", *(arr + i));
    printf(i < n - 1 ? " " : "\n");
  }
}

int main() {
  int n;
  scanf("%d", &n);

  if (n == 0) {
    printf("NULL\n");
    return 0;
  }

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", (arr + i));
  }

  insertion_sort(arr, n);
}
