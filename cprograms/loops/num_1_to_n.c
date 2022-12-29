/*C program to print all natural numbers from 1 to n. - using while loop*/


/* #include<stdio.h>
void main()
{
	int Num,Count;
	printf("Enter the Number & Count:");
	scanf("%d%d",&Num,&Count);

	while(Num<=Count)
	{
		printf("%d\n",Num);
		Num= ++Num;
	}
}*/



/*C program to print all natural numbers from 1 to n. - using while loop*/




#include<stdio.h>
void main()
{
        int Num,Count;
        printf("Enter the Number & Count:\n");
        scanf("%d%d",&Num,&Count);

        do
        {
                printf("%d\n",Num);
                Num= ++Num;
        }while(Num<= Count);
}














