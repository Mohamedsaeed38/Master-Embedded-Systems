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
	printf("Enter an alphabet :");
	fflush(stdin);fflush(stdout);
	scanf("%c", & c);
	if (c=='a' || c=='e' || c=='i' || c=='u' || c=='o' || c=='A' || c=='E' ||c=='I' ||c=='U' ||c=='O' )
		printf("%c is vowel", c);
	else
		printf("%c is consonant" , c);
}
