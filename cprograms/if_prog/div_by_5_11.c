/*C program to check whether a number is divisible by 5 and 11 or not.*/


#include<stdio.h>
void main()
{
	int a;
	printf("Enter the number:\n");
	scanf("%d",&a);

	if((a%5==0) && (a%11==0))
	{
		printf("Entered number is Divisible by 5 & 11\n");
	}
	else
	{
		printf("Entered number is not Divisible by 5 & 11\n");
	}
}
