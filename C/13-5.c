#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int max(int, int, int);

int main(void)
{
	printf("�� ���� ���� �� ���� ū ������ ����մϴ�. \n ���� 3�� �Է� >>>");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("�Է��� �� �� ���� %d, %d, %d �߿��� ���� ū ������ %d �Դϴ�.", a, b, c, max(a, b, c)); // max�ȿ� a, b, c ���������� �������. 
	return 0;
}
int max(int a, int b, int c) // int d e f �� �ٲ� ���� ������. �Լ��� �θ� �� ���� ���� �̾����� ����. ���� �̸��� ������ ��
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}