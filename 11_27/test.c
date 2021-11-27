#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
计算所输入的整数中较大数和较小数并显示
*/

// int main(void)
// {
// int n1, n2, max, min;
// printf("整数1："); scanf("%d", &n1);
// printf("整数2："); scanf("%d", &n2);
// if(n1 > n2) {
//     max = n1;
//     min = n2;
// } else {
//     max = n2;
//     min = n1;
// }
// printf("较大的数是%d\n", max);
// printf("较小的数是%d\n", min);
//     return 0;
// }

/*
显示所输入的月份所处的季节
*/

// int main(void)
// {
//     int month;
//     printf("请输入月份：");
//     scanf("%d", &month);

//    if (month >= 3 && month <= 5)
//     printf("%d月是春季\n", month);
//    else if (month >= 6 && month <= 8)
//     printf("%d月是夏季\n", month);
//    else if (month >= 9 && month <= 11)
//     printf("%d月是秋季\n", month);
//    else if (month == 1 || month == 2 || month == 12)
//     printf("%d月是冬季\n", month);
//    else
//     printf("%d月不存在！！！\a\n", month);
//     return 0;
// }

// int main(void)
// {
//     int a, b, c;
//     puts("请输入三个整数。");
//     printf("整数A："); scanf("%d", &a);
//     printf("整数B："); scanf("%d", &b);
//     printf("整数C："); scanf("%d", &c);
//     if (a == b && b == c)
//     printf("三个值都相等\n");
//     else if (a == b || b == c || a == c)
//     printf("有两个值相等\n");
//     else 
//     printf("三个值各不相同\n");
//     return 0;
// }

// int main(void)
// {
//     int a, b, c;
//     puts("请输入两个整数。");
//     printf("整数A："); scanf("%d", &a);
//     printf("整数B："); scanf("%d", &b);
//         c = ((a > b) ? a - b : b - a);
//         if( c <= 10 || c == 0)
//         printf("它们的差小于等于10\n");
//         else
//         printf("它们的差大于等于11\n");
//     //}
    
//     return 0;
// }

/*
显示输入的整数除以3的余数
*/

// int main(void)
// {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);
//     switch(no % 3) {
//         case 0 : puts("该数能被3整除。"); break;
//         case 1 : puts("该数除以3的余数是1。"); break;
//         case 2 : puts("该数除以3的余数是2"); break;
//     }

//     return 0;
// }

/*
确认switch语句动作的程序
*/

int main(void)
{
    int sw;
    printf("整数：");
    scanf("%d", &sw);
    switch (sw) {
        case 1 : puts("A"); puts("B"); break;
        case 2 : puts("C");
        case 5 : puts("D"); break;
        case 6 :
        case 7 : puts("E"); break;
        default : puts("F"); break;
    }
    return 0;
}