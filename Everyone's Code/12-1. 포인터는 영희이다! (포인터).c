#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	/* & 연산자 */
	int a;
	a = 2;

	printf("%p \n", &a);

	/* 포인터의 시작 */
	int* p;
	int a;

	p = &a;

	printf("포인터 P에 들어가있는 값 : %p \n", p);
	printf("int 변수 a가 저장된 주소 : %p \n", &a);

	/* * 연산자의 이용 	*/
	int* p;
	int a;

	p = &a;
	a = 2;

	printf("a의 값 : %d \n", a);
	printf("*p의 값 : %d \n", *p);

	/* * 연산자 */
	int* p;
	int a;

	p = &a;
	*p = 3;

	printf("a 의 값 : %d \n", a);
	printf("*p 의 값 : %d \n", *p);

	/* 포인터도 변수이다 */
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