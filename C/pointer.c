/*
11�� ������ ����

&(ampersand)
%p
%zu

�ڷ���*������

int*var;

0			������(�ڷ��� O �� 0)
null		��������(�ڷ��� O �� X)
undefined	�ƹ��͵� ����


int input;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &input);
	printf("�Է� ��: %d\n", input);
	printf("16���� �ּҰ�: %p\n", &input);
	printf("10���� �ּҰ�: %d\n", &input);

*/
#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptr;		//null ��
	ptr = &data;
	*ptr = 200;

	printf("data ���� ��: %d, data �ּ� ��: %p\n", data, &data);
	printf("ptr ���� ��: %p, ptr �ּ� ��: %p", ptr, &ptr);

	return 0;
}