#include <stdio.h>

int main() {
  int testcase;
  scanf("%d", &testcase);

  for (int i = 0; i < testcase; i++) {
    int len;
    scanf("%d", &len);

    int arr_missing[len - 1], arr_complete[len];

    for (int j = 0; j < len - 1; j++) {
      scanf("%d", &arr_missing[j]);
    }

    for (int k = 0; k < len; k++) {
      scanf("%d", &arr_complete[k]);
    }

    for (int l = 0; l < len; l++) {
      if (arr_missing[l] != arr_complete[l]) {
        printf("%d\n", arr_complete[l]);
        break;
      }
    }
  }
}
