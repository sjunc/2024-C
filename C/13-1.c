#include <stdio.h>

int rfunc(int); // �Լ� ����

int main(void)
{
	printf("%d\n", rfunc(10)); // n�� 10�϶� ��� ���

	return 0;
}

int rfunc(int n) //�Լ� ���� 
{
	if (n == 1)			// n�� 1�� ���� ���� 1 ��ȯ
		return 1;
	else				// n�� n-1�� ���� n�� 1�϶� ���� ����
		return(n + rfunc(n - 1));
}