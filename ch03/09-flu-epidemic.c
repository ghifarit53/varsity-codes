/*

PROBLEM
  Write a function that calculates and displays the number
  of cases predicted for each day number entered using the following formula

                      40000
  Cases(x) = ------------------------
              1 + 39999 (e^-0.24681)

INPUT
  > day number

OUTPUT
  > cases predicted

NOTES
use the 'math.h' header to get euler's number

IMPLEMENTATION
1. create a function case() that prompt user to input
   day number
2. plug day number into the formula and return the result
3. now create a main function that calls
   the function case() 3 times.
4. return the result

*/
