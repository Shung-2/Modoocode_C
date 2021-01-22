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
	///* 리턴값이 없는 함수 */
	//int a = 1;
	//printf("Before : %d \n", a);
	//add_one(&a);
	//printf("After : %d \n", a);

	//int i = i;
	//i = a();

	///* void 형 변수?? */
	//void a;
	//a = 3;
	//return 0;

	///* b의 값을 보려면 */
	//void* a;
	//double b = 123.3;

	//a = &b;

	//printf("%lf", *(double *)a);
	
	///* 임의의 주소값 p로 부터 byte 만큼 읽는 함수 */
	//int arr[1] = { 0x123456789 };
	//printf("%x \n", arr[0]);
	//read_char(arr, 4);

	///* main 함수의 인자라고?? */
	//printf("받은 인자의 개수 : %d \n", argc);
	//printf("이 프로그램의 경로 : %s \n", argv[0]);

	/* 인자를 가지는 메인 함수 */
	printf("받은 인자의 개수 : %d \n", argc);

	for (int i = 0; i < argc; i++)
	{
		printf("이 프로그램이 받은 인자 : %s \n", argv[i]);
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