#include <stdio.h>

int cacao(int a, int b);
// int cacao(int, int);

int main(void)
{
	int a = 10;
	int b = 20;
	int sum = 0;
	printf("�Լ� ����\n");
	sum = cacao(a,b);      // �Լ� ȣ�� ����
	printf("�� ������ ���� %d �̴�.\n", sum);
	
	return 0;
}

int cacao(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return (sum);
	printf("%d + %d = %d ��. \n", a, b, a + b); //return�ؼ� ���� X
}