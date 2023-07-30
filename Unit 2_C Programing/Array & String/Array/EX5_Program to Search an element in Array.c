/*
 * main.c
 *
 *  Created on: Jul 26, 2023
 *      Author: mohamed said
 */
# include<stdio.h>
int main()
{
	int i,a,b,n;
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	int x[100];
	for (i=1;i<=n;i++)
	{
		x[i-1]=11*i;
		printf(" %d ", x[i-1]);
	}
	printf("\nEnter the elements to be serached :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	for(i=0;i<=n;i++)
	{
		if(a==x[i])
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
	}
}
