/*
FIXME
[V] double print when ip address is the same
*/

#include <stdio.h>
#include <string.h>

typedef struct {
  int is_paired;
  int xx;
  int yy;
  int zz;
  int mm;
  char hostname[16];
} adress_t;

int main() {
  adress_t addresses[32];
  int counter = 0;

  while (1) {
    int xx, yy, zz, mm;
    char hostname[16];

    scanf("%d.%d.%d.%d %s", &xx, &yy, &zz, &mm, addresses[counter].hostname);

    if (xx == 0 && yy == 0 && xx == 0 && mm == 0 &&
        !(strcmp(addresses[counter].hostname, "none"))) {
      break;
    }

    addresses[counter].is_paired = 0;
    addresses[counter].xx = xx;
    addresses[counter].yy = yy;
    addresses[counter].zz = zz;
    addresses[counter].mm = mm;
    counter++;
  }

  for (int i = 0; i < counter; i++) {
    for (int j = 0; j < counter; j++) {
      if (j == i) {
        continue;
      }

      if (addresses[i].is_paired || addresses[j].is_paired) {
        continue;
      }

      if ((addresses[i].xx == addresses[j].xx) &&
          (addresses[i].yy == addresses[j].yy)) {
        addresses[i].is_paired = 1;
        addresses[j].is_paired = 1;
        printf("Machines %s and %s are on the same local network.\n",
               addresses[i].hostname, addresses[j].hostname);
      }
    }
  }
}
