#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
�������������������ż����
*/

// int main(void)
// {
// int retry;

// do {
//     int no;
//     printf("������һ��������");
//     scanf("%d", &no);
//     if(no % 2) 
//     puts("���������������");
//     else
//     puts("���������ż����");
//     printf("Ҫ�ظ�һ���𣿡�YES������0 / NO������9����");
//     scanf("%d", &retry);
// } while (retry == 0);
//     return 0;
// }

/*
���ݶ�ȡ������ֵ��ʾ������ȭ
*/

// int main(void)
// {
//     int hand;
//     do {
//         printf("��ѡ���ʲôȭ��ʯͷ������0/����������1/��������2����");
//         scanf("%d", &hand);
//     } while (hand < 0 || hand > 2);

//     printf("��ѡ����");
//     switch (hand) {
//         case 0: printf("ʯͷ\n"); break;
//         case 1: printf("����\n"); break;
//         case 2: printf("��\n"); break;
//     }
//     return 0;
// }

/*
��ͣ������������ʾ��ͼ�ƽ��ֵ
*/

int main(void)
{
    int sum = 0; //��
    int cnt = 0; //��������
    int retry; //�Ƿ��������
    do {
        int t;
        printf("������һ��������");
        scanf("%d", &t);
        sum = sum + t;
        cnt = cnt + 1;
        printf("�Ƿ������<Yes������0/No������9>��");
        scanf("%d", &retry);
    } while (retry == 0);
    printf("��Ϊ%d,ƽ��ֵΪ%.2f", sum, (double)sum / cnt);
    return 0;
}