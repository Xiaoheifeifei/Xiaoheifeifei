#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// int main(void)
// {
//     int sum = 0; //��
//     int cnt = 0; //��������
//     int retry; //�Ƿ��������
//     do {
//         int t;
//         printf("������һ��������");
//         scanf("%d", &t);
//         sum += t;
//         cnt += 1;
//         printf("�Ƿ������<Yes������0/No������9>��");
//         scanf("%d", &retry);
//     } while (retry == 0);
//     printf("��Ϊ%d,ƽ��ֵΪ%.2f", sum, (double)sum / cnt);
//     return 0;
// }

// int main(void)
// {
//     int retry;
//     do {
//         int no;
//         printf("������һ��������");
//         scanf("%d", &no);
//         if (no == 0)
//         puts("������Ϊ0��");
//         else if (no > 0)
//         puts("������Ϊ������");
//         else
//         puts("������Ϊ����");
//         printf("�Ƿ�������ǡ�����1/�񡤡���0����");
//         scanf("%d", &retry);
//     } while (retry == 1);
//     return 0;
// }

int main(void)
{
    int a, b, min, max;
    int sum = 0;
  printf("����a��"); scanf("%d", &a);
  printf("����b��"); scanf("%d", &b);
  min = (a > b) ? b : a;
max = (a > b) ? a : b;
  do {
      sum += min;
      min++;
        
    } while (min <= max);
    printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d\n", a, b, sum);
    return 0;
}