#include <stdio.h>

int main() {
  double x, y;

  printf("Enter x and y: ");
  scanf("%lf %lf\n", &x, &y);

  if (x == 0 && y == 0) {
    printf("(%.1lf, %.1lf) is in the origin\n", x, y);
  } else if (x == 0) {
    printf("(%.1lf, %.1lf) is in the x-axis\n", x, y);
  } else if (y == 0) {
    printf("(%.1lf, %.1lf) is in the y-axis\n", x, y);
  } else if (x > 0) {
    if (y > 0) {
      printf("(%.1lf, %.1lf) is in the quadrant I\n", x, y);
    } else {
      printf("(%.1lf, %.1lf) is in the quadrant IV\n", x, y);
    }
  } else {
    if (y > 0) {
      printf("(%.1lf, %.1lf) is in the quadrant II\n", x, y);
    } else {
      printf("(%.1lf, %.1lf) is in the quadrant III\n", x, y);
    }
  }

  return 0;
}
