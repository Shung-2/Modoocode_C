#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

void add_one(int* p)
{
	(*p) += 1;
}

void a();

int read_char(void* p, int byte);

int main(int argc, char **argv)
{
	///* ���ϰ��� ���� �Լ� */
	//int a = 1;
	//printf("Before : %d \n", a);
	//add_one(&a);
	//printf("After : %d \n", a);

	//int i = i;
	//i = a();

	///* void �� ����?? */
	//void a;
	//a = 3;
	//return 0;

	///* b�� ���� ������ */
	//void* a;
	//double b = 123.3;

	//a = &b;

	//printf("%lf", *(double *)a);
	
	///* ������ �ּҰ� p�� ���� byte ��ŭ �д� �Լ� */
	//int arr[1] = { 0x123456789 };
	//printf("%x \n", arr[0]);
	//read_char(arr, 4);

	///* main �Լ��� ���ڶ��?? */
	//printf("���� ������ ���� : %d \n", argc);
	//printf("�� ���α׷��� ��� : %s \n", argv[0]);

	/* ���ڸ� ������ ���� �Լ� */
	printf("���� ������ ���� : %d \n", argc);

	for (int i = 0; i < argc; i++)
	{
		printf("�� ���α׷��� ���� ���� : %s \n", argv[i]);
	}
}

void a() {}

int read_char(void* p, int byte)
{
	do
	{
		printf("%x \n", *(char*)p);
		byte--;
		p = (char*)p + 1;
	} while (p && byte);
}