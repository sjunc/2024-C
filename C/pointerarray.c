#include <stdio.h>

int main(void)
{
	int score[] = { 10, 20, 30 };
	
	printf("%p  %p\n", score, (score + 1));  // �ּҴ� ��� �ٲ score �� score+1�� �׻� 4 ����
	printf("%d  %d\n", *score, *(score + 1));// ���尪���� ����
	
	int a[3] = { 5, 10, 15 };
	int* p = a;	// a == &a[0] �迭�̱⿡ ���� ��������(�ϳ��� ���� ��) �� �� ����.
	printf("%d %d %d \n", *(p), *(p + 1), *(p + 2));
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("%d \n", *p++);
	printf("%d \n", *p);
	return 0;
}