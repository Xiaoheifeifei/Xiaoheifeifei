#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
��������������
*/

// int main(void)
// {
// int n1, n2;
// puts("����������������");
// printf("����1��"); scanf("%d", &n1);
// printf("����2��"); scanf("%d", &n2);

// if(n1 != n2)
// {
//     puts("���ǲ���ȡ�");
// }
// else
// {
//     puts("������ȡ�");
// }
//     return 0;
// }

/*
��λ����5��
*/

// int main(void)
// {
//     int num;
//     printf("������һ��������");
//     scanf("%d", &num);
//     if((num % 10) == 5)
//     {
//         puts("�������ĸ�λ����5");
//     }
//     else
//     {
//         puts("�������ĸ�λ������5");
//     }
//     return 0;
// }

/*
�ж�����������ķ���
*/

// int main(void)
// {
//     int no;
//     printf("������һ��������");
//     scanf("%d", &no);

//     if(no == 0)
//     {
//         puts("������Ϊ0");
//     }
//     else if(no > 0)
//     {
//         puts("������Ϊ����");

//     }
//     else
//     {
//         puts("������Ϊ����");
//     }
//     return 0;
// }

// int main(void)
// {
//     int no;
//     printf("������һ��������");
//     scanf("%d", &no);

//     if(no == 0)
//     {
//         puts("������Ϊ0");
//     }
//     else if(no > 0)
//     {
//         puts("������Ϊ����");

//     }
//     else if(no < 0)
//     {
//         puts("������Ϊ����");
//     }
//     return 0;
// }

// int main(void)
// {
//     int num;
//     printf("������һ��������");
//     scanf("%d", &num);
//     if(num > 0)
//     {
//         printf("����ֵ��%d\n", num);
//     }
//     else
//     {
// printf("����ֵ��%d\n", -num);
//     }
//     return 0;
// }

// int main(void)
// {
//     int n1, n2;
//     puts("����������������");
//     printf("����A��"); scanf("%d", &n1);
//     printf("����B��"); scanf("%d", &n2);
//     if(n1 == n2)
//     {
//         puts("A��B���");
//     }
//     else if(n1 > n2)
//     {
//         puts("A����B");
//     }
//     else
//     {
//         puts("AС��B");
//     }
//     return 0;
// }

/*
������������ֵΪ�������жϸ�ֵ����ż�Բ���ʾ
*/

// int main(void)
// {
// int no;
// printf("������һ��������"); scanf("%d", &no);
// if(no > 0) {
//  if(no % 2 == 0)
//         puts("������Ϊż����");
//     else
//         puts("������Ϊ������");

// }   else {
//  printf("������Ĳ�������\a\n");
// }  
//     return 0;
// }

// int main(void)
// {
//     int A = 4;
//     int B = 5;

// printf("A = B...%d\n", (A == B));
// printf("A < B...%d\n", (A < B));
// printf("A > B...%d\n", (A > B));

// A = 5;
// printf("A = B...%d\n", (A == B));
//     return 0;
// }

/*
��ʾ��������������нϴ����
*/

// int main(void)
// {
//     int n1, n2, max;
//     puts("����������������");
//     printf("����1��"); scanf("%d", &n1);
//     printf("����2��"); scanf("%d", &n2);
//     if(n1 > n2) max = n1; else max = n2;
//     printf("�ϴ������%d\n", max);
//        return 0;
// }

/*
������������������������ֵ����ʾ
*/

// int main(void)
// {
//     int n1, n2, n3, max;
//     puts("����������������");
//     printf("����1��"); scanf("%d", &n1);
//     printf("����2��"); scanf("%d", &n2);
//     printf("����3��"); scanf("%d", &n3);
//     max = n1;
//     if(n2 > max) max = n2;
//     if(n3 > max) max = n3;
//     printf("���ֵ��%d��\n", max);
//     return 0;
// }

/*
��ʾ������������нϴ����
*/

// int main(void)
// {
//     int n1, n2, max;
//     puts("����������������");
//     printf("����1��"); scanf("%d", &n1);
//     printf("����2��"); scanf("%d", &n2);
//     max = (n1 > n2) ? n1:n2;
//     printf("�ϴ������%d\n", max);

//     return 0;
// }

/*
������������������Ĳ�����������
*/

// int main(void)
// {
//     int n1, n2;
//     puts("����������������");
//     printf("����1��"); scanf("%d", &n1);
//     printf("����2��"); scanf("%d", &n2);
//     printf("���ǵĲ���%d\n", (n1 > n2) ? n1 - n2 : n2 - n1);
//     return 0;
// }

// int main(void)
// {
//     int n1, n2, n3, min;
//     printf("����1��"); scanf("%d", &n1);
//     printf("����2��"); scanf("%d", &n2);
//     printf("����3��"); scanf("%d", &n3);
//     min = n1;
//     if(n2 < min) min = n2; 
//     if(n3 < min) min = n3; 
//     printf("��С����%d\n", min);
//     return 0;
// }

// int main(void)
// {
//     int n1, n2, n3, n4, max;
//     printf("����1��"); scanf("%d", &n1);
//     printf("����2��"); scanf("%d", &n2);
//     printf("����3��"); scanf("%d", &n3);
//     printf("����4��"); scanf("%d", &n4);
//     max = n1;
//     if(n2 > max) max = n2; 
//     if(n3 > max) max = n3; 
//     if(n4 > max) max = n4; 
//     printf("������%d\n", max);
//     return 0;
// }

// int main(void)
// {
//     int n1, n2;
//     puts("����������������");
//     printf("����1��"); scanf("%d", &n1);
//     printf("����2��"); scanf("%d", &n2);
//     if(n1 > n2)
//     printf("���ǵĲ���%d\n", n1 - n2);
//     else
//     printf("���ǵĲ���%d\n", n2 - n1);
//     return 0;
// }

int main(void)
{
    int n1, n2, n3, min1, min2;
    printf("����1��"); scanf("%d", &n1);
    printf("����2��"); scanf("%d", &n2);
    printf("����3��"); scanf("%d", &n3);
    min1 = (n1 > n2) ? n2:n1;
    min2 = (n1 > n3) ? n3:n1;

    printf("��С����%d\n", (min1 > min2) ? min2 : min1);
    return 0;
}