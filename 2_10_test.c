#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int a = 3;
	int b = 5;
	//int tmp = a;
	//a = b;
	//b = tmp;

	//a = a + b;
	//b = a - b;
	//a = a - b;

	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d\nb=%d\n", a, b);
	return 0;
}