#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

/* ����ü�� ����
struct ����ü�� 
{
	�����.. �������
	char str[10];
	int i;
}; // �������� �� ;�� ���δ�.
*/

struct human
{
	int age;	/* ���� */
	int height; /* Ű */
	int weight; /* ������ */
};

char copy_str(char* dest, const char* src);

struct Books
{
	char name[30];	// å �̸�
	char auth[30];	// ���� �̸�
	char publ[30];	// ���ǻ� �̸�
	int borrowed;	// �뿩 ����
};

struct test
{
	int a, b;
};

int main()
{
	/* ����ü�� ���� */
	struct human Psi;

	Psi.age = 99;
	Psi.height = 185;
	Psi.weight = 80;

	printf("Psi�� ���� ����");
	printf("���� : %d \n", Psi.age);
	printf("Ű : %d \n", Psi.height);
	printf("������ : %d \n", Psi.weight);

	/* ����ü ���� 2 */
	struct Books Harry_Potter;

	copy_str(Harry_Potter.name, "Harry Potter");
	copy_str(Harry_Potter.auth, "J.K Rolling");
	copy_str(Harry_Potter.publ, "Scholastic");
	Harry_Potter.borrowed = 0;

	printf("å �̸� : %s \n", Harry_Potter.name);
	printf("���� �̸� : %s \n", Harry_Potter.auth);
	printf("���ǻ� �̸� : %s \n", Harry_Potter.publ);

	/* ����ü ���� 3 */
	struct Books book_list[3];
	
	for (int i = 0; i < 3; i++)
	{
		printf("å %d ���� �Է� : ", i);
		scanf("%s %s %s", book_list[i].name, book_list[i].auth, book_list[i].publ);
		book_list[i].borrowed = 0;
	}

	for (int i = 0; i < 3; i++)
	{
		printf(" ****************************** \n");
		printf("å %s�� ���� \n", book_list[i].name);
		printf("���� : %s \n", book_list[i].auth);
		printf("���ǻ� : %s \n", book_list[i].publ);
		printf(" ****************************** \n\n");
		
		if (book_list[i].borrowed == 0)
		{
			printf("�� ������\n");
		}
		else
		{
			printf("������ \n");
		}
	}

	/* ����ü ������ */
	struct test st;
	struct test* ptr;

	ptr = &st;

	(*ptr).a = 1;
	(*ptr).b = 2;
	ptr->a = 1;
	ptr->b = 2;

	printf("st�� a ����� �� : %d \n", st.a);
	printf("st�� a ����� �� : %d \n", st.b);
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