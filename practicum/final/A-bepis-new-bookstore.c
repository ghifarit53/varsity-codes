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

    int valid_cmd, unknown_cmd = 1;

    // ADD|X
    valid_cmd = strstr(cmd, "ADD|") != NULL;
    if (valid_cmd) {
      char *token = strtok(cmd, "|");
      token = strtok(NULL, "|");
      int add = atoi(token);

      if (strcmp(cmd, "ADD") == 0) {
        unknown_cmd = 0;
        for (int i = 0; i < add; i++) {
          add_book(shelf, tracker, &counter);
        }
        printf("Finish adding book(s).\n");
      }
    }

    // REMOVE|X
    valid_cmd = strstr(cmd, "REMOVE|") != NULL;
    if (valid_cmd) {

      char *token = strtok(cmd, "|");
      token = strtok(NULL, "|");
      int rm = atoi(token);

      if (strcmp(cmd, "REMOVE") == 0) {
        unknown_cmd = 0;
        for (int i = 0; i < rm; i++) {
          remove_book(shelf, tracker, &counter);
        }
        printf("Finish removing book(s).\n");
      }
    }

    // READ
    valid_cmd = strcmp(cmd, "READ") == 0;
    if (valid_cmd) {
      unknown_cmd = 0;
      read_shelf(shelf, tracker, &counter);
    }

    // BROWSE
    valid_cmd = strcmp(cmd, "BROWSE") == 0;
    if (valid_cmd) {
      unknown_cmd = 0;
      browse_shelf(&counter);
    }

    // RESET
    valid_cmd = strcmp(cmd, "RESET") == 0;
    if (valid_cmd) {
      unknown_cmd = 0;
      reset_shelf(shelf, tracker, &counter);
    }

    // EXIT
    valid_cmd = strcmp(cmd, "EXIT") == 0;
    if (valid_cmd) {
      unknown_cmd = 0;
      break;
    }

    // UNKNOWN COMMAND
    if (unknown_cmd) {
      printf("UNKNOWN COMMAND\n");
    }
  }
}
