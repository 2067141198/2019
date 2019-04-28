#define _CRT_SECURE_NO_WARNINGS 1


int main(){
	double num = 0;
	double pay = 0;
	scanf("%d", &num);
	if (num <= 150){
		pay = num * 0.4463;
	}
	else if(150 < num <= 400){
		pay = 160 * 0.4463 + (num - 150) * 0.4663;
	}
	else if (num > 400){
		pay = 160 * 0.4463 + (400 - 150) * 0.4663 + (num - 400) * 0.5663;
	}
	printf("%1f\n", pay);
	system("pause");
	return 0;
}