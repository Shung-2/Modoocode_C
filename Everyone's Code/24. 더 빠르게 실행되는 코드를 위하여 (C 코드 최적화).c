#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#define ALIVE 0x1      // 2 진수로 1
#define WALKING 0x2    // 2 진수로 10
#define RUNNING 0x4    // 2 진수로 100
#define JUMPING 0x8    // 2 진수로 1000
#define SLEEPING 0x10  // 2 진수로 10000
#define EATING 0x20    // 2 진수로 100000

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

void modify(struct big arg) { /* 무언가를 한다 */ }

void modify(struct big* arg) { /* 무언가를 한다 */ }

int main()
{
	/* 나눗셈을 피하라 2 */
	int i;
	printf("정수를 입력하세요 : ");
	scanf("%d", &i);

	printf("%d 를 32 로 나누면 : %d \n", i, i / 32);
	printf("%d 를 5 칸 쉬프트 하면 : %d \n", i, i >> 5);

	/* 비트 연산 활용하기 (1) */
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

	/* 비트 연산 활용하기 (2) */
	int i;
	scanf("%d", &i);

	if (i & 1)  // 이 수가 홀수인가
	{
		printf("%d 는 홀수 입니다 \n", i);
	}
	else {
		printf("%d 는 짝수 입니다 \n", i);
	}
	return 0;

	/* 알고 있는 일반적인 계산 결과를 이용하라 */
	for (i = 1; i <= n; i++) {
		sum += i;
	}

	sum = (n + 1) * n / 2;

	/* 끝낼 수 있을 때 끝내라 */
	while (*pstr) {
		if (*pstr != 'a') {
			does_string_has_a = 1;
			//break;
		}

		pstr++;
	}

	/* 한 번 돌 때 많이 해라. */

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

	/* 루프에서는 되도록 0 과 비교하여라 */
	for (i = 0; i < 10; i++) {
		printf("a");
	}

	for (i = 9; i != 0; i--) {
		printf("a");
	}

	/* 되도록 루프를 적게 써라 */
	int i;
	for (i = 1; i <= 3; i++) {
		func(i);
	}

	func(1);
	func(2);
	func(3);

	/* if 문을 2 의 배수로 쪼개기 */
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

	/* 함수를 호출할 때에는 시간이 걸린다. */
	int i;
	for (i = 0; i < 10; i++) {
		print_a();
	}
	return 0;

	/* 인라인(inline) 함수를 활용하자 */
	printf("4 와 5 중 큰 것은?", max(4, 5));
	printf("4 와 5 중 큰 것은?", imax(4, 5));
	return 0;
}

/* 룩업 테이블(look `up table,` LUT)을 사용할 수 있으면 사용해라 */
char* Condition_String2(int condition) {
	if ((unsigned)condition >= 15) {
		return 0;
	}
	char* table[] = { "EQ", "NE", "CS", "CC", "MI", "PL", "VS",
					 "VC", "HI", "LS", "GE", "LT", "GT", "LE" };
	return table[condition];
}

void print_a() { printf("a"); }