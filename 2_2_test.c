#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������롰����������ȡ���ػ���\n");
	char input[20] = "";
	scanf("%s", &input);
	if (0 == strcmp(input, "������"))
		system("shutdown -a");
	else
		goto again;
}



//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("*******  1.play  ***********\n");
//	printf("*******  0.exit  ***********\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		//printf("%d", ret);
//		int guess = 0;
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´���\n");
//		else if (guess < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�����:%d\n", ret);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("������(1/0):>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,����������:\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>\n");
//		scanf("%s", password);
//		if (0 == strcmp(password, "20020120"))
//		{
//			printf("������ȷ����¼�ɹ���\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (3 == i)
//		printf("��������������˳�����\n");
//	return 0;
//}


//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	//int sz = sizeof(arr1) / sizeof(arr1[0])-1;ע��\0
//	int sz = strlen(arr1);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//ͣ��1000����
//		system("cls");//�����Ļ��system������ִ��ϵͳ�����
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);//��ֹ�������
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)//����Ҳ��Ԫ�ؿ����ҵ�
//	{
//		int mid = left + (right - left) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left>right)//ȷ������ѭ��ʱû���ҵ�Ԫ�أ�������break����
//		printf("�Ҳ�����");
//    return 0;
//}