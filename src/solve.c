// solve.c
// Author: Niels Edinger

#include<stdbool.h>
#include"sudokutools.h"

bool solveSudoku(int sudoku[][9]) {

	int row = 0;
	int col = 0;
	int *r = &row;
	int *c = &col;

	if (!findEmptyPosition(sudoku, r, c)) { return true; } // Sudoku is solved.

	for (int num = 1; num <= 9; ++num) {
		row = *r;
		col = *c;

		if(checkPosition(sudoku, num, row, col)) {

			sudoku[row][col] = num;
			
			if (solveSudoku(sudoku)) { return true; }
			
			sudoku[row][col] = 0;
		}
	}

	return false;
}
