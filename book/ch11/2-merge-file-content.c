#include <stdio.h>

int main() {
  FILE *file1, *file2;
  char buff1[256], buff2[256];

  file1 = fopen("files/text1.txt", "r");
  file2 = fopen("files/text2.txt", "r");

  // using fscanf (file, format (just like scanf), and buffer (the variable to
  // save the text to))
  /* fscanf(file1, "%[^\n]", buff1);
  fscanf(file2, "%[^\n]", buff2); */

  // or using fgets(buffer, max length, file)
  fgets(buff1, 256, file1);
  fgets(buff2, 256, file2);

  // printf like usual
  printf("%s", buff2);
  printf("%s", buff1);

  fclose(file1);
  fclose(file2);
}
