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
	///* ����ü ���� ����ü */
	//struct company Kim;
	//Kim.data.age = 31;
	//Kim.data.salary = 3000000;

	//printf("Kim's age : %d \n", Kim.data.age);
	//printf("Kim's salary : %d$/year \n", Kim.data.salary);

	///* ����ü�� �����ϴ� �Լ� */
	//struct AA a;
	//a = function("a.i : % d \n", a.i);

	///*
	//����ü ������ �����ϴ� ���ٸ� ���.
	//������ �̷��� ��� ���� ������ �ҽ��� �����鼭 ����ü�� ���� �� ģ������ �ٷ����Դϴ�.
	//�ҽ��� ������ �м��غ����� ^^
	//*/

	//Ball.x = 3;
	//Ball.y = 4;
	//copy_str(Ball.name, "RED BALL");
	//Print_Obj_Status(Ball);

	///* ����� ���� �ʱ�ȭ �ϱ�*/
	//struct HUMAN Adam = { 31, 182, 75, 0 };
	//struct HUMAN Eve = { 27, 166, 48, 1 };

	//Print_Status(Adam);
	//Print_Status(Eve);

	///* ����ü */
	//union A a;
	//a.i = 0x12345678;
	//printf("%x", a.j);

	///* �������� ���� */
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

	/* ������ �� */
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