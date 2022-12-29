/*Write a C program to count total number of even and odd elements in an array.*/


#include<stdio.h>
void main()
{
	int arr[50],i,even=0,odd=0,size;
	printf("Enter the size of Array:\n");
	scanf("%d", &size);
	printf("Enter the Elements in the Array:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<size; i++)
	{
		if(arr[i]%2 ==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("No.of Even numbers in the array is:%d\n", even);
	printf("No. of Odd numbers in the Array is:%d\n", odd);
}

