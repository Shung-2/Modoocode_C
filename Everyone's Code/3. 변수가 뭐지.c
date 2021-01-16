#include <stdio.h>

/* 변수 알아보기 */
//int main()
//{
//	int a;
//	a = 10;
//	printf("a의 값은 : %d \n", a);
//	return 0;
//}

/* 변수 알아보기 2*/
//int main()
//{
//	int a;
//	a = 127;
//	printf("a의 값은 %d 진수로 : %o 입니다. \n", 8, a);
//	printf("a의 값은 %d 진수로 : %d 입니다. \n", 10, a);
//	printf("a의 값은 %d 진수로 : %x 입니다. \n", 16, a);
//	return 0;
//}

/* 변수 알아보기 3*/
//int main()
//{
//	float a = 3.141592f;
//	double b = 3.141592;
//	printf("a : %f \n", a);
//	printf("b : %f \n", b);
//
//	printf("%f \n", 1);
//	printf("%f \n", 1.0);
//	return 0;
//}


/* printf 형식 */
//int main()
//{
//	float a = 3.141592f;
//	double b = 3.141592;
//	int c = 123;
//	printf("a : %.2f \n", a);
//	printf("c : %5d \n", c);
//	printf("b : %6.3f \n", b);
//	return 0;
//}

//(변수의 자료형) 변수 1, 변수 2, .....;
///* 예를 들어 */
//int a, b, c, hi;
//float d, e, f, brabo;
//double g, programming;
//long h;
//short i;
//char j, k, hello, mineral;

/* 변수 선언시 주의해야 할 점 */
//int main()
//{
//	int a;
//	a = 1;
//	printf("a 는 : %d", a);
//	int b; // 괜찮음!
//	return 0;
//}

/* 변수 선언시 주의해야 할 점 */
int main()
{
	int a, A; // a와 A는 각기 다른 변수입니다.
	int 1hi;
	// (오류) 숫자가 앞에 위치할 수 없습니다
	int hi123, h123i, h1234324; // 숫자가 뒤에 위치하면 괜찮습니다.
	int 한글이좋아;
	/*
	(오류)
	변수는 오직 알파벳, 숫자, 그리고 _(underscore)로만으로 이루어져야 합니다.
	*/
	int space bar;
	/*
	(오류)
	변수의 이름에는 띄어쓰기하면 안됩니다. 그 대신 _로 대체하는 것이 읽기 좋습니다. */
	int space_bar; // 이것은 괜찮습니다.
	int enum, long, double, int;
	/* (오류)
	지금 나열한 이름들은 모두 '예약어'로 C언어에서 이미 쓰이고 있는 것들입니다.
	따라서 이러한 것들은 쓰면 안됩니다. 이를 구분하는 방법은 예약어들을 모두 외우거나 '파란색'으로 표시된 것들은 모두 예약어라 볼 수 있습니다. */
	return 0;
}