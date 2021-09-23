#include <stdio.h>

int main() {
  char color;

  printf("Enter color name: ");
  scanf(" %c", &color);

  switch (color) {
  case 'O':
  case 'o':
    printf("Content: Ammonia\n");
    break;

  case 'B':
  case 'b':
    printf("Content: Carbon monoxide\n");
    break;

  case 'Y':
  case 'y':
    printf("Content: Hydrogen\n");
    break;

  case 'G':
  case 'g':
    printf("Content: Oxygen\n");
    break;

  default:
    printf("Content unknown\n");
    break;
  }

  return 0;
}
