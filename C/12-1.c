#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void calc(int, int, int);

int main(void)
{
	int a, b, c;
	printf("��� �Է� ( 1: +, 2: -, 3: *, 4: / ) : ");
	scanf("%d", &a);
	printf("����� �� ���ڸ� �Է� : ");
	scanf("%d %d", &b, &c);
	calc(a, b, c);

	return 0;
}
void calc(int a, int b, int c) {
	switch(a){
	case 1:
		printf("��� ����� : %d", b + c);
		break;
	case 2:
		printf("��� ����� : %d", b - c);
		break;
	case 3:
		printf("��� ����� : %d", b * c);
		break;
	case 4:
		printf("��� ����� : %d", b / c);
		break;
	}
}

/*
	if���� ���� ���


void calc(int, int, int);

int main(void)
{
	int a, b, c;
	printf("��� �Է� ( 1: +, 2: -, 3: *, 4: / \n");
	scanf("%d", &a);
	printf("����� �� ���ڸ� �Է� : \n");
	scanf("%d %d", &b, &c);
	calc(a, b, c);

	return 0;
}
void calc(int a, int b, int c) {

	if (a == 1)
		printf("��� ����� %d", b + c);
	else if (a == 2)
		printf("��� ����� %d", b - c);
	else if (a == 3)
		printf("��� ����� %d", b * c);
	else if (a == 4)
		printf("��� ����� % d", b / c);


}
*/
/*


��ȯ������ �ٲپ��� ��


int calc(int, int, int);

int main(void)
{
	int a, b, c;
	printf("��� �Է� ( 1: +, 2: -, 3: *, 4: / )\n");
	scanf("%d", &a);
	printf("����� �� ���ڸ� �Է� : \n");
	scanf("%d %d", &b, &c);
	int value = calc(a, b, c);
	printf("��� �����: %d", value);

	return 0;
}
int calc(int a, int b, int c) {
	switch (a) {
	case 1:
		return(b + c);
		break;
	case 2:
		return(b - c);
		break;
	case 3:
		return(b * c);
		break;
	case 4:
		return(b / c);
		break;
	}
}
*/
