#define _CRT_SECURE_NO_WARNINGS 1

//在屏幕上输出以下图案：
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
	//n表示星星最多的那行是第几行
	int i = 0, j = 0, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= n - i; j++)//找到每行空格数和行数的关系
		{
			putchar(' ');
		}
		for (j = 0; j < 2 * i - 1; j++)//找到每行打印的星星数和行数之间的关系
		{
			putchar('*');
		}
		printf("\n");//打印完每行后换行
	}
	//把上面的星星塔倒过来就是下面的
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