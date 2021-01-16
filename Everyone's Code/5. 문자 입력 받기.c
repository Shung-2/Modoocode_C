#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	/* 문자를 저장하는 변수 */
	char a;
	a = 'a';
	printf("a의 값과 들어 있는 문자는? 값 : %d, 문자 : %c \n\n", a, a);

	/* 섭씨온도를 화씨로 바꾸기 */
	double celsius; // 섭씨온도
	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
	printf("섭씨 온도를 입력해 주세요 : ");
	scanf_s("%lf", &celsius);

	printf("섭씨 %f도는 화씨로 %f도 입니다. \n", celsius, 9*celsius / 5 + 32);
	printf("섭씨 %f도는 화씨로 %f도 입니다. \n\n", celsius, 9 / 5 * celsius + 32);

	/* scanf 총 정리 */
	char ch;	// 문자

	short sh;	// 정수
	int i;
	long lo;

	float fl;	// 실수
	double du;

	printf("char 형 변수 입력 : ");
	scanf("%c", &ch);

	printf("short 형 변수 입력 : ");
	scanf("%hd", &sh);
	printf("int 형 변수 입력 : ");
	scanf("%d", &i);
	printf("long 형 변수 입력 : ");
	scanf("%ld", &lo);

	printf("float 형 변수 입력 : ");
	scanf("%f", &fl);
	printf("double 형 변수 입력 : ");
	scanf("%lf", &du);

	printf("char : %c, shoart : %d, int : %d \n", ch, sh, i);
	printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
}