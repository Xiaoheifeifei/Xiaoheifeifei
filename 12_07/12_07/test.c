#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main(void)
//{
//	int no;
//	do {
//		printf("������һ����������");
//		scanf("%d", &no);
//		if (no <= 0)
//			puts("\a�벻Ҫ�����������");
//	} while (no <= 0);
//       printf("%d������ʾ�Ľ����",no);
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
		printf("������һ����������");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a�벻Ҫ�����������");
	} while (no <= 0);
	printf("%d��λ����", no);
	int i = 0;
	while (no > 0) {
		no /= 10;
		i++;
		
	}
	printf("%d", i);
	
	return 0;
}