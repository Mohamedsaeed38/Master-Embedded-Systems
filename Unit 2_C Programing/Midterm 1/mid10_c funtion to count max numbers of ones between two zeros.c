/*
 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int count_maxones(int x);
int main()
{
	int x;
	printf("Enter a number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("max number is =%d",count_maxones(x));
}
int count_maxones(int x)
{
	int count=0;
	int max=0;
	while(x!=0)
	{
		if(x%2==1)
			count++;
		x=x/2;
		if(x%2==0)
		{
			if(max<count)
			{
				max=count;
				count=0;
			}
		}
	}
	return max;
}

