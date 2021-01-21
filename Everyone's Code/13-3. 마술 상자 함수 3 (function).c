#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>

int pswap(int** pa, int** pb);
int add1_element(int(*arr)[2], int row);
int read_val(const int val);
int max(int a, int b);
int donothing(int c, int k);

int Problem1();
int Problem2(int num2, int num3);
int Problem3();
int Problem4_Add(int *p_result);
int Problem4_Subtraction(int* p_result);
int Problem4_Reset(int* p_result);

int Problem6(int arr[], int num)
{
	int k;

	for (int i = 0; i < num - 1; i++)
	{
		for (int t = 2; t < num; t++)
		{
			k = arr[i] * t;

			if (k > num)
			{
				break;
			}

			for (int j = i + 1; j < num - 1; j++)
			{
				if (k == arr[j])
				{
					arr[j] = 0;
					break;
				}
			}
		}
	}
	for (int i = 0; i < num - 1; i++)
	{
		if (arr[i] != 0)
		{
			printf("소수  : %d \n ", arr[i]);
		}
	}
}

int main()
{
	/* 눈 돌아가는 예제. 포인터가 가리키는 변수를 서로 바꾼다.  */
	int a, b;
	int* pa, * pb;

	pa = &a;
	pb = &b;

	printf("pa가 가리키는 변수의 주소값 : %p \n", pa);
	printf("pa의 주소값 : %p \n \n", &pa);
	printf("pb가 가리키는 변수의 주소값 : %p \n", pb);
	printf("pb의 주소값 : %p \n \n", &pb);

	printf("호출\n");
	pswap(&pa, &pb);
	printf("호출끝\n");

	printf("pa가 가리키는 변수의 주소값 : %p \n", pa);
	printf("pa의 주소값 : %p \n \n", &pa);
	printf("pb가 가리키는 변수의 주소값 : %p \n", pb);
	printf("pb의 주소값 : %p \n \n", &pb);

	/* 2 차원 배열의 각 원소를 1 씩 증가시키는 함수 */
	int arr[3][2];
	int i, j;

	for (i = 0 ; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	add1_element(arr, 3);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("arr[%d][%d] : %d \n", i, j, arr[i][j]);
		}
	}

	/* 상수를 인자로 받아들이기 */
	int a;
	scanf("%d", &a);
	read_val(a);

	/* 함수 포인터 */
	int a, b;
	int (*pmax)(int, int);
	pmax = max;

	scanf("%d %d", &a, &b);
	printf("max(a,b) : %d \n", max(a, b));
	printf("pmax(a,b) : %d \n", pmax(a, b));

	int a, b;
	int (*pfunc)(int, int);
	pfunc = max;

	scanf("%d %d", &a, &b);
	printf("max(a,b) : %d \n", max(a, b));
	printf("pfunc(a,b) : %d \n", pfunc(a, b));

	pfunc = donothing;
	
	printf("donoting(1,1) : %d \n", donothing(1, 1));
	printf("pfunc(1,1) : %d \n", pfunc(1, 1));

	Problem1();

	//Problem2
	int num1, num2;
	printf("최대 공약수를 구할 두 수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	Problem2(num1, num2);

	// Problem3
	int num3;
	printf("1부터 N까지 곱할 N을 입력하세요 : ");
	scanf("%d", &num3);
	printf("1부터 %d까지의 곱의 합은 : %d", num3, Problem3(num3));

	// Problem 4
	int result = 0;
	int menu_choice = 0;

	while (menu_choice == 0 )
	{
		printf("계산기 프로그램\n");
		printf("1. 더하기\n");
		printf("2. 빼기\n");
		printf("3. 초기화\n");
	
		printf("이용하려는 기능을 선택하세요 : ");
		scanf("%d", &menu_choice);
		printf("\n");
	
		switch (menu_choice)
		{
		case 1:
			Problem4_Add(&result);
			menu_choice = 0;
			break;
	
		case 2:
			Problem4_Subtraction(&result);
			menu_choice = 0;
			break;
	
		case 3:
			Problem4_Reset(&result);
			menu_choice = 0;
			break;
	
		default:
			break;
		}
		printf("\n");
	}

	Problem 6
	에라토스테네스의 체를 이용해서 1 부터 N 까지의 소수를 구하는 프로그램을 만들어보세요. (난이도 : 中)

	Problem 7	
	1000 자리의 수들의 덧셈, 뺄셈, 곱셈, 나눗셈을 수행하는 프로그램을 만들어보세요.
	나눗셈의 경우 소수 부분을 잘라버리세요. 물론, 소수 부도 1000 자리로 구현해도 됩니다.
	1000 자리 수들의 연산 수행 시간은 1 초 미만이여야 합니다. (난이도 : 上)
}

int pswap(int** ppa, int** ppb)
{
	int* temp = *ppa;

	printf("ppa가 가리키는 변수의 주소값 : %p \n", ppa);
	printf("ppb가 가리키는 변수의 주소값 : %p \n", ppb);

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
	val = 5;
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
		printf("1번 수학, 2번 국어, 3번 영어 \n");
		for (int j = 0; j < 3; j++)
		{
			printf("%d번째 학생의 %d번째 점수를 입력하세요. : ", i + 1, j + 1);
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
				printf("%d번째 학생의 평균 : %d \n", i + 1, student_avg[i]);
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
			printf("%d등 평균 점수 : %d. 합격. \n", i + 1, student_avg[i]);
		}
		else
		{
			printf("%d등 평균 점수 : %d. 불합격. \n", i + 1, student_avg[i]);
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
	printf("최대 공약수는 : %d입니다. \n", Sum);
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

int Problem4_Add(int * p_result)
{
	int num1 = 0, num2 = 0;
	printf("연산을 진행할 숫자를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	*p_result = num1 + num2;
	printf("계산 결과는 %d입니다. \n", *p_result);
}

int Problem4_Subtraction(int* p_result)
{
	int num1 = 0, num2 = 0;
	printf("연산을 진행할 숫자를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	*p_result = num1 - num2;
	printf("계산 결과는 %d입니다. \n", *p_result);
}

int Problem4_Reset(int* p_result)
{
	*p_result = 0;
	printf("초기화되었습니다. \n");
}