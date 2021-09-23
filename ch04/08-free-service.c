#include <stdio.h>

int main() {
  printf("(1) First Free Service\n");
  printf("(2) Second Free Service\n");

  int service, miles;
  printf("Enter the Free Service number>> ");
  scanf("%d", &service);

  printf("Enter number of Miles>> ");
  scanf("%d", &miles);

  if (service == 1) {
    if (miles > 1500 && miles <= 3000) {
      printf("Vehicle must be serviced.\n");
    }
  } else if (service == 2) {
    if (miles > 3001 && miles <= 4500) {
      printf("Vehicle must be serviced.\n");
    }
  }

  return 0;
}
