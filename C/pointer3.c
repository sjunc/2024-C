#include <stdio.h> 

int main(void)
{

	int x = 500, y = 700, dummy;
	printf("%d %d\n", x, y);

	int* px = &x, * py = &y, * pd = &dummy;
	
	// x, y 서로 값 바꾸기
	*pd = *px;
	*px = *py;
	*py = *pd;


	printf("%d %d\n", x, y);

	return 0;
}
//perfect C  p. 477 
