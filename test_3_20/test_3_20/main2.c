#define _CRT_SECURE_NO_WARNINGS 1

//��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��

#include<stdio.h>
#include<stdlib.h>


int main2 ()
{
	int i = 0, tmp = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i / 10 == 9)
		{
			tmp ++;
		}
		if (i % 10 == 9)
		{
			tmp ++;
		}
	}
	printf ("%d\n", tmp);
	system ("pause");
	return 0;
}

