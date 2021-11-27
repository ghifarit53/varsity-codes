#include <stdio.h>
#include <string.h>

#define elif else if

typedef struct {
  char name[32];
  int score_a, score_b, score_c, total_score;
} Team;

void swap(Team *a, Team *b) {
  Team tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  int n;
  scanf("%d", &n);

  Team teams[n];

  for (int i = 0; i < n; i++) {
    int a, b, c;
    scanf("%s %d %d %d", teams[i].name, &a, &b, &c);
    teams[i].score_a = a;
    teams[i].score_b = b;
    teams[i].score_c = c;
    teams[i].total_score = a + b + c;
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (teams[i].total_score < teams[j].total_score) {
        swap(&teams[i], &teams[j]);
      } else if (teams[i].total_score == teams[j].total_score) {
        if (teams[i].score_a < teams[j].score_a) {
          swap(&teams[i], &teams[j]);
        } else if (teams[i].score_a == teams[j].score_a) {
          if (teams[i].score_b < teams[j].score_b) {
            swap(&teams[i], &teams[j]);
          } else if (teams[i].score_b == teams[j].score_b) {
            if (teams[i].score_c < teams[j].score_c) {
              swap(&teams[i], &teams[j]);
            } else if (teams[i].score_c == teams[j].score_c) {
              if (strcmp(teams[i].name, teams[j].name) > 0) {
                swap(&teams[i], &teams[j]);
              }
            }
          }
        }
      }
    }
  }

  // print
  for (int i = 0; i < n; i++) {
    printf("%s %d %d %d %d\n", teams[i].name, teams[i].score_a,
           teams[i].score_b, teams[i].score_c, teams[i].total_score);
  }
}
