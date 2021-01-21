#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

/* 구조체의 정의
struct 구조체명 
{
	멤버들.. 예를들면
	char str[10];
	int i;
}; // 마지막에 꼭 ;를 붙인다.
*/

struct human
{
	int age;	/* 나이 */
	int height; /* 키 */
	int weight; /* 몸무게 */
};

char copy_str(char* dest, const char* src);

struct Books
{
	char name[30];	// 책 이름
	char auth[30];	// 저자 이름
	char publ[30];	// 출판사 이름
	int borrowed;	// 대여 유무
};

struct test
{
	int a, b;
};

int main()
{
	/* 구조체의 도입 */
	struct human Psi;

	Psi.age = 99;
	Psi.height = 185;
	Psi.weight = 80;

	printf("Psi에 대한 정보");
	printf("나이 : %d \n", Psi.age);
	printf("키 : %d \n", Psi.height);
	printf("몸무게 : %d \n", Psi.weight);

	/* 구조체 예제 2 */
	struct Books Harry_Potter;

	copy_str(Harry_Potter.name, "Harry Potter");
	copy_str(Harry_Potter.auth, "J.K Rolling");
	copy_str(Harry_Potter.publ, "Scholastic");
	Harry_Potter.borrowed = 0;

	printf("책 이름 : %s \n", Harry_Potter.name);
	printf("저자 이름 : %s \n", Harry_Potter.auth);
	printf("출판사 이름 : %s \n", Harry_Potter.publ);

	/* 구조체 예제 3 */
	struct Books book_list[3];
	
	for (int i = 0; i < 3; i++)
	{
		printf("책 %d 정보 입력 : ", i);
		scanf("%s %s %s", book_list[i].name, book_list[i].auth, book_list[i].publ);
		book_list[i].borrowed = 0;
	}

	for (int i = 0; i < 3; i++)
	{
		printf(" ****************************** \n");
		printf("책 %s의 정보 \n", book_list[i].name);
		printf("저자 : %s \n", book_list[i].auth);
		printf("출판사 : %s \n", book_list[i].publ);
		printf(" ****************************** \n\n");
		
		if (book_list[i].borrowed == 0)
		{
			printf("안 빌려짐\n");
		}
		else
		{
			printf("빌려짐 \n");
		}
	}

	/* 구조체 포인터 */
	struct test st;
	struct test* ptr;

	ptr = &st;

	(*ptr).a = 1;
	(*ptr).b = 2;
	ptr->a = 1;
	ptr->b = 2;

	printf("st의 a 멤버의 값 : %d \n", st.a);
	printf("st의 a 멤버의 값 : %d \n", st.b);
}

char copy_str(char* dest, char* src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return 1;
}