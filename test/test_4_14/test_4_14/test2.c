#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//����ĸ����ַ���ȫ��������������ʽ�������ĸ�����ǰ��Сд�໥���������м��ܡ�
//���ܷ�����ÿ����ĸ���޸�Ϊ����ĸ���Ͼ���13��λ�ã�ǰ���ߺ󣩵���ĸ��ע���Сд��ĸ��Ӧ�ñ�ת����

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