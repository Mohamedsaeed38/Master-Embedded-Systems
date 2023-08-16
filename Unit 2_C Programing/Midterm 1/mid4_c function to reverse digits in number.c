/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int rev_digits(int );
int main()
{
	int num;
	printf("Enter the number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("reverse = %d ",rev_digits(num));
}
int rev_digits(int n)
{
	int rem;
	int x=0;
	while(n>0)
	{
		rem=n%10;
		x=x*10+rem;
		n=n/10;
	}
	return x;
}

