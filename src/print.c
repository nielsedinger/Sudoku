// print.c
// Author: Niels Edinger <st172126@stud.uni-stuttgart.de>

#include<stdio.h>
#include"sudokutools.h"

#define DATEI "solution.txt"

void printSudoku(int sudoku[][9]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sudoku[i][j] != 0) { printf("%d ", sudoku[i][j]); }
			else { printf("  "); }
			if (j == 2 || j == 5) {	printf("# "); }
			if ((i == 2 && j == 8) || (i == 5 && j == 8)) {
				printf("\n#####################");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printSudokuFile(int sudoku[][9]) {

	FILE * stream = fopen(DATEI, "w");
	fprintf(stream, "Solution Grid 1\n");
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sudoku[i][j] != 0) { fprintf(stream, "%d ", sudoku[i][j]); }
			else { fprintf(stream, "  "); }
			if (j == 2 || j == 5) {	fprintf(stream, "# "); }
			if ((i == 2 && j == 8) || (i == 5 && j == 8)) {
				fprintf(stream, "\n#####################");
			}
		}
		fprintf(stream, "\n");
	}
	fclose(stream);
}