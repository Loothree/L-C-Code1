# define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void show1()
{
	for (int t = 0; t < 7; t++)
	{
		char ch[7][3] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
		printf("  ");
		for (int n = 0; n < 3; n++)
		{
			printf("%c", ch[t][n]);
		}
		printf("  ");
	}
	printf("\n");
}