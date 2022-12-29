/*Write a C program to find sum of all natural numbers between 1 to n.*/

/*
#include<stdio.h>
void main()
{
	int Num1,Num2,Sum;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&Num1,&Num2);
	Sum=0;

	while(Num1<=Num2)
	{
	

		Sum= Sum+Num1;
		Num1++;
	}
	printf("Sum of all natural numbers:%d\n",Sum);
}*/


/*Write a C program to find sum of all natural numbers between 1 to n.*/

#include<stdio.h>
void main()
{
        int Num1,Num2,Sum;
        printf("Enter any two numbers:\n");
        scanf("%d%d",&Num1,&Num2);
        Sum=0;

        do
        {


                Sum= Sum+Num1;
                Num1++;
        }while(Num1<=Num2);
        printf("Sum of all natural numbers:%d\n",Sum);
}
				
