#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



//����һ�� ���������λ����
void print(int x){
	char arr[34] = { 0 };
	int i = 0;
	//��λѭ��ȡ����λ�ϵ���˳���Ƿ��ģ�����Ҫô������ȥ���Ŵ�ӡ��Ҫôֱ�ӵ��Ŵ�����ֱ�Ӵ�ӡ
	for (i = 31; i >= 0; i--, x /= 2){
		arr[i] = x % 2 + '0';
	}
	puts(arr);
	//��ӡ����λ
	for (i = 0; arr[i]; i += 2){
		putchar(arr[i]);
	}
	printf("\n");
	//��ӡż��λ
	for (i = 1; arr[i]; i += 2){
		putchar(arr[i]);
	}
}

//�������� ��λ����
void print2(int x){
	//����λ����ʱ�ͽ�����λ��ż��λ��ֵ������������Ȼ���ٴ�ӡ
	char arr[34] = { 0 };
	int i = 0;
	int tmp = x / 2;
	//��ӡż��λ
	for (i = 31; i >= 0; i -= 2, x /= 4){
		arr[i / 2] = x % 2 + '0';
	}
	puts(arr);
	//��ӡ����λ
	for (i = 30; i >= 1; i -= 2, tmp /= 4){
		arr[i / 2] = tmp % 2 + '0';
	}
	puts(arr);
}

//�������� λ����
void print3(int x){
	char arr[34] = { 0 };
	int i = 0;
	//��ӡ����λ
	for (i = 31; i >= 0; i -= 2){
		putchar((x >> i & 1) + '0');
	}
	printf("\n");
	//��ӡż��λ
	for (i = 30; i >= 0; i -= 2){
		putchar((x >> i & 1) + '0');
	}
}

int main(){
	int num = 0;
	scanf("%d", &num);
	print(num);
	printf("\n");
	print2(num);
	printf("\n");
	print3(num);
	system("pause");
	return 0;
}