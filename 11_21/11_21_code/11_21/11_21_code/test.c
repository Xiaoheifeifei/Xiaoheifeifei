#define _CRT_SECURE_NO_WARNINGS 1 
# include <stdio.h>
// int main(void)
// {
//     int width;
//     int heigth;
//     puts("求长方体的面积。");
    
//     printf("长：");
//     scanf("%d",&width);
//     printf("宽：");
//       scanf("%d",&heigth);
//     printf("面积是%d。\n",width*heigth);
  
//     return 0;
// }

// int main(void)
// {
//     int vx, vy;
//     puts("请输入两个整数：");
//     printf("整数vx:"); scanf("%d",&vx);
//     printf("整数vy:"); scanf("%d",&vy);

//     printf("vx + vy = %d\n", vx + vy);
//     printf("vx - vy = %d\n", vx - vy);
//     printf("vx * vy = %d\n", vx * vy);
//     printf("vx / vy = %d\n", vx / vy);
//     printf("vx %% vy = %d\n", vx % vy);
//     return 0;
// }

//读取出的整数的最后一位数字

//  int main(void)
//  {
//      int no;
//      printf("请输入一个整数：");
//      scanf("%d",&no); /*读取整数的值*/
//      printf("最后一位是%d\n", no % 10); // no % 10 所得的余数
//      return 0;
//  }
 
 /*
 读取两个整数，显示它们的商和余数
 */

// int main(void)
// {
//     int a, b;
//     puts("请输入两个整数。");
//     printf("整数a:"); scanf("%d",&a);
//     printf("整数b:"); scanf("%d",&b);
//      printf("a除以b得%d 余%d。\n", a / b, a % b);
//     return 0;
// }

// int main(void)
// {
//     int x, y;
//     puts("请输入两个整数。");
//     printf("整数x:"); scanf("%d",&x);
//     printf("整数y:"); scanf("%d",&y);


//      printf("x的值是y的%d%%\n", x * 100/ y);
//     return 0;
// }

int main(void)
{
    int a, b;
    puts("请输入两个整数。");
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);


     printf("它们的和是%d，积是%d。\n", a + b, a * b);
    return 0;
}
