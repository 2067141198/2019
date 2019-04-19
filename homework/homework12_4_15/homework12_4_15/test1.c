#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//����һ�� λ����
unsigned int reverse_bit(unsigned int value){
	unsigned int answer = 0;
	unsigned int i = 0;
	for (i = 1; i != 0; i <<= 1){
		answer <<= 1;
		if (value & 1)
			answer |= 1;
		value >>= 1;
	}
	return answer;
}

//�������� ��λ����+������˼·
unsigned int reverse_bit2(unsigned int value){
	unsigned int i = 0;
	unsigned int tmp = 0;
	unsigned int sum = 0;
	//ѭ�������ǹ̶��ģ�������ѭ������32�ι̶�������ѭ��
	for (i = 0; i < 32; i++, value /= 2){
		//��������˼·����ÿһλȥ�������ٵ���˼����������Ƿ�����������
		tmp = value % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}

int main(){
	unsigned int num = 0;
	scanf("%d", &num);
	unsigned int ret = reverse_bit(num);
	printf("%u\n", ret);
	unsigned int ret2 = reverse_bit2(num);
	printf("%u\n", ret2);
	system("pause");
	return 0;
}