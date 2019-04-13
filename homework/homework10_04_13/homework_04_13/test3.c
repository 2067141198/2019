#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//3. 输出一个整数的每一位。 

void print_ind(int x){
	if (x > 9)
		print_ind(x / 10);
	printf("%d ", x % 10);
}

int main3(){
	int num = 0;
	scanf("%d", &num);
	print_ind(num);
	system("pause");
	return 0;
}