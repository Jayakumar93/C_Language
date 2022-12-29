/*C program to check whether a year is leap year or not.*/


#include<stdio.h>
void main()
{
	int a;
	printf("Enter the Year:\n");
	scanf("%d",&a);

	if(a%4==0)
	{
		printf("%d is a Leap Year\n",a);
	}
	else
	{
		printf("%d is not a Leap Year\n",a);
	}
}

	

