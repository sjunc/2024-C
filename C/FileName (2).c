#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{/*
	printf("10&3=%d\n", 10 & 3);
	printf("10|3=%d\n", 10 | 3);
	printf("10^3=%d\n", 10 ^ 3);
	int a = 10;
	printf("%d를 왼쪽 1회 시프트 연산 결과: %d", a, a << 1);
	
	int amt = 0;
	int free = 10;
	printf("총 금액을 입력하세요: ");
	scanf("%d", &amt);
	
	int sale = (amt >= 10000) && (free++ >= 10);
	printf("할인: %d, 쿠폰 수: %d\n", sale, free);

	int c = 0, b = 0;
	printf("정수를 두 개 입력하시오. >>");
	scanf("%d%d", &a, &b);
	printf("두 숫자 중 큰 값은: %d\n", (a > b) ? a : b);
	printf("두 숫자 중 작은 값은: %d\n", (a < b) ? a : b);
	printf("절대값은: %d", (a > 0) ? a : -a);
	printf("a는 %s\n", ((a % 2) == 0) ? "짝수" : "홀수");
	printf("b는 "); ((b % 2) == 0) ? printf("짝수") : printf("홀수");

	

	*/

	int a = 3.5;
	double b = 10;

	printf("%d\n%f\n", a, b);
	printf("%d\n%f\n", (int)3.141592, (double)3);

	return 0;
}