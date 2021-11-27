#include <stdio.h>
#include <string.h>

typedef struct {
  char title[31];
  char author[31];
  int page;
  int price;
} Book;

int main() {
  int opt, counter = 0, breaker = 1; // counter also act as index
  Book books[100];                   // idk how many book will be added

  // some temporary variables
  char tmpstr[31], tmp;

  while (breaker) {
    scanf("%d", &opt);

    switch (opt) {
    case 1:
      // book's title
      scanf("%c", &tmp);
      scanf("%[^\n]", tmpstr);
      strcpy(books[counter].title, tmpstr);

      // book's author
      scanf("%c", &tmp);
      scanf("%[^\n]", tmpstr);
      strcpy(books[counter].author, tmpstr);

      // book's pages
      scanf("%d", &books[counter].page);

      // book's price
      scanf("%d", &books[counter].price);

      // increase our book count
      counter++;
      break;
    case 2:
      for (int i = 0; i < counter; i++) {
        printf("book name = %s\n", books[i].title);
        printf("author name = %s\n", books[i].author);
        printf("pages = %d\n", books[i].page);
        printf("price = %.2lf\n", (double)books[i].price);
      }
      break;
    case 3:
      printf("No of books in library : %d\n", counter);
      break;
    case 4:
      breaker = 0;
      break;
    }
  }
}
