#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m;
	printf("���� �Է��ϼ���.");
	scanf("%d", &m);

	switch (m)
	{
	case 1: case 2:
		printf("�ܿ��Դϴ�,");
		break;
	case 3:
	case 4:
	case 5:
		printf("���Դϴ�.");
		break;
	case 6:
		printf("�����Դϴ�.");
		break;
	default:
		printf("����� �ۼ��ϼ���");
	}

	char a;
	printf("���ڸ� �Է��ϼ���  ");
	scanf("%c", &a);

	switch (a)
	{
	case 'a':
		printf("���ĺ��Դϴ�. ");
		break;
	case 'b':
		printf("���ĺ��Դϴ�. ");
		break;
	case 'c':
		printf("���ĺ��Դϴ�. ");
		break;
	default:
		printf("���ڸ� �Է��ϼ���");
	}
}