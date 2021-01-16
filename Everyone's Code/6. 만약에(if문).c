#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	/* if 문이란? */
	int i;
	printf("입력하고 싶은 숫자를 입력하세요 : ");
	scanf("%d", &i);

	if (i == 7)
	{
		printf("당신은 행운의 숫자 7을 입력했습니다. \n");
	}
	printf("\n");

	/* 나눗셈 예제 */
	double x, y;
	printf("나누고 싶은 두 정수를 입력하세요 : ");
	scanf("%lf %lf", &x, &y);

	if (y == 0)
	{
		printf("0으로는 나눌 수 없습니다. \n");
		return 0;
	}
	printf("%f를 %f로 나눈 결과는 : %f \n", x, y, x / y);
	printf("\n");

	/* 합격? 불합격? */
	int score;

	printf("당신의 수학 점수를 입력하세요! : ");
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("당신은 합격입니다! \n");
	}

	if (score < 90)
	{
		printf("당신은 불합격입니다! \n");
	}
	printf("\n");

	/* 크기 비교하기 */
	int a, b;

	printf("크기를 비교할 두 수를 입력해주세요 : ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d는 %d 보다 큽니다. \n", a, b);
	}

	if (a < b)
	{
		printf("%d는 %d 보다 작습니다. \n", a, b);
	}

	if (a >= b)
	{
		printf("%d는 %d 보다 크거나 같습니다. \n", a, b);
	}

	if (a <= b)
	{
		printf("%d는 %d 보다 작거나 같습니다. \n", a, b);
	}

	if (a == b)
	{
		printf("%d는 %d 와(과) 같습니다. \n", a, b);
	}

	if (a > b)
	{
		printf("%d는 %d 와(과) 다릅니다. \n", a, b);
	}
	printf("\n");

	/* if-else문 시작하기 */
	int num;

	printf("아무 숫자나 입력해보세요 1 : ");
	scanf("%d", &num);

	if (num == 7)
	{
		printf("행운의 숫자 7 이군요! \n");
	}
	else
	{
		printf("그냥 보통 숫자인 %d를 입력했군요\n", num);
	}

	/* if-else 죽음의 숫자? */
	int num2;

	printf("아무 숫자나 입력해보세요 2 : ");
	scanf("%d", &num2);

	if (num2 == 7)
	{
		printf("행운의 숫자 7 이군요! \n");
	}
	else
	{
		if (num == 4)
		{
			printf("죽음의 숫자 4인가요 ;;; \n");
		}
		else
		{
			printf("그냥 평범한 숫자 %d \n", num2);
		}
	}

	/* 쓰레기 코드 */
	int num3;

	printf("아무 숫자나 입력해 보세요 3 : ");
	scanf("%d", &num3);

	if (num3 == 7) {
		printf("행운의 숫자 7 이군요!\n");
	}
	else {
		if (num3 == 4) {
			printf("죽음의 숫자 4 인가요 ;;; \n");
		}
		else {
			if (num3 == 1) {
				printf("첫 번째 숫자!! \n");
			}
			else {
				if (num3 == 2) {
					printf("이 숫자는 바로 두번째 숫자 \n");
				}
				else {
					//......(생략)......
				}
			}
		}
	}

	/* 새로쓰는 죽음의 숫자 예제 */
	int num4;

	printf("아무 숫자나 입력해 보세요 4 : ");
	scanf("%d", &num4);

	if (num4 == 7)
	{
		printf("행운의 숫자 7 이군요!\n");
	}
	else if (num4 == 4)
	{
		printf("죽음의 숫자 4 인가요 ;;; \n");
	}
	else
	{
		printf("그냥 평범한 숫자 %d \n", num4);
	}

	/* if 와 if-else if 의 차이*/
	int num5;

	printf("아무 숫자나 입력해 보세요 5 : ");
	scanf("%d", &num5);

	if (num5 == 7)
	{
		printf("A 행운의 숫자 7 이군요!\n");
	}
	else if (num5 == 7)
	{
		printf("B 행운의 숫자 7 이군요!\n");
	}

	// 비교
	if (num5 == 7)
	{
		printf("C 행운의 숫자 7 이군요!\n");
	}
	if (num5 == 7)
	{
		printf("D 행운의 숫자 7 이군요!\n");
	}

	float ave_score;
	float math, english, science, programming;

	printf("수학, 영어, 과학, 컴퓨터 프로그래밍 점수를 각각 입력해주세요! : ");
	scanf("%f %f %f %f", &math, &english, &science, &programming);

	ave_score = (math + english + science + programming) / 4;
	printf("당신의 평균 점수는 %f 입니다. \n", ave_score);

	if (ave_score >= 90)
	{
		printf("당신은 우등생입니다. \n");
	}
	else if (ave_score >= 40)
	{
		printf("조금만 노력하세요!. \n");
	}
	else
	{
		printf("공부를 발로 합니까? \n");
	}

	/* 크기 비교 */
	int c; 
	printf("아무 숫자나 입력해 보세요 6 : ");
	scanf("%d", &c);

	if (c >= 10)
	{
		if (c < 20)
		{
			printf("%d는 10이상, 20미만인 수 입니다. \n", c);
		}
	}

	/* 논리 연산자 */
	int d;
	printf("아무 숫자나 입력해 보세요 7 : ");
	scanf("%d", &d);

	if (d >= 10 && d < 20)
	{
		printf("%d는 10이상, 20미만인 수 입니다. \n", d);
	}

	int e = 31, f = 15;
	printf("e & f = %d \n", e & f);
	printf("e && f = %d \n", e && f);

	/* 논리 합, 부정 */
	int height, weight;

	printf("당신의 키와 몸무게를 각각 입력해주세요 : ");
	scanf("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100)
	{
		printf("당신은 '거구'입니다. \n");
	}
	if (!(height >= 190 || weight >= 100))
	{
		printf("당신은 거구가 아닙니다. \n");
	}

}