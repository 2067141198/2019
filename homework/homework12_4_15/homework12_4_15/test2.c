#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��

int main2(){
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	c = b + (a - b) / 2;
	printf("%d", c);
	system("pause");
	return 0;
}