#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void Print(int n){
	int arr[20][20] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++){
		for (j = 0; j < n - i; j++){
			putchar(' ');
		}
		for (j = 1; j <= i; j++){
			arr[0][0] = 1;
			arr[1][1] = 1;
			arr[2][1] = 1;
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			printf("%2d",arr[i][j]);
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