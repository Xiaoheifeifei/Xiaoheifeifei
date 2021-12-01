#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// int main(void)
// {
//     int i, no;
//     printf("请输入一个正整数：");
//     scanf("%d", &no);
//     i = 0;
//     while (i <= no)
//         printf("%d ", i++); //i的值在显示之后递增
//         printf("\n");
//     return 0;
// }

// int main(void)
// {
//     int i, no;
//     printf("请输入一个正整数：");
//     scanf("%d", &no);
//     i = 1;
//     while (i <= no)
//         printf("%d ", i++); //i的值在显示之后递增
//         if (no < 0)
//     return 0;
// }

// int main(void)
// {
//     int i, no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);
//        i = 2;
//     while (i <= no) {
//  printf("%d ", i);
//   i += 2;
//     }
 
//     return 0;
// }

int main(void)
{
    int i, no;
    printf("请输入一个整数：");
    scanf("%d", &no);
       i = 2;
    while (i <= no) {
 printf("%d ", i);
  i *= 2;
    }
 
    return 0;
}

