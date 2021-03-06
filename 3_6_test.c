#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void reverse_str(char* left,char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse_str(arr,arr+len-1);
	char* sta = arr;
	char* end = sta;
	while (*sta)
	{
		end = sta;
		while (' ' != *end&&*end!='0')
		{
			end++;
		}
		reverse_str(sta, end - 1);
		if ('0' == *end)
			sta = end;
		else
		    sta = end + 1;
	}
	printf("%s\n", arr);
	return 0;
}