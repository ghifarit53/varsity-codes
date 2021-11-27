#include <stdio.h>

int main() {
  char words[21][101] = {""};
  int divisible_by[21] = {0};
  int num_of_words;

  scanf("%d", &num_of_words);

  for (int i = 0; i < num_of_words; i++) {
    scanf("%d %s", &divisible_by[i], words[i]);
  }

  int count_to_n;
  scanf("%d", &count_to_n);

  for (int i = 1; i <= count_to_n; i++) {
    int is_not_divisible = 1;

    for (int j = 0; j < num_of_words; j++) {
      if (i % divisible_by[j] == 0) {
        printf("%s", words[j]);
        is_not_divisible = 0;
      }
    }

    if (is_not_divisible) {
      printf("%d", i);
    }

    printf("\n");
  }

  return 0;
}
