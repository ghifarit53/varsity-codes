#include <stdio.h>

typedef struct {
  char code[20], name[20];
  int price;
} Item;

int main() {
  int n;
  scanf("%d", &n);

  Item items[n];

  for (int i = 0; i < n; i++) {
    scanf("%s %s %d", items[i].code, items[i].name, &items[i].price);
  }

  int transaction = 0, items_to_buy;
  while (scanf("%d", &items_to_buy) != EOF) {
    int cheapest = items[0].price, most_expensive = items[0].price,
        cheapest_id = 0, most_expensive_id = 0, total_price = 0;

    for (int i = 0; i < items_to_buy; i++) {
      total_price += items[i].price;

      // because we already set the cheapest and most expensive
      // to index 0, we don't need to check them, but we still need
      // to get the price, so that's why total_price is placed
      // before this if
      if (i == 0) {
        continue;
      }

      // change the value of the most expensive and cheapest
      // and get their index number
      if (items[i].price > most_expensive) {
        most_expensive = items[i].price;
        most_expensive_id = i;
      }

      if (items[i].price < cheapest) {
        cheapest = items[i].price;
        cheapest_id = i;
      }
    }

    // increase transaction count
    transaction++;

    printf("=====================================\n\n");
    printf("No. Transaksi    : %d\n", transaction);
    printf("Total item       : %d\n", items_to_buy);
    printf("Item termurah    : %s %s\n", items[cheapest_id].code,
           items[cheapest_id].name);
    printf("Item termahal    : %s %s\n", items[most_expensive_id].code,
           items[most_expensive_id].name);
    printf("Total pembayaran : %d\n\n", total_price);
  }
  printf("=====================================\n");
}
