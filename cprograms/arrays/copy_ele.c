/*Write a C program to copy all elements from an array to another array.*/


#include<stdio.h>
void main()
{
	int arr1[50],arr2[50],j,i,size;
	printf("Enter the size of Array:\n");
	scanf("%d",&size);
	printf("Enter the Elements in the Array1:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr1[i]);
		arr2[i]=arr1[i];
	}
	printf("Elements in Original Array\n");
	for(i=0; i<size; i++)
	{
		printf("Array1[%d]=%d at the Address of %p \n",i,arr1[i],&arr1[i]);
	}
	printf("Elements in Copied Array\n");
	for(j=0; j<size; j++)
	{

		printf("Array2[%d]=%d at the Address of %p\n",j,arr2[j],&arr2[j]);

	}
}

	

