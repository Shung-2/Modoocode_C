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
	/* ��ũ�� �Լ�*/
	printf("square(3) : %d \n", square(3 + 1));

	/* ���ȿ��� ���� �ٲٱ�*/
	printf("5 rad �� : %f �� \n", RADTODEG(5));

	/* ������ �̸� ����ϱ� */
	int a;
	PrintVariableName(a);

	/* ## �� ��� */
	int AddName(a, b);
	ab = 3;
	printf("%d \n", ab);

	/* �ζ��� �Լ� */
	printf("%d", square(3));

	/* �ٸ� �ζ��� �Լ� ����*/
	printf("3�� 2�� �ִ밪�� : %d", max(3, 2));
}