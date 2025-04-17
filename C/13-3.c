#include <stdio.h>

int max(int a, int b, int c);

int main(void)
{
	printf("%d\n", max(9, 4, 10));

	return 0;
}

int max(int a, int b, int c)
{
	int max = a;
	int max2 = (b > c) ? b : c;

	if (a >= max2)
		return a;
	else
		return max2;
}