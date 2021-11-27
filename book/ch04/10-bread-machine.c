#include <stdio.h>

int baking_time(char bread_type, int is_doubled_loaf_size,
                int is_manual_baking_technique) {

  double prim_kneading, prim_rising, sec_kneading, sec_rising, loaf_shaping,
      final_rising, baking, cooling;

  switch (bread_type) {
  case 'W':
    prim_kneading = 15;
    prim_rising = 60;
    sec_kneading = 18;
    sec_rising = 20;
    loaf_shaping = 2;

    printf("Primary kneading\t%.1lf mins\n", prim_kneading);
    printf("Primary rising\t\t%.1lf mins\n", prim_rising);
    printf("Secondary kneading\t%.1lf mins\n", sec_kneading);
    printf("Secondary rising\t%.1lf mins\n", sec_rising);
    printf("Loaf shaping\t\t%.1lf seconds\n", loaf_shaping);

    if (is_manual_baking_technique) {
      printf("Remove the dough for manual baking...\n");
    } else {
      final_rising = 75;
      printf("Final rising\t\t%.1lf mins\n", final_rising);

      if (is_doubled_loaf_size) {
        baking = 45 + (45 * 0.5);
        printf("Baking\t\t\t%.1lf mins\n", baking);
      } else {
        baking = 45;
        printf("Baking\t\t\t%.1lf mins\n", baking);
      }

      cooling = 30;
      printf("Cooling\t\t\t%.1lf mins\n", cooling);
    }
    break;

  case 'S':
    prim_kneading = 20;
    prim_rising = 60;
    sec_kneading = 33;
    sec_rising = 30;
    loaf_shaping = 2;

    printf("Primary kneading\t%.1lf mins\n", prim_kneading);
    printf("Primary rising\t\t%.1lf mins\n", prim_rising);
    printf("Secondary kneading\t%.1lf mins\n", sec_kneading);
    printf("Secondary rising\t%.1lf mins\n", sec_rising);
    printf("Loaf shaping\t\t%.1lf seconds\n", loaf_shaping);

    if (is_manual_baking_technique) {
      printf("Remove the dough for manual baking...\n");
    } else {
      final_rising = 75;
      printf("Final rising\t\t%.1lf mins\n", final_rising);

      if (is_doubled_loaf_size) {
        baking = 35 + (35 * 0.5);
        printf("Baking\t\t\t%.1lf mins\n", baking);
      } else {
        baking = 35;
        printf("Baking\t\t\t%.1lf mins\n", baking);
      }

      cooling = 30;
      printf("Cooling\t\t\t%.1lf mins\n", cooling);
    }
    break;
  }

  return 0;
}

int display_instruction() {
  char bread_type, is_doubled_loaf_size, is_manual_baking_technique;

  printf("===== BAKING MACHINE =====\n\n");
  printf("[S] Sweet\n[W] White\n");
  printf("Enter your type of bread: ");
  scanf(" %c", &bread_type);

  printf("Double the loaf size? (y/n) ");
  scanf(" %c", &is_doubled_loaf_size);
  is_doubled_loaf_size = (is_doubled_loaf_size == 'y') ? 1 : 0;

  printf("Use manual techniques for baking? (y/n) ");
  scanf(" %c", &is_manual_baking_technique);
  is_manual_baking_technique = (is_manual_baking_technique == 'y') ? 1 : 0;

  int total_baking_time =
      baking_time(bread_type, is_doubled_loaf_size, is_manual_baking_technique);

  return 0;
}

int main() {
  display_instruction();
  return 0;
}
