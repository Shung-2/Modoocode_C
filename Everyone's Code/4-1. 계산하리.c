#include <stdio.h>


int main()
{
	/* ��� ���� */
	int a, b;
	a = 10,	b = 3;
	printf("a + b �� : %d \n", a + b);
	printf("a - b �� : %d \n", a - b);
	printf("a * b �� : %d \n", a * b);
	printf("a / b �� : %d \n", a / b);
	printf("a %% b �� : %d \n\n", a % b);

	/* ��� ��ȯ */
	int a1; double b1;
	a1 = 10, b1 = 3;
	printf("a1 / b1 �� : %f \n", a1 / b1);
	printf("b1 / a1 �� : %f \n\n", b1 / a1);
	
	/* ���� ���� */
	int a2 = 3;
	a2 = a2 + 3;
	printf("a2�� ���� : %d \n\n", a2);

	/* ���ϱ� 1�� �ϴ� ��� */
	int a3 = 1, b2 = 1, c = 1, d = 1;

	a3 = a3 + 1;
	printf("a3 : %d \n", a3);
	b2 += 1;
	printf("b2 : %d \n", b2);
	++c;
	printf("c : %d \n", c);
	d++;
	printf("d : %d \n\n", d);

	//b += x; // b = b + x;�� ����
	//b -= x; // b = b - x;�� ����
	//b *= x; // b = b * x;�� ����
	//b /= x; // b = b / x;�� ����

	/* prefix, postfix */
	int a4 = 1;
	printf("++a4 : %d \n", ++a4);

	a4 = 1;
	printf("a4++ : %d \n", a4++);
	printf("a4 : %d \n\n", a4);

	/* ��Ʈ ���� */
	int a5 = 0xAF; // 10101111
	int b3 = 0xB5; // 10110101

	printf("%x \n", a5 & b3);		// a & b = 10100101
	printf("%x \n", a5 | b3);		// a | b = 10111111
	printf("%x \n", a5 ^ b3);		// a ^ b = 00011010
	printf("%x \n", ~a5);			// ~a = 1....1 01010000
	printf("%x \n", a5 << 2);		// a << 2 = 1010111100
	printf("%x \n\n", b3 >> 3);		// b >> 3 = 00010110
}
