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

	printf("만들고 싶은 배열의 원소의 수 : ");
	scanf("%d", &SizeofArray);

	arr = (int*)malloc(sizeof(int) * SizeofArray);
	// 

	free(arr);

	/* 동적 할당의 활용 */
	int student;
	int i, input;
	int* score;
	int sum = 0;

	printf("학생의 수는? : ");
	scanf("%d", &student);

	score = (int*)malloc(student * sizeof(int));
	
	for (i = 0; i < student; i++)
	{
		printf("학생 %d의 점수 : ", i+1);
		scanf("%d", &input);

		score[i] = input;
	}

	for (i = 0; i < student; i++)
	{
		sum += score[i];
	}
	printf("전체 학생 평균 점수 : %d \n", sum / student);
	free(score);

	/* 2차원 배열의 동적 할당 */
	int i, x, y;
	int** arr;

	printf("arr[x][y]를 만들 것입니다. \n");
	scanf("%d %d", &x, &y);

	arr = (int**)malloc(sizeof(int*) * x);
	// int * 형의 원소를 x 개 가지는 1차원 배열 생성

	for (i = 0; i < x; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * y);
	}
	
	printf("생성 완료! \n");
	
	for (i = 0; i < x; i++)
	{
		free(arr[i]);
	}
	free(arr);

	int i, j, input, sum = 0;
	int subject, student;
	int** arr;
	 우리는 arr[subject][students] 배열을 만들 것이다.

	printf("과목 수 : ");
	scanf("%d", &subject);

	printf("학생의 수 : ");
	scanf("%d", &student);

	arr = (int**)malloc(sizeof(int*) * subject);

	for (i = 0; i < subject; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * student);
	}

	for (i = 0; i < subject; i++)
	{
		printf("과목 %d 점수 --------- \n", i);

		for (j = 0; j < student; j++)
		{
			printf("학생 : %d 점수 입력 : ", j);
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
		printf("과목 %d 평균 점수 : %d", i, sum / numStudent);
	}
}