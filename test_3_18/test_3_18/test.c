#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char m = 0;
	for (i = 1; i <= 99; i++)
	{
		m += (1/i);
	}
	printf("%s\n", m);
	system("pause");
	return 0;
}

//int main()
//{
//	int arr1[10], arr2[10], arr3[10];
//	arr3[10] = arr1[10];
//	arr1[10] = arr2[10];
//	arr2[10] = arr3[10];
//	system("pause");
//	return 0;
//}