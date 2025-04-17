#include <stdio.h>

int cacao(int a, int b);
// int cacao(int, int);

int main(void)
{
	int a = 10;
	int b = 20;
	int sum = 0;
	printf("함수 연습\n");
	sum = cacao(a,b);      // 함수 호출 구문
	printf("두 숫자의 합은 %d 이다.\n", sum);
	
	return 0;
}

int cacao(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return (sum);
	printf("%d + %d = %d 다. \n", a, b, a + b); //return해서 실행 X
}