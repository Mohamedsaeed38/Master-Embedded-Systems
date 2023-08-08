/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int clear_bit(int n,int bit);
int main()
{
	int n,bit;
	printf("Enter a number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("Enter bit position :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&bit);
	printf("result =%d",clear_bit(n,bit));
}
int clear_bit(int n,int bit)
{
	return n&=~(1<<bit);
}

