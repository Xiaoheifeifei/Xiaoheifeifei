#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//��whileѭ���У�continue����������������ѭ��continue��ߵĴ��룬
//			//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//EOF-end of file -�ļ�������־
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):>");
//	//��������
//	//getchar();//����' \n '
//	int tmp = 0;
//	//���������Ķ������
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch > '0' || ch < '9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}
int main()
{
	int i = 1;//��ʼ��
	while (i <= 10)//�жϲ���
	{
		printf("%d ", i);
		i++;//��������
	}
	return 0;
}