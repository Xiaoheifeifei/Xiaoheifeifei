#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// int main(void)
// {
//     int no;
//     printf("������һ��������");
//     scanf("%d", &no);
//     if(no % 5)
//     {
//         puts("���������ܱ�5����\n");
//     }
//     else
//     {
//         printf("�������ܱ�5����\n");
//     }
//     return 0;
// }

// int main(void)
// {
//     int no;
//     printf("������һ��������");
//     scanf("%d", &no);
//     if(no % 2)
//     {
//         puts("������������\n");
//     }
//     else
//     {
//         printf("��������ż��\n");
//     }
//     return 0;
// }

// int main(void)
// {
//     int a, b;
//     puts("���������������ġ�");
// printf("����A��"); scanf("%d", &a);
// printf("����B��"); scanf("%d", &b);
// if(a % b)
// {
//     printf("B����A��Լ��\n");
// }
// else
// {
//     printf("B��A��Լ��\n");
// }
//     return 0;
// }

/*
���������ֵ�Ƿ�Ϊ0
*/

// int main(void)
// {
//     int num;

//     printf("������һ��������");
//     scanf("%d", &num);
//     if(num)
//     {
//         puts("����������0��");
//     }
//     else
//     {
//         puts("��������0��");
//     }
//     return 0;
// }

/*
������������������
*/

int main(void)
{
    int n1, n2;
    puts("����������������");
    printf("����1��"); scanf("%d", &n1);
    printf("����2��"); scanf("%d", &n2);

    if(n1 == n2)
    {
        puts("������ȡ�");
    }
    else
    {
        puts("���ǲ���ȡ�");
    }
    return 0;
}