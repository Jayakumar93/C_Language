/*Write a C program to print all odd  numbers between 1 to 100. - using while loop*/
/*
#include<stdio.h>
void main()
{
        int Num,Limit;
        printf("Enter the Starting and Ending odd number:\n");
        scanf("%d%d",&Num,&Limit);
        if(Num%2 !=0)
        {
                while(Num<=Limit)
                {
                        printf("%d\n",Num);
                        Num=(Num+2);
                }
        }
        else
        {
                printf("Enter the valid Odd number\n");
        }
}*/

/*Write a C program to print all Odd numbers between 1 to 100. - using while loop*/

#include<stdio.h>
void main()
{
        int Num,Limit;
        printf("Enter the Starting and Ending Odd number:\n");
        scanf("%d%d",&Num,&Limit);
        if(Num%2 !=0)
        {
                do
                {
                        printf("%d\n",Num);
                        Num=(Num+2);
                }while(Num<=Limit);
        }
        else
        {
                printf("Enter the valid Odd number\n");
        }
}


