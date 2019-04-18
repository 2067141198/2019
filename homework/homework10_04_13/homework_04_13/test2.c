#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



//方法一： 最基础的数位遍历
void print(int x){
	char arr[34] = { 0 };
	int i = 0;
	//数位循环取出来位上的数顺序是反的，所以要么正常出去倒着打印，要么直接倒着存起来直接打印
	for (i = 31; i >= 0; i--, x /= 2){
		arr[i] = x % 2 + '0';
	}
	puts(arr);
	//打印奇数位
	for (i = 0; arr[i]; i += 2){
		putchar(arr[i]);
	}
	printf("\n");
	//打印偶数位
	for (i = 1; arr[i]; i += 2){
		putchar(arr[i]);
	}
}

//方法二： 数位遍历
void print2(int x){
	//在数位遍历时就将奇数位和偶数位的值存入两个数组然后再打印
	char arr[34] = { 0 };
	int i = 0;
	int tmp = x / 2;
	//打印偶数位
	for (i = 31; i >= 0; i -= 2, x /= 4){
		arr[i / 2] = x % 2 + '0';
	}
	puts(arr);
	//打印奇数位
	for (i = 30; i >= 1; i -= 2, tmp /= 4){
		arr[i / 2] = tmp % 2 + '0';
	}
	puts(arr);
}

//方法三： 位运算
void print3(int x){
	char arr[34] = { 0 };
	int i = 0;
	//打印奇数位
	for (i = 31; i >= 0; i -= 2){
		putchar((x >> i & 1) + '0');
	}
	printf("\n");
	//打印偶数位
	for (i = 30; i >= 0; i -= 2){
		putchar((x >> i & 1) + '0');
	}
}

int main(){
	int num = 0;
	scanf("%d", &num);
	print(num);
	printf("\n");
	print2(num);
	printf("\n");
	print3(num);
	system("pause");
	return 0;
}