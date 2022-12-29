/*Write a C program to find second largest element in an array.*/



#include<stdio.h>
void main()
{
	int arr[50],i,size,max1,max2;
	printf("Enter the array size:\n");
	scanf("%d", & size);
	printf("Enter the elements in Array:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<size; i++)
	{
		if(arr[i] >max1)
		{
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i] >max2 && arr[i] < max1)
		{
			max2=arr[i];
			
		}
	}
		printf("First Largest number is: %d\n", max1);
		printf("Second Largest number is: %d\n", max2);
	
}


