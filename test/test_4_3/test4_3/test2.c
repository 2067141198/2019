#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//得出最大公因数
int gcd(int m, int n)
{
	if (m <= 0 || n <= 0)
		return 0;
	if (m % n == 0)
		return n;
	if (m % n > 0)
		return gcd(n , m % n);
}
int main2()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int ret = gcd(m, n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}