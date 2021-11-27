/*

PROBLEM
  Write a program that predicts how many whole sections of a batch
  would need to be created given the number of students enrolled in the batch.
  Assume that each section accommodates 30 students.

INPUT
  > numbers of the students enrolled (int)

OUTPUT
  > sections that will be required
  > students that will be left over

ALGORITHM
  students / 30 => number of required sections
  students % 30 => number of students left

IMPLEMENTATION
  1. get the number of the students enrolled from input
  2. use the algorithm to find required sections and students left
  3. print out the result

*/

#include <stdio.h>

#define SECTION_ACCOMMODATION 30

int main() {
  int students, sections, students_left;

  // 1. get the number of the students enrolled from input
  printf("Enter the number of students enrolled: ");
  scanf("%d", &students);

  // 2. use the algorithm to find required sections and students left
  sections = students / SECTION_ACCOMMODATION;
  students_left = students % SECTION_ACCOMMODATION;

  // 3. print out the result
  printf("number of sections required: %d\nnumber of students left: %d\n",
      sections, students_left);
  
  return 0;
}
