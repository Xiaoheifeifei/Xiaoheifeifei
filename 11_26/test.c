#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
输入的整数相等吗
*/

// int main(void)
// {
// int n1, n2;
// puts("请输入两个整数。");
// printf("整数1："); scanf("%d", &n1);
// printf("整数2："); scanf("%d", &n2);

// if(n1 != n2)
// {
//     puts("它们不相等。");
// }
// else
// {
//     puts("它们相等。");
// }
//     return 0;
// }

/*
个位数是5吗
*/

// int main(void)
// {
//     int num;
//     printf("请输入一个整数：");
//     scanf("%d", &num);
//     if((num % 10) == 5)
//     {
//         puts("该整数的个位数是5");
//     }
//     else
//     {
//         puts("该整数的个位数不是5");
//     }
//     return 0;
// }

/*
判断输入的整数的符号
*/

// int main(void)
// {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);

//     if(no == 0)
//     {
//         puts("该整数为0");
//     }
//     else if(no > 0)
//     {
//         puts("该整数为正数");

//     }
//     else
//     {
//         puts("该整数为负数");
//     }
//     return 0;
// }

// int main(void)
// {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);

//     if(no == 0)
//     {
//         puts("该整数为0");
//     }
//     else if(no > 0)
//     {
//         puts("该整数为正数");

//     }
//     else if(no < 0)
//     {
//         puts("该整数为负数");
//     }
//     return 0;
// }

// int main(void)
// {
//     int num;
//     printf("请输入一个整数：");
//     scanf("%d", &num);
//     if(num > 0)
//     {
//         printf("绝对值是%d\n", num);
//     }
//     else
//     {
// printf("绝对值是%d\n", -num);
//     }
//     return 0;
// }

// int main(void)
// {
//     int n1, n2;
//     puts("请输入两个整数。");
//     printf("整数A："); scanf("%d", &n1);
//     printf("整数B："); scanf("%d", &n2);
//     if(n1 == n2)
//     {
//         puts("A和B相等");
//     }
//     else if(n1 > n2)
//     {
//         puts("A大于B");
//     }
//     else
//     {
//         puts("A小于B");
//     }
//     return 0;
// }

/*
如果输入的整数值为正，则判断该值的奇偶性并显示
*/

// int main(void)
// {
// int no;
// printf("请输入一个整数："); scanf("%d", &no);
// if(no > 0) {
//  if(no % 2 == 0)
//         puts("该整数为偶数。");
//     else
//         puts("该整数为奇数。");

// }   else {
//  printf("您输入的不是正数\a\n");
// }  
//     return 0;
// }

// int main(void)
// {
//     int A = 4;
//     int B = 5;

// printf("A = B...%d\n", (A == B));
// printf("A < B...%d\n", (A < B));
// printf("A > B...%d\n", (A > B));

// A = 5;
// printf("A = B...%d\n", (A == B));
//     return 0;
// }

/*
显示输入的两个整数中较大的数
*/

// int main(void)
// {
//     int n1, n2, max;
//     puts("请输入两个整数。");
//     printf("整数1："); scanf("%d", &n1);
//     printf("整数2："); scanf("%d", &n2);
//     if(n1 > n2) max = n1; else max = n2;
//     printf("较大的数是%d\n", max);
//        return 0;
// }

/*
计算所输入的三个整数中最大值并显示
*/

// int main(void)
// {
//     int n1, n2, n3, max;
//     puts("请输入三个整数。");
//     printf("整数1："); scanf("%d", &n1);
//     printf("整数2："); scanf("%d", &n2);
//     printf("整数3："); scanf("%d", &n3);
//     max = n1;
//     if(n2 > max) max = n2;
//     if(n3 > max) max = n3;
//     printf("最大值是%d。\n", max);
//     return 0;
// }

/*
显示所输入的整数中较大的数
*/

// int main(void)
// {
//     int n1, n2, max;
//     puts("请输入两个整数。");
//     printf("整数1："); scanf("%d", &n1);
//     printf("整数2："); scanf("%d", &n2);
//     max = (n1 > n2) ? n1:n2;
//     printf("较大的数是%d\n", max);

//     return 0;
// }

/*
计算输入的两个整数的差（条件运算符）
*/

// int main(void)
// {
//     int n1, n2;
//     puts("请输入两个整数。");
//     printf("整数1："); scanf("%d", &n1);
//     printf("整数2："); scanf("%d", &n2);
//     printf("它们的差是%d\n", (n1 > n2) ? n1 - n2 : n2 - n1);
//     return 0;
// }

// int main(void)
// {
//     int n1, n2, n3, min;
//     printf("整数1："); scanf("%d", &n1);
//     printf("整数2："); scanf("%d", &n2);
//     printf("整数3："); scanf("%d", &n3);
//     min = n1;
//     if(n2 < min) min = n2; 
//     if(n3 < min) min = n3; 
//     printf("最小的是%d\n", min);
//     return 0;
// }

// int main(void)
// {
//     int n1, n2, n3, n4, max;
//     printf("整数1："); scanf("%d", &n1);
//     printf("整数2："); scanf("%d", &n2);
//     printf("整数3："); scanf("%d", &n3);
//     printf("整数4："); scanf("%d", &n4);
//     max = n1;
//     if(n2 > max) max = n2; 
//     if(n3 > max) max = n3; 
//     if(n4 > max) max = n4; 
//     printf("最大的是%d\n", max);
//     return 0;
// }

// int main(void)
// {
//     int n1, n2;
//     puts("请输入两个整数。");
//     printf("整数1："); scanf("%d", &n1);
//     printf("整数2："); scanf("%d", &n2);
//     if(n1 > n2)
//     printf("它们的差是%d\n", n1 - n2);
//     else
//     printf("它们的差是%d\n", n2 - n1);
//     return 0;
// }

int main(void)
{
    int n1, n2, n3, min1, min2;
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);
    printf("整数3："); scanf("%d", &n3);
    min1 = (n1 > n2) ? n2:n1;
    min2 = (n1 > n3) ? n3:n1;

    printf("最小的是%d\n", (min1 > min2) ? min2 : min1);
    return 0;
}