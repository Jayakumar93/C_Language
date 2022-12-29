#include<stdio.h>
void main()
{
	int Num;
	printf("Enter the number:\n");
	scanf("%d",&Num);
	if(Num%2==0)
	{
		printf("%d is Even number\n",Num);
	}
	else
	{
		printf("%d is Odd number\n",Num);
	}
}

