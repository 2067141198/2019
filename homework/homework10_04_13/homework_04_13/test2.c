#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//ÓÐÎó

void print(int x){
	if (x > 1)
		print(x / 2);
	printf("%d", x % 2);
}

int print_odd(int x){
	int i = 0;
	while (x > 0){
		i |= 1 << x % 2;
		x >>= 2;
	}
	return i;
}

int print_even(int x){
	int j = 0;
	x >>= 1;
	while (x > 0){
		j |= 1 << x % 2;
		x >>= 2;
	}
	return j;
}

int main(){
	int num = 0;
	scanf("%d", &num);
	print(num);
	printf("\n");
	int odd = print_odd(num);
	int even = print_even(num);
	print(odd);
	printf("\n");
	print(even);
	system("pause");
	return 0;
}