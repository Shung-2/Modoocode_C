#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int add_one(int* a);
char copy_str(char* dest, const char* src);
int set_human(struct TEST *a, int age, int gender, const char *name);

struct TEST
{
	int age;
	int gender;
	char name[20];
};

int main()
{
	/* 포인터 갖고 놀기 */
	struct TEST t;
	struct TEST* pt = &t;

	/* pt가 가리키는 구조체 변수의 c 멤버 값을 0으로 한다. */
	(*pt).c = 0;
	printf("t.c : %d \n", t.c);

	/* pt가 가리키는 구조체 변수의 c 멤버 값을 1으로 한다. */
	pt->c = 1;
	printf("t.c : %d \n", t.c);

	/* 헷갈림 */
	struct TEST t;
	struct TEST* pt = &t;
	int i = 0;

	/* t의 멤버 pointer 는 i 를 가리키게 된다. */
	t.pointer = &i;

	/* t의 멤버 pointer 가 가리키는 변수의 값을 3으로 바꾼다. */
	*t.pointer = 3;

	printf("i : %d \n", i);

	/*
	-> 가 * 보다 우선순위가 높으므로 먼저 해석하게 된다.
	즉, (pt 가 가리키는 구조체 변수의 pointer 멤버) 가 가리키는 변수의 값을
	4 로 바꾼다. 라는 뜻이다
	*/
	*pt->pointer = 4;
	// *(pt->pointer) == *pt->pointer

	printf("i : %d \n", i);

	/* 구조체 포인터 연습 */
	struct TEST t;
	struct TEST* pt = &t;

	/* pt가 가리키는 구조체 변수의 C 멤버의 값을 0으로 한다. */
	pt->c = 0;

	/* Add_one 함수의 인자에 t 구조체 변수의 멤버 C의 주소값을 전달하고 있다. */
	add_one(&t.c);
	printf("t.c : %d \n", t.c);

	/* Add_one 함수의 인자에 pt가 가리키는 구조체 변수의 멤버 C의 주소값을 전달하고 있다.*/
	add_one(&pt->c);
	printf("t.c : %d \n", t.c);

	/* 구조체의 대입 */
	struct TEST st, st2;

	st.i = 1;
	st.c = 'c';
	st2 = st;

	printf("st2.i = %d \n", st2.i);
	printf("st2.c = %c \n", st2.c);

	 /* 구조체의 대입 2*/
	struct TEST a, b;
	b.i = 3;
	copy_str(b.str, "hello, world");
	a = b;
	printf("a.str : %s \n", a.str);
	printf("a.i : %d \n", a.i);

	/* 구조체를 인자로 전달하기 */
	struct TEST human;
	set_human(human, 10, 1);
	printf("AGE : %d // Gender : %d ", human.age, human.gender);

	/* 인자로 제대로 전달하기 */
	struct TEST human;
	set_human(&human, 10, 1);
	printf("AGE : %d // Gender : %d ", human.age, human.gender);

	/* 살짝 업그레이드 */
	struct TEST human;
	
	set_human(&human, 10, 1, "Lee");
	printf("AGE : %d // Gender : %d // Name : %s \n", human.age, human.gender, human.name);

}

int add_one(int* a)
{
	*a += 1;
	return 0;
}

char copy_str(char* dest, const char* src)
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

int set_human(struct TEST *a, int age, int gender, const char* name)
{
	a->age = age;
	a->gender = gender;
	copy_str(a->name, name);
}