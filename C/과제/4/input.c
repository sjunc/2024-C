#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, result;
	printf("ù��° ����� ���� �Է��ϼ���==> ");
	scanf("%d", &a);
	printf("�ι�° ����� ���� �Է��ϼ���==> ");
	scanf("%d", &b);
	result = a + b;
	printf("%d + %d = %d\n", a, b, result);
	result = a - b;
	printf("%d -%d=%d\n", a, b, result);
	result = a * b;
	printf("%d x %d = %d\n", a, b, result);
	result = a / b;
	printf("%d / %d = %d\n", a, b, result);

}
