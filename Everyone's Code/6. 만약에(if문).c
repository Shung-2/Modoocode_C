#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	/* if ���̶�? */
	int i;
	printf("�Է��ϰ� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &i);

	if (i == 7)
	{
		printf("����� ����� ���� 7�� �Է��߽��ϴ�. \n");
	}
	printf("\n");

	/* ������ ���� */
	double x, y;
	printf("������ ���� �� ������ �Է��ϼ��� : ");
	scanf("%lf %lf", &x, &y);

	if (y == 0)
	{
		printf("0���δ� ���� �� �����ϴ�. \n");
		return 0;
	}
	printf("%f�� %f�� ���� ����� : %f \n", x, y, x / y);
	printf("\n");

	/* �հ�? ���հ�? */
	int score;

	printf("����� ���� ������ �Է��ϼ���! : ");
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("����� �հ��Դϴ�! \n");
	}

	if (score < 90)
	{
		printf("����� ���հ��Դϴ�! \n");
	}
	printf("\n");

	/* ũ�� ���ϱ� */
	int a, b;

	printf("ũ�⸦ ���� �� ���� �Է����ּ��� : ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d�� %d ���� Ů�ϴ�. \n", a, b);
	}

	if (a < b)
	{
		printf("%d�� %d ���� �۽��ϴ�. \n", a, b);
	}

	if (a >= b)
	{
		printf("%d�� %d ���� ũ�ų� �����ϴ�. \n", a, b);
	}

	if (a <= b)
	{
		printf("%d�� %d ���� �۰ų� �����ϴ�. \n", a, b);
	}

	if (a == b)
	{
		printf("%d�� %d ��(��) �����ϴ�. \n", a, b);
	}

	if (a > b)
	{
		printf("%d�� %d ��(��) �ٸ��ϴ�. \n", a, b);
	}
	printf("\n");

	/* if-else�� �����ϱ� */
	int num;

	printf("�ƹ� ���ڳ� �Է��غ����� 1 : ");
	scanf("%d", &num);

	if (num == 7)
	{
		printf("����� ���� 7 �̱���! \n");
	}
	else
	{
		printf("�׳� ���� ������ %d�� �Է��߱���\n", num);
	}

	/* if-else ������ ����? */
	int num2;

	printf("�ƹ� ���ڳ� �Է��غ����� 2 : ");
	scanf("%d", &num2);

	if (num2 == 7)
	{
		printf("����� ���� 7 �̱���! \n");
	}
	else
	{
		if (num == 4)
		{
			printf("������ ���� 4�ΰ��� ;;; \n");
		}
		else
		{
			printf("�׳� ����� ���� %d \n", num2);
		}
	}

	/* ������ �ڵ� */
	int num3;

	printf("�ƹ� ���ڳ� �Է��� ������ 3 : ");
	scanf("%d", &num3);

	if (num3 == 7) {
		printf("����� ���� 7 �̱���!\n");
	}
	else {
		if (num3 == 4) {
			printf("������ ���� 4 �ΰ��� ;;; \n");
		}
		else {
			if (num3 == 1) {
				printf("ù ��° ����!! \n");
			}
			else {
				if (num3 == 2) {
					printf("�� ���ڴ� �ٷ� �ι�° ���� \n");
				}
				else {
					//......(����)......
				}
			}
		}
	}

	/* ���ξ��� ������ ���� ���� */
	int num4;

	printf("�ƹ� ���ڳ� �Է��� ������ 4 : ");
	scanf("%d", &num4);

	if (num4 == 7)
	{
		printf("����� ���� 7 �̱���!\n");
	}
	else if (num4 == 4)
	{
		printf("������ ���� 4 �ΰ��� ;;; \n");
	}
	else
	{
		printf("�׳� ����� ���� %d \n", num4);
	}

	/* if �� if-else if �� ����*/
	int num5;

	printf("�ƹ� ���ڳ� �Է��� ������ 5 : ");
	scanf("%d", &num5);

	if (num5 == 7)
	{
		printf("A ����� ���� 7 �̱���!\n");
	}
	else if (num5 == 7)
	{
		printf("B ����� ���� 7 �̱���!\n");
	}

	// ��
	if (num5 == 7)
	{
		printf("C ����� ���� 7 �̱���!\n");
	}
	if (num5 == 7)
	{
		printf("D ����� ���� 7 �̱���!\n");
	}

	float ave_score;
	float math, english, science, programming;

	printf("����, ����, ����, ��ǻ�� ���α׷��� ������ ���� �Է����ּ���! : ");
	scanf("%f %f %f %f", &math, &english, &science, &programming);

	ave_score = (math + english + science + programming) / 4;
	printf("����� ��� ������ %f �Դϴ�. \n", ave_score);

	if (ave_score >= 90)
	{
		printf("����� �����Դϴ�. \n");
	}
	else if (ave_score >= 40)
	{
		printf("���ݸ� ����ϼ���!. \n");
	}
	else
	{
		printf("���θ� �߷� �մϱ�? \n");
	}

	/* ũ�� �� */
	int c; 
	printf("�ƹ� ���ڳ� �Է��� ������ 6 : ");
	scanf("%d", &c);

	if (c >= 10)
	{
		if (c < 20)
		{
			printf("%d�� 10�̻�, 20�̸��� �� �Դϴ�. \n", c);
		}
	}

	/* �� ������ */
	int d;
	printf("�ƹ� ���ڳ� �Է��� ������ 7 : ");
	scanf("%d", &d);

	if (d >= 10 && d < 20)
	{
		printf("%d�� 10�̻�, 20�̸��� �� �Դϴ�. \n", d);
	}

	int e = 31, f = 15;
	printf("e & f = %d \n", e & f);
	printf("e && f = %d \n", e && f);

	/* �� ��, ���� */
	int height, weight;

	printf("����� Ű�� �����Ը� ���� �Է����ּ��� : ");
	scanf("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100)
	{
		printf("����� '�ű�'�Դϴ�. \n");
	}
	if (!(height >= 190 || weight >= 100))
	{
		printf("����� �ű��� �ƴմϴ�. \n");
	}

}