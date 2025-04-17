#include <stdio.h>

void reset(void);
void count(void);

int main(void)
{
	for (int i = 1; i <= 5; i++)		//몇 번 반복할 것인가
	{
		reset();
		count(); //  사용자 정의 함수
	}
	return 0;
}
void reset(void)
{
	auto int n = 1;
	printf("자동 지역 변수 n: %d\n", n);
	n++;
}
void count(void)
{
	static int s = 10;
	printf("\t정적 지역 변수 s: %d\n", s);
	s++;
}