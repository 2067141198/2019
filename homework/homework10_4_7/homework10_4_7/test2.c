#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��

int Duplicate(int A, int B, int C, int D, int E){
	int i = 0;
	i |= 1 << A % 10;
	i |= 1 << B % 10;
	i |= 1 << C % 10;
	i |= 1 << D % 10;
	i |= 1 << E % 10;
	return i == 0x3e;
}

int main2(){
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++){
		for (b = 1; b <= 5; b++){
			for (c = 1; c <= 5; c++){
				for (d = 1; d <= 5; d++){
					for (e = 1; e <= 5; e++){
						if ((b == 2) + (a == 3) == 1
							&& (b == 2) + (e == 4) == 1
							&& (c == 1) + (d == 2) == 1
							&& (c == 5) + (d == 3) == 1
							&& (e == 4) + (a == 1) == 1
							&& Duplicate(a, b, c, d, e))
							printf("a��%d\n""b��%d\n""c��%d\n""d��%d\n""e��%d\n",
							a, b, c, d, e);

					}
				}
			}
		}
	}
	system("pause");
	return 0;
}