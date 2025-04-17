#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a;
	printf("첫번째 정수를 입력하세요.\n");
	scanf("%d", &a);

	char c;
	printf("연산자를 입력하세요.\n");
	scanf(" %c", &c);
	
	int b;
	printf("두번째 정수를 입력하세요.\n");
	scanf("%d", &b);

	switch (c)
	{
	case '+':
		printf("%d + %d = %d", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d", a, b, a / b);
		break;
	default:
		printf("연산자를 잘못 입력했습니다. ");

	}
	return 0;
}
