#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//	student a am i
//	i ma a tneduts
//	i am a student

//����һ�����ַ���������Ԫ�ص�������ĺ���
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
	//��������������ַ������ÿ��Ԫ�ؽ��б����жϡ�
	for (i = 0; src[i]; i++){
		//Ȼ����if����ж��ַ���������Ԫ������Щλ���ǿո��Դ˷������仰���ÿ������
		if (src[i] == ' '){
			end = i - 1;
			//�����Ѿ���д�õĻ�λ�����ֽ�ÿ�����ʶ���������
			reserve_part(src, start, end);
			start = i + 1;
		}
	}
	//�ú��������һ�����ʵ�������
	reserve_part(src, start, i - 1);
	//��������ַ�����������
	reserve_part(src, 0, i - 1);
	puts(src);

	system("pause");
	return 0;
}


