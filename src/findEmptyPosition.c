// findEmptyPosition.c
// Author: Niels Edinger <st172126@stud.uni-stuttgart.de>

#include<stdbool.h>
#include"sudokutools.h"

bool findEmptyPosition(int sudoku[][9], int *row, int *col) {
	
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			*row = i;
			*col = j;
			if (sudoku[*row][*col] == 0) {
				return true;
			}
		}
	}

	return false; // no unasigned gaps -> finish
}