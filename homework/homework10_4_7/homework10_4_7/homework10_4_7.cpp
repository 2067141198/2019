#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void Print(int n){
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < n - i; j++){
			putchar(' ');
		}
		for (int j = 1; j <= i / 2; j++){
			printf("%d ", 2 ^ j - 1);
		}
		for (int j = i / 2; j > 0; j--){
			printf("%d ", 2 ^ j - 1);
		}
		printf("\n");
	}
}
int main(){
	int num = 0;
	scanf("%d", &num);
	Print(num);
	system("pause");
	return 0;
}