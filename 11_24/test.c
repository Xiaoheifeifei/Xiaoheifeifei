#define _CRT_SECURE_NO_WARNINGS 1 4
#include <stdio.h>
// int main(void)
// {
//     int height;
// double weight;

//     printf("请输入您的身高：");
//     scanf("%d", &height);
//     weight = (double)(height-100)*0.9;
// printf("您的标准体重是%4.1f公斤\n", weight);
//     return 0;
// }

/*
第二章总结
*/

// int main(void)
// {
// int a, b; //int表示整数
// double r; //double表示浮点数，r表示半径
// printf("整数a和b的值：");
// scanf("%d%d", &a, &b);

// printf("a + b = %d\n", a + b);
// printf("a - b = %d\n", a - b);
// printf("a * b = %d\n", a * b);
// printf("a + b = %d\n", a + b);
// printf("a %% b = %d\n", a % b);

// printf("(a + b)/2 = %d\n", (a + b)/2);

// printf("平均值 = %f\n\n", (double)(a + b)/2);

// printf("半径：");
// scanf("%lf",&r);

// printf("半径为%.3f的圆的面积是%.3f。\n", r, 3.14 * r * r);
//     return 0;
// }

/*
输入的整数能被5整除吗？
*/

// int main(void)
// {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);

//     if(no % 5)
//     {
//         puts("输入的整数不能被5整除。");
//     }
//     return 0;
// }

/*
输入的整数是奇数吗
*/

int main(void)
{
int no;

printf("请输入一个整数：");
scanf("%d", &no);

if(no % 2)
{
    printf("输入的整数是奇数。");
}
    return 0;
}