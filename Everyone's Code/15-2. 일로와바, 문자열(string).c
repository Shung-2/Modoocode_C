#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main ()
{
	/* �̻��� scanf */
	int num;
	char c;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &c);
	// printf("%c ���", c);

	/* �׷��ٸ� %s ��? */
	char str[30];
	int i;

	scanf("%d", &i);
	scanf("%s", str);

	printf("str : %s", str);

	/* ������ stdin ���� */
	char str1[10], str2[10];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str1);
	printf("�Է��� ���ڿ� : %s \n", str1);

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str2);
	printf("�Է��� ���ڿ� : %s \n", str2);

	/*
	���� ����

	�����Ͻ� ���� �ݵ�� MS �迭�� �����Ϸ��� ������ ���ּ���.
	��, Visual Studio �迭�� �����Ϸ��� ������.
	�� ���� ���� ������ �𸣸� �׳� �� �ϴ���� �ϸ�˴ϴ�.

	gcc ������ ���������� �۵����� �ʴ� ������ �ڵ� �Դϴ�.
	*/

	int num;
	char c;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	// fflush(stdin); �۵�����
	getchar();

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &c);

	/* c �� ������ ������ ��¦ ���ƾ� �ϹǷ� �ڵ带 �ణ �����߽��ϴ� */
	int num, i;
	char c;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	getchar();

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &c);

	printf("�Է��� ���� : %c", c);
}