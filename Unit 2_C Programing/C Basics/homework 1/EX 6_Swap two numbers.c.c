/*
 * main.c
 *
 *  Created on: Jul 18, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &b);
	c=a;
	a=b;
	b=c;
	printf("After swaping value of a=%f\n",a);
	printf("After swaping value of b=%f",b);
}

