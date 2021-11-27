#include <stdio.h>

void caesar_cipher(int secret_key, char msg[256]) {
  for (int i = 0; msg[i] != '\0'; i++) {
    char c = msg[i];
    char first_letter;

    if (c != ' ') {
      if (c >= 'a' && c <= 'z') {
        first_letter = 'a';
      } else if (c >= 'A' && c <= 'Z') {
        first_letter = 'A';
      }

      c -= (first_letter - secret_key);
      c %= 26;
      c += first_letter;
    }

    msg[i] = c;
  }

  printf("%s\n", msg);
}

int main() {
  int n;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int secret_key;
    char msg[256], tmp; // for holding return char

    scanf("%d", &secret_key);
    scanf("%c", &tmp);
    scanf("%[^\n]", msg);

    caesar_cipher(secret_key, msg);
  }
  return 0;
}
