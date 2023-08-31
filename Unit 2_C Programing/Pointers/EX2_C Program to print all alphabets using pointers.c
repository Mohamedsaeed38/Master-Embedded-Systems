/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	int x=65,i;
	int* ptr=&x;
	printf("The Alphabets are:\n\n");
	for(i=0; i<26; i++)
	{
		printf("%c ",(*ptr)++);
	}
}
