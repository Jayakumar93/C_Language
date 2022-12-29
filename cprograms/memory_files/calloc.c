/*Calloc*/


#include<stdio.h>
#include<stdlib.h>

void main()
{
	int size,i,*ptr;
	printf("Enter the memory allocation size:\n");
	scanf("%d", &size);
	ptr=(int*)calloc(size,(sizeof(int)));
	if(ptr==NULL)
	{
		printf("Memory not Allocated\n");
		exit(0);
	}
	printf("Enter the Elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &ptr[i]);
		//printf("Elements are %d stored in:%p\n", *(ptr+i),(ptr+i));
	}
	for(i=0; i<size; i++)
	{
		printf("Stored values is: %d adress of: %p\n", *(ptr+i),(ptr+i));
	}
	free(ptr);
	/*if(ptr=='0')
	{
		printf("Memory cleared\n");
	}
	else
	{
		printf("Memory not cleared\n");
	}*/

	for(i=0; i<size; i++)
	{
		printf("Values are %d & address is:%p\n", *ptr+i,ptr+i);
	}
}

	

