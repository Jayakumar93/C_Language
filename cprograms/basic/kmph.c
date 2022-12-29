#include<stdio.h>
void main()
{
	float Distance,Time,Kmph;
	printf("Enter the Distance(km):\n");
	scanf("%f",&Distance);
	printf("Enter time taken(mins):\n");
	scanf("%f",&Time);
	Kmph=(Distance/Time)*60.0;
	printf("Speed of vehicle(kmph):%.2f",Kmph);
}
