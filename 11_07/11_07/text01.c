#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	int a = 10;//a 在内存中要分配空间的-4字节
//	printf("%p\n", &a);//%p专门用来打印地址的
//	int * pa = &a;//pa是用来存放地址的，在C语言中pa是指针变量
//	//* 说明pa是指针变量
//	//int 说明pa执行的对象是int类型的
//	char ch = 'h';
//		char * pc = &ch;
//	
//		return 0;
//}
//指针 就是 地址
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 30;//* 解引用操作 *pa就是通过pa里边的地址，找到a
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//结构体可以让C语言创建新的类型出来
//创建一个学生
struct Stu
{
	char name[20];
	int age;
	double score;
};
//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "张三",18, 90 };//结构体的创建和初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s %d %lf", ps->name, ps->age, ps->score);//结构体指针->成员变量名
	return 0;
}