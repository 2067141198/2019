#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

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

int main(){
	unsigned int num = 0;
	scanf("%d", &num);
	unsigned int ret = reverse_bit(num);
	printf("%u\n", ret);
	system("pause");
	return 0;
}