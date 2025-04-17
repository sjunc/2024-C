#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) //260 345 if 중복처리
{
	int a;
	printf("입력: \n");
	scanf("%d", &a);

	if (a >= 0)
		if (a == 0)
			printf("0입니다.\n");
		else
			printf("양수입니다.\n");
	else
		printf("끝");
	int b;
	printf("출력: ");
	scanf("%d", &b);

	if (b >= 90)
		printf("A");
	else if (b >= 80)
		printf("B");
	else if (b >= 70)
		printf("C");
	else if (b >= 60)
		printf("D");
	else
		printf("F");
	printf("\n");


	int c;
	printf("달을 입력해보세요: ");
	scanf("%d", &c);
	
	if (c >= 3 && c <= 5)
		printf("봄입니다.");
	else if (c >= 6 && c <= 8)
		printf("여름입니다.");
	else if (c >= 9 && c <= 11)
		printf("가을입니다.");
	else if (c >= 11 || c <= 2)
		printf("겨울입니다.");
	else
		printf("잘못입력했습니다.");


	return 0;
}
