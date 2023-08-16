/*
 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int count(int n);
int main()
{
	int n,one;
	printf("Enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf(" number of ones in binary system is=%d",count(n));
}
int count(int n)
{
	int count=0,i;
	int x;
	x=sizeof(n);
	for(i=0;i<x;i++)
	{
		if((n&(1<<i))>>i)
			count++;
	}
	return count;
}
