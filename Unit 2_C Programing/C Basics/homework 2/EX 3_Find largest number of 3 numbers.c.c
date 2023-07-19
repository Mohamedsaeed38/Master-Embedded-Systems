/*
 * main.c
 *
 *  Created on: Jul 18, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	float x ,y ,z;
	printf("Enter the largest number :");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if (x>y)
	{
		if (x>z)
			printf("largest number is %f ",x);
		else
			printf("largest number is %f" ,z);
	}
	else
	{
		if (y>z)
			printf("largest number is %f",y);
		else
			printf("largest numner is %f",z);
	}
}


