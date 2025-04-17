#include <stdio.h>

int main(void)
{
	int score[] = { 10, 20, 30 };
	
	printf("%p  %p\n", score, (score + 1));  // 주소는 계속 바뀌나 score 와 score+1은 항상 4 차이
	printf("%d  %d\n", *score, *(score + 1));// 저장값으로 접근
	
	int a[3] = { 5, 10, 15 };
	int* p = a;	// a == &a[0] 배열이기에 간접 참조형태(하나만 쓰는 걸) 할 수 없음.
	printf("%d %d %d \n", *(p), *(p + 1), *(p + 2));
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("%d \n", *p++);
	printf("%d \n", *p);
	return 0;
}