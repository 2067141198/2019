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

// 方法一
int count_one_bits(unsigned int value){
	int i = 0;
	while (value > 0){
		if ((value & 1) != 0)
			++i;
		value /= 2;
	}
	return i;
}

//方法二
int count_one_bits2(unsigned int value){
	int count = 0;
	for (int i = value; i; i /= 2){
		if (i % 2 == 1)
			count++;
	}
	return count;
}

//方法三
int count_one_bits3(unsigned int value){
	int count = 0;
	do{
		count++;
	} while (value &= value - 1);//value &= value - 1 可以将该数的二进制序列中的最后的那个1与掉.所以count的值相当于与掉了几个1.
	return count;
}

int main1(){
	int n = 0;
	scanf("%d", &n);
	int ret = count_one_bits(n);
	int ret2 = count_one_bits2(n);
	int ret3 = count_one_bits3(n);
	printf("%d\n", ret);
	printf("%d\n", ret2);
	printf("%d\n", ret3);
	system("pause");
	return 0;
}