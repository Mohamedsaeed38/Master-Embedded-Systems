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
	char y[100],x;
	int freq=0;
	int i;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(y);
	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);

	for(i=0; i<strlen(y); i++)
	{
		if(y[i]==x) freq++;
	}
	printf("Frequency of %c = %d",x,freq);
}

