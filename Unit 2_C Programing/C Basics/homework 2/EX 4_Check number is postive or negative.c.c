/*
 * main.c
 *
 *  Created on: Jul 18, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	float x;
	printf("Enter a number :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if (x>0)
		printf("the number is positive %f",x);
	else
		if (x<0)
			printf("the number is negative %f",x);
		else
			printf("You entered zero");

}




