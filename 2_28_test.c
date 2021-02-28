#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//void* my_memcpy(void* dest,const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	my_memcpy(arr1, arr2, 8);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//	return 0;
//}

void* my_memmove(void* dest, void* src, size_t count)
{
	void* ret = dest;
	assert(dest&&src);
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
		    ++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_memmove(arr + 2, arr, 16);
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}