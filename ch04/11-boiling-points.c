#include <stdio.h>

int within_x_percent(int ref, int data, int percent) {
  double lower_limit = (double)ref - ((double)percent / 100 * (double)ref);
  double upper_limit = (double)ref + ((double)percent / 100 * (double)ref);

  if (data >= lower_limit && data <= upper_limit) {
    return 1;
  }

  return 0;
}

int main() {
  int ref, data, percent;

  printf("Enter reference value: ");
  scanf("%d", &ref);
  printf("Enter data : ");
  scanf("%d", &data);
  printf("Enter percentage : ");
  scanf("%d", &percent);

  int is_within_x_percent = within_x_percent(ref, data, percent);

  printf("Substance");
  if (is_within_x_percent) {
    switch (ref) {
    case 100:
      printf(": Water\n");
      break;
    case 357:
      printf(": Mercury\n");
      break;
    case 1187:
      printf(": Copper\n");
      break;
    case 2193:
      printf(": Silver\n");
      break;
    case 2660:
      printf(": Gold\n");
      break;
    default:
      printf(" unknown\n");
      break;
    }
  } else {
    printf(" unknown\n");
  }

  return 0;
}
