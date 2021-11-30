#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// int main(void)
// {
//     int sum = 0; //和
//     int cnt = 0; //整数个数
//     int retry; //是否继续处理
//     do {
//         int t;
//         printf("请输入一个整数：");
//         scanf("%d", &t);
//         sum += t;
//         cnt += 1;
//         printf("是否继续？<Yes···0/No···9>：");
//         scanf("%d", &retry);
//     } while (retry == 0);
//     printf("和为%d,平均值为%.2f", sum, (double)sum / cnt);
//     return 0;
// }

// int main(void)
// {
//     int retry;
//     do {
//         int no;
//         printf("请输入一个整数：");
//         scanf("%d", &no);
//         if (no == 0)
//         puts("该整数为0。");
//         else if (no > 0)
//         puts("该整数为正数。");
//         else
//         puts("该整数为负数");
//         printf("是否继续【是···1/否···0】：");
//         scanf("%d", &retry);
//     } while (retry == 1);
//     return 0;
// }

int main(void)
{
    int a, b, min, max;
    int sum = 0;
  printf("整数a："); scanf("%d", &a);
  printf("整数b："); scanf("%d", &b);
  min = (a > b) ? b : a;
max = (a > b) ? a : b;
  do {
      sum += min;
      min++;
        
    } while (min <= max);
    printf("大于等于%d小于等于%d的所有整数的和是%d\n", a, b, sum);
    return 0;
}