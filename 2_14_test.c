#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}


//int my_strlen(char*str)
//{
//	char* sta = str;
//	while (*str)
//		str++;
//	return str - sta;
//}
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int ret = my_strlen(arr);
//	printf("%d\n",ret);
//}


//#include <assert.h>
//char* my_strcopy(char* des,const char* src)
//{
//	char* ret = des;
//	assert(des != NULL);
//	assert(src != NULL);
//	//while (*src!=0)
//	//{
//	//	*des = *src;
//	//	des++;
//	//	src++;
//	//}
//	//*des = *src;
//	while (*des++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	printf("%s\n", my_strcopy(arr1, arr2));
//	return 0;
//}


void swap(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left < right)&&arr[left] % 2 == 1)
			left++;
		while ((left < right)&&arr[right] % 2 == 0)
			right--;
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	swap(arr, sz);
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}