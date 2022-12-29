#include<stdio.h>
void main()
{
	int Side1,Side2,Side3;
	printf("Enter the three sides value of Triangle\n");
	scanf("%d%d%d",&Side1,&Side2,&Side3);
	if ((Side1+Side2>Side3) && (Side2+Side3>Side1) && (Side3+Side1>Side2))
	{
		printf("The given sides values valid for Triangle\n");
	}
	else
	{
		printf("The given Sides values not valid for Triangle\n");
	}
}


