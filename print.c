# define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int year, int z, int n, int month, int t)
{

	int arr[6][7] = { 0 };
	int i = 0, j = 0, k = 1;
	int count = 0;
	int year2 = 0;
	if (year < 1900)//计算1900以前的年份
	{
		year2 = year + 1;
		for (int m = year2; m < 1900; m++)
		{
			if (m % 400 == 0 || m % 4 == 0 && m % 100 != 0)
			{
				t += 366;
			}
			else
			{
				t += 365;
			}
		}
		for (int p = 12; p >= month; p--)
		{
			switch (p)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{
				t += 31;

				break;
			}
			case 4:
			case 6:
			case 9:
			case 11:
			{
				t += 30;
				break;
			}
			case 2:
			{
				if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
				{
					t += 29;
				}
				else
				{
					t += 28;
				}
				break;
			}
			}

		}
	}
	else//计算1900以后的年份。
	{
		year2 = 1900;
		for (int m = year2; m < year; m++)
		{
			if (m % 400 == 0 || m % 4 == 0 && m % 100 != 0)
			{
				t += 366;
			}
			else
			{
				t += 365;
			}
		}
		for (int p = 1; p < month; p++)
		{
			switch (p)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{
				t += 31;

				break;
			}
			case 4:
			case 6:
			case 9:
			case 11:
			{
				t += 30;
				break;
			}
			case 2:
			{
				if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
				{
					t += 29;
				}
				else
				{
					t += 28;
				}
				break;
			}
			}

		}
	}
	z = t % 7;//判断每个月第一天是星期几。
	
	show();
	show1();//打印裱框
	if (year < 1900)
	{
		z = 7 - z;
	}
	for (i = 0; i < 6; i++)
	{

		if (count == 0)
		{
			for (int s = 0; s <z+1; s++)
			{
				arr[i][s] = '\0';
				printf("  %4c  ", arr[i][s]);
			}//把第一天前面的空间用\0填充。
		}
		for (j = z+1; j < 7; j++)
		{
			if (k <= n)
			{
				arr[i][j] = k;
				printf("  %-3d  ", arr[i][j]);
				k++;
			}
		}
		if (j == 7)
		{
			if (i == 5)
			{
				printf("\n");
			}
			else
			{
				printf("\n");
				printf("\n");
			}
		}
		z = -1;
		count++;//打印数字。
	}
	show();
}