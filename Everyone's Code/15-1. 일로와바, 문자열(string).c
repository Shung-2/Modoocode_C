#ifdef _msc_ver
#define _crt_secure_no_warnings
#endif

#include <stdio.h>

int str_length(char* str);


int main()
{
	/* 널 뽀개기 */
	char null_1 = '\0';
	char null_2 = 0;
	char null_3 = (char)NULL;

	char not_null = '0';

	printf("null의 정수(아스키)값 : %d, %d, %d \n", null_1, null_2, null_3);
	printf("'0'의 정수(아스키)값 : %d \n", not_null);

	/* 문자열의 시작 */
	char sentence_1[4] = { 'p', 's', 'i', '\0' };
	char sentence_2[4] = { 'p', 's', 'i', 0 };
	char sentence_3[4] = { 'p', 's', 'i', (char)null };
	char sentence_4[4] = { "psi" };

	printf("sentence_1 : %s \n", sentence_1);
	printf("sentence_2 : %s \n", sentence_2);
	printf("sentence_3 : %s \n", sentence_3);
	printf("sentence_4 : %s \n", sentence_4);

	/* 포인터 간단 복습 */
	char word[30] = { "long sentence" };
	char* str = word;

	printf("%s \n", str);

	/* 문자열 바꾸기 */
	char word[] = { "long sentence" };

	printf("조작 이전 : %s \n", word);

	word[0] = 'a';
	word[1] = 'b';
	word[2] = 'c';
	word[3] = 'd';

	printf("조작 이후 : %s \n", word);

	/* 문자의 개수를 세자 */
	char str[] = { "what is your name" };
	printf("이 문자열의 길이 : %d \n", str_length(str));

	/* 문자열 입력 */
	char words[30];
	
	printf("30자 이내의 문자열을 입력해주세요! : ");
	scanf("%s", words);

	printf("문자열 : %s \n", words);

	// problem 3
	char str_a[] = "abc";
	char str_b[] = "abc";

	for (int i = 0; ; i++)
	{
		if (str_a[i] == 0 || str_b[i] == 0)
		{
			break;
		}
		if (str_a[i] != str_b[i])
		{
			printf("다름 \n");
			return 0;
		}
	}
	printf("같음 \n");
}

int str_length(char* str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}