#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{//
	//int a;
	//printf("������ �Է��ϼ���: \n");
	//scanf("%d", &a);
	//
	//
	//if (a%2 == 0) //¦Ȧ 
	//{
	//	printf("¦���Դϴ�.\n");  //c�� �鿩�����ص� 2��° ������� �ȿ� ���Ѵٰ� �ν��� ����. {}�ȿ� �־������
	//}
	//else			// ; �� ����
	//{
	//	printf("Ȧ���Դϴ�.\n");
	//} // �̸� ������ �����ϰ� ������ �ڵ尡 �������ʴ´�.
	//printf("ó���� �����մϴ�.\n");
	
	int a;
	printf("���̸� �Է��ϼ���");
	scanf("%d", &a);
	if (a >= 20 && a <= 39)
	{
		printf("û���Դϴ�.\n");
	}
	else if (a >= 40 && a <= 59)
	{
		printf("������Դϴ�.\n");
	}
	else
		printf("ó���� �����մϴ�.\n");


	printf("ó���� �����մϴ�.");
	return 0;
}

/*
 
 */