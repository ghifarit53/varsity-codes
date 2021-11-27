#include <stdio.h>

int sum = 0;

void get_num_and_convert_to_char(int n) {
  if (n == 0) {
    printf("%d\n", sum);
    return;
  }

  int num;
  scanf("%d", &num);
  sum += num;

  char c = (num % 26 == 0) ? 'Z' : (char)(num % 26 + '@');
  printf(n != 1 ? "%c " : "%c\n", c);

  get_num_and_convert_to_char(n - 1);
}

int main() {
  int testcase;
  scanf("%d", &testcase);
  get_num_and_convert_to_char(testcase);
}
