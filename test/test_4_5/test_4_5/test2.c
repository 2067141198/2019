#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void print(int arr[])
{
	int i = 0;
	if (arr[i] != 0)
		print(arr[i + 1]);		
	printf("%d ", arr[i]);
}
int main()
{
	int arr[100] = { 0 };
	scanf("%d", &arr);
	print(arr);
	system("pause");
	return 0;
}