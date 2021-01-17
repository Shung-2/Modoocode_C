#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{

	//

	/* 2차원 배열 */
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8,9 };

	printf("arr 배열의 2행 3열의 수는 : %d \n", arr[1][2]);
	printf("arr 배열의 1행 2열의 수는 : %d \n", arr[0][1]);

	/* 학생 점수 입력 받기 */
	int score[3][2];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				printf("%d번째 학생의 국어 점수 : ", i + 1);
				scanf("%d", &score[i][j]);
			}
			else if (j == 1)
			{
				printf("%d번째 학생의 국어 점수 : ", i + 1);
				scanf("%d", &score[i][j]);			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 학생의 국어 점수 : %d, 수학 점수 : %d \n", i + 1, score[i][0], score[i][1]);
	}

	// int arr[2][3] = {1, 2, 3, 4, 5, 6};

	// int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

	// int arr[] = {1, 2, 3, 4};	==		int arr[4] = { 1, 2, 3, 4 };

	// int arr[];

	// int arr[][3] = {{4, 5, 6}, {7, 8, 9}};

	// int arr2[][2] = { {1, 2}, {3, 4}, {5, 6}, {7} };
	// == int arr2[4][2]

	// int arr[2][] = { {4, 5, 6}, {7, 8, 9} };

	/* 
	생각해 보기
	문제 1
	제 강좌 제목에서 배열이 왜 C 언어의 아파트 인지 설명해 보세요.
	즉, 동 의 개념, 층 의 개념, 호 의 개념이 어떠한 배열을 형상화 하고 있는 지도 생각해 보세요. (난이도 : 下)
	*/
 
	/*
	정답 : 3차원 배열을 형상하고 있다. 동은 1동, 층은 6층, 호는 402호를 예로 든다면
		   각각의 동, 층, 호는 x, y, z인 3차원 배열을 예로 들 수 있다. 
		   ex) arr[x][y][z];
	*/
}