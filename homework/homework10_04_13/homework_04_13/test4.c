#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//4.���ʵ�֣� 
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

int main4(){
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d%d", &m, &n);
	i = m ^ n;
	while (i > 0){
		if (i % 2 == 1)
			++count;
		i >>= 2;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}