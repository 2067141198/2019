//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("#####################\n");
//	printf("####     play    ####\n");
//	printf("####     exit    ####\n");
//	printf("#####################\n");
//}
//void game()
//{
//	//1.生成随机数字
//	
//	int ret = rand()%100+1;
//	/*printf("%d\n", ret);*/
//	//2.猜数字
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字:>");
//		scanf("%d\n", &input);
//		if (input > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜中了！\n");
//			break;
//		}
//	}
//}
//int main1()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do{
//		menu();
//		printf("请输入你的选择:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game ();
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("输入错误请重新输入!\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}