#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//打印杨辉三角
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int arr[50][50] = { 1 };
//	int i = 0;
//	int j = 0;
//	arr[0][0] = 1;
//	for (i = 1; i < line; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		for (j = 1; j < i ; j++)
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//	}
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int arr[50] = { 1 };
//	int i = 0;
//	int j = 0;
//	printf("1\n");
//	for (i = 1; i < line; i++)
//	{
//		for (j = i; j>0; j--)
//			arr[j] += arr[j - 1];
//		for (j = 0; j <= i; j++)
//			printf("%d ", arr[j]);
//		printf("\n");
//	}
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。



//int main()
//{
//	int murder[4] = { 0 }; //默认四个人都不是凶手
//	int i = 0;
//	for (i = 0; i < 4; i++) //遍历假设4个人中的某个人是凶手
//	{
//		murder[i] = 1; //假设某个人凶手
//		if (((murder[0] != 1) + (murder[2] == 1) + (murder[3] == 1) + (murder[3] != 1)) == 3)
//			break; //满足条件跳出，凶手就是你了
//		murder[i] = 0; //不满足条件还你清白
//	}
//	printf("%c\n", 'A' + i);//打印凶手的编号，我们的编号是0 1 2 3，加上'A'后变成A B C D
//	return 0;
//}



int checkDate(int* p)
{
	int tmp[7] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		if (tmp[p[i]])
			return 0;
	    tmp[p[i]] = 1;
	}
	return 1;
}
int main()
{
	int p[5] = { 0 };
	for (p[0] = 1; p[0] <= 5; p[0]++)
	{
		for (p[1] = 1; p[1] <= 5; p[1]++)
		{
			for (p[2] = 1; p[2] <= 5; p[2]++)
			{
				for (p[3] = 1; p[3] <= 5; p[3]++)
				{
					for (p[4] = 1; p[4] <= 5; p[4]++)
					{
						if ((((p[1] == 2) + (p[0] == 3)) == 1)
							&& (((p[1] == 2) + (p[4] == 4)) == 1)
							&& (((p[2] == 1) + (p[3] == 2)) == 1)
							&& (((p[2] == 5) + (p[3] == 3)) == 1)
							&& (((p[4] == 4) + (p[0] == 1)) == 1)
							&& (checkDate(p) == 1))
						{
							int i = 0;
							for (i = 0; i < 5; i++)
								printf("%d ", p[i]);
						}
					}
				}
			}
		}
	}
	return 0;
}