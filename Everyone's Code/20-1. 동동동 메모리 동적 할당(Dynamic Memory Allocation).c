#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	//int SizeofArray;
	//int* arr;

	//printf("만들고 싶은 배열의 원소의 수 : ");
	//scanf("%d", &SizeofArray);

	//arr = (int*)malloc(sizeof(int) * SizeofArray);
	//// 

	//free(arr);

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
}