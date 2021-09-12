/*

PROBLEM
  Write a computer program that calculates the bullet train’s constant rate
  of acceleration and determines how long the bullet train will take
  to come to rest.

INPUT
  > initial speed (mi/h) -> (mi/s)
  > final speed (mi/h) -> (mi/s)
  > time (m) -> (s)

OUTPUT
  > acceleration (mi/s²)

RELEVANT FORMULA

      vf - vi
a = -----------
         t

to find how long train will take before it stops,
we can change the equation above into the following

     0 - vi
t = --------    ..(ii)
       a

because it's said that '...before train stop',
we can set vf to 0

where
a  -> acceleration
t  -> time
vf -> final velocity
vi -> initial velocity

IMPLEMENTATION
1. create a function named acceleration() that take vf, vi, and t as its arguments
2. convert t from minutes to second and mi/h to mi/s
3. plug all the arguments into the formula and return the result as double
4. create a function named time_to_stop() that take vi, and a as its arguments,
   vi here comes from vf in the function before
5. use the formula to find time above (ii) in this function, return the result
6. now create a main function that prompts user for vf, vi, and t
7. call the acceleration() and time_to_stop() function with their relevant arguments,
   print out the result

*/

#include <stdio.h>

// 1. create a function named acceleration() that take vf, vi, and t as its arguments
double acceleration(double vi, double vf, double time) {
  // 2. convert speed from mi/h to mi/s and time from minute to second
  double vi_mps = vi / 3600,
         vf_mps = vf / 3600,
         time_sec = time * 60;

  // 3. plug all the arguments into the formula and return the result as double
  return (vf_mps - vi_mps) / time_sec;
}

// 4. create a function named time_to_stop() that take vi, and a as its arguments,
//    vi here comes from vf in the function before
double time_to_stop(double a, double vi) {
  double vi_mps = vi / 3600;

  // 5. use the formula to find time above (ii) in this function, return the result
  return (0 - vi_mps) / a;
}

// 6. now create a main function that prompts user for vf, vi, and t
int main() {
  double vi, vf, a;
  int time;

  printf("input initial speed (mi/h) => ");
  scanf("%lf", &vi);

  printf("input final speed (mi/h) => ");
  scanf("%lf", &vf);

  printf("input time (minutes) => ");
  scanf("%d", &time);

  // 7. call the acceleration() and time_to_stop() function with their relevant arguments,
  //    print out the result
  a = acceleration(vi, vf, time);

  printf("the acceleration of the bullet train is: %lf mi/s²\n", a);

  printf("and the time it takes until it stops is: %.2lf second\n", time_to_stop(a, vf));

  return 0;
}
