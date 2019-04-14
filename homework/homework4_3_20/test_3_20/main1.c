#define _CRT_SECURE_NO_WARNINGS 1

//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。


#include <stdio.h>
#include <stdlib.h>

int main1 ()
{
	int i = 0;
	double tmp, sum = 0;
	for (i = 1; i < 100; i++)
	{
		//如果i%2为真，即不为0就取：前面的值；如果为假，即i%2==0取：后面的值
		tmp = 1.0 / i * (i % 2 ? 1 : -1);
		sum += tmp;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}

//int main()
//{
//	int i = 0, flag = 1;
//	double tmp, sum = 0;
//	for (i = 1; i < 100; i++)
//	{
//		tmp = 1.0 / i * flag;
//		sum += tmp;
//		flag *= -1;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}