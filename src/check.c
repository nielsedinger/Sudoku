// check.c
// Author: Niels Edinger <st172126@stud.uni-stuttgart.de>

#include<stdbool.h>
#include"sudokutools.h"

bool sameSquare(int sudoku[][9], int candidate, int arrayIndexI, int arrayIndexJ) {

	bool ans = false;

	if (arrayIndexJ < 3) { arrayIndexJ = 0; }

	else if (arrayIndexJ < 6 && arrayIndexJ > 2) { arrayIndexJ = 3; }

	else { arrayIndexJ = 6; }
		
	if (arrayIndexI < 3) { arrayIndexI = 0; }

	else if (arrayIndexI < 6 && arrayIndexI > 2) { arrayIndexI = 3; }
	
	else { arrayIndexI = 6;	}
	
	for (short i = arrayIndexI; i < arrayIndexI + 3; i++) {
		for (short j = arrayIndexJ; j < arrayIndexJ + 3; j++) {
			if (sudoku[i][j] == candidate) {
				ans = true;
			}
		}
	}
	
	return ans;
}

bool sameRow(int sudoku[][9], int candidate, int arrayIndexJ) {

	bool ans = false;

	for (int j = 0; j < 9; j++) {
		if (sudoku[j][arrayIndexJ] == candidate) { ans = true; }
	}
	
	return ans;
}

bool sameColumn(int sudoku[][9], int candidate, int arrayIndexI) {
	
	bool ans = false;
	for (int i = 0; i < 9; i++) {
		if (sudoku[arrayIndexI][i] == candidate) { ans = true; }
	}
	
	return ans;
}

bool checkPosition(int sudoku[][9], int candidate, int arrayIndexI, int arrayIndexJ) {

	if (!sameSquare(sudoku, candidate, arrayIndexI, arrayIndexJ)
	&& !sameRow(sudoku, candidate, arrayIndexJ)
	&& !sameColumn(sudoku, candidate, arrayIndexI)) { return true; }
	
	else { return false; }
}