/*
 * main.c
 *
 *  Created on: Jul 18, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of %c=%d" , c, c);
}

