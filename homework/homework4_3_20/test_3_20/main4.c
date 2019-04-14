#define _CRT_SECURE_NO_WARNINGS 1

//求出0～n之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。

/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main4()
{
	int i, j;
	int n, tmp[10] = { 0 }, count = 0, sum = 0;
	scanf("%d", &n);//输入n表示打印n以内的水仙花数
	for (i = 0; i < n; i++)
	{
		for (j = i; j ; j /= 10)//数位遍历
		{
			tmp[count] = j % 10;//取出一个数每个位置的数字放在一个数组里
			count ++;//记录循环了几次，即是几位数
		}
		for (j = 0; j < count; j++)
		{
			sum += pow(tmp[j], count);//pow是数学函数里求次方的函数，使用迭代算出各个位的次方和
		}
		if (sum == i)
			printf("%d\n", i);
		count = 0;//count和sum是频繁使用的变量，所以每次循环结束都要初始化
		sum = 0;
	}
	
	system("pause");
	return 0;
}