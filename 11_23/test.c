#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
// int main(void)
// {
//     int a, b;
//     puts("����������������");
//     printf("����a��"); scanf("%d", &a);
//     printf("����b��"); scanf("%d", &b);

//     printf("���ǵ�ƽ��ֵ��%f��\n", (double) (a + b) / 2); //����ת��
//     return 0;
// }

// int main(void)
// {
//     int a, b;
//     puts("����������������");
//     printf("����a��"); scanf("%d", &a);
//     printf("����b��"); scanf("%d", &b);

//     printf("a��b��%f%%��\n", (double) a * 100 / b);
//     return 0;
// }

/*
��ȡ��������������ʾ���ǵĺϼ�ֵ��ƽ��ֵ
*/

// int main(void)
// {
//     int a, b, c;
// int sum; /* �ϼ�ֵ */
// double ave; /* ƽ��ֵ */

// puts("����������������");
// printf("����a��"); scanf("%d", &a);
// printf("����b��"); scanf("%d", &b);
// printf("����c��"); scanf("%d", &c);

// sum = a + b + c;
// ave = (double)sum / 3; //����ת��

// printf("���ǵĺϼ�ֵ��%5d\n", sum); //���99999
// printf("���ǵ�ƽ��ֵ��%5.1f\n", ave); //���999.9
//     return 0;
// }

/*
��ʽ�������͸�����
*/

int main(void)
{
    printf("[%d\n], 123");
    printf("[%.4d\n], 123");
    printf("[%4d\n], 123");
    printf("[%04d\n], 123");
    printf("[%-4d\n\n], 123");

    printf("[%d\n], 12345");
    printf("[%.3d\n], 12345");
    printf("[%3d\n], 12345");
    printf("[%03d\n], 12345");
    printf("[%-3d\n\n], 12345");

    printf("[%f\n], 123.13");
    printf("[%.1f\n], 123.13");
    printf("[%6.1f\n\n], 123.13");

    printf("[%f\n], 123.13");
    printf("[%.1f\n], 123.13");
    printf("[%4.1f\n], 123.13");

    return 0;
}