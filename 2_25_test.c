#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int findRound(const char*src, char*find)
//{
//	char tmp[100] = { 0 };
//	strcpy(tmp, src);
//	strcat(tmp, src);
//	return strstr(tmp, find)!=NULL;
//}
//int main()
//{
//	char arr1[50] = { 0 };
//	char arr2[50] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	int ret = findRound(arr1, arr2);
//	if (1 == ret)
//		printf("是\n");
//	else
//		printf("不是\n");
//	return 0;
//}


//void leftRound(char*src, int time)
//{
//	int len = strlen(src);
//	int i = 0;
//	time %= len;
//	for (i = 0; i < time; i++)
//	{
//		int j = 0;
//		int tmp = src[0];
//		for (j = 0; j < len-1; j++)
//		{
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
//int main()
//{
//	char arr[50] = { 0 };
//	int k = 0;
//	gets(arr);
//	scanf("%d", &k);
//	leftRound(arr, k);
//	printf("%s", arr);
//	return 0;
//}


int findnum(int(*arr)[3], int x, int y,int f)
{
	int i = 0;
	int j = y - 1;
	while (j >= 0 && i < x)
	{
		if (arr[i][j]>f)
			j--;
		else if (arr[i][j] < f)
			i++;
		else
			return 1;
	}
	return 0;
}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int f = 0;
	scanf("%d", &f);
	if (findnum(arr, 3, 3,f))
		printf("找到了\n");
	else
		printf("没找到\n");
	return 0;
}