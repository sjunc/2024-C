/*
첨자(index) 0부터 시작 하나의 첨자당 4byte, 전체 크기를 알수도 있고 자료형의 용량으로도 알 수 있다.
접근은 첨자주소를 이용. 

1차원 배열 행
2차원 배열 행렬
 
 2차원 배열 선언 
 int td[ROWSIZE][COLSIZE];

 이중 반복문을 사용. 
횟수가 명확한 경우기에 for

integer 4byte 
double byte 
char 1byte

그릇에 맞게 넣어야 함. 

 크기 측정
sizeof()

원소 크기를 알 때 몇 번 반복할지를 알 수 있음.

함수(중급수준)
funtion call 함수 호출 필요할 때 씀. 

적절히 과제에 대한 분할( 적정히 쪼갤 필요가 있음) 정복
크게 나누면 오류가 생길 가능성, 너무 쪼개면 일이 더 많아짐. 
모듈화(가장 작은 단위로 나눔)해야 함. 모듈 = 기능

네트워크-자바

함수
입력 - 처리 - 출력

라이브러리 함수 - 사용자 정의 함수

C
반드시 하나의 main함수가 필요
절차적 프로그래밍 방식
모듈화된 함수 중심 프로그래밍.
							 함수 정의, 호출 프로토타입

함수 프로토 타입 선언				메인					함수 원형 
메인								함수 선언			메인
함수	 호출						함수 호출			함수 호출
													밖에다 함수 정의


반환형 함수이름(매개변수 목록)   세미클론 없음      함수 머리(head)
{
 여러 문장들

 return;
} 함수 몸체(body)

반환할 게 있으면 반환형( int, char, str, double, float) 등을 써줌
반환할 게 없으면 void 무치형을 써줌. ex) 출력만하고 끝나는 경우

실인자, 인자, argument  함수에 보내는 것

parameter, 매개변수 함수가 받는 것

인자와 매개변수의 개수는 같다. 



내가 입력한 값을 받아 그 값만으로 출력(call by value) 

매개변수로 배열 사용. 
배열[] 빈 괄호(얼마나 받는지 모르기때문에)










define은 include 위에 있어야 함
*/
#include <stdio.h>


int main()
{
	int point[] = { 10, 20, 30, 40, 450};
	int arrsize = sizeof(point);
	printf(" 배열 크기 : %d \n", arrsize);
	int arrleng = arrsize / sizeof(int);
	printf(" 원소 길이 : %d \n", arrleng);
	int sum = 0;
	for (int i = 0; i < arrleng; i++)
		sum += point[i];  // sum = sum + point[i]
	printf("메인에서 구한 값은 %d \n ", sum);
	printf("작성한 함수로 호출한 결과 %d\n", summary(point, arrleng));
}

int summary(int ary[], int size) 
{
	int sum = 0;
	printf("함수에서 배열 전체 크기: %d\n", (int)sizeof(ary));
	for (int i = 0; i < size; i++)
	{
		sum += ary[i];
	}
	return sum;
}