#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	
int main(){
	
	float a = 0;
	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%f", &a);
	float b = 0;
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%f", &b);

	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
	printf("%.2f / %.2f = %.2f\n", a, b, a / b);
	printf("%d + %d = %d\n", (int)a, (int)b, int(a));
	

	int money = 0;
	printf("## 교환할 돈은? ");
	scanf("%d", &money);
	int money500 = money / 500;
	printf("오백원짜리 ==> %d개\n", money500);
	int money100 = -(money - money500*500) / 100;
	printf("백원짜리 ==> %d개\n", money100);
	int money50 = money100 / 50;
	printf("오십원짜리 ==> %d개\n", money50);
	int money10 = money50 / 10;
	printf("십원짜리 ==> %d개\n", money10);
	int rest = money - (500 * money500 + 100 * money100 + 50 * money50 + 10 * money10);
	printf("바꾸지 못한 잔돈 ==> %d원\n", rest);

	return 0;
}