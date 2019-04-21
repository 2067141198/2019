#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//	student a am i
//	i ma a tneduts
//	i am a student

//这是一个将字符串内所有元素倒序排序的函数
void reserve_part(char *str, int start, int end){
	int i = 0;
	int j = 0;
	char tmp;
	for (i = start, j = end; i < j; i++, j--){
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

int main(){
	char src[] = "I am a student ";
	int i = 0;
	int start = 0; 
	int end;
	//运用数组遍历将字符串里的每个元素进行遍历判断。
	for (i = 0; src[i]; i++){
		//然后用if语句判断字符串里所有元素买哪些位置是空格，以此分离出这句话里的每个单词
		if (src[i] == ' '){
			end = i - 1;
			//调用已经编写好的换位程序现将每个单词都倒着排序
			reserve_part(src, start, end);
			start = i + 1;
		}
	}
	//用函数将最后一个单词倒着排序
	reserve_part(src, start, i - 1);
	//最后将整个字符串倒着排序
	reserve_part(src, 0, i - 1);
	puts(src);

	system("pause");
	return 0;
}


