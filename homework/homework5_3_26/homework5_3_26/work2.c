#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


int binary_search(int arr[], int x, int y, int k)
{
	int mid = 0;
	while (x <= y)
	{
		mid = x + (y - x) / 2;
		if (arr[mid] > k)
		{
			y = mid - 1;
		}
		else if (arr[mid] < k)
		{
			x = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main2()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int k;
	scanf("%d", &k);
	int ret = binary_search(arr, left, right, k);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，%d的下标是%d\n", k, ret);
	}
	system("pause");
	return 0;
}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k;
//	int mid = 0;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，%d的小标是%d\n", k , mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//		}
//	}
//	system("pause");
//	return 0;
//}