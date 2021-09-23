#include <stdio.h>

#define STUDENT_DISCOUNT 0.2 // 20% student discount
#define SALES_TAX 0.05       // 5% sales tax

int main() {
  double price;
  printf("Enter your total purchase price: $ ");
  scanf("%lf", &price);

  char is_student;
  printf("Are you a student (y/n) ? ");
  scanf(" %c", &is_student);
  is_student = (is_student == 121) ? 1 : 0;

  double final_price, tax;

  if (is_student) {
    double discount = price * STUDENT_DISCOUNT;
    double discounted_price = price - discount;
    tax = discounted_price * SALES_TAX;
    final_price = discounted_price + tax;

    printf("Total purchases\t\t\t$ %.2lf\n", price);
    printf("Student's discount (20%%)\t%.2lf\n", discount);
    printf("Discounted total\t\t%.2lf\n", discounted_price);
    printf("Salex tax (5%%)\t\t\t%.2lf\n", tax);
    printf("Total\t\t\t\t$ %.2lf\n", final_price);
  } else {
    tax = price * SALES_TAX;
    final_price = price + tax;

    printf("Total purchases\t\t$ %.2lf\n", price);
    printf("Sales tax (5%%)\t\t%.2lf\n", tax);
    printf("Total\t\t\t$ %.2lf\n", final_price);
  }

  return 0;
}
