#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d	", i);//5死循环
//	}
//	return 0;
//}
//F11-逐语句
//F10-逐过程
//switch(c)中的c要是整型


//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y) //case 0 ,1 不会执行
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

//写代码将三个整数数按从大到小输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	//调整顺序
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
//	//输出-比大小
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数
//int main()
//{
//	//int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	//判断i是否为3的倍数 
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

//给定两个数，求这两个数的最大公约数

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	//假设最大公约数就是m和n的较小值
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是 %d\n", max);
//			break;
//		}
//		max--;
//	}
//	
//	return 0;
//}

//辗转相除法0;

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
//	printf("最大公约数 %d\n", n);
//	//最小公倍数=m*n/最大公约数;
//	return 0;
//}

//打印1000-2000年之间的闰年

//int main()
//{
//	int y = 0;
//	int count = 0;
	/*for (y = 1000; y <= 2000; y++)*/
	//{
	//	//判断y是不是闰年
	//	// 1.能被4整除，不能被100整除是闰年
	//	// 2.能被400整除是闰年
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

//写一个代码，打印100-200之间的素数
//素数-质数
//只能被1和它本身整除

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i，看能不能整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//				if (i % j == 0)
//				{
//					break;
//				}
//			//
//			if (i == j)
//			printf("%d ", i);//素数
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
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i，看能不能整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//			//
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//素数
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
	//a和b中一定至少有一个数字是 <= 开平方m的
	// 16 = 2*8 = 4*4
	//sqrt-开平方函数- math.h
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//2->i-1之间的数字去试除i，看能不能整除
		int j = 0;
		int flag = 1;//假设i就是素数
		for (j = 2; j <=sqrt(i) ; j++)
		{
			if (i % j == 0)
			{
				flag = 0;//不是素数
				break;
			}
			//
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);//素数
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}