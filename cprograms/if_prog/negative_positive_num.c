/*C program to check whether a number is negative, positive or zero.*/

#include<stdio.h>
void main()
{
	int a;
	printf("Enter the number:\n");
	scanf("%d",&a);

	if(a==0)
	{
		printf("Entered number is:0\n");
	}
	else if(a<=0)
	{
		printf("Entered number is: Negative Value\n");
	}
	else if(a>=0)
	{
		printf("Entered number is: Positive Value\n");
	}
}

