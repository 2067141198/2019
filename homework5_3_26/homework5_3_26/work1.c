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
		printf("��������Ҫ�µ����֣�>");
		scanf("%d", &input);
		if (input > ret)
		{
			printf("�´���\n");
		}
		else if (input < ret)
		{
			printf("��С��\n");		
		}
		else
		{
			printf("��ϲ��¶���!\n");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{case 1:
			game();
			break;
		case 2:
			printf("��Ϸ������\n");
			break;
		default:
			printf("����ѡ�����������룡\n");
			break;
		}
	
	} while (input-2);
	system("pause");
	return 0;
}