#define _CRT_SECURE_NO_WARNINGS 1 
# include <stdio.h>
// int main(void)
// {
//     int width;
//     int heigth;
//     puts("�󳤷���������");
    
//     printf("����");
//     scanf("%d",&width);
//     printf("��");
//       scanf("%d",&heigth);
//     printf("�����%d��\n",width*heigth);
  
//     return 0;
// }

// int main(void)
// {
//     int vx, vy;
//     puts("����������������");
//     printf("����vx:"); scanf("%d",&vx);
//     printf("����vy:"); scanf("%d",&vy);

//     printf("vx + vy = %d\n", vx + vy);
//     printf("vx - vy = %d\n", vx - vy);
//     printf("vx * vy = %d\n", vx * vy);
//     printf("vx / vy = %d\n", vx / vy);
//     printf("vx %% vy = %d\n", vx % vy);
//     return 0;
// }

//��ȡ�������������һλ����

//  int main(void)
//  {
//      int no;
//      printf("������һ��������");
//      scanf("%d",&no); /*��ȡ������ֵ*/
//      printf("���һλ��%d\n", no % 10); // no % 10 ���õ�����
//      return 0;
//  }
 
 /*
 ��ȡ������������ʾ���ǵ��̺�����
 */

// int main(void)
// {
//     int a, b;
//     puts("����������������");
//     printf("����a:"); scanf("%d",&a);
//     printf("����b:"); scanf("%d",&b);
//      printf("a����b��%d ��%d��\n", a / b, a % b);
//     return 0;
// }

// int main(void)
// {
//     int x, y;
//     puts("����������������");
//     printf("����x:"); scanf("%d",&x);
//     printf("����y:"); scanf("%d",&y);


//      printf("x��ֵ��y��%d%%\n", x * 100/ y);
//     return 0;
// }

int main(void)
{
    int a, b;
    puts("����������������");
    printf("����a:"); scanf("%d",&a);
    printf("����b:"); scanf("%d",&b);


     printf("���ǵĺ���%d������%d��\n", a + b, a * b);
    return 0;
}
