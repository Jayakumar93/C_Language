



#include<stdio.h>
#include"header1.h"

int main()
{
	int a,b;
	printf("Enter the two numbers:\n");
	scanf("%d %d", &a,&b);
	//sum=sum(a,b);
	printf("The Sum of Two numbers is: %d\n",sum(a,b));
	//sub=sub(a,b);
	printf("The Sub of Two numbers is: %d\n", sub(a,b));
	//multi=mul(a,b);
	printf("The Multiple of Two numbers is: %d\n",multi(a,b));
	//divi=divi(a,b);
	printf("The Division of Two numbers is: %d\n", divi(a,b));
}



