#include <stdio.h>
#include <string.h>

void sort_string(char str[]) {
  int len = strlen(str), j;
  char key;
  for (int i = 1; i < len; i++) {
    key = str[i];
    j = i - 1;

    while (j >= 0 && str[j] > key) {
      str[j + 1] = str[j];
      j = j - 1;
    }
    str[j + 1] = key;
  }
  printf("%s\n", str);
}

void remove_spaces(char str[]) {
  int counter = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] != ' ') {
      str[counter++] = str[i];
    }
  }
  str[counter] = '\0';
}

int main() {
  char msg[1024];

  while (1) {
    scanf(" %[^\n]s", msg);

    if (strcmp(msg, "exit") == 0) {
      break;
    }

    remove_spaces(msg);
    sort_string(msg);
  }
}
