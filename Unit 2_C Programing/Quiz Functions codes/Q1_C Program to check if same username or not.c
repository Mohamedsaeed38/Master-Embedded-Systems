/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int x;
	printf("Enter a string :");
	fflush(stdout);fflush(stdin);
	gets(a);
	printf("Enter your name :");
	fflush(stdout);fflush(stdin);
	gets(b);
	x=stricmp(a,b);
	if (x==0)
		printf("right");
	else
		printf("wrong");
}
