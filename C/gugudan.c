#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gugu(int);

int main(void)
{
	int a;
	printf("����ϰ� ���� ���� �Է�: ");
	scanf("%d", &a);
	gugu(a);

	return 0;
}
void gugu(int a) {
	for (int i = 1; i<10; ++i)
	{
		printf(" %2d X %2d = %2d \n", a, i, a * i);
	}
}
