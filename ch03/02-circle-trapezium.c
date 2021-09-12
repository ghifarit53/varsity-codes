/*

PROBLEM
  Write two functions, one that displays a circle and
  one that displays a trapezium. Use these functions
  to write a complete C program from the following outline:

ANALYSIS
  there's not much to do because
  the figure is hardcoded, so no input required

IMPLEMENTATION
1. create a function for drawing circle and trapezium,
     don't forget the escape sequence and space
2. call them 
*/

#include <stdio.h>

void draw_circle(void) {
  printf(
"         , - - ,\n"
"     , '         ' ,\n"
"   ,                ,\n"
"  ,                  ,\n"
" ,                    ,\n"
" ,                    ,\n"
" ,                    ,\n"
"  ,                  ,\n"
"   ,                ,\n"
"     ,            , \n"
"       ' - , ,  '\n");
}

void draw_trapezium(void) {
  printf(
"     _____________________\n"
"    /                     \\\n"
"   /                       \\\n"
"  /                         \\\n"
" /                           \\\n"
"/_____________________________\\\n");
}

int main() {
  draw_circle(); draw_trapezium();
  printf("\n\n");
  draw_circle(); draw_trapezium();
  return 0;
}
