#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double cm = 0;
	printf("���̸� ��Ƽ���ͷ� �Է� (�Ҽ�) >> ");
	scanf("%lf", &cm);
	double feet = cm/30.48;
	printf("%lf ��Ƽ����: %.3lf ��Ʈ", cm, feet);
	
	return 0;

}