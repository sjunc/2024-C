#include <stdio.h>
/*
int a = 100; //전역변수 
void func1()
{
	int a = 200; // 지역변수 범위(scope)가 다르다.
	printf("사용자 정의 함수에서 a값: %d\n", a);
}
int main()
{
	func1();
	printf("메인 함수에서 a값: %d\n", a);
	return 0;
}
*/
void sub(int param)
{
	auto int local = 100; // auto가 생략 되고 있었음.
	printf("\t %d %d\n", param, local); // \t 들여쓰기 

}

int main(void)
{
	auto int n = 10; // 지역변수
	printf("%d\n", n);
	for (int m = 0, sum = 0; m < 3; m++)
	{
		sum += m;
		printf("\t%d %d\n", m, sum);
	}
	printf("%d\n", n);
	sub(20);

	return 0;
}