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
	///* ������ ���� ��� */
	//struct TEST t;
	//struct TEST* pt = &t;

	///* pt�� ����Ű�� ����ü ������ c ��� ���� 0���� �Ѵ�. */
	//(*pt).c = 0;
	//printf("t.c : %d \n", t.c);

	///* pt�� ����Ű�� ����ü ������ c ��� ���� 1���� �Ѵ�. */
	//pt->c = 1;
	//printf("t.c : %d \n", t.c);

	///* �򰥸� */
	//struct TEST t;
	//struct TEST* pt = &t;
	//int i = 0;

	///* t�� ��� pointer �� i �� ����Ű�� �ȴ�. */
	//t.pointer = &i;

	///* t�� ��� pointer �� ����Ű�� ������ ���� 3���� �ٲ۴�. */
	//*t.pointer = 3;

	//printf("i : %d \n", i);

	///*
	//-> �� * ���� �켱������ �����Ƿ� ���� �ؼ��ϰ� �ȴ�.
	//��, (pt �� ����Ű�� ����ü ������ pointer ���) �� ����Ű�� ������ ����
	//4 �� �ٲ۴�. ��� ���̴�
	//*/
	//*pt->pointer = 4;
	//// *(pt->pointer) == *pt->pointer

	//printf("i : %d \n", i);

	///* ����ü ������ ���� */
	//struct TEST t;
	//struct TEST* pt = &t;

	///* pt�� ����Ű�� ����ü ������ C ����� ���� 0���� �Ѵ�. */
	//pt->c = 0;

	///* Add_one �Լ��� ���ڿ� t ����ü ������ ��� C�� �ּҰ��� �����ϰ� �ִ�. */
	//add_one(&t.c);
	//printf("t.c : %d \n", t.c);

	///* Add_one �Լ��� ���ڿ� pt�� ����Ű�� ����ü ������ ��� C�� �ּҰ��� �����ϰ� �ִ�.*/
	//add_one(&pt->c);
	//printf("t.c : %d \n", t.c);

	///* ����ü�� ���� */
	//struct TEST st, st2;

	//st.i = 1;
	//st.c = 'c';
	//st2 = st;

	//printf("st2.i = %d \n", st2.i);
	//printf("st2.c = %c \n", st2.c);

	// /* ����ü�� ���� 2*/
	//struct TEST a, b;
	//b.i = 3;
	//copy_str(b.str, "hello, world");
	//a = b;
	//printf("a.str : %s \n", a.str);
	//printf("a.i : %d \n", a.i);

	/* ����ü�� ���ڷ� �����ϱ� */
	//struct TEST human;
	//set_human(human, 10, 1);
	//printf("AGE : %d // Gender : %d ", human.age, human.gender);

	///* ���ڷ� ����� �����ϱ� */
	//struct TEST human;
	//set_human(&human, 10, 1);
	//printf("AGE : %d // Gender : %d ", human.age, human.gender);

	/* ��¦ ���׷��̵� */
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