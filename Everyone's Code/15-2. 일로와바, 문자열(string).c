#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main ()
{
	/* 이상한 scanf */
	int num;
	char c;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	printf("문자를 입력하세요 : ");
	scanf("%c", &c);
	// printf("%c 출력", c);

	/* 그렇다면 %s 는? */
	char str[30];
	int i;

	scanf("%d", &i);
	scanf("%s", str);

	printf("str : %s", str);

	/* 마지막 stdin 예제 */
	char str1[10], str2[10];

	printf("문자열을 입력하세요 : ");
	scanf("%s", str1);
	printf("입력한 문자열 : %s \n", str1);

	printf("문자열을 입력하세요 : ");
	scanf("%s", str2);
	printf("입력한 문자열 : %s \n", str2);

	/*
	버퍼 비우기

	주의하실 점은 반드시 MS 계열의 컴파일러로 컴파일 해주세요.
	즉, Visual Studio 계열의 컴파일러로 말이죠.
	이 말이 무슨 말인지 모르면 그냥 늘 하던대로 하면됩니다.

	gcc 에서는 정상적으로 작동되지 않는 위험한 코드 입니다.
	*/

	int num;
	char c;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	// fflush(stdin); 작동안함
	getchar();

	printf("문자를 입력하세요 : ");
	scanf("%c", &c);

	/* c 에 무엇이 들어가는지 살짝 보아야 하므로 코드를 약간 수정했습니다 */
	int num, i;
	char c;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	getchar();

	printf("문자를 입력하세요 : ");
	scanf("%c", &c);

	printf("입력한 문자 : %c", c);
}