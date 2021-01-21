#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int copy_str(char* dest, char* src);
int stradd(char* dest, char* src);
int compare(char* str1, char* str2);
int findStr(char* words, char* words2);

int main()
{
	/* ���ڿ� */
	char str[] = "sentence";
	char* pstr = "sentence";

	printf("str : %s \n", str);
	printf("pstr : %s \n", pstr);

	/* ���ڿ� */
	char str[] = "hello";
	char* pstr = "goodbye";

	str[1] = 'a';
	pstr[1] = 'a';

	/* ���ͷ� */
	char* pstr = "goodbye";
	printf("why so serious?");
	scanf("%c", str[0]);

	/* copy_str ��� ���� */
	char str1[] = "hello";
	char str2[] = "hi";

	printf("���� ���� : %s \n", str1);
	copy_str(str1, str2);
	printf("���� ���� : %s \n", str1);

	/* ���ڿ��� ��ġ�� �Լ� */
	char str1[100] = "hello my name is";
	char str2[] = "Psi";

	printf("��ġ�� ���� : %s \n", str1);
	stradd(str1, str2);
	printf("��ģ ���� : %s \n", str1);

	/* ���ڿ��� ���ϴ� �Լ� */
	char str[20] = "hello every1";
	char str2[20] = "hello everyone";
	char str3[20] = "hello every hi";
	char str4[20] = "hello every1";

	if (compare(str, str2))
	{
		printf("%s�� %s�� ���� \n", str, str2);
	}
	else
	{
		printf("%s�� %s�� �ٸ��� \n", str, str2);
	}

	if (compare(str, str3))
	{
		printf("%s�� %s�� ���� \n", str, str3);
	}
	else
	{
		printf("%s�� %s�� �ٸ��� \n", str, str3);
	}

	if (compare(str, str4))
	{
		printf("%s�� %s�� ���� \n", str, str4);
	}
	else
	{
		printf("%s�� %s�� �ٸ��� \n", str, str4);
	}

	char words[100];
	char words2[100];
	int result;

	printf("[1�� ���ڿ�] 100 �� �̳��� ���ڿ��� �Է����ּ���! : ");
	scanf("%s", words);

	printf("[2�� ���ڿ�] 100 �� �̳��� ���ڿ��� �Է����ּ���! : ");
	scanf("%s", words2);

	// Problem1
	result = strlen(words);
	for (int i = result - 1; i >= 0; i--)
	{
		printf("%c", words[i]);
	}

	// Problem2
	for (int i = 0; i < (int)strlen(words); i++)
	{
		if (words[i] >= 'A' && words[i] <= 'Z')
		{
			words[i] += 32;
		}
		else
		{
			words[i] -= 32;
		}
	}
	printf("%s \n", words);

	// Problem3
	if (compare(words, words2))
	{
		printf("%s�� %s�� ���� \n", words, words2);
	}
	else
	{
		printf("%s�� %s�� �ٸ��� \n", words, words2);
	}

	int x = findStr(words, words2);
	if (x == -1)
	{
		printf("No same word");
	}
	else
	{
		printf("same part is : %d", x);
	}
}

/*
int copy_str(char *dest, char *src);
src �� ���ڿ��� dest �� �����Ѵ�.
��, dest �� ũ�Ⱑ �ݵ�� src ���� Ŀ�� �Ѵ�.
*/
int copy_str(char* dest, char* src)
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

int stradd(char* dest, char* src)
{
	/* dest �� �� �κ��� ã�´�. */
	while (*dest)
	{
		dest++;
	}

	/*
	while ���� ������ ���� dest �� dest ���ڿ��� NULL ���ڸ� ����Ű�� �ְ� �ȴ�.
	���� src �� ���ڿ����� dest �� NULL ���� �ִ� �� ���� �����سִ´�.
	*/
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	/* ���������� dest �� NULL �߰�
	(�ֳ��ϸ� src ���� NULL �� �߰� ���� * �ʾ����Ƿ�) */
	*dest = '\0';
	return 1;
}

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

int findStr(char* words, char* words2)
{
	int i = 0;
	int j = 0;
	while (*(words + i)) {
		while (1) {
			if (*(words2+ j) == NULL) return i;
			if (*(words + i + j) == *(words2 + j)) j++;
			else break;
		}
		j = 0;
		i++;
	}
	return -1;
}