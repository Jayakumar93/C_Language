#include<stdio.h>
void main()
{
	float celsius,fahrenheit;
	printf("Enter the temparature in celsius:\n");
	scanf("%f",&celsius);
	fahrenheit=(celsius*(9.0/5.0)+32.0);
	printf("Temparature in fahrenheit:%f\n",fahrenheit);
}
