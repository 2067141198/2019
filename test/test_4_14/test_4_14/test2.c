#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//出字母外的字符完全按照它的输入形式输出，字母在输出前大小写相互交换并进行加密。
//加密方法：每个字母被修改为再字母表上距其13个位置（前或者后）的字母。注意大小写字母都应该被转换。

int main(){
	int ch = getchar();
	if (ch >= 'A' && ch <= 'Z'){
		ch += 'a' - 'A';
		if (ch - 'a' < 13){
			ch += 13;
		}
		else if ('z' - ch < 13){
			ch -= 13;
		}
		putchar(ch);
	}
	else if (ch >= 'a' && ch <= 'z'){
		ch -= 'a' - 'A';
		if (ch - 'A' < 13){
			ch += 13;
		}
		else if ('Z' - ch < 13){
			ch -= 13;
		}
		putchar(ch);
	}
	else{
		putchar(ch);
	}
	system("pause");
	return 0;
}