#include <stdio.h>

int main()
{
	int a = 2147483647;
	printf("a : %d \n", a);

	a++;
	printf("a : %d \n", a);

	unsigned int b = -1;
	printf("b에 들어 있는 값을 unsigned int로 해석했을 때의 값  : %u \n", b);

	unsigned int b1 = 4294967295;
	printf("b1 : %u \n", b1);

	b1++;
	printf("b1 : %u \n", b1);

}