#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[10] = { 0 };
	int tmp[10] = { 0 };
	long n = 0;
	int count = 1;
	for (int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++){
		tmp[i] = arr[i] % 42;
	}
	for (int i = 0; i < 10; i++){
		n |= 1 << arr[i] % 42;
		while (n / 10  % 2 == 1)
		++count;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}