#include <stdio.h>

int main(void)
{
	char c = '@';
	char* pc = &c;
	int m = 100;
	int* pm = &m;
	double x = 5.83;
	double* px = &x;

	printf("변수명			주소값            저장값\n");
	printf("----------------------------------------------------------------------\n");
	printf("%3s		%12p	%9c\n", "c", pc, c);
	printf("%3s		%12p	%9d\n", "m", pm, m);
	printf("%3s		%12p	%9f\n", "x", px, x);
	

	int i = 100;
	char z = 'a';

	int* pi = &i;
	char* pz = &z;
	
	printf("간접참조 출력: %d %c\n", *pi, *pz);

	*pi = 400;
	*pz = 'b';
	
	printf("직접참조 출력: %d %c\n", i, z);
	


	//perfect C  p. 469 


	return 0;
}
