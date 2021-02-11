#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 31; i > 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	return 0;
//}


int binary_one_num(int num)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((num >> i) & 1 == 1)
			count++;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = binary_one_num(num);
	printf("%d", ret);
	return 0;
}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a^b;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i<32; i++)
//	{
//		if ((c >> i) & 1 == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}