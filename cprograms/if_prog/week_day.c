/*C program to input week number and print week day*/

#include<stdio.h>
void main()
{
	int a;
	printf("Enter the day(1-7):\n");
	scanf("%d",&a);

	if(a>=1 && a<=7)
	{
		if(a==1)
		{
			printf("Sunday\n");
		}
		else if(a==2)
		{
			printf("Monday\n");
		}
		 else if(a==3)
                {
                        printf("Tuesday\n");
                }
		  else if(a==4)
                {
                        printf("Wednesday\n");
                }
		 else if(a==5)
                {
                        printf("Thursday\n");
                }
		 else if(a==6)
                {
                        printf("Friday\n");
                }
		 else if(a==7)
                {
                        printf("Saturday\n");
                }
	}
	else
	{
		printf("Enter Valid number(1-7)\n");
	}
}

		 



