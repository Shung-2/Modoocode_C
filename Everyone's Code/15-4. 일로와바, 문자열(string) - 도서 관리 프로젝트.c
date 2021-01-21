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
	int user_chioce = 0;		/* 유저가 선택한 메뉴 */
	int num_total_book = 0;		/* 현재 책의 수 */

	char book_name[100][30];	/* 책을 저장할 배열 */
	char auth_name[100][30];	/* 저자를 저장할 배열 */
	char publ_name[100][30];	/* 출판사를 저장할 배열 */
	int borrowed[100];			/* 대여 유무 파악 표시 배열 */

	while (1)
	{
		printf(" * 도서 관리 프로그램 * \n");
		printf(" [메뉴]를 선택하세요. \n");
		printf(" 1. 책 추가 \n");
		printf(" 2. 책 검색 \n");
		printf(" 3. 책 대여 \n");
		printf(" 4. 책 반납 \n");
		printf(" 5. 프로그램 종료 \n");

		printf("이용할 기능을 선택하세요. : ");
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

/* 책을 추가하는 함수 */
int add_book ( char(*book_name)[30], char(*auth_name)[30],
			   char(*publ_name)[30], int* borrowed, int* num_total_book)
{
	printf("추가할 책의 제목 : ");
	scanf("%s", book_name[*num_total_book]);

	printf("추가할 책의 저자 : ");
	scanf("%s", auth_name[*num_total_book]);

	printf("추가할 책의 출판사 : ");
	scanf("%s", publ_name[*num_total_book]);

	borrowed[*num_total_book] = 0; /* 빌려지지 않음 */
	printf("추가 완료 ! \n\n");
	(*num_total_book)++;

	return 0;
}

/* 책을 검색하는 함수 */
int search_book	( char(*book_name)[30], char(*auth_name)[30],
				  char(*publ_name)[30], int num_total_book)
{
	int user_input;				/* 사용자의 입력 */
	int i;
	char user_search[30];

	printf(" * 도서 관리 프로그램 [검색] * \n");
	printf(" 1. 책 제목으로 검색 \n");
	printf(" 2. 책 지은이로 검색 \n");
	printf(" 3. 책 출판사로 검색 \n");
	printf("어느 종류로 검색 할 것인가요? \n");

	scanf("%d", &user_input);

	printf("검색할 단어를 입력해주세요 : ");
	scanf("%s", user_search);

	printf("검색 결과 \n");

	if (user_input == 1)
	{
		/*
		i 가 0 부터 num_total_book 까지 가면서
		각각의 책 제목을 사용자가 입력한 검색어와 비교하고 있다.
	    */
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(book_name[i], user_search))
			{
				printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사  %s \n\n",
								i,	book_name[i],	auth_name[i],	publ_name[i]);
			}
		}
	}
	else if (user_input == 2)
	{
		/*
		i 가 0 부터 num_total_book 까지 가면서
		각각의 지은이 이름을 사용자가 입력한 검색어와 비교하고 있다.
		*/
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(auth_name[i], user_search))
			{
				printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사  %s \n\n",
								i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	else if (user_input == 3)
	{
		/*
		i 가 0 부터 num_total_book 까지 가면서
		각각의 출판사를 사용자가 입력한 검색어와 비교하고 있다.
		*/
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(publ_name[i], user_search))
			{
				printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사  %s \n\n",
								i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	return 0;
}

/* 문자열 비교 함수 */
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

/* 책을 대여하는 함수 */
int borrow_book(int* borrwed)
{
	/* 사용자로부터 책번호를 받을 변수 */
	int book_num;

	printf("빌릴 책의 번호를 말해주세요 \n");
	printf("책 번호 : ");
	scanf("%d", &book_num);

	if (borrwed[book_num] == 1)
	{
		printf("이미 대출된 책입니다. \n\n");
	}
	else
	{
		printf("책이 성공적으로 대출되었습니다. \n\n");
		borrwed[book_num] = 1;
	}

	return 0;
}

/* 책을 반납하는 함수 */
int return_book(int* borrwed)
{
	int num_book;

	printf("반납할 책의 번호를 써주세요 \n");
	printf("책 번호 : ");
	scanf("%d", &num_book);

	if (borrwed[num_book] == 0)
	{
		printf("이미 반납되어 있는 상태입니다. \n\n");
	}
	else
	{
		borrwed[num_book] = 1;
		printf("성공적으로 반납되었습니다. \n\n");
	}
	return 0;
}