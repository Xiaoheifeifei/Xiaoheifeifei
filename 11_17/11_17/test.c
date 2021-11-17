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
//	//a和b中一定至少有一个数字是 <= 开平方m的
//	//16 = 2*8 = 4*4
//
//	//sqrt - 是开平方的函数 - math.h
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i,看能不能整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//素数
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
//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：
// 我是猪，就取消关机
//shutdown -s -t 60
//shutdown -a
//
//
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//
//	char input[20] = { 0 };//存放输入的信息
//	//关机
//	//C语言提供了一个函数: system() - 执行系统命令
//	system("shutdown -s -t 60"); //stdlib.h
//	again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，则取消关机\n");
//		scanf("%s", input);
//		//string.h
//	if (strcmp(input,"我是猪") == 0)//两个字符串比较是不能 == 的,应使用strcmp()-string compare
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
//	char input[20] = { 0 };//存放输入的信息
//	//关机
//	//C语言提供了一个函数: system() - 执行系统命令
//	system("shutdown -s -t 60"); //stdlib.h
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，则取消关机\n");
//		scanf("%s", input);
//		//string.h
//		if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能 == 的,应使用strcmp()-string compare
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}
//
//goto函数只能在一个范围内跳转，不能跨函数
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
//return z;//返回z-返回较大值
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//函数的调用
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
//	//写一个哈函数-交换2个整型变量的值
//	printf("交换前: a = %d b = %d\n",a,b);
//	Swap(a, b);
//	printf("交换后: a = %d b = %d\n",a,b);
//	return 0;
//}
//
//int main()
//{
//	int a = 20;//4个字节的空间
//	int* pa = &a;//pa 就是一个指针变量
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
//	写一个哈函数-交换2个整型变量的值
//	printf("交换前: a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后: a = %d b = %d\n", a, b);
//	return 0;
//}