#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, b = 0;
	printf("������ ���� �Է�1: \n");
	scanf("%d", &a);
	printf("������ ���� �Է�2: \n");
	scanf("%d", &b);
	(a > b) ? printf("���� %d�̰� �������� %d�Դϴ�.", a / b, a % b) : printf("���� %d�̰� �������� %d�Դϴ�.", b / a, b % a);

	
}