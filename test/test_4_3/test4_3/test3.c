#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int MaxList(int arr[], int SZ)
{
	int max = 0;
	int i = 0;
	for (i = 0; i < SZ; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			max = arr[i + 1];
		}
		else
		{
			max = arr[i];
		}
	}
	return max;
}
int main()
{
	int arr[10] = { 0 };
	scanf("%d", &arr[10]);
	int sz = sizeof(arr[10]) / sizeof(arr[0]);
	int ml = MaxList(arr[10], sz);
	printf("%d\n", ml);
	system("pause");
	return 0;
}