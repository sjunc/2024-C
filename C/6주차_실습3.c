#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	printf("세 개의 정수 ,로 입력 >> ");
	scanf("%d, %d, %d", &a, &b, &c);
	(a > b) && (a > c) ? printf("가장 큰 수: %d", a) : (b>c) ? printf("가장 큰 수: %d", b): printf("가장 큰 수: %d", c);
	return 0;

}