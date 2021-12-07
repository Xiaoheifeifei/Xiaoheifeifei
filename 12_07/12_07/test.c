#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main(void)
//{
//	int no;
//	do {
//		printf("请输入一个正整数：");
//		scanf("%d", &no);
//		if (no <= 0)
//			puts("\a请不要输入非正整数");
//	} while (no <= 0);
//       printf("%d逆向显示的结果是",no);
//	while (no > 0) {
//		printf("%d", no % 10);
//		no /= 10;
//	}
//	
//
//	return 0;
//}

int main(void)
{
	int no;
	do {
		printf("请输入一个正整数：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a请不要输入非正整数");
	} while (no <= 0);
	printf("%d的位数是", no);
	int i = 0;
	while (no > 0) {
		no /= 10;
		i++;
		
	}
	printf("%d", i);
	
	return 0;
}