#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{//
	//int a;
	//printf("정수를 입력하세요: \n");
	//scanf("%d", &a);
	//
	//
	//if (a%2 == 0) //짝홀 
	//{
	//	printf("짝수입니다.\n");  //c는 들여쓰기해도 2번째 문장부턴 안에 속한다고 인식을 안함. {}안에 넣어줘야함
	//}
	//else			// ; 안 붙음
	//{
	//	printf("홀수입니다.\n");
	//} // 미리 구조를 생각하고 들어가야지 코드가 끊기지않는다.
	//printf("처리를 종료합니다.\n");
	
	int a;
	printf("나이를 입력하세요");
	scanf("%d", &a);
	if (a >= 20 && a <= 39)
	{
		printf("청년입니다.\n");
	}
	else if (a >= 40 && a <= 59)
	{
		printf("중장년입니다.\n");
	}
	else
		printf("처리를 종료합니다.\n");


	printf("처리를 종료합니다.");
	return 0;
}

/*
 
 */