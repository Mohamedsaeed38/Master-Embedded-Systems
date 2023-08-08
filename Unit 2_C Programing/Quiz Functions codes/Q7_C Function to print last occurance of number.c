/*
 * main.c
 *
 *  Created on: Aug 8, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int last_occurance(int a[],int size);
int main()
{
	int a[100],size,i;
	printf("Enter size of array : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter element %d :",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&a[i]);
	}
	int last;
	last=last_occurance(a,size);
	printf("Last occurrence is %d",last);
}
int last_occurance(int a[],int size)
{
	int y,i;
	printf("\nEnter the number you want :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	for(i=size;i>0;i--)
	{
		if (a[i]==y)
			return i+1;
	}
	return -1;
}
