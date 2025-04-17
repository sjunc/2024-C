#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, b = 0;
	printf("임의의 정수 입력1: \n");
	scanf("%d", &a);
	printf("임의의 정수 입력2: \n");
	scanf("%d", &b);
	(a > b) ? printf("몫은 %d이고 나머지는 %d입니다.", a / b, a % b) : printf("몫은 %d이고 나머지는 %d입니다.", b / a, b % a);

	
}