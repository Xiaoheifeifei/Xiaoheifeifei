#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
// int main(void)
// {
//     int num;
//     printf("������һ��������");
//     scanf("%d", &num);
//     printf("����ȡ��֮���ֵ��%d��\n", -num);
//     return 0;
// }

/*
��ȡ������������ʾ�����ǵ�ƽ��ֵ
*/

// int main(void)
// {
//     int a, b;

//     puts("����������������");
//     printf("����a��"); scanf("%d", &a);
//     printf("����b��"); scanf("%d", &b);

//     printf("���ǵ�ƽ��ֵ��%d��\n", (a + b) / 2);
//     return 0;
// }

/*
�����͸�����
*/

// int main(void)
// {
//     int n; //����
//     double x; //������
    
//     n = 9.99;
//     x = 9.99;

//     printf("int �ͱ���n��ֵ��%d\n", n);
// printf("n / 2 = %d\n", n / 2);
//     printf("double �ͱ���x��ֵ��%f\n", x);
// printf("x / 2.0 = %f\n", x / 2.0);

//     return 0;
// }

// int main(void)
// {
//     double vx, vy;
//     puts("��������������");
//     printf("ʵ��vx��"); scanf("%lf", &vx);
//     printf("ʵ��vy��"); scanf("%lf", &vy);
// printf("vx + vy = %f\n", vx + vy);
// printf("vx - vy = %f\n", vx - vy);
// printf("vx * vy = %f\n", vx * vy);
// printf("vx / vy = %f\n", vx / vy);
//     return 0;
// }

// int main(void)
// {
//     double x;
//     printf("������һ��ʵ����");
//     scanf("%lf", &x);
//     printf("���������%f\n", x);
//     return 0;
// }

// int main(void)
// {
//     int n1, n2, n3, n4;
//     double m1, m2, m3, m4;
//     n1 = 5 / 2;
//     n2 = 5.0 / 2.0;
//     n3 = 5.0 / 2;
//     n4 = 5 / 2.0;
    
//     m1 = 5 / 2;
// m2 = 5.0 / 2.0;
// m3 = 5.0 / 2;
// m4 = 5 / 2.0;

// printf("n1 = %d\n", n1);
// printf("n2 = %d\n", n2);
// printf("n3 = %d\n", n3);
// printf("n4 = %d\n\n", n4);

// printf("m1 = %f\n", m1);
// printf("m2 = %f\n", m2);
// printf("m3 = %f\n", m3);
// printf("m4 = %f\n", m4);
//     return 0;
// }

/*
��ȡ�����������ø�������ʾ���ǵ�ƽ��ֵ
*/

int main(void)
{
    int a, b;
    puts("����������������");
    printf("����a��"); scanf("%d", &a);
    printf("����b��"); scanf("%d", &b);
    printf("���ǵ�ƽ��ֵ��%f��\n", (a + b) / 2.0);
    return 0;
}