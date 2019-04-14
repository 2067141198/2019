#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//将大写字母转化为小写字母，其余的输出与输入一样

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