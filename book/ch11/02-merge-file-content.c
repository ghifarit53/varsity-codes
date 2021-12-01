#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *file1, *file2;
  char buff1[256], buff2[256];

  file1 = fopen("files/text1.txt", "r");
  file2 = fopen("files/text2.txt", "r");

  // or using fgets(buffer, max length, file)
  fgets(buff1, 256, file1);
  fgets(buff2, 256, file2);

  // create a new file for merging
  FILE *file3 = fopen("files/text3.txt", "wb");

  if (file1 != NULL || file2 != NULL) {
    fwrite(buff2, strlen(buff2), 1, file3);
    fwrite(buff1, strlen(buff1), 1, file3);
  }

  // close all of them
  fclose(file3);
  fclose(file1);
  fclose(file2);

  // check whether our files is successfully merged by re-reading them again
  // tis works, but still going to find what size_t actually is
  FILE *file4 = fopen("files/text3.txt", "rb");
  char *buff3 = NULL;
  size_t len = 0;
  size_t read;

  if (file4 == NULL) {
    exit(1);
  }

  while ((read = getline(&buff3, &len, file4)) != -1) {
    printf("%s", buff3);
  }
}
