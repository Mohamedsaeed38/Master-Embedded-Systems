/*
 * main.c
 *
 *  Created on: Jul 28, 2023
 *      Author: mohamed said
 */
# include <stdio.h>
# include<string.h>
int main()
{
	char s[100];
	char r[100];
	int i=0;
	int n=0;
	printf("Enter the string :");
	fflush(stdin);fflush(stdout);
	gets(s);
	n=strlen(s);
	for(i=0 ; i<n+1 ;i++)
	{
		r[i]=s[n-i-1];
	}
	printf("Reverse string is : %s",r);
}

