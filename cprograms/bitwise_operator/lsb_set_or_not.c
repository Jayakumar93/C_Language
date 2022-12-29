/*Write a C program to check Least Significant Bit (LSB) of a number is set or not*/


#include<stdio.h>
void main()
{
	int num,pos;
	printf("Enter the number:\n");
	scanf("%d", &num);
	if(num & 1)
	{
		printf("The LSB Bit of %d is:SET\n", num);
	}
	else
	{
		printf("The LSB Bit of %d is: NOTb SET\n", num);
	}
}



/*
void main()
{
	int a,b,c;
	printf("Enter any two numbers\n");
	scanf("%d%d", &a, &b);
	c=a&b;

	printf("Decimal value is:%d\n", c);
	printf("Hexa value is:%x\n", c);
}*/
