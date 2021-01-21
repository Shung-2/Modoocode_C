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
	/* 문자열 */
	char str[] = "sentence";
	char* pstr = "sentence";

	printf("str : %s \n", str);
	printf("pstr : %s \n", pstr);

	/* 문자열 */
	char str[] = "hello";
	char* pstr = "goodbye";

	str[1] = 'a';
	pstr[1] = 'a';

	/* 리터럴 */
	char* pstr = "goodbye";
	printf("why so serious?");
	scanf("%c", str[0]);

	/* copy_str 사용 예제 */
	char str1[] = "hello";
	char str2[] = "hi";

	printf("복사 이전 : %s \n", str1);
	copy_str(str1, str2);
	printf("복사 이후 : %s \n", str1);

	/* 문자열을 합치는 함수 */
	char str1[100] = "hello my name is";
	char str2[] = "Psi";

	printf("합치기 이전 : %s \n", str1);
	stradd(str1, str2);
	printf("합친 이후 : %s \n", str1);

	/* 문자열을 비교하는 함수 */
	char str[20] = "hello every1";
	char str2[20] = "hello everyone";
	char str3[20] = "hello every hi";
	char str4[20] = "hello every1";

	if (compare(str, str2))
	{
		printf("%s와 %s는 같다 \n", str, str2);
	}
	else
	{
		printf("%s와 %s는 다르다 \n", str, str2);
	}

	if (compare(str, str3))
	{
		printf("%s와 %s는 같다 \n", str, str3);
	}
	else
	{
		printf("%s와 %s는 다르다 \n", str, str3);
	}

	if (compare(str, str4))
	{
		printf("%s와 %s는 같다 \n", str, str4);
	}
	else
	{
		printf("%s와 %s는 다르다 \n", str, str4);
	}

	char words[100];
	char words2[100];
	int result;

	printf("[1번 문자열] 100 자 이내의 문자열을 입력해주세요! : ");
	scanf("%s", words);

	printf("[2번 문자열] 100 자 이내의 문자열을 입력해주세요! : ");
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
		printf("%s와 %s는 같다 \n", words, words2);
	}
	else
	{
		printf("%s와 %s는 다르다 \n", words, words2);
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
src 의 문자열을 dest 로 복사한다.
단, dest 의 크기가 반드시 src 보다 커야 한다.
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
	/* dest 의 끝 부분을 찾는다. */
	while (*dest)
	{
		dest++;
	}

	/*
	while 문을 지나고 나면 dest 는 dest 문자열의 NULL 문자를 가리키고 있게 된다.
	이제 src 의 문자열들을 dest 의 NULL 문자 있는 곳 부터 복사해넣는다.
	*/
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	/* 마지막으로 dest 에 NULL 추가
	(왜냐하면 src 에서 NULL 이 추가 되지 * 않았으므로) */
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