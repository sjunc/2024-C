#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	
int main(){
	
	float a = 0;
	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%f", &a);
	float b = 0;
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%f", &b);

	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
	printf("%.2f / %.2f = %.2f\n", a, b, a / b);
	printf("%d + %d = %d\n", (int)a, (int)b, int(a));
	

	int money = 0;
	printf("## ��ȯ�� ����? ");
	scanf("%d", &money);
	int money500 = money / 500;
	printf("�����¥�� ==> %d��\n", money500);
	int money100 = -(money - money500*500) / 100;
	printf("���¥�� ==> %d��\n", money100);
	int money50 = money100 / 50;
	printf("���ʿ�¥�� ==> %d��\n", money50);
	int money10 = money50 / 10;
	printf("�ʿ�¥�� ==> %d��\n", money10);
	int rest = money - (500 * money500 + 100 * money100 + 50 * money50 + 10 * money10);
	printf("�ٲ��� ���� �ܵ� ==> %d��\n", rest);

	return 0;
}