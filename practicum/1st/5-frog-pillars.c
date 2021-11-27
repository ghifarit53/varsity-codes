#include <stdio.h>

int main() {
  int n, a_to_b, b_to_c, c_to_d, d_to_e;

  scanf("%d %d %d %d %d", &n, &a_to_b, &b_to_c, &c_to_d, &d_to_e);

  // the frog can only reach the last pole if he can jump all the poles
  // before, so we can safely sure that if even one fails, it'll fail
  // entirely
  if (n >= a_to_b && n >= b_to_c && n >= c_to_d && n >= d_to_e) {
    printf("YES HE CAN");
  } else {
    printf("NO HE CAN'T");
  }

  return 0;
}
