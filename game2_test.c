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
		printf("������:>\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("ɨ����Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}