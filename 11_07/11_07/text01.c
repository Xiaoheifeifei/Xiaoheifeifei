#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	int a = 10;//a ���ڴ���Ҫ����ռ��-4�ֽ�
//	printf("%p\n", &a);//%pר��������ӡ��ַ��
//	int * pa = &a;//pa��������ŵ�ַ�ģ���C������pa��ָ�����
//	//* ˵��pa��ָ�����
//	//int ˵��paִ�еĶ�����int���͵�
//	char ch = 'h';
//		char * pc = &ch;
//	
//		return 0;
//}
//ָ�� ���� ��ַ
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 30;//* �����ò��� *pa����ͨ��pa��ߵĵ�ַ���ҵ�a
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
//�ṹ�������C���Դ����µ����ͳ���
//����һ��ѧ��
struct Stu
{
	char name[20];
	int age;
	double score;
};
//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "����",18, 90 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s %d %lf", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������
	return 0;
}