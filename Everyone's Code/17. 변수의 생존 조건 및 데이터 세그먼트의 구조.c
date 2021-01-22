#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

void function()
{
	int a = 2;
}

int global = 3;

int function2()
{
	global++;
	return 0;
}

int how_many_called = 0;
int function3()
{
	how_many_called++;
	printf("function 3called : %d \n", how_many_called);
}

int how_many_called2 = 0;
int function4()
{
	how_many_called2++;
	printf("function 4 called: %d \n", how_many_called2);
}

int* function5()
{
	int a = 2;
	return &a;
}

int function6()
{
	static int a = 2;
	return &a;
}

int function7()
{
	static int how_many_called3 = 0;
	how_many_called3++;
	printf("function7 called : %d \n", how_many_called3);
}

int function8()
{
	static int how_many_called4 = 0;
	how_many_called4++;
	printf("function8 called : %d \n", how_many_called4);
}

int main()
{
	/* ������ ���� ���� */
	int a = 3;
	function();
	printf("a = %d \n", a);

	/* ������ ���� ����2 */
	int a = 3;
	{
		int a = 4;
		printf("a = %d \n", a);
	}
	printf("a = %d \n", a);

	/* ���� ���� */
	global = 10;
	function2();
	printf("%d \n", global);

	/* ���� ������ �ʱ�ȭ ? */
	function2();
	printf("%d \n", global);

	/* �Լ� ȣ�� Ƚ�� ���� */
	function3();
	function3();
	function3();
	function3();
	
	/* ���� ������ ������ */
	function3();
	function4();
	function3();
	function4();
	function4();
	function4();
	function3();
	function3();
	function4();

	/* ������ ���� �Ⱓ */
	int* pa = function5();
	printf("%d \n", *pa);

	/* ���� ���� */
	int* pa = function6();
	printf("%d \n", *pa);

	/* ���� ������ Ȱ�� */
	function7();
	function8();
	function7();
	function8();
	function8();
	function8();
	function7();
	function7();
	function8();

	int i;
	char* str = "Hello, Baby";
	char arr[20] = "WHATTHEHECK";

	printf("global : %p \n", &global);
	printf("i : %p \n", &i);
	printf("str : %p \n", str);
	printf("arr : %p \n", arr);
}