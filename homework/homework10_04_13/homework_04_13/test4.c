#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//4.编程实现： 
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

int main4(){
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d%d", &m, &n);
	i = m ^ n;
	while (i > 0){
		if (i % 2 == 1)
			++count;
		i >>= 2;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}