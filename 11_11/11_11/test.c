#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//在while循环中，continue的作用是跳过本次循环continue后边的代码，
//			//直接去判断部分，看是否进行下一次循环
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//EOF-end of file -文件结束标志
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//处理' \n '
//	int tmp = 0;
//	//清理缓冲区的多个内容
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch > '0' || ch < '9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}
int main()
{
	int i = 1;//初始化
	while (i <= 10)//判断部分
	{
		printf("%d ", i);
		i++;//调整部分
	}
	return 0;
}