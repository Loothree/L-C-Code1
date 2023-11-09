# define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"show.h"
#include"print.h"
#include"show1.h"
int main()
{
	int month = 0;
	int n = 0;
	int z = 0;
	int t = 0, A = 0;
	int m = 0, sum = 0;
	int  year = 0, year1 = 0,year3=0;
	printf("欢迎使用本日历，请输入对应的年份和月份：\n");
	//判断每个月的天数
	do
	{
		//输入年月
		scanf("%d%d", &year, &month);
		switch (month)
		{
		case 4:
		case 6:
		case 9:
		case 11:
		{
			n = 30;

			break;
		}
		case 2:
		{
			if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
			{
				n = 29;
			}
			else
			{
				n = 28;
			}
			break;
		}
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			n = 31;
			break;
		}
		default:
		{
			printf("Wrong date!Please input date again!\n");
			break;
		}
		}
		if (year < 1)
		{
			printf("Wrong date!Please input date again!\n");
		}
	} while (month > 12 || month < 1 || year < 1);
	//打印日历
	printf("                      %d %d\n", year, month);
	print(year, z, n,month,t);
	printf("是否要显示指定年份的日历？（是—>1  否—>0）\n");
	scanf("%d", &A);
	switch (A)
	{
	case 1:
	{
		printf("请输入年份：%d\n",year3);
		scanf("%d", &year3);
		year = year3;
		printf("                       %d\n\n", year3);
		for (month = 1; month <= 12; month++)
		{
		
			printf("                       %d月\n", month);
			print(year, z, n, month, t);
			printf("\n");
		}
		break;
	}
	default:
	{
		break;
	}
	}
	
	return 0;
}