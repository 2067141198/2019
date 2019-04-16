#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//ÓÐÎó

void print(int x){
	int arr[34] = { 0 };
	int i = 0;
	for (i = 31; i >= 0; i--, x /= 2){
		arr[i] = x % 2;
	}
	printf("%d",arr[i]);
}



int main2(){
	int num = 0;
	scanf("%d", &num);
	print(num);
	printf("\n");
	system("pause");
	return 0;
}