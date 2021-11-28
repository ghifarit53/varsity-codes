#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SHELF_SIZE 10000000

typedef struct {
  char *title;
  float price;
} Book;

void add_book(Book shelf[], int tracker[], int *counter) {
  int num;
  scanf("%d", &num);
  getchar();

  // book title
  shelf[num].title = malloc(128 * sizeof(char));
  scanf("%[^\n]", shelf[num].title);

  // book price
  scanf("%f", &shelf[num].price);

  if (tracker[num] == 0) {
    (*counter)++;
    tracker[num] = 1;
  }
}

void remove_book(Book shelf[], int tracker[], int *counter) {
  int num;
  scanf("%d", &num);

  if (tracker[num] == 1) {
    tracker[num] = 0;
    (*counter)--;
    free(shelf[num].title);
  } else {
    printf("No book is on that shelve!\n");
  }
}

void read_shelf(Book shelf[], int tracker[], int *counter) {
  if (*counter == 0) {
    printf("Store is empty! Come back later.\n");
  } else {
    for (int i = 0; i < SHELF_SIZE; i++) {
      if (tracker[i] != 0) {
        printf("#%d\n", i);
        printf("Book Title\t: %s\n", shelf[i].title);
        printf("Book Price\t: $%.2f\n\n", shelf[i].price);
      }
    }
  }
}

void browse_shelf(int *counter) {
  if (*counter == 0) {
    printf("There are no books here.\n");
  } else if (*counter == 1) {
    printf("There is only 1 book here.\n");
  } else {
    printf("There are %d books here.\n", *counter);
  }
}

void reset_shelf(Book shelf[], int tracker[], int *counter) {
  for (int i = 0; i < SHELF_SIZE; i++) {
    if (tracker[i] == 1) {
      free(shelf[i].title);
      tracker[i] = 0;
    }
  }

  *counter = 0;
  printf("Reset successful.\n");
}

int main() {
  Book *shelf = malloc(SHELF_SIZE * sizeof(*shelf));
  int *tracker = malloc(SHELF_SIZE * sizeof(int)), counter = 0;

  while (1) {
    char cmd[16];
    scanf("%s", cmd);

    char *token = strtok(cmd, "|");

    if (strcmp(cmd, "ADD") == 0) { // ADD|X
      token = strtok(NULL, "|");
      int add = atoi(token);
      for (int i = 0; i < add; i++) {
        add_book(shelf, tracker, &counter);
      }
      printf("Finish adding book(s).\n");
    } else if (strcmp(cmd, "REMOVE") == 0) { // REMOVE|X
      token = strtok(NULL, "|");
      int rm = atoi(token);

      for (int i = 0; i < rm; i++) {
        remove_book(shelf, tracker, &counter);
      }
      printf("Finish removing book(s).\n");
    } else if (strcmp(cmd, "READ") == 0) { // READ
      read_shelf(shelf, tracker, &counter);
    } else if (strcmp(cmd, "BROWSE") == 0) { // BROWSE
      browse_shelf(&counter);
    } else if (strcmp(cmd, "RESET") == 0) { // RESET
      reset_shelf(shelf, tracker, &counter);
    } else if (strcmp(cmd, "EXIT") == 0) { // EXIT
      break;
    } else {
      printf("UNKNOWN COMMAND\n");
    }
  }
}
