#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define square(x) (x) * (x)
#define RADTODEG(x) (x) * 57.295
#define PrintVariableName(var) printf(#var "\n");
#define AddName(x, y) x##y
__inline int square(int a) { return a * a;  }
/* 
__inline int max(int a, int b)
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
*/

int main(int argc, char **argv)
{
	/* 매크로 함수*/
	printf("square(3) : %d \n", square(3 + 1));

	/* 라디안에서 도로 바꾸기*/
	printf("5 rad 는 : %f 도 \n", RADTODEG(5));

	/* 변수의 이름 출력하기 */
	int a;
	PrintVariableName(a);

	/* ## 의 사용 */
	int AddName(a, b);
	ab = 3;
	printf("%d \n", ab);

	/* 인라인 함수 */
	printf("%d", square(3));

	/* 다른 인라인 함수 예제*/
	printf("3과 2중 최대값은 : %d", max(3, 2));
}