#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	//空语句
//	5 + 3;
//	return 0;
//}
//int main()
//{
//	int age = 17;
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	return 0;
//}
//int main()
//{
//	int age = -1;
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("壮年\n");
//	else if (age >= 40 && age < 60)
//		printf("中年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
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
//		printf("奇数\n");
//	else
//		printf("偶数\n");
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