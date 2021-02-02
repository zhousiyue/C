#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	scanf("%d", &k);
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("没找到");
	}
	//system("pause");
	return 0;
}
////int main()
////{
////	int i = 0;
////	for (i = 1; i <= 9; i++)
////	{
////		int j = 0;
////		for (j = 1; j <= i; j++)
////		{
////			printf("%d*%d=%-2d ", i, j, i*j);
////		}
////		printf("\n");
////	}
////	system("pause");
////	return 0;
////}
//int main()
//{
//	int arr[] = {0};
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("最大值是%d\n", max);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	float sum = 0; 
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		float j = flag*(1.0 / i);
//		sum += j;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (9 == i % 10)
//			count++;
//		if (9 == i / 10)
//			count++;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((0 == year % 4) && (year % 100 != 0)) || (0 == year % 400))
//			printf("%d ", year);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	while ( a%b )
//	{
//		int c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是%d\n", b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (b > a)
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//	if (c > a)
//	{
//		int t = a;
//		a = c;
//		c = t;
//	}
//	if (c > b)
//	{
//		int t = c;
//		c = b;
//		b = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}

	/*int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret *= n;
		sum += ret;
	}*/
	/*int n = 0;
	int sum = 0;
	int i = 0;
	for (n = 1; n <= 10; n++)
	{
		int ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}*/
//	printf("%d", sum);
//	return 0;
//}