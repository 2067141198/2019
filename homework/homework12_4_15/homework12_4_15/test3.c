#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

int main3(){
	int arr[9] = { 2, 5, 7, 4, 4, 5, 7, 2, 9 };
	int tmp = 0;
	for (int i = 0; i < 9; i++){
		tmp = tmp ^ arr[i];
	}
	printf("%d", tmp);
	system("pause");
	return 0;
}