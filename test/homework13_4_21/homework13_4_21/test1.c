#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int p[10] = { 0 };
	int d[10] = { 0 };
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < 10; i++){
		if (arr[i] % 2){
			p[j] = arr[i];
			j++;
			count++;
		}
		else{
			d[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < count; i++){
		printf("%d ", p[i]);
	}
	for (i = 0; i < 10; i++){
		printf("%d ", d[count - 1 + i]);
	}

	system("pause");
	return 0;
}