#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//不使用（a+b）/2这种方式，求两个数的平均值。

int main2(){
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	c = b + (a - b) / 2;
	printf("%d", c);
	system("pause");
	return 0;
}