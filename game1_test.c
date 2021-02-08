#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"




void game()
{
	int ret = 0;
	char board[ROW][COL] ;
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'c')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else
		printf("平局\n");
}
void Menu()
{
	printf("***********************\n");
	printf("****    1.Play     ****\n");
	printf("****    0.Exit     ****\n");
	printf("***********************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		Menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏。\n");
			break;
		default:
			printf("选择错误，请重新选择:>\n");
			break;
		}
	} while (input);
	return 0;
}