/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: mohamed said
 */
#include "stdio.h"
int main ()
{
	int n , i ;
	int factorial = 1 ;
	printf ("Enter a number : ") ;
	fflush (stdin);  	fflush (stdout) ;
	scanf ("%d" , &n) ;
	if (n>=0)
	{
		for (i=1 ; i<=n ; i++)
		{
			factorial = factorial*i ;
		}
		printf ("Factorial = %d " , factorial) ;
	}
	else if (n < 0)
		printf ("Error!!! Factorial of negative number doesn't exist ") ;
	else
		printf ("Factorial = 1") ;
}

