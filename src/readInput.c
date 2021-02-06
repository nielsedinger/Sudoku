// readInput.c
// Author: Niels Edinger <st172126@stud.uni-stuttgart.de>

#include<stdio.h>
#include<stdlib.h>
#include"sudokutools.h"

#define DATEINAME "grid.txt"

void readInputData(int s[][9]) {
  FILE *fp = fopen(DATEINAME,"r");
  char buffer[18];
  fgets(buffer, 18, fp);
  int i = 0;
  while(fgets(buffer, 18, fp) != NULL && i < 9) {
    if (sscanf(buffer, "%d %d %d %d %d %d %d %d %d\n",
              &s[i][0], &s[i][1], &s[i][2], 
              &s[i][3], &s[i][4], &s[i][5], 
              &s[i][6], &s[i][7], &s[i][8]) != 9) {
      continue;
    }
    ++i;
  }
  fclose(fp);
}