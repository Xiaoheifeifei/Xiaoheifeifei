#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// int main(void)
// {
//     int no;
//     printf("������һ����������");
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
�����������������0
*/

// int main(void)
// {
//     int no;
//     printf("������һ����������");
//     scanf("%d", &no);
//     while (no >= 0)
//     printf("%d ", no--);
//     printf("\n");
//     return 0;
// }

// int main(void)
// {
//     int no;
//     printf("������һ����������");
//     scanf("%d", &no);
//     while (no >= 1)
//     printf("%d ", no--);
//     while (no >= 0)
//     printf("\n");
//     return 0;
// }

/*
������ʾ��0�������������Ϊֹ�ĸ�������
*/

int main(void)
{
    int i, no;
    printf("������һ����������");
    scanf("%d", &no);
    i = 0;
    while (i <= no)
        printf("%d ", i++);
        printf("\n");
    return 0;
}
