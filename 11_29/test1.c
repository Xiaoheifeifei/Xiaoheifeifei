#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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