#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SHELF_SIZE 4444

typedef struct {
  char title[128];
  double price;
} Book;

int main() {
  Book shelf[SHELF_SIZE];
  int shelf_tracker[SHELF_SIZE] = {0};
  int book_counter = 0, breaker = 1;

  while (breaker) {
    char opt[32];
    scanf("%s", opt);

    char *is_valid_opt; // for checking substring in the option
    // prevent 'READA', 'BROWSEA', 'EXITA' to be considered a valid command
    int is_valid_len;
    is_valid_opt = strstr(opt, "ADD");

    // parsing
    // ADD|X
    if (is_valid_opt && opt[3] == '|') {
      // extract number from opt
      int to_add;
      sscanf(opt, "%*[^0123456789]%d", &to_add);

      // start adding books
      for (int i = 0; i < to_add; i++) {
        // shelf num
        int shelf_num;
        scanf("%d", &shelf_num);

        // book title
        char tmpstr[128], tmp;
        scanf("%c", &tmp);
        scanf("%[^\n]", tmpstr);
        strcpy(shelf[shelf_num].title, tmpstr);

        // book price
        scanf("%lf", &shelf[shelf_num].price);

        // check whether it's an empty shelf
        // if yes, then add book count, and set it to 1
        if (shelf_tracker[shelf_num] == 0) {
          book_counter++;
          shelf_tracker[shelf_num] = 1;
        }
      }
      printf("Finish adding book(s).\n");
    } else {
      // REMOVE|X
      is_valid_opt = strstr(opt, "REMOVE");

      if (is_valid_opt && opt[6] == '|') {
        // extract number of books to remove from opt
        int to_remove;
        sscanf(opt, "%*[^0123456789]%d", &to_remove);

        for (int i = 0; i < to_remove; i++) {
          int tmpint;
          scanf("%d", &tmpint);

          // if the shelf is not empty
          if (shelf_tracker[tmpint] == 1) {
            // empty it and reduce counter
            shelf_tracker[tmpint] = 0;
            book_counter--;
          } else {
            printf("No book is on that shelve!\n");
          }
        }
        printf("Finish removing book(s).\n");
        if (book_counter < 0) {
          book_counter = 0;
        }
      } else {
        // READ
        is_valid_opt = strstr(opt, "READ");
        is_valid_len = strlen(opt) == 4 ? 1 : 0;

        if (is_valid_opt && is_valid_len) {
          if (book_counter == 0) { // empty store
            printf("Store is empty! Come back later.\n");
          } else {
            for (int i = 0; i < SHELF_SIZE; i++) {
              if (shelf_tracker[i] == 1) {
                printf("#%d\n", i);
                printf("Book Title\t: %s\n", shelf[i].title);
                printf("Book Price\t: $%.2lf\n\n", shelf[i].price);
              }
            }
          }
        } else {
          // BROWSE
          is_valid_opt = strstr(opt, "BROWSE");
          is_valid_len = strlen(opt) == 6 ? 1 : 0;

          if (is_valid_opt && is_valid_len) {
            if (book_counter == 0) {
              printf("There are no books here.\n");
            } else if (book_counter == 1) {
              printf("There is only 1 book here.\n");
            } else {
              printf("There are %d books here.\n", book_counter);
            }
          } else {
            // EXIT
            is_valid_opt = strstr(opt, "EXIT");
            is_valid_len = strlen(opt) == 4 ? 1 : 0;

            if (is_valid_opt && is_valid_len) {
              breaker = 0;
            } else {
              // unknown command
              printf("UNKNOWN COMMAND\n");
            }
          }
        }
      }
    }
  }
}
