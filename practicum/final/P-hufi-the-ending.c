#include <stdio.h>
#include <string.h>

void get_word(char sentence[], int w) {
  int words = 1, start = 0, end = 0;

  for (int i = 0; words < w; i++) {
    char c = sentence[i];
    if (c == ' ') {
      words++;
      start = i + 1;
    }
  }

  for (int i = start; i < strlen(sentence) + 1; i++) {
    char c = sentence[i];
    if (c == '\0' || c == ' ') {
      end = i;
      break;
    }
  }

  for (int i = start; i < end; i++) {
    printf("%c", sentence[i]);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  getchar(); // eats your space

  char sentences[n][151];

  for (int i = 0; i < n; i++) {
    scanf("%[^\n]s", sentences[i]);
    getchar(); // this too
  }

  int queries;
  scanf("%d", &queries);

  int s, q;
  for (int i = 0; i < queries; i++) {
    scanf("%d %d", &s, &q);
    get_word(sentences[s - 1], q);
    printf(i < queries - 1 ? " " : "\n");
  }
}
