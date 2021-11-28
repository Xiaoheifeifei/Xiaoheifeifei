#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// int main(void)
// {
//    int no;
//    printf("请输入一个整数：");
//    scanf("%d", &no);
//    switch (no % 2) {
//        case 0 : puts("该整数是偶数。"); break;
//        case 1 : puts("该整数是奇数。"); break;
//    }
//     return 0;
// }

int main(void)
{
    int month;
    printf("请输入月份：");
    scanf("%d", &month);
    switch(month) {
        case 3 :
        case 4 :
        case 5 : puts("春季"); break;
        case 6 :
        case 7 :
        case 8 : puts("夏季"); break;
        case 9 :
        case 10 :
        case 11 : puts("秋季"); break;
        case 12 :
        case 1 :
        case 2 : puts("冬季"); break;
        default : puts("输错了您内"); break;
    }
    return 0;
}