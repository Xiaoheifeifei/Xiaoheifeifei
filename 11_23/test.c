#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
// int main(void)
// {
//     int a, b;
//     puts("请输入两个整数。");
//     printf("整数a："); scanf("%d", &a);
//     printf("整数b："); scanf("%d", &b);

//     printf("它们的平均值是%f。\n", (double) (a + b) / 2); //类型转换
//     return 0;
// }

// int main(void)
// {
//     int a, b;
//     puts("请输入两个整数。");
//     printf("整数a："); scanf("%d", &a);
//     printf("整数b："); scanf("%d", &b);

//     printf("a是b的%f%%。\n", (double) a * 100 / b);
//     return 0;
// }

/*
读取三个整数，并显示它们的合计值和平均值
*/

// int main(void)
// {
//     int a, b, c;
// int sum; /* 合计值 */
// double ave; /* 平均值 */

// puts("请输入三个整数。");
// printf("整数a："); scanf("%d", &a);
// printf("整数b："); scanf("%d", &b);
// printf("整数c："); scanf("%d", &c);

// sum = a + b + c;
// ave = (double)sum / 3; //类型转换

// printf("它们的合计值是%5d\n", sum); //输出99999
// printf("它们的平均值是%5.1f\n", ave); //输出999.9
//     return 0;
// }

/*
格式化整数和浮点数
*/

int main(void)
{
    printf("[%d\n], 123");
    printf("[%.4d\n], 123");
    printf("[%4d\n], 123");
    printf("[%04d\n], 123");
    printf("[%-4d\n\n], 123");

    printf("[%d\n], 12345");
    printf("[%.3d\n], 12345");
    printf("[%3d\n], 12345");
    printf("[%03d\n], 12345");
    printf("[%-3d\n\n], 12345");

    printf("[%f\n], 123.13");
    printf("[%.1f\n], 123.13");
    printf("[%6.1f\n\n], 123.13");

    printf("[%f\n], 123.13");
    printf("[%.1f\n], 123.13");
    printf("[%4.1f\n], 123.13");

    return 0;
}