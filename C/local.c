#include <stdio.h>

void reset(void);
void count(void);

int main(void)
{
	for (int i = 1; i <= 5; i++)		//�� �� �ݺ��� ���ΰ�
	{
		reset();
		count(); //  ����� ���� �Լ�
	}
	return 0;
}
void reset(void)
{
	auto int n = 1;
	printf("�ڵ� ���� ���� n: %d\n", n);
	n++;
}
void count(void)
{
	static int s = 10;
	printf("\t���� ���� ���� s: %d\n", s);
	s++;
}