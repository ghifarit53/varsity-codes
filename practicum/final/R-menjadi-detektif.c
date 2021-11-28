#include <stdio.h>
#include <string.h>

int is_subarray(int arr1[], int arr2[], int len1, int len2) {
  int i = 0, j = 0;

  while (i < len1 && j < len2) {
    if (arr1[i] == arr2[j]) {
      i++;
      j++;

      if (j == len2) {
        return 1;
      }
    } else {
      i = i - j + 1;
      j = 0;
    }
  }

  return 0;
}

int main() {
  int test;
  scanf("%d", &test);

  for (int i = 0; i < test; i++) {
    char s1[32], s2[32];
    scanf("%s %s", s1, s2);

    int len1 = strlen(s1), len2 = strlen(s2);

    int diff1[len1], diff2[len2];

    for (int i = 0; i < len1; i++) {
      diff1[i] = (int)(s1[i] - s1[i + 1]);
    }

    for (int i = 0; i < len2; i++) {
      diff2[i] = (int)(s2[i] - s2[i + 1]);
    }

    int subarr = is_subarray(diff1, diff2, len1, len2 - 1);
    printf(subarr == 1 ? "YSTTS\n" : "YNTKTS\n");
  }
}
