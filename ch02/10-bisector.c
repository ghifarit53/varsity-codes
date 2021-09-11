/*

PROBLEM
	Write a program that outputs the equation
	of the perpendicular bisector of the line segment between two points

INPUT
	> cartesian coordinate of two points A and B (x, y)
OUTPUT
	> equation of the perpendicular
	  bisector of the line segment between two points

IMPLEMENTATION
1. prompt user to enter cartesian coordinates of two points
2. compute the slope of the line between those two points
3. compute the coordinates of the midpoint of the line segment between the
   two points by averaging the two x-coordinates and the two y-coordinates
4. compute the slope of the perpendicular bisector by taking the negative
   reciprocal of the slope of the line segment (m1 * m2 = -1)
5. compute the y-intercept of the perpendicular bisector
6. output with labels the original two points,
   and output in y = mx + b format the equation
	 of the perpendicular bisector

RELEVANT FORMULA

> finding slope of two point:

      y2  -  y1
m = -------------
      x2  -  x1

> slope of a perpendicular line

	m1 * m2 = -1
	m1 = -1 / m2

*/

#include <stdio.h>

int main() {
	double A_x, A_y,
				 B_x, B_y,
				 AB_slope,
				 mid_x, mid_y,
				 bisector_slope,
				 y_intercept;

	// 1. prompt user to enter cartesian coordinates of two points
	printf("enter coordinate for A (x y): ");
	scanf("%lf %lf", &A_x, &A_y);

	printf("enter coordinate for B (x y): ");
	scanf("%lf %lf", &B_x, &B_y);

	// 2. compute the slope of the line between those two points
	AB_slope = (B_y - A_y) / (B_x - A_x);

	// 3. compute the coordinates of the midpoint of the line segment between the
  //    two points by averaging the two x-coordinates and the two y-coordinates
	mid_x = (A_x + B_x) / 2;
	mid_y = (A_y + B_y) / 2;

	// 4. compute the slope of the perpendicular bisector by taking the negative
  //    reciprocal of the slope of the line segment (m1 * m2 = -1)
	bisector_slope = -1 / AB_slope;

	// 5. compute the y-intercept of the perpendicular bisector
	y_intercept = mid_y - (bisector_slope * mid_x);

	// 6. output with labels the original two points,
  //    and output in y = mx + b format the equation
	//    of the perpendicular bisector
	printf("\npoint A(%.2lf, %.2lf)\npoint B(%.2lf, %.2lf)\n",
			A_x, A_y, B_x, B_y);

	if (bisector_slope == 1) {
		printf("\nequation of the bisector of the line is\ny = x + %.2lf\n", y_intercept);
	} else if (bisector_slope == -1) {
		printf("\nequation of the bisector of the line is\ny = -x + %.2lf\n", y_intercept);
	} else {
		printf("\nequation of the bisector of the line is\ny = %.2lfx + %.2lf\n",
				bisector_slope, y_intercept);
	}

	return 0;
}
