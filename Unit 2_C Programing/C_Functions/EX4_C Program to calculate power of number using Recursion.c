/*
 * main.c
 *
 *  Created on: Aug 5, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
#include<string.h>
int calcpower(int base,int n)
{
	if (n>0)
		return(base*calcpower(base,n-1));
	else
		return 1;
}
int main()
{
	int base,n;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);
	printf("Enter powe number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("%d^%d = %d",base,n,calcpower(base,n));
}
