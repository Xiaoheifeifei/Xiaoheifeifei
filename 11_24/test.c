#define _CRT_SECURE_NO_WARNINGS 1 4
#include <stdio.h>
// int main(void)
// {
//     int height;
// double weight;

//     printf("������������ߣ�");
//     scanf("%d", &height);
//     weight = (double)(height-100)*0.9;
// printf("���ı�׼������%4.1f����\n", weight);
//     return 0;
// }

/*
�ڶ����ܽ�
*/

// int main(void)
// {
// int a, b; //int��ʾ����
// double r; //double��ʾ��������r��ʾ�뾶
// printf("����a��b��ֵ��");
// scanf("%d%d", &a, &b);

// printf("a + b = %d\n", a + b);
// printf("a - b = %d\n", a - b);
// printf("a * b = %d\n", a * b);
// printf("a + b = %d\n", a + b);
// printf("a %% b = %d\n", a % b);

// printf("(a + b)/2 = %d\n", (a + b)/2);

// printf("ƽ��ֵ = %f\n\n", (double)(a + b)/2);

// printf("�뾶��");
// scanf("%lf",&r);

// printf("�뾶Ϊ%.3f��Բ�������%.3f��\n", r, 3.14 * r * r);
//     return 0;
// }

/*
����������ܱ�5������
*/

// int main(void)
// {
//     int no;
//     printf("������һ��������");
//     scanf("%d", &no);

//     if(no % 5)
//     {
//         puts("������������ܱ�5������");
//     }
//     return 0;
// }

/*
�����������������
*/

int main(void)
{
int no;

printf("������һ��������");
scanf("%d", &no);

if(no % 2)
{
    printf("�����������������");
}
    return 0;
}