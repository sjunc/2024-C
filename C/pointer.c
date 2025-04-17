/*
11장 포인터 기초

&(ampersand)
%p
%zu

자료형*변수명

int*var;

0			휴지심(자료형 O 값 0)
null		휴지걸이(자료형 O 값 X)
undefined	아무것도 없음


int input;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &input);
	printf("입력 값: %d\n", input);
	printf("16진수 주소값: %p\n", &input);
	printf("10진수 주소값: %d\n", &input);

*/
#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptr;		//null 값
	ptr = &data;
	*ptr = 200;

	printf("data 변수 값: %d, data 주소 값: %p\n", data, &data);
	printf("ptr 변수 값: %p, ptr 주소 값: %p", ptr, &ptr);

	return 0;
}