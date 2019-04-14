#define _CRT_SECURE_NO_WARNINGS 1

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）


#include <stdio.h>
#include <stdlib.h>

//定义一个打印数组的函数，用for循环遍历挨个打印数组中每个元素
void printlog(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
	printf("%d ", arr[i]);
	}
	printf("\n");
}
int main0 ()
{
	int tmp, i = 0;
	int arr1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	int arr2[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	printlog(arr1, 10);
	printlog(arr2, 10);
	for (i = 0; i < 10; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;

	}
	printlog(arr1, 10);
	printlog(arr2, 10);
	system("pause");
	return 0;

}
