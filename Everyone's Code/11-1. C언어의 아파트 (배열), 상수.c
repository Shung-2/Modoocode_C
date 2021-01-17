#ifdef _msc_ver
#define _crt_secure_no_warnings
#endif

#include <stdio.h>

int main()
{
	/* 배열 기초 */
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("array 3번째 원소 : %d \n", arr[2]);

	/* 배열 출력하기 */
	int arr2[10] = { 2, 10, 30, 21, 34, 23 , 53, 21, 9, 1 };
	
	for (int i = 0; i < 10; i++)
	{
		printf("배열의 %d 번쨰 원소 : %d \n", i + 1, arr2[i]);
	}

	/* 더러운 코드 */
	int a, b, c, d, e, f, g, h, i, j;
	a = 2;
	b = 10;
	c = 30;
	d = 21;
	e = 34;
	f = 23;
	g = 53;
	h = 21;
	i = 9;
	j = 1;

	printf("1 째 값 : %d \n", a);
	printf("2 째 값 : %d \n", b);
	printf("3 째 값 : %d \n", c);
	printf("4 째 값 : %d \n", d);
	printf("5 째 값 : %d \n", e);
	printf("6 째 값 : %d \n", f);
	printf("7 째 값 : %d \n", g);
	printf("8 째 값 : %d \n", h);
	printf("9 째 값 : %d \n", i);
	printf("10 째 값 : %d \n", j);

	/* 평균 구하기 */
	int arr3[5]; // 성적을 저장하는 배열
	int ave = 0;

	for (int i = 0; i < 5; i++) // 학생들의 성적을 입력받는 부분
	{
		printf("%d번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr3[i]);
	}
	for (int i = 0; i < 5; i++) // 전체 학생 성적의 합을 구하는 부분
	{
		ave += arr3[i];
	}
	printf("전체 학생의 평균은 : %d \n", ave / 5);

	/* 친구의 부탁 */
	int arr4[10];
	int ave2 = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr4[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		ave2 += arr4[i];
;	}
	ave2 /= 10;
	printf("전체 학생의 평균은 : %d \n", ave2);
	for (int i = 0; i < 10; i++)
	{
		printf("학생 %d : ", i + 1);
		if (arr4[i] >= ave2)
		{
			printf("합격 \n");
		}
		else
		{
			printf("불합격 \n");
		}
	}

	/* 소수 프로그램 */
	int guess = 5;		/* 소수의 배열 */
	int prime[1000];	/* 현재까지 찾은 (소수의 개수 -1) 아래 두 개의 소수를 미리 찾았으므로 초깃값은 1이 된다. */
	int index = 1;		/* for 문 변수 */
	int i;				/* 소수인지 판별위해 쓰이는 변수 */
	int ok;				/* 처음 두 소수는 특별한 경우로 친다 */
	prime[0] = 2;
	prime[1] = 3;

	for (;;)
	{
		ok = 0;
		for (int i = 0; i <= index; i++)
		{
			if (guess % prime[i] != 0)
			{
				ok++;
			}
			else
			{
				break;
			}
		}
		if (ok == (index + 1))
		{
			index++;
			prime[index] = guess;
			printf("소수 : %d \n", prime[index]);
			if (index == 999)
			{
				break;
			}
		}
		guess += 2;
	}

	/* 과연 될까? */
	int total;
	printf("전체 학생 수 : ");
	scanf("%d", &total);
	int arr5[total];
	int i, ave3 = 0;

	for (int i = 0; i < total; i++)
	{
		printf("%d번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr5[i]);
	}
	for (int i = 0; i < total; i++)
	{
		ave3 += arr5[i];
	}

	ave3 /= total;
	printf("전체 학생의 평균은 : %d \n", ave3);

	for (int i = 0; i < total; i++)
	{
		printf("학생 %d : ", i + 1);
		if (arr5[i] >= ave3)
		{
			printf("합격 \n");
		}
		else
		{
			printf("불합격 \n");
		}
	}

	/* 설마 이것도? */
	int total = 3;
	int arr[total];
	int i, ave = 0;
	
	for (i = 0; i < total; i++) 
	{
		printf("%d 번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < total; i++)
	{
		ave = ave + arr[i];
	}
	
	ave = ave / total;
	printf("전체 학생의 평균은 : %d \n", ave);
	
	for (i = 0; i < total; i++) {
		printf("학생 %d : ", i + 1);
		if (arr[i] >= ave)
		{
			printf("합격 \n");
		}
		else
		{
			printf("불합격 \n");
		}
	}
	
	/* 상수 */
	const int a = 3;
	printf("%d", a);

	const int ba;
	printf("%d", a);

	const int c = 2;
	c = c + 3;
	printf("%d", c);

	int d = 3;
	const int e = d;
	char c[e];

	int arr;
	printf("니 값은 모니? : %d", arr);

	/* 초기화 되지 않은 값 */
	int arr[3];
	arr[0] = 1;
	printf("니 값은 모니 : %d", arr[1]);

	/* 초기화 되지 않은 값 */
	int arr[3] = { 1 };
	printf("니 값은 모니 : %d", arr[1]);

	/* 생각해 볼 문제 */
	 문제 1
	 위 입력받는 학생들의 성적을 높은 순으로 정렬하는 프로그램을 만들어 보세요.
	int arr[5];
	int ave = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		ave += arr[i];
;	}

	ave /= 5;
	printf("\n전체 학생의 평균은 : %d \n\n", ave);

	for (int i = 0; i < 5; i++)
	{
		printf("학생 %d : ", i + 1);

		if (arr[i] >= ave)
		{
			printf("합격 \n");
		}
		else
		{
			printf("불합격 \n");
		}
	}

	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

	printf("\n*** 높은 점수 기준 정렬 ***\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", arr[i]);
	}

	 문제 2
	 입력받은 학생들의 성적을 막대 그래프로 나타내는 프로그램을 만들어 보세요.
	printf("\n*** 그래프 출력 ***\n");
	for (int i = 0; i < 5; i++)
	{
		arr[i] /= 10;
		switch (arr[i])
		{
		case 1:			
			printf("score : 10, graph : * \n");
			break;
		case 2:
			printf("score : 20, graph : ** \n");
			break;
		case 3:
			printf("score : 30, graph : *** \n");
			break;
		case 4:
			printf("score : 40, graph : **** \n");
			break;
		case 5:
			printf("score : 50, graph : ***** \n");
			break;
		case 6:
			printf("score : 60, graph : ****** \n");
			break;
		case 7:
			printf("score : 70, graph : ******* \n");
			break;
		case 8:
			printf("score : 80, graph : ******** \n");
			break;
		case 9:
			printf("score : 90, graph : ********* \n");
			break;
		case 10:
			printf("score : 100, graph : ********** \n");
			break;
		default:
			break;
		}
	}
}