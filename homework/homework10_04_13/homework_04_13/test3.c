#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//3. 输出一个整数的每一位。 

//方法一
void print_ind(int x){
	if (x > 9)
		print_ind(x / 10);
	printf("%d ", x % 10);
}

void print_ind2(int x){
	for (int i = x; i; i /= 10){
		int count = i % 10;
		printf("%d ", count);
	}
	putchar('\n');
}

int main3(){
	int num = 0;
	scanf("%d", &num);
	print_ind(num);
	printf("\n");
	print_ind2(num);
	system("pause");
	return 0;
}