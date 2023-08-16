/*
 * main.c
 *
 *  Created on: Aug 13, 2023
 *      Author: mohamed said
 */
#include <stdio.h>
int sumdigits(int num);
int main()
{
	int num;
	printf("Enter number :");
	fflush(stdout);
	scanf("%d" , &num);
	printf("sum digits number = %d" , sumdigits(num));
}
int sumdigits(int num)
{
	int x;
	int y=0;
	while(num)
	{
		x = num%10;
		y= y+x;
		num = num/10;
	}
	return y;
}
