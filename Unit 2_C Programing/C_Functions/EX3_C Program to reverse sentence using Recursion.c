/*
 * main.c
 *
 *  Created on: Aug 5, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
#include<string.h>
void reverse(char sentence[], int x)
{
	if(x<0) return;
	printf("%c",sentence[x]);
	x--;
	reverse (sentence,x);
}
int main()
{
	char sentence[100];
	printf("Enter a sentence : ");
	fflush(stdin);fflush(stdout);
	gets(sentence);
	reverse(sentence,strlen(sentence)-1);
	return 0;
}
