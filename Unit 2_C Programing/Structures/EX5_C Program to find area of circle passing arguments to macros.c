/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
#define PI 3.1415
#define area(r)(PI*(r)*(r))
int main()
{
	int raduis;
	float area;
	printf("Enter the raduis :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&raduis);
	area=area(raduis);
	printf("Area =%.2f",area);
	return 0;
}
