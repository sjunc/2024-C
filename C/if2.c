#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) //260 345 if �ߺ�ó��
{
	int a;
	printf("�Է�: \n");
	scanf("%d", &a);

	if (a >= 0)
		if (a == 0)
			printf("0�Դϴ�.\n");
		else
			printf("����Դϴ�.\n");
	else
		printf("��");
	int b;
	printf("���: ");
	scanf("%d", &b);

	if (b >= 90)
		printf("A");
	else if (b >= 80)
		printf("B");
	else if (b >= 70)
		printf("C");
	else if (b >= 60)
		printf("D");
	else
		printf("F");
	printf("\n");


	int c;
	printf("���� �Է��غ�����: ");
	scanf("%d", &c);
	
	if (c >= 3 && c <= 5)
		printf("���Դϴ�.");
	else if (c >= 6 && c <= 8)
		printf("�����Դϴ�.");
	else if (c >= 9 && c <= 11)
		printf("�����Դϴ�.");
	else if (c >= 11 || c <= 2)
		printf("�ܿ��Դϴ�.");
	else
		printf("�߸��Է��߽��ϴ�.");


	return 0;
}
