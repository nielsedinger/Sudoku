// main.c
// Author: Niels Edinger <st172126@stud.uni-stuttgart.de>
// Simple programm that solves sudokus using brute force and backtracking algorithm

#include"sudokutools.h"

int main(void) {
	int s1[9][9] = { 0 };
	readInputData(s1);
	printSudoku(s1);
	solveSudoku(s1);
	printSudoku(s1);
	printSudokuFile(s1);
	return 0;
}
