#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
����������������нϴ����ͽ�С������ʾ
*/

// int main(void)
// {
// int n1, n2, max, min;
// printf("����1��"); scanf("%d", &n1);
// printf("����2��"); scanf("%d", &n2);
// if(n1 > n2) {
//     max = n1;
//     min = n2;
// } else {
//     max = n2;
//     min = n1;
// }
// printf("�ϴ������%d\n", max);
// printf("��С������%d\n", min);
//     return 0;
// }

/*
��ʾ��������·������ļ���
*/

// int main(void)
// {
//     int month;
//     printf("�������·ݣ�");
//     scanf("%d", &month);

//    if (month >= 3 && month <= 5)
//     printf("%d���Ǵ���\n", month);
//    else if (month >= 6 && month <= 8)
//     printf("%d�����ļ�\n", month);
//    else if (month >= 9 && month <= 11)
//     printf("%d�����＾\n", month);
//    else if (month == 1 || month == 2 || month == 12)
//     printf("%d���Ƕ���\n", month);
//    else
//     printf("%d�²����ڣ�����\a\n", month);
//     return 0;
// }

// int main(void)
// {
//     int a, b, c;
//     puts("����������������");
//     printf("����A��"); scanf("%d", &a);
//     printf("����B��"); scanf("%d", &b);
//     printf("����C��"); scanf("%d", &c);
//     if (a == b && b == c)
//     printf("����ֵ�����\n");
//     else if (a == b || b == c || a == c)
//     printf("������ֵ���\n");
//     else 
//     printf("����ֵ������ͬ\n");
//     return 0;
// }

// int main(void)
// {
//     int a, b, c;
//     puts("����������������");
//     printf("����A��"); scanf("%d", &a);
//     printf("����B��"); scanf("%d", &b);
//         c = ((a > b) ? a - b : b - a);
//         if( c <= 10 || c == 0)
//         printf("���ǵĲ�С�ڵ���10\n");
//         else
//         printf("���ǵĲ���ڵ���11\n");
//     //}
    
//     return 0;
// }

/*
��ʾ�������������3������
*/

// int main(void)
// {
//     int no;
//     printf("������һ��������");
//     scanf("%d", &no);
//     switch(no % 3) {
//         case 0 : puts("�����ܱ�3������"); break;
//         case 1 : puts("��������3��������1��"); break;
//         case 2 : puts("��������3��������2"); break;
//     }

//     return 0;
// }

/*
ȷ��switch��䶯���ĳ���
*/

int main(void)
{
    int sw;
    printf("������");
    scanf("%d", &sw);
    switch (sw) {
        case 1 : puts("A"); puts("B"); break;
        case 2 : puts("C");
        case 5 : puts("D"); break;
        case 6 :
        case 7 : puts("E"); break;
        default : puts("F"); break;
    }
    return 0;
}