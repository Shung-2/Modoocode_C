#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	///* a.txt �� ������ ����Ѵ�. */
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

	///* fgets �� a.txt ���� ������ �Է� �޴´�. */
	//FILE* fp = fopen("a.txt", "r");
	//char buf[20];

	//if (fp == NULL)
	//{
	//	printf("Write Error!! \n");
	//	return 0;
	//}
	//fgets(buf, 20, fp);
	//printf("�Է¹��� ���� : %s \n", buf);
	//fclose(fp);

	///* �� ���ھ� �Է¹ޱ�*/
	//FILE* fp = fopen("a.txt", "r");
	//char c;

	//while ((c = fgetc(fp)) != EOF)
	//{
	//	printf("%c", c);
	//}
	//fclose(fp);

	/* ������ ũ�⸦ �˾Ƴ��� ���α׷� */
	FILE* fp = fopen("a.txt", "r");
	int size = 0;

	while (fgetc(fp) != EOF)
	{
		size++;
	}
	printf("�� ������ ũ��� : %d bytes \n", size);
	fclose(fp);
}