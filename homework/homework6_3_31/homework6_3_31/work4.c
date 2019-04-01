#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void init(int arr[], int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		arr[i] = 0;
	}
}
void empty(int arr[], int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[], int x)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < x / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[x - 1 - i];
		arr[x - 1 - i] = tmp;
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	init(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	empty(arr , sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	reverse(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}