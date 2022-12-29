/*Write a C program to find maximum and minimum between two numbers using*/

/*
#include<stdio.h>
void fun(void);
void main()
{
	fun();
}
void fun(void)
{
	int a,b;
	printf("Enter any two numbers:\n");
	scanf("%d %d", &a,&b);
	if(a>b)
	{
		printf("a=%d is greater than b= %d\n", a,b);
	}
	else
	{
		printf("b=%d is greater then a= %d\n",b,a);
	}
}*/

/*
#include<stdio.h>
void fun(int, int);
int main()
{
	int a,b;
	printf("Enter any two numbers:\n");
	scanf("%d %d", &a,&b);
	fun(a,b);
}
void fun(int x, int y)
{
	if(x>y)
	{
		printf("%d is greater than %d\n", x,y);
	}
	else
	{
		printf("%d is greater than %d\n",y,x);
	}
}

*/


#include<stdio.h>
int fun(int*, int*);
int main()
{
	int a,b,max;
	printf("Enter two numbers:\n");
	scanf("%d %d", &a, &b);
	max=fun(&a,&b);
	printf("%d is grater\n",max);
	return 0;
}
int fun(int* x, int* y)
{
	if(*x > *y)
	{
		return *x;
	}
	else
	{
		return *y;
	}
}





