#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；

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
							printf("a是%d\n""b是%d\n""c是%d\n""d是%d\n""e是%d\n",
							a, b, c, d, e);

					}
				}
			}
		}
	}
	system("pause");
	return 0;
}