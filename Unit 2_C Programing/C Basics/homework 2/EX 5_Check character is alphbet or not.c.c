/*
 * main.c
 *
 *  Created on: Jul 18, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	char x;
	printf("Enter a character :");
	fflush (stdin);fflush(stdout);
	scanf("%c",&x);
	if(x>='A' && x<='Z')
		printf("it is an alphabet ");
	else
		printf("it is not alphabet ");
}

