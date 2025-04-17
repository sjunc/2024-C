#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m;
	printf("월을 입력하세요.");
	scanf("%d", &m);

	switch (m)
	{
	case 1: case 2:
		printf("겨울입니다,");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄입니다.");
		break;
	case 6:
		printf("여름입니다.");
		break;
	default:
		printf("제대로 작성하세요");
	}

	char a;
	printf("문자를 입력하세요  ");
	scanf("%c", &a);

	switch (a)
	{
	case 'a':
		printf("알파벳입니다. ");
		break;
	case 'b':
		printf("알파벳입니다. ");
		break;
	case 'c':
		printf("알파벳입니다. ");
		break;
	default:
		printf("문자를 입력하세요");
	}
}