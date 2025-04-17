#include <stdio.h>
#include <stdlib.h>  // rand()를 위한 헤더 파일
#include <time.h>		// time() 위한 헤더 파일

#define MAX 100

/*
int main(void)
{
	printf("0~ %5d 사이의 난수 6개: rand()\n", RAND_MAX);	
	for (int i = 0; i < 6; i++)
	{
		printf("%5d ", rand()); // 오른쪽 5자리
		puts("");
	}
	return 0;
}
*/

int main(void)
{
	srand((long)time(NULL));
	printf("1 ~ %5d 사이의 난수 6개: \n", MAX);
	for (int i = 0; i < 6; i++)
		printf(" %5d ", rand() % MAX + 1);
	return 0;
}