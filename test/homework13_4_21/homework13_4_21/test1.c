#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//����һ
int main11(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//������������ֱ�洢������ż����Ԫ��
	int s[10] = { 0 };
	int d[10] = { 0 };
	int i = 0;
	int counts = 0;
	int countd = 0;
	for (i = 0; i < 10; i++){
		//ͨ��%2�ж�Ԫ�ص���ż��
		if (arr[i] % 2){
			s[counts++] = arr[i];
		}
		else{
			d[countd++] = arr[i];
		}
	}
	//�����������ż�������ٴ����ʼ�������ٴ�ӡ����
	for (i = 0; i < counts; i++){
		arr[i] = s[i];
	}
	for (i = 0; i < countd; i++){
		arr[i + counts] = d[i];
	}
	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;
}

//������
int main121(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int j = 9;
	int tmp = 0;
	while (1){
		//Ҫ��ż�����Ե�arr[i]Ϊ����ʱ��i++
		while (arr[i] % 2){
			i++;
		}
		////Ҫ���������Ե�arr[j]Ϊż��ʱ��j--
		while(arr[j] % 2 == 0){
			j--;
		}
		if (i > j){
			break;
		}
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	system("pause");
	return 0;
}

//������->�Ż�1
int main122(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int j = 9;
	int tmp = 0;
	while (1){
		//�Ż��󣬵���һλ����ż��ʱ��i��Ȼ���������Ż�ǰ������
		while (arr[i++] % 2);
		//�Ż��󣬵���һλ��������ʱ��j��Ȼ���Լ����Ż�ǰ������
		while (arr[j--] % 2 == 0);
		if (i - 1 > j + 1){
			break;
		}
		tmp = arr[i - 1];
		arr[i - 1] = arr[j + 1];
		arr[j + 1] = tmp;
	}
	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}

//������->�Ż�2
int main123(){
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int j = 9;
	int tmp = 0;
	//while����һ����ִ�У����Կ�ʼ��i��j�ͷֱ�����1��8
	while (arr[i++] % 2 && i < 10);//�ڶ���������ֹarr[]Ϊȫ�����������Խ��
	while (arr[j--] % 2 == 0 && j > 0);//�ڶ���������ֹarr[]Ϊȫż���������Խ��
	while (i - 1 < j + 1){
		tmp = arr[i - 1];
		arr[i - 1] = arr[j + 1];
		arr[j + 1] = tmp;
		while (arr[i++] % 2);
		while (arr[j--] % 2 == 0);
	}
	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}