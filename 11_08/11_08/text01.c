#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//C99����һ������䳤����
//֧�����鴴����ʱ���ñ���ָ����С�ģ�����������鲻�ܳ�ʼ��
//VS2019 ��֧�� C99 �䳤����
//int main()
//{
//	int a = 10;
//	//int arr[n] = { 0 };
//	int arr[n];
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//	}
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

	}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = Max(a, b);
	printf("%d\n", m);
	return 0;
}