#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void calc(int, int, int);

int main(void)
{
	int a, b, c;
	printf("계산 입력 ( 1: +, 2: -, 3: *, 4: / ) : ");
	scanf("%d", &a);
	printf("계산할 두 숫자를 입력 : ");
	scanf("%d %d", &b, &c);
	calc(a, b, c);

	return 0;
}
void calc(int a, int b, int c) {
	switch(a){
	case 1:
		printf("계산 결과는 : %d", b + c);
		break;
	case 2:
		printf("계산 결과는 : %d", b - c);
		break;
	case 3:
		printf("계산 결과는 : %d", b * c);
		break;
	case 4:
		printf("계산 결과는 : %d", b / c);
		break;
	}
}

/*
	if문을 쓰는 경우


void calc(int, int, int);

int main(void)
{
	int a, b, c;
	printf("계산 입력 ( 1: +, 2: -, 3: *, 4: / \n");
	scanf("%d", &a);
	printf("계산할 두 숫자를 입력 : \n");
	scanf("%d %d", &b, &c);
	calc(a, b, c);

	return 0;
}
void calc(int a, int b, int c) {

	if (a == 1)
		printf("계산 결과는 %d", b + c);
	else if (a == 2)
		printf("계산 결과는 %d", b - c);
	else if (a == 3)
		printf("계산 결과는 %d", b * c);
	else if (a == 4)
		printf("계산 결과는 % d", b / c);


}
*/
/*


반환형으로 바꾸었을 때


int calc(int, int, int);

int main(void)
{
	int a, b, c;
	printf("계산 입력 ( 1: +, 2: -, 3: *, 4: / )\n");
	scanf("%d", &a);
	printf("계산할 두 숫자를 입력 : \n");
	scanf("%d %d", &b, &c);
	int value = calc(a, b, c);
	printf("계산 결과는: %d", value);

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
