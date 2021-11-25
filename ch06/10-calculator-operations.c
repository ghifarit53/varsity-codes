#include <stdio.h>

void display_info() {
  printf("1: Addition\n");
  printf("2: Substraction\n");
  printf("3: Multiplication\n");
  printf("4: Division\n");
  printf("5: Factorial\n");
  printf("6: Quit\n");
  printf("Enter the choice => ");
}

void add(int *a, int *b, int *res) { *res = *a + *b; }
void sub(int *a, int *b, int *res) { *res = *a - *b; }
void mul(int *a, int *b, int *res) { *res = *a * *b; }
void div(int *a, int *b, int *res) { *res = *a / *b; }

void fac(int *n, int *res) {
  for (int i = 1; i < *n + 1; i++) {
    *res = *res * i;
  }
}

int main() {
  int a, b, choice, res;

  display_info();
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("Enter the two number => ");
    scanf("%d, %d", &a, &b);
    add(&a, &b, &res);
    printf("Sum => %d\n", res);
    break;
  case 2:
    printf("Enter the two number => ");
    scanf("%d, %d", &a, &b);
    sub(&a, &b, &res);
    printf("Sub => %d\n", res);
    break;
  case 3:
    printf("Enter the two number => ");
    scanf("%d, %d", &a, &b);
    mul(&a, &b, &res);
    printf("Mul => %d\n", res);
    break;
  case 4:
    printf("Enter the two number => ");
    scanf("%d, %d", &a, &b);
    div(&a, &b, &res);
    printf("Div => %d\n", res);
    break;
  case 5:
    printf("Enter n => ");
    scanf("%d", &a);
    res = 1;
    fac(&a, &res);
    printf("Fac => %d\n", res);
  case 6:
    break;
  default:
    printf("Error: not a valid choice!\n");
    break;
  }
}
