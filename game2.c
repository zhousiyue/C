#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			board[i][j] = set;
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("###################################\n");
	for (i = 0; i <= row; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col;  j++)
			printf("%c ", board[i][j]);
		printf("\n");
	}
	printf("###################################\n");
}

void Setmine(char board[ROWS][COLS], int row, int col,int count)
{
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int Getmycount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] 
		+ mine[x + 1][y] +mine[x + 1][y + 1] - 8 * '0';
}
void finemine(char mine[ROWS][COLS],
	          char show[ROWS][COLS],
	          int row,
	          int col)
{
	int win = 0;
	while (win<ROW*COL - EASY_COUNT)
	{
		int x = 0;
		int y = 0;
		printf("����������:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����!\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int ret = Getmycount(mine, x, y);
				show[x][y] = ret + '0';
				Displayboard(show, ROW, COL);
				win++;
			}
		}
		else
			printf("����Ƿ�������������:>\n");
	}
	if (win == ROW*COL - EASY_COUNT)
		printf("��ϲ�㣬���سɹ�!\n");
}