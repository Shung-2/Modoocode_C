#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int pswap(int** pa, int** pb);
int add1_element(int(*arr)[2], int row);
int read_val(const int val);
int max(int a, int b);
int donothing(int c, int k);

int Problem1();
int Problem2(int num2, int num3);
int Problem3();

int main()
{
	/* �� ���ư��� ����. �����Ͱ� ����Ű�� ������ ���� �ٲ۴�.  */
	//int a, b;
	//int* pa, * pb;

	//pa = &a;
	//pb = &b;

	//printf("pa�� ����Ű�� ������ �ּҰ� : %p \n", pa);
	//printf("pa�� �ּҰ� : %p \n \n", &pa);
	//printf("pb�� ����Ű�� ������ �ּҰ� : %p \n", pb);
	//printf("pb�� �ּҰ� : %p \n \n", &pb);

	//printf("ȣ��\n");
	//pswap(&pa, &pb);
	//printf("ȣ�ⳡ\n");

	//printf("pa�� ����Ű�� ������ �ּҰ� : %p \n", pa);
	//printf("pa�� �ּҰ� : %p \n \n", &pa);
	//printf("pb�� ����Ű�� ������ �ּҰ� : %p \n", pb);
	//printf("pb�� �ּҰ� : %p \n \n", &pb);

	/* 2 ���� �迭�� �� ���Ҹ� 1 �� ������Ű�� �Լ� */
	//int arr[3][2];
	//int i, j;

	//for (i = 0 ; i < 3; i++)
	//{
	//	for (j = 0; j < 2; j++)
	//	{
	//		scanf("%d", &arr[i][j]);
	//	}
	//}

	//add1_element(arr, 3);

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 2; j++)
	//	{
	//		printf("arr[%d][%d] : %d \n", i, j, arr[i][j]);
	//	}
	//}

	///* ����� ���ڷ� �޾Ƶ��̱� */
	//int a;
	//scanf("%d", &a);
	//read_val(a);
	
	///* �Լ� ������ */
	//int a, b;
	//int (*pmax)(int, int);
	//pmax = max;

	//scanf("%d %d", &a, &b);
	//printf("max(a,b) : %d \n", max(a, b));
	//printf("pmax(a,b) : %d \n", pmax(a, b));

	//int a, b;
	//int (*pfunc)(int, int);
	//pfunc = max;

	//scanf("%d %d", &a, &b);
	//printf("max(a,b) : %d \n", max(a, b));
	//printf("pfunc(a,b) : %d \n", pfunc(a, b));

	//pfunc = donothing;
	//
	//printf("donoting(1,1) : %d \n", donothing(1, 1));
	//printf("pfunc(1,1) : %d \n", pfunc(1, 1));

	//Problem1();

	////Problem2
	//int num1, num2;
	//printf("�ִ� ������� ���� �� ���� �Է��ϼ��� : ");
	//scanf("%d %d", &num1, &num2);
	//Problem2(num1, num2);

	// Problem3
	int num3;
	printf("1���� N���� ���� N�� �Է��ϼ��� : ");
	scanf("%d", &num3);
	printf("1���� %d������ ���� ���� : %d", num3, Problem3(num3));
}

int pswap(int** ppa, int** ppb)
{
	int* temp = *ppa;

	printf("ppa�� ����Ű�� ������ �ּҰ� : %p \n", ppa);
	printf("ppb�� ����Ű�� ������ �ּҰ� : %p \n", ppb);

	*ppa = *ppb;
	*ppb = temp;

}

int add1_element(int(*arr)[2], int row)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 2; j++)
		{
			arr[i][j]++;
		}
	}
}

int read_val(const int val)
{
	//val = 5;
}

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int donothing(int c, int k)
{
	return 1;
}

int Problem1()
{
	int student_score[5][3];
	int student_avg[5];
	int individual_avg = 0;
	int total_avg = 0;
	int all_score_avg = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("1�� ����, 2�� ����, 3�� ���� \n");
		for (int j = 0; j < 3; j++)
		{
			printf("%d��° �л��� %d��° ������ �Է��ϼ���. : ", i+1, j+1);
			scanf("%d", &student_score[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			individual_avg += student_score[i][j];

			if (j == 2)
			{
				student_avg[i] = individual_avg / 3;
				printf("%d��° �л��� ��� : %d \n", i + 1, student_avg[i]);
				individual_avg = 0;
			}
		}
	}
	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{

		}
	}

	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			int temp;
			if (student_avg[j] < student_avg[j + 1])
			{
				temp = student_avg[j];
				student_avg[j] = student_avg[j + 1];
				student_avg[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		total_avg += student_avg[i];
		if (i == 4)
		{
			total_avg /= 5;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (total_avg < student_avg[i])
		{
			printf("%d�� ��� ���� : %d. �հ�. \n", i + 1, student_avg[i]);
		}
		else
		{
			printf("%d�� ��� ���� : %d. ���հ�. \n", i + 1, student_avg[i]);
		}
	}

}

int Problem2(int num2, int num3)
{
	int i;
	int Sum = 0;

	for (i = 1; i <= num3; i++)
	{
		if (num2 % i == 0 && num3 % i == 0)
		{
			Sum = i;
		}
	}
	printf("�ִ� ������� : %d�Դϴ�. \n", Sum);
	return 0;
}

int Problem3(int num3)
{
	if (num3 == 1)
	{
		return 1;
	}
	return num3 * Problem3(num3 - 1);
}