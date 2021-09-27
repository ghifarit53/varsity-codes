#include <stdio.h>

int main() {
  char color;

  printf("Enter color name: ");
  scanf(" %c", &color);

  printf("Content");
  switch (color) {
  case 'O':
  case 'o':
    printf(": Ammonia\n");
    break;

  case 'B':
  case 'b':
    printf(": Carbon monoxide\n");
    break;

  case 'Y':
  case 'y':
    printf(": Hydrogen\n");
    break;

  case 'G':
  case 'g':
    printf(": Oxygen\n");
    break;

  default:
    printf(" unknown\n");
    break;
  }

  return 0;
}
