#define _CRT_SECURE_NO_WARNINGS 1

//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��


#include <stdio.h>
#include <stdlib.h>

int main1 ()
{
	int i = 0;
	double tmp, sum = 0;
	for (i = 1; i < 100; i++)
	{
		//���i%2Ϊ�棬����Ϊ0��ȡ��ǰ���ֵ�����Ϊ�٣���i%2==0ȡ�������ֵ
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