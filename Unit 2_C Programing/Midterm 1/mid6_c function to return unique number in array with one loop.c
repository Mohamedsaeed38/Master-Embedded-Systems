/*
 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int unique_elements(int arr[],int length);
int main()
{
	int arr[]={4,2,5,2,5,7,4};
	int x=unique_elements(arr,7);
	printf("unique is =%d \n",x);
	int b[] = {4,2,4};
	int y = unique_elements(b,3);
	printf("unique is= %d",y);
}
int unique_elements(int arr[],int length)
{
	int unique = arr[0];
	for (int i = 1; i < length; i++)
	{
		unique ^= arr[i];
	}
	return unique;
}
