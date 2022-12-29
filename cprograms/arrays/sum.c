/*Write a C program to find sum of all array elements. - using recursion.*/


#include<stdio.h>
int sum(int);
int main()
{
	int n,result;
	printf("Enter the integer number:\n");
	scanf("%d", &n);
	
	result=sum(n);
	printf("Number:%d\n",n);
	printf("Sum of Elements is:%d\n",result);
}
int sum(int n)
{
	printf("num:%d\n",n);
	if(n !=0)
	{
//		printf("%d\n",n);
		return n+sum(n-1);
		
	}
	else
	{
		return n;
	}
}


