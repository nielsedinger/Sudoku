// check.h
//Author: Niels Edinger <st172126@stud.uni-stuttgart.de>

#ifndef CHECK_H_
#define CHECK_H_

#include <stdbool.h>

// check.c
bool sameSquare(int sudoku[][9], int candidate, int arrayIndexI, int arrayIndexJ);
bool sameRow(int sudoku[][9], int candidate, int arrayIndexJ);
bool sameColumn(int sudoku[][9], int candidate, int arrayIndexI);
bool checkPosition(int sudoku[][9], int candidate, int arrayIndexI, int arrayIndexJ);

// findEmptyPosition.c
bool findEmptyPosition(int sudoku[][9], int *row, int *col);

// print.c
void printSudoku(int sudoku[][9]);
void printSudokuFile(int Sudoku[][9]);

// readInput.c
void readInputData(int s[][9]);

// solve.c
bool solveSudoku(int sudoku[][9]);

#endif // CHECK_H_
