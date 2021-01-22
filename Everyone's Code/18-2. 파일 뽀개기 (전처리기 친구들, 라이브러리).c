#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <string.h>
#include "human.h"
#include "str.h"

#define VAR 10

#define B


int main()
{
	//struct Human Lee = Create_Human("Lee", 40, MALE);
	//Print_Human(&Lee);

	///* 다른 사람이 만들어 놓은 것 쓰기 */
	//char str1[20] = { "hi" };
	//char str2[20] = { "hello every1" };

	////copy_str(str1, str2);
	///* 라이브러리의 사용 */
	//strcpy(str1, str2);

	//printf("str1 : %s \n", str1);

	///* strcmp 함수 */
	//char str1[20] = { "hi" };
	//char str2[20] = { "hello every1" };
	//char str3[20] = { "hi" };

	//if (!strcmp(str1, str2))
	//{
	//	printf("%s and %s is equal \n", str1, str2);
	//}
	//else
	//{
	//	printf("%s and %s is NOT equal \n", str1, str2);
	//}

	//if (!strcmp(str1, str3))
	//{
	//	printf("%s and %s is equal \n", str1, str3);
	//}
	//else
	//{
	//	printf("%s and %s is NOT equal \n", str1, str3);
	//}

	///* define */
	//char arr[VAR] = { "hi" };
	//printf("%s\n", arr);

	/* ifdef, endif */
#ifdef A
	printf("AAAA \n");
#endif 
#ifdef B
	printf("BBBB \n");
#endif
}