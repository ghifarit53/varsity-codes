#include <stdio.h>

char msg[1001];
int mode, key;

int fib(int n) {
  if (n <= 1) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

void caesar_cipher(int index) {
  if (msg[index] == '\0') {
    printf("\n");
    return;
  }

  char c = msg[index];
  if (c != ' ') {
    if (mode == 0) {
      c = (c >= 'a' && c <= 'z') ? (c - 'a' + key) % 26 + 'a'
                                 : (c - 'A' + key) % 26 + 'A';
    } else {
      c = (c >= 'a' && c <= 'z') ? (c - 'a' - key + 26) % 26 + 'a'
                                 : (c - 'A' - key + 26) % 26 + 'A';
    }
  }
  printf("%c", c);

  caesar_cipher(index + 1);
}

void ask_input(int n) {
  if (n == 0)
    return;

  scanf("%d", &mode);

  if (mode != 0 && mode != 1) {
    printf("Mode is not valid!\n");
    ask_input(n - 1);
  } else {
    scanf("%d", &key);
    key = fib(key) % 26;

    char tmp;
    scanf("%c", &tmp);
    scanf("%[^\n]", msg);
    caesar_cipher(0);

    ask_input(n - 1);
  }
}

int main() {
  int testcase;
  scanf("%d", &testcase);

  ask_input(testcase);
}
