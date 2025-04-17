#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

		int c;
		printf("년도의 월(month)을 입력하세요>> ");
		scanf("%d", &c);

		if (c >= 1 && c <= 3)
			printf("%d월(month)은 1사분기입니다.", c);
		else if (c >= 4 && c <= 6)
			printf("%d월(month)은 2사분기입니다.", c);
		else if (c >= 7 && c <= 9)
			printf("%d월(month)은 3사분기입니다.", c);
		else if (c >= 9 && c <= 12)
			printf("%d월(month)은 4사분기입니다.", c);
		else
			printf("잘못 입력했습니다.");

		return 0;
	}