#define _CRT_SECURE_NO_WARNINGS 1




int main(){
	int S1, S2, S3;
	int sum[1000] = { 0 };
	int count[1000] = { 0 };
	scanf("%d%d%d", &S1, &S2, &S3);
	int num = S1 + S2 + S3;
	
	for (int i = 0; i < 1000; i++){
		for (int a = 0; a < S1; a++){
			for (int b = 0; b < S2; b++){
				for (int c = 0; c < S3; c++){
					sum[i] = a + b + c;
				}
			}
		}
	}
	for (int i = 0; i < 1000; i++){
		for (int j = 0; j < num; j++){
			for (int k = 0; k < num; k++){
				count[i] += (sum[j] == sum[k]);
			}
		}
	}

	return 0;
}