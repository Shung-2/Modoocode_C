#ifdef _msc_ver
#define _crt_secure_no_warnings
#endif

#include <stdio.h>

int str_length(char* str);


int main()
{
	/* �� �ǰ��� */
	char null_1 = '\0';
	char null_2 = 0;
	char null_3 = (char)NULL;

	char not_null = '0';

	printf("null�� ����(�ƽ�Ű)�� : %d, %d, %d \n", null_1, null_2, null_3);
	printf("'0'�� ����(�ƽ�Ű)�� : %d \n", not_null);

	/* ���ڿ��� ���� */
	char sentence_1[4] = { 'p', 's', 'i', '\0' };
	char sentence_2[4] = { 'p', 's', 'i', 0 };
	char sentence_3[4] = { 'p', 's', 'i', (char)null };
	char sentence_4[4] = { "psi" };

	printf("sentence_1 : %s \n", sentence_1);
	printf("sentence_2 : %s \n", sentence_2);
	printf("sentence_3 : %s \n", sentence_3);
	printf("sentence_4 : %s \n", sentence_4);

	/* ������ ���� ���� */
	char word[30] = { "long sentence" };
	char* str = word;

	printf("%s \n", str);

	/* ���ڿ� �ٲٱ� */
	char word[] = { "long sentence" };

	printf("���� ���� : %s \n", word);

	word[0] = 'a';
	word[1] = 'b';
	word[2] = 'c';
	word[3] = 'd';

	printf("���� ���� : %s \n", word);

	/* ������ ������ ���� */
	char str[] = { "what is your name" };
	printf("�� ���ڿ��� ���� : %d \n", str_length(str));

	/* ���ڿ� �Է� */
	char words[30];
	
	printf("30�� �̳��� ���ڿ��� �Է����ּ���! : ");
	scanf("%s", words);

	printf("���ڿ� : %s \n", words);

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
			printf("�ٸ� \n");
			return 0;
		}
	}
	printf("���� \n");
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