/*Write a C program to insert an element in an array.*/


#include<stdio.h>
void main()
{
	int arr[50],i,size,pos,value;
	printf("Enter the size of Array\n");
	scanf("%d", &size);
	printf("Elements in Array is:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter Position of New Element:\n");
	scanf("%d", &pos);
	printf("Enter the value to be Stored:\n");
	scanf("%d", &value);
	
	for(i=size-1; i>=pos-1; i--)
	{
		arr[i+1]=arr[i];
		arr[pos-1]=value;
		
	}
	printf("Array after inserting the value is:\n");
	for(i=0; i<=size; i++)
	{
		printf("%d\n", arr[i]);
	}

}

