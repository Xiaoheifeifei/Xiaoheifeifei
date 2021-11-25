#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// int main(void)
// {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);
//     if(no % 5)
//     {
//         puts("该整数不能被5整除\n");
//     }
//     else
//     {
//         printf("该整数能被5整除\n");
//     }
//     return 0;
// }

// int main(void)
// {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);
//     if(no % 2)
//     {
//         puts("该整数是奇数\n");
//     }
//     else
//     {
//         printf("该整数是偶数\n");
//     }
//     return 0;
// }

// int main(void)
// {
//     int a, b;
//     puts("请输入两个整数的。");
// printf("整数A："); scanf("%d", &a);
// printf("整数B："); scanf("%d", &b);
// if(a % b)
// {
//     printf("B不是A的约数\n");
// }
// else
// {
//     printf("B是A的约数\n");
// }
//     return 0;
// }

/*
输入的整数值是否为0
*/

// int main(void)
// {
//     int num;

//     printf("请输入一个整数：");
//     scanf("%d", &num);
//     if(num)
//     {
//         puts("该整数不是0。");
//     }
//     else
//     {
//         puts("该整数是0。");
//     }
//     return 0;
// }

/*
输入的两个整数相等吗
*/

int main(void)
{
    int n1, n2;
    puts("请输入两个整数。");
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);

    if(n1 == n2)
    {
        puts("它们相等。");
    }
    else
    {
        puts("它们不相等。");
    }
    return 0;
}