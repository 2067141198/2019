#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}

// ����һ
int count_one_bits(unsigned int value){
	int i = 0;
	while (value > 0){
		if ((value & 1) != 0)
			++i;
		value /= 2;
	}
	return i;
}

//������
int count_one_bits2(unsigned int value){
	int count = 0;
	for (int i = value; i; i /= 2){
		if (i % 2 == 1)
			count++;
	}
	return count;
}

//������
int count_one_bits3(unsigned int value){
	int count = 0;
	do{
		count++;
	} while (value &= value - 1);//value &= value - 1 ���Խ������Ķ����������е������Ǹ�1���.����count��ֵ�൱������˼���1.
	return count;
}

int main1(){
	int n = 0;
	scanf("%d", &n);
	int ret = count_one_bits(n);
	int ret2 = count_one_bits2(n);
	int ret3 = count_one_bits3(n);
	printf("%d\n", ret);
	printf("%d\n", ret2);
	printf("%d\n", ret3);
	system("pause");
	return 0;
}