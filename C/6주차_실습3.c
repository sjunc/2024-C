#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	printf("�� ���� ���� ,�� �Է� >> ");
	scanf("%d, %d, %d", &a, &b, &c);
	(a > b) && (a > c) ? printf("���� ū ��: %d", a) : (b>c) ? printf("���� ū ��: %d", b): printf("���� ū ��: %d", c);
	return 0;

}