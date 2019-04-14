#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	if (a > b)
	{
		printf("%d %d %d", a, b, c);
	}
	else
	{
		if (a > c)
		{
			printf("%d %d %d", b, a, c);
		}
		else
		{
			if (b > c)
			{
				printf("%d %d %d", b, c, a);
			}
			else
			{
				printf("%d %d %d", c, b, a);
			}
		}
	}
	system("pause");
	return 0;
}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	scanf("%d%d",&x,&y);
//	for (i = x; i > 0;i--)
//	{
//		if (x%i==0,y%i==0)
//		{
//			printf("这两个数的最大公约数是%d\n",i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}




//int main()
//{
//	int arr[10] = {2,5,4,9,20,6,7,3,1,10};
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//
//	}
//	printf("%d",max);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 4;
//	printf("a=%d\nb=%d\n",b,a);
//	system("pause");
//	return 0;
//}


