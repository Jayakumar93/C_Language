//Program for centimeter to meter and kilometer

#include<stdio.h>
void main()
{
	float cm,mtr,km;
	printf("Enter the length in cm:");
        scanf("%f",&cm);
	mtr=cm/100;
	km=cm/100000;
	printf("Length in meter:%f\n",mtr);
	printf("Length in Km:%f\n",km);
}	
