/* Malloc*/



#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *ptr,size,i;
	printf("Enter Size of memory required:\n");
	scanf("%d", &size);
	ptr=(int*)malloc(size*(sizeof(int)));
	if(ptr==NULL)
	{
		printf("Memory not allocated\n");
		exit(0);
	}
	printf("Enter the numbers\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",ptr+i);
		
	}

	printf("Numbers are stored:\n");
	for(i=0; i<size; i++)
	{
		printf("The stored numbers:%d address:%p\n", *(ptr+i),&ptr[i]);
	}

	free(ptr);
	for(i=0; i<size; i++)
	{
	printf("%d %p\n",*(ptr+i), &ptr[i]);
	}
}

			
				


