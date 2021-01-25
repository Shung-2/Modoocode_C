#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Something
{
	int a, b;
};

struct Node
{
	int data;				/* ������ */
	struct Node* nextNode;	/* ���� ��带 ����Ű�� �κ� */
};

/* �� ��带 ����� �Լ� */
struct Node* CreateNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = data;
	newNode->nextNode = NULL;

	return newNode;
}

/* current ��� ��� �ڿ� ��带 ���� ����� �ִ� �Լ� */
struct Node* InsertNode(struct Node* current, int data)
{
	/* current ��尡 ����Ű�� �ִ� ���� ��尡 after �̴� */
	struct Node* after = current->nextNode;

	/* ���ο� ��带 �����Ѵ�. */
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	/* �� ��忡 ���� �־��ش� */
	newNode->data = data;
	newNode->nextNode = after;

	/* current�� ���� newNode�� ����Ű�� �ȴ�. */
	current->nextNode = newNode;

	return newNode;
}

/* ���õ� ��带 �ı��ϴ� �Լ� */
void DestroyNode(struct Node* destroy, struct Node* head)
{
	/* ���� ��带 ����ų ������ */
	struct Node* next = head;

	/* head�� �ı��Ϸ� �Ѵٸ� */
	if (destroy == head)
	{
		free(destroy);
		return;
	}

	/* ���� next�� NULL �̸� ���� */
	while (next)
	{
		/* ���� next ���� ��尡 destory ���� next�� destory �� ��� */
		if (next->nextNode == destroy)
		{
			/* ���� next�� ���� ���� destory�� �ƴ϶� destroy�� ���� ��尡 �ȴ�. */
			next->nextNode = destroy->nextNode;
		}
		next = next->nextNode;
	}
	free(destroy);
}

void PrintNodeFrom(struct Node* from)
{
	/* form�� NULL �� �� ����, �� ���κп� ������ �� ���� ��� */
	while (from)
	{
		printf("����� ������ : %d \n", from->data);
		from = from->nextNode;
	}
}

int main()
{
	/* ����ü ���� �Ҵ� */
	struct Something* arr;
	int size, i;

	printf("���ϴ� ����ü �迭�� ũ�� : ");
	scanf("%d", &size);

	arr = (struct SomeThing*)malloc(sizeof(struct Something) * size);

	for (i = 0; i < size; i++)
	{
		printf("arr [ %d ] . a : ", i);
		scanf("%d", &arr[i].a);
		printf("arr [ %d ] . b : ", i);
		scanf("%d", &arr[i].b);
	}

	for (i = 0; i < size; i++)
	{
		printf("arr[%d].a : %d , arr[%d].b : %d \n", i, arr[i].a, i, arr[i].b);
	}

	free(arr);

	/* ��� */
	struct Node* Node1 = CreateNode(100);
	struct Node* Node2 = InsertNode(Node1, 200);
	struct Node* Node3 = InsertNode(Node2, 300);
	/* Node2 �ڿ� Node4 �ֱ� */
	struct Node* Node4 = InsertNode(Node2, 400);

	PrintNodeFrom(Node1);
	return 0;

	/* memcpy �Լ� */
	char str[50] = "I Love Chewing C hahaha";
	char str2[50];
	char str3[50];

	memcpy(str2, str, strlen(str) + 1);
	memcpy(str3, "hello", 6);

	printf("%s \n", str);
	printf("%s \n", str2);
	printf("%s \n", str3);

	/* memmove �Լ� */
	char str[50] = "I Love Chewing C hahaha";

	printf("%s \n", str);
	printf("memmove ���� \n");
	memmove(str + 23, str + 17, 6);
	printf("%s \n", str);

	/* memcmp �Լ� */
	int arr[10] = { 1,2,3,4,5 };
	int arr2[10] = { 1,2,3,4,5 };

	if (memcmp(arr, arr2, 5) == 0)
	{
		printf("arr�� arr2�� ��ġ! \n");
	}
	else
	{
		printf("arr�� arr2�� ����ġ! \n");
	}
}

