/* Swapping using call by value & call by refernce*/



#include<stdio.h>

int swap(int, int);
int main()
{
	int a,b;
	a=10;
	b=20;
	printf("Values before swapping: a=%d & b=%d\n", a,b);
	swap(a,b);
	printf("Values after swapping: a=%d & b=%d\n", a,b);
	//printf("values from x=%d & y=%d\n",); 
	return 0;
}
int swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("Values in x=%d & y=%d\n", x,y);
	return 0;
}

/*
//Call by Reference

#include<stdio.h>
int swap(int*,int*);
int main()
{
	int a,b;
	a=10;
	b=20;
	printf("Values before Swapping: a=%d & b=%d\n", a,b);
	swap(&a,&b);
	printf("Values ater Swapping: a=%d & b=%d\n", a,b);

	return 0;
}
int swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	 return 0;
}*/

