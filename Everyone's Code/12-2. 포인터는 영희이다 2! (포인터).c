#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	/* 상수 포인터? */
	int a;
	int b;
	const int* pa = &a;

	*pa = 3;  // 올바르지 않은 문장
	pa = &b;  // 올바른 문장

	/* 상수 포인터? 2*/
	int a;
	int b;
	int* const pa = &a;

	*pa = 3;  // 올바른 문장
	pa = &b;  // 올바르지 않은 문장

	/* 상수 포인터? 3 */
	int a;
	int b;
	const int* const pa = &a;

	*pa = 3;  // 올바르지 않은 문장
	pa = &b;  // 올바르지 않은 문장

	/* 포인터의 덧셈 */
	int a;
	int* pa;
	pa = &a;

	printf("pa의 값 : %p \n", pa);
	printf("(pa + 1)의 값 : %p \n", pa + 1);

	/* 과연 */
	int a;
	char b;
	double c;
	int* pa = &a;
	char* pb = &b;
	double *pc = &c;

	printf("pa의 값 : %p \n", pa);
	printf("(pa + 1)의 값 : %p \n", pa + 1);
	printf("pb의 값 : %p \n", pb);
	printf("(pb + 1)의 값 : %p \n", pb + 1);
	printf("pc의 값 : %p \n", pc);
	printf("(pc + 1)의 값 : %p \n", pc + 1);

	/* 포인터 뺄셈 */
	int a;
	int* pa = &a;
	printf("pa의 값 : %p \n", pa);
	printf("(pa-1)의 값 : %p \n", pa - 1);

	/* 포인터끼리의 덧셈 */
	int a;
	int* pa = &a;
	int b;
	int* pb = &b;
	int* pc = pa + pb;

	/* 포인터의 대입 */
	int a;
	int* pa = &a;
	int* pb;

	*pa = 3;
	pb = pa;

	printf("pa가 가리키고 있는 것 : %d \n", *pa);
	printf("pb가 가리키고 있는 것 : %d \n", *pb);

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	/* 배열의 존재 상태? */
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d]의 주소값 : %p \n", i, &arr[i]);
	}
	
	/* 과연? */
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	parr = &arr[0];

	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d]의 주소값 : %p \n", i, &arr[i]);
		printf("(parr + %d)의 값 : %p \n", i, (parr + i));

		if (&arr[i] == (parr + i)) /* 만일 (parr + i)가 성공적으로 arr[i]를 가리킨다면 */
		{	
			printf("--> 일치 \n");
		}
		else
		{
			printf("--> 불일치 \n");
		}
	}

	/* 우왕 */
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	parr = &arr[0];

	printf("arr[3] = %d, *(parr + 3) = %d \n", arr[3], *(parr + 3));

	int arr[3] = { 1,2,3 };
	printf("%d", arr);

	int arr[3] = { 1,2,3 };

	printf("arr의 정체 : %p \n", arr);
	printf("arr[0]의 주소값 : %p \n", &arr[0]);

	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* parr = arr;

	printf("Sizeof(arr) : %d \n", sizeof(arr));
	printf("Sizeof(parr) : %d \n", sizeof(parr));

	/* [] 연산자 */
	int arr[5] = { 1,2,3,4,5 };

	printf("a[3] : %d \n", arr[3]);
	printf("*(a+3) : %d \n", *(arr + 3));

	/* 신기한 [] 사용 */
	int arr[5] = { 1,2,3,4,5 };

	printf("3[arr] : %d \n", 3[arr]);
	printf("*(3+a) : %d \n", *(arr + 3));
}