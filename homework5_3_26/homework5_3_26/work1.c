#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>	
#include <time.h>

void game()
{
	int ret = rand()%100+1;
	int input = 0;
	while (1)
	{
		printf("请输入你要猜的数字：>");
		scanf("%d", &input);
		if (input > ret)
		{
			printf("猜大了\n");
		}
		else if (input < ret)
		{
			printf("猜小了\n");		
		}
		else
		{
			printf("恭喜你猜对了!\n");
			break;
		}
	}
}


void menu()
{
	printf("########################\n");
	printf("####   1. play      ####\n");
	printf("####   2. exit      ####\n");
	printf("########################\n");
}
int main1()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{case 1:
			game();
			break;
		case 2:
			printf("游戏结束！\n");
			break;
		default:
			printf("错误选项请重新输入！\n");
			break;
		}
	
	} while (input-2);
	system("pause");
	return 0;
}