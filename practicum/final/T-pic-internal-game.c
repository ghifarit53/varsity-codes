#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  char winner = 'n';
  int nopal = 0, zydhan = 0;
  while (n > 0) {
    // nopal start first
    for (int i = n; i > 0; i--) {
      if (i % 2 == 0) { // he only chooses even number
        nopal = i;
        winner = 'n';
        break;
      }
    }

    n -= nopal;

    for (int i = n; i > 0; i--) {
      if (i % 2 != 0) { // zydhan only chooses odd number
        zydhan = i;
        winner = 'z';
        break;
      }
    }

    n -= zydhan;
  }

  printf(winner == 'n' ? "Nopal\n" : "Zydhan\n");
}
