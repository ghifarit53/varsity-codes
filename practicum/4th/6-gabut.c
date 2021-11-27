#include <stdio.h>

void count_elements(char *str, int *vowels, int *consonants, int *upper,
                    int *lower) {
  for (int i = 0; *(str + i) != '\0'; i++) {
    // vowels and consonants
    if (*(str + i) != ' ') {
      if (*(str + i) == 'a' || *(str + i) == 'i' || *(str + i) == 'u' ||
          *(str + i) == 'e' || *(str + i) == 'o' || *(str + i) == 'A' ||
          *(str + i) == 'I' || *(str + i) == 'U' || *(str + i) == 'E' ||
          *(str + i) == 'O') {
        *vowels += 1;
      } else {
        *consonants += 1;
      }

      // lower and upper
      if (*(str + i) >= 'a' && *(str + i) <= 'z') {
        *lower += 1;
      } else if (*(str + i) >= 'A' && *(str + i) <= 'Z') {
        *upper += 1;
      }
    }
  }
}

int main() {
  char str[101];
  scanf("%[^\n]", str);

  int vowels = 0, consonants = 0, upper = 0, lower = 0;

  count_elements(str, &vowels, &consonants, &upper, &lower);

  printf("Vowel Number: %d\n", vowels);
  printf("Number of Consonants: %d\n", consonants);
  printf("Total Uppercase: %d\n", upper);
  printf("Total Smallcase: %d\n", lower);
}
