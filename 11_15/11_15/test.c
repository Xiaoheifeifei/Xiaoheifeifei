#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr������������в���k(7)��ֵ
//	int sz = sizeof arr / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��� %d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
#include <string.h>
#include <windows.h>


//int main()
//{
//	char arr1[] = "welcome to my world !";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	for (left = 0, right = strlen(arr1) - 1;
//		left <= right;
//		left ++, right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
//	}
//	printf("welcome come to my world !\n");
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//
//	}
//	printf("welcome to my world !\n");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//if(password == "5152175")//err-�����ַ����Ƚϣ�����ʹ�� == ��Ӧ��ʹ��strcmp
//		if (strcmp(password, "5152175") == 0)
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������,����������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�˳�����\n");
//	}
//	return 0;
//}

//дһ����������Ϸ
// 1.�Զ�����һ��1-100֮��������
// 2.������
// a.�¶��ˣ���ϲ�㣬��Ϸ����
// b.�´��ˣ�����߲´��ǲ�С�������£�ֱ���¶�Ϊֹ
// 3.��Ϸ����һֱ�棬�����˳���Ϸ
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*****************************\n");
	printf("**********1. play************\n");
	printf("**********0. exit************\n");
	printf("*****************************\n");
}
void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0-32767֮�������
	//ʱ��-ʱ���

	int ret = rand() % 100 + 1;//%100��������0-99��Ȼ��+1����Χ����1-100
		printf("%d\n", ret);
		//2.������
		int guess = 0;
		while (1)
			{
				printf("�������:>");
				scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
			}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
			
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}