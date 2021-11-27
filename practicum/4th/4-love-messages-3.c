#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
  int len = strlen(str);
  char tmp;

  for (int i = 0; i < len / 2; i++) {
    tmp = *(str + i);
    // swapping the 1st index with the last, then go to the next index
    *(str + i) = *(str + len - i - 1);
    *(str + len - i - 1) = tmp;
  }
  printf("%s\n", str);
}

int main() {
  char str[512][16] = {0}; // to make checking easier
  int i = 0;
  do {
    scanf("%s", *(str + i)); // assign each string individually to the 2d array
    i++;
  } while (strcmp(*(str + i - 1), "exit") != 0);

  for (int i = 0; i < 512; i++) {
    for (int j = 0; j < 16; j++) // prevent exit from being reversed
      if (*(*(str + i) + j) != 0 && strcmp(*(str + i), "exit")) {
        reverse_string(*(str + i));
        break; // don't repeat
      }
  }
  return 0;
}
