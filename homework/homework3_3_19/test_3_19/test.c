#define _CRT_SECURE_NO_WARNINGS 1
//�޸�ǰ��ʱ��2019_3_19 23:48
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a = 0, i = 0, m = 0, sum = 0;	
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		m = m * 10 + a;
//		sum +=  m;
//	}
//	printf("%d ", sum);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int a , b, c;
//	for (i = 1; i <= 999; i++)
//	{
//		a = i % 10;
//		b = i / 10 % 10;
//		c = i / 100;
//		//֮ǰһֱ���в��ɹ���Ϊ���˸��ͼ����󣬰Ѹ�ֵ�ŵ��Ⱥ�ʹ���ˡ����ÿ������Ķ������⡣
//		if (i == (a*a*a) + (b*b*b) + (c*c*c))
//			printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}



int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 13; i++)
	{
		if (i <= 7)
		{
			for (j = 1; j < 2 * i; j++)
			{
				printf("*");
			}
		}
		if (i > 7)
		{
			for (j = 14; j > (2*i-13); j--)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}