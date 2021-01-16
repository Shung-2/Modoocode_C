#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main()
{
	/* 마이펫 */
	int input;

	printf("마이펫 \n");
	printf("무엇을 하실 것인지 입력하세요 \n");
	printf("1. 밥주기 \n");
	printf("2. 씻기기 \n");
	printf("3. 재우기 \n");

	scanf("%d", &input);

	if (input == 1)
	{
		printf("아이 맛있어 \n");
	}
	else if (input == 2)
	{
		printf("아이 시원해 \n");
	}
	else if (input == 3)
	{
		printf("zzz \n");
	}
	else
	{
		printf("무슨 명령인지 못 알아 듣겠어. 왈왈 \n");
	}

	/* 업그레이드 버전 */
	int input;

	printf("마이펫 업그레이드 \n");
	printf("무엇을 하실 것인지 입력하세요 \n");
	printf("1. 밥주기 \n");
	printf("2. 씻기기 \n");
	printf("3. 재우기 \n");

	scanf("%d", &input);

	switch (input)
	{
	case 1 :
		printf("아이 맛있어 \n");
		break;
		
	case 2:
		printf("아이 시원해 \n");
		break;
	
	case 3:
		printf("zzz");
		break;

	default:
		printf("무슨 명령인지 못 알아 듣겠어. 왈왈 \n");
		break;
	}

	/* 실패작 */
	int input;

	printf("마이펫 업그레이드 \n");
	printf("무엇을 하실 것인지 입력하세요 \n");
	printf("1. 밥주기 \n");
	printf("2. 씻기기 \n");
	printf("3. 재우기 \n");

	scanf("%d", &input);

	switch (input)
	{
	case 1:
		printf("아이 맛있어 \n");

	case 2:
		printf("아이 시원해 \n");

	case 3:
		printf("zzz");

	default:
		printf("무슨 명령인지 못 알아 듣겠어. 왈왈 \n");
	}

	/* 영어 말하기 */
	char input;

	printf("(소문자) 알파벳 읽기 \n");
	printf("알파벳 : ");
	
	scanf("%c", &input);

	switch (input)
	{
	case 'a':
		printf("에이 \n");
		break;

	case 'b':
		printf("비 \n");
		break;

	case 'c':
		printf("씨 \n");
		break;

	default:
		printf("죄송해요.. 머리가 나빠서 못 읽겠어요 \n");
		break;
	}

	/* 생각해 보기 */
	/* 문제 1
	switch 문의 '값' 부분에 왜 정수만 와야 되는지 아십니까 ? (난이도 : 中上) */
	정확한 답은 보통 switch 는 현재 위치에서 index 만큼 jmp 하는 방식으로 처리되기 때문에 당연히 index 는 정수만 올 수 있습니다.
	참고로 이와 같이 구현하는 이유는 여러번의 if-else 없이 그냥 jmp 한 번으로 원하는 코드 위치에 갈 수 있기 때문이지요.

	/* 문제 2
	앞서, switch 문이 내부적으로 처리 되는 부분에서 case 1: ~case 10: 일 때 만 생각하였는데,
	만약 case 1:, case 3:, case 4:, case 10: 과 같이 불규칙 적으로 switch 문이 적용된다면 컴퓨터는 jump table 를 어떻게 작성할까요(난이도 : 最上) */
	문제2. https://godbolt.org/z/6D5GMh 를 참고했을 때, 제일 큰 값으로 cmp를 이용해 2번 비교를 하게 되고,
	Case에서 가장 큰 값과 일치했을 경우(두 값을 뺐을 때 0)에는 동일하게 처리하나,
	가장 큰 값과 비교했을 때 input에 들어간 값이 더 크게 되면 바로 return하는 부분으로 jump하게 됩니다.(더 이상 큰 값의 Case가 없으므로)
	이후로는 5 이하의 수들이므로 모든 case에 대하여 비교 후 전부 일치하지 않을 경우 return을 취하는 것으로 동작합니다.
	또한 Case에 들어가는 값의 경우 4를 기점으로 2번 비교하느냐와 마느냐가 결정되게 됩니다. (je - jg 2번 비교는 4 이상일 경우, je로만 비교 후 전부 아닐 경우 return은 4 미만일 경우로 처리됩니다.)
	그러므로 불규칙적인 경우 4 이상 큰 값들을 먼저 비교 후 case에 일치하는 값들을 걸러내면서 가장 효율적으로 더 큰 값의 경우 바로 default case로 넘어가게 됩니다. 4 미만의 경우 모든 case를 거쳐가게 작성합니다.

	문제 2:
	맞습니다.컴파일러 최적화에 따라 다르지만 적절히 if - else 와 index 기반 jmp 를 섞을 것입니다.
}