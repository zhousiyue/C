#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//��ӡ�������
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int arr[50][50] = { 1 };
//	int i = 0;
//	int j = 0;
//	arr[0][0] = 1;
//	for (i = 1; i < line; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		for (j = 1; j < i ; j++)
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//	}
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int arr[50] = { 1 };
//	int i = 0;
//	int j = 0;
//	printf("1\n");
//	for (i = 1; i < line; i++)
//	{
//		for (j = i; j>0; j--)
//			arr[j] += arr[j - 1];
//		for (j = 0; j <= i; j++)
//			printf("%d ", arr[j]);
//		printf("\n");
//	}
//	return 0;
//}

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�



//int main()
//{
//	int murder[4] = { 0 }; //Ĭ���ĸ��˶���������
//	int i = 0;
//	for (i = 0; i < 4; i++) //��������4�����е�ĳ����������
//	{
//		murder[i] = 1; //����ĳ��������
//		if (((murder[0] != 1) + (murder[2] == 1) + (murder[3] == 1) + (murder[3] != 1)) == 3)
//			break; //�����������������־�������
//		murder[i] = 0; //�����������������
//	}
//	printf("%c\n", 'A' + i);//��ӡ���ֵı�ţ����ǵı����0 1 2 3������'A'����A B C D
//	return 0;
//}



int checkDate(int* p)
{
	int tmp[7] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		if (tmp[p[i]])
			return 0;
	    tmp[p[i]] = 1;
	}
	return 1;
}
int main()
{
	int p[5] = { 0 };
	for (p[0] = 1; p[0] <= 5; p[0]++)
	{
		for (p[1] = 1; p[1] <= 5; p[1]++)
		{
			for (p[2] = 1; p[2] <= 5; p[2]++)
			{
				for (p[3] = 1; p[3] <= 5; p[3]++)
				{
					for (p[4] = 1; p[4] <= 5; p[4]++)
					{
						if ((((p[1] == 2) + (p[0] == 3)) == 1)
							&& (((p[1] == 2) + (p[4] == 4)) == 1)
							&& (((p[2] == 1) + (p[3] == 2)) == 1)
							&& (((p[2] == 5) + (p[3] == 3)) == 1)
							&& (((p[4] == 4) + (p[0] == 1)) == 1)
							&& (checkDate(p) == 1))
						{
							int i = 0;
							for (i = 0; i < 5; i++)
								printf("%d ", p[i]);
						}
					}
				}
			}
		}
	}
	return 0;
}