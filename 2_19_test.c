#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void qsort(void *base,
//	         size_t num, 
//	         size_t width,
//	         int( *cmp)(const void *e1, const void *e2))


void print_arr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void *e1, const void *e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp(*((char*)base + j*width) , *((char*)base + (j + 1)*width)<0))
			{
				char tmp = *((char*)base + j*width);
				*((char*)base + j*width) = *((char*)base + (j + 1)*width);
				*((char*)base + (j + 1)*width) = tmp;
			}
		}
	}
}


int cmp_int(const void *e1, const void *e2)
{
	return *(int*)e1 - *(int*)e2;
}


void test1()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr,sz);
}


struct Stu
{
	char name[20];
	int age;
};

int cmp_by_age(const void *e1, const void *e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_by_name(const void *e1, const void *e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}


void test2()
{
	struct Stu stu [3] = { { "zhangsan", 26 }, { "lisi", 20 }, { "wangwu", 22 } };
	int sz = sizeof(stu) / sizeof(stu[0]);
	bubble_sort(stu, sz, sizeof(stu[0]),cmp_by_age);
	bubble_sort(stu, sz, sizeof(stu[0]),cmp_by_name);
}


int main()
{
	test1();
	test2();
	return 0;
}