#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Print(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
			printf("%d*%d=%-3d", i, j,i*j);
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	return 0;
}



//void Swap(int*p1, int*p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d,b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}




//int is_leap_year(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (1 == is_leap_year(year))
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}



//#include <math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (0 == i%j)
//			return 0;
//	}
//	//if (j > sqrt(i))
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (1 == is_prime(i))
//			printf("%d ", i);
//	}
//}


//int binary_search(int* arr, int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (k > arr[mid])
//			left++;
//		else if (k < arr[mid])
//			right--;
//		else
//			return k;
//	}
//	//if (left>right)
//		return -1;
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//		printf("找不到了");
//	else
//		printf("找到了，下标是:%d\n", ret);
//	return 0;
//}