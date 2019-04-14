#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//不高兴的津津（升级版）

//津津上初中了。妈妈认为津津应该更加用功学习，所以津津除了上学之外，还要参加妈妈为她报名的各科复习班。
//另外每天妈妈还会送她去学习朗诵、舞蹈和钢琴。但是津津如果一天上课超过八个小时就会不高兴，而且上得越久就会越不高兴。
//这次与NOIp2004普及组第一题不同的是：假设津津不会因为其它事不高兴，但是她的不高兴会（当然高兴也会）持续到第二天。
//请你帮忙检查一下津津以后n天的日程安排，看看以后n天她会不会不高兴（计算方法：用昨天不高兴程度加上今天上课总时间减去8后
//得到的数作为今天不高兴程度）；输出以后n天结束后不高兴程度和是多少。

//输入输出格式
//输入格式：
//第1行：一个数n
//第2行~第n + 1行：每行两个数，表示这天上学时间和课外补习班时间
//
//输出格式：
//一个数，这n天过后的不高兴程度和

int main(){
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	int class_time = 0;
	int study_time = 0;
	for (int i = 1; i <= n; i++){
		scanf("%d%d", &class_time, &study_time);
	
		int tmp = sum + (class_time + study_time - 8);
		sum = tmp;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}