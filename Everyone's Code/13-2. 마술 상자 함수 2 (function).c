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
	printf("---- change_val �Լ� �ȿ��� ----- \n");
	printf("pi�� �� : %p \n", pi);
	printf("pi�� ����Ű�� ���� �� : %d \n", *pi);

	*pi = 3;
	
	printf("---- change_val �Լ� ��~~ ----- \n");
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

/* max_number : ���ڷ� ���޹��� ũ�� 10�� �迭�� ���� �ִ� ���� ���ϴ� �Լ� */
int max_number(int* parr);

int isdigit(char c);

int main()
{
	/* �̻��� �� */
	int i = 0;
	printf("ȣ�� ���� i�� �� : %d \n", i);
	change_val(i);
	printf("ȣ�� ���� i�� �� : %d \n", i);

	/* ���� ��Դ� ������ */
	int i = 0;
	
	printf("i ������ �ּ� �� : %p \n", &i);
	printf("ȣ�� ���� i�� �� : %d \n", i);
	change_val(&i);
	printf("ȣ�� ���� i�� �� : %d \n", i);

	/* �� ������ ���� ��ȯ�ϴ� �Լ� */
	int i = 3, j = 5;
	printf("swap ���� i : %d, j : %d \n", i, j);
	swap(&i, &j);
	printf("swap ���� i : %d, j : %d \n", i, j);
	
	/* �ɱ�? */
	int i = 3, j = 5;
	printf("swap ���� i : %d, j : %d \n", i, j);
	swap(&i, &j);
	printf("swap ���� i : %d, j : %d \n", i, j);

	/* �Լ��� ���� */
	int i = 3, j = 5;
	printf("swap ���� i : %d, j : %d \n", i, j);
	swap(&i, &j);
	printf("swap ���� i : %d, j : %d \n", i, j);

	int arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	add_number(arr);
	printf("�迭�� �� ���� : %d %d %d", arr[0], arr[1], arr[2]);

	int arr[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("�Է��� �迭 �� ���� ū �� : %d \n", max_number(arr));

	/* �Լ��� �̿����� ���� ���� */
	char input;
	
	scanf("%c", &input);

	if (48 <= input && input <= 57)
	{
		printf("%c�� �����Դϴ�. \n", input);
	}
	else
	{
		printf("%c�� ���ڰ� �ƴմϴ�. \n", input);
	}

	/* �Լ��� �̿��� ���� */
	char input;

	scanf("%c", &input);

	if (isdigit(input))
	{
		printf("%c�� �����Դϴ�. \n", input);
	}
	else
	{
		printf("%c�� ���ڰ� �ƴմϴ�. \n", input);
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