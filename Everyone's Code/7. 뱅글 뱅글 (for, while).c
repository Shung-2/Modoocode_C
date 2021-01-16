#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
    /* 1부터 100의 합 */
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

    /* 1부터 20의 출력 */
    int i;
    for (i = 0; i < 20; i++)
    {
        printf("숫자 : %d \n", i);
    }
    printf("\n");

    /* 1부터 19까지의 합 */
    int j, sum = 0;
    for (j = 0; j < 20; j++)
    {
        sum = sum + j;
    }
    printf("1부터 19까지의 합 : %d \n", sum);
    printf("\n");

    /* 1부터 10000까지의 합 */
    int x, sum2 = 0;
    for (x = 0; x <= 10000; x++)
    {
        sum2 = sum2 + x;
    }
    printf("1부터 10000까지의 합 : %d \n", sum2);
    printf("\n");

    /* for 문 응용 */
    int y;
    int subject, score;
    double sum_score = 0;

    printf("몇 개의 과목 점수를 입력 받을 것인가요 ? ");
    scanf("%d", &subject);

    printf("\n각 과목의 점수를 입력해 주세요 \n");
    for (y = 1; y <= subject; y++)
    {
        printf("과목 %d : ", y);
        scanf("%d", &score);
        sum_score = sum_score + score;
    }
    printf("전체 과목의 평균은 : %.2f \n", sum_score / subject);
    printf("\n");

    /* break! */
    int usranswer;

    printf("컴퓨터가 생각한 숫자를 맞추어보세요! \n");

    for (;;)
    {
        scanf("%d", &usranswer);
        if (usranswer == 3)
        {
            printf("맞추셨군요! \n");
            break;
        }
        else
        {
            printf("틀렸어요! \n");
        }
    }
    printf("\n");

    /* a 무한루프 */
    for (;;)
    {
        printf("a");
    }
    printf("\n");

    /* 5의 배수를 제외한 숫자 출력 */
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

    /* 구구단 */
    int a, b;
    for (a = 1; a < 10; a++)
    {
        for (b = 1; b < 10; b++)
        {
            printf("%d * %d = %d \n", a, b, a * b);
        }
    }
    printf("\n");

    /* 다음 소스만 보고 무슨 숫자가 출력될 지 맞추어 보세요~~ */
    int c, d;
    
    for (c = 1; c < 10; c++)
    {
        for (d = 1; d < c; d++)
        {
            printf("%d ", d);
        }
    }
    printf("\n");

    /* while문 */
    int e = 1, sum3 = 0;
    
    while (e <= 100)
    {
        sum3 += e;
        e++;
    }
    printf("1부터 100까지의 합 : %d \n", sum3);
    printf("\n");

    /* do~while문 */
    int f = 1, sum4 = 0;
    do
    {
        sum4 += f;
        f++;
    } while (f < 1);
    printf("sum4 : %d \n", sum4);
    printf("\n");

    /* 문제 1 */
    int i, j, Triangle;

    printf("몇개의 *을 찍겠습니까? (피라미드 형) ");
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
    
    /* 문제 2 */
    int x, y, Triangle2;
    
    printf("몇개의 *을 찍겠습니까? (역피라미드) ");
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

    /* 문제 3 - 1000 이하의 3 또는 5의 배수인 자연수들의 합을 구한다. */
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

    /* 문제 4 - 1,000,000 이하의 피보나치 수열의 짝수 항들의 합을 구한다.*/
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

    /* 문제 5 - 사용자로부터 N 값을 입력 받고 1부터 N 까지의 곱을 출력한다 */
    int num;
    int result = 0;

    printf("1부터 N의 값까지 곱할 N을 입력하세요 : ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        result = num * i;
    }
    printf("값은 : %d 입니다. \n", result);
    printf("\n");

    /* 문제 6. 다음 아래의 식을 만족하는 자연수 a, b, c 의 개수를 구하여라*/
    // i) a + b + c = 2000
    // ii) a ＞ b > c, a, b, c 는 모두 자연수
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

    /* 문제 7. 임의의 자연수 N을 입력 받아 N을 소인수 분해 한 결과를 출력하여라. */
    int num;

    printf("소인수 분해를 할 N을 입력하세요. : ");
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