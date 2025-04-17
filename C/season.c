#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int c;
	printf("달을 입력해보세요: ");
	scanf("%d", &c);

	if (c >= 3 && c <= 5)
		printf("봄입니다.");
	else if (c >= 6 && c <= 8)
		printf("여름입니다.");
	else if (c >= 9 && c <= 11)
		printf("가을입니다.");
	else if (c <= 12 || c <= 2)
		printf("겨울입니다.");
	else
		printf("잘못 입력했습니다.");

	return 0;
}