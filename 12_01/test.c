#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// int main(void)
// {
//     int no;
//     printf("请输入一个正整数：");
//     scanf("%d", &no);
//     while (no >= 0) {
//         printf("%d ", no);
//         no--;
//     }
//     while (no >= 0) {
//         printf("\n");
//     }
//     return 0;
// }

/*
从输入的整数倒数到0
*/

// int main(void)
// {
//     int no;
//     printf("请输入一个正整数：");
//     scanf("%d", &no);
//     while (no >= 0)
//     printf("%d ", no--);
//     printf("\n");
//     return 0;
// }

// int main(void)
// {
//     int no;
//     printf("请输入一个正整数：");
//     scanf("%d", &no);
//     while (no >= 1)
//     printf("%d ", no--);
//     while (no >= 0)
//     printf("\n");
//     return 0;
// }

/*
递增显示从0到输入的正整数为止的各个整数
*/

int main(void)
{
    int i, no;
    printf("请输入一个正整数：");
    scanf("%d", &no);
    i = 0;
    while (i <= no)
        printf("%d ", i++);
        printf("\n");
    return 0;
}
