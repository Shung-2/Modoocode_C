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
	int data;				/* 데이터 */
	struct Node* nextNode;	/* 다음 노드를 가리키는 부분 */
};

/* 새 노드를 만드는 함수 */
struct Node* CreateNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = data;
	newNode->nextNode = NULL;

	return newNode;
}

/* current 라는 노드 뒤에 노드를 새로 만들어 넣는 함수 */
struct Node* InsertNode(struct Node* current, int data)
{
	/* current 노드가 가리키고 있던 다음 노드가 after 이다 */
	struct Node* after = current->nextNode;

	/* 새로운 노드를 생성한다. */
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	/* 새 노드에 값을 넣어준다 */
	newNode->data = data;
	newNode->nextNode = after;

	/* current는 이제 newNode를 가리키게 된다. */
	current->nextNode = newNode;

	return newNode;
}

/* 선택된 노드를 파괴하는 함수 */
void DestroyNode(struct Node* destroy, struct Node* head)
{
	/* 다음 노드를 가리킬 포인터 */
	struct Node* next = head;

	/* head를 파괴하려 한다면 */
	if (destroy == head)
	{
		free(destroy);
		return;
	}

	/* 만일 next가 NULL 이면 종료 */
	while (next)
	{
		/* 만일 next 다음 노드가 destory 람녀 next가 destory 앞 노드 */
		if (next->nextNode == destroy)
		{
			/* 따라서 next의 다음 노드는 destory가 아니라 destroy의 다음 노드가 된다. */
			next->nextNode = destroy->nextNode;
		}
		next = next->nextNode;
	}
	free(destroy);
}

void PrintNodeFrom(struct Node* from)
{
	/* form이 NULL 일 때 까지, 즉 끝부분에 도달할 때 까지 출력 */
	while (from)
	{
		printf("노드의 데이터 : %d \n", from->data);
		from = from->nextNode;
	}
}

int main()
{
	/* 구조체 동적 할당 */
	struct Something* arr;
	int size, i;

	printf("원하는 구조체 배열의 크기 : ");
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

	/* 노드 */
	struct Node* Node1 = CreateNode(100);
	struct Node* Node2 = InsertNode(Node1, 200);
	struct Node* Node3 = InsertNode(Node2, 300);
	/* Node2 뒤에 Node4 넣기 */
	struct Node* Node4 = InsertNode(Node2, 400);

	PrintNodeFrom(Node1);
	return 0;

	/* memcpy 함수 */
	char str[50] = "I Love Chewing C hahaha";
	char str2[50];
	char str3[50];

	memcpy(str2, str, strlen(str) + 1);
	memcpy(str3, "hello", 6);

	printf("%s \n", str);
	printf("%s \n", str2);
	printf("%s \n", str3);

	/* memmove 함수 */
	char str[50] = "I Love Chewing C hahaha";

	printf("%s \n", str);
	printf("memmove 이후 \n");
	memmove(str + 23, str + 17, 6);
	printf("%s \n", str);

	/* memcmp 함수 */
	int arr[10] = { 1,2,3,4,5 };
	int arr2[10] = { 1,2,3,4,5 };

	if (memcmp(arr, arr2, 5) == 0)
	{
		printf("arr과 arr2는 일치! \n");
	}
	else
	{
		printf("arr과 arr2는 불일치! \n");
	}
}

