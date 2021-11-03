#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//#define max 1000
//int main()
//{
//	int n = max;
//	printf("n=%d\n", n);
//	return 0;
////}
//enum Sex
//{
//	MALE,//赋初值
//FEMALE,
//SECRET
//
//};
//int main()
//{
//	enum Sex s = MALE;
//	//MALE=3;//err
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello\0";
//	return 0;
//}
#include <string.h>
int main()
{
	/*char arr1[] = "abc\0";
	char arr2[] = { 'a','b','c','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;*/
	//求字符串的长度
	int len = strlen("abcd");
	printf("%d\n", len);
		return 0;
}