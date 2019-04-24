#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

int findNum(int arr[][3], int x, int y, int num){
	int i = 0;
	int j = y - 1;

	while (i < 3 && j > 0){
		if (arr[i][j] > num){
			j--;
		}
		else if (arr[i][j] < num){
			i++;
		}
		else{
			return 1;
		}
	}
	return 0;
}

int main(){
	int arr[3][3] = { { 1, 3, 5 },
				      { 3, 5, 7 },
					  { 5, 7, 9 }};
	int ret = findNum(arr, 3, 3, 7);
	if (ret){
		printf("该矩阵里有该数字！\n");
	}
	else{
		printf("该矩阵里没有该数！\n");
	}

	system("pause");
	return 0;
}