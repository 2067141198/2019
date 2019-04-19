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

//void print_ind2(int x){
//	char arr[6] = { 0 };
//	for (int i = 0; i < 6 ;i++, x /= 10){
//		arr[i] = x % 10 + '0';
//		putchar(arr[i]);
//		putchar(' ');
//	}
//}

int main(){
	int num = 0;
	scanf("%d", &num);
	print_ind(num);
	printf("\n");
	//print_ind2(num);
	system("pause");
	return 0;
}