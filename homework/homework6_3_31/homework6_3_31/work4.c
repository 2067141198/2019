#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

init(int arr[], int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		arr[i] = 0;
	}
}
empty(int arr[])
{

}
reverse(int arr[])
{

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
	empty(arr);
	reverse(arr);
	system("pause");
	return 0;
}