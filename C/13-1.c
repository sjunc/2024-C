#include <stdio.h>

int rfunc(int); // 함수 원형

int main(void)
{
	printf("%d\n", rfunc(10)); // n이 10일때 결과 출력

	return 0;
}

int rfunc(int n) //함수 정의 
{
	if (n == 1)			// n이 1과 같아 질때 1 반환
		return 1;
	else				// n의 n-1한 값을 n이 1일때 까지 더함
		return(n + rfunc(n - 1));
}