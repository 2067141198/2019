#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//禽兽患传染病了。一个禽兽会每轮传染x个禽兽。试问n轮传染后有多少禽兽被传染？
int main(){
	int x = 0;
	int n = 0;
	int tmp = 0;
	int sum = 1;
	scanf("%d %d", &x, &n);
	for (int i = 0; i < n; i++){
		tmp = sum + sum * 10;
		sum = tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}