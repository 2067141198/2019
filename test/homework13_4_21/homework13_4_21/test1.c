#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//方法一
int main11(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//定义两个数组分别存储奇数和偶数的元素
	int s[10] = { 0 };
	int d[10] = { 0 };
	int i = 0;
	int counts = 0;
	int countd = 0;
	for (i = 0; i < 10; i++){
		//通过%2判断元素的奇偶性
		if (arr[i] % 2){
			s[counts++] = arr[i];
		}
		else{
			d[countd++] = arr[i];
		}
	}
	//把奇数数组和偶数数组再存入初始的数组再打印出来
	for (i = 0; i < counts; i++){
		arr[i] = s[i];
	}
	for (i = 0; i < countd; i++){
		arr[i + counts] = d[i];
	}
	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;
}

//方法二
int main121(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int j = 9;
	int tmp = 0;
	while (1){
		//要找偶数所以当arr[i]为奇数时，i++
		while (arr[i] % 2){
			i++;
		}
		////要找奇数所以当arr[j]为偶数时，j--
		while(arr[j] % 2 == 0){
			j--;
		}
		if (i > j){
			break;
		}
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	system("pause");
	return 0;
}

//方法二->优化1
int main122(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int j = 9;
	int tmp = 0;
	while (1){
		//优化后，当第一位就是偶数时，i依然会自增；优化前并不会
		while (arr[i++] % 2);
		//优化后，当第一位就是奇数时，j依然会自减；优化前并不会
		while (arr[j--] % 2 == 0);
		if (i - 1 > j + 1){
			break;
		}
		tmp = arr[i - 1];
		arr[i - 1] = arr[j + 1];
		arr[j + 1] = tmp;
	}
	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}

//方法二->优化2
int main123(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int j = 9;
	int tmp = 0;
	//while条件一定会执行，所以开始后i和j就分别变成了1和8
	while (arr[i++] % 2 && i < 10);//第二个条件防止arr[]为全奇数组而导致越界
	while (arr[j--] % 2 == 0 && j > 0);//第二个条件防止arr[]为全偶数组而导致越界
	while (i - 1 < j + 1){
		tmp = arr[i - 1];
		arr[i - 1] = arr[j + 1];
		arr[j + 1] = tmp;
		while (arr[i++] % 2);
		while (arr[j--] % 2 == 0);
	}
	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}