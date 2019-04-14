#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include < stdlib.h>

//厄米多项式的递归写法
int hermite(int N, int X)
{
	if (N <= 0)
		return 1;
	 if (1 == N)
		return 2 * X;
	return (2 * X * hermite(N - 1, X)) - (2 * (N - 1) * hermite(N - 2, X));
}
int main1()
{
	int n = 0;
	int x = 0;
	scanf("%d%d", &n, &x);
	int ret = hermite(n, x);
	printf("%d\n", ret);
	system("pause");
	return 0;
}