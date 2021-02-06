#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//#include "add.h"
//
////µ¼Èë¾²Ì¬¿â
//#pragma comment(lib,"add.lib")
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d", Add(a, b));
//}


//void Print(int n)
//{
//	if (n > 9)
//	{
//		printf("%d ", n % 10);
//		Print(n / 10);
//	}
//	else
//		printf("%d ", n);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int fac = 1;
//	for (i = 1; i <= n; i++)
//		fac *= i;
//	printf("%d", fac);
//	return 0;
//}
//

//int Fac(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}


//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "Hello bit";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//int my_strlen(char*str)
//{
//	if (*str != 0)
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "Hello bit";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//void reverse_string(char * str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//int DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}


//float Pow(int n, int k)
//{
//	if (k > 1)
//		return n*Pow(n, k - 1);
//	else if (k == 1)
//		return n;
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / (n*Pow(n, -k - 1));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	float ret = Pow(n,k);
//	printf("%.2f\n", ret);
//	return 0;
//}


//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n - 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}