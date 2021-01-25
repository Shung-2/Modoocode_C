#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	///* a.txt 에 내용을 기록한다. */
	//FILE* fp;
	//fp = fopen("a.txt", "w");

	//if (fp == NULL)
	//{
	//	printf("Write Error!! \n");
	//	return 0;
	//}

	//fputs("Hello, World!!! \n", fp);

	//fclose(fp);
	//return 0;

	///* fgets 로 a.txt 에서 내용을 입력 받는다. */
	//FILE* fp = fopen("a.txt", "r");
	//char buf[20];

	//if (fp == NULL)
	//{
	//	printf("Write Error!! \n");
	//	return 0;
	//}
	//fgets(buf, 20, fp);
	//printf("입력받은 내용 : %s \n", buf);
	//fclose(fp);

	///* 한 글자씩 입력받기*/
	//FILE* fp = fopen("a.txt", "r");
	//char c;

	//while ((c = fgetc(fp)) != EOF)
	//{
	//	printf("%c", c);
	//}
	//fclose(fp);

	/* 파일의 크기를 알아내는 프로그램 */
	FILE* fp = fopen("a.txt", "r");
	int size = 0;

	while (fgetc(fp) != EOF)
	{
		size++;
	}
	printf("이 파일의 크기는 : %d bytes \n", size);
	fclose(fp);
}