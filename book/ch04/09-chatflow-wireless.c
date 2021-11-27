#include <stdio.h>

int main() {
  const int offered_weekday_minutes = 600;
  int weekday_minutes, night_minutes, weekend_minutes,
      additional_weekday_minutes;

  printf("Enter weekday minutes> ");
  scanf("%d", &weekday_minutes);
  printf("Enter night minutes> ");
  scanf("%d", &night_minutes);
  printf("Enter weekend minutes> ");
  scanf("%d", &weekend_minutes);

  additional_weekday_minutes = weekday_minutes - offered_weekday_minutes;

  int weekly_bill = 3990; // in cent
  if (additional_weekday_minutes > 0) {
    weekly_bill += additional_weekday_minutes * 40;
  }

  int monthly_bill = weekly_bill * 4;
  double tax = (double)monthly_bill * (5.25 / 100);
  double total_bill = (double)monthly_bill + tax;

  printf("Weekday minutes\t\t\t%d mins\n", weekday_minutes);
  printf("Night minutes\t\t\t%d mins\n", night_minutes);
  printf("Weekend minutes\t\t\t%d mins\n", weekend_minutes);
  printf("Additional weekday minutes\t%d mins\n", additional_weekday_minutes);
  printf("Monthly pre-tax bill\t\t$ %2.lf\n", (double)monthly_bill / 100);
  printf("Average minutes cost\t\t$ %.2lf\n",
         (double)weekday_minutes * 4 / ((double)monthly_bill / 100));
  printf("Total tax\t\t\t$ %.2lf\n", tax / 100);
  printf("Total bill\t\t\t$ %.2lf\n", total_bill / 100);

  return 0;
}
