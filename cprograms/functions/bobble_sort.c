/* Bobble sort*/

#include<stdio.h>
void sort(int[], int);
void main()
{
	int array[100],i,size;
	printf("Enter the size of Array:\n");
	scanf("%d", &size);
	printf("Enter the Elements in the Array:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("The Bobble Sort of given array is:\n");
	sort(array,size);
}
void sort(int array[], int size)
{
	int i,j,temp;
	for(j=0; j<size; j++)
	{
		for(i=0; i<size-1; i++)
		{
			if(array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	for(i=0; i<size; i++)
	{
		printf("%d\t" ,array[i]);
	}
}

