#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
输入一个整数，连续显示出该整个*
*/

int main(void)
{
int no;
printf("正整数：");
scanf("%d", &no);
while (no-- > 0)
putchar('*');
putchar('\n');
    return 0;
}