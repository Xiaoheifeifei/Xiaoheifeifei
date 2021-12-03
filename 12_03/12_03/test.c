#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

/*
输入规定个数个整数并显示出它们的合计值和平均值*/

//int main(void)
//{
//	int i = 0;
//	int sum = 0;
//	int num, tmp;
//	printf("要输入多少个整数：");
//	scanf("%d", &num);
//	while (i < num) {
//		printf("No.%d:", ++i); //i的值递增后显示
//		scanf("%d", &tmp);
//		sum += tmp;
//	}
//	printf("合计值：%d\n", sum);
//	printf("平均值：%.2f\n", (double)sum / num);
//	return 0;
//}

//int main(void)
//{
//	int x = 0;
//	do
//		x++;
//	while (x < 5);
//	while (x >= 0)
//		printf("%d ", --x);
//	return 0;
//}

int main(void)
{
	int x = 0;
	do {
		x++;
	} while (x < 5);
	while (x >= 0)
		printf("%d ", --x);
	return 0;
}