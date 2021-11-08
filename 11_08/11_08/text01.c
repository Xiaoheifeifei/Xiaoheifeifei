#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//C99引用一个概念：变长数组
//支持数组创建的时候，用变量指定大小的，但是这个数组不能初始化
//VS2019 不支持 C99 变长数组
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