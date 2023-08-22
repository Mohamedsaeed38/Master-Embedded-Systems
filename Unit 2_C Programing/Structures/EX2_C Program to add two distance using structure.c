/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
#include<string.h>
struct SAdd
{
	int feet;
	float inch;
	float d1,d2,sum;
};
void main()
{
	struct SAdd d1,d2,sum;
	printf("Enter information of 1st distance :\n");
	printf("Enter feet :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d1.inch);
	printf("\nEnter information of 2nd distance :\n");
	printf("Enter feet :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if(sum.inch>12.0)
	{
		sum.inch-=12;
		sum.feet++;
	}
	printf("\nAdd ='%d' '%f' ",sum.feet,sum.inch);
}
