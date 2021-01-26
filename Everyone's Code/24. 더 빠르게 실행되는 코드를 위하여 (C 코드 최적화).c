#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#define ALIVE 0x1      // 2 ������ 1
#define WALKING 0x2    // 2 ������ 10
#define RUNNING 0x4    // 2 ������ 100
#define JUMPING 0x8    // 2 ������ 1000
#define SLEEPING 0x10  // 2 ������ 10000
#define EATING 0x20    // 2 ������ 100000

void print_a();

int max(int a, int b) {
	if (a > b) return a;
	return b;
}

__inline int imax(int a, int b) {
	if (a > b) return a;

	return b;
}

struct big {
	int arr[1000];
	char str[1000];
};

void modify(struct big arg) { /* ���𰡸� �Ѵ� */ }

void modify(struct big* arg) { /* ���𰡸� �Ѵ� */ }

int main()
{
	/* �������� ���϶� 2 */
	int i;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &i);

	printf("%d �� 32 �� ������ : %d \n", i, i / 32);
	printf("%d �� 5 ĭ ����Ʈ �ϸ� : %d \n", i, i >> 5);

	/* ��Ʈ ���� Ȱ���ϱ� (1) */
	int my_status = ALIVE | WALKING | EATING;

	if (my_status & ALIVE) {
		printf("I am ALIVE!! \n");
	}
	if (my_status & WALKING) {
		printf("I am WALKING!! \n");
	}
	if (my_status & RUNNING) {
		printf("I am RUNNING!! \n");
	}
	if (my_status & JUMPING) {
		printf("I am JUMPING!! \n");
	}
	if (my_status & SLEEPING) {
		printf("I am SLEEPING!! \n");
	}
	if (my_status & EATING) {
		printf("I am EATING!! \n");
	}
	return 0;

	/* ��Ʈ ���� Ȱ���ϱ� (2) */
	int i;
	scanf("%d", &i);

	if (i & 1)  // �� ���� Ȧ���ΰ�
	{
		printf("%d �� Ȧ�� �Դϴ� \n", i);
	}
	else {
		printf("%d �� ¦�� �Դϴ� \n", i);
	}
	return 0;

	/* �˰� �ִ� �Ϲ����� ��� ����� �̿��϶� */
	for (i = 1; i <= n; i++) {
		sum += i;
	}

	sum = (n + 1) * n / 2;

	/* ���� �� ���� �� ������ */
	while (*pstr) {
		if (*pstr != 'a') {
			does_string_has_a = 1;
			//break;
		}

		pstr++;
	}

	/* �� �� �� �� ���� �ض�. */

	while (n != 0) {
		if (n & 1) {
			one_bit++;
		}
		n >>= 1;
	}

	while (n != 0) {
		if (n & 1) {
			one_bit++;
		}
		if (n & 2) {
			one_bit++;
		}
		if (n & 4) {
			one_bit++;
		}
		if (n & 8) {
			one_bit++;
		}
		n >>= 4;
	}

	while (n != 0) {
		if (n & 1) one_bit++;
		if (n & 2) one_bit++;
		if (n & 4) one_bit++;
		if (n & 8) one_bit++;
		n >>= 4;
	}

	/* ���������� �ǵ��� 0 �� ���Ͽ��� */
	for (i = 0; i < 10; i++) {
		printf("a");
	}

	for (i = 9; i != 0; i--) {
		printf("a");
	}

	/* �ǵ��� ������ ���� ��� */
	int i;
	for (i = 1; i <= 3; i++) {
		func(i);
	}

	func(1);
	func(2);
	func(3);

	/* if ���� 2 �� ����� �ɰ��� */
	if (i == 1) {
	}
	else if (i == 2) {
	}
	else if (i == 3) {
	}
	else if (i == 4) {
	}
	else if (i == 5) {
	}
	else if (i == 6) {
	}
	else if (i == 7) {
	}
	else if (i == 8) {
	}

	if (i <= 4) {
		if (i <= 2) {
			if (i == 1) {
				/* i is 1 */
			}
			else {
				/* i must be 2 */
			}
		}
		else {
			if (i == 3) {
				/* i is 3 */
			}
			else {
				/* i must be 4 */
			}
		}
	}
	else {
		if (i <= 6) {
			if (i == 5) {
				/* i is 5 */
			}
			else {
				/* i must be 6 */
			}
		}
		else {
			if (i == 7) {
				/* i is 7 */
			}
			else {
				/* i must be 8 */
			}
		}
	}

	/* �Լ��� ȣ���� ������ �ð��� �ɸ���. */
	int i;
	for (i = 0; i < 10; i++) {
		print_a();
	}
	return 0;

	/* �ζ���(inline) �Լ��� Ȱ������ */
	printf("4 �� 5 �� ū ����?", max(4, 5));
	printf("4 �� 5 �� ū ����?", imax(4, 5));
	return 0;
}

/* ��� ���̺�(look `up table,` LUT)�� ����� �� ������ ����ض� */
char* Condition_String2(int condition) {
	if ((unsigned)condition >= 15) {
		return 0;
	}
	char* table[] = { "EQ", "NE", "CS", "CC", "MI", "PL", "VS",
					 "VC", "HI", "LS", "GE", "LT", "GT", "LE" };
	return table[condition];
}

void print_a() { printf("a"); }