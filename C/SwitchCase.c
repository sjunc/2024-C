#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a;
	printf("ù��° ������ �Է��ϼ���.\n");
	scanf("%d", &a);

	char c;
	printf("�����ڸ� �Է��ϼ���.\n");
	scanf(" %c", &c);
	
	int b;
	printf("�ι�° ������ �Է��ϼ���.\n");
	scanf("%d", &b);

	switch (c)
	{
	case '+':
		printf("%d + %d = %d", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d", a, b, a / b);
		break;
	default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�. ");

	}
	return 0;
}
