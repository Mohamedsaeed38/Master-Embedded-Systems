/*
 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int prime(int x)
{
	int a ,check=0;
	for(a=2;a<x/2;++a)
	{
		if(x%a==0)
		{
			check=1;
			break;
		}
	}
	return check;
}
int main()
{
	int n1 ,n2 ,i ,check;
	printf("Enter two numbers(intervals):");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&n1,&n2);
	printf("prime numbers between %d and %d are :",n1,  n2);
	for(i=n1+1;i<n2;++i)
	{
		check=prime(i);
		if(check==0)
			printf("%d ",i);
	}
	return 0;
}


