/*

PROBLEM
  Write a program to help you figure out what your monthly payment will be,
  given the car’s purchase price, the monthly interest rate, and
  the time period over which you will pay back the loan

INPUT
  > purchase price
  > down payment
  > annual interest rate
  > total number of payments (usually 36, 48, or 60)

OUTPUT
  > the amount borrowed
  > the monthly payment ($X.XX)

FORMULA

                 iP
payment = ----------------
           1 - (1 + i)^-n

where
P -> principal (amount borrowed)
i -> monthly interest rate
n -> total number of payments

NOTES
  > to find monthly interest, divide annual interest by 12

IMPLEMENTATION
1. we'll need pow() function from 'math.h', so include it first
2. create a function named payment() and apply the above formula
3. create a main function and prompts the user to enter all the requirements
4. monthly interest can be found by dividing annual interest by 12
5. amount borrowed is the price of the car minus the amount of down payment
6. monthly payment can be found using the payment() function
7. print amount borrowed and monthly payment
*/

// 1. we'll need pow() function from 'math.h', so include it first
#include <stdio.h>
#include <math.h>

// 2. create a function named payment() and apply the above formula
double payment(double P, double i, int n) {
  return ((i * P) / (1 - pow(1 + i, -1 * (double)n)));
}

// 3. create a main function and prompts the user to enter all the requirements
int main() {
  double purchase_price, down_payment, annual_interest_rate;
  int total_num_of_payments;

  printf("Enter purchase price ($) > ");
  scanf("%lf", &purchase_price);

  printf("Enter the amount of down payment ($) > ");
  scanf("%lf", &down_payment);

  printf("Enter annual interest rate > ");
  scanf("%lf", &annual_interest_rate);

  printf("Enter total number of payment (usually 36, 48, or 60) > ");
  scanf("%d", &total_num_of_payments);

  // 4. monthly interest can be found by dividing annual interest by 12
  double monthly_interest_rate = annual_interest_rate / 12;

  // 5. amount borrowed is the price of the car minus the amount of down payment
  double amount_borrowed = purchase_price - down_payment;

  // 6. monthly payment can be found using the payment() function
  double monthly_payment = payment(amount_borrowed, monthly_interest_rate, total_num_of_payments);

  // 7. print amount borrowed and monthly payment
  printf("The amount borrowed is $%.2lf\n", amount_borrowed);
  printf("And your monthly payment will be $%.2lf\n", monthly_payment);

  return 0;
}
