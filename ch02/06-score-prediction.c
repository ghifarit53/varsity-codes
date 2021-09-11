/*

PROBLEM
	write a program that predicts the score needed on a final
	exam to achieve the desired grade in the course

INPUT
	> grade
	> minimum avg. required
	> current avg. in the course
	> how much the final weights to the course (in percentage)

OUTPUT
	> minimum score that must be achieved in final exam

ALGORITHM
	current avg. * current_% + final exam * final_% = minimum avg.

to find final exam score, turn the formula above into the following

	final exam = (minimum avg. - (current avg. * current_%)) / final_%

IMPLEMENTATION
1. create all the required variable
2. get all the required value from input and assign to
   their respective variables
3. given the final exam percentage, we know that current course percentage
   is 100 - final_exam in percentage, convert it to decimal form
4. convert the percentage into decimal form to make it easier to calculate
5. find the final exam prediction based on the algorithm
6. print the prediction out

*/

#include <stdio.h>

int main() {
	// 1. create all the required variable
	char grade;
	double minimum_avg,
				 current_avg,
				 final_weight,
				 course_weight,
				 final_exam_score;

	// 2. get all the required value from input and assign to
  //    their respective variables
	printf("Enter desired grade> ");
	scanf("%c", &grade);

	printf("Enter minimum average required> ");
	scanf("%lf", &minimum_avg);

	printf("Enter current average in course> ");
	scanf("%lf", &current_avg);

	printf("Enter how much the final counts\nas a percentage of the course grade> ");
	scanf("%lf", &final_weight);

	// 3. given the final exam percentage, we know that current course percentage
	//    is 100 - final_exam in percentage, convert it to decimal form
	final_weight /= 100;
	course_weight = 1 - final_weight;

	// 4. convert the percentage into decimal form to make it easier to calculate
	final_exam_score = (minimum_avg - (current_avg * course_weight)) / final_weight;

	// 5. find the final exam prediction based on the algorithm
	printf("You need a score of %.2lf on the final to get a %c.\n", final_exam_score, grade);

	return 0;
}
