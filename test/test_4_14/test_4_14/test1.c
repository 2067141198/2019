#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//����д��ĸת��ΪСд��ĸ����������������һ��

int main1(){
	int ch = getchar();
	while (ch != EOF){
		if (ch <= 'Z' && ch >= 'A'){
			ch += 'a' - 'A';
			putchar(ch);
		}
		else{
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}