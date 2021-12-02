#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main(void)
//{
//    int no;
//    printf("正整数：");
//    scanf("%d", &no);
//    while (no-- > 0)
//        putchar('*');
//    putchar('\n');
//    return 0;
//}

//int main(void)
//{
//    int no;
//    printf("正整数：");
//    scanf("%d", &no);
//    while (no-- > 0)
//        putchar('*');
//    if (no >= -1)
//        putchar('\n');
//    return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int no;
//	printf("正整数:");
//	scanf("%d", &no);
//	while (no-- > 0)
//		putchar('*');
//	if(no == -1)//注意书上
//		putchar('\n');
//	return 0;
//}

#include <stdio.h>

int main(void)
{
    int i, j = 0;
    puts("please input an integer.");
    printf("i = "); scanf("%d", &i);

    while (i-- > 0)
    {
        putchar('*');
        j++;
    }

    if (j > 0)
    {
        putchar('\n');
    }

    return 0;
}