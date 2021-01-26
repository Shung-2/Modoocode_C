#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>

struct BOOK {
	char book_name[30];
	char auth_name[30];
	char publ_name[30];
	int borrowed;
};
typedef struct BOOK BOOK;

char compare(char* str1, char* str2);
int register_book(BOOK* book_list, int* nth);
int search_book(BOOK* book_list, int total_num_book);
int borrow_book(BOOK* book_list);
int return_book(BOOK* book_list);
int print_book_list(BOOK* book_list, int total_num_book);


int main()
{
	///* ���Ͽ��� ���ڸ� �ϳ��� �Է¹޴´�. */
	//FILE* fp = fopen("some_data.txt", "r");
	//char c;

	//if (fp == NULL)
	//{
	//	printf("file open error ! \n");
	//	return 0;
	//}

	//while ((c = fgetc(fp)) != EOF)
	//{
	//	printf("%c", c);
	//}

	///* fseek �Լ� ���� */
	//FILE* fp = fopen("some_data.txt", "r");
	//char data[10];
	//char c;

	//if (fp == NULL)
	//{
	//	printf("file open error ! \n");
	//	return 0;
	//}

	//fgets(data, 5, fp);
	//printf("�Է¹��� ������ : %s \n", data);

	//c = fgetc(fp);
	//printf("�� ������ �Է� ���� ���� : %c \n", c);

	//fseek(fp, -1, SEEK_CUR);

	//c = fgetc(fp);
	//printf("�׷��ٸ� ���� ���ڰ� : %c \n", c);
	//fclose(fp);

	///* ������ ������ ���ڸ� ���� */
	//FILE* fp = fopen("some_data.txt", "r");
	//char data[10];
	//char c;

	//if (fp == NULL) {
	//	printf("file open error ! \n");
	//	return 0;
	//}

	//fseek(fp, -1, SEEK_END);
	//c = fgetc(fp);
	//printf("���� ������ ���� : %c \n", c);

	//fclose(fp);

	///* fopen�� "r+" ���� �̿��غ��� */
	//FILE* fp = fopen("some_data.txt", "r");
	//char data[100];

	//fgets(data, 100, fp);
	//printf("���� ���Ͽ� �ִ� ���� : %s \n", data);

	//fseek(fp, 5, SEEK_SET);
	//fputs("is nothing on this file", fp);
	//fclose(fp);

	///* Ư���� ������ �Է� �޾Ƽ� �ҹ��ڸ� �빮�ڷ�, �빮�ڸ� �ҹ��ڷ� �ٲٴ� ���α׷�  */
	//FILE* fp = fopen("some_data.txt", "r+");
	//char c;

	//if (fp == NULL)
	//{
	//	printf("file open error ! \n");
	//	return 0;
	//}

	//while ((c = fgetc(fp)) != EOF)
	//{
	//	/* c�� �빮���� ��� */
	//	if (65 <= c && c <= 90)
	//	{
	//		/* ��ĭ �ڷ� ���� */
	//		fseek(fp, -1, SEEK_CUR);
	//		/* �ҹ��ڷ� �ٲ� c�� ����Ѵ�. */
	//		fputc(c + 32, fp);
	//		/*
	//		���� - �б� ��� ��ȯ�� ���ؼ��� ������
	//		fseek �Լ��� ���� ���� ��ġ ������ ���� �Լ����� ȣ���ؾ� �Ѵ�.
	//		*/
	//		fseek(fp, 0, SEEK_CUR);
	//		// OR
	//		// fflush(fp);
	//	}
	//	else
	//	{
	//		fseek(fp, -1, SEEK_CUR);
	//		fputc("c - 32 ", fp);
	//		fseek(fp, 0, SEEK_CUR);
	//		// OR
	//		// fflush(fp);
	//	}
	//}
	//fclose(fp);

	///* fopen�� 'append' ��� ��� */
	//FILE* fp = fopen("some_data.txt", "a");
	//char c;

	//if (fp == NULL)
	//{
	//	printf("file open error ! \n");
	//	return 0;
	//}
	///* �Ʒ� ������ ���� �ڿ� ���ٿ�����. */
	//fputs("IS ADDED HAHAHAHA", fp);
	//fclose(fp);

	///* fscanf �̿��ϱ� */
	//FILE* fp = fopen("some_data.txt", "r");
	//char data[100];

	//if (fp == NULL)
	//{
	//	printf("file open error ! \n");
	//	return 0;
	//}
	//printf("--- �Է� ���� �ܾ�� --- \n");

	//while (fscanf(fp, "%s", data) != EOF)
	//{
	//	printf("%s \n", data);
	//}
	//fclose(fp);

	///* ���Ͽ��� 'this'�� 'that'���� �ٲٱ� */
	//FILE* fp = fopen("some_data.txt", "r+");
	//char data[100];

	//if (fp == NULL)
	//{
	//	printf("file open error ! \n");
	//	return 0;
	//}
	//
	//while (fscanf(fp, "%s", data) != EOF)
	//{
	//	if (strcmp(data, "this") == 0)
	//	{
	//		fseek(fp, -(long)strlen("this"), SEEK_CUR);
	//		fputs("that", fp);
	//		fflush(fp);
	//	}
	//}
	//fclose(fp);

	int user_choice;        /* ������ ������ �޴� */
	int num_total_book = 0; /* ���� å�� �� */
	BOOK* book_list;

	printf("�������� �ִ� ���� �弭 ���� �������ּ��� : ");
	scanf("%d", &user_choice);
	book_list = (BOOK*)malloc(sizeof(BOOK) * user_choice);

	while (1) {
		printf("���� ���� ���α׷� \n");
		printf("�޴��� �����ϼ��� \n");
		printf("1. å�� ���� �߰��ϱ� \n");
		printf("2. å�� �˻��ϱ� \n");
		printf("3. å�� ������ \n");
		printf("4. å�� �ݳ��ϱ� \n");
		printf("5. ���α׷� ���� \n");
		printf("6. å���� ������ book_list.txt �� ��� \n");

		printf("����� ������ : ");
		scanf("%d", &user_choice);

		if (user_choice == 1) {
			/* å�� ���� �߰��ϴ� �Լ� ȣ�� */
			register_book(book_list, &num_total_book);
		}
		else if (user_choice == 2) {
			/* å�� �˻��ϴ� �Լ� ȣ�� */
			search_book(book_list, num_total_book);
		}
		else if (user_choice == 3) {
			/* å�� ������ �Լ� ȣ�� */
			borrow_book(book_list);
		}
		else if (user_choice == 4) {
			/* å�� �ݳ��ϴ� �Լ� ȣ�� */
			return_book(book_list);
		}
		else if (user_choice == 5) {
			/* ���α׷��� �����Ѵ�. */
			break;
		}
		else if (user_choice == 6) {
			print_book_list(book_list, num_total_book);
		}
	}

	free(book_list);

}

