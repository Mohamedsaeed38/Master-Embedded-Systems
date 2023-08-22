/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: mohamed said
 */
#include <stdio.h>
struct Students
{
	char name[20];
	float mark;
}student[10];
int main()
{
	int i;
	printf("Enter information of students: \n");
	for(i=0;i<10;i++)
	{
		printf("For roll number %d \n",i+1);
		printf("Enter name: ");
		fflush(stdin); fflush(stdout);
		scanf("%s",&student[i].name);
		printf("Enter marks:");
		fflush(stdin);fflush(stdout);
		scanf("%f",&student[i].mark);
	}
	printf("Displaying information \n");
	for(i=0;i<10;i++)
	{
		printf("\nInformation For roll number %d \n",i+1);
		printf("name: %s\n",student[i].name);
		printf("Marks: %.2f",student[i].mark);
	}
	return 0;
}
