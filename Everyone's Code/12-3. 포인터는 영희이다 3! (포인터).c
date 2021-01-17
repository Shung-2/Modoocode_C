#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	//int arr[3] = { 1,2,3 };
	//int* parr;

	//parr = arr;
	///* parr = &arr[0]; 도 동일하다 */

	//printf("arr[1] : %d \n", arr[1]);
	//printf("parr[1] : %d \n", parr[1]);

	///* 포인터 이용하기 */
	//int arr[10] = { 100,98,97,95,89,76,92,96,100,99 };
	//int* parr = arr;
	//int sum = 0;

	//while (parr - arr <= 9)
	//{
	//	sum += (*parr);
	//	parr++;
	//}
	//printf("내 시험 정수 평균은 : %d \n", sum / 10);

	///* 배열명 */
	//int arr[10] = { 100,98,97,95,89,76,92,96,100,99 };
	//arr++;

	//int **p

	///* 포인터의 포인터 */
	//int a;
	//int* pa;
	//int** ppa;
	//
	//pa = &a;
	//ppa = &pa;

	//a = 3;

	//printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
	//printf("&a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
	//printf("&pa : %p // ppa : %p \n", &pa, ppa);

	//int arr[3] = { 1, 2, 3 };
	//int(*parr)[3] = &arr;
	//
	//printf("arr[1] : %d \n", arr[1]);
	//printf("parr[1] : %d \n", (*parr)[1]);

	//int arr[3] = { 1, 2, 3 };
	//int(*parr)[3] = &arr;

	//printf("arr : %d \n", arr);
	//printf("parr : %d \n", parr);

	///* 정말로? */
	//int arr[2][3];

	//printf("arr[0] : %p \n", arr[0]);
	//printf("&arr[0][0] : %p \n", &arr[0][0]);


	//printf("arr[1] : %p \n", arr[0]);
	//printf("&arr[1][0] : %p \n", &arr[1][0]);

	//int arr[2][3] = { {1,2,3,}, {4,5,6} };
	//printf("전체 크기 : %d \n", sizeof(arr));
	//printf("총 열의 개수 : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
	//printf("총 행의 개수 : %d \n", sizeof(arr) / sizeof(arr[0]));

	/* 과연 될까? */
	//int arr[2][3] = { {1,2,3,}, {4,5,6} };
	//int **parr;
	//
	//parr = arr;

	//printf("arr[1][1] : %d \n", arr[1][1]);
	//printf("parr[1][1] : %d \n", parr[1][1]);

	///* 1 증가하면 ? */
	//int arr[2][3] = { {1,2,3,}, {4,5,6} };
	//printf("arr : %p, arr + 1 : %p \n", arr, arr + 1);

	///* 드디어! 배우는 배열의 포인터 */
	//int arr[2][3] = { {1,2,3,}, {4,5,6} };
	//int(*parr)[3];	// 괄호를 꼭 붙이세요

	//parr = arr;

	//printf("parr[1][2] : %d, arr[1][2] : %d \n", parr[1][2], arr[1][2]);

	///* 배열 포인터 */
	//int arr[2][3];
	//int brr[10][3];
	//int crr[2][5];

	//int(*parr)[3];

	//parr = arr;
	//parr = brr;
	//parr = crr;

	/* 포인터 배열 */
	int* arr[3];
	int a = 1, b = 2, c = 3;
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;

	printf("a : %d, *arr[0] : %d \n", a, *arr[0]);
	printf("b : %d, *arr[1] : %d \n", b, *arr[1]);
	printf("c : %d, *arr[2] : %d \n", c, *arr[2]);
	printf("&a : %p, arr[0] : %p \n", &a, arr[0]);
}