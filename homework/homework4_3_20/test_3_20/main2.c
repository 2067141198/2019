#define _CRT_SECURE_NO_WARNINGS 1

//编写程序数一下 1到 100 的所有整数中出现多少次数字9。

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

