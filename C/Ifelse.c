#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

		int c;
		printf("�⵵�� ��(month)�� �Է��ϼ���>> ");
		scanf("%d", &c);

		if (c >= 1 && c <= 3)
			printf("%d��(month)�� 1��б��Դϴ�.", c);
		else if (c >= 4 && c <= 6)
			printf("%d��(month)�� 2��б��Դϴ�.", c);
		else if (c >= 7 && c <= 9)
			printf("%d��(month)�� 3��б��Դϴ�.", c);
		else if (c >= 9 && c <= 12)
			printf("%d��(month)�� 4��б��Դϴ�.", c);
		else
			printf("�߸� �Է��߽��ϴ�.");

		return 0;
	}