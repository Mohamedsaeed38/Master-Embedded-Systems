#include <stdio.h>
struct Sstudent {
	char sname[50];
	int srnum;
	float smark;
};
int main() {
	struct Sstudent X;
	printf("Enter information of students:\n\n");
	printf("Enter student name: ");
	fflush(stdin);fflush(stdout);
	gets(X.sname);
	printf("Enter student roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&X.srnum);
	printf("Enter student mark: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&X.smark);
	printf("\nstudent name: %s", X.sname);
	printf("\nstudent roll: %d", X.srnum);
	printf("\nstudent mark: %.2f", X.smark);
	return 0;
}
