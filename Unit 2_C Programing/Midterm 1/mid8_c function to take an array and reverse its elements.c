/*


 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: mohamed said
 */
#include <stdio.h>
void function_reverse(int size,int a[],int b[]);
int main()
{
	int a[100],b[100],i,size;
	printf("Enter size of element :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter an element %d :",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&a[i]);
	}
	function_reverse(size,a,b);
	return 0;
}
void function_reverse(int size,int a[],int b[])
{
	int i,j;
	for(i=size-1,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	printf("reverse of an array is :");
	for(i=0; i<size;i++)
	{
		printf(" %d ",b[i]);
	}
}


