/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
void swap(int a[],int b[],int x, int y );
int main()
{
	int a[100];
	int b[100];
	int i,lengthA ,lengthB;
	printf("Enter the length of A and B :");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&lengthA,&lengthB);
	printf("Enter A elements :");
	for(i=0;i<lengthA;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&a[i]);
	}
	printf("Enter B elements :");
	for(i=0;i<lengthB;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&b[i]);
	}
	printf(" A before swapping : ");
	for(i=0;i<lengthA;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n B before swapping : ");
	for(i=0;i<lengthB;i++)
	{
		printf("%d  ",b[i]);
	}
	swap(a , b, lengthA ,lengthB);
}
void swap(int a[],int b[],int x, int y )
{
	int c[50];
	int i;
	for (i=0;i<y;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf(" \n A after swapping : ");
	for(i=0;i<y;i++)
	{
		printf(" %d  ",a[i]);
	}
	printf(" \n B after swapping : ");
	for(i=0;i<x;i++)
	{
		printf(" %d  ",b[i]);
	}
}
