#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

/* 보통 C 언어에서, 좋은 함수의 이름은 그 함수가
무슨 작업을 하는지 명확히 하는 것이다. 수학에서는
f(x), g(x) 로 막 정하지만, C 언어에서는 그 함수가 하는
작업을 설명해주는 이름을 정하는 것이 좋다. */

int printf_hello()
{
	printf("Hello!! \n");
	return 0;
}

int return_func()
{
	printf("난 실행된다 \n");
	return 0;
	printf("난 안돼 ㅠㅠ \n");
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
	printf("%d의 소인수 분해 값입니다. ", num);
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
	printf("함수를 불러보자 : ");
	printf_hello();

	printf("또 부를까? ");
	printf_hello();

	return_func();

	int a = ret();
	printf("ret() 함수의 반환값 : %d \n", a);

	int i = 0;
	printf("마술 상자에 집어넣을 값 : ");
	scanf("%d", &i);
	
	printf("마술 상자를 지나면 : %d \n", magicbox(i));

	int master_money = 10000;
	int master_day_Income = 0;
	printf("2009.12.12 그냥 자산  : $%d, 하루 수입 : %d \n", master_money, master_day_Income);
	printf("2009.12.12 수입 재산  : $%d \n", slave(master_money, master_day_Income));
	printf("my_money : %d", my_money);


	// 문제 3
	int num;
	int result = 0; 

	printf("1부터 N까지의 합을 구합니다. N을 입력하세요 : ");
	scanf("%d", &num);

	printf("총 합은 : %d입니다. \n", OneToNAdd(num, result));

	// 문제 4
	int num2 = 0;
	int count = 0;

	printf("1부터 N까지의 소수를 구합니다. N을 입력하세요 : ");
	scanf("%d", &num2);

	printf("소수의 개수는 : %d입니다.", OneToNFindPrime(num2, count));

	// 문제 5;
	int num = 0;

	printf("N의 소인수분해 값을 구합니다. N을 입력하세요 : ");
	scanf("%d", &num);

	printf(Prime_Factorization(num));
}

/* 
생각해보기

문제 1 
이 강좌 최상단에서 이야기 했던 마술 상자를 함수로 제작해보세요
(난이도 : 못한다면 강좌를 다시 읽어보아야 할 것입니다)

문제 2
어느날 귀족이 돈벌이가 시원치 않아져서 이전에는 일정하게 10000 달러씩 챙겼지만
이제 일정치 않은 수입을 얻게 되었습니다. 여러분은 slave 함수를 인자를 2 개를 가져서, 
하나는 현재 귀족의 재산, 다른 하나는 오늘 귀족의 수입을 인자로 전달받는 새로운 함수를 만들어 보세요(난이도 : 下)

문제 3
1 부터 n 까지의 합을 구하는 함수를 작성해보세요.
수학적인 공식을 써도 되지만 for 문으로 작성하는 것이 연습 하는데에는 도움이 될듯 합니다.
(난이도 : 下 1 부터 n 까지의 합을 구하는 함수를 작성해보세요.)

문제 4
N 값을 입력 받아서 1 부터 N 까지의 소수의 개수를 출력하는 함수를 제작해보세요. (난이도 : 下)

문제 5
특정한 수 N 을 입력받아서 N 을 소인수분해한 결과가 출력되게 해보세요(난이도 : 中)

예) factorize(10); 출력결과: 2 × 5
factorize(180); 출력결과: 2 × 2 × 3 × 3 × 5

문제 6
int function(int* arg) 와 같은 함수가 무엇을 뜻하는지 생각해보세요
*/