/*

PROBLEM
  Given the value of the monthly payment obtained
  in Programming Project 1 and a certain hourly income
  of the student, write a program that calculates how many hours
  the student will need to work so as to pay
  every month's payment towards the laptop

INPUT
  > monthly payment
  > hourly income

OUTPUT
  > how many hours student will need to work so
    he can pay monthly payment

IMPLEMENTATION
1. prompt the user to enter monthly payment and hourly income
2. divide the monthly payment by the hourly income
3. print out the result

*/

#include <stdio.h>

int main() {
  double monthly_payment, hourly_income;

  printf("Enter monthly payment => $ ");
  scanf("%lf", &monthly_payment);

  printf("Enter hourly income => $ ");
  scanf("%lf", &hourly_income);

  double hours_of_work = monthly_payment / hourly_income;

  printf("You need to work %.2lf hours to pay your monthly payment\n",
         hours_of_work);

  return 0;
}
