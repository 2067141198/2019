#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//子数整数；
//对于一个五位数a1a2a3a4a5 可将其拆分为三个子数：sub1=a1a2a3, sub2=a2a3a4, sub3=a3a4a5
//现在给定一个正整数K，要求你编程求出10000到30000之间所有满足下述条件的五位数，条件是这些五位数的三个子数sub1, sub2, sub3都可被K整除。
int main1(){
	int k = 0;
	scanf("%d", &k);
	int i = 0;
	int sub1 = 0;
	int sub2 = 0;
	int sub3 = 0;
	for (i = 10000; i <= 30000; i++){
		sub1 = i / 100;
		sub2 = (i / 10) % 1000;
		sub3 = i % 1000;
		if ((sub1 % k == 0) && (sub2 % k == 0) && (sub3 % k == 0)){
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}