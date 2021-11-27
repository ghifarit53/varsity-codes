// prapatan kenjeran
#include <stdio.h>

int main() {
  const int red = 20, ylw = 5, grn = 60, one_cycle = red + ylw + grn,
            car_passing_when_green = grn / 5;

  int cars_front, cars_behind, time;

  scanf("%d %d %d", &cars_front, &cars_behind, &time);

  // to make calculation easier
  int cars_front_plus_mine = cars_front + 1;

  // time (in second) needed for one cycle
  int cycle_count = time / one_cycle;

  // if there is still time for even one incomplete cycle
  int time_left = time % one_cycle;

  // can we still manage to get green in the remaining time? use
  // ternary to find out
  int green_time_left = (time_left >= red + ylw) ? time_left - (red + ylw) : 0;

  // how much car can pass in the cycles
  int car_passed = cycle_count * car_passing_when_green;

  // how many cars left in front of mine including mine
  int cars_left_front_plus_mine = cars_front_plus_mine - car_passed;

  // if there's still time left for a car to pass green
  if (green_time_left >= 5) {
    // cars in front of me including me can still pass
    cars_left_front_plus_mine -= green_time_left / 5;
  }

  // total cars that still on the road
  int total_cars_left = cars_left_front_plus_mine + cars_behind;

  // cars can't be negative right?
  // so if the result is negative, make it zero
  // means no cars are left
  if (total_cars_left < 0) {
    total_cars_left += (-1 * total_cars_left);
  }

  // if there is even still 1 cars (meaning it's mine), then I couldn't pass
  // green
  if (cars_left_front_plus_mine > 0) {
    printf("NO! ");
  } else {
    printf("YES! ");
  }

  printf("%d\n", total_cars_left);
  return 0;
}
