#include <stdio.h>

int fun1() {
  char input;

  scanf(" %c", &input);

  if (input == 'T') {
    return 1;
  } else if (input == 'F') {
    return 0;
  }

  return 0;
}

int fun2() {
  printf("fun2 executed\n");
  return 1;
}

int main() {
  printf("Testing &&\n");
  if (fun1() && fun2()) {
    printf("Test of && complete\n");
  }

  printf("Testing ||\n");
  if (fun1() || fun2()) {
    printf("Test of || complete\n");
  }

  return 0;
}
