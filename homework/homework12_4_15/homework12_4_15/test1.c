#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//方法一： 位运算
unsigned int reverse_bit(unsigned int value){
	unsigned int answer = 0;
	unsigned int i = 0;
	for (i = 1; i != 0; i <<= 1){
		answer <<= 1;
		if (value & 1)
			answer |= 1;
		value >>= 1;
	}
	return answer;
}

//方法二： 数位遍历+回文数思路
unsigned int reverse_bit2(unsigned int value){
	unsigned int i = 0;
	unsigned int tmp = 0;
	unsigned int sum = 0;
	//循环次数是固定的，用数字循环进行32次固定次数的循环
	for (i = 0; i < 32; i++, value /= 2){
		//回文数的思路，将每一位去出来后再倒序乘加起来，就是反过来的数字
		tmp = value % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}

int main(){
	unsigned int num = 0;
	scanf("%d", &num);
	unsigned int ret = reverse_bit(num);
	printf("%u\n", ret);
	unsigned int ret2 = reverse_bit2(num);
	printf("%u\n", ret2);
	system("pause");
	return 0;
}