/*Write a C program to print multiplication table of any number*/


#include<stdio.h>
void main()
{
	int Num1,Num2;
	printf("Enter the number:\n");
	scanf("%d",&Num1);
	Num2=1;
	while(Num2<=10)
	{
		
		printf("%d*%d=%d\n", Num1,Num2,(Num1*Num2));
		Num2++;
	}
}


