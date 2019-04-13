#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}


int count_one_bits(unsigned int x){
	int i = 0;
	while (x > 0){
		if ((x & 1) != 0)
			++i;
		x /= 2;
	}
	return i;
}

int main1(){
	int n = 0;
	scanf("%d", &n);
	int ret = count_one_bits(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}