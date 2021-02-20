#define _CRT_SECURE_NO_WARNINGS 1

void menu()
{
	printf("*****************************\n");
	printf("****   1.add     2.sub   ****\n");
	printf("****   3.mul     4.div   ****\n");
	printf("****   0.exit   *************\n");
	printf("*****************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int(*parr[5])(int, int) = {0, Add, Sub, Mul, Div };
	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		if (0 == input)
		{
			printf("退出游戏\n");
			break;
		}
		else if ((input >= 1) && (input <= 4))
		{
			int x = 0;
			int y = 0;
			printf("请输入两个数:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", parr[input](x, y));
		}
		else
			printf("输入错误，请重新输入:>\n");
	} while (input);
	return 0;
}