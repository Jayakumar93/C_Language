/*Write a C program to find maximum and minimum element in an array. -recursion*/


#include<stdio.h>
int fun(int[], int);
int main()
{
	int arr[100],i,size;
	printf("Enter size of array:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Elements in the array is:\n");
	for(i=0; i<size; i++)
	{
		printf("%d in the address of %p\n", arr[i],&arr[i]);
	}




