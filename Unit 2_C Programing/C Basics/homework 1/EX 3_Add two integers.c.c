/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	int x,y,sum;
	printf("Enter two integers : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &x, &y);
	sum=x+y;
	printf("sum :%d",sum);
}

