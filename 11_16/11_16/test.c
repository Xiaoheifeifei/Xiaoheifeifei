#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d	", i);//5��ѭ��
//	}
//	return 0;
//}
//F11-�����
//F10-�����
//switch(c)�е�cҪ������


//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y) //case 0 ,1 ����ִ��
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//д���뽫�������������Ӵ�С���

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//	//����˳��
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//���-�ȴ�С
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//дһ�������ӡ1-100֮������3�ı�������
//int main()
//{
//	//int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	//�ж�i�Ƿ�Ϊ3�ı��� 
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//		printf("%d ", i);
//	return 0;
//}

//���������������������������Լ��

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	//�������Լ������m��n�Ľ�Сֵ
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ���� %d\n", max);
//			break;
//		}
//		max--;
//	}
//	
//	return 0;
//}

//շת�����0;

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//35 14
//	int t = 0;
//	while (t = m%n	)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ�� %d\n", n);
//	//��С������=m*n/���Լ��;
//	return 0;
//}

//��ӡ1000-2000��֮�������

//int main()
//{
//	int y = 0;
//	int count = 0;
	/*for (y = 1000; y <= 2000; y++)*/
	//{
	//	//�ж�y�ǲ�������
	//	// 1.�ܱ�4���������ܱ�100����������
	//	// 2.�ܱ�400����������
	//	if (y % 4 == 0)
	//	{
	//		if (y % 100 != 0)
	//		{
	//			printf("%d ", y);
	//			count++;
	//		}
	//		if (y % 400 == 0)
	//		{
	//			printf("%d ", y);
	//			count++;

	//		}
	//	}
	//}

//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	
//	printf("\ncount =%d\n",count);
//	return 0;
//}

//дһ�����룬��ӡ100-200֮�������
//����-����
//ֻ�ܱ�1������������

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i�����ܲ�������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//				if (i % j == 0)
//				{
//					break;
//				}
//			//
//			if (i == j)
//			printf("%d ", i);//����
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i�����ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//			//
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//����
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}

#include <math.h>
int main()
{
	int count = 0;
	int i = 0;

	//m = a*b
	//a��b��һ��������һ�������� <= ��ƽ��m��
	// 16 = 2*8 = 4*4
	//sqrt-��ƽ������- math.h
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//2->i-1֮�������ȥ�Գ�i�����ܲ�������
		int j = 0;
		int flag = 1;//����i��������
		for (j = 2; j <=sqrt(i) ; j++)
		{
			if (i % j == 0)
			{
				flag = 0;//��������
				break;
			}
			//
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);//����
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}