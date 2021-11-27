#include <stdio.h>

int main() {
  int n, row, col;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d %d", &row, &col);

    int matrix[col][row];

    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        scanf("%d", &matrix[i][j]);
      }
    }

    for (int i = 0; i < col; i++) {
      for (int j = 0; j < row; j++) {
        printf("%d", matrix[j][i]);
        printf(j < row - 1 ? " " : "\n");
      }
    }
    return 0;
  }
}
