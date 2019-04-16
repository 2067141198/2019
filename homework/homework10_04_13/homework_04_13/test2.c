#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//спнС

void print(int x){
	int arr[34] = { 0 };
	for (int i = 0; i < 31; i++, x /= 2){
		arr[i] = x % 2;
	}
	putchar(arr[34]);
}



int main(){
	int num = 0;
	scanf("%d", &num);
	print(num);
	printf("\n");
	system("pause");
	return 0;
}