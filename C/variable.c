#include <stdio.h>
/*
int a = 100; //�������� 
void func1()
{
	int a = 200; // �������� ����(scope)�� �ٸ���.
	printf("����� ���� �Լ����� a��: %d\n", a);
}
int main()
{
	func1();
	printf("���� �Լ����� a��: %d\n", a);
	return 0;
}
*/
void sub(int param)
{
	auto int local = 100; // auto�� ���� �ǰ� �־���.
	printf("\t %d %d\n", param, local); // \t �鿩���� 

}

int main(void)
{
	auto int n = 10; // ��������
	printf("%d\n", n);
	for (int m = 0, sum = 0; m < 3; m++)
	{
		sum += m;
		printf("\t%d %d\n", m, sum);
	}
	printf("%d\n", n);
	sub(20);

	return 0;
}