/*

PROBLEM
	Write a program that prompts the user to enter the radius
	of the circular base of a cone and the slant height of the cone.
	The program must compute the total surface area of
	a right circular cone and display it back to the user

INPUT
	> radius of a cone's circular base
	> slant height of the cone

OUTPUT
	> total surface area of the cone

RELEVANT FORMULA
surface area can be found using the following formula

	a = π × r × (r + s)

where
s -> slant height of the cone
r -> radius of the cone's circular base

IMPLEMENTATION

*/

#include <stdio.h>

#define PI 3.14159265

double surface_area(double slant_height, double radius) {
	double area;
	area = PI * radius * (radius + slant_height);

	return area;
}

int main() {
	double slant_height, radius, surface;

	printf("enter radius of a cone's circular base (cm) => ");
	scanf("%lf", &radius);

	printf("enter slant height of a cone (cm) => ");
	scanf("%lf", &slant_height);

	surface = surface_area(slant_height, radius);

	printf("surface area of the cone is: %.2lf cm²\n", surface);

	return 0;
}
