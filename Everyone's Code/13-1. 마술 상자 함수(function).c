#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

/* ���� C ����, ���� �Լ��� �̸��� �� �Լ���
���� �۾��� �ϴ��� ��Ȯ�� �ϴ� ���̴�. ���п�����
f(x), g(x) �� �� ��������, C ������ �� �Լ��� �ϴ�
�۾��� �������ִ� �̸��� ���ϴ� ���� ����. */

int printf_hello()
{
	printf("Hello!! \n");
	return 0;
}

int return_func()
{
	printf("�� ����ȴ� \n");
	return 0;
	printf("�� �ȵ� �Ф� \n");
}

int ret()
{
	return 1000;
}

int magicbox(int i)
{
	i += 4;
	return i;
}

int slave(int master_money, int master_day_Income)
{
	//master_money += 10000;

	master_day_Income = 500;
	master_money += master_day_Income;
	// return master_money;
	return master_money;
}

int OneToNAdd(int num, int result)
{
	for (int i = 1; i < num; i++)
	{
		result += num;
	}
	return result;
}

int OneToNFindPrime(int num2, int count)
{
	for (int i = 1; i < num2; i++)
	{
		if (num2 % i == 0)
		{
			count++;
		}
	}
	return count;
}

int Prime_Factorization(int num)
{
	printf("%d�� ���μ� ���� ���Դϴ�. ", num);
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			printf("%d * ", i);
			i = 1;
		}
	}
}

int main()
{
	printf("�Լ��� �ҷ����� : ");
	printf_hello();

	printf("�� �θ���? ");
	printf_hello();

	return_func();

	int a = ret();
	printf("ret() �Լ��� ��ȯ�� : %d \n", a);

	int i = 0;
	printf("���� ���ڿ� ������� �� : ");
	scanf("%d", &i);
	
	printf("���� ���ڸ� ������ : %d \n", magicbox(i));

	int master_money = 10000;
	int master_day_Income = 0;
	printf("2009.12.12 �׳� �ڻ�  : $%d, �Ϸ� ���� : %d \n", master_money, master_day_Income);
	printf("2009.12.12 ���� ���  : $%d \n", slave(master_money, master_day_Income));
	printf("my_money : %d", my_money);


	// ���� 3
	int num;
	int result = 0; 

	printf("1���� N������ ���� ���մϴ�. N�� �Է��ϼ��� : ");
	scanf("%d", &num);

	printf("�� ���� : %d�Դϴ�. \n", OneToNAdd(num, result));

	// ���� 4
	int num2 = 0;
	int count = 0;

	printf("1���� N������ �Ҽ��� ���մϴ�. N�� �Է��ϼ��� : ");
	scanf("%d", &num2);

	printf("�Ҽ��� ������ : %d�Դϴ�.", OneToNFindPrime(num2, count));

	// ���� 5;
	int num = 0;

	printf("N�� ���μ����� ���� ���մϴ�. N�� �Է��ϼ��� : ");
	scanf("%d", &num);

	printf(Prime_Factorization(num));
}

/* 
�����غ���

���� 1 
�� ���� �ֻ�ܿ��� �̾߱� �ߴ� ���� ���ڸ� �Լ��� �����غ�����
(���̵� : ���Ѵٸ� ���¸� �ٽ� �о�ƾ� �� ���Դϴ�)

���� 2
����� ������ �����̰� �ÿ�ġ �ʾ����� �������� �����ϰ� 10000 �޷��� ì������
���� ����ġ ���� ������ ��� �Ǿ����ϴ�. �������� slave �Լ��� ���ڸ� 2 ���� ������, 
�ϳ��� ���� ������ ���, �ٸ� �ϳ��� ���� ������ ������ ���ڷ� ���޹޴� ���ο� �Լ��� ����� ������(���̵� : ��)

���� 3
1 ���� n ������ ���� ���ϴ� �Լ��� �ۼ��غ�����.
�������� ������ �ᵵ ������ for ������ �ۼ��ϴ� ���� ���� �ϴµ����� ������ �ɵ� �մϴ�.
(���̵� : �� 1 ���� n ������ ���� ���ϴ� �Լ��� �ۼ��غ�����.)

���� 4
N ���� �Է� �޾Ƽ� 1 ���� N ������ �Ҽ��� ������ ����ϴ� �Լ��� �����غ�����. (���̵� : ��)

���� 5
Ư���� �� N �� �Է¹޾Ƽ� N �� ���μ������� ����� ��µǰ� �غ�����(���̵� : ��)

��) factorize(10); ��°��: 2 �� 5
factorize(180); ��°��: 2 �� 2 �� 3 �� 3 �� 5

���� 6
int function(int* arg) �� ���� �Լ��� ������ ���ϴ��� �����غ�����
*/