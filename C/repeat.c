#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	printf("�� ������ �Է� ");
	
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (x > z)
			printf("�ִ� ��: %d", x);
		else
			printf("�ִ� ��: %d", z);
	}
	else
	{
		if (y > z)
			printf("�ִ� ��: %d", y);
		else
			printf("�ִ� ��: %d", z);
	}


	int score;
	printf("���� �Է�: ");
	scanf("%d", &score);

	switch (score / 10) {
	case 10: case 9:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'A');
		break;
	case 8:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'B');
		break;
	case 7:
		printf("������ %d ������ ������ %c �Դϴ�. \n", score, 'C');
		break;
	case 6:
		printf("������ %d ������ ������ %c �Դϴ�. \n", score, 'D');
		break;

	default:
		printf("������ %d ������ ������ %c �Դϴ�. \n", score, 'F');
	}

	return 0;
}