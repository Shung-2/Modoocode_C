#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int add_book	(char(*book_name)[30], char(*auth_name)[30],
				 char(*publ_name)[30], int* borrowed, int* num_total_book);
int search_book	(char(*book_name)[30], char(*auth_name)[30],
				 char(*publ_name)[30], int num_total_book);
int compare		(char* str1, char* str2);
int borrow_book	(int* borrwed);
int return_book	(int* borrwed);

int main()
{
	int user_chioce = 0;		/* ������ ������ �޴� */
	int num_total_book = 0;		/* ���� å�� �� */

	char book_name[100][30];	/* å�� ������ �迭 */
	char auth_name[100][30];	/* ���ڸ� ������ �迭 */
	char publ_name[100][30];	/* ���ǻ縦 ������ �迭 */
	int borrowed[100];			/* �뿩 ���� �ľ� ǥ�� �迭 */

	while (1)
	{
		printf(" * ���� ���� ���α׷� * \n");
		printf(" [�޴�]�� �����ϼ���. \n");
		printf(" 1. å �߰� \n");
		printf(" 2. å �˻� \n");
		printf(" 3. å �뿩 \n");
		printf(" 4. å �ݳ� \n");
		printf(" 5. ���α׷� ���� \n");

		printf("�̿��� ����� �����ϼ���. : ");
		scanf("%d", &user_chioce);
		printf("\n");

		if (user_chioce == 1)
		{
			add_book(book_name, auth_name, publ_name, borrowed, &num_total_book);
		}
		else if (user_chioce == 2)
		{
			search_book(book_name, auth_name, publ_name, num_total_book);
		}
		else if (user_chioce == 3)
		{
			borrow_book(borrowed);
		}
		else if (user_chioce == 4)
		{
			return_book(borrowed);
		}
		else if (user_chioce == 5)
		{
			break;
		}
	}
	return 0;
}

/* å�� �߰��ϴ� �Լ� */
int add_book ( char(*book_name)[30], char(*auth_name)[30],
			   char(*publ_name)[30], int* borrowed, int* num_total_book)
{
	printf("�߰��� å�� ���� : ");
	scanf("%s", book_name[*num_total_book]);

	printf("�߰��� å�� ���� : ");
	scanf("%s", auth_name[*num_total_book]);

	printf("�߰��� å�� ���ǻ� : ");
	scanf("%s", publ_name[*num_total_book]);

	borrowed[*num_total_book] = 0; /* �������� ���� */
	printf("�߰� �Ϸ� ! \n\n");
	(*num_total_book)++;

	return 0;
}

/* å�� �˻��ϴ� �Լ� */
int search_book	( char(*book_name)[30], char(*auth_name)[30],
				  char(*publ_name)[30], int num_total_book)
{
	int user_input;				/* ������� �Է� */
	int i;
	char user_search[30];

	printf(" * ���� ���� ���α׷� [�˻�] * \n");
	printf(" 1. å �������� �˻� \n");
	printf(" 2. å �����̷� �˻� \n");
	printf(" 3. å ���ǻ�� �˻� \n");
	printf("��� ������ �˻� �� ���ΰ���? \n");

	scanf("%d", &user_input);

	printf("�˻��� �ܾ �Է����ּ��� : ");
	scanf("%s", user_search);

	printf("�˻� ��� \n");

	if (user_input == 1)
	{
		/*
		i �� 0 ���� num_total_book ���� ���鼭
		������ å ������ ����ڰ� �Է��� �˻���� ���ϰ� �ִ�.
	    */
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(book_name[i], user_search))
			{
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ�  %s \n\n",
								i,	book_name[i],	auth_name[i],	publ_name[i]);
			}
		}
	}
	else if (user_input == 2)
	{
		/*
		i �� 0 ���� num_total_book ���� ���鼭
		������ ������ �̸��� ����ڰ� �Է��� �˻���� ���ϰ� �ִ�.
		*/
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(auth_name[i], user_search))
			{
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ�  %s \n\n",
								i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	else if (user_input == 3)
	{
		/*
		i �� 0 ���� num_total_book ���� ���鼭
		������ ���ǻ縦 ����ڰ� �Է��� �˻���� ���ϰ� �ִ�.
		*/
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(publ_name[i], user_search))
			{
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ�  %s \n\n",
								i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	return 0;
}

/* ���ڿ� �� �Լ� */
int compare(char* str1, char* str2)
{
	while (*str1)
	{
		if (*str1 != *str2)
		{
			return 0;
		}
		str1++;
		str2++;
	}

	if (*str1 == '\0')
	{
		return 1;
	}

	return 0;
}

/* å�� �뿩�ϴ� �Լ� */
int borrow_book(int* borrwed)
{
	/* ����ڷκ��� å��ȣ�� ���� ���� */
	int book_num;

	printf("���� å�� ��ȣ�� �����ּ��� \n");
	printf("å ��ȣ : ");
	scanf("%d", &book_num);

	if (borrwed[book_num] == 1)
	{
		printf("�̹� ����� å�Դϴ�. \n\n");
	}
	else
	{
		printf("å�� ���������� ����Ǿ����ϴ�. \n\n");
		borrwed[book_num] = 1;
	}

	return 0;
}

/* å�� �ݳ��ϴ� �Լ� */
int return_book(int* borrwed)
{
	int num_book;

	printf("�ݳ��� å�� ��ȣ�� ���ּ��� \n");
	printf("å ��ȣ : ");
	scanf("%d", &num_book);

	if (borrwed[num_book] == 0)
	{
		printf("�̹� �ݳ��Ǿ� �ִ� �����Դϴ�. \n\n");
	}
	else
	{
		borrwed[num_book] = 1;
		printf("���������� �ݳ��Ǿ����ϴ�. \n\n");
	}
	return 0;
}