#include <stdio.h>

int main() {
  int n_of_rooms, room_id, rooms[10] = {0}, most_rooms = 0;

  scanf("%d", &n_of_rooms);

  for (int i = 0; i < n_of_rooms; i++) {
    scanf("%d", &room_id);
    rooms[room_id]++;
  }

  for (int i = 0; i < 10; i++) {
    if (rooms[i] >= most_rooms) {
      most_rooms = rooms[i];
    }
  }

  printf("%d\n", n_of_rooms - most_rooms);
}
