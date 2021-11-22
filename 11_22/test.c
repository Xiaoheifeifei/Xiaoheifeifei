#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
// int main(void)
// {
//     int num;
//     printf("请输入一个整数：");
//     scanf("%d", &num);
//     printf("符号取反之后的值是%d。\n", -num);
//     return 0;
// }

/*
读取两个整数，显示出他们的平均值
*/

// int main(void)
// {
//     int a, b;

//     puts("请输入两个整数。");
//     printf("整数a："); scanf("%d", &a);
//     printf("整数b："); scanf("%d", &b);

//     printf("它们的平均值是%d。\n", (a + b) / 2);
//     return 0;
// }

/*
整数和浮点数
*/

// int main(void)
// {
//     int n; //整数
//     double x; //浮点数
    
//     n = 9.99;
//     x = 9.99;

//     printf("int 型变量n的值：%d\n", n);
// printf("n / 2 = %d\n", n / 2);
//     printf("double 型变量x的值：%f\n", x);
// printf("x / 2.0 = %f\n", x / 2.0);

//     return 0;
// }

// int main(void)
// {
//     double vx, vy;
//     puts("请输入两个数。");
//     printf("实数vx："); scanf("%lf", &vx);
//     printf("实数vy："); scanf("%lf", &vy);
// printf("vx + vy = %f\n", vx + vy);
// printf("vx - vy = %f\n", vx - vy);
// printf("vx * vy = %f\n", vx * vy);
// printf("vx / vy = %f\n", vx / vy);
//     return 0;
// }

// int main(void)
// {
//     double x;
//     printf("请输入一个实数：");
//     scanf("%lf", &x);
//     printf("你输入的是%f\n", x);
//     return 0;
// }

// int main(void)
// {
//     int n1, n2, n3, n4;
//     double m1, m2, m3, m4;
//     n1 = 5 / 2;
//     n2 = 5.0 / 2.0;
//     n3 = 5.0 / 2;
//     n4 = 5 / 2.0;
    
//     m1 = 5 / 2;
// m2 = 5.0 / 2.0;
// m3 = 5.0 / 2;
// m4 = 5 / 2.0;

// printf("n1 = %d\n", n1);
// printf("n2 = %d\n", n2);
// printf("n3 = %d\n", n3);
// printf("n4 = %d\n\n", n4);

// printf("m1 = %f\n", m1);
// printf("m2 = %f\n", m2);
// printf("m3 = %f\n", m3);
// printf("m4 = %f\n", m4);
//     return 0;
// }

/*
读取两个整数并用浮点数显示它们的平均值
*/

int main(void)
{
    int a, b;
    puts("请输入两个整数。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);
    printf("它们的平均值是%f。\n", (a + b) / 2.0);
    return 0;
}