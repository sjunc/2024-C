#include <stdio.h>

int factorial(int); //함수 원형

int main(void)
{
	for (int i = 1; i <= 10; i++)
		printf("%d! = %d\n", i, factorial(i));

}
//재귀 함수 정의
int factorial(int number)
{
	if (number <= 1)
		return 1;
	else
		return(number * factorial(number - 1));
}