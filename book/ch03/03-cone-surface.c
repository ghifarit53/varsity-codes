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
1. define pi as it's a constant
2. create a function named surface_area() the takes slant_height and
   radius of the base as the arguments
3. plug all the arguments into the mentioned formula and return the result
4. create a main function that prompts user to enter slant height and
   radius
5. call the surface_area() with the entered values and print
   the result out

*/

#include <stdio.h>

// 1. define pi as it's a constant
#define PI 3.14159265

// 2. create a function named surface_area() the takes slant_height and
//    radius of the base as the arguments
double surface_area(double slant_height, double radius) {
  double area;

  // 3. plug all the arguments into the mentioned formula and return the result
  area = PI * radius * (radius + slant_height);

  return area;
}

// 4. create a main function that prompts user to enter slant height and
//    radius
int main() {
  double slant_height, radius, surface;

  printf("enter radius of a cone's circular base (cm) => ");
  scanf("%lf", &radius);

  printf("enter slant height of a cone (cm) => ");
  scanf("%lf", &slant_height);

  // 5. call the surface_area() with the entered values and print
  //    the result out
  surface = surface_area(slant_height, radius);

  printf("surface area of the cone is: %.2lf cm²\n", surface);

  return 0;
}
