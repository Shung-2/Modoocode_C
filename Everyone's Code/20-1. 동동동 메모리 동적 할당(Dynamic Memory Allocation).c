#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>

void get_average(int** arr, int numStudent, int numSubject);

int main(int argc, char **argv)
{
	int SizeofArray;
	int* arr;

	printf("����� ���� �迭�� ������ �� : ");
	scanf("%d", &SizeofArray);

	arr = (int*)malloc(sizeof(int) * SizeofArray);
	// 

	free(arr);

	/* ���� �Ҵ��� Ȱ�� */
	int student;
	int i, input;
	int* score;
	int sum = 0;

	printf("�л��� ����? : ");
	scanf("%d", &student);

	score = (int*)malloc(student * sizeof(int));
	
	for (i = 0; i < student; i++)
	{
		printf("�л� %d�� ���� : ", i+1);
		scanf("%d", &input);

		score[i] = input;
	}

	for (i = 0; i < student; i++)
	{
		sum += score[i];
	}
	printf("��ü �л� ��� ���� : %d \n", sum / student);
	free(score);

	/* 2���� �迭�� ���� �Ҵ� */
	int i, x, y;
	int** arr;

	printf("arr[x][y]�� ���� ���Դϴ�. \n");
	scanf("%d %d", &x, &y);

	arr = (int**)malloc(sizeof(int*) * x);
	// int * ���� ���Ҹ� x �� ������ 1���� �迭 ����

	for (i = 0; i < x; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * y);
	}
	
	printf("���� �Ϸ�! \n");
	
	for (i = 0; i < x; i++)
	{
		free(arr[i]);
	}
	free(arr);

	int i, j, input, sum = 0;
	int subject, student;
	int** arr;
	 �츮�� arr[subject][students] �迭�� ���� ���̴�.

	printf("���� �� : ");
	scanf("%d", &subject);

	printf("�л��� �� : ");
	scanf("%d", &student);

	arr = (int**)malloc(sizeof(int*) * subject);

	for (i = 0; i < subject; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * student);
	}

	for (i = 0; i < subject; i++)
	{
		printf("���� %d ���� --------- \n", i);

		for (j = 0; j < student; j++)
		{
			printf("�л� : %d ���� �Է� : ", j);
			scanf("%d", &input);
			arr[i][j] = input;
		}
	}

	get_average(arr, student, subject);

	for (i = 0; i < subject; i++)
	{
		free(arr[i]);
	}

	free(arr);
}

void get_average(int** arr, int numStudent, int numSubject)
{
	int i, j, sum;

	for (i = 0; i < numSubject; i++)
	{
		sum = 0;
		for (j = 0; j < numStudent; j++)
		{
			sum += arr[i][j];
		}
		printf("���� %d ��� ���� : %d", i, sum / numStudent);
	}
}