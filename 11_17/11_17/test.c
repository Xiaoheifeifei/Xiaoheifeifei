//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//
//	//m = a*b
//	//a��b��һ��������һ�������� <= ��ƽ��m��
//	//16 = 2*8 = 4*4
//
//	//sqrt - �ǿ�ƽ���ĺ��� - math.h
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//����
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
//int main()
//{
//	flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//
//	return 0;
//}
//
//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺
// ��������ȡ���ػ�
//shutdown -s -t 60
//shutdown -a
//
//
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//
//	char input[20] = { 0 };//����������Ϣ
//	//�ػ�
//	//C�����ṩ��һ������: system() - ִ��ϵͳ����
//	system("shutdown -s -t 60"); //stdlib.h
//	again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//string.h
//	if (strcmp(input,"������") == 0)//�����ַ����Ƚ��ǲ��� == ��,Ӧʹ��strcmp()-string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//int main()
//{
//
//	char input[20] = { 0 };//����������Ϣ
//	//�ػ�
//	//C�����ṩ��һ������: system() - ִ��ϵͳ����
//	system("shutdown -s -t 60"); //stdlib.h
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//string.h
//		if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ��� == ��,Ӧʹ��strcmp()-string compare
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}
//
//goto����ֻ����һ����Χ����ת�����ܿ纯��
//
//void test()
//{
//flag:
//	printf("hehe\n");
//}
//int main()
//{
//	goto flag;
//	return 0;
//}
//  
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[]= "hello little-black";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello little-black";
//	memset(arr, "x", 5);
//	printf("%s\n", arr);
//	return 0;
//}
//
//int get_max(int x , int y)
//{
//	int z = 0;
//if (x > y)
//{
//	z = x;
//}
//else
//{
//	z = y;
//}
//return z;//����z-���ؽϴ�ֵ
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//�����ĵ���
//	int max = get_max(a, b);
//		printf("max = %d\n", max);
//	return 0;
//}
//
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//дһ��������-����2�����ͱ�����ֵ
//	printf("����ǰ: a = %d b = %d\n",a,b);
//	Swap(a, b);
//	printf("������: a = %d b = %d\n",a,b);
//	return 0;
//}
//
//int main()
//{
//	int a = 20;//4���ֽڵĿռ�
//	int* pa = &a;//pa ����һ��ָ�����
//	*pa = 52;
//	printf("%d\n", a);
//
//	return 0;
//}
//
//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	дһ��������-����2�����ͱ�����ֵ
//	printf("����ǰ: a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("������: a = %d b = %d\n", a, b);
//	return 0;
//}