#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define EASY_COUNT 10


void Initboard(char board[ROWS][COLS], int rows, int cols, char set);

void Displayboard(char board[ROWS][COLS], int row, int col);

void Setmine(char board[ROWS][COLS], int row, int col);

void finemine(char mine[ROWS][COLS],
	          char show[ROWS][COLS],
	          int row,
	          int col);