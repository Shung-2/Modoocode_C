#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include "werid.h"

struct HUMAN
{
	int age;
	int height;
	int weight;
	int gender;
};

typedef struct HUMAN Human;
int Print_Status(Human human);
typedef int CAL_TYPE;
int add(int a, int b) { return a + b; }
typedef int (*Padd)(int, int);
typedef int Arrays[10];
typedef struct SENSOR
{
	/* ���� 1, �̰��� 0 */
	int sensor_flag;
	int data;
} SENSOR;
#pragma pack(1)
struct  Weird
{
	char arr[2];
	int i;
};

int main()
{
	/* typedef �� �̿� */
	Human Adam = { 31, 182, 75, 0 };
	Human Eve = { 27, 166, 48, 1 };

	Print_Status(Adam);
	Print_Status(Eve);

	/* ������ ���� ���α׷� */
	int input;
	int a, b;

	while (1)
	{
		printf("--- ���� --- \n");
		printf("1. ���� \n");
		printf("2. ���� \n");
		printf("3. ���� \n");

		scanf("%d", &input);

		if (input == 1)
		{
			printf("�� �� : ");
			scanf("%d %d", &a, &b);
			printf("%d�� %d�� �� : %d \n", a, b, a + b);
		}
		else if (input == 2)
		{
			printf("�� �� : ");
			scanf("%d %d", &a, &b);
			printf("%d�� %d�� �� : %d \n", a, b, a - b);
		}
		else
		{
			break;
		}
	}

	/* ���� �ҽ� �ڵ� ���� */
	CAL_TYPE input;
	CAL_TYPE a, b;

	while (1)
	{
		printf("--- ���� --- \n");
		printf("1. ���� \n");
		printf("2. ���� \n");
		printf("3. ���� \n");

		scanf("%d", &input);

		if (input == 1)
		{
			printf("�� �� : ");
			scanf("%d %d", &a, &b);
			printf("%d�� %d�� �� : %d \n", a, b, a + b);
		}
		else if (input == 2)
		{
			printf("�� �� : ");
			scanf("%d %d", &a, &b);
			printf("%d�� %d�� �� : %d \n", a, b, a - b);
		}
		else
		{
			break;
		}
	}

	/* �������� typedef ������ */
	CAL_TYPE a = 10;
	Arrays arr = { 1,2,3,4,5,6,7,8,9,0 };
	Padd ptr = add;
	printf("a : %d \n", a);
	printf("arr[3] : %d \n", arr[3]);
	printf("add(3, 5) : %d \n", ptr(3,5));

	/* volatile Ű���� */
	volatile SENSOR* sensor;
	/* ���� �������� �ʴ� ���� ��� ���� ������ ���� */
	while (!(sensor->sensor_flag))
	{
		printf("Data : %d \n", sensor->data);
	}
	printf("Data : %d \n", sensor->data);

	/* #pragma Ű���� */
	struct Weird a;
	printf("size of a : %d \n", sizeof(a));

	struct Weird a;
	a.i = 3;
	printf("Weird ����ü a.i : %d \n", a.i);
}

int Print_Status(Human human)
{
	if (human.gender == 0)
	{
		printf("MALE \n");
	}
	else
	{
		printf("FEMALE \n");
	}

	printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height, human.weight);

	if (human.gender == 0 && human.height >= 180)
	{
		printf("he is a winner!! \n");
	}
	else if (human.gender == 0 && human.height < 180)
	{
		printf("he is a loser!! \n");
	}
	printf("------------------------------------------- \n");
	return 0;
}