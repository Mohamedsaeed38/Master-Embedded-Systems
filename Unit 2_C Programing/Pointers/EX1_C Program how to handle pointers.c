/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
int main()
{
	int* ab;
	int m=29;
	printf("Adress of m :0x%x\n",(unsigned int)&m);
	printf("value of m : %d\n\n",m);
	ab=&m;
	printf("Now ab is assigned with adress of m.\n");
	printf("Adress of pointer ab : 0x%x\n",(unsigned int)ab);
	printf("content of pointer ab : %d\n\n",*ab);
	m=34;
	printf("The value of m is assigned to 34 now .\n");
	printf("Adress of pointer ab :0x%x\n",(unsigned int)ab);
	printf("content of pointer ab :%d\n\n",*ab);
	*ab=7;
	printf("The pointer variable ab is assigned with the value 7 now .\n");
	printf("Adress of m : 0x%x\n",(unsigned int)&m);
	printf("value of m : %d\n\n",m);
}
