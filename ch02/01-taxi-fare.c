/*
 
PROBLEM
  write a program that calculates taxi fare
 
INPUT
  > beginning odometer
  > ending odometer
 
OUTPUT
  > taxi fare

ALGORITHM
1. get beginning and ending of odometer from input
2. calculate travelled distance (ending - beginning)
3. display output taxi fare
 
IMPLEMENTATION
1. prompt the user to enter the beginning and the end of
   odometer reading
2. substract odometer ending by odometer beginning to find the
   travel distance
3. to find the taxi fare, multiply the travel distance by the rate
4. print the travel distance and taxi fare
 
*/

#include <stdio.h>

#define TAXI_RATE 1.50

int main() {
  double beginning, ending, taxi_fare,
         travel_distance;

  printf("TAXI FARE CALCULATOR\n");

  // 1. prompt the user to enter the beginning and the end of
  //    odometer reading
  printf("Enter beginning odometer reading => ");
  scanf("%lf", &beginning);

  printf("Enter ending odometer reading => ");
  scanf("%lf", &ending);

  // 2. substract odometer ending by odometer beginning to find the
  //    travel distance
  travel_distance = ending - beginning;

  // 3. to find the taxi fare, multiply the travel distance by the rate
  taxi_fare = travel_distance * TAXI_RATE;

  // 4. print the travel distance and taxi fare
  printf("You travelled a distance of %.1lf miles. At $%.2lf per mile,\nyour fare is $%.2lf\n",
      travel_distance, TAXI_RATE, taxi_fare);

  return 0;
}
