#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int change_val(int i)
{
	i = 3;
	return 0;
}

int change_val(int* pi)
{
	printf("---- change_val 함수 안에서 ----- \n");
	printf("pi의 값 : %p \n", pi);
	printf("pi가 가리키는 것의 값 : %d \n", *pi);

	*pi = 3;
	
	printf("---- change_val 함수 끝~~ ----- \n");
	return 0;
}

int swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}

 int swap(int* a, int* b);

int add_number(int* parr);

/* max_number : 인자로 전달받은 크기 10인 배열로 부터 최대 값을 구하는 함수 */
int max_number(int* parr);

int isdigit(char c);

int main()
{
	/* 이상한 짓 */
	int i = 0;
	printf("호출 이전 i의 값 : %d \n", i);
	change_val(i);
	printf("호출 이후 i의 값 : %d \n", i);

	/* 드디어 써먹는 포인터 */
	int i = 0;
	
	printf("i 변수의 주소 값 : %p \n", &i);
	printf("호출 이전 i의 값 : %d \n", i);
	change_val(&i);
	printf("호출 이후 i의 값 : %d \n", i);

	/* 두 변수의 값을 교환하는 함수 */
	int i = 3, j = 5;
	printf("swap 이전 i : %d, j : %d \n", i, j);
	swap(&i, &j);
	printf("swap 이후 i : %d, j : %d \n", i, j);
	
	/* 될까? */
	int i = 3, j = 5;
	printf("swap 이전 i : %d, j : %d \n", i, j);
	swap(&i, &j);
	printf("swap 이후 i : %d, j : %d \n", i, j);

	/* 함수의 원형 */
	int i = 3, j = 5;
	printf("swap 이전 i : %d, j : %d \n", i, j);
	swap(&i, &j);
	printf("swap 이후 i : %d, j : %d \n", i, j);

	int arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	add_number(arr);
	printf("배열의 각 원소 : %d %d %d", arr[0], arr[1], arr[2]);

	int arr[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("입력한 배열 중 가장 큰 수 : %d \n", max_number(arr));

	/* 함수를 이용하지 않은 버전 */
	char input;
	
	scanf("%c", &input);

	if (48 <= input && input <= 57)
	{
		printf("%c는 숫자입니다. \n", input);
	}
	else
	{
		printf("%c는 숫자가 아닙니다. \n", input);
	}

	/* 함수를 이용한 버전 */
	char input;

	scanf("%c", &input);

	if (isdigit(input))
	{
		printf("%c는 숫자입니다. \n", input);
	}
	else
	{
		printf("%c는 숫자가 아닙니다. \n", input);
	}

	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	max_number(arr);
}

int swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}

int add_number(int* parr)
{
	int i  ;
	for (i = 0; i < 3; i++)
	{
		parr[i]++;
	}
}

int max_number(int * parr)
{
	int i;
	int max = parr[0];

	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (parr[j] < parr[j + 1])
			{
				int t = parr[j];
				parr[j] = parr[j + 1];
				parr[j + 1] = t;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", parr[i]);
	}
}

int isdigit(char c)
{
	if (48 <= c && c <= 57)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}