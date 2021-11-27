#include <math.h>
#include <stdio.h>

#define LETTERS 52

char msg[10000],
    letters[LETTERS] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

int is_binary_prime(unsigned long n) {
  int result = 0, tmp;

  for (int i = 0; n != 0; i++) {
    tmp = n % 10;
    n /= 10;
    result += tmp * pow(2, i);
  }

  if (result <= 1) {
    return 0;
  }

  for (int i = 2; i <= result / 2; i++) {
    if (result % i == 0) {
      return 0;
    }
  }

  return 1;
}

void encrypt_decrypt(int mode, int key) {
  if (mode == 1) {
    printf("Mumun: ");
  } else {
    printf("Robot: ");
  }

  for (int i = 0; msg[i] != '\0'; i++) {

    char c = msg[i];
    int index = -1;

    // check whether our character is in letter array
    for (int j = 0; j < LETTERS; j++) {
      if (c == letters[j]) {
        index = j;
        break;
      }
    }

    if (index != -1) {
      int shift;

      // encrypt
      if (mode == 1) {
        shift = index + key;
        if (shift > LETTERS - 1) {
          shift = key - (LETTERS - index);
        }
        c = letters[shift];

      } else if (mode == 0) { // decrypt
        shift = index - key;
        if (shift < 0) {
          shift = LETTERS - (key - index);
        }
        c = letters[shift];
      }
    }

    printf("%c", c);
  }
  printf("\n");
}

int main() {

  int key;
  scanf("%d", &key);
  key %= 52;

  while (1) {
    unsigned long n;
    scanf("%lu", &n);

    if (n == -1) {
      break;
    }

    // 0: decrypt (Mumun)
    // 1: encrypt (Robot)
    int mode = is_binary_prime(n);

    getchar();
    scanf("%[^\n]s", msg);

    encrypt_decrypt(mode, key);
  }
}
