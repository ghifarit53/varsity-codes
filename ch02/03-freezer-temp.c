/*

PROBLEM
  program that estimates the temperature in a freezer (in celcius)
  given the elapsed time (in hours) since a power failure
 
  use the following formula:
 
           4t²
    T = --------- - 20
          t + 2
 
INPUT
  > time (in hours)
    if user enters '2 30', it needs to be converted
    to 2.5
  
OUTPUT
  > temperature in celcius (using the provided formula)
 
IMPLEMENTATION
1. get time from input
2. if the input contains minute (ex: 2 30), convert it
   to floating point (ex: 2.5)
3. run the input through the provided formula
4. print the result out

*/

#include <stdio.h>

int main() {
	double hour, minute, time_in_hours, temperature;

  // 1. get time from input
	printf("Enter time (hh mm) => ");
	scanf("%lf %lf", &hour, &minute);


  // 2. if the input contains minute (ex: 2 30), convert it
  //   to floating point (ex: 2.5)
	time_in_hours = hour + (minute / 60);


	// 3. run the input through the provided formula
	temperature = ((4 * time_in_hours * time_in_hours) / (time_in_hours + 2)) - 20;

	// 4. print the result out
	printf("The temperature since a power failure is %.2lf°C\n", temperature);

	return 0;
}
