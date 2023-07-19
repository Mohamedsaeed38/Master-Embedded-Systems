/*
 * main.c
 *
 *  Created on: Jul 18, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	float a,b,z;
	printf("Enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	z =a*b;
	printf("z:%f",z);
}


