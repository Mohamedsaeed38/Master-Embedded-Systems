/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: mohamed said
 */
#include<stdio.h>
struct Semployee
{
	char employee_name[100];
	int employee_ID;
};
int main()
{
	struct Semployee emp1= {"Mohamed",1001},emp2= {"Alex",1002},emp3={"Saeed",1003};
	struct Semployee(*ptr1[])={&emp1,&emp2,&emp3};
	struct Semployee*(*ptr2)[3]=&ptr1;
	printf("Employee name : %s \n",(*(*ptr2+1))->employee_name);
	printf("Employee ID : %d ",(*(*ptr2+1))->employee_ID);
}

