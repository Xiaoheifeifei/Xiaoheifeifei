#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

/*
����涨��������������ʾ�����ǵĺϼ�ֵ��ƽ��ֵ*/

//int main(void)
//{
//	int i = 0;
//	int sum = 0;
//	int num, tmp;
//	printf("Ҫ������ٸ�������");
//	scanf("%d", &num);
//	while (i < num) {
//		printf("No.%d:", ++i); //i��ֵ��������ʾ
//		scanf("%d", &tmp);
//		sum += tmp;
//	}
//	printf("�ϼ�ֵ��%d\n", sum);
//	printf("ƽ��ֵ��%.2f\n", (double)sum / num);
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