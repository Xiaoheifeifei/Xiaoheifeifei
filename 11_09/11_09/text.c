#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	//�����
//	5 + 3;
//	return 0;
//}
//int main()
//{
//	int age = 17;
//	if (age >= 18)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	return 0;
//}
//int main()
//{
//	int age = -1;
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("׳��\n");
//	else if (age >= 40 && age < 60)
//		printf("����\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//	return 0;
//}
/*int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
}*/
//int test()
//{
//	if (0)
//		return 0;
//	return 1;
//}
//int main()
//{
//	test();
//
//	return 0;
//}
//int main()
//{
//	int num = 5;
//	if (5 == num)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int num = 18;
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}
//void test()
//{
//	static int a = 0;
//	a=+2;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//			//test();
//			printf("%d ", i);
//			i++;
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i+=2)
	{
		//if (i % 2 == 1)
			printf("%d ", i);
	}
	return 0;
	}