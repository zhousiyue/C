#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void Print(int*p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", *(p + i));
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}


//void Reverse(char* pl, char* pr)
//{
//	while (pl<pr)
//	{
//		int tmp = *pl;
//		*pl++ = *pr;
//		*pr-- = tmp;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int str = strlen(arr);
//	char* pl = arr;
//	char* pr = arr + str - 1;
//	Reverse(pl, pr);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 10000; i*=10)
//	{
//	    j += i*a;
//		sum += j;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		int count = 1;
//		int tmp = i;
//		while (i / 10)
//		{
//			count++;
//			i /= 10;
//		}
//		i = tmp;
//		while (i)
//		{
//			sum += pow(i%10,count);
//			i /= 10;
//		}
//		if (sum == tmp)
//			printf("%d ", tmp);
//		i = tmp;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 0; j < 7-i; j++)
//			printf(" ");
//		for (j = 0; j < 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 0; j < i; j++)
//			printf(" ");
//		for (j = 0; j < -2 * i + 13; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	int m = 20;
	int sum = 0;
	int e = 0;
	sum += m;
	e += m;
	while (e > 1)
	{
		sum += e / 2;
		e = e / 2 + e % 2;
	}
	printf("%d\n", sum);
	return 0;
}