/*
 * main.c
 *
 *  Created on: Jul 26, 2023
 *      Author: mohamed said
 */
# include <stdio.h>
int main()
{
	float average ;
	float sum=0;
	int i,n;
	printf("Enter the number of data :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	float a[n];
	for (i=0 ; i<n; i++)
	{
		printf("Enter the number :");
		fflush(stdin); fflush (stdout);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	average=sum/n;
	printf("average = %.2f ", average);
}
