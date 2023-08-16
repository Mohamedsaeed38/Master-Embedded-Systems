/*
 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
#include<string.h>
void reverse(char sentence[], int size);
int main()
{
	int size;
	char sentence[100];
	printf("Enter a sentence : ");
	fflush(stdin);fflush(stdout);
	gets(sentence);
	size=strlen(sentence);
	reverse(sentence,size);
}
void reverse(char sentence[], int size)
{
	int i;
	char reverse[100] = "";
	char temp[100];
	for(i=0; i<size && i<100;i++)
	{
		temp[i]=sentence[i];
		if(sentence[i] == ' ')
			break;
	}
	temp[i]=0;
	strcat(reverse, (sentence+i) );
	strcat(reverse," ");
	strcat(reverse,temp);
	printf("Reversed string :%s ",reverse);
}
