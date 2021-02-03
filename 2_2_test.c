#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在一分钟内关机，如果输入“我是猪”，将取消关机。\n");
	char input[20] = "";
	scanf("%s", &input);
	if (0 == strcmp(input, "我是猪"))
		system("shutdown -a");
	else
		goto again;
}



//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("*******  1.play  ***********\n");
//	printf("*******  0.exit  ***********\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		//printf("%d", ret);
//		int guess = 0;
//		printf("请输入:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了，答案是:%d\n", ret);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入(1/0):>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,请重新输入:\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>\n");
//		scanf("%s", password);
//		if (0 == strcmp(password, "20020120"))
//		{
//			printf("密码正确，登录成功！\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (3 == i)
//		printf("三次输入均错误，退出程序。\n");
//	return 0;
//}


//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	//int sz = sizeof(arr1) / sizeof(arr1[0])-1;注意\0
//	int sz = strlen(arr1);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//停顿1000毫秒
//		system("cls");//清空屏幕，system函数是执行系统命令的
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);//防止数据溢出
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)//等于也有元素可以找到
//	{
//		int mid = left + (right - left) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left>right)//确保结束循环时没有找到元素，而不是break跳出
//		printf("找不到了");
//    return 0;
//}