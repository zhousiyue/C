#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{
	printf("****************************\n");
	printf("********   1.play   ********\n");
	printf("********   2.exit   ********\n");
	printf("****************************\n");
}


void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*'); 

	Displayboard(show, ROW, COL);

	Setmine(mine, ROW, COL, EASY_COUNT);

	//Displayboard(mine, ROW, COL);

	finemine(mine, show, ROW, COL);

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入:>\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("扫雷游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}