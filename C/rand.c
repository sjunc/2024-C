#include <stdio.h>
#include <stdlib.h>  // rand()�� ���� ��� ����
#include <time.h>		// time() ���� ��� ����

#define MAX 100

/*
int main(void)
{
	printf("0~ %5d ������ ���� 6��: rand()\n", RAND_MAX);	
	for (int i = 0; i < 6; i++)
	{
		printf("%5d ", rand()); // ������ 5�ڸ�
		puts("");
	}
	return 0;
}
*/

int main(void)
{
	srand((long)time(NULL));
	printf("1 ~ %5d ������ ���� 6��: \n", MAX);
	for (int i = 0; i < 6; i++)
		printf(" %5d ", rand() % MAX + 1);
	return 0;
}