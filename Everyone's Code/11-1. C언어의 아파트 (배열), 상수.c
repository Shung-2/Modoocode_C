#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	///* �迭 ���� */
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printf("Array 3��° ���� : %d \n", arr[2]);

	///* �迭 ����ϱ� */
	//int arr2[10] = { 2, 10, 30, 21, 34, 23 , 53, 21, 9, 1 };
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("�迭�� %d ���� ���� : %d \n", i + 1, arr2[i]);
	//}

	///* ������ �ڵ� */
	//int a, b, c, d, e, f, g, h, i, j;
	//a = 2;
	//b = 10;
	//c = 30;
	//d = 21;
	//e = 34;
	//f = 23;
	//g = 53;
	//h = 21;
	//i = 9;
	//j = 1;

	//printf("1 ° �� : %d \n", a);
	//printf("2 ° �� : %d \n", b);
	//printf("3 ° �� : %d \n", c);
	//printf("4 ° �� : %d \n", d);
	//printf("5 ° �� : %d \n", e);
	//printf("6 ° �� : %d \n", f);
	//printf("7 ° �� : %d \n", g);
	//printf("8 ° �� : %d \n", h);
	//printf("9 ° �� : %d \n", i);
	//printf("10 ° �� : %d \n", j);

	///* ��� ���ϱ� */
	//int arr3[5]; // ������ �����ϴ� �迭
	//int ave = 0;

	//for (int i = 0; i < 5; i++) // �л����� ������ �Է¹޴� �κ�
	//{
	//	printf("%d��° �л��� ������? ", i + 1);
	//	scanf("%d", &arr3[i]);
	//}
	//for (int i = 0; i < 5; i++) // ��ü �л� ������ ���� ���ϴ� �κ�
	//{
	//	ave += arr3[i];
	//}
	//printf("��ü �л��� ����� : %d \n", ave / 5);

//	/* ģ���� ��Ź */
//	int arr4[10];
//	int ave2 = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d��° �л��� ������? ", i + 1);
//		scanf("%d", &arr4[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		ave2 += arr4[i];
//;	}
//	ave2 /= 10;
//	printf("��ü �л��� ����� : %d \n", ave2);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("�л� %d : ", i + 1);
//		if (arr4[i] >= ave2)
//		{
//			printf("�հ� \n");
//		}
//		else
//		{
//			printf("���հ� \n");
//		}
//	}

	///* �Ҽ� ���α׷� */
	//int guess = 5;		/* �Ҽ��� �迭 */
	//int prime[1000];	/* ������� ã�� (�Ҽ��� ���� -1) �Ʒ� �� ���� �Ҽ��� �̸� ã�����Ƿ� �ʱ갪�� 1�� �ȴ�. */
	//int index = 1;		/* for �� ���� */
	//int i;				/* �Ҽ����� �Ǻ����� ���̴� ���� */
	//int ok;				/* ó�� �� �Ҽ��� Ư���� ���� ģ�� */
	//prime[0] = 2;
	//prime[1] = 3;

	//for (;;)
	//{
	//	ok = 0;
	//	for (int i = 0; i <= index; i++)
	//	{
	//		if (guess % prime[i] != 0)
	//		{
	//			ok++;
	//		}
	//		else
	//		{
	//			break;
	//		}
	//	}
	//	if (ok == (index + 1))
	//	{
	//		index++;
	//		prime[index] = guess;
	//		printf("�Ҽ� : %d \n", prime[index]);
	//		if (index == 999)
	//		{
	//			break;
	//		}
	//	}
	//	guess += 2;
	//}

	///* ���� �ɱ�? */
	//int total;
	//printf("��ü �л� �� : ");
	//scanf("%d", &total);
	//int arr5[total];
	//int i, ave3 = 0;

	//for (int i = 0; i < total; i++)
	//{
	//	printf("%d��° �л��� ������? ", i + 1);
	//	scanf("%d", &arr5[i]);
	//}
	//for (int i = 0; i < total; i++)
	//{
	//	ave3 += arr5[i];
	//}

	//ave3 /= total;
	//printf("��ü �л��� ����� : %d \n", ave3);

	//for (int i = 0; i < total; i++)
	//{
	//	printf("�л� %d : ", i + 1);
	//	if (arr5[i] >= ave3)
	//	{
	//		printf("�հ� \n");
	//	}
	//	else
	//	{
	//		printf("���հ� \n");
	//	}
	//}

	///* ���� �̰͵�? */
	//int total = 3;
	//int arr[total];
	//int i, ave = 0;
	//
	//for (i = 0; i < total; i++) 
	//{
	//	printf("%d ��° �л��� ������? ", i + 1);
	//	scanf("%d", &arr[i]);
	//}
	//for (i = 0; i < total; i++)
	//{
	//	ave = ave + arr[i];
	//}
	//
	//ave = ave / total;
	//printf("��ü �л��� ����� : %d \n", ave);
	//
	//for (i = 0; i < total; i++) {
	//	printf("�л� %d : ", i + 1);
	//	if (arr[i] >= ave)
	//	{
	//		printf("�հ� \n");
	//	}
	//	else
	//	{
	//		printf("���հ� \n");
	//	}
	//}
	
	///* ��� */
	//const int a = 3;
	//printf("%d", a);

	//const int ba;
	//printf("%d", a);

	//const int c = 2;
	//c = c + 3;
	//printf("%d", c);

	//int d = 3;
	//const int e = d;
	//char c[e];

	//int arr;
	//printf("�� ���� ���? : %d", arr);

	///* �ʱ�ȭ ���� ���� �� */
	//int arr[3];
	//arr[0] = 1;
	//printf("�� ���� ��� : %d", arr[1]);

	///* �ʱ�ȭ ���� ���� �� */
	//int arr[3] = { 1 };
	//printf("�� ���� ��� : %d", arr[1]);

	/* ������ �� ���� */
	// ���� 1
	// �� �Է¹޴� �л����� ������ ���� ������ �����ϴ� ���α׷��� ����� ������.
	int arr[5];
	int ave = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d��° �л��� ������? ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		ave += arr[i];
;	}

	ave /= 5;
	printf("\n��ü �л��� ����� : %d \n\n", ave);

	for (int i = 0; i < 5; i++)
	{
		printf("�л� %d : ", i + 1);

		if (arr[i] >= ave)
		{
			printf("�հ� \n");
		}
		else
		{
			printf("���հ� \n");
		}
	}

	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

	printf("\n*** ���� ���� ���� ���� ***\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", arr[i]);
	}

	// ���� 2
	// �Է¹��� �л����� ������ ���� �׷����� ��Ÿ���� ���α׷��� ����� ������.
	printf("\n*** �׷��� ��� ***\n");
	for (int i = 0; i < 5; i++)
	{
		arr[i] /= 10;
		switch (arr[i])
		{
		case 1:			
			printf("score : 10, graph : * \n");
			break;
		case 2:
			printf("score : 20, graph : ** \n");
			break;
		case 3:
			printf("score : 30, graph : *** \n");
			break;
		case 4:
			printf("score : 40, graph : **** \n");
			break;
		case 5:
			printf("score : 50, graph : ***** \n");
			break;
		case 6:
			printf("score : 60, graph : ****** \n");
			break;
		case 7:
			printf("score : 70, graph : ******* \n");
			break;
		case 8:
			printf("score : 80, graph : ******** \n");
			break;
		case 9:
			printf("score : 90, graph : ********* \n");
			break;
		case 10:
			printf("score : 100, graph : ********** \n");
			break;
		default:
			break;
		}
	}
}