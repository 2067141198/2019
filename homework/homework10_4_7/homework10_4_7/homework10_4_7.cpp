#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void Print(int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i; j++){
			putchar(' ');
		}
		printf("*");
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