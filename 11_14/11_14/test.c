#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	int  i = 1;
//	do
//	{
//		//break;
//		continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int  i = 0;
//	int j = 0;
//	for (i = 1; i < 4; i++)
//	{
//		if (i == 3)
//			continue;
//		/*if (i == 3)
//			break;*/
//		for (j = 0; j < 3; j++)
//		{
//			if (j == 2)
//				break;
//			printf("hehe\n");
//		}
//		printf("hehe\n");
//	}
//	printf("hehe\n");
//	return 0;
//}
int main()
{
	int n = 0;
	int m = 1;
	int sum = 0;
		//1!+2!+3! = 9
	//计算n的阶乘之前，把m初始为1
	/*for (n = 1; n <= 10; n++)
	{
		int m = 1;
		for (i = 1; i <= n; i++)
		{
			m *= i;
		}
		sum += m;
	}*/
	for (n = 1; n <= 10; n++)
	{
		m *= n;
		sum += m;
	}
		
	
	printf("%d\n", sum);

	return 0;
}
