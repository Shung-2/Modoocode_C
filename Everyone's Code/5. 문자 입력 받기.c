#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	/* ���ڸ� �����ϴ� ���� */
	char a;
	a = 'a';
	printf("a�� ���� ��� �ִ� ���ڴ�? �� : %d, ���� : %c \n\n", a, a);

	/* �����µ��� ȭ���� �ٲٱ� */
	double celsius; // �����µ�
	printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷� �Դϴ�. \n");
	printf("���� �µ��� �Է��� �ּ��� : ");
	scanf_s("%lf", &celsius);

	printf("���� %f���� ȭ���� %f�� �Դϴ�. \n", celsius, 9*celsius / 5 + 32);
	printf("���� %f���� ȭ���� %f�� �Դϴ�. \n\n", celsius, 9 / 5 * celsius + 32);

	/* scanf �� ���� */
	char ch;	// ����

	short sh;	// ����
	int i;
	long lo;

	float fl;	// �Ǽ�
	double du;

	printf("char �� ���� �Է� : ");
	scanf("%c", &ch);

	printf("short �� ���� �Է� : ");
	scanf("%hd", &sh);
	printf("int �� ���� �Է� : ");
	scanf("%d", &i);
	printf("long �� ���� �Է� : ");
	scanf("%ld", &lo);

	printf("float �� ���� �Է� : ");
	scanf("%f", &fl);
	printf("double �� ���� �Է� : ");
	scanf("%lf", &du);

	printf("char : %c, shoart : %d, int : %d \n", ch, sh, i);
	printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
}