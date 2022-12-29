/*Realloc*/



#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size,i,*ptr;
	printf("Enter Memory size:\n");
	scanf("%d", &size);
	ptr=(int*)malloc(size*(sizeof(int)));
	if(ptr==NULL)
	{
		printf("Memory not Allocated\n");
		exit(0);
	}
	printf("Enter the Elements\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &ptr[i]);
	}
	for(i=0; i<size; i++)
	{
		printf("Values are %d & Address is %p\n", *(ptr+i), (ptr+i));
	}
	printf("New Size:\n");
	scanf("%d", &size);
	ptr=realloc(ptr,(size*sizeof(int)));
	if(ptr==NULL)
	{
                printf("Memory not Allocated\n");
                exit(0);
        }
	printf("Enter the Elements\n");
        for(i=0; i<size; i++)
        {
                scanf("%d", &ptr[i]);
        }
        for(i=0; i<size; i++)
        {
                printf("Values are %d & Address is %p\n", *(ptr+i), (ptr+i));
        }
	free(ptr);
}
