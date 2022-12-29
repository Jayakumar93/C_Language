/*Write a C program to print all natural numbers in reverse (from n to 1). - using while*/

/*
#include<stdio.h>
void main()
{
	int Num;
	printf("Enter the number:\n");
	scanf("%d",&Num);

	while(Num>=1)
	{
		printf("%d\n",Num);
		--Num;
	}
}*/

/*Write a C program to print all natural numbers in reverse (from n to 1). - using while*/


#include<stdio.h>
void main()
{
        int Num;
        printf("Enter the number:\n");
        scanf("%d",&Num);

        do
        {
                printf("%d\n",Num);
                --Num;
        }while(Num>=1);
}

