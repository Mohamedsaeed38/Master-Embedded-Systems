/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: mohamed said
 */
#include <stdio.h>
struct SComplexNum
{
	float real ;
	float imaginary ;
}x,y,Sum;
int main()
{
	printf("For 1st Complex Number : \n");
	printf("Enter Real and Imaginary Number :  ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x.real,&x.imaginary);
	printf("For 2st Complex Number : \n");
	printf("Enter Real and Imaginary Number :  ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&y.real,&y.imaginary);
	AddComplex(x,y);
	return 0;
}
void AddComplex(struct SComplexNum x,struct SComplexNum y)
{
	Sum.real = x.real + y.real ;
	Sum.imaginary = x.imaginary + y.imaginary ;
	printf("Sum = %.1f + %.1fi",Sum.real,Sum.imaginary);
}
