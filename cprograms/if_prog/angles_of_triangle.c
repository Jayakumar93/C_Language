#include<stdio.h>
void main()
{
	int Angle1,Angle2,Angle3,Sum;
	printf("Enter the three angles of Triangle:\n");
	scanf("%d%d%d",&Angle1,&Angle2,&Angle3);
	Sum=(Angle1+Angle2+Angle3);
	if(Sum==180)
	{
		printf("Entered Angles are valid for Triangle\n");
	}
	else
	{
		printf("Entered Angles are not valid for Triangle\n");
	}
}

