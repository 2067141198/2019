#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//A˵�������ҡ� 
//B˵����C�� 
//C˵����D�� 
//D˵��C�ں�˵ 
int main4(){
	char murder[4] = { 'a', 'b', 'c', 'd'};
	char killer;
	for (int i = 0; i < sizeof(murder) / sizeof(murder[0]) - 1; i++){
		killer = murder[i];
		if ((murder[0] != killer) + (murder[2] == killer)
			+ (murder[3] == killer) + (murder[3] != killer) == 3){
			printf("������%c\n", killer);
		}
	}
	system("pause");
	return 0;
}