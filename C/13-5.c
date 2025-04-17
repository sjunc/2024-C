#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int max(int, int, int);

int main(void)
{
	printf("세 개의 정수 중 가장 큰 정수를 출력합니다. \n 정수 3개 입력 >>>");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("입력한 세 개 정수 %d, %d, %d 중에서 가장 큰 정수는 %d 입니다.", a, b, c, max(a, b, c)); // max안에 a, b, c 지역변수를 집어넣음. 
	return 0;
}
int max(int a, int b, int c) // int d e f 로 바꿀 때도 동작함. 함수를 부를 때 위의 값이 이어지지 않음. 단지 이름이 같았을 뿐
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}