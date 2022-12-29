/*62. Write a C program to find first and last digit of any number.*/


#include<stdio.h>
void main()
{
	int n,sum=0,First_digi,Last_digi;
	printf("Enter the numbers:\n");
	scanf("%d", &n);
	Last_digi=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	First_digi=n;
	printf("The first number is %d and last number is %d\n", First_digi, Last_digi);
	sum=First_digi+Last_digi;
	printf("The sum of first and last number is %d\n", sum);
}
