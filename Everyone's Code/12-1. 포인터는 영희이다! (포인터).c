#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	/* & ������ */
	int a;
	a = 2;

	printf("%p \n", &a);

	/* �������� ���� */
	int* p;
	int a;

	p = &a;

	printf("������ P�� ���ִ� �� : %p \n", p);
	printf("int ���� a�� ����� �ּ� : %p \n", &a);

	/* * �������� �̿� 	*/
	int* p;
	int a;

	p = &a;
	a = 2;

	printf("a�� �� : %d \n", a);
	printf("*p�� �� : %d \n", *p);

	/* * ������ */
	int* p;
	int a;

	p = &a;
	*p = 3;

	printf("a �� �� : %d \n", a);
	printf("*p �� �� : %d \n", *p);

	/* �����͵� �����̴� */
	int a;
	int b;
	int* p;

	p = &a;
	*p = 2;
	p = &b;
	*p = 4;

	printf("a : %d \n", a);
	printf("b : %d \n", b);
}