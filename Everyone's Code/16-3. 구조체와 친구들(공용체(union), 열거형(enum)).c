#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

char copy_str(char* dest, char* src);
int Print_Obj_Status(struct obj OBJ);
int Print_Status(struct HUMAN human);

struct employee
{
	int age;
	int salary;
};

struct company
{
	struct employee data;
	char name[10];
};

struct AA function(int j);

struct AA
{
	int i;
};

struct obj
{
	char name[20];
	int x, y;
} Ball;

struct HUMAN
{
	int age;
	int height;
	int weight;
	int gender;
};

union A
{
	int i;
	short j;
};

enum { RED = 3, BLUE, WHITE, BLACK };

int main()
{
	///* 구조체 안의 구조체 */
	//struct company Kim;
	//Kim.data.age = 31;
	//Kim.data.salary = 3000000;

	//printf("Kim's age : %d \n", Kim.data.age);
	//printf("Kim's salary : %d$/year \n", Kim.data.salary);

	///* 구조체를 리턴하는 함수 */
	//struct AA a;
	//a = function("a.i : % d \n", a.i);

	///*
	//구조체 변수를 정의하는 색다른 방법.
	//예제를 이렇게 길게 만든 이유는 소스를 읽으면서 구조체와 조금 더 친해지기 바래서입니다.
	//소스를 찬찬히 분석해보세요 ^^
	//*/

	//Ball.x = 3;
	//Ball.y = 4;
	//copy_str(Ball.name, "RED BALL");
	//Print_Obj_Status(Ball);

	///* 멤버를 쉽게 초기화 하기*/
	//struct HUMAN Adam = { 31, 182, 75, 0 };
	//struct HUMAN Eve = { 27, 166, 48, 1 };

	//Print_Status(Adam);
	//Print_Status(Eve);

	///* 공용체 */
	//union A a;
	//a.i = 0x12345678;
	//printf("%x", a.j);

	///* 열거형의 도입 */
	//int palette = RED;
	//switch (palette)
	//{
	//case RED :
	//	printf("palette : RED \n");
	//	break;
	//case BLUE :
	//	printf("palette : BLUE \n");
	//	break;
	//case WHITE:
	//	printf("palette : WHITE \n");
	//	break;
	//case BLACK:
	//	printf("palette : BLACK \n");
	//	break;
	//}

	/* 열거형 팁 */
	int palette = BLACK;
	printf("%d \n", palette);
}

int Print_Obj_Status(struct obj OBJ)
{
	printf("Location of %s \n", OBJ.name);
	printf("( %d , %d ) \n", OBJ.x, OBJ.y);
	return 0;
}

char copy_str(char* dest, char* src) {
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return 1;
}

int Print_Status(struct HUMAN human)
{
	if (human.gender == 0)
	{
		printf("MALE \n");
	}
	else
	{
		printf("FEMALE \n");
	}

	printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height, human.weight);

	if (human.gender == 0 && human.height >= 180)
	{
		printf("he is a winner!! \n");
	}
	else if (human.gender == 0 && human.height < 180)
	{
		printf("he is a loser!! \n");
	}
	printf("------------------------------------------- \n");
	return 0;
}