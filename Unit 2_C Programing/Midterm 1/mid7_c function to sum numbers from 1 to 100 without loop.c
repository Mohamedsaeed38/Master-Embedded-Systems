#include<stdio.h>
int sum_numbers(int n);
int main()
{
	int n=1;
	printf("sum from 1 to 100 is=%d",sum_numbers(n));
}
int sum_numbers(int n)
{
	static	int x=0;
	static	int s=0;
	if (x>=0 && x<=100)
	{
		s=s+x;
		x++;
		sum_numbers(n);
	}
	return s;
}