/* å�� �߰��ϴ� �Լ�*/
int register_book(BOOK* book_list, int* nth) {
	printf("å�� �̸� : ");
	scanf("%s", book_list[*nth].book_name);
	printf("å�� ���� : ");
	scanf("%s", book_list[*nth].auth_name);
	printf("å�� ���ǻ� : ");
	scanf("%s", book_list[*nth].publ_name);
	book_list[*nth].borrowed = 0;
	(*nth)++;
	return 0;
} 

/* å�� �˻��ϴ� �Լ� */
int search_book(BOOK* book_list, int total_num_book) {
	int user_input; /* ������� �Է��� �޴´�. */
	int i;
	char user_search[30];
	printf("��� ������ �˻� �� ���ΰ���? \n");
	printf("1. å ���� �˻� \n");
	printf("2. ������ �˻� \n");
	printf("3. ���ǻ� �˻� \n");
	scanf("%d", &user_input);
	printf("�˻��� �ܾ �Է����ּ��� : ");
	scanf("%s", user_search);
	printf("�˻� ��� \n");
	if (user_input == 1) {
		/* i �� 0 ���� num_total_book ���� ���鼭 ������ å ������ ����ڰ� �Է���
		 * �˻���� ���ϰ� �ִ�. */
		for (i = 0; i < total_num_book; i++) {
			if (compare(book_list[i].book_name, user_search)) {
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i,
					book_list[i].book_name, book_list[i].auth_name,
					book_list[i].publ_name);
			}
		}
	}
	else if (user_input == 2) {
		/* i �� 0 ���� num_total_book ���� ���鼭 ������ ������ �̸��� ����ڰ�
		 * �Է��� �˻���� ���ϰ� �ִ�. */
		for (i = 0; i < total_num_book; i++) {
			if (compare(book_list[i].auth_name, user_search)) {
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i,
					book_list[i].book_name, book_list[i].auth_name,
					book_list[i].publ_name);
			}
		}
	}
	else if (user_input == 3) {
		/* i �� 0 ���� num_total_book ���� ���鼭 ������ ���ǻ縦 ����ڰ� �Է���
		 * �˻���� ���ϰ� �ִ�. */
		for (i = 0; i < total_num_book; i++) {
			if (compare(book_list[i].publ_name, user_search)) {
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i,
					book_list[i].book_name, book_list[i].auth_name,
					book_list[i].publ_name);
			}
		}
	}
	return 0;
}

char compare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != *str2) {
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str2 == '\0') return 1;
	return 0;
}

/* ����ڷ� ���� å ��ȣ�� ���� ���� */
int borrow_book(BOOK* book_list) { 
	int book_num;
	printf("���� å�� ��ȣ�� �����ּ��� \n");
	printf("å ��ȣ : ");
	scanf("%d", &book_num);
	if (book_list[book_num].borrowed == 1) {
		printf("�̹� ����� å�Դϴ�! \n");
	}
	else {
		printf("å�� ���������� ����Ǿ����ϴ�. \n");
		book_list[book_num].borrowed = 1;
	}
	return 0;
}

/* �ݳ��� å�� ��ȣ */
int return_book(BOOK* book_list) { 
	int num_book;
	printf("�ݳ��� å�� ��ȣ�� ���ּ��� \n");
	printf("å ��ȣ : ");
	scanf("%d", &num_book);
	if (book_list[num_book].borrowed == 0) {
		printf("�̹� �ݳ��Ǿ� �ִ� �����Դϴ�\n");
	}
	else {
		book_list[num_book].borrowed = 0;
		printf("���������� �ݳ��Ǿ����ϴ�\n");
	}
	return 0;
}

int print_book_list(BOOK* book_list, int total_num_book) {
	FILE* fp = fopen("book_list.txt", "w");
	int i;

	if (fp == NULL) {
		printf("��� ���� ! \n");
		return -1;
	}

	fprintf(fp, " å �̸�/���� �̸�/���ǻ�/�ݳ� ����\n");
	for (i = 0; i < total_num_book; i++) {
		fprintf(fp, "%s / %s / %s", book_list[i].book_name, book_list[i].auth_name,
			book_list[i].publ_name);
		if (book_list[i].borrowed == 0)
			fprintf(fp, " /NO \n");
		else
			fprintf(fp, " /YES \n");
	}

	fclose(fp);
}