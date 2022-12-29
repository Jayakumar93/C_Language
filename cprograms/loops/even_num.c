/*C program to print all even numbers between 1 to 100. - using while loop*/



 /*#include<stdio.h>
void main()
{
	int Num1,Num2;
	printf("Enter Starting & Ending numbers:\n");
	scanf("%d%d", &Num1,&Num2);

	while(Num1<=Num2)
	{
		printf("%d\n",Num1);
		Num1=(Num1+2);
	}
}*/


/*C program to print all even numbers between 1 to 100. - using while loop*/



#include<stdio.h>
void main()
{
        int Num1,Num2;
        printf("Enter Starting & Ending numbers:\n");
        scanf("%d%d", &Num1,&Num2);

        do
        {
                printf("%d\n",Num1);
                Num1=(Num1+2);
        }while(Num1<=Num2);
}

