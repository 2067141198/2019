#define _CRT_SECURE_NO_WARNINGS 1

//����Ļ���������ͼ����
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *


#include<stdio.h>
#include<stdlib.h>


int main3()
{
	//n��ʾ�������������ǵڼ���
	int i = 0, j = 0, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= n - i; j++)//�ҵ�ÿ�пո����������Ĺ�ϵ
		{
			putchar(' ');
		}
		for (j = 0; j < 2 * i - 1; j++)//�ҵ�ÿ�д�ӡ��������������֮��Ĺ�ϵ
		{
			putchar('*');
		}
		printf("\n");//��ӡ��ÿ�к���
	}
	//����������������������������
	for (i = n - 1; i >= 0; i--)
	{
		for (j = 0; j <= n - i; j++)
		{
			putchar(' ');
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			putchar('*');
		}
		printf("\n");
	}
	system("pause");
	return 0;
}