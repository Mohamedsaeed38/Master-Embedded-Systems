/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	char* ptr=0;
	int i=0,n=0;
	printf("Enter a string :");
	fflush(stdin);fflush(stdout);
	gets(s);
	n=strlen(s);
	ptr=s+strlen(s)-1;
	printf("Reverse string is :");
	for(i=0;i<n;i++,ptr--)
	{
		printf("%c",*ptr);
	}
}
