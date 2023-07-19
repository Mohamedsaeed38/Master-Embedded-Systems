/*
 * main.c
 *
 *  Created on: Jul 18, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	int x;
	printf("Enter an integer you want to check : ");
	fflush (stdin);fflush(stdout);
	scanf("%d",&x);
	if (x%2 ==0)
		printf("%d is even number ",x);
	else
		printf("%d is odd number ",x);
}
