#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
while문 do while 문 for문 부터
조건이 참이면 계속 실행 (무한 루프 주의) ctrl c ? 인터럽트 종료 

for 대체로 횟수가 정해져 있는 경우.
while 참이면 계속 거짓이면 정지
do while 한번은 실행시키고 조건 판단

for문은 이중 for문, while-for문 등 혼합해서 많이 쓰임.


for( 초깃값 init ; 조건식 cond ; 증감식 inc)         초깃값과 증감은 생략가능하지만 ; 세미클론은 써줘야함.
 {      1        2       4
  
  반복 몸체       2,3,4 순서를 계속 반복
  반복할 문장들;
       3
 }


{
    printf("노가다 for 문입니다.\n");
    printf("노가다 for 문입니다.\n");
    printf("노가다 for 문입니다.\n");
    printf("노가다 for 문입니다.\n");
    printf("노가다 for 문입니다.\n");

    // 코드의 간결함(효율성)이 떨어짐.
    // i index의 약자 ijk
    /*int i;

    for (i = 1; i <= 5; i++){
        printf("반복문 for 문입니다.\n");
    }
    printf(" 종료했을 때의 i는 %d입니다.\n", i); // 결과는 6이다. 시험(총 횟수, 몇 번 인지)
    int j; 

    for (j = 100; j > 0; j--) {
        printf("j의 숫자는 %d 이다.\n", j);
    }

    int k;
    
    for (k = 1; k < 4; k++)
    {
        printf("k의 숫자는 %d이다.", k);
        printf("연습입니다.\n");

    }
    
    printf("\n\n");

    for (k = 1; k < 4; k++)
        printf("k의 숫자는 %d이다.", k);
        printf("연습입니다.\n");

    int init = 0;
    int end = 0;
    int sums = 0;
    int incr = 0;
    printf("시작값을 입력하세요 >> \n");
    scanf("%d", &init);
    printf("끝 값을 입력하세요 >> \n");
    scanf("%d", &end);
    printf("증가값을 입력하세요. >> \n");
    scanf("%d", &incr);
    for (init; init <= end; init= init +incr) // for (i = num 1; i <= num2; i += num3) 이렇게 써야 시작값이 제대로 됨.
    {
        sums = init + sums;

    }
    printf("시작값 %d에서 %d만큼 끝 값 %d까지를 합한 결과 값: %d", init, end, incr, sums);
    바깥 for문(총 3회 반복)
    {
        안쪽 for문
    
    
    
    
    // 구구단 (중첩 for문) 아래는 하나의 단만 출력
    
    int i;
    int dan;

    printf("몇 단을 출력하고 싶나요? >> ");
    scanf("%d", &dan);

    for (i = 1; i <= dan; i++)
    {
        printf(" %d X %d = %d \n", dan, i, dan * i);
    }
    */
int main()
{
    const int MAX = 5;
    int i, j;
    for (i = 1; i <= MAX; i++)
    {
        for (j = 5; j >= i; j--)
            printf("*");
        printf("\n");
    }for(i=2; i<=9; i++)
        printf(" # %d 단 #", i);

    printf("\n\n");
    int k;
    for (i = 1; i <= 9; i++)
    {
        for (k = 2; k <= 9; k++)
        {
            printf("%-.2d X %2d = %-.2d ", k, i, k * i);
        }
        puts(" "); 
    }
    int a, b;
    int p = 0; // 초기값 생략
    for (;;)
    {
        
        // 증감 생략
        printf(" 더할 두 수 입력( 멈출땐 Ctrl + C): ");
        scanf("%d %d", &a, &b);

        printf("%d + %d = %d \n", a, b, a + b);
    }
    return 0;
}