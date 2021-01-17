#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	/* ��� ������? */
	int a;
	int b;
	const int* pa = &a;

	*pa = 3;  // �ùٸ��� ���� ����
	pa = &b;  // �ùٸ� ����

	/* ��� ������? 2*/
	int a;
	int b;
	int* const pa = &a;

	*pa = 3;  // �ùٸ� ����
	pa = &b;  // �ùٸ��� ���� ����

	/* ��� ������? 3 */
	int a;
	int b;
	const int* const pa = &a;

	*pa = 3;  // �ùٸ��� ���� ����
	pa = &b;  // �ùٸ��� ���� ����

	/* �������� ���� */
	int a;
	int* pa;
	pa = &a;

	printf("pa�� �� : %p \n", pa);
	printf("(pa + 1)�� �� : %p \n", pa + 1);

	/* ���� */
	int a;
	char b;
	double c;
	int* pa = &a;
	char* pb = &b;
	double *pc = &c;

	printf("pa�� �� : %p \n", pa);
	printf("(pa + 1)�� �� : %p \n", pa + 1);
	printf("pb�� �� : %p \n", pb);
	printf("(pb + 1)�� �� : %p \n", pb + 1);
	printf("pc�� �� : %p \n", pc);
	printf("(pc + 1)�� �� : %p \n", pc + 1);

	/* ������ ���� */
	int a;
	int* pa = &a;
	printf("pa�� �� : %p \n", pa);
	printf("(pa-1)�� �� : %p \n", pa - 1);

	/* �����ͳ����� ���� */
	int a;
	int* pa = &a;
	int b;
	int* pb = &b;
	int* pc = pa + pb;

	/* �������� ���� */
	int a;
	int* pa = &a;
	int* pb;

	*pa = 3;
	pb = pa;

	printf("pa�� ����Ű�� �ִ� �� : %d \n", *pa);
	printf("pb�� ����Ű�� �ִ� �� : %d \n", *pb);

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	/* �迭�� ���� ����? */
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d]�� �ּҰ� : %p \n", i, &arr[i]);
	}
	
	/* ����? */
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	parr = &arr[0];

	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d]�� �ּҰ� : %p \n", i, &arr[i]);
		printf("(parr + %d)�� �� : %p \n", i, (parr + i));

		if (&arr[i] == (parr + i)) /* ���� (parr + i)�� ���������� arr[i]�� ����Ų�ٸ� */
		{	
			printf("--> ��ġ \n");
		}
		else
		{
			printf("--> ����ġ \n");
		}
	}

	/* ��� */
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	parr = &arr[0];

	printf("arr[3] = %d, *(parr + 3) = %d \n", arr[3], *(parr + 3));

	int arr[3] = { 1,2,3 };
	printf("%d", arr);

	int arr[3] = { 1,2,3 };

	printf("arr�� ��ü : %p \n", arr);
	printf("arr[0]�� �ּҰ� : %p \n", &arr[0]);

	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* parr = arr;

	printf("Sizeof(arr) : %d \n", sizeof(arr));
	printf("Sizeof(parr) : %d \n", sizeof(parr));

	/* [] ������ */
	int arr[5] = { 1,2,3,4,5 };

	printf("a[3] : %d \n", arr[3]);
	printf("*(a+3) : %d \n", *(arr + 3));

	/* �ű��� [] ��� */
	int arr[5] = { 1,2,3,4,5 };

	printf("3[arr] : %d \n", 3[arr]);
	printf("*(3+a) : %d \n", *(arr + 3));
}