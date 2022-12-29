/*Write a C program to find cube of any number using function.*/

/*
#include<stdio.h>
// Function declaration
void cube(int);
void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d", &num);
	cube(num);  // Function call
//	printf("Cube of %d number is: %d\n", num,result);
}
void cube(int num)
{
	int result;
	result=(num*num*num);
	printf("Cube of %d number is: %d\n", num,result);
}
*/

#include<stdio.h>
int cube(int num);
int main()
{
	int num,result1;
	printf("Enter the number\n");
	scanf("%d",&num);
	result1=cube(num); //Function call
	printf("Cube of %d number is:%d\n", num,result1);
	return 0;
}
int cube(int num)
{
	
	return(num*num*num);
	
}


