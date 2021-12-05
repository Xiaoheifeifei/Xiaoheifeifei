#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main(void)
{
	int no;
	printf("ÕýÕûÊý£º");
	scanf("%d", &no);
	int i = 1;
	while (i <= no) {
		printf("*\n");
		printf("\n");
		i++;
	}
	return 0;
}