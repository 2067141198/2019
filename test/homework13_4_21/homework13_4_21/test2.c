#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

int findNum(int arr[][3], int x, int y, int num){
	int i = 0;
	int j = y - 1;

	while (i < 3 && j > 0){
		if (arr[i][j] > num){
			j--;
		}
		else if (arr[i][j] < num){
			i++;
		}
		else{
			return 1;
		}
	}
	return 0;
}

int main(){
	int arr[3][3] = { { 1, 3, 5 },
				      { 3, 5, 7 },
					  { 5, 7, 9 }};
	int ret = findNum(arr, 3, 3, 7);
	if (ret){
		printf("�þ������и����֣�\n");
	}
	else{
		printf("�þ�����û�и�����\n");
	}

	system("pause");
	return 0;
}