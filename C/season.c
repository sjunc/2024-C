#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int c;
	printf("���� �Է��غ�����: ");
	scanf("%d", &c);

	if (c >= 3 && c <= 5)
		printf("���Դϴ�.");
	else if (c >= 6 && c <= 8)
		printf("�����Դϴ�.");
	else if (c >= 9 && c <= 11)
		printf("�����Դϴ�.");
	else if (c <= 12 || c <= 2)
		printf("�ܿ��Դϴ�.");
	else
		printf("�߸� �Է��߽��ϴ�.");

	return 0;
}