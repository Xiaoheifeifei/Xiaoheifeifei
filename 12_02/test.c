#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
����һ��������������ʾ��������*
*/

int main(void)
{
int no;
printf("��������");
scanf("%d", &no);
while (no-- > 0)
putchar('*');
putchar('\n');
    return 0;
}