#include <stdio.h>

int factorial(int); //�Լ� ����

int main(void)
{
	for (int i = 1; i <= 10; i++)
		printf("%d! = %d\n", i, factorial(i));

}
//��� �Լ� ����
int factorial(int number)
{
	if (number <= 1)
		return 1;
	else
		return(number * factorial(number - 1));
}