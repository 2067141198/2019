#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int PrintHours(int a, int b, int c, int d)
//{
//	if (b <= d)
//		return c - a;
//	return c - a - 1;
//}
//PrintMin(a, b, c, d)
//{
//	if (b <= d)
//		return d - b;
//	return d + 60 - b;
//}
//int main()
//{
//	int a, b, c, d;
//	while (1)
//	{
//		scanf("%d%d%d%d", &a, &b, &c, &d);
//		if (b >= 60 || d >= 60 || a >= 24 || c >= 24)
//		{
//			printf("时间输入有误，请重新输入:>\n");
//		}
//		else if (c <= a && d < b)
//		{
//			printf("结束时间不得晚于开始时间，请重新输入:>\n");
//		}
//		else
//		{
//			break;
//		}
//	}
//	int ph = PrintHours(a, b, c, d);
//	int pm = PrintMin(a, b, c, d);
//	printf("%d %d\n", ph, pm);
//	system("pause");
//	return 0;
//}