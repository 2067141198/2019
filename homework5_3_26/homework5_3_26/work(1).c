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
//	//1.�����������
//	
//	int ret = rand()%100+1;
//	/*printf("%d\n", ret);*/
//	//2.������
//	int input = 0;
//	while (1)
//	{
//		printf("������µ�����:>");
//		scanf("%d\n", &input);
//		if (input > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (input < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ������ˣ�\n");
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
//		printf("���������ѡ��:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game ();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("�����������������!\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}