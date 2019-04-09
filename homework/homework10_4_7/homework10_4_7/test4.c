#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//A说：不是我。 
//B说：是C。 
//C说：是D。 
//D说：C在胡说 
int main4(){
	char murder[4] = { 'a', 'b', 'c', 'd'};
	char killer;
	for (int i = 0; i < sizeof(murder) / sizeof(murder[0]) - 1; i++){
		killer = murder[i];
		if ((murder[0] != killer) + (murder[2] == killer)
			+ (murder[3] == killer) + (murder[3] != killer) == 3){
			printf("凶手是%c\n", killer);
		}
	}
	system("pause");
	return 0;
}