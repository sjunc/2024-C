#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
while�� do while �� for�� ����
������ ���̸� ��� ���� (���� ���� ����) ctrl c ? ���ͷ�Ʈ ���� 

for ��ü�� Ƚ���� ������ �ִ� ���.
while ���̸� ��� �����̸� ����
do while �ѹ��� �����Ű�� ���� �Ǵ�

for���� ���� for��, while-for�� �� ȥ���ؼ� ���� ����.


for( �ʱ갪 init ; ���ǽ� cond ; ������ inc)         �ʱ갪�� ������ �������������� ; ����Ŭ���� �������.
 {      1        2       4
  
  �ݺ� ��ü       2,3,4 ������ ��� �ݺ�
  �ݺ��� �����;
       3
 }


{
    printf("�밡�� for ���Դϴ�.\n");
    printf("�밡�� for ���Դϴ�.\n");
    printf("�밡�� for ���Դϴ�.\n");
    printf("�밡�� for ���Դϴ�.\n");
    printf("�밡�� for ���Դϴ�.\n");

    // �ڵ��� ������(ȿ����)�� ������.
    // i index�� ���� ijk
    /*int i;

    for (i = 1; i <= 5; i++){
        printf("�ݺ��� for ���Դϴ�.\n");
    }
    printf(" �������� ���� i�� %d�Դϴ�.\n", i); // ����� 6�̴�. ����(�� Ƚ��, �� �� ����)
    int j; 

    for (j = 100; j > 0; j--) {
        printf("j�� ���ڴ� %d �̴�.\n", j);
    }

    int k;
    
    for (k = 1; k < 4; k++)
    {
        printf("k�� ���ڴ� %d�̴�.", k);
        printf("�����Դϴ�.\n");

    }
    
    printf("\n\n");

    for (k = 1; k < 4; k++)
        printf("k�� ���ڴ� %d�̴�.", k);
        printf("�����Դϴ�.\n");

    int init = 0;
    int end = 0;
    int sums = 0;
    int incr = 0;
    printf("���۰��� �Է��ϼ��� >> \n");
    scanf("%d", &init);
    printf("�� ���� �Է��ϼ��� >> \n");
    scanf("%d", &end);
    printf("�������� �Է��ϼ���. >> \n");
    scanf("%d", &incr);
    for (init; init <= end; init= init +incr) // for (i = num 1; i <= num2; i += num3) �̷��� ��� ���۰��� ����� ��.
    {
        sums = init + sums;

    }
    printf("���۰� %d���� %d��ŭ �� �� %d������ ���� ��� ��: %d", init, end, incr, sums);
    �ٱ� for��(�� 3ȸ �ݺ�)
    {
        ���� for��
    
    
    
    
    // ������ (��ø for��) �Ʒ��� �ϳ��� �ܸ� ���
    
    int i;
    int dan;

    printf("�� ���� ����ϰ� �ͳ���? >> ");
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
        printf(" # %d �� #", i);

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
    int p = 0; // �ʱⰪ ����
    for (;;)
    {
        
        // ���� ����
        printf(" ���� �� �� �Է�( ���ⶩ Ctrl + C): ");
        scanf("%d %d", &a, &b);

        printf("%d + %d = %d \n", a, b, a + b);
    }
    return 0;
}