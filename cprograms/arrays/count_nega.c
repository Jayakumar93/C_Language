/*Write a C program to count total number of negative elements in an array.*/


#include<stdio.h>
void main()
{
	int arr[20],i,size,negative=0;
	printf("Enter the size of Array:\n");
	scanf("%d", &size);
	printf("Enter the Elements in the Array:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<size; i++)
	{
		if(arr[i] < 0)
		{
			negative++;
		}
	}
	printf("Total no. of Negative numbers in the Array is:%d\n", negative);
}

		
