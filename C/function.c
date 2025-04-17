/*

9장 함수 
중복성 최소화, 모두가 쓸 수 있게 모듈화(재활용, 재사용), 효율성, 

함수는 일반적으로 main안에 함수를 적고
아래에 함수 정의 하고
위에 일반형을 작성함

recursive function 재귀 함수 = 내가 나를 계속 부른다. 순환
반복문보다 시간이 좀 더 걸림.

5! = 5 X 4 X 3 X 2 X 1
3! = 3 X 2 X 1

n! = n X (n-1) X (n-2) ....... X 1

int factorial(int num)
{
	if(num<=1)
		return 1;
	else
		return (num * factorial(num-1));
}

난수 

매번 다른 난수 시드(seed) 사용

0~32767
<stdlib.h>
시간
<time.h> 

10장 변수

전역, 지역 변수 

변수
1. 유효 범위 lifetime


1차 register
2차	sram, dram
3차	클라우드
지역변역 이름 같을 수 있음. 

전역
main 밖, main 안 global로 
extern 파일 밖 다른 파일에서 가져다 쓰기
static int  함수명, 전역변수인데 


지역
(auto) int 함수명 여태까지 자동으로 생략하고 있었음.
*/