/*Write a C program to find sum of all odd numbers between 1 to n.*/

#include<stdio.h>
void main()
{
        int Num,Limit,Sum;
        printf("Enter Staring and Ending number:\n");
        scanf("%d%d", &Num,&Limit);
        Sum=0;
        if(Num%2==0)
        {
               Num +=1;
        }

        while(Num<=Limit)
        {
                Sum=Sum+Num;
                Num = Num+2;
        }


        printf("Sum of Odd numbers is:%d\n",Sum);
}                                                                      
