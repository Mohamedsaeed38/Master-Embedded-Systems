/*
 * main.c
 *
 *  Created on: Jul 26, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	int length=0;
	printf("Enter a string :");
	fflush(stdin);fflush(stdout);
	gets(s);
	for(i=0 ;s[i]!=0 ; i++)
	{
		length++;
	}
	printf("length of string : %d", length);
}

