#include <stdio.h>

sum(int, int, int);

int main(void)
{
	int sum = add(3, 4, 5);
	printf("%d\n", sum);

	return 0;
}
int add(int a, int b, int c)
{
	return a + b + c;
}