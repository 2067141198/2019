#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

int main3(){
	int arr[9] = { 2, 5, 7, 4, 4, 5, 7, 2, 9 };
	int tmp = 0;
	for (int i = 0; i < 9; i++){
		tmp = tmp ^ arr[i];
	}
	printf("%d", tmp);
	system("pause");
	return 0;
}