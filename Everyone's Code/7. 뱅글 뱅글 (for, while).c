#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
    /* 1���� 100�� �� */
    printf("%d", 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 + 15 +
        16 + 17 + 18 + 19 + 20 + 21 + 22 + 23 + 24 + 25 + 26 + 27 +
        28 + 29 + 30 + 31 + 32 + 33 + 34 + 35 + 36 + 37 + 38 + 39 +
        40 + 41 + 42 + 43 + 44 + 45 + 46 + 47 + 48 + 49 + 50 + 51 +
        52 + 53 + 54 + 55 + 56 + 57 + 58 + 59 + 60 + 61 + 62 + 63 +
        64 + 65 + 66 + 67 + 68 + 69 + 70 + 71 + 72 + 73 + 74 + 75 +
        76 + 77 + 78 + 79 + 80 + 81 + 82 + 83 + 84 + 85 + 86 + 87 +
        88 + 89 + 90 + 91 + 92 + 93 + 94 + 95 + 96 + 97 + 98 + 99 +
        100);
    printf("\n\n");

    /* 1���� 20�� ��� */
    int i;
    for (i = 0; i < 20; i++)
    {
        printf("���� : %d \n", i);
    }
    printf("\n");

    /* 1���� 19������ �� */
    int j, sum = 0;
    for (j = 0; j < 20; j++)
    {
        sum = sum + j;
    }
    printf("1���� 19������ �� : %d \n", sum);
    printf("\n");

    /* 1���� 10000������ �� */
    int x, sum2 = 0;
    for (x = 0; x <= 10000; x++)
    {
        sum2 = sum2 + x;
    }
    printf("1���� 10000������ �� : %d \n", sum2);
    printf("\n");

    /* for �� ���� */
    int y;
    int subject, score;
    double sum_score = 0;

    printf("�� ���� ���� ������ �Է� ���� ���ΰ��� ? ");
    scanf("%d", &subject);

    printf("\n�� ������ ������ �Է��� �ּ��� \n");
    for (y = 1; y <= subject; y++)
    {
        printf("���� %d : ", y);
        scanf("%d", &score);
        sum_score = sum_score + score;
    }
    printf("��ü ������ ����� : %.2f \n", sum_score / subject);
    printf("\n");

    /* break! */
    int usranswer;

    printf("��ǻ�Ͱ� ������ ���ڸ� ���߾����! \n");

    for (;;)
    {
        scanf("%d", &usranswer);
        if (usranswer == 3)
        {
            printf("���߼̱���! \n");
            break;
        }
        else
        {
            printf("Ʋ�Ⱦ��! \n");
        }
    }
    printf("\n");

    /* a ���ѷ��� */
    for (;;)
    {
        printf("a");
    }
    printf("\n");

    /* 5�� ����� ������ ���� ��� */
    int z;
    
    for (z = 0; z < 100; z++)
    {
        if (z % 5 == 0)
        {
            continue;
        }
        printf("%d ", z);
    }
    printf("\n");

    /* ������ */
    int a, b;
    for (a = 1; a < 10; a++)
    {
        for (b = 1; b < 10; b++)
        {
            printf("%d * %d = %d \n", a, b, a * b);
        }
    }
    printf("\n");

    /* ���� �ҽ��� ���� ���� ���ڰ� ��µ� �� ���߾� ������~~ */
    int c, d;
    
    for (c = 1; c < 10; c++)
    {
        for (d = 1; d < c; d++)
        {
            printf("%d ", d);
        }
    }
    printf("\n");

    /* while�� */
    int e = 1, sum3 = 0;
    
    while (e <= 100)
    {
        sum3 += e;
        e++;
    }
    printf("1���� 100������ �� : %d \n", sum3);
    printf("\n");

    /* do~while�� */
    int f = 1, sum4 = 0;
    do
    {
        sum4 += f;
        f++;
    } while (f < 1);
    printf("sum4 : %d \n", sum4);
    printf("\n");

    /* ���� 1 */
    int i, j, Triangle;

    printf("��� *�� ��ڽ��ϱ�? (�Ƕ�̵� ��) ");
    scanf("%d", &Triangle);

    for (int i = 0; i < Triangle; i++)
    {
        for (int j = 0; j < (Triangle - 1) - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    /* ���� 2 */
    int x, y, Triangle2;
    
    printf("��� *�� ��ڽ��ϱ�? (���Ƕ�̵�) ");
    scanf("%d", &Triangle2);

    for (int x = 0; x < Triangle2; x++)
    {
        for (int y = 0; y < x; y++)
        {
            printf(" ");
        }
        for (int y = 0; y < (2 * (Triangle2 - x) -1); y++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    /* ���� 3 - 1000 ������ 3 �Ǵ� 5�� ����� �ڿ������� ���� ���Ѵ�. */
    int result = 0;

    for (int i = 0; i <= 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            result += i;
        }

    }
    printf("%d ", result);
    printf("\n");

    /* ���� 4 - 1,000,000 ������ �Ǻ���ġ ������ ¦�� �׵��� ���� ���Ѵ�.*/
    int result = 0;
    int A = 0, B = 1, C = 1;

    while (C <= 1000000)
    {
        C = A + B;
        A = B;
        B = C;
        if (C % 2 == 0)
        {
            result += C;
        }
    }
    printf("%d", result);
    printf("\n");

    /* ���� 5 - ����ڷκ��� N ���� �Է� �ް� 1���� N ������ ���� ����Ѵ� */
    int num;
    int result = 0;

    printf("1���� N�� ������ ���� N�� �Է��ϼ��� : ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        result = num * i;
    }
    printf("���� : %d �Դϴ�. \n", result);
    printf("\n");

    /* ���� 6. ���� �Ʒ��� ���� �����ϴ� �ڿ��� a, b, c �� ������ ���Ͽ���*/
    // i) a + b + c = 2000
    // ii) a �� b > c, a, b, c �� ��� �ڿ���
    int a, b, c;
    int count = 0;
    for (int a = 1; a <= 2000; a++)
    {
        for (int b = 1; b < a; b++)
        {
            for (int c = 1; c < b; c++)
            {
                if (a + b + c == 2000)
                {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    printf("\n");   

    /* ���� 7. ������ �ڿ��� N�� �Է� �޾� N�� ���μ� ���� �� ����� ����Ͽ���. */
    int num;

    printf("���μ� ���ظ� �� N�� �Է��ϼ���. : ");
    scanf("%d", &num);

    printf("%d = ", num);
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            num /= i;
            printf("%d * ", i);
            i = 1;
        }
    }
}