#include <memory.h>
#include <stdio.h>

void draw_mountain(int k[], int p, int max_h) {
  char mountain[max_h + 1][p + 1];

  for (int i = 0; i < p; i++) {
    if (k[i] < k[i + 1]) {
      mountain[max_h - k[i]][i] = '/';
    } else if (k[i] > k[i + 1]) {
      mountain[max_h - k[i] + 1][i] = '\\';
    } else if (k[i] == k[i + 1]) {
      mountain[max_h - k[i]][i] = '_';
    }
  }

  for (int i = 0; i < max_h + 1; i++) {
    for (int j = 0; j < p; j++) {
      printf("%c", mountain[i][j]);
    }
    printf("\n");
  }
  printf("***\n");
}

int main() {
  int p;
  while (1) {
    scanf("%d", &p);

    // exit
    if (p == -1) {
      break;
    }

    int k[p + 1];
    for (int i = 0; i < p + 1; i++) {
      scanf("%d", &k[i]);
    }

    int max_h = 0;
    for (int i = 0; i < p; i++) {
      if (k[i] > max_h) {
        max_h = k[i];
      }
    }

    draw_mountain(k, p, max_h);
  }
  printf("\n");
}
