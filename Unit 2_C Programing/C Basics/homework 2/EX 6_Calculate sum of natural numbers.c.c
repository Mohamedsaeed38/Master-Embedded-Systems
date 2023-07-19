/*
 * main.c
 *
 *  Created on: Jul 18, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	int n,i;
	int sum=0;
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++)
	{
		sum+=i;
	}
	printf("sum =%d",sum);
}

