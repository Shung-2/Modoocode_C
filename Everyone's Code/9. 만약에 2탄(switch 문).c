#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	/* ������ */
	int input;

	printf("������ \n");
	printf("������ �Ͻ� ������ �Է��ϼ��� \n");
	printf("1. ���ֱ� \n");
	printf("2. �ı�� \n");
	printf("3. ���� \n");

	scanf("%d", &input);

	if (input == 1)
	{
		printf("���� ���־� \n");
	}
	else if (input == 2)
	{
		printf("���� �ÿ��� \n");
	}
	else if (input == 3)
	{
		printf("zzz \n");
	}
	else
	{
		printf("���� ������� �� �˾� ��ھ�. �п� \n");
	}

	/* ���׷��̵� ���� */
	int input;

	printf("������ ���׷��̵� \n");
	printf("������ �Ͻ� ������ �Է��ϼ��� \n");
	printf("1. ���ֱ� \n");
	printf("2. �ı�� \n");
	printf("3. ���� \n");

	scanf("%d", &input);

	switch (input)
	{
	case 1 :
		printf("���� ���־� \n");
		break;
		
	case 2:
		printf("���� �ÿ��� \n");
		break;
	
	case 3:
		printf("zzz");
		break;

	default:
		printf("���� ������� �� �˾� ��ھ�. �п� \n");
		break;
	}

	/* ������ */
	int input;

	printf("������ ���׷��̵� \n");
	printf("������ �Ͻ� ������ �Է��ϼ��� \n");
	printf("1. ���ֱ� \n");
	printf("2. �ı�� \n");
	printf("3. ���� \n");

	scanf("%d", &input);

	switch (input)
	{
	case 1:
		printf("���� ���־� \n");

	case 2:
		printf("���� �ÿ��� \n");

	case 3:
		printf("zzz");

	default:
		printf("���� ������� �� �˾� ��ھ�. �п� \n");
	}

	/* ���� ���ϱ� */
	char input;

	printf("(�ҹ���) ���ĺ� �б� \n");
	printf("���ĺ� : ");
	
	scanf("%c", &input);

	switch (input)
	{
	case 'a':
		printf("���� \n");
		break;

	case 'b':
		printf("�� \n");
		break;

	case 'c':
		printf("�� \n");
		break;

	default:
		printf("�˼��ؿ�.. �Ӹ��� ������ �� �аھ�� \n");
		break;
	}

	/* ������ ���� */
	/* ���� 1
	switch ���� '��' �κп� �� ������ �;� �Ǵ��� �ƽʴϱ� ? (���̵� : ��߾) */
	��Ȯ�� ���� ���� switch �� ���� ��ġ���� index ��ŭ jmp �ϴ� ������� ó���Ǳ� ������ �翬�� index �� ������ �� �� �ֽ��ϴ�.
	����� �̿� ���� �����ϴ� ������ �������� if-else ���� �׳� jmp �� ������ ���ϴ� �ڵ� ��ġ�� �� �� �ֱ� ����������.

	/* ���� 2
	�ռ�, switch ���� ���������� ó�� �Ǵ� �κп��� case 1: ~case 10: �� �� �� �����Ͽ��µ�,
	���� case 1:, case 3:, case 4:, case 10: �� ���� �ұ�Ģ ������ switch ���� ����ȴٸ� ��ǻ�ʹ� jump table �� ��� �ۼ��ұ��(���̵� : ��߾) */
	����2. https://godbolt.org/z/6D5GMh �� �������� ��, ���� ū ������ cmp�� �̿��� 2�� �񱳸� �ϰ� �ǰ�,
	Case���� ���� ū ���� ��ġ���� ���(�� ���� ���� �� 0)���� �����ϰ� ó���ϳ�,
	���� ū ���� ������ �� input�� �� ���� �� ũ�� �Ǹ� �ٷ� return�ϴ� �κ����� jump�ϰ� �˴ϴ�.(�� �̻� ū ���� Case�� �����Ƿ�)
	���ķδ� 5 ������ �����̹Ƿ� ��� case�� ���Ͽ� �� �� ���� ��ġ���� ���� ��� return�� ���ϴ� ������ �����մϴ�.
	���� Case�� ���� ���� ��� 4�� �������� 2�� ���ϴ��Ŀ� �����İ� �����ǰ� �˴ϴ�. (je - jg 2�� �񱳴� 4 �̻��� ���, je�θ� �� �� ���� �ƴ� ��� return�� 4 �̸��� ���� ó���˴ϴ�.)
	�׷��Ƿ� �ұ�Ģ���� ��� 4 �̻� ū ������ ���� �� �� case�� ��ġ�ϴ� ������ �ɷ����鼭 ���� ȿ�������� �� ū ���� ��� �ٷ� default case�� �Ѿ�� �˴ϴ�. 4 �̸��� ��� ��� case�� ���İ��� �ۼ��մϴ�.

	���� 2:
	�½��ϴ�.�����Ϸ� ����ȭ�� ���� �ٸ����� ������ if - else �� index ��� jmp �� ���� ���Դϴ�.
}