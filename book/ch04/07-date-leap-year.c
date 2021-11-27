#include <stdio.h>

int main() {
  const int jan = 31, mar = 31, apr = 30, may = 31, jun = 30, jul = 31,
            aug = 31, sep = 30, oct = 31, nov = 30, dec = 31;
  int feb = 28;
  int day, month, year;

  printf("Enter date in the form of dd mm yyyy => ");
  scanf("%d %d %d", &day, &month, &year);

  int is_leap_year =
      ((year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)) ? 1 : 0;

  if (is_leap_year) {
    feb += 1;
  }

  int total_days = 0;

  switch (month) {
  case 1:
    total_days = jan - (jan - day);
    break;
  case 2:
    total_days = jan + feb - (feb - day);
    break;
  case 3:
    total_days = jan + feb + mar - (mar - day);
    break;
  case 4:
    total_days = jan + feb + mar + apr - (apr - day);
    break;
  case 5:
    total_days = jan + feb + mar + apr + may - (may - day);
    break;
  case 6:
    total_days = jan + feb + mar + apr + may + jun - (jun - day);
    break;
  case 7:
    total_days = jan + feb + mar + apr + may + jun + jul - (jul - day);
    break;
  case 8:
    total_days = jan + feb + mar + apr + may + jun + jul + aug - (aug - day);
    break;
  case 9:
    total_days =
        jan + feb + mar + apr + may + jun + jul + aug + sep - (sep - day);
    break;
  case 10:
    total_days =
        jan + feb + mar + apr + may + jun + jul + aug + sep + oct - (oct - day);
    break;
  case 11:
    total_days = jan + feb + mar + apr + may + jun + jul + aug + sep + oct +
                 nov - (nov - day);
    break;
  case 12:
    total_days = jan + feb + mar + apr + may + jun + jul + aug + sep + oct +
                 nov + dec - (dec - day);
    break;
  }

  printf("day %d\n", total_days);

  return 0;
}
