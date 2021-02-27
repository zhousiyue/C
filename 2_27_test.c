#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


//char* my_strstr(const char* st1, const char*st2)
//{
//	assert(st1&&st2);
//	char* cp = (char*)st1;
//	while (*cp)
//	{
//		char* p1 = cp;
//		char* p2 = (char*)st2;
//		if (*p2 == '\0')
//			return cp;
//		while ((*p1) && (*p2) && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "asdfg";
//	char arr2[] = "asd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("ÕÒ²»µ½×Ó´®\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}


//char* my_strcat(char*dest,const char*src)
//{
//	assert(dest&&src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//int my_strcmp(const char*st1,const char*st2)
//{
//	assert(st1&&st2);
//	while (*st1 == *st2)
//	{
//		if (*st1 == '\0')
//			return 0;
//		st1++;
//		st2++;
//	}
//	return *st1 - *st2;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abck";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//char* my_strcpy(char*dest, const char*src)
//{
//	assert(dest&&src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "********************";
//	char arr2[] = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


int my_strlen(char* str)
{
	char* sta = str;
	while (*str)
	{
		str++;
	}
	return str - sta;
}
int main()
{
	char arr[] = "hello bit!";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}