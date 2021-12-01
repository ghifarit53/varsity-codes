#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[25];
  int speed;
  float wingspan, length;
  char type, description[80];
} aircraft_t;

void display_menu(int *counter) {
  printf("========== AIRCRAFT DATABASE ==========");
  printf("\nLoaded %d aircraft(s) data", *counter);
  printf("\n1. Search based on name");
  printf("\n2. Search based on speed");
  printf("\n3. Search based on wingspan");
  printf("\n4. Search based on length");
  printf("\n5. Search based on type (Military/Civilian)");
  printf("\n99. Exit database");
  printf("\nEnter your choice> ");
}

int redo_search() {
  getchar();
  printf("Do another search? (y/n) ");
  char c;
  scanf("%c", &c);

  // to be saved to the breaker variable
  return (c == 'n' ? 0 : 1);
}

void display_aircraft_data(aircraft_t aircrafts[], int i) {
  printf("=================================\n");
  printf("Name        : %s", aircrafts[i].name);
  printf("Speed       : %d\n", aircrafts[i].speed);
  printf("Wingspan    : %.2f\n", aircrafts[i].wingspan);
  printf("Length      : %.2f\n", aircrafts[i].length);
  printf("Type        : %s\n",
         aircrafts[i].type == 'M' ? "Military" : "Civilian");
  printf("Description : %s", aircrafts[i].description);
}

void search_name(aircraft_t aircrafts[], char name[], int *counter) {
  int found = 0;
  for (int i = 0; i < *counter; i++) {
    if (strstr(aircrafts[i].name, name) != NULL) {
      display_aircraft_data(aircrafts, i);
      found++;
    }
  }

  if (found == 0) {
    printf("Couldn't find any aircraft with the keyword '%s'\n", name);
  } else {
    printf("=================================\n");
    printf("Found %d from the total of %d aircrafts data\n", found, *counter);
  }
}

void search_speed(aircraft_t aircrafts[], int speed, int *counter) {
  int found = 0;
  for (int i = 0; i < *counter; i++) {
    if (aircrafts[i].speed == speed) {
      display_aircraft_data(aircrafts, i);
      found++;
    }
  }

  if (found == 0) {
    printf("Couldn't find any aircraft with speed '%d'\n", speed);
  } else {
    printf("=================================\n");
    printf("Found %d from the total of %d aircrafts data\n", found, *counter);
  }
}

void search_wingspan(aircraft_t aircrafts[], float wingspan, int *counter) {
  int found = 0;
  for (int i = 0; i < *counter; i++) {
    if (aircrafts[i].wingspan == wingspan) {
      display_aircraft_data(aircrafts, i);
      found++;
    }
  }

  if (found == 0) {
    printf("Couldn't find any aircraft with wingspan '%.2f'\n", wingspan);
  } else {
    printf("=================================\n");
    printf("Found %d from the total of %d aircrafts data\n", found, *counter);
  }
}

void search_length(aircraft_t aircrafts[], float length, int *counter) {
  int found = 0;
  for (int i = 0; i < *counter; i++) {
    if (aircrafts[i].length == length) {
      display_aircraft_data(aircrafts, i);
      found++;
    }
  }

  if (found == 0) {
    printf("Couldn't find any aircraft with length '%.2f'\n", length);
  } else {
    printf("=================================\n");
    printf("Found %d from the total of %d aircrafts data\n", found, *counter);
  }
}

void search_type(aircraft_t aircrafts[], char type, int *counter) {
  int found = 0;
  for (int i = 0; i < *counter; i++) {
    if (aircrafts[i].type == type) {
      display_aircraft_data(aircrafts, i);
      found++;
    }
  }

  if (found == 0) {
    printf("Couldn't find any aircraft with type '%s'\n",
           type == 'M' ? "Military" : "Civilian");
  } else {
    printf("=================================\n");
    printf("Found %d from the total of %d aircrafts data\n", found, *counter);
  }
}

int main() {
  FILE *file;
  int extract = 0, counter = 0;
  char *buff = NULL;
  aircraft_t *aircrafts = malloc(44 * sizeof(*aircrafts));

  char *token;
  file = fopen("files/aircrafts_data.txt", "r");

  size_t len = 0;
  size_t read;

  if (file == NULL) {
    printf("ERROR: Couldn't open file!\n");
    exit(1);
  }

  // ===================
  // EXTRACTION PROCESS
  // ===================

  // using 'continue' here for every extraction steps, because we want to make
  // sure that we go to the next line
  while ((read = getline(&buff, &len, file)) != -1) {
    if (extract == 0) { // extract name
      strcpy(aircrafts[counter].name, buff);
      extract++;
      continue; // make our loop go to the next line in file
    }

    if (extract == 1) { // extract speed
      aircrafts[counter].speed = atoi(buff);
      extract++;
      continue;
    }

    if (extract == 2) {
      // all the data here are on the same line, separated by space, so strtok()
      // could be used

      // extract wingspan
      token = strtok(buff, " ");
      aircrafts[counter].wingspan = atof(token);

      // extract length
      token = strtok(NULL, " ");
      aircrafts[counter].length = atof(token);

      // extract type
      token = strtok(NULL, " ");
      aircrafts[counter].type = token[0];

      extract++;
      continue;
    }

    if (extract == 3) { // extract description
      strcpy(aircrafts[counter].description, buff);
      extract++;
      continue;
    }

    extract = 0; // reset our extract
    counter++;   // increase our array of aircraft index
    continue;    // for skipping empty line
  }

  fclose(file);

  // ===============
  // SEARCH PROCESS
  // ===============

  // increase counter because idk why its always -1
  counter++;
  // for easier control over the loop
  int breaker = 1;

  while (breaker) {
    display_menu(&counter);
    int choice;
    scanf("%d", &choice);
    getchar();

    switch (choice) {
    case 1:
      printf("Enter name> ");
      char name[25];
      scanf("%[^\n]", name);
      search_name(aircrafts, name, &counter);
      breaker = redo_search();
      break;
    case 2:
      printf("Enter speed> ");
      int speed;
      scanf("%d", &speed);
      search_speed(aircrafts, speed, &counter);
      breaker = redo_search();
      break;
    case 3:
      printf("Enter wingspan> ");
      float wingspan;
      scanf("%f", &wingspan);
      search_wingspan(aircrafts, wingspan, &counter);
      breaker = redo_search();
      break;
    case 4:
      printf("Enter length> ");
      float length;
      scanf("%f", &length);
      search_length(aircrafts, length, &counter);
      breaker = redo_search();
      break;
    case 5:
      printf("Enter type> ");
      char type;
      scanf("%c", &type);
      search_type(aircrafts, type, &counter);
      breaker = redo_search();
      break;
    case 99:
      breaker = 0;
      break;
    default:
      printf("ERROR: Uknown choice!\n\n");
    }
  }
}
