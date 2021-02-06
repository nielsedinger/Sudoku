build:
	gcc -std=c99 -pedantic -Wall -W -c -Wextra -Iinclude/  src/*.c
	
link:
	gcc -o SudokuSolver *.o 	
	
run:
	./SudokuSolver

clean:
	rm -f *.o
	rm -f *SudokuSolver
