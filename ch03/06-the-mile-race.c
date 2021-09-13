/*

PROBLEM
  Write a program that scans in the race time in minutes (minutes)
  and seconds (seconds) for a runner and computes and displays the speed
  in feet per second (fps) and in meters per second (mps)

INPUT
  > time in minutes
  > time in second

OUTPUT
  > speed in feet/sec
  > speed in meters/sec

NOTES
1 mile = 5280 ft
1 km = 3282 ft
so, 1 mile = 5280 / 3282
           = 1.608 km
           = 1608 m

FORMULA
v = s / t

where:
s -> ft or m
t -> time (sec)

IMPLEMENTATION
1. create a constant for some of the variable
2. create a function feet_per_second() that requires
   time in second and length of the race in feet,
   get the speed using the formula and return the result
3. create a function meters_per_second() with the same logic
   as feet_per_second(), except that now the length is in meter
4. create a main function that prompts user to enter tim
   in minutes and in seconds
5. convert the time to second
6. call both function and save the result to some variables, and because it's
   a one mile race, put 1 in the speed function
7. print the variables

*/

#include <stdio.h>

// 1. create a constant for some of the variable
#define ONE_MILE_IN_FEET 5280
#define ONE_MILE_IN_METER 1608

// 2. create a function feet_per_second() that requires
//    time in second and length of the race in feet,
//    get the speed using the formula and return the result
double feet_per_second(int mile, double time_sec) {
  return (double)mile * ONE_MILE_IN_FEET / time_sec;
}

// 3. create a function meters_per_second() with the same logic
//    as feet_per_second(), except that now the length is in meter
double meters_per_second(int mile, double time_sec) {
  return (double)mile * ONE_MILE_IN_METER / time_sec;
}

// 4. create a main function that prompts user to enter time
//    in minutes and seconds
int main() {
  double minutes, second;

  printf("Enter time in minutes => ");
  scanf("%lf", &minutes);

  printf("Enter time in seconds => ");
  scanf("%lf", &second);

  // 5. convert the time to second
  double time_in_second = (minutes * 60) + second;

  // 6. call both function and save the result to some variables, and because
  //    it's a one mile race, put 1 in the speed function
  double speed_in_fps = feet_per_second(1, time_in_second);
  double speed_in_mps = meters_per_second(1, time_in_second);

  // 7. print the variables
  printf("Speed:\n> %.2lf ft/s\n> %.2lf m/s\n", speed_in_fps, speed_in_mps);
}
