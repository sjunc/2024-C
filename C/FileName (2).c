#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{/*
	printf("10&3=%d\n", 10 & 3);
	printf("10|3=%d\n", 10 | 3);
	printf("10^3=%d\n", 10 ^ 3);
	int a = 10;
	printf("%d�� ���� 1ȸ ����Ʈ ���� ���: %d", a, a << 1);
	
	int amt = 0;
	int free = 10;
	printf("�� �ݾ��� �Է��ϼ���: ");
	scanf("%d", &amt);
	
	int sale = (amt >= 10000) && (free++ >= 10);
	printf("����: %d, ���� ��: %d\n", sale, free);

	int c = 0, b = 0;
	printf("������ �� �� �Է��Ͻÿ�. >>");
	scanf("%d%d", &a, &b);
	printf("�� ���� �� ū ����: %d\n", (a > b) ? a : b);
	printf("�� ���� �� ���� ����: %d\n", (a < b) ? a : b);
	printf("���밪��: %d", (a > 0) ? a : -a);
	printf("a�� %s\n", ((a % 2) == 0) ? "¦��" : "Ȧ��");
	printf("b�� "); ((b % 2) == 0) ? printf("¦��") : printf("Ȧ��");

	

	*/

	int a = 3.5;
	double b = 10;

	printf("%d\n%f\n", a, b);
	printf("%d\n%f\n", (int)3.141592, (double)3);

	return 0;
}