#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	//int SizeofArray;
	//int* arr;

	//printf("����� ���� �迭�� ������ �� : ");
	//scanf("%d", &SizeofArray);

	//arr = (int*)malloc(sizeof(int) * SizeofArray);
	//// 

	//free(arr);

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
}