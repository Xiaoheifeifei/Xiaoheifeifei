#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
输入的整数是奇数还是偶数呢
*/

// int main(void)
// {
// int retry;

// do {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);
//     if(no % 2) 
//     puts("这个整数是奇数。");
//     else
//     puts("这个整数是偶数。");
//     printf("要重复一次吗？【YES···0 / NO···9】：");
//     scanf("%d", &retry);
// } while (retry == 0);
//     return 0;
// }

/*
根据读取的整数值显示所出的拳
*/

// int main(void)
// {
//     int hand;
//     do {
//         printf("请选择出什么拳【石头···0/剪刀···1/布···2】：");
//         scanf("%d", &hand);
//     } while (hand < 0 || hand > 2);

//     printf("你选择了");
//     switch (hand) {
//         case 0: printf("石头\n"); break;
//         case 1: printf("剪刀\n"); break;
//         case 2: printf("布\n"); break;
//     }
//     return 0;
// }

/*
不停输入整数，显示其和及平均值
*/

int main(void)
{
    int sum = 0; //和
    int cnt = 0; //整数个数
    int retry; //是否继续处理
    do {
        int t;
        printf("请输入一个整数：");
        scanf("%d", &t);
        sum = sum + t;
        cnt = cnt + 1;
        printf("是否继续？<Yes···0/No···9>：");
        scanf("%d", &retry);
    } while (retry == 0);
    printf("和为%d,平均值为%.2f", sum, (double)sum / cnt);
    return 0;
}