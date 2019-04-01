#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//µ›πÈ–¥∑®
//int fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return fib(x - 2) + fib(x - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fib(a);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}


//∑«µ›πÈ–¥∑®
//int fib(int x)
//{
//	int tmp1 = 1;
//	int tmp2 = 1;
//	int sum = 0;
//	if (x <= 2)
//		return 1;
//	else
//	{
//		int i = 0;
//		for (i = 2; i < x; i++)
//		{
//			sum = tmp1 + tmp2;
//			tmp1 = tmp2;
//			tmp2 = sum;
//			
//		}
//		return sum;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fib(a);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}