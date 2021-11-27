/*

PROBLEM
  Write a program to output information for the labels
  the hospital pharmacy places on bags of I.V. medications
  indicating the volume of medication to be infused and the rate
  at which the pump should be set.

INPUT
  > volume to be infused (ml)
  > number of minutes over which it should be infused
OUTPUT
  > volume to be infused (ml)
  > infusion rate (ml/hr)

IMPLEMENTATION
1. prompt the user to enter quantity of the fluid and time in minutes
2. convert the minutes to hours
3. to find rate, divide the volume of the fluid by the hours
4. print the volume and infusion rate

*/

#include <stdio.h>

int main() {
  double infuse_volume, minutes, infusion_rate;

  // 1. prompt the user to enter quantity of the fluid and time in minutes
  printf("Volume to be infused (ml) => ");
  scanf("%lf", &infuse_volume);

  printf("Minutes over which to infuse => ");
  scanf("%lf", &minutes);

  // 2. convert the minutes to hours
  // 3. to find rate, divide the volume of the fluid by the hours
  infusion_rate = infuse_volume / (minutes / 60);

  // 4. print the volume and infusion rate
  printf("VTBI: %.0lf ml\nRate: %.0lf ml/hr\n",
      infuse_volume, infusion_rate);

  return 0;
}
