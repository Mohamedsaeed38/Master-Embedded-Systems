/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	int arr[15];
	int i,size;
	int* ptr=arr;
	printf("Enter no of elements  :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\n element -%d :",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	ptr=&arr[size-1];
	printf("\n\n");
	printf("elements of array in reversed order is\n");
	for(i=size;i>0;i--)
	{
		printf("element - %d : %d\n",i,*ptr);
		ptr--;
	}
	printf("\n\n");
}
