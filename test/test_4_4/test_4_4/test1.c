#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


int print(int x, int y, double z)
{
	return (10 * x + y) / (unsigned)(10 * z);
}
int main()
{
	int a = 0;
	int b = 0;
	double c = 1.9;
	scanf("%d%d", &a, &b);
	int ret = print(a, b, c);
	printf("%d\n", ret);
	system("pause");
	return 0;
}