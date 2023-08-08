/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
#include<math.h>
int check_powerof3(unsigned n);
int main()
{
	unsigned n;
	printf("Enter a number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	check_powerof3(n) ? printf("%d ==0",n):printf("%d ==-1",n);
}
int check_powerof3(unsigned n)
{
	double i;
	i=log(n)/log(3);
	return i==trunc(i);
}
